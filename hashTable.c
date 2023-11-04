#include "hashTable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SymbolTable *sym = NULL;


static int hash(char *key){
    int temp = 0;
    int i = 0;
    while(key[i]!='\0'){
        temp  =((temp<< SHIFT) + key[i]) % SIZE;
        i++;
    }
    return temp;
}

void insert(char *id) {
    int h = hash(id);
    List l = sym->hashTable[h];

    if (l == NULL) {
        // The bucket is empty; create a new node and set it as the first element.
        l = (List)malloc(sizeof(struct node));
        l->id = id;
        l->next = NULL;
        sym->hashTable[h] = l;
    } else {
        if (strcmp(id, l->id) == 0) {
            printf("Already in table\n");
            return;
        }

        while (l->next != NULL) {
            if (strcmp(id, l->next->id) == 0) {
                printf("Already in table\n");
                return;
            }
            l = l->next;
        }

        // The id is not in the list; add it to the end.
        l->next = (List)malloc(sizeof(struct node));
        l->next->id = id;
        l->next->next = NULL;
    }
}

void initSymTab(){
    sym = (struct SymbolTable*)malloc(sizeof(struct SymbolTable));
    for (int i = 0; i < SIZE; i++) {
        sym->hashTable[i] = NULL;
    }

    sym->parent = NULL;
}

void printSymTab(){
    for(int i = 0; i<SIZE; i++){
        if(sym->hashTable[i]!=NULL){
            List l = sym->hashTable[i];
            while(l!=NULL){
                printf("Variable name is: %s\n",l->id);
                l = l->next;
            }
        }
    }
}

void openScope(){
    struct SymbolTable *newSym = (struct SymbolTable*)malloc(sizeof(struct SymbolTable));
    newSym->parent = sym;
    sym = newSym;
     for (int i = 0; i < SIZE; i++) {
        sym->hashTable[i] = NULL;
    }
}

void closeScope(){
    if(sym->parent!=NULL){
        struct SymbolTable *oldScope = sym;
        sym = sym->parent;
        free(oldScope);
    }
}

int lookup(char *id){
    int h = hash(id);
    List l = sym->hashTable[h];
    while(l != NULL){
        if(strcmp(id,l->id) == 0) return 1;
        l = l->next;
    }

    struct SymbolTable* currentScope = sym;
    while (currentScope->parent != NULL) {
        currentScope = currentScope->parent;
        l = currentScope->hashTable[h];
        while (l != NULL) {
            if (strcmp(id, l->id) == 0) {
                return 1;
            }
            l = l->next;
        }
    }

    return 0;
}

//CHECK ONLY CURRENT SCOPE
int lookupLocal(char *id){
    int h = hash(id);
    List l = sym->hashTable[h];
    while(l != NULL){
        if(strcmp(id,l->id) == 0) return 1;
        l = l->next;
    }
    return 0;
}