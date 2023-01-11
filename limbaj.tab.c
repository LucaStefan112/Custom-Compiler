/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "limbaj.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "limbaj.h"

extern FILE* yyin;
extern char* yytext;
extern int yylineno;
extern char* yytext;


#line 84 "limbaj.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "limbaj.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LBRACKET = 3,                   /* LBRACKET  */
  YYSYMBOL_RBRACKET = 4,                   /* RBRACKET  */
  YYSYMBOL_TRUE = 5,                       /* TRUE  */
  YYSYMBOL_FALSE = 6,                      /* FALSE  */
  YYSYMBOL_EVAL = 7,                       /* EVAL  */
  YYSYMBOL_WHILE = 8,                      /* WHILE  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_ELSE = 11,                      /* ELSE  */
  YYSYMBOL_BOOLEQ = 12,                    /* BOOLEQ  */
  YYSYMBOL_BOOLGEQ = 13,                   /* BOOLGEQ  */
  YYSYMBOL_BOOLLEQ = 14,                   /* BOOLLEQ  */
  YYSYMBOL_BOOLNEQ = 15,                   /* BOOLNEQ  */
  YYSYMBOL_LOGICALAND = 16,                /* LOGICALAND  */
  YYSYMBOL_LOGICALOR = 17,                 /* LOGICALOR  */
  YYSYMBOL_DECLF = 18,                     /* DECLF  */
  YYSYMBOL_FCALL = 19,                     /* FCALL  */
  YYSYMBOL_RETURN = 20,                    /* RETURN  */
  YYSYMBOL_BOOLGE = 21,                    /* BOOLGE  */
  YYSYMBOL_BOOLLE = 22,                    /* BOOLLE  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_STRUCTCALL = 24,                /* STRUCTCALL  */
  YYSYMBOL_OBJTYPE = 25,                   /* OBJTYPE  */
  YYSYMBOL_INTTYPE = 26,                   /* INTTYPE  */
  YYSYMBOL_BOOLTYPE = 27,                  /* BOOLTYPE  */
  YYSYMBOL_STRINGTYPE = 28,                /* STRINGTYPE  */
  YYSYMBOL_ARRAYTYPE = 29,                 /* ARRAYTYPE  */
  YYSYMBOL_CHARTYPE = 30,                  /* CHARTYPE  */
  YYSYMBOL_NR = 31,                        /* NR  */
  YYSYMBOL_CHARVAL = 32,                   /* CHARVAL  */
  YYSYMBOL_STRINGVAL = 33,                 /* STRINGVAL  */
  YYSYMBOL_ID = 34,                        /* ID  */
  YYSYMBOL_DECL = 35,                      /* DECL  */
  YYSYMBOL_ODECL = 36,                     /* ODECL  */
  YYSYMBOL_PLUS = 37,                      /* PLUS  */
  YYSYMBOL_MINUS = 38,                     /* MINUS  */
  YYSYMBOL_MUL = 39,                       /* MUL  */
  YYSYMBOL_DIV = 40,                       /* DIV  */
  YYSYMBOL_41_ = 41,                       /* '.'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '['  */
  YYSYMBOL_45_ = 45,                       /* ']'  */
  YYSYMBOL_46_ = 46,                       /* ','  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_s = 48,                         /* s  */
  YYSYMBOL_progr = 49,                     /* progr  */
  YYSYMBOL_depthAdd = 50,                  /* depthAdd  */
  YYSYMBOL_declarations = 51,              /* declarations  */
  YYSYMBOL_objects = 52,                   /* objects  */
  YYSYMBOL_object = 53,                    /* object  */
  YYSYMBOL_objEnd = 54,                    /* objEnd  */
  YYSYMBOL_atributelist = 55,              /* atributelist  */
  YYSYMBOL_atribute = 56,                  /* atribute  */
  YYSYMBOL_arraylist = 57,                 /* arraylist  */
  YYSYMBOL_list = 58,                      /* list  */
  YYSYMBOL_listval = 59,                   /* listval  */
  YYSYMBOL_functions = 60,                 /* functions  */
  YYSYMBOL_function = 61,                  /* function  */
  YYSYMBOL_functionBody = 62,              /* functionBody  */
  YYSYMBOL_callInstructions = 63,          /* callInstructions  */
  YYSYMBOL_callInstruction = 64,           /* callInstruction  */
  YYSYMBOL_declInstructions = 65,          /* declInstructions  */
  YYSYMBOL_declInstruction = 66,           /* declInstruction  */
  YYSYMBOL_exp = 67,                       /* exp  */
  YYSYMBOL_e = 68,                         /* e  */
  YYSYMBOL_body = 69,                      /* body  */
  YYSYMBOL_bodyEnd = 70,                   /* bodyEnd  */
  YYSYMBOL_blockInstructions = 71,         /* blockInstructions  */
  YYSYMBOL_blockInstruction = 72,          /* blockInstruction  */
  YYSYMBOL_while = 73,                     /* while  */
  YYSYMBOL_for = 74,                       /* for  */
  YYSYMBOL_if = 75,                        /* if  */
  YYSYMBOL_assignment = 76,                /* assignment  */
  YYSYMBOL_operatie = 77,                  /* operatie  */
  YYSYMBOL_plus = 78,                      /* plus  */
  YYSYMBOL_minus = 79,                     /* minus  */
  YYSYMBOL_mul = 80,                       /* mul  */
  YYSYMBOL_div = 81,                       /* div  */
  YYSYMBOL_conditii = 82,                  /* conditii  */
  YYSYMBOL_logicalOp = 83,                 /* logicalOp  */
  YYSYMBOL_conditie = 84,                  /* conditie  */
  YYSYMBOL_boolOp = 85                     /* boolOp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   283

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  286

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,     2,     2,    46,     2,    41,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    37,    37,    39,    41,    44,    45,    48,    49,    52,
      53,    56,    59,    60,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    93,    94,    97,
      98,   101,   102,   103,   104,   105,   106,   109,   110,   113,
     114,   115,   116,   117,   118,   126,   129,   130,   133,   134,
     135,   136,   137,   138,   141,   142,   145,   146,   147,   148,
     151,   154,   155,   156,   157,   158,   159,   171,   184,   185,
     186,   189,   192,   193,   196,   197,   198,   199,   200,   203,
     206,   209,   210,   214,   215,   216,   217,   218,   219,   220,
     221,   224,   225,   226,   227,   230,   231,   232,   235,   236,
     237,   240,   241,   242,   245,   246,   247,   250,   251,   254,
     255,   258,   259,   260,   261,   262,   263,   266,   267,   268,
     269,   270,   271
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LBRACKET", "RBRACKET",
  "TRUE", "FALSE", "EVAL", "WHILE", "FOR", "IF", "ELSE", "BOOLEQ",
  "BOOLGEQ", "BOOLLEQ", "BOOLNEQ", "LOGICALAND", "LOGICALOR", "DECLF",
  "FCALL", "RETURN", "BOOLGE", "BOOLLE", "EQ", "STRUCTCALL", "OBJTYPE",
  "INTTYPE", "BOOLTYPE", "STRINGTYPE", "ARRAYTYPE", "CHARTYPE", "NR",
  "CHARVAL", "STRINGVAL", "ID", "DECL", "ODECL", "PLUS", "MINUS", "MUL",
  "DIV", "'.'", "'('", "')'", "'['", "']'", "','", "$accept", "s", "progr",
  "depthAdd", "declarations", "objects", "object", "objEnd",
  "atributelist", "atribute", "arraylist", "list", "listval", "functions",
  "function", "functionBody", "callInstructions", "callInstruction",
  "declInstructions", "declInstruction", "exp", "e", "body", "bodyEnd",
  "blockInstructions", "blockInstruction", "while", "for", "if",
  "assignment", "operatie", "plus", "minus", "mul", "div", "conditii",
  "logicalOp", "conditie", "boolOp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-235)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -12,  -235,    57,  -235,    83,   -12,  -235,    -5,  -235,   128,
      29,    83,  -235,  -235,    77,     6,    81,    95,   123,   120,
    -235,   183,   157,  -235,  -235,  -235,  -235,    86,    18,   -10,
     161,   161,   161,   161,   164,   166,   170,   171,  -235,  -235,
      52,  -235,  -235,    31,   105,   113,  -235,    18,  -235,  -235,
     180,   165,   127,   133,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,    86,   167,   168,   173,   177,   178,   179,
     181,    45,   182,   184,   185,   186,  -235,  -235,   188,  -235,
     -10,   -10,   -10,   -10,   189,   190,   192,   193,   129,  -235,
    -235,   -10,    86,     0,    39,    49,   194,    55,   172,    62,
      65,    66,   198,    68,    69,   155,   155,  -235,  -235,  -235,
    -235,  -235,  -235,   222,   133,   195,   130,   197,  -235,   187,
    -235,   196,  -235,   199,   200,  -235,   -10,   202,  -235,   191,
    -235,   201,  -235,   199,   203,  -235,   205,  -235,    20,  -235,
    -235,  -235,  -235,   204,   206,   207,   208,    37,   209,   210,
     211,   212,   214,   215,   216,   218,   219,   220,  -235,  -235,
    -235,  -235,    96,  -235,     7,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,   156,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,   221,   223,   224,   217,  -235,   226,  -235,
    -235,  -235,    42,    13,   227,    13,     2,  -235,  -235,  -235,
    -235,   106,   106,    15,  -235,   230,    13,    34,   228,   229,
     107,   231,   232,   112,   233,   234,  -235,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,   143,   147,  -235,  -235,
     222,    13,    43,   222,  -235,  -235,   237,   242,   243,   244,
    -235,  -235,  -235,   148,   149,   153,   154,  -235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,   227,   235,  -235,  -235,
    -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,  -235,
     225,  -235,   222,   222,  -235,  -235
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     4,     0,     2,     0,     5,     8,     0,     1,     0,
       0,     3,    48,     7,     0,     0,     0,     0,     0,     0,
      47,     0,     0,     4,     4,     4,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    62,
       0,    57,    11,     0,     0,     0,    10,     0,    13,    75,
       0,     0,    70,     0,    49,    51,    52,    50,    58,    61,
      60,    59,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    12,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    66,
      69,    68,    67,     0,     0,     0,     0,     0,    15,     0,
      22,     0,    19,     0,     0,    17,     0,     0,    27,     0,
      34,     0,    31,     0,     0,    29,     0,    77,     0,    55,
      64,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     4,
       4,     4,     0,    84,     0,    83,    86,    87,    88,    85,
      14,    20,    21,    18,    41,    42,    43,    44,    37,    45,
      46,     0,    40,    23,    16,    36,    26,    32,    33,    30,
      35,    28,    76,     0,     0,     0,     0,    81,     0,    79,
      82,    38,     0,     0,     0,     0,     0,    78,    39,   121,
     122,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     127,   128,   129,   130,   132,   131,     0,     0,   119,   120,
       0,     0,     0,     0,    96,    97,     0,     0,     0,     0,
      93,    94,    95,     0,     0,     0,     0,   100,    98,    99,
     123,   125,   124,   126,    89,   117,     0,    91,   107,   110,
     113,   116,   106,   105,   109,   108,   112,   111,   115,   114,
       0,     4,     0,     0,    90,    92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,   -23,  -235,  -235,    94,   236,  -235,    36,
    -119,  -235,    35,  -235,    89,   158,   139,   176,  -235,   138,
     -81,    88,  -234,    44,  -235,    80,  -235,  -235,  -235,  -199,
    -235,  -235,  -235,  -235,  -235,  -108,  -235,    26,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     7,     4,     5,   179,    46,    47,   163,
     180,   181,   182,    11,    39,    54,    40,    41,    88,    89,
      51,    52,   139,   199,   164,   165,   166,   167,   168,   169,
     225,   226,   227,   228,   229,   213,   241,   214,   236
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    31,    32,    33,   148,   216,   264,   218,   219,   267,
     115,   197,     1,    22,   155,   159,   160,   161,   209,   210,
      14,    49,    42,   117,   158,    50,    43,   198,   159,   160,
     161,   238,   239,   220,   221,   222,   223,    43,    64,    43,
      23,   118,   162,    45,   211,   150,   147,   212,   284,   285,
     238,   239,    98,    44,    45,   162,    45,     8,   240,   238,
     239,     1,   119,    19,    48,    65,     1,   280,   174,   175,
     176,   177,   121,   174,   175,   176,   177,   243,   124,    99,
     120,   147,   178,    77,   266,   127,   147,   224,   129,   131,
     122,   134,   136,    12,     6,    62,   125,   217,    63,    13,
      20,     9,    10,   128,     9,    10,   130,   132,   242,   135,
     137,    21,    34,    35,    36,    24,    37,    38,   230,   231,
     232,   233,    66,    67,    68,    69,    70,   234,   235,    25,
     196,    66,    67,    68,    69,    70,   193,   194,   195,    71,
      72,    73,    74,    75,   246,   247,   248,   249,   250,   253,
     254,   255,   256,   257,    15,    16,    17,    26,    18,    84,
      85,    86,    27,    87,    80,    81,    82,    83,   105,   106,
     107,   108,   113,   142,   260,   114,    63,   261,   262,   272,
     274,   263,   273,   275,   276,   278,    28,   277,   279,    55,
      56,    57,   144,   145,    82,    83,   152,   153,    58,    29,
      59,   201,   202,    53,    60,    61,    78,    93,    79,    91,
      92,    94,    95,    96,   126,    97,   100,   123,   101,   102,
     103,   133,   104,   109,   110,   138,   111,   112,   143,   146,
     197,   116,   149,   151,   154,   156,   157,   208,   141,    90,
     206,     0,   207,   147,   200,   170,   281,   171,   172,   173,
     183,   184,   140,   186,   185,   187,   188,   189,   283,   190,
     191,   192,   215,   203,   196,   204,   205,   265,   282,   244,
     245,   268,   251,   252,   258,   259,   269,   270,   271,   237,
       0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      23,    24,    25,    26,   123,   204,   240,     5,     6,   243,
      91,     4,    24,     7,   133,     8,     9,    10,     5,     6,
      25,    31,     4,    23,     4,    35,    19,    20,     8,     9,
      10,    16,    17,    31,    32,    33,    34,    19,     7,    19,
      34,    41,    35,    36,    31,   126,    44,    34,   282,   283,
      16,    17,     7,    35,    36,    35,    36,     0,    43,    16,
      17,    24,    23,    34,    28,    34,    24,   266,    31,    32,
      33,    34,    23,    31,    32,    33,    34,    43,    23,    34,
      41,    44,    45,    47,    41,    23,    44,   206,    23,    23,
      41,    23,    23,     4,     0,    43,    41,   205,    46,     5,
      11,    18,    19,    41,    18,    19,    41,    41,   216,    41,
      41,    34,    26,    27,    28,    34,    30,    31,    12,    13,
      14,    15,    26,    27,    28,    29,    30,    21,    22,    34,
      34,    26,    27,    28,    29,    30,   159,   160,   161,    26,
      27,    28,    29,    30,    37,    38,    39,    40,    41,    37,
      38,    39,    40,    41,    26,    27,    28,    34,    30,    26,
      27,    28,    42,    30,    37,    38,    39,    40,    80,    81,
      82,    83,    43,    43,    31,    46,    46,    34,    31,    31,
      31,    34,    34,    34,    31,    31,     3,    34,    34,    31,
      32,    33,     5,     6,    39,    40,     5,     6,    34,    42,
      34,    45,    46,    42,    34,    34,    26,    34,    43,    42,
      42,    34,    34,    34,    42,    34,    34,    23,    34,    34,
      34,    23,    34,    34,    34,     3,    34,    34,    31,    33,
       4,    92,    32,    31,    33,    32,    31,   202,    43,    63,
      23,    -1,   198,    44,   164,    41,    11,    41,    41,    41,
      41,    41,   114,    41,    43,    41,    41,    41,   281,    41,
      41,    41,    35,    42,    34,    42,    42,   241,    43,    41,
      41,    34,    41,    41,    41,    41,    34,    34,    34,   212,
      -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    24,    48,    49,    51,    52,    53,    50,     0,    18,
      19,    60,    61,    53,    25,    26,    27,    28,    30,    34,
      61,    34,     7,    34,    34,    34,    34,    42,     3,    42,
      50,    50,    50,    50,    26,    27,    28,    30,    31,    61,
      63,    64,     4,    19,    35,    36,    54,    55,    56,    31,
      35,    67,    68,    42,    62,    62,    62,    62,    34,    34,
      34,    34,    43,    46,     7,    34,    26,    27,    28,    29,
      30,    26,    27,    28,    29,    30,    54,    56,    26,    43,
      37,    38,    39,    40,    26,    27,    28,    30,    65,    66,
      64,    42,    42,    34,    34,    34,    34,    34,     7,    34,
      34,    34,    34,    34,    34,    68,    68,    68,    68,    34,
      34,    34,    34,    43,    46,    67,    63,    23,    41,    23,
      41,    23,    41,    23,    23,    41,    42,    23,    41,    23,
      41,    23,    41,    23,    23,    41,    23,    41,     3,    69,
      66,    43,    43,    31,     5,     6,    33,    44,    57,    32,
      67,    31,     5,     6,    33,    57,    32,    31,     4,     8,
       9,    10,    35,    56,    71,    72,    73,    74,    75,    76,
      41,    41,    41,    41,    31,    32,    33,    34,    45,    53,
      57,    58,    59,    41,    41,    43,    41,    41,    41,    41,
      41,    41,    41,    50,    50,    50,    34,     4,    20,    70,
      72,    45,    46,    42,    42,    42,    23,    70,    59,     5,
       6,    31,    34,    82,    84,    35,    76,    82,     5,     6,
      31,    32,    33,    34,    57,    77,    78,    79,    80,    81,
      12,    13,    14,    15,    21,    22,    85,    85,    16,    17,
      43,    83,    82,    43,    41,    41,    37,    38,    39,    40,
      41,    41,    41,    37,    38,    39,    40,    41,    41,    41,
      31,    34,    31,    34,    69,    84,    41,    69,    34,    34,
      34,    34,    31,    34,    31,    34,    31,    34,    31,    34,
      76,    11,    43,    50,    69,    69
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    51,    52,    52,    53,
      53,    54,    55,    55,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    65,    65,    66,    66,    66,    66,
      67,    68,    68,    68,    68,    68,    68,    68,    69,    69,
      69,    70,    71,    71,    72,    72,    72,    72,    72,    73,
      74,    75,    75,    76,    76,    76,    76,    76,    76,    76,
      76,    77,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    80,    80,    80,    81,    81,    81,    82,    82,    83,
      83,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     0,     2,     1,     7,
       6,     1,     2,     1,     6,     4,     6,     4,     6,     4,
       6,     6,     4,     6,     5,     5,     6,     4,     6,     4,
       6,     4,     6,     6,     4,     6,     6,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     5,
       5,     5,     5,     6,     5,     4,     3,     1,     2,     2,
       2,     2,     1,     1,     3,     1,     2,     2,     2,     2,
       1,     3,     3,     3,     3,     1,     6,     4,     4,     3,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     6,
       9,     6,     9,     5,     5,     5,     5,     5,     5,     5,
       5,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* s: progr  */
