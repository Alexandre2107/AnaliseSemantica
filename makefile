CC=gcc
CFLAGS=-Wall -Wextra -g

all: compilado

compilado: lex.yy.o y.tab.o utils.o 
	$(CC) $(CFLAGS) -o compilado lex.yy.o y.tab.o utils.o 
	make run

lex.yy.o: lex.yy.c y.tab.h utils.h
	$(CC) $(CFLAGS) -c lex.yy.c

y.tab.o: y.tab.c utils.h
	$(CC) $(CFLAGS) -c y.tab.c

hash_table.o: utils.c utils.h
	$(CC) $(CFLAGS) -c utils.c

lex.yy.c: lexico.l
	flex lexico.l

y.tab.c y.tab.h: sintatico.y
	$(YACC) -d sintatico.y

clean:
	rm -f compilado *.o lex.yy.c y.tab.c y.tab.h

run:
	clear
	./compilado
