%{

#include "helpers.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

enum types {INT_T = 1, FLOAT_T = 2, BOOL_T = 3};

%}

%union {
	int ival;
	float fval;
	char cval;
	char* sval;
	struct {
		int type;
		char* id;
	} typeAndId;
	Type symboltypeval;
}

/* Declaração dos tokens... */

%token<ival> T_INT T_BOOL T_TRUE T_FALSE
%token<sval> T_INT_TYPE T_BOOL_TYPE T_FLOAT_TYPE
%token<fval> T_FLOAT
%token<sval> T_SMALLER_EQUALS T_SMALLER T_GREATER T_GREATER_EQUALS T_EQUALS T_DIFFERENT T_PRINT
%token<cval> T_SUM T_SUB T_MULT T_DIV
%token<sval> T_ID
%token<cval> T_SEMICOLON

%token T_OPEN_BRACKETS T_CLOSE_BRACKETS
%token T_OPEN_CURLY_BRACKETS T_CLOSE_CURLY_BRACKETS
%token T_OPEN_PARENTHESIS T_CLOSE_PARENTHESIS
%token T_COLON
%token<ival> T_IF T_ELSE
%token<ival> T_WHILE T_FOR
%token T_RETURN
%token T_COMMA
%token T_ATR
%token <sval> T_FUNCTION T_PROCEDURE

%left T_SUM T_SUB
%left T_MULT T_DIV

%type<sval> relacional var var_declaracao ativacao arg_lista args
%type<cval> soma mult
%type<ival> tipo_especificador selecao iteracao_decl iteracao_tipo while for
%type<typeAndId> tipo_especificador_novo
%type<symboltypeval> expressao termo simples_expressao soma_expressao fator atribuicao retorno_decl

%start programa

%%
programa:	{ initiateProgram(); } declaracao_lista { finishProgram(); }
	;

declaracao_lista:	declaracao_lista declaracao
	|		declaracao
	;

declaracao:		var_declaracao
	|		fun_declaracao
	;

var_declaracao:		tipo_especificador_novo T_SEMICOLON {
		$1.id[strlen($1.id)] = '\0';
		if ($1.type == INT_T || $1.type == BOOL_T) {
			if (isError(initializeVariableOnCode(table, $1.id, 'i'))) {
				printError(table, $1.id, INT_VAR_EXISTS);
				return 0;
			}
		} else if ($1.type == FLOAT_T) {
			if (isError(initializeVariableOnCode(table, $1.id, 'f'))) {
				printError(table, $1.id, FLOAT_VAR_EXISTS);
				return 0;
			}
		}
	}
	|		tipo_especificador_novo T_OPEN_BRACKETS T_INT T_CLOSE_BRACKETS T_SEMICOLON {
		int wArr = writeArray($3, $1.id, $1.type);
		if (isError(wArr)) {
			printError(table, $1.id, ARRAY_ALREADY_EXISTS);
			return 0;
		} else if (wArr == -2) {
			printError(table, $1.id, ARRAY_INVALID_TYPE);
			return 0;
		}
	}
	;

tipo_especificador_novo: tipo_especificador T_ID {
		$$.type = $1;
		$$.id = strdup($2);
	}
	;

tipo_especificador:	T_INT_TYPE { $$ = INT_T; }
	|				T_FLOAT_TYPE { $$ = FLOAT_T; }
	|				T_BOOL_TYPE { $$ = BOOL_T; }
	;

fun_declaracao:		fun
	|		procedure
	;

fun: T_FUNCTION T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS T_COLON tipo_especificador composto_decl { changeTokenOnRow(table, $2, "function"); }
	;

procedure: T_PROCEDURE T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS composto_decl_proc { changeTokenOnRow(table, $2, "procedure"); }
	;

params:
		| param_lista	
	;

param_lista:	param_lista T_COMMA param
	|			param
	;

param:		T_ID T_COLON tipo_especificador
	|		T_ID T_COLON tipo_especificador T_OPEN_BRACKETS T_CLOSE_BRACKETS
	;

composto_decl:		T_OPEN_CURLY_BRACKETS local_declaracoes statement_lista T_CLOSE_CURLY_BRACKETS
	;

composto_decl_proc:		T_OPEN_CURLY_BRACKETS local_declaracoes statement_lista_proc T_CLOSE_CURLY_BRACKETS
	;

local_declaracoes:	local_declaracoes var_declaracao
	|
	;

statement_lista:	statement_lista statement
	|
	;

statement:	expressao_decl
	|		composto_decl
	|		selecao_decl
	|		iteracao_decl
	|		retorno_decl
	|		print_decl
	;

statement_lista_proc:	statement_lista statement_proc
	|
	;

statement_proc:	expressao_decl
	|		composto_decl
	|		selecao_decl
	|		iteracao_decl
	|		print_decl
	;


expressao_decl:		expressao T_SEMICOLON
	|				T_SEMICOLON
	;

selecao_decl:	selecao { writeFullLabelOnCode($1);}
	|			selecao T_ELSE { 
		writeGoToOnCode($2); writeLabel($2); writeFullLabelOnCode($1);					
	} statement { writeFullLabelOnCode($2); }
	;

selecao: T_IF T_OPEN_PARENTHESIS expressao { writeLabel($1); } T_CLOSE_PARENTHESIS { 
		writeGoToOnCode($3); writeLabel($3); writeFullLabelOnCode($1);
	} statement { $$ = $3; }
	;