#line 37 "limbaj.y"
         {printf ("\n Language is syntactically correct.\n"); printTable(); write();}
#line 1343 "limbaj.tab.c"
    break;

  case 4: /* depthAdd: %empty  */
#line 41 "limbaj.y"
            { increaseDepth(); }
#line 1349 "limbaj.tab.c"
    break;

  case 11: /* objEnd: RBRACKET  */
#line 56 "limbaj.y"
                     { decreaseDepth(); }
#line 1355 "limbaj.tab.c"
    break;

  case 14: /* atribute: DECL INTTYPE ID EQ NR '.'  */
#line 63 "limbaj.y"
                                     {insert((yyvsp[-5].key),(yyvsp[-4].dataType),(yyvsp[-3].strVal),(yyvsp[-1].intVal));}
#line 1361 "limbaj.tab.c"
    break;

  case 15: /* atribute: DECL INTTYPE ID '.'  */
#line 64 "limbaj.y"
                                     {insert((yyvsp[-3].key), (yyvsp[-2].dataType), (yyvsp[-1].strVal), 2147483647);}
#line 1367 "limbaj.tab.c"
    break;

  case 16: /* atribute: DECL CHARTYPE ID EQ CHARVAL '.'  */
#line 65 "limbaj.y"
                                           {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), (yyvsp[-1].charVal));}
