%option noyywrap
%option prefix="defineOne"
%option outfile="defineOne.c"
%x DEFINEONE
%x DEFINETWO
%{
    #include "flexStructures.h"
    #include <stdlib.h>
    #include <string.h>
    #include <stdio.h>
    #define DEF 1;
%}

%%

#[\t ]*if(.*?)#[\t ]*endif

^#[\t ]*define[\t ]*[a-zA-Z0-9_]+"(".*\n

^#[\t ]*define[\t ]* {BEGIN DEFINEONE;}

<DEFINEONE>[_a-zA-Z0-9_]+ {
                        struct define_directive d;
                        d.to_define = strdup(yytext);
                        directives[defineIndex] = d;
                      }

<DEFINEONE>[\t ]* {
                    BEGIN DEFINETWO;
                 }

<DEFINETWO>[^\n]* {
              directives[defineIndex].value = strdup(yytext);
              defineIndex++;
              return DEF;
           }

<DEFINETWO>[\n]+ {
                        BEGIN INITIAL;
                 }

<<EOF>>              {yyterminate();}

^.                 

^\n                 

\n                  

.                 

%%