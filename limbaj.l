%{
#include <stdio.h>
#include "limbaj.tab.h"
%}
%option noyywrap

%%

"/*"(.|\n|\r)+"*/" ;
"=="                        { return BOOLEQ; }
"!="                        { return BOOLEQ; }
"<="                        { return BOOLLEQ; }
">="                        { return BOOLGEQ; }
">"                         { return BOOLGE; }
"<"                         { return BOOLLE; }
"="                         { return EQ; }
"+"                         { return PLUS; }
"-"                         { return MINUS; }
"/"                         { return DIV; }
"*"                         { return MUL; }
"&&"                        { return LOGICALAND; }
"||"                        { return LOGICALOR; }
"#function"                 { return DECLF; }
"#function_call"            { return FCALL; }
"Eval"                      { return EVAL; }
"int"                       { yylval.dataType = strdup(yytext);return INTTYPE; } 
"char"                      { yylval.dataType = strdup(yytext);return CHARTYPE; }
"string"                    { yylval.dataType = strdup(yytext);return STRINGTYPE; }
"bool"                      { yylval.dataType = strdup(yytext);return BOOLTYPE; }
"array"                     { yylval.dataType = strdup(yytext);return ARRAYTYPE; }
"struct"                    { yylval.dataType = strdup(yytext);return STRUCTTYPE;}
"{"                         { return LBRACKET; }
"}"                         { return RBRACKET; }
"true"                      { return TRUE; }
"false"                     { return FALSE; }
"while"                     { return WHILE; }
"for"                       { return FOR; }
"if"                        { return IF; }
"else"                      { return ELSE; }
\'.\'                       { yylval.charVal = yytext[1];return CHARVAL; }
\"[^\"]+\"                  { yylval.stringVal = strdup(yytext);return STRINGVAL; }
[_a-zA-Z][_a-zA-Z0-9]*      { yylval.strVal = strdup(yytext);return ID; }
0|[1-9][0-9]*|[+-][1-9][0-9]* { yylval.intVal = atoi(yytext);return NR; }
[ \t] ;
\n { yylineno++; }
. { return yytext[0]; }
%%