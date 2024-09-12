CC=gcc
CFLAGS=-Wall -Wextra -g

all: exec

exec: lex.yy.o y.tab.o tabelaSimbolos.o
	$(CC) $(CFLAGS) -o exec lex.yy.o y.tab.o tabelaSimbolos.o
	make run

lex.yy.o: lex.yy.c y.tab.h tabelaSimbolos.h
	$(CC) $(CFLAGS) -c lex.yy.c

y.tab.o: y.tab.c tabelaSimbolos.h
	$(CC) $(CFLAGS) -c y.tab.c

tabelaSimbolos.o: tabelaSimbolos.c tabelaSimbolos.h
	$(CC) $(CFLAGS) -c tabelaSimbolos.c

lex.yy.c: analisador.l
	flex analisador.l

y.tab.c y.tab.h: decl.y
	$(YACC) -d decl.y

clean:
	rm -f exec *.o lex.yy.c y.tab.c y.tab.h

run:
	clear
	./exec
