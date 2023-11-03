#ifndef FLEXSTRUCTURES_H
#define FLEXSTRUCTURES_H

typedef struct define_directive{
    char* to_define;
    char* value;
}define_directive;


extern struct define_directive directives[10000];
extern int defineIndex;

#endif