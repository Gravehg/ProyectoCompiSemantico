#ifndef STACK_H
#define STACK_H

struct Stack {
    int size;
    struct Node* top;
};

struct Node {
    struct Data* element;
    struct Node* next;
};

struct Data {
    char* objectType;
    char* text;   
};

void createStack();
struct Node* createNode(struct Data* data);
struct Data* createData(char* type, char* txt);
void push(struct Data* data);
struct Node* retrieve(char* type);
struct Data* pop();
void popElementsByType(struct Node* retrievedNode);
void printStack();

extern struct Stack *stack;


#endif