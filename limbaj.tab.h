/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LIMBAJ_TAB_H_INCLUDED
# define YY_YY_LIMBAJ_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LBRACKET = 258,                /* LBRACKET  */
    RBRACKET = 259,                /* RBRACKET  */
    TRUE = 260,                    /* TRUE  */
    FALSE = 261,                   /* FALSE  */
    EVAL = 262,                    /* EVAL  */
    WHILE = 263,                   /* WHILE  */
    FOR = 264,                     /* FOR  */
    IF = 265,                      /* IF  */
    ELSE = 266,                    /* ELSE  */
    BOOLEQ = 267,                  /* BOOLEQ  */
    BOOLGEQ = 268,                 /* BOOLGEQ  */
    BOOLLEQ = 269,                 /* BOOLLEQ  */
    BOOLNEQ = 270,                 /* BOOLNEQ  */
    LOGICALAND = 271,              /* LOGICALAND  */
    LOGICALOR = 272,               /* LOGICALOR  */
    DECLF = 273,                   /* DECLF  */
    FCALL = 274,                   /* FCALL  */
    RETURN = 275,                  /* RETURN  */
    BOOLGE = 276,                  /* BOOLGE  */
    BOOLLE = 277,                  /* BOOLLE  */
    EQ = 278,                      /* EQ  */
    STRUCTCALL = 279,              /* STRUCTCALL  */
    OBJTYPE = 280,                 /* OBJTYPE  */
    INTTYPE = 281,                 /* INTTYPE  */
    BOOLTYPE = 282,                /* BOOLTYPE  */
    STRINGTYPE = 283,              /* STRINGTYPE  */
    ARRAYTYPE = 284,               /* ARRAYTYPE  */
    CHARTYPE = 285,                /* CHARTYPE  */
    NR = 286,                      /* NR  */
    CHARVAL = 287,                 /* CHARVAL  */
    STRINGVAL = 288,               /* STRINGVAL  */
    ID = 289,                      /* ID  */
    DECL = 290,                    /* DECL  */
    ODECL = 291,                   /* ODECL  */
    PLUS = 292,                    /* PLUS  */
    MINUS = 293,                   /* MINUS  */
    MUL = 294,                     /* MUL  */
    DIV = 295                      /* DIV  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "limbaj.y"

  int intVal; //value
  char* dataType; // datatype
  char* strVal; // ID
  char *key;
  char charVal;
  char *stringVal;

#line 113 "limbaj.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_LIMBAJ_TAB_H_INCLUDED  */