#line 1373 "limbaj.tab.c"
    break;

  case 17: /* atribute: DECL CHARTYPE ID '.'  */
#line 66 "limbaj.y"
                                       {insert((yyvsp[-3].key), (yyvsp[-2].dataType), (yyvsp[-1].strVal), -1);}
#line 1379 "limbaj.tab.c"
    break;

  case 18: /* atribute: DECL STRINGTYPE ID EQ STRINGVAL '.'  */
#line 67 "limbaj.y"
                                               {insert_string((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), (yyvsp[-1].stringVal));}
#line 1385 "limbaj.tab.c"
    break;

  case 19: /* atribute: DECL STRINGTYPE ID '.'  */
#line 68 "limbaj.y"
                                 {insert_string((yyvsp[-3].key), (yyvsp[-2].dataType), (yyvsp[-1].strVal), "");}
#line 1391 "limbaj.tab.c"
    break;

  case 20: /* atribute: DECL BOOLTYPE ID EQ TRUE '.'  */
#line 69 "limbaj.y"
                                       {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), 1);}
#line 1397 "limbaj.tab.c"
    break;

  case 21: /* atribute: DECL BOOLTYPE ID EQ FALSE '.'  */
#line 70 "limbaj.y"
                                        {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), 0);}
#line 1403 "limbaj.tab.c"
    break;

  case 22: /* atribute: DECL BOOLTYPE ID '.'  */
