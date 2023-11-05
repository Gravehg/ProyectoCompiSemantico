#include "structDefTable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stList *stDefList = NULL;

void initStList(){
    stDefList = (struct stList*)(malloc(sizeof(struct stList)));
    stDefList->l = NULL;
}

void insertStList(char *id){
    struct stRec* rs = stDefList->l;
    if(rs==NULL){
         rs = (struct stRec*)(malloc(sizeof(struct stRec)));
         rs->name = id;
         rs->next = NULL;
         stDefList->l = rs;
    }else{
        while(rs->next!=NULL){
            rs = rs->next;
        }
        rs->name = id;
        rs->next = (struct stRec*)(malloc(sizeof(struct stRec)));
        rs->next->next = NULL;
    }
}

int lookupStList(char* id){
    struct stRec *node = stDefList->l;
    while(node->next!=NULL){
        if(strcmp(node->name,id)==0){
            return 1;
        }
        node = node->next;
    }
    return 0;
}

void printStList(){
     if (stDefList->l == NULL) {
        printf("St list is empty.\n");
        return;
    }

    struct stRec* currentNode = stDefList->l;
    printf("St list Stack:\n");
    while (currentNode != NULL) {
        printf("Structure name: %s\n",currentNode->name);
        currentNode = currentNode->next;
    }
    printf("\n");
}