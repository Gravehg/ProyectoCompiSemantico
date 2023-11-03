%option noyywrap
%option prefix="replaceDefines"
%option outfile="replaceDefines.c"
%{
    #include "flexStructures.h"
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    int isDefined(char*text);
%}

%%

[a-zA-Z_][a-zA-Z0-9_]* {
                            if(isDefined(yytext)){
                                for(int i =0;i<defineIndex;i++){
                                    if(strcmp(directives[i].to_define,yytext)==0){
                                        fprintf(yyout,"%s",directives[i].value);
                                        break;
                                    }                   
                                }
                            }else{
                                ECHO;
                            }
                       }

^.                  {ECHO;}

^\n                 {ECHO;}

\n                  {ECHO;}

.                   {ECHO;}

%%

int isDefined(char*text){
    for(int i =0;i<defineIndex;i++){
        if(strcmp(directives[i].to_define,text)==0){
            return 1;
        }                   
    }
    return 0;
}