#line 71 "limbaj.y"
                               {insert((yyvsp[-3].key),(yyvsp[-2].dataType),(yyvsp[-1].strVal),-1);}
#line 1409 "limbaj.tab.c"
    break;

  case 23: /* atribute: DECL ARRAYTYPE ID EQ arraylist '.'  */
#line 72 "limbaj.y"
                                             {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), -1);}
#line 1415 "limbaj.tab.c"
    break;

  case 25: /* atribute: FCALL ID '(' callInstructions ')'  */
#line 75 "limbaj.y"
               {    
                    insertName((yyvsp[-3].strVal));
                         if (checkIdentity((yyvsp[-3].strVal))==0)
                              printf("The types of the called function do not match with the declared types for %s \n", (yyvsp[-3].strVal));
               }
#line 1425 "limbaj.tab.c"
    break;

  case 26: /* atribute: ODECL INTTYPE ID EQ NR '.'  */
#line 80 "limbaj.y"
                                      {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), (yyvsp[-1].intVal));}
#line 1431 "limbaj.tab.c"
    break;

  case 27: /* atribute: ODECL INTTYPE ID '.'  */
#line 81 "limbaj.y"
                               {insert((yyvsp[-3].key), (yyvsp[-2].dataType), (yyvsp[-1].strVal), 2147483647);}
