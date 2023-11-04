#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack *stack = NULL;

void createStack(){
    stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
}

struct Node* createNode(struct Data* data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->element = data;
    newNode->next = NULL;
    return newNode;
}

struct Data* createData(char* type, char* txt){
    struct Data* newData = (struct Data*)malloc(sizeof(struct Data));
    newData->objectType = type;
    newData->text = txt;
    return newData;
}

void push(struct Data* data){
    struct Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
    stack->size++;
}

struct Node* retrieve(char* type) {
    struct Node* temp = stack->top;
    while (temp != NULL) {
        if (strcmp(temp->element->objectType, type) == 0) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL; // No se encontró el tipo especificado
}

struct Data* pop(){
    if(stack->top == NULL){
        printf("The semantic stack is empty");
        return NULL;
    }
    struct Node* firstNode = stack->top;
    struct Data* firstNodeData = firstNode->element;
    stack->top = firstNode->next;
    free(firstNode);
    stack->size--;
    return firstNodeData;
}

void popElementsByType(struct Node* retrievedNode){
    printf("All next elements are type: %s\n", retrievedNode->element->text);
    while(!strcmp(stack->top->element->objectType, "type")==0){
        struct Data* poppedData = pop(stack);
        printf("%s: %s\n",poppedData->objectType, poppedData->text);
    }
    printf("the actual size is: %d\n", stack->size);
    printf("\n");
}

