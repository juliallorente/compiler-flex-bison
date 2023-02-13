all:
	@cd src; flex tr-parte2.lex; bison -d --warning=none tr-parte2.y;
	@gcc src/tr-parte2.tab.c src/lex.yy.c src/helpers.c -lm;
	@./a.out input/input.txt;

rfm:
	@java -jar ./jasmin-2.4/jasmin.jar output/output.j;
	@java test
	@rm -f test.class	