#line 1437 "limbaj.tab.c"
    break;

  case 28: /* atribute: ODECL CHARTYPE ID EQ CHARVAL '.'  */
#line 82 "limbaj.y"
                                            {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), (yyvsp[-1].charVal));}
#line 1443 "limbaj.tab.c"
    break;

  case 29: /* atribute: ODECL CHARTYPE ID '.'  */
#line 83 "limbaj.y"
                                {insert((yyvsp[-3].key), (yyvsp[-2].dataType), (yyvsp[-1].strVal), -1);}
#line 1449 "limbaj.tab.c"
    break;

  case 30: /* atribute: ODECL STRINGTYPE ID EQ STRINGVAL '.'  */
#line 84 "limbaj.y"
                                                {insert_string((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), (yyvsp[-1].stringVal));}
#line 1455 "limbaj.tab.c"
    break;

  case 31: /* atribute: ODECL STRINGTYPE ID '.'  */
#line 85 "limbaj.y"
                                  {insert_string((yyvsp[-3].key), (yyvsp[-2].dataType), (yyvsp[-1].strVal), "");}
#line 1461 "limbaj.tab.c"
    break;

  case 32: /* atribute: ODECL BOOLTYPE ID EQ TRUE '.'  */
#line 86 "limbaj.y"
                                        {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), 1);}
