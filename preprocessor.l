%option noyywrap
%option prefix="include"
%option outfile="include.c"
%x INCLUDE
%x COMMENT
%x ONELINECOMMENT

%{
    #include<stdio.h>
    #include<string.h>
    char includedFiles[100][256];
    int arrayIndex = 0;
    struct bufstack {
        struct bufstack *prev;
        YY_BUFFER_STATE bs;
        int lineno;
        char *filename;
        FILE *f;
    } *curbs = 0;

    char *curfilename;
    int newfile(char *fn);
    int popfile(void);
    void initializeFileArray();
    int alreadyProcessedFile(char*filename);
%}

%%

^"/*" {BEGIN COMMENT;}
^"//" {BEGIN ONELINECOMMENT;}

<COMMENT>[^*\n]* /* eat anything that's not a '*' */
<COMMENT>"*"+[^*/\n]* /* eat up '*'s not followed by '/'s */
<COMMENT>"*"+"/" BEGIN(INITIAL);

<ONELINECOMMENT>[^*\n]* /* eat anything that's not a '*' */
<ONELINECOMMENT>"*"+[^*/\n]* /* eat up '*'s not followed by '/'s */
<ONELINECOMMENT>\n BEGIN(INITIAL);


^#[\t ]*include[\t ]*[\"\<] {BEGIN INCLUDE;}

<INCLUDE>[^\t\n\"\>]+  {
                        {
                            int c;
                            while ((c = input()) != '\n' && c != EOF && c!='\"' && c!='>');
                        }
                        yylineno++;
                        fprintf(yyout,"\n");
                        if(!alreadyProcessedFile(yytext)){
                             newfile(yytext);
                        }
                        BEGIN INITIAL;
                      }

<INCLUDE>.|\n         {fprintf(stderr,"%4d bad include line:\n",yylineno);
                     }

<<EOF>>              {if(!popfile()){ 
                            printf("Terminated includes\n");
                            yyterminate();
                        }
                     }

^.                   {fprintf(yyout,"%s",yytext);}

^\n                  {fprintf(yyout,"%s",yytext);}

\n                   {fprintf(yyout,"%s",yytext);}

.                    {fprintf(yyout,"%s",yytext);}

%%

int newfile(char*fn){
    FILE *f = fopen(fn,"r");
    if(f==NULL){
        char *firstInclude = (char *)malloc(150);
        strcpy(firstInclude, "/usr/include/rpc/");
        strcat(firstInclude,fn);
        f = fopen(firstInclude,"r");
        printf("%s\n",firstInclude);
        if(f==NULL){
            char *secondInclude = (char *)malloc(150);
            strcpy(secondInclude,"/usr/lib/gcc/x86_64-linux-gnu/11/include/");
            strcat(secondInclude,fn);
            f = fopen(secondInclude,"r");
            printf("%s\n",secondInclude);
            if(f==NULL){
                char *thirdInclude = (char *)malloc(150);
                strcpy(thirdInclude,"/usr/local/include/");
                strcat(thirdInclude,fn);
                f = fopen(thirdInclude,"r");
                printf("%s\n",thirdInclude);
                if(f==NULL){
                    char *fourthInclude = (char *)malloc(150);
                    strcpy(fourthInclude, "/usr/include/x86_64-linux-gnu/");
                    strcat(fourthInclude,fn);
                    f = fopen(fourthInclude,"r");
                    printf("%s\n",fourthInclude);
                    if(f==NULL){
                        char *fifthInclude = (char *)malloc(150);
                        strcpy(fifthInclude, "/usr/include/");
                        strcat(fifthInclude,fn);
                        f = fopen(fifthInclude,"r");
                        printf("%s\n",fifthInclude);
                    }
                }
            }
        }
    }
    struct bufstack *bs = malloc(sizeof(struct bufstack));

    if(!f) {perror(fn);return 0;}
    if(!bs) {perror("malloc");exit(1);}

    if(curbs) curbs->lineno = yylineno;
    bs->prev = curbs;

    bs->bs = yy_create_buffer(f,YY_BUF_SIZE);
    bs->f = f;
    bs->filename = fn;
    yy_switch_to_buffer(bs->bs);
    curbs = bs;
    yylineno = 1;
    curfilename = fn;
    return 1;
}

int popfile(void){
    struct bufstack *bs = curbs;
    struct bufstack *prevbs;

    if(!bs) return 0;
    fclose(bs->f);
    yy_delete_buffer(bs->bs);

    prevbs = bs->prev;
    free(bs);

    if(!prevbs) return 0;

    yy_switch_to_buffer(prevbs->bs);
    curbs = prevbs;
    yylineno = curbs->lineno;
    curfilename = curbs->filename;
    return 1;
}

void initializeFileArray(){
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 256; j++) {
            includedFiles[i][j] = '\0';
        }
    }
}

int alreadyProcessedFile(char* filename){
    for(int i = 0;i<100;i++){
        if(strcmp(includedFiles[i],filename)==0){
            return 1;
        }
    }
    strcpy(includedFiles[arrayIndex++],filename);
    return 0;
}