%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
void yyerror(char *);
int yywrap(void);

%}

digit [0-9]
separator  [ \t\r\n]
letter [a-z]

%%

0|[1-9]{digit}*|-[1-9]{digit}*  yylval.num=atoi(yytext);return NUM;
\(                              return LEP;
\)                              return RIP;
#t                              return TRUE;
#f                              return FALSE;
"+"                             return PLU;
"-"                             return MIN;
"*"                             return MUL;
"/"                             return DIV;
mod                             return MOD;
">"                             return GRE;
"<"                             return SMA;
"="                             return EQU;
and                             return AND;
or                              return OR;
not                             return NOT;
define                          return DE;
fun                             return FNN;
if                              return FI;
print\-num                      return PRN;
print\-bool                     return PRB;
{separator}+                    return SPA;      
{letter}({letter}|{digit}|-)*   yylval.str=strdup(yytext);return ID;
.

%%