#line 1467 "limbaj.tab.c"
    break;

  case 33: /* atribute: ODECL BOOLTYPE ID EQ FALSE '.'  */
#line 87 "limbaj.y"
                                         {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), 0);}
#line 1473 "limbaj.tab.c"
    break;

  case 34: /* atribute: ODECL BOOLTYPE ID '.'  */
#line 88 "limbaj.y"
                                 {insert((yyvsp[-3].key),(yyvsp[-2].dataType),(yyvsp[-1].strVal),-1);}
#line 1479 "limbaj.tab.c"
    break;

  case 35: /* atribute: ODECL ARRAYTYPE ID EQ arraylist '.'  */
#line 89 "limbaj.y"
                                              {insert((yyvsp[-5].key), (yyvsp[-4].dataType), (yyvsp[-3].strVal), -1);}
#line 1485 "limbaj.tab.c"
    break;

  case 49: /* function: DECLF INTTYPE ID depthAdd functionBody  */
#line 113 "limbaj.y"
                                                      { insertIntoFunctionsignature((yyvsp[-3].dataType)); insertIntoFunctionsignature((yyvsp[-2].strVal)); insertIntoNameArray((yyvsp[-2].strVal)); insertFunction(); }
#line 1491 "limbaj.tab.c"
    break;

  case 50: /* function: DECLF CHARTYPE ID depthAdd functionBody  */
#line 114 "limbaj.y"
                                                      { insertIntoFunctionsignature((yyvsp[-3].dataType)); insertIntoFunctionsignature((yyvsp[-2].strVal)); insertIntoNameArray((yyvsp[-2].strVal)); insertFunction(); }
#line 1497 "limbaj.tab.c"
    break;

  case 51: /* function: DECLF BOOLTYPE ID depthAdd functionBody  */
#line 115 "limbaj.y"
                                                      { insertIntoFunctionsignature((yyvsp[-3].dataType)); insertIntoFunctionsignature((yyvsp[-2].strVal)); insertIntoNameArray((yyvsp[-2].strVal)); insertFunction(); }
#line 1503 "limbaj.tab.c"
    break;

  case 52: /* function: DECLF STRINGTYPE ID depthAdd functionBody  */
