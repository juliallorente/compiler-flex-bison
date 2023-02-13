%{
#include "helpers.h"

int numLines = 1;
int numCol = 1;
int numOfTokens = 0;

Table *table = NULL;
%}

/* ============ */
/*  DEFINIÇÕES  */
/* ============ */

NUM [0-9]
CHAR [a-zA-Z]
ID {CHAR}({CHAR}|{NUM})*
FLOAT {NUM}+"."{NUM}+
COMPARISONS "<="|"<"|">"|">="|"=="|"!="
SUM "+"|"-"
MULT "*"|"/"
BOOL "true"|"false"|"TRUE"|"FALSE"
TYPES "int"|"float"|"bool"|"void"
KEYWORDS "if"|"else"|"while"|"return"|";"|"["|"]"|"("|")"|"{"|"}"|","|"="

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
}

{MULT} {
	addToken(&table, yytext, "MultOP", &numOfTokens, &numLines, &numCol);
}

{SUM} {
	addToken(&table, yytext, "SumOP", &numOfTokens, &numLines, &numCol);
}

{BOOL} {
	addToken(&table, yytext, "Bool", &numOfTokens, &numLines, &numCol);
}

{TYPES} {
	addToken(&table, yytext, "Type", &numOfTokens, &numLines, &numCol);
}

{KEYWORDS} {
	addToken(&table, yytext, "Keyword", &numOfTokens, &numLines, &numCol);
}

{NUM}+ {
	addToken(&table, yytext, "Int", &numOfTokens, &numLines, &numCol);
}

{FLOAT}"."({NUM}|{CHAR}|{FLOAT})* {
	pointError(yytext, "lexico", numLines, numCol);
}

{FLOAT} {
	addToken(&table, yytext, "Float", &numOfTokens, &numLines, &numCol);
}

({NUM}|{COMPARISONS}|{FLOAT})({NUM}|{CHAR}|{FLOAT})* {
	pointError(yytext, "lexico", numLines, numCol);
}

{ID} {
	addToken(&table, yytext, "ID", &numOfTokens, &numLines, &numCol);
}

. {
	pointError(yytext, "lexico", numLines, numCol);
}

%%

int main (int argc, char **argv) {
	++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	yylex();
	printTable(table, numOfTokens);
	printf("Confira o arquivo 'output.txt' para ver o resultado\n\n");
	system("cat output.txt");

	return 0;
}