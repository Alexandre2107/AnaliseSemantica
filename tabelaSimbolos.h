#ifndef TABELA_SIMBOLOS_H
#define TABELA_SIMBOLOS_H

#define TAM 100

typedef struct {
    char* chave;
    int valor;
} Linha;

typedef struct {
    Linha* linhas[TAM];
} TabelaSimbolos;

TabelaSimbolos* criarTabelaSimbolos();
void inserirSimbolo(TabelaSimbolos* tabela, const char* chave, int valor);
int buscarSimbolo(TabelaSimbolos* tabela, const char* chave);
int buscarSimboloPosicao(TabelaSimbolos* tabela, const char* chave);
void liberarTabelaSimbolos(TabelaSimbolos* tabela);
void imprimirTabelaSimbolos(TabelaSimbolos* tabela);

#endif