#line 116 "limbaj.y"
                                                      { insertIntoFunctionsignature((yyvsp[-3].dataType)); insertIntoFunctionsignature((yyvsp[-2].strVal)); insertIntoNameArray((yyvsp[-2].strVal)); insertFunction(); }
#line 1509 "limbaj.tab.c"
    break;

  case 54: /* function: FCALL ID '(' callInstructions ')'  */
#line 119 "limbaj.y"
               {    
                    insertName((yyvsp[-3].strVal));
                    if (!checkIdentity((yyvsp[-3].strVal)))
                         printf("The types of the called function do not match with the declared types for %s \n", (yyvsp[-3].strVal));
               }
#line 1519 "limbaj.tab.c"
    break;

  case 58: /* callInstruction: INTTYPE ID  */
#line 133 "limbaj.y"
                                 {insertIntoUserArray((yyvsp[-1].dataType));}
#line 1525 "limbaj.tab.c"
    break;

  case 59: /* callInstruction: CHARTYPE ID  */
#line 134 "limbaj.y"
                                  {insertIntoUserArray((yyvsp[-1].dataType));}
#line 1531 "limbaj.tab.c"
    break;

  case 60: /* callInstruction: STRINGTYPE ID  */
#line 135 "limbaj.y"
                                    {insertIntoUserArray((yyvsp[-1].dataType));}
#line 1537 "limbaj.tab.c"
    break;

  case 61: /* callInstruction: BOOLTYPE ID  */
#line 136 "limbaj.y"
                                  {insertIntoUserArray((yyvsp[-1].dataType));}
#line 1543 "limbaj.tab.c"
    break;

  case 63: /* callInstruction: NR  */
#line 138 "limbaj.y"
                         {insertIntoUserArray("int");}
#line 1549 "limbaj.tab.c"
    break;

  case 66: /* declInstruction: INTTYPE ID  */
#line 145 "limbaj.y"
                                    {  insertTEMP((yyvsp[-1].dataType)); insertIntoParamArray((yyvsp[-1].dataType));}
#line 1555 "limbaj.tab.c"
    break;

  case 67: /* declInstruction: CHARTYPE ID  */
#line 146 "limbaj.y"
                                    {  insertTEMP((yyvsp[-1].dataType)); insertIntoParamArray((yyvsp[-1].dataType));}
#line 1561 "limbaj.tab.c"
    break;

  case 68: /* declInstruction: STRINGTYPE ID  */
#line 147 "limbaj.y"
                                    {  insertTEMP((yyvsp[-1].dataType)); insertIntoParamArray((yyvsp[-1].dataType));}
#line 1567 "limbaj.tab.c"
    break;

  case 69: /* declInstruction: BOOLTYPE ID  */
#line 148 "limbaj.y"
                                    {  insertTEMP((yyvsp[-1].dataType)); insertIntoParamArray((yyvsp[-1].dataType));}
#line 1573 "limbaj.tab.c"
    break;

  case 70: /* exp: e  */
#line 151 "limbaj.y"
               {(yyval.intVal)=(yyvsp[0].intVal); printf("Valoarea expresiei este %d\n",(yyval.intVal));}
#line 1579 "limbaj.tab.c"
    break;

  case 71: /* e: e PLUS e  */
#line 154 "limbaj.y"
                  {(yyval.intVal)=(yyvsp[-2].intVal)+(yyvsp[0].intVal); }
#line 1585 "limbaj.tab.c"
    break;

  case 72: /* e: e MINUS e  */
#line 155 "limbaj.y"
                   {(yyval.intVal)=(yyvsp[-2].intVal)-(yyvsp[0].intVal); }
#line 1591 "limbaj.tab.c"
    break;

  case 73: /* e: e MUL e  */
#line 156 "limbaj.y"
                 {(yyval.intVal)=(yyvsp[-2].intVal)*(yyvsp[0].intVal); }
#line 1597 "limbaj.tab.c"
    break;

  case 74: /* e: e DIV e  */
#line 157 "limbaj.y"
                 {(yyval.intVal)=(yyvsp[-2].intVal)/(yyvsp[0].intVal); }
#line 1603 "limbaj.tab.c"
    break;

  case 75: /* e: NR  */
#line 158 "limbaj.y"
          {(yyval.intVal)=(yyvsp[0].intVal); }
#line 1609 "limbaj.tab.c"
    break;

  case 76: /* e: DECL INTTYPE ID EQ NR '.'  */
