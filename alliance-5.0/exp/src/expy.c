/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     PP = 259,
     MM = 260,
     MAX = 261,
     MIN = 262,
     SUP = 263,
     INF = 264,
     SORT = 265,
     RSORT = 266,
     MESS = 267,
     DEF = 268,
     NDEF = 269,
     NUMBER = 270,
     IDENT = 271,
     REGEX = 272
   };
#endif
/* Tokens.  */
#define IF 258
#define PP 259
#define MM 260
#define MAX 261
#define MIN 262
#define SUP 263
#define INF 264
#define SORT 265
#define RSORT 266
#define MESS 267
#define DEF 268
#define NDEF 269
#define NUMBER 270
#define IDENT 271
#define REGEX 272




/* Copy the first part of user declarations.  */
#line 1 "../../../src/exp/src/expy.y"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "exp.h"
#include "ht.h"

#define VERBOSE        (int)((htget(dico, "verbose")->VAL.f+EPSILON))
#define EPSILON        0.00001
#define anint(x)       floor((x) + 0.5) 
#define test_init(i)   if (((i)->TYPE==0) && ((pcond==0) || (cond[pcond]>0.))) {\
                         printf(" %-3d %s : <%s> undefined\n", lineno, expfname, (i)->KEY);\
                         exit (1);}\
                       (i)->USED = 1
#define pa(v,e) if (VERBOSE>2) printf("%7.3f -> %s\n",e,v->KEY)
#define pi(e)   if (VERBOSE>2) printf("%7.3f <- %s\n",e->VAL.f,e->KEY)
#define pe(s,n) if (VERBOSE>2) printf("%7.3f %s\n",n,s)
#define PCONDMAX 16 /* profondeur de la pile de conditions */

int lineno=1;
char * expfname;
ht_t * dico;

static int pcond=0;
static double cond[PCONDMAX]; /* pile de conditions : +1:vrai, -1:faux */
static char * string_fmt = "%-65s";
static char * float_fmt = "%7.3f";
static char * integer_fmt = "%4d";
static htelt_t * ele;

double limit (int fun, htelt_t * args)
{
  htelt_t *ele;
  double res;
  for (ele = args; ele && ele->TYPE == 0; ele = ele->NEXT);
  if (ele == NULL)
  {  
    printf(" %-3d %s : none variable defined\n", lineno, expfname);\
    exit (1);
  }
  res = ele->VAL.f;
  for (; ele; ele = ele->NEXT)
    if ((ele->TYPE != 0) && (((fun == MAX) && (res < ele->VAL.f)) || ((fun == MIN) && (res > ele->VAL.f))))
      res = ele->VAL.f;
  eltremove (args);
  return res;
}

htelt_t *bsort (int sens, htelt_t * args)
{
  htelt_t *ele;
  int bubble = 1;
  if (args->NEXT) /* au moins de 2 elements dans la liste */
    while (bubble)
    {
      bubble = 0;
      for (ele = args; ele->NEXT; ele = ele->NEXT)
        if (((sens == SORT) && (((ele->VAL.e)->VAL.f) > (((ele->NEXT)->VAL.e)->VAL.f)))
        || ((sens == RSORT) && (((ele->VAL.e)->VAL.f) < (((ele->NEXT)->VAL.e)->VAL.f)))
        || ((sens == MESS) && (strcmp((ele->VAL.e)->KEY,((ele->NEXT)->VAL.e)->KEY)>0)))
        {
          htelt_t *tmp = ele->VAL.e;
          ele->VAL.e = (ele->NEXT)->VAL.e;
          (ele->NEXT)->VAL.e = tmp;
          bubble = 1;
        }
    }    
  return args;
}

