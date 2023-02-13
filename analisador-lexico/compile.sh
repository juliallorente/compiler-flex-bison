#!/bin/sh
clear;
flex --noyywrap tr-parte1.lex;
if [ $? -ne 0 ]
	then
		echo "Error with flex";
else
	gcc lex.yy.c -lfl;
	if [ $? -eq 0 ]
		then
			./a.out $1;
	else
		echo "Error with gcc";
	fi
fi
