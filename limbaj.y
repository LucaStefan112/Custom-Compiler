%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "limbaj.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern char* yytext;

%}
%union {
  int intVal; //value
  char* dataType; // datatype
  char* strVal; // ID
  char *key;
  char charVal;
  char *stringVal;
}

%token LBRACKET RBRACKET TRUE FALSE EVAL WHILE FOR IF ELSE BOOLEQ BOOLGEQ BOOLLEQ BOOLNEQ LOGICALAND LOGICALOR  DECLF FCALL RETURN  BOOLGE BOOLLE EQ STRUCTCALL STRUCTTYPE
%token <dataType> INTTYPE BOOLTYPE STRINGTYPE ARRAYTYPE  CHARTYPE
%token <intVal> NR
%token <charVal> CHARVAL
%token <stringVal> STRINGVAL
%token <strVal> ID
%token <key>  DECL ODECL

%type <intVal> exp e 

%start s
%left PLUS MINUS
%left MUL DIV
%%

s: progr {printf ("\n Language is syntactically correct.\n"); printTable(); write();}

progr     : declarations functions
          ;

depthAdd  : { increaseDepth(); }
          ;

declarations   : structures
               |
               ;

structures     : structures structure
               | structure
               ;

structure      : STRUCTCALL depthAdd STRUCTTYPE ID LBRACKET  atributelist structEnd 
               | STRUCTCALL depthAdd STRUCTTYPE ID LBRACKET structEnd
               ;

structEnd      : RBRACKET { decreaseDepth(); }
               ;

atributelist   : atributelist atribute
               | atribute
               ;

atribute  : DECL INTTYPE ID EQ NR'.' {insert($1,$2,$3,$5);}
          | DECL INTTYPE ID'.'       {insert($1, $2, $3, 2147483647);}
          | DECL CHARTYPE ID  EQ CHARVAL'.'{insert($1, $2, $3, $5);}
          | DECL CHARTYPE ID'.'        {insert($1, $2, $3, -1);}
          | DECL STRINGTYPE ID  EQ STRINGVAL'.'{insert_string($1, $2, $3, $5);}
          | DECL STRINGTYPE ID'.'{insert_string($1, $2, $3, "");}
          | DECL BOOLTYPE ID EQ TRUE'.'{insert($1, $2, $3, 1);}
          | DECL BOOLTYPE ID EQ FALSE'.'{insert($1, $2, $3, 0);}
          | DECL BOOLTYPE ID'.'{insert($1,$2,$3,-1);}
          | DECL ARRAYTYPE ID EQ arraylist'.'{insert($1, $2, $3, -1);}
          | FCALL  EVAL '(' exp ')'
          | FCALL ID '(' callInstructions ')'  
               {    
                    insertName($2);
                         if (checkIdentity($2)==0)
                              printf("The types of the called function do not match with the declared types for %s \n", $2);
               }
          | ODECL INTTYPE ID EQ NR'.' {insert($1, $2, $3, $5);}
          | ODECL INTTYPE ID'.'{insert($1, $2, $3, 2147483647);}
          | ODECL CHARTYPE ID  EQ CHARVAL'.'{insert($1, $2, $3, $5);}
          | ODECL CHARTYPE ID'.'{insert($1, $2, $3, -1);}
          | ODECL STRINGTYPE ID  EQ STRINGVAL'.'{insert_string($1, $2, $3, $5);}
          | ODECL STRINGTYPE ID'.'{insert_string($1, $2, $3, "");}
          | ODECL BOOLTYPE ID EQ TRUE'.'{insert($1, $2, $3, 1);}
          | ODECL BOOLTYPE ID EQ FALSE'.'{insert($1, $2, $3, 0);}
          | ODECL BOOLTYPE ID'.' {insert($1,$2,$3,-1);}
          | ODECL ARRAYTYPE ID EQ arraylist'.'{insert($1, $2, $3, -1);}
          | ODECL INTTYPE EVAL '(' exp ')'
          ;

arraylist : '['']'
          | '['list']'
          ;

list : list',' listval
     | listval
     ;

listval   : NR
          | CHARVAL
          | STRINGVAL
          | ID
          | structure
          | arraylist
          ;

functions : functions  function
          | function
          ;

function  : DECLF INTTYPE ID depthAdd functionBody { insertIntoFunctionsignature($2); insertIntoFunctionsignature($3); insertIntoNameArray($3); insertFunction(); }
          | DECLF CHARTYPE ID depthAdd functionBody { insertIntoFunctionsignature($2); insertIntoFunctionsignature($3); insertIntoNameArray($3); insertFunction(); }
          | DECLF BOOLTYPE ID depthAdd functionBody { insertIntoFunctionsignature($2); insertIntoFunctionsignature($3); insertIntoNameArray($3); insertFunction(); }
          | DECLF STRINGTYPE ID depthAdd functionBody { insertIntoFunctionsignature($2); insertIntoFunctionsignature($3); insertIntoNameArray($3); insertFunction(); }
          | DECLF INTTYPE EVAL '(' exp ')'
          | FCALL ID '(' callInstructions')' 
               {    
                    insertName($2);
                    if (!checkIdentity($2))
                         printf("The types of the called function do not match with the declared types for %s \n", $2);
               }
          ;