iteracao_decl:	iteracao_tipo 
	;

iteracao_tipo: while
	| for
	;

while: T_WHILE { writeFullLabelOnCode($1); } T_OPEN_PARENTHESIS expressao { writeLabel(labelNum); writeGoToOnCode(labelNum); writeLabel(++labelNum); writeFullLabelOnCode(labelNum - 1); } T_CLOSE_PARENTHESIS statement { writeGoToOnCode($1); writeLabel($1); writeFullLabelOnCode(labelNum); }
	;

for: T_FOR T_OPEN_PARENTHESIS { writeFullLabelOnCode($1); } atribuicao T_SEMICOLON { writeFullLabelOnCode(++labelNum); } expressao { writeLabel(labelNum); writeGoToOnCode(labelNum); writeLabel(++labelNum); writeFullLabelOnCode(labelNum - 1); } T_SEMICOLON atribuicao T_CLOSE_PARENTHESIS statement { writeGoToOnCode($1 + 1); writeLabel($1 + 1); writeFullLabelOnCode(labelNum); }
	;

atribuicao: var T_ATR expressao {
		int type = getVarType(table, $1);
		if (type == INT_T) {
			if (isError(pushIntToVariableOnCode(table, $1))) {
				printError(table, $1, INT_VAR_UNINITIALIZED);
				return 0;
			}
		} else if (type == FLOAT_T) {
			if (isError(pushFloatToVariableOnCode(table, $1))) {
				printError(table, $1, FLOAT_VAR_UNINITIALIZED);
				return 0;
			}
		}
		$$ = $3;
	};

retorno_decl:	T_RETURN T_SEMICOLON {}
	|			T_RETURN expressao T_SEMICOLON { $$ = $2; }
	;

print_decl: T_PRINT T_OPEN_PARENTHESIS simples_expressao T_CLOSE_PARENTHESIS T_SEMICOLON {
		writePrintOnCode('i');
	}
	;

expressao:	var T_ATR expressao {
		int type = getVarType(table, $1);
		if (type == INT_T) {
			if (isError(pushIntToVariableOnCode(table, $1))) {
				printError(table, $1, INT_VAR_UNINITIALIZED);
				return 0;
			}
		} else if (type == FLOAT_T) {
			if (isError(pushFloatToVariableOnCode(table, $1))) {
				printError(table, $1, FLOAT_VAR_UNINITIALIZED);
				return 0;
			}
		} else {
			printError(table, $1, VAR_UNINITIALIZED);
			return 0;
		}
		$$ = $3;
	}
	|		simples_expressao { $$ = $1; }
	;

var:	T_ID { $$ = strdup($1); }
	|	T_ID T_OPEN_BRACKETS expressao T_CLOSE_BRACKETS
	;

simples_expressao:	soma_expressao relacional soma_expressao {
		$$ = writeRelationalOpOnCode($2, "i");
	}
	|				soma_expressao{ $$ = $1; }
	;

relacional:		T_SMALLER_EQUALS { $$ = strdup($1); }
	|			T_SMALLER { $$ = strdup($1); }
	|			T_GREATER { $$ = strdup($1); }
	|			T_GREATER_EQUALS { $$ = strdup($1); }
	|			T_EQUALS { $$ = strdup($1); }
	|			T_DIFFERENT { $$ = strdup($1); }
	;

soma_expressao:		soma_expressao soma termo {
		if (ceil($1) == $1 && ceil($3) == $3) {
			writeOpOnCode($2, 'i');
		} else {
			writeOpOnCode($2, 'f');
		}
		$$ = $1;
	}
	|	termo { $$ = $1; }
	;

soma:	T_SUM { $$ = $1; }
	|	T_SUB { $$ = $1; }
	;

termo:		termo mult fator {
		if (ceil($1) == $1 && ceil($3) == $3) {
			writeOpOnCode($2, 'i');
		} else {
			writeOpOnCode($2, 'f');
		}
		$$ = $1;
	}
	|		fator { $$ = $1; }
	;
	
mult:		T_MULT { $$ = $1; }
	|		T_DIV { $$ = $1; }
	;

fator:		T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS { $$ = $2; }
	|		var {
		if (isError(loadVariable(table, $1))) {
			printError(table, $1, LOAD_UNINITIALIZED_VAR);
			return 0;
		}
	}
	|		ativacao 
	|		T_INT  { writeIntOnCode($1); $$ = $1; }
	|		T_FLOAT  { writeFloatOnCode($1); $$ = $1; }
	;

ativacao:	T_ID T_OPEN_PARENTHESIS args T_CLOSE_PARENTHESIS { 
		Row* token = getToken(table, $1);
		if (strcmp(token->token, "function") == 0) {
			$$ = $3;
		} else if (strcmp(token->token, "procedure") == 0) {
			printError(table, $1, RETURN_OF_PROC);
			return 0;
		} else {
			printError(table, $1, NOT_A_FUNC);
			return 0;
		}
	}
	;

args:		arg_lista { $$ = $1; }
	|
	;

arg_lista:	arg_lista T_COMMA expressao
	|		expressao
	;

%%

int main(int argc, char **argv) {
    ++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	do {
		yyparse();

	} while(!feof(yyin));
	
	return 0;
}

void yyerror (char const *s) {
   fprintf (stderr, "Syntax Error\n");
}
