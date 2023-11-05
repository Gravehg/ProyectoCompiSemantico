#ifndef STRUCTDEFTABLE_H
#define STRUCTDEFTABLE_H

struct stList{
    struct stRec* l;
};

struct stRec{
    char *name;
    struct stRec* next;
};


void initStList();
void insertStList(char *id);
int lookupStList(char *id);
void printStList();
extern struct stList *stDefList;


#endif
