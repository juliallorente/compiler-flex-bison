#ifndef __HELPERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Coord {
	int line;
	int col;
	struct Coord *next;
} Coord;

typedef struct Row {
	char *lexema;
	char *token;
	struct Coord *coords;
	struct Row *next;
} Row;

typedef struct Table {
	struct Row *first;
	struct Row *last;
} Table;

Table* newTable() {
	Table *table = (Table *)malloc(sizeof(Table));
	table->first = NULL;
	table->last = NULL;

	return table;
}

void addToken(Table **table, char *lexema, char* tokenType, int *numOfTokens, int *numLine, int *numCol) {
	// Primeiro lexema lido da fita (arquivo)
	if (*table == NULL) {
		(*numOfTokens) += 1;
		*table = newTable();

		(*table)->first = (Row*) malloc(sizeof(Row));

		(*table)->first->lexema = (char*) malloc((sizeof(char) * strlen(lexema)));
		strcpy((*table)->first->lexema, lexema);

		(*table)->first->token = (char*) malloc(sizeof(char) * strlen(tokenType));
		strcpy((*table)->first->token, tokenType);


		(*table)->first->coords = (Coord*) malloc(sizeof(Coord));
		(*table)->first->coords->line = *numLine;
		(*table)->first->coords->col = *numCol;
		(*table)->first->coords->next = NULL;

		(*table)->first->next = NULL;

		(*table)->last = (*table)->first;
	} else {
		// Demais tokens da fita
		Row *tempRow = (*table)->first;
		Row *auxRow = NULL;

		// Laço para percorrer tokens presentes na tabela
		while (tempRow != NULL) {
			// Row *auxRow recebe ponteiro do lexema da tabela caso lexema já existente
			if (strcmp(tempRow->lexema, lexema) == 0) {
				auxRow = (Row*) malloc(sizeof(Row));
				auxRow = tempRow;
				break;
			// Novo lexema
			// Row *auxToken permanece NULL
			} else {
				tempRow = (Row*) tempRow->next;
			}
		}

		if (auxRow == NULL) {
			(*numOfTokens) += 1;
			Row *nextToken;
			nextToken = (Row*) malloc(sizeof(Row));

			nextToken->lexema = (char*) malloc((sizeof(char) * strlen(lexema)));
			strcpy(nextToken->lexema, lexema);

			nextToken->token = (char*) malloc(sizeof(char) * strlen(tokenType));
			strcpy(nextToken->token, tokenType);


			nextToken->coords = (Coord*) malloc(sizeof(Coord));
			nextToken->coords->line = *numLine;

			nextToken->coords->col = *numCol;
			nextToken->coords->next = NULL;

			nextToken->next = NULL;

			(*table)->last->next = nextToken;

			(*table)->last = nextToken;
		} else {
			Coord* newCoord = (Coord*) malloc(sizeof(Coord));
			newCoord->line = *numLine;
			newCoord->col = *numCol;
			newCoord->next = auxRow->coords;

			auxRow->coords = newCoord;
		}
	}
	*numCol += strlen(lexema);
}

void pointError(char* lexema, char* typeErr, int numLine, int numCol) {
	printf("Erro %s em linha %d, coluna %d: %s\n", typeErr, numLine, numCol, lexema);
}

void printTable(Table *table, int tableSize) {
	Row *auxRow;
	auxRow = (Row*)malloc(sizeof(Row));

	auxRow = table->first;
	FILE *fptr;
	fptr = fopen("output.txt", "w+");
	fprintf(fptr, "**************************************\n");
	fprintf(fptr, "          TABELA DE SIMBOLOS          \n");
	fprintf(fptr, "**************************************\n\n");

	fprintf(fptr, "LEXEMA\t\tTOKEN\t\tPOSICAO\n");
	for (int i = 0; i < tableSize; i++) {
		fprintf(fptr, "%s\t\t%s\t\t", auxRow->lexema, auxRow->token);
		Coord* tempCoord = auxRow->coords;
		while (tempCoord != NULL) {
			if (tempCoord->next == NULL) {
				fprintf(fptr, "(%d, %d)\n", tempCoord->line, tempCoord->col);
			} else {
				fprintf(fptr, "(%d, %d), ", tempCoord->line, tempCoord->col);
			}
			tempCoord = tempCoord->next;
		}
		auxRow = auxRow->next;
	}
	fprintf(fptr, "\n***************************************\n");
	fclose(fptr);
}

#endif