#line 160 "limbaj.y"
          { 
               int i; 
               if((i=variableIndex((yyvsp[-3].strVal))) != -1){ 
                    updateVariableValue((yyvsp[-3].strVal), (yyvsp[-1].intVal));
                    (yyval.intVal) =  symbolTable[i].Value ;
               } else {
                    printf("Variable doesn't exist\n"); 
                    printf("Error: argument for Eval is not valid!\n");
                    exit(0);
               }
          }
#line 1625 "limbaj.tab.c"
    break;

  case 77: /* e: DECL INTTYPE ID '.'  */
#line 172 "limbaj.y"
          { 
               int i;
               if((i=variableIndex((yyvsp[-1].strVal))) != -1) {   
                    (yyval.intVal)= symbolTable[i].Value;
               } else {
                    printf("Variable doesn't exist\n"); 
                    printf("Error: argument for Eval is not valid!\n");
                    exit(1);
               }
          }
#line 1640 "limbaj.tab.c"
    break;

  case 81: /* bodyEnd: RBRACKET  */
#line 189 "limbaj.y"
                     { decreaseDepth(); }
#line 1646 "limbaj.tab.c"
    break;

  case 93: /* assignment: DECL ID EQ NR '.'  */
#line 214 "limbaj.y"
                                  { updateVariableValue((yyvsp[-3].strVal), (yyvsp[-1].intVal)); }
#line 1652 "limbaj.tab.c"
    break;

  case 100: /* assignment: DECL ID EQ ID '.'  */
#line 221 "limbaj.y"
                                  { updateVariableId((yyvsp[-3].strVal), (yyvsp[-1].strVal)); }
#line 1658 "limbaj.tab.c"
    break;

  case 105: /* plus: ID PLUS ID  */
#line 230 "limbaj.y"
                  { checkDeclaration((yyvsp[-2].strVal)); checkDeclaration((yyvsp[0].strVal)); }
#line 1664 "limbaj.tab.c"
    break;

  case 106: /* plus: ID PLUS NR  */
#line 231 "limbaj.y"
                  { checkDeclaration((yyvsp[-2].strVal));}
#line 1670 "limbaj.tab.c"
    break;

  case 107: /* plus: NR PLUS ID  */
#line 232 "limbaj.y"
                  { checkDeclaration((yyvsp[0].strVal));}
#line 1676 "limbaj.tab.c"
    break;

  case 108: /* minus: ID MINUS ID  */
#line 235 "limbaj.y"
                        { checkDeclaration((yyvsp[-2].strVal)); checkDeclaration((yyvsp[0].strVal)); }
#line 1682 "limbaj.tab.c"
    break;

  case 109: /* minus: ID MINUS NR  */
#line 236 "limbaj.y"
                        { checkDeclaration((yyvsp[-2].strVal));}
#line 1688 "limbaj.tab.c"
    break;

  case 110: /* minus: NR MINUS ID  */
#line 237 "limbaj.y"
                        { checkDeclaration((yyvsp[0].strVal));}
#line 1694 "limbaj.tab.c"
    break;

  case 111: /* mul: ID MUL ID  */
#line 240 "limbaj.y"
                 { checkDeclaration((yyvsp[-2].strVal)); checkDeclaration((yyvsp[0].strVal)); }
#line 1700 "limbaj.tab.c"
    break;

  case 112: /* mul: ID MUL NR  */
#line 241 "limbaj.y"
                 { checkDeclaration((yyvsp[-2].strVal));}
#line 1706 "limbaj.tab.c"
    break;

  case 113: /* mul: NR MUL ID  */
#line 242 "limbaj.y"
                 { checkDeclaration((yyvsp[0].strVal));}
#line 1712 "limbaj.tab.c"
    break;

  case 114: /* div: ID DIV ID  */
#line 245 "limbaj.y"
                 { checkDeclaration((yyvsp[-2].strVal)); checkDeclaration((yyvsp[0].strVal)); }
#line 1718 "limbaj.tab.c"
    break;

  case 115: /* div: ID DIV NR  */
#line 246 "limbaj.y"
                 { checkDeclaration((yyvsp[-2].strVal));}
#line 1724 "limbaj.tab.c"
    break;

  case 116: /* div: NR DIV ID  */
#line 247 "limbaj.y"
                 { checkDeclaration((yyvsp[0].strVal));}
#line 1730 "limbaj.tab.c"
    break;


#line 1734 "limbaj.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 275 "limbaj.y"


void yyerror(char * s){
printf("Error: %s on line:%d and yytext is %s\n",s,yylineno,yytext);
}

int main(int argc, char** argv){
     yyin=fopen(argv[1],"r");
     yyparse();
}
