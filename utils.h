#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdbool.h>

typedef enum {INT_TYPE, BOOL_TYPE, MAIN} Type;

typedef struct node {
    char* name;
    int int_value;
    int bool_value;
    Type type;
    struct node* next;
    int posic_pilha;
} Node;

typedef struct {
    int size;
    Node** table;
} HashTable;

extern HashTable* tabH;

HashTable* create_hash_table(int size);
void insert_int(HashTable* tabH, char* name, int value, int posic_pilha);
void insert_bool(HashTable* tabH, char* name, int value, int posic_pilha);
void insert(HashTable* tabH, char* name, int value);
Node* get_int(HashTable* tabH, char* name);
Node* get_bool(HashTable* tabH, char* name);
Node* get_at_posic(HashTable* tabH, int posic);
void set_int(HashTable* tabH, char* name, int new_value);
void set_bool(HashTable* tabH, char* name, bool new_value);
void free_hash_table(HashTable* tabH);
Node* procura(HashTable* tabH, char* name);
void print_hash_table(HashTable* tabH);

#endif
