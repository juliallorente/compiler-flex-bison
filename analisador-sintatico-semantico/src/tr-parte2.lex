%option noyywrap
%{
#include "helpers.h"
#include "tr-parte2.tab.h"

int numLines = 1;
int numCol = 1;
int numOfTokens = 0;

%}

/* ============ */
/*  DEFINIÇÕES  */
/* ============ */

NUM [0-9]
CHAR [a-zA-Z]
ID {CHAR}({CHAR}|{NUM})*
FLOAT {NUM}+"."{NUM}+
COMPARISONS "<="|"<"|">"|">="|"=="|"!="
SUM "+"|"-"|"||"
MULT "*"|"/"|"&&"
BOOL "true"|"false"|"TRUE"|"FALSE"
TYPES "int"|"float"|"bool"|"void"
KEYWORDS "if"|"else"|"while"|"return"|";"|"["|"]"|"("|")"|"{"|"}"|","|"="|":"|"function"|"procedure"|"printf"|"for"

%%

[\r\n] {
	numLines++;
	numCol = 1;
}

[ \t] {
	numCol++;
}

"//"[^}\n]* {
	// Comentario de uma linha apenas
}

"/*"([^*]|\*+[^*/])*\*+"/" {
	/* Ignorando comentários multi linha */
	for (int i = 0; i < strlen(yytext); i++) {
		if (yytext[i] == '\n') {
			numLines++;
		}
	}
	numCol += strlen(yytext);
}

{COMPARISONS} {
	addToken(&table, yytext, "CompOP", &numOfTokens, &numLines, &numCol);
	if (strcmp(yytext, "<=") == 0) {
		yylval.sval = yytext;
		return T_SMALLER_EQUALS;
	} else if (strcmp(yytext, "<") == 0) {
		yylval.sval = yytext;
		return T_SMALLER;
	} else if (strcmp(yytext, ">") == 0) {
		yylval.sval = yytext;
		return T_GREATER;
	} else if (strcmp(yytext, ">=") == 0) {
		yylval.sval = yytext;
		return T_GREATER_EQUALS;
	} else if (strcmp(yytext, "==") == 0) {
		yylval.sval = yytext;
		return T_EQUALS;
	} else if (strcmp(yytext, "!=") == 0) {
		yylval.sval = yytext;
		return T_DIFFERENT;
	}
}

{MULT} {
	addToken(&table, yytext, "MultOP", &numOfTokens, &numLines, &numCol);

	if (strcmp(yytext, "*") == 0) {
		yylval.cval = yytext[0];
		return T_MULT;
	} else if (strcmp(yytext, "/") == 0) {
		yylval.cval = yytext[0];
		return T_DIV;
	}
}

{SUM} {
	addToken(&table, yytext, "SumOP", &numOfTokens, &numLines, &numCol);
	
	if (strcmp(yytext, "+") == 0) {
		yylval.cval = yytext[0];
		return T_SUM;
	} else 	if (strcmp(yytext, "-") == 0) {
		yylval.cval = yytext[0];
		return T_SUB;
	}
}

{BOOL} {
	addToken(&table, yytext, "Bool", &numOfTokens, &numLines, &numCol);

	if (strcmp(yytext, "true") == 0 || strcmp(yytext, "TRUE") == 0) {
		return T_TRUE;
	} else 	if (strcmp(yytext, "false") == 0 || strcmp(yytext, "FALSE") == 0) {
		return T_FALSE;
	}
}

{TYPES} {
	addToken(&table, yytext, "Type", &numOfTokens, &numLines, &numCol);
	if (strcmp(yytext, "int") == 0) {
		return T_INT_TYPE;
	} else 	if (strcmp(yytext, "float") == 0) {
		return T_FLOAT_TYPE;
	} else 	if (strcmp(yytext, "bool") == 0) {
		return T_BOOL_TYPE;
	}
}

{KEYWORDS} {
	addToken(&table, yytext, "Keyword", &numOfTokens, &numLines, &numCol);

	if (strcmp(yytext, "if") == 0) {
		incrementLabel();
		yylval.ival = labelNum;
		return T_IF;
	} else if (strcmp(yytext, "else") == 0) {
		incrementLabel();
		yylval.ival = labelNum;
		return T_ELSE;
	} else if (strcmp(yytext, "while") == 0) {
		incrementLabel();
		yylval.ival = labelNum;
		return T_WHILE;
	} else if (strcmp(yytext, "return") == 0) {
		yylval.sval = yytext;
		return T_RETURN;
	} else if (strcmp(yytext, ";") == 0) {
		yylval.sval = yytext;
		return T_SEMICOLON;
	} else if (strcmp(yytext, ":") == 0) {
		yylval.sval = yytext;
		return T_COLON;
	} else if (strcmp(yytext, "[") == 0) {
		yylval.sval = yytext;
		return T_OPEN_BRACKETS;
	} else if (strcmp(yytext, "]") == 0) {
		yylval.sval = yytext;
		return T_CLOSE_BRACKETS;
	} else if (strcmp(yytext, "(") == 0) {
		yylval.sval = yytext;
		return T_OPEN_PARENTHESIS;
	} else if (strcmp(yytext, ")") == 0) {
		yylval.sval = yytext;
		return T_CLOSE_PARENTHESIS;
	} else if (strcmp(yytext, "{") == 0) {
		yylval.sval = yytext;
		return T_OPEN_CURLY_BRACKETS;
	} else if (strcmp(yytext, "}") == 0) {
		yylval.sval = yytext;
		return T_CLOSE_CURLY_BRACKETS;
	} else if (strcmp(yytext, ",") == 0) {
		yylval.sval = yytext;
		return T_COMMA;
	} else if (strcmp(yytext, "=") == 0) {
		yylval.sval = yytext;
		return T_ATR;
	} else if (strcmp(yytext, "function") == 0) {
		yylval.sval = yytext;
		return T_FUNCTION;
	} else if (strcmp(yytext, "procedure") == 0) {
		yylval.sval = yytext;
		return T_PROCEDURE;
	} else if (strcmp(yytext, "printf") == 0) {
		yylval.sval = yytext;
		return T_PRINT;
	} else if (strcmp(yytext, "for") == 0) { 
		incrementLabel();
		yylval.ival = labelNum;
		return T_FOR;
	}
}

{NUM}+ {
	addToken(&table, yytext, "Int", &numOfTokens, &numLines, &numCol);
	yylval.ival = atoi(yytext);
	
	return T_INT;
}

{FLOAT}"."({NUM}|{CHAR}|{FLOAT})* {
	pointError(yytext, "lexico", numLines, numCol);
}

{FLOAT} {
	addToken(&table, yytext, "Float", &numOfTokens, &numLines, &numCol);
	yylval.fval = atof(yytext);

	return T_FLOAT;
}

({NUM}|{COMPARISONS}|{FLOAT})({NUM}|{CHAR}|{FLOAT})* {
	pointError(yytext, "lexico", numLines, numCol);
}

{ID} {
	addToken(&table, yytext, "ID", &numOfTokens, &numLines, &numCol);
	yylval.sval = strdup(yytext);

	return T_ID;
}

. {
	pointError(yytext, "lexico", numLines, numCol);
}

%%
