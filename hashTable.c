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

void insert(char *id,char *idType) {
    int h = hash(id);
    List l = sym->hashTable[h];

    if (l == NULL) {
        // The bucket is empty; create a new node and set it as the first element.
        l = (List)malloc(sizeof(struct node));
        l->id = id;
        l->next = NULL;
        l->type = idType;
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
        l->type = idType;
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
    // + (x10)-> - + (x45)-> - +
    printf("+----------+---------------------------------------------+\n");

    int varLinesNumber = 45;
    for(int i = 0; i<SIZE; i++){
        if(sym->hashTable[i]!=NULL){
            List l = sym->hashTable[i];
            while(l!=NULL){
                printf("| Var Name | %s",l->id);
                if(strlen(l->id) < varLinesNumber){
                    fillSpaces(varLinesNumber - (strlen(l->id) + 1)); // (+2) the beggining space and the +
                }else{
                    printf("\n");
                }
                l = l->next;
            }
        }
    }

    printf("+----------+---------------------------------------------+\n\n");
}

void fillSpaces(int remaining){
    for(int i = 0; i<remaining; i++){
        printf(" ");
    }
    printf("|\n");
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

int checkType(char *id){
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
            if (strcmp(id, l->type) == 0) {
                return 1;
            }
            l = l->next;
        }
    }

    return 0;
}