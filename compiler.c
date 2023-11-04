#include <stdio.h>
#include <string.h>
#include <stdlib.h> //to use system()
#include "flexStructures.h"
#include "bison.tab.h"
#include <stdlib.h>
#include <math.h>
#include "hashTable.h"
#include "stack.h"
#define MAX_HORIZONTAL_CHAR 46
#define MAX_VERTICAL_CHAR 8


typedef struct Input
{
    char * lexeme;
    int tokenType;
} input;


extern int yylex();
extern char* yytext;
extern FILE* yyin;
extern FILE* yyout;
extern int getCount();
extern int newfile(char*fn);
extern int includelex();
extern FILE* includeout;
extern FILE* includein;
extern int defineOnelex();
extern char* defineOnetext;
extern FILE* defineOnein;
extern FILE* replaceDefinesin;
extern FILE* replaceDefinesout;
extern FILE* eliminateDefinesin;
extern FILE* eliminateDefinesout;
extern int eliminateDefineslex();
extern int replaceDefineslex();
extern void  initializeFileArray();
extern int yyparse();
void messageArguments();
extern int yydebug;

struct define_directive directives[10000];
int defineIndex = 0;


input getTokenDefineOne(){
    input tokInfo;
    tokInfo.tokenType = defineOnelex();
    tokInfo.lexeme = defineOnetext;
    return tokInfo;
}

//style 0 Team Style
//style 1 GNU Style
//style 2 BSD Style

int selectedStyle = 0;
int preprocessorFlag = 0;
int replaceFileFlag = 0;
char *fileName;

int main(int argc, char *argv[]) {
    initializeFileArray();

    if(argc > 5){
        printf("Too many arguments in command line\n");
        messageArguments();
        return 1;
    }else if(argc <= 5){
        for(int i = 0;i<argc;i++){
            if(strcmp("-g",argv[i])==0){
                selectedStyle = 1;
            }
            if(strcmp("-b",argv[i])==0){
                selectedStyle = 2;
            }
            if(strcmp("-r",argv[i])==0){
                replaceFileFlag = 1;
            }
            if(strcmp("-p",argv[i])==0){
                preprocessorFlag = 1;
            }
        }
    }

    FILE *in_file  = fopen(argv[1], "r");
    if(in_file == NULL){
        printf("Could not open file!\n");
        printf("Verify that file name is correct and the file is in the current directory\n");
        messageArguments();
        return 1;
    }

    fclose(in_file);

    // if(flagBSDStyle && flagGNUStyle){
    //     printf("Error, can't choose two styles simultaneously.\n");
    //     messageArguments();
    //     return 1;
    // }

    if(preprocessorFlag){
        includeout = fopen("preprocessedFile.c","w");
        if(newfile(argv[1])){
            includelex();
        }else{
            printf("%s\n", "File not found");
        }
        fclose(includeout);
        //Hacer copia de archivo

        defineOnein = fopen("preprocessedFile.c","r");
        input tokenDefineOne = getTokenDefineOne();
        while(tokenDefineOne.tokenType){
            tokenDefineOne = getTokenDefineOne();
        }
        fclose(defineOnein);

        for(int i = 0;i<defineIndex;i++){
            printf("%s, value: %s\n",directives[i].to_define,directives[i].value);
        }

        eliminateDefinesin = fopen("preprocessedFile.c","r");
        eliminateDefinesout = fopen("eliminatedDefines.c","w");
        eliminateDefineslex();
        fclose(eliminateDefinesout);
        fclose(eliminateDefinesin);

        replaceDefinesout = fopen("replacedDefines.c","w");
        for(int i = 0;i<defineIndex;i++){
            replaceDefinesin = fopen("eliminatedDefines.c","r");
            replaceDefineslex();
            fclose(replaceDefinesout);
            fclose(replaceDefinesin);
            replaceDefinesin = fopen("replacedDefines.c","r");
            replaceDefinesout = fopen("eliminatedDefines.c","w");
            char c;
            c = fgetc(replaceDefinesin);
            while (c != EOF)
            {
                fputc(c, replaceDefinesout);
                c = fgetc(replaceDefinesin);
            }
            fclose(replaceDefinesin);
            fclose(replaceDefinesout);
            replaceDefinesout = fopen("replacedDefines.c","w");
        }
        yyin = fopen("eliminatedDefines.c","r");
    }else{
        yyin = fopen(argv[1],"r");
    }

    fileName = strdup(argv[1]);
    char *prettyFileName = strcat(argv[1],".pretty");
    yyout = fopen(prettyFileName,"w");
    yydebug = 0;
    initSymTab();
    createStack();
    if(yyparse()){
        printf("There has been an error\n");
        exit(1);
    }
    fclose(yyout);
    fclose(yyin);

    if(replaceFileFlag){
        FILE* replaceFor = fopen(prettyFileName,"r");
        FILE* replacement = fopen(fileName,"w");
        char c;
        c = fgetc(replaceFor);
        while (c != EOF)
        {
                fputc(c, replacement);
                c = fgetc(replaceFor);
        }
        fclose(replaceFor);
        fclose(replacement);
    }
    return 0;
}


void messageArguments(){
    printf("Command line arguments are:\n");
    printf("-p Activates preprocessing of the file\n");
    printf("-r Replaces source file with generated file\n");
    printf("-g Prettyprint uses GNU style\n");
    printf("-b Prettyprint uses BSD style\n");
    printf("Command line arguments are passed as follows: \n");
    printf("namefile.c -p -r -g|-b\n");
    printf("All of them are optional\n");
    printf("If you don't choose a style for prettyprint it will be the one the team chose\n");
    printf("Good usage example command:\n");
    printf("namefile.c -p -r -g\n");
}