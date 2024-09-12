#include "tabelaSimbolos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função de hash simples para converter uma string em um índice na tabela
unsigned int hash(const char* chave) {
    unsigned int hash = 0;
    int i;
    for (i = 0; chave[i] != '\0'; i++) {
        hash = 31 * hash + chave[i];
    }
    return hash % TAM;
}

// Função para inicializar a tabela de símbolos
TabelaSimbolos* criarTabelaSimbolos() {
    TabelaSimbolos* tabela = malloc(sizeof(TabelaSimbolos));
    memset(tabela->linhas, 0, sizeof(tabela->linhas));
    return tabela;
}

// Função para inserir um novo símbolo na tabela
void inserirSimbolo(TabelaSimbolos* tabela, const char* chave, int valor) {
    unsigned int indice = hash(chave);
    Linha* linha = malloc(sizeof(Linha));
    linha->chave = strdup(chave); // Cria uma cópia da chave para armazenar na linha
    linha->valor = valor;
    tabela->linhas[indice] = linha;
}

// Função para buscar o valor de um símbolo na tabela
int buscarSimbolo(TabelaSimbolos* tabela, const char* chave) {
    unsigned int indice = hash(chave);
    Linha* linha = tabela->linhas[indice];
    if (linha != NULL && strcmp(linha->chave, chave) == 0) {
        return linha->valor;
    }
    return -1; // Valor de retorno para indicar que o símbolo não foi encontrado
}

// Função para liberar a memória ocupada pela tabela de símbolos
void liberarTabelaSimbolos(TabelaSimbolos* tabela) {
    int i;
    for (i = 0; i < TAM; i++) {
        Linha* linha = tabela->linhas[i];
        if (linha != NULL) {
            free(linha->chave);
            free(linha);
        }
    }
    free(tabela);
}

/*int main() {
    TabelaSimbolos* tabela = criarTabelaSimbolos();

    // Inserir símbolos na tabela
    inserirSimbolo(tabela, "a", 1);
    inserirSimbolo(tabela, "b", 2);
    inserirSimbolo(tabela, "c", 3);

    // Procurar símbolos na tabela
    printf("Valor de 'a': %d\n", buscarSimbolo(tabela, "a"));
    printf("Valor de 'b': %d\n", buscarSimbolo(tabela, "b"));
    printf("Valor de 'c': %d\n", buscarSimbolo(tabela, "c"));
    printf("Valor de 'd': %d\n", buscarSimbolo(tabela, "d")); // Símbolo não encontrado

    // Liberar a memória ocupada pela tabela de símbolos
    liberarTabelaSimbolos(tabela);

    return 0;
}*/