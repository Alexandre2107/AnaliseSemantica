#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "hash_table.h"

HashTable* tabH;
#define PRIME 31

int hash(char* key, int size) {
    int hash_value = 0;
    for (size_t i = 0; i < strlen(key); i++) {
        hash_value = (hash_value * PRIME + key[i]) % size;
    }
    return hash_value;
}

HashTable* create_hash_table(int size) {
    HashTable* tabH = (HashTable*) malloc(sizeof(HashTable));
    tabH->size = size;
    tabH->table = (Node**) calloc(size, sizeof(Node*));
    return tabH;
}

void insert(HashTable* tabH, char* name, int value) {
    int index = hash(name, tabH->size);
    Node* node = tabH->table[index];
    while (node != NULL) {
        if (strcmp(node->name, name) == 0 && node->type == INT_TYPE) {
            node->int_value = value;
            return;
        }
        node = node->next;
    }
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->name = name;
    new_node->int_value = value;
    new_node->type = MAIN;
    new_node->next = tabH->table[index];
    tabH->table[index] = new_node;
}

void insert_int(HashTable* tabH, char* name, int value, int posic_pilha) {
    int index = hash(name, tabH->size);
    Node* node = tabH->table[index];
    while (node != NULL) {
        if (strcmp(node->name, name) == 0 && node->type == INT_TYPE) {
            node->int_value = value;
            node->posic_pilha = posic_pilha;
            return;
        }
        node = node->next;
    }
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->name = name;
    new_node->int_value = value;
    new_node->type = INT_TYPE;
    new_node->posic_pilha = posic_pilha;
    new_node->next = tabH->table[index];
    tabH->table[index] = new_node;
}

void insert_bool(HashTable* tabH, char* name, int value, int posic_pilha) {
    int index = hash(name, tabH->size);
    Node* node = tabH->table[index];
    while (node != NULL) {
        if (strcmp(node->name, name) == 0 && node->type == BOOL_TYPE) {
            node->bool_value = value;
            node->posic_pilha = posic_pilha;
            return;
        }
        node = node->next;
    }
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->name = name;
    new_node->bool_value = value;
    new_node->type = BOOL_TYPE;
    new_node->posic_pilha = posic_pilha;
    new_node->next = tabH->table[index];
    tabH->table[index] = new_node;
}

Node* get_int(HashTable* tabH, char* name) {
    int index = hash(name, tabH->size);
    Node* node = tabH->table[index];
    while (node != NULL) {
        if (strcmp(node->name, name) == 0 && node->type == INT_TYPE) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

Node* get_bool(HashTable* tabH, char* name) {
    int index = hash(name, tabH->size);
    Node* node = tabH->table[index];
    while (node != NULL) {
        if (strcmp(node->name, name) == 0 && node->type == BOOL_TYPE) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

Node* get_at_posic(HashTable* tabH, int posic) {
    for (int i = 0; i < tabH->size; i++) {
        Node* node = tabH->table[i];
        while (node != NULL) {
            if (node->posic_pilha == posic) {
                return node;
            }
            node = node->next;
        }
    }
    return NULL;
}

void set_int(HashTable* tabH, char* name, int new_value) {
    int index = hash(name, tabH->size);
    Node* node = tabH->table[index];
    while (node != NULL) {
        if (strcmp(node->name, name) == 0 && node->type == INT_TYPE) {
            node->int_value = new_value;
            return;
        }
        node = node->next;
    }
}

void set_bool(HashTable* tabH, char* name, bool value) {
    int index = hash(name, tabH->size);
    Node* node = tabH->table[index];
    while (node != NULL) {
        if (strcmp(node->name, name) == 0 && node->type == BOOL_TYPE) {
            node->bool_value = value;
            return;
        }
        node = node->next;
    }
}

Node* procura(HashTable* tabH, char* name) {
    int index = hash(name, tabH->size);
    Node* node = tabH->table[index];
    while (node != NULL) {
        if (strcmp(node->name, name) == 0) {
            return node;
        }
        node = node->next;
    }
    return NULL;
}

void print_hash_table(HashTable* tabH) {
    printf("\nTabela dos Símbolos\n");
    printf("+------------+-------------------+------------+------------+\n");
    printf("|    Nome    | Posição na Pilha  |    Tipo    |    Valor   |\n");
    printf("+------------+-------------------+------------+------------+\n");

    for (int i = 0; i < tabH->size; i++) {
        Node* node = tabH->table[i];
        while (node != NULL) {
            printf("| %-10s | %-18d |", node->name, node->posic_pilha);
            if (node->type == INT_TYPE) {
                printf(" %-10s | %-10d |\n", "inteiro", node->int_value);
            } else if (node->type == BOOL_TYPE) {
                printf(" %-10s | %-10s |\n", "logico", node->bool_value ? "true" : "false");
            } else {
                printf(" %-10s | %-10s |\n", "-", "-");
            }
            printf("+------------+-------------------+------------+------------+\n");
            node = node->next;
        }
    }
}

void free_hash_table(HashTable* tabH) {
    for (int i = 0; i < tabH->size; i++) {
        Node* node = tabH->table[i];
        while (node != NULL) {
            Node* temp = node;
            node = node->next;
            free(temp);
        }
    }
    free(tabH->table);
    free(tabH);
}
