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

%token LBRACKET RBRACKET TRUE FALSE EVAL WHILE FOR IF ELSE BOOLEQ BOOLGEQ BOOLLEQ BOOLNEQ LOGICALAND LOGICALOR  DECLF FCALL RETURN  BOOLGE BOOLLE EQ STRUCTCALL
%token <dataType> INTTYPE BOOLTYPE STRINGTYPE ARRAYTYPE CHARTYPE
%token <intVal> NR
%token <charVal> CHARVAL
%token <stringVal> STRINGVAL
%token <strVal> ID

%type <intVal> exp e 

%start s
%left PLUS MINUS
%left MUL DIV MOD
%%

s: { initialize(); } progr {printf ("Language is syntactically correct.\n"); printTable(); /*write();*/}

progr     : progr declarations 
          | progr functions
          | progr blockInstructions
          | declarations
          | functions
          | blockInstructions
          ;

declarations   : declarations declaration
               | declaration
               ;

declaration    : variable
               | structure
               ;

variable  : INTTYPE ID EQ NR'.'              { insert($1, $2, $4); }
          | INTTYPE ID EQ exp'.'             { insert($1, $2, $4); }
          | INTTYPE ID'.'                    { insert($1, $2, 0); }
          | CHARTYPE ID EQ CHARVAL'.'        { insert($1, $2, $4); }
          | CHARTYPE ID EQ exp'.'            { insert($1, $2, $4); }
          | CHARTYPE ID'.'                   { insert($1, $2, 0); }
          | STRINGTYPE ID EQ STRINGVAL'.'    { insertString($2, $4); }
          | STRINGTYPE ID'.'                 { insertString($2, ""); }
          | BOOLTYPE ID EQ TRUE'.'           { insert($1, $2, 1); }
          | BOOLTYPE ID EQ FALSE'.'          { insert($1, $2, 0); }
          | BOOLTYPE ID EQ exp'.'            { insert($1, $2, $4); }
          | BOOLTYPE ID'.'                   { insert($1, $2, 0); }
          | ARRAYTYPE ID EQ arraylist'.'     { insert($1, $2, -1); }                        
          ;

structure      : STRUCTCALL ID { insert("structure", $2, 0); addRefference($2); } LBRACKET { increaseDepth(); } declarations { decreaseDepth(); removeRefference(); } RBRACKET
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
          |
          ;

function  : DECLF INTTYPE ID { increaseDepth(); } functionBody { insertIntoFunctionsignature($2); insertIntoFunctionsignature($3); insertIntoNameArray($3); insertFunction(); }
          | DECLF CHARTYPE ID { increaseDepth(); } functionBody { insertIntoFunctionsignature($2); insertIntoFunctionsignature($3); insertIntoNameArray($3); insertFunction(); }
          | DECLF BOOLTYPE ID { increaseDepth(); } functionBody { insertIntoFunctionsignature($2); insertIntoFunctionsignature($3); insertIntoNameArray($3); insertFunction(); }
          | DECLF STRINGTYPE ID { increaseDepth(); } functionBody { insertIntoFunctionsignature($2); insertIntoFunctionsignature($3); insertIntoNameArray($3); insertFunction(); }
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

body      : LBRACKET blockInstructions RETURN bodyEnd
          | LBRACKET blockInstructions bodyEnd
          | LBRACKET RBRACKET
          ;

bodyEnd   : RBRACKET { decreaseDepth(); }
          ;

blockInstructions   : blockInstructions blockInstruction 
                    | blockInstruction
                    ;

blockInstruction    : variable
                    | assignment
                    | while
                    | for
                    | if
                    | if else
                    | EVAL '('exp')''.'
                    ;

while     : WHILE { increaseDepth(); } '(' conditii ')' body
          ;

for  : FOR { increaseDepth(); } '(' assignment '.' conditii '.' assignment ')' body
     ;

if   : IF { increaseDepth(); } '(' conditii ')' body
     ;

else : ELSE { increaseDepth(); } body
     ;


assignment     : ID EQ NR'.'       { updateVariableValue($1, $3); }
               | ID EQ CHARVAL'.'  { updateVariableValue($1, $3); }
               | ID EQ STRINGVAL'.'{ updateVariableStringValue($1, $3); }
               | ID EQ TRUE'.'     { updateVariableValue($1, 1); }
               | ID EQ FALSE'.'    { updateVariableValue($1, 0); }
               | ID EQ arraylist'.'
               | ID EQ exp'.' 
               | ID EQ ID'.'       { updateVariableWithVariable($1, $3); }
               ;

exp       : e  {$$=$1; printf("Valoarea expresiei este %d\n",$$);} 
          ;

e    : e PLUS e     {$$=$1+$3; }
     | e MINUS e    {$$=$1-$3; }
     | e MUL e      {$$=$1*$3; }
     | e DIV e      {$$=$1/$3; }
     | e MOD e      {$$=$1%$3; }
     | '('e PLUS e')'{$$=$2+$4; }
     | '('e MINUS e')'{$$=$2-$4; }
     | '('e MUL e')'{$$=$2*$4; }
     | '('e DIV e')'{$$=$2/$4; }
     | '('e MOD e')'{$$=$2%$4; }
     | CHARVAL      {$$=$1; }
     | NR           {$$=$1; }
     | TRUE         {$$=1; }
     | FALSE        {$$=0; }
     | ID EQ NR
          { 
               int i = variableIndex($1); 
               if(i != -1 && (strcmp(symbolTable[i].symbolType, "int") == 0 || strcmp(symbolTable[i].symbolType, "bool") == 0 || strcmp(symbolTable[i].symbolType, "char") == 0)){ 
                    updateVariableValue($1, $3);
                    $$ =  symbolTable[i].value ;
               } else {
                    printf("Variable doesn't exist\n"); 
                    printf("Error: argument for Eval is not valid!\n");
                    exit(0);
               }
          }
     | ID
          { 
               int i = variableIndex($1);
               if(i != -1 && (strcmp(symbolTable[i].symbolType, "int") == 0 || strcmp(symbolTable[i].symbolType, "bool") == 0 || strcmp(symbolTable[i].symbolType, "char") == 0)){  
                    $$= symbolTable[i].value;
               } else if(i != -1 && (strcmp(symbolTable[i].symbolType, "structure") == 0 || strcmp(symbolTable[i].symbolType, "string") == 0)){
                    printf("Error: argument for Eval is not valid!\n");
                    exit(1);
               } else {
                    printf("Variable doesn't exist\n"); 
                    printf("Error: argument for Eval is not valid!\n");
                    exit(1);
               }
          }
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
          | NR boolOp ID
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
