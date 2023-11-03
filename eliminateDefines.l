%option noyywrap
%option prefix="eliminateDefines"
%option outfile="eliminateDefines.c"
%x MULTILINE_DIRECTIVE
%x IF_DIRECTIVE
%{
  #include <stdio.h>
%}

%%

^#.*\\\n   {BEGIN MULTILINE_DIRECTIVE;}

<MULTILINE_DIRECTIVE>.*\\\n

<MULTILINE_DIRECTIVE>.*\n BEGIN INITIAL;

^#(.|\n)*$

<<EOF>>              {yyterminate();}

^.                  {ECHO;}

^\n                  {ECHO;}

\n                   {ECHO;}

.                   {ECHO;}

%%