htelt_t *mess (int type, char *fmt, htelt_t * args)
{
  htelt_t *ele;
  if (VERBOSE)
  {
    for (ele = args; ele; ele = ele->NEXT)
    {
      if ((type == MESS) || ((ele->VAL.e)->TYPE == HT_FLOAT))
      {
        printf (string_fmt, (ele->VAL.e)->KEY);
        if ((ele->VAL.e)->TYPE == HT_FLOAT)
        {
          printf (" = ");
          printf (fmt, (ele->VAL.e)->VAL.f);
        }
        printf ("\n");
      }
    }
  }
  eltremove (args);
}



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 95 "../../../src/exp/src/expy.y"
{
  htelt_t * e;
  double    f;
}
/* Line 187 of yacc.c.  */
#line 229 "expy.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 242 "expy.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  26
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNRULES -- Number of states.  */
#define YYNSTATES  121

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,    23,    21,    32,    22,     2,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    31,
      19,    18,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    26,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    12,    17,    21,    25,    32,
      39,    46,    53,    60,    67,    71,    75,    78,    82,    86,
      88,    90,    93,    96,   100,   104,   108,   112,   116,   120,
     124,   127,   134,   141,   148,   153,   158,   163,   168,   170,
     172,   176,   178,   182,   184,   188,   190
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,    -1,    35,    34,    -1,    25,    36,    37,
      26,    -1,    27,    36,    37,    28,    -1,    25,    37,    26,
      -1,    27,    37,    28,    -1,    25,    10,    29,    39,    30,
      26,    -1,    27,    10,    29,    39,    30,    28,    -1,    25,
      11,    29,    39,    30,    26,    -1,    27,    11,    29,    39,
      30,    28,    -1,    25,    12,    29,    39,    30,    26,    -1,
      27,    12,    29,    39,    30,    28,    -1,    25,    36,    26,
      -1,    27,    36,    28,    -1,    37,    31,    -1,    36,    37,
      31,    -1,    16,    18,    37,    -1,    15,    -1,    16,    -1,
      16,     4,    -1,    16,     5,    -1,    37,    19,    37,    -1,
      37,    20,    37,    -1,    37,    21,    37,    -1,    37,    22,
      37,    -1,    37,    23,    37,    -1,    37,    24,    37,    -1,
      29,    37,    30,    -1,    22,    37,    -1,     3,    29,    38,
      32,    40,    30,    -1,     8,    29,    37,    32,    37,    30,
      -1,     9,    29,    37,    32,    37,    30,    -1,     6,    29,
      40,    30,    -1,     7,    29,    40,    30,    -1,    13,    29,
      16,    30,    -1,    14,    29,    16,    30,    -1,    37,    -1,
      16,    -1,    16,    32,    39,    -1,    17,    -1,    17,    32,
      39,    -1,    37,    -1,    37,    32,    40,    -1,    17,    -1,
      17,    32,    40,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   109,   109,   110,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   125,   126,   128,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   150,   151,   152,   153,   154,   155,   157,   163,
     164,   165,   166,   168,   169,   170,   178
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "PP", "MM", "MAX", "MIN", "SUP",
  "INF", "SORT", "RSORT", "MESS", "DEF", "NDEF", "NUMBER", "IDENT",
  "REGEX", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'['", "']'",
  "'{'", "'}'", "'('", "')'", "';'", "','", "$accept", "blocs", "bloc",
  "exps", "exp", "cond", "idents", "args", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    61,    60,
      62,    43,    45,    42,    47,    91,    93,   123,   125,    40,
      41,    59,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    36,    36,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    38,    39,
      39,    39,    39,    40,    40,    40,    40
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     4,     4,     3,     3,     6,     6,
       6,     6,     6,     6,     3,     3,     2,     3,     3,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       2,     6,     6,     6,     4,     4,     4,     4,     1,     1,
       3,     1,     3,     1,     3,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       0,    30,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     6,    16,     0,     0,     0,    15,     0,     7,    38,
       0,    45,    43,     0,     0,     0,     0,    39,    41,     0,
       0,     0,     0,     0,    18,    29,     4,    17,    23,    24,
      25,    26,    27,    28,     0,     0,     0,     5,     0,     0,
       0,    34,    35,     0,     0,     0,     0,     0,     0,     0,
      36,    37,     0,     0,     0,     0,    46,    44,     0,     0,
      40,    42,     8,    10,    12,     9,    11,    13,    31,    32,
      33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    19,    62,    60,    69,    63
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -30
static const yytype_int16 yypact[] =
{
     -17,    62,    91,     7,   -17,   -18,     0,     9,    11,    12,
      13,    14,    22,    29,    34,   -30,    32,   142,   142,     6,
      33,    50,    51,    52,   108,   167,   -30,   -30,   142,   125,
     125,   142,   142,   -13,   -13,   -13,    67,    79,   -30,   -30,
     142,    10,    66,   -30,   180,   142,   142,   142,   142,   142,
     142,   -30,   -30,   -13,   -13,   -13,   -30,   193,   -30,   230,
      76,    77,   146,    80,    82,   153,   160,    86,    87,    95,
      96,    97,    99,   105,   230,   -30,   -30,   -30,   230,   230,
      10,    10,   -30,   -30,   113,   114,   116,   -30,   125,   125,
     125,   -30,   -30,   142,   142,   -13,   -13,    56,   126,   127,
     -30,   -30,   131,   132,   133,   163,   -30,   -30,   206,   218,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -30,   158,   -30,   161,    -1,   -30,   -29,   -28
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      20,    25,    64,    67,    68,    70,    71,    26,     1,     5,
       2,    28,     6,     7,     8,     9,    41,    42,    44,    13,
      14,    15,    16,    57,    84,    85,    86,    59,    17,    29,
      65,    66,    43,    49,    50,    18,    38,    39,    30,    74,
      31,    32,    33,    34,    78,    79,    80,    81,    82,    83,
      40,    35,    45,    46,    47,    48,    49,    50,    36,    51,
     105,   106,   107,    37,    52,     5,   110,   111,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    53,
      54,    55,   112,    72,    17,    45,    46,    47,    48,    49,
      50,    18,   108,   109,     5,    73,    75,     6,     7,     8,
       9,    21,    22,    23,    13,    14,    15,    16,    88,    89,
      91,     5,    92,    17,     6,     7,     8,     9,    95,    96,
      18,    13,    14,    15,    16,    97,    98,    99,     5,   100,
      17,     6,     7,     8,     9,   101,    56,    18,    13,    14,
      15,    16,    61,   102,   103,     5,   104,    17,     6,     7,
       8,     9,   113,   114,    18,    13,    14,    15,    16,   115,
     116,   117,    27,    24,    17,    45,    46,    47,    48,    49,
      50,    18,    45,    46,    47,    48,    49,    50,    90,    45,
      46,    47,    48,    49,    50,    93,    45,    46,    47,    48,
      49,    50,    94,   118,     0,    58,     0,     0,    52,    45,
      46,    47,    48,    49,    50,     0,    76,     0,     0,     0,
       0,    77,    45,    46,    47,    48,    49,    50,     0,     0,
       0,    87,     0,     0,    77,    45,    46,    47,    48,    49,
      50,     0,     0,     0,     0,     0,   119,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,   120,    45,
      46,    47,    48,    49,    50
};

static const yytype_int8 yycheck[] =
{
       1,     2,    30,    16,    17,    34,    35,     0,    25,     3,
      27,    29,     6,     7,     8,     9,    17,    18,    19,    13,
      14,    15,    16,    24,    53,    54,    55,    28,    22,    29,
      31,    32,    26,    23,    24,    29,     4,     5,    29,    40,
      29,    29,    29,    29,    45,    46,    47,    48,    49,    50,
      18,    29,    19,    20,    21,    22,    23,    24,    29,    26,
      88,    89,    90,    29,    31,     3,    95,    96,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    29,
      29,    29,    26,    16,    22,    19,    20,    21,    22,    23,
      24,    29,    93,    94,     3,    16,    30,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    32,    32,
      30,     3,    30,    22,     6,     7,     8,     9,    32,    32,
      29,    13,    14,    15,    16,    30,    30,    30,     3,    30,
      22,     6,     7,     8,     9,    30,    28,    29,    13,    14,
      15,    16,    17,    30,    30,     3,    30,    22,     6,     7,
       8,     9,    26,    26,    29,    13,    14,    15,    16,    28,
      28,    28,     4,     2,    22,    19,    20,    21,    22,    23,
      24,    29,    19,    20,    21,    22,    23,    24,    32,    19,
      20,    21,    22,    23,    24,    32,    19,    20,    21,    22,
      23,    24,    32,    30,    -1,    28,    -1,    -1,    31,    19,
      20,    21,    22,    23,    24,    -1,    26,    -1,    -1,    -1,
      -1,    31,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    -1,    -1,    31,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,    19,
      20,    21,    22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    25,    27,    34,    35,     3,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    22,    29,    36,
      37,    10,    11,    12,    36,    37,     0,    34,    29,    29,
      29,    29,    29,    29,    29,    29,    29,    29,     4,     5,
      18,    37,    37,    26,    37,    19,    20,    21,    22,    23,
      24,    26,    31,    29,    29,    29,    28,    37,    28,    37,
      38,    17,    37,    40,    40,    37,    37,    16,    17,    39,
      39,    39,    16,    16,    37,    30,    26,    31,    37,    37,
      37,    37,    37,    37,    39,    39,    39,    28,    32,    32,
      32,    30,    30,    32,    32,    32,    32,    30,    30,    30,
      30,    30,    30,    30,    30,    40,    40,    40,    37,    37,
      39,    39,    26,    26,    26,    28,    28,    28,    30,    30,
      30
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 109 "../../../src/exp/src/expy.y"
    { if (VERBOSE>1) htstat(dico); return 1;}
    break;

  case 4:
#line 112 "../../../src/exp/src/expy.y"
    { fprintf (yyout, float_fmt, (yyvsp[(3) - (4)].f));}
    break;

  case 5:
#line 113 "../../../src/exp/src/expy.y"
    { fprintf (yyout, integer_fmt, (int)(yyvsp[(3) - (4)].f));}
    break;

  case 6:
#line 114 "../../../src/exp/src/expy.y"
    { fprintf (yyout, float_fmt, (yyvsp[(2) - (3)].f));}
    break;

  case 7:
#line 115 "../../../src/exp/src/expy.y"
    { fprintf (yyout, integer_fmt, (int)(yyvsp[(2) - (3)].f));}
    break;

  case 8:
#line 116 "../../../src/exp/src/expy.y"
    { mess(SORT,float_fmt, bsort (SORT, (yyvsp[(4) - (6)].e)));}
    break;

  case 9:
#line 117 "../../../src/exp/src/expy.y"
    { mess(SORT,integer_fmt, bsort (SORT, (yyvsp[(4) - (6)].e)));}
    break;

  case 10:
#line 118 "../../../src/exp/src/expy.y"
    { mess(SORT,float_fmt, bsort (RSORT, (yyvsp[(4) - (6)].e)));}
    break;

  case 11:
#line 119 "../../../src/exp/src/expy.y"
    { mess(SORT,integer_fmt, bsort (RSORT, (yyvsp[(4) - (6)].e)));}
    break;

  case 12:
#line 120 "../../../src/exp/src/expy.y"
    { mess(MESS,float_fmt, bsort (MESS, (yyvsp[(4) - (6)].e)));}
    break;

  case 13:
#line 121 "../../../src/exp/src/expy.y"
    { mess(MESS,integer_fmt, bsort (MESS, (yyvsp[(4) - (6)].e)));}
    break;

  case 14:
#line 122 "../../../src/exp/src/expy.y"
    { }
    break;

  case 15:
#line 123 "../../../src/exp/src/expy.y"
    { }
    break;

  case 16:
#line 125 "../../../src/exp/src/expy.y"
    { }
    break;

  case 17:
#line 126 "../../../src/exp/src/expy.y"
    { }
    break;

  case 18:
#line 128 "../../../src/exp/src/expy.y"
    { if ((pcond==0) || (cond[pcond]>0.)) {
                                          (yyvsp[(1) - (3)].e)->VAL.f=(yyvsp[(3) - (3)].f); (yyvsp[(1) - (3)].e)->TYPE=HT_FLOAT; 
                                          (yyvsp[(1) - (3)].e)->FNAME=expfname; (yyvsp[(1) - (3)].e)->FLINE=lineno; 
                                          (yyval.f)=(yyvsp[(3) - (3)].f); pa((yyvsp[(1) - (3)].e),(yyval.f));
                                        }
                                      }
    break;

  case 19:
#line 134 "../../../src/exp/src/expy.y"
    { (yyval.f) = (yyvsp[(1) - (1)].f);  pe(" ",(yyval.f));}
    break;

  case 20:
#line 135 "../../../src/exp/src/expy.y"
    { test_init((yyvsp[(1) - (1)].e)); (yyval.f) = (yyvsp[(1) - (1)].e)->VAL.f; pi((yyvsp[(1) - (1)].e));}
    break;

  case 21:
#line 136 "../../../src/exp/src/expy.y"
    { test_init((yyvsp[(1) - (2)].e)); (yyval.f) = (yyvsp[(1) - (2)].e)->VAL.f; (yyvsp[(1) - (2)].e)->VAL.f += 1.0;}
    break;

  case 22:
#line 137 "../../../src/exp/src/expy.y"
    { test_init((yyvsp[(1) - (2)].e)); (yyval.f) = (yyvsp[(1) - (2)].e)->VAL.f; (yyvsp[(1) - (2)].e)->VAL.f -= 1.0;}
    break;

  case 23:
#line 138 "../../../src/exp/src/expy.y"
    { (yyval.f) = ((yyvsp[(1) - (3)].f) < (yyvsp[(3) - (3)].f)) ? 1. : -1.; pe(" < ",(yyval.f));}
    break;

  case 24:
#line 139 "../../../src/exp/src/expy.y"
    { (yyval.f) = ((yyvsp[(1) - (3)].f) > (yyvsp[(3) - (3)].f)) ? 1. : -1.; pe(" > ",(yyval.f));}
    break;

  case 25:
#line 140 "../../../src/exp/src/expy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) + (yyvsp[(3) - (3)].f); pe(" + ",(yyval.f));}
    break;

  case 26:
#line 141 "../../../src/exp/src/expy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) - (yyvsp[(3) - (3)].f); pe(" - ",(yyval.f));}
    break;

  case 27:
#line 142 "../../../src/exp/src/expy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) * (yyvsp[(3) - (3)].f); pe(" * ",(yyval.f));}
    break;

  case 28:
#line 143 "../../../src/exp/src/expy.y"
    { (yyval.f) = (yyvsp[(1) - (3)].f) / (yyvsp[(3) - (3)].f); pe(" / ",(yyval.f));}
    break;

  case 29:
#line 144 "../../../src/exp/src/expy.y"
    { (yyval.f) = (yyvsp[(2) - (3)].f);}
    break;

  case 30:
#line 145 "../../../src/exp/src/expy.y"
    { (yyval.f) = -(yyvsp[(2) - (2)].f); pe(" - ",(yyval.f));}
    break;

  case 31:
#line 146 "../../../src/exp/src/expy.y"
    { for (ele = (yyvsp[(5) - (6)].e); ele->NEXT; ele = ele->NEXT);
                                        (yyval.f) = ele->VAL.f;
                                        pcond--; eltremove ((yyvsp[(5) - (6)].e)); 
                                      }
    break;

  case 32:
#line 150 "../../../src/exp/src/expy.y"
    { (yyval.f) = anint(((yyvsp[(5) - (6)].f)+((yyvsp[(3) - (6)].f)/2)-EPSILON)/(yyvsp[(3) - (6)].f))*(yyvsp[(3) - (6)].f); pe(" sup ",(yyval.f));}
    break;

  case 33:
#line 151 "../../../src/exp/src/expy.y"
    { (yyval.f) = ((int)(floor(((yyvsp[(5) - (6)].f)+EPSILON)/(yyvsp[(3) - (6)].f))))*(yyvsp[(3) - (6)].f); pe(" inf ",(yyval.f));}
    break;

  case 34:
#line 152 "../../../src/exp/src/expy.y"
    { (yyval.f) = limit (MAX, (yyvsp[(3) - (4)].e)); pe(" max ",(yyval.f));}
    break;

  case 35:
#line 153 "../../../src/exp/src/expy.y"
    { (yyval.f) = limit (MIN, (yyvsp[(3) - (4)].e)); pe(" min ",(yyval.f));}
    break;

  case 36:
#line 154 "../../../src/exp/src/expy.y"
    { (yyval.f) = ((yyvsp[(3) - (4)].e)->TYPE==0) ? -1. : +1.; pe((yyvsp[(3) - (4)].e),(yyval.f));}
    break;

  case 37:
#line 155 "../../../src/exp/src/expy.y"
    { (yyval.f) = ((yyvsp[(3) - (4)].e)->TYPE==0) ? +1. : -1.; pe((yyvsp[(3) - (4)].e),(yyval.f));}
    break;

  case 38:
#line 157 "../../../src/exp/src/expy.y"
    { if (pcond < PCONDMAX) 
                                          cond[++pcond] = (yyvsp[(1) - (1)].f); 
                                        else
                                          yyerror ("too much conditions");
                                      }
    break;

  case 39:
#line 163 "../../../src/exp/src/expy.y"
    { (yyval.e) = eltadd (NULL,NULL); (yyval.e)->VAL.e=(yyvsp[(1) - (1)].e);}
    break;

  case 40:
#line 164 "../../../src/exp/src/expy.y"
    { (yyval.e) = eltadd ((yyvsp[(3) - (3)].e),NULL); (yyval.e)->VAL.e=(yyvsp[(1) - (3)].e);}
    break;

  case 41:
#line 165 "../../../src/exp/src/expy.y"
    { (yyval.e) = (yyvsp[(1) - (1)].e)->NEXT; (yyvsp[(1) - (1)].e)->NEXT=NULL;}
    break;

  case 42:
#line 166 "../../../src/exp/src/expy.y"
    { (yyval.e) = (yyvsp[(1) - (3)].e)->NEXT; (yyvsp[(1) - (3)].e)->NEXT=(yyvsp[(3) - (3)].e);}
    break;

  case 43:
#line 168 "../../../src/exp/src/expy.y"
    { (yyval.e) = eltadd (NULL,NULL); (yyval.e)->VAL.f=(yyvsp[(1) - (1)].f); (yyval.e)->TYPE=HT_FLOAT;pe(" , ",(yyvsp[(1) - (1)].f));}
    break;

  case 44:
#line 169 "../../../src/exp/src/expy.y"
    { (yyval.e) = eltadd ((yyvsp[(3) - (3)].e),NULL); (yyval.e)->VAL.f=(yyvsp[(1) - (3)].f); (yyval.e)->TYPE=HT_FLOAT;pe(" , ",(yyvsp[(3) - (3)].e));}
    break;

  case 45:
#line 170 "../../../src/exp/src/expy.y"
    { (yyval.e) = (yyvsp[(1) - (1)].e)->NEXT; (yyvsp[(1) - (1)].e)->NEXT=NULL; 
                                        for (ele = (yyval.e); ele; ele = ele->NEXT)
                                        {  
                                          ele->VAL.e->USED = 1;
                                          ele->TYPE = (ele->VAL.e)->TYPE;
                                          ele->VAL.f = (ele->VAL.e)->VAL.f;
                                        }  
                                      }
    break;

  case 46:
#line 178 "../../../src/exp/src/expy.y"
    { (yyval.e) = (yyvsp[(1) - (3)].e)->NEXT; (yyvsp[(1) - (3)].e)->NEXT=(yyvsp[(3) - (3)].e);   
                                        for (ele = (yyvsp[(1) - (3)].e); ele; ele = ele->NEXT)
                                        {
                                          ele->VAL.e->USED = 1;
                                          ele->TYPE = (ele->VAL.e)->TYPE;
                                          ele->VAL.f = ele->VAL.e->VAL.f;
                                        }  
                                      }
    break;


/* Line 1267 of yacc.c.  */
#line 1796 "expy.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 187 "../../../src/exp/src/expy.y"

int yyerror(char *s)
{
  printf(" %-3d %s : %s\n", lineno, expfname, s);
  exit (1);
}

