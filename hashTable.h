#ifndef HASH_TABLE_H
#define HASH_TABLE_h

#define SIZE 211
#define SHIFT 4

typedef struct node {
    char *id;
    char *type;
    struct node *next;
} *List;

struct SymbolTable {
    List hashTable[SIZE];
    struct SymbolTable *parent;
};

void initSymTab();
void insert(char *id,char*idType);
void printSymTab();
void openScope();
void closeScope();
int lookup(char *id);
int lookupLocal(char *id);
int checkType(char*id);

extern struct SymbolTable *sym;


#endif // SYMTAB_H