functionBody   : '(' declInstructions ')' body
               | '(' ')' body
               ;

callInstructions    : callInstructions ',' callInstruction
                    | callInstruction
                    ;

callInstruction     : INTTYPE ID {insertIntoUserArray($1);}
                    | CHARTYPE ID {insertIntoUserArray($1);}
                    | STRINGTYPE ID {insertIntoUserArray($1);}
                    | BOOLTYPE ID {insertIntoUserArray($1);}
                    | function      
                    | NR {insertIntoUserArray("int");}
                    ;

declInstructions    : declInstructions ',' declInstruction
                    | declInstruction
                    ;

declInstruction     : INTTYPE ID    {  insertTEMP($1); insertIntoParamArray($1);}
                    | CHARTYPE ID   {  insertTEMP($1); insertIntoParamArray($1);}
                    | STRINGTYPE ID {  insertTEMP($1); insertIntoParamArray($1);}
                    | BOOLTYPE ID   {  insertTEMP($1); insertIntoParamArray($1);}
                    ;

exp       : e  {$$=$1; printf("Valoarea expresiei este %d\n",$$);} 
          ;

e    : e PLUS e   {$$=$1+$3; }
     | e MINUS e   {$$=$1-$3; }
     | e MUL e   {$$=$1*$3; }
     | e DIV e   {$$=$1/$3; }
     | NR {$$=$1; }
     | DECL INTTYPE ID EQ NR'.' 
          { 
               int i; 
               if((i=variableIndex($3)) != -1){ 
                    updateVariableValue($3, $5);
                    $$ =  symbolTable[i].Value ;
               } else {
                    printf("Variable doesn't exist\n"); 
                    printf("Error: argument for Eval is not valid!\n");
                    exit(0);
               }
          }
     | DECL INTTYPE ID'.'
          { 
               int i;
               if((i=variableIndex($3)) != -1) {   
                    $$= symbolTable[i].Value;
               } else {
                    printf("Variable doesn't exist\n"); 
                    printf("Error: argument for Eval is not valid!\n");
                    exit(1);
               }
          }
     ;

body      : LBRACKET blockInstructions RETURN bodyEnd
          | LBRACKET blockInstructions bodyEnd
          | LBRACKET RBRACKET
          ;

bodyEnd   : RBRACKET { decreaseDepth(); }
          ;

blockInstructions   : blockInstructions blockInstruction 
                    | blockInstruction
                    ;

blockInstruction    : atribute
                    | assignment
                    | while
                    | for
                    | if
                    ;

while     : WHILE depthAdd '(' conditii ')' body
          ;

for  : FOR depthAdd '(' assignment conditii '.' assignment ')' body
     ;

if   : IF depthAdd '(' conditii ')' body
     | IF depthAdd '(' conditii ')' body ELSE depthAdd body
     ;


assignment     : ID EQ NR'.' { updateVariableValue($2, $4); }
               | ID EQ CHARVAL'.'
               | ID EQ STRINGVAL'.'
               | ID EQ TRUE'.'
               | ID EQ FALSE'.'
               | ID EQ arraylist'.'
               | ID EQ operatie'.' 
               | ID EQ ID'.' { updateVariableId($2, $4); }
               ;

operatie  : plus
          | minus
          | mul
          | div
          ;

plus : ID PLUS ID { checkDeclaration($1); checkDeclaration($3); }
     | ID PLUS NR { checkDeclaration($1);}
     | NR PLUS ID { checkDeclaration($3);}
     ;

minus     : ID MINUS ID { checkDeclaration($1); checkDeclaration($3); }
          | ID MINUS NR { checkDeclaration($1);}
          | NR MINUS ID { checkDeclaration($3);}
          ;

mul  : ID MUL ID { checkDeclaration($1); checkDeclaration($3); }
     | ID MUL NR { checkDeclaration($1);}
     | NR MUL ID { checkDeclaration($3);}
     ;

div  : ID DIV ID { checkDeclaration($1); checkDeclaration($3); }
     | ID DIV NR { checkDeclaration($1);}
     | NR DIV ID { checkDeclaration($3);}
     ;

conditii  : conditii logicalOp conditie
          | conditie
          ;

logicalOp : LOGICALAND
          | LOGICALOR
          ;

conditie  : TRUE
          | FALSE
          | NR boolOp NR
          | ID boolOp NR
          | NR boolOp ID
          | ID boolOp ID
          ;

boolOp    : BOOLEQ
          | BOOLGEQ
          | BOOLLEQ
          | BOOLNEQ
          | BOOLLE
          | BOOLGE
          ;


%%

void yyerror(char * s){
printf("Error: %s on line:%d and yytext is %s\n",s,yylineno,yytext);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
}
