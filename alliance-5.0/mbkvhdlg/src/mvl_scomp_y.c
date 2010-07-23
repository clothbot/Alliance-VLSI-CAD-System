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

/* All symbols defined below should begin with mvl_y_ or MVL_Y_, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define MVL_Y_BISON 1

/* Bison version.  */
#define MVL_Y_BISON_VERSION "2.3"

/* Skeleton name.  */
#define MVL_Y_SKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define MVL_Y_PURE 0

/* Using locations.  */
#define MVL_Y_LSP_NEEDED 0



/* Tokens.  */
#ifndef MVL_Y_TOKENTYPE
# define MVL_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum mvl_y_tokentype {
     Ampersand = 258,
     Apostrophe = 259,
     LeftParen = 260,
     RightParen = 261,
     DoubleStar = 262,
     Star = 263,
     Plus = 264,
     Comma = 265,
     Minus = 266,
     VarAsgn = 267,
     Colon = 268,
     Semicolon = 269,
     _LESym = 270,
     Box = 271,
     _LTSym = 272,
     Arrow = 273,
     _EQSym = 274,
     _GESym = 275,
     _GTSym = 276,
     Bar = 277,
     _NESym = 278,
     Dot = 279,
     Slash = 280,
     Identifier = 281,
     DecimalInt = 282,
     DecimalReal = 283,
     AbstractLit = 284,
     BasedInt = 285,
     BasedReal = 286,
     CharacterLit = 287,
     StringLit = 288,
     BitStringLit = 289,
     ABS = 290,
     ACCESS = 291,
     AFTER = 292,
     ALIAS = 293,
     ALL = 294,
     tok_AND = 295,
     ARCHITECTURE = 296,
     ARRAY = 297,
     ARG = 298,
     ASSERT = 299,
     ATTRIBUTE = 300,
     _BEGIN = 301,
     BIT = 302,
     BIT_VECTOR = 303,
     BLOCK = 304,
     BODY = 305,
     BUFFER = 306,
     BUS = 307,
     CASE = 308,
     CLOCK = 309,
     COMPONENT = 310,
     CONFIGURATION = 311,
     CONSTANT = 312,
     CONVERT = 313,
     DISCONNECT = 314,
     DOWNTO = 315,
     ELSE = 316,
     ELSIF = 317,
     _END = 318,
     ENTITY = 319,
     ERROR = 320,
     _EXIT = 321,
     _FILE = 322,
     FOR = 323,
     FUNCTION = 324,
     GENERATE = 325,
     GENERIC = 326,
     GUARDED = 327,
     IF = 328,
     _IN = 329,
     _INOUT = 330,
     INTEGER = 331,
     IS = 332,
     _LABEL = 333,
     LIBRARY = 334,
     _LINKAGE = 335,
     _LIST = 336,
     LOOP = 337,
     MAP = 338,
     MOD = 339,
     MUX_BIT = 340,
     MUX_VECTOR = 341,
     _NAND = 342,
     NATURAL = 343,
     NATURAL_VECTOR = 344,
     NEW = 345,
     _NEXT = 346,
     _NOR = 347,
     _NOT = 348,
     tok_NULL = 349,
     OF = 350,
     ON = 351,
     OPEN = 352,
     _OR = 353,
     OTHERS = 354,
     _OUT = 355,
     _PACKAGE = 356,
     PORT = 357,
     POSITIVE = 358,
     PROCEDURE = 359,
     PROCESS = 360,
     RANGE = 361,
     RECORD = 362,
     REG_BIT = 363,
     REG_VECTOR = 364,
     REGISTER = 365,
     REM = 366,
     REPORT = 367,
     RETURN = 368,
     SELECT = 369,
     SEVERITY = 370,
     SIGNAL = 371,
     _STABLE = 372,
     STRING = 373,
     SUBTYPE = 374,
     THEN = 375,
     TO = 376,
     TRANSPORT = 377,
     _TYPE = 378,
     UNITS = 379,
     UNTIL = 380,
     USE = 381,
     VARIABLE = 382,
     WAIT = 383,
     WARNING = 384,
     WHEN = 385,
     WHILE = 386,
     WITH = 387,
     WOR_BIT = 388,
     WOR_VECTOR = 389,
     _XOR = 390
   };
#endif
/* Tokens.  */
#define Ampersand 258
#define Apostrophe 259
#define LeftParen 260
#define RightParen 261
#define DoubleStar 262
#define Star 263
#define Plus 264
#define Comma 265
#define Minus 266
#define VarAsgn 267
#define Colon 268
#define Semicolon 269
#define _LESym 270
#define Box 271
#define _LTSym 272
#define Arrow 273
#define _EQSym 274
#define _GESym 275
#define _GTSym 276
#define Bar 277
#define _NESym 278
#define Dot 279
#define Slash 280
#define Identifier 281
#define DecimalInt 282
#define DecimalReal 283
#define AbstractLit 284
#define BasedInt 285
#define BasedReal 286
#define CharacterLit 287
#define StringLit 288
#define BitStringLit 289
#define ABS 290
#define ACCESS 291
#define AFTER 292
#define ALIAS 293
#define ALL 294
#define tok_AND 295
#define ARCHITECTURE 296
#define ARRAY 297
#define ARG 298
#define ASSERT 299
#define ATTRIBUTE 300
#define _BEGIN 301
#define BIT 302
#define BIT_VECTOR 303
#define BLOCK 304
#define BODY 305
#define BUFFER 306
#define BUS 307
#define CASE 308
#define CLOCK 309
#define COMPONENT 310
#define CONFIGURATION 311
#define CONSTANT 312
#define CONVERT 313
#define DISCONNECT 314
#define DOWNTO 315
#define ELSE 316
#define ELSIF 317
#define _END 318
#define ENTITY 319
#define ERROR 320
#define _EXIT 321
#define _FILE 322
#define FOR 323
#define FUNCTION 324
#define GENERATE 325
#define GENERIC 326
#define GUARDED 327
#define IF 328
#define _IN 329
#define _INOUT 330
#define INTEGER 331
#define IS 332
#define _LABEL 333
#define LIBRARY 334
#define _LINKAGE 335
#define _LIST 336
#define LOOP 337
#define MAP 338
#define MOD 339
#define MUX_BIT 340
#define MUX_VECTOR 341
#define _NAND 342
#define NATURAL 343
#define NATURAL_VECTOR 344
#define NEW 345
#define _NEXT 346
#define _NOR 347
#define _NOT 348
#define tok_NULL 349
#define OF 350
#define ON 351
#define OPEN 352
#define _OR 353
#define OTHERS 354
#define _OUT 355
#define _PACKAGE 356
#define PORT 357
#define POSITIVE 358
#define PROCEDURE 359
#define PROCESS 360
#define RANGE 361
#define RECORD 362
#define REG_BIT 363
#define REG_VECTOR 364
#define REGISTER 365
#define REM 366
#define REPORT 367
#define RETURN 368
#define SELECT 369
#define SEVERITY 370
#define SIGNAL 371
#define _STABLE 372
#define STRING 373
#define SUBTYPE 374
#define THEN 375
#define TO 376
#define TRANSPORT 377
#define _TYPE 378
#define UNITS 379
#define UNTIL 380
#define USE 381
#define VARIABLE 382
#define WAIT 383
#define WARNING 384
#define WHEN 385
#define WHILE 386
#define WITH 387
#define WOR_BIT 388
#define WOR_VECTOR 389
#define _XOR 390




/* Copy the first part of user declarations.  */
#line 13 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"

#include <stdio.h>
#include <string.h>
#include "mut.h"
#include "mlo.h"
#include "mvl_stype.h"
#include "mvl_syacc.h"
#include "mvl_stdef.h"
#include "gen_generic.h"


static int           MVL_GENFLG = 0   ; /* Indicates if generic         */
static int           MVL_CONRNK = 0   ; /* rank of an implicit connexion*/
static int           MVL_SIGIDX = 1   ; /* structural's signal index    */
static int           MVL_SIMFLG = 0   ; /* simple flag                  */
static int           MVL_CONCNT = 0   ; /* connector's count            */
static char         *MVL_MODNAM ;       /* current model name           */
static char         *MVL_CHDNAM ;       /* child's model name           */
static char         *MVL_LOCNAM ;       /* instance's name              */
static struct chain *MVL_NM1LST = NULL; /* 1-st name liste              */
static struct chain *MVL_NM2LST = NULL; /* 2-nd name liste              */
static struct lofig *MVL_CHDPNT = NULL; /* current child pointer        */
static struct lofig *MVL_CHDHED = NULL; /* childs list                  */
static struct ptype *MVL_PTPPNT = NULL;
static struct chain *MVL_GENLST = NULL;
static struct logen *MVL_GENPNT = NULL;
static struct logen  MVL_LOGEN;
static long              base ;



/* Enabling traces.  */
#ifndef MVL_Y_DEBUG
# define MVL_Y_DEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef MVL_Y_ERROR_VERBOSE
# undef MVL_Y_ERROR_VERBOSE
# define MVL_Y_ERROR_VERBOSE 1
#else
# define MVL_Y_ERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef MVL_Y_TOKEN_TABLE
# define MVL_Y_TOKEN_TABLE 0
#endif

#if ! defined MVL_Y_STYPE && ! defined MVL_Y_STYPE_IS_DECLARED
typedef union MVL_Y_STYPE
#line 44 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
{
  long         valu;
  char       *text;
  char        flag;
  mvl_name    name;
  mvl_expr    expr;
  }
/* Line 187 of yacc.c.  */
#line 405 "y.tab.c"
	MVL_Y_STYPE;
# define mvl_y_stype MVL_Y_STYPE /* obsolescent; will be withdrawn */
# define MVL_Y_STYPE_IS_DECLARED 1
# define MVL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 418 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef MVL_Y_TYPE_UINT8
typedef MVL_Y_TYPE_UINT8 mvl_y_type_uint8;
#else
typedef unsigned char mvl_y_type_uint8;
#endif

#ifdef MVL_Y_TYPE_INT8
typedef MVL_Y_TYPE_INT8 mvl_y_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char mvl_y_type_int8;
#else
typedef short int mvl_y_type_int8;
#endif

#ifdef MVL_Y_TYPE_UINT16
typedef MVL_Y_TYPE_UINT16 mvl_y_type_uint16;
#else
typedef unsigned short int mvl_y_type_uint16;
#endif

#ifdef MVL_Y_TYPE_INT16
typedef MVL_Y_TYPE_INT16 mvl_y_type_int16;
#else
typedef short int mvl_y_type_int16;
#endif

#ifndef MVL_Y_SIZE_T
# ifdef __SIZE_TYPE__
#  define MVL_Y_SIZE_T __SIZE_TYPE__
# elif defined size_t
#  define MVL_Y_SIZE_T size_t
# elif ! defined MVL_Y_SIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define MVL_Y_SIZE_T size_t
# else
#  define MVL_Y_SIZE_T unsigned int
# endif
#endif

#define MVL_Y_SIZE_MAXIMUM ((MVL_Y_SIZE_T) -1)

#ifndef MVL_Y__
# if MVL_Y_ENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define MVL_Y__(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef MVL_Y__
#  define MVL_Y__(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define MVL_Y_USE(e) ((void) (e))
#else
# define MVL_Y_USE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define MVL_Y_ID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
MVL_Y_ID (int i)
#else
static int
MVL_Y_ID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined mvl_y_overflow || MVL_Y_ERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef MVL_Y_STACK_USE_ALLOCA
#  if MVL_Y_STACK_USE_ALLOCA
#   ifdef __GNUC__
#    define MVL_Y_STACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define MVL_Y_STACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define MVL_Y_STACK_ALLOC alloca
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

# ifdef MVL_Y_STACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define MVL_Y_STACK_FREE(Ptr) do { /* empty */; } while (MVL_Y_ID (0))
#  ifndef MVL_Y_STACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define MVL_Y_STACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define MVL_Y_STACK_ALLOC MVL_Y_MALLOC
#  define MVL_Y_STACK_FREE MVL_Y_FREE
#  ifndef MVL_Y_STACK_ALLOC_MAXIMUM
#   define MVL_Y_STACK_ALLOC_MAXIMUM MVL_Y_SIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined MVL_Y_MALLOC || defined malloc) \
	     && (defined MVL_Y_FREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef MVL_Y_MALLOC
#   define MVL_Y_MALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (MVL_Y_SIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef MVL_Y_FREE
#   define MVL_Y_FREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined mvl_y_overflow || MVL_Y_ERROR_VERBOSE */


#if (! defined mvl_y_overflow \
     && (! defined __cplusplus \
	 || (defined MVL_Y_STYPE_IS_TRIVIAL && MVL_Y_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union mvl_y_alloc
{
  mvl_y_type_int16 mvl_y_ss;
  MVL_Y_STYPE mvl_y_vs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define MVL_Y_STACK_GAP_MAXIMUM (sizeof (union mvl_y_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define MVL_Y_STACK_BYTES(N) \
     ((N) * (sizeof (mvl_y_type_int16) + sizeof (MVL_Y_STYPE)) \
      + MVL_Y_STACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef MVL_Y_COPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define MVL_Y_COPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define MVL_Y_COPY(To, From, Count)		\
      do					\
	{					\
	  MVL_Y_SIZE_T mvl_y_i;				\
	  for (mvl_y_i = 0; mvl_y_i < (Count); mvl_y_i++)	\
	    (To)[mvl_y_i] = (From)[mvl_y_i];		\
	}					\
      while (MVL_Y_ID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables MVL_Y_SIZE and MVL_Y_STACKSIZE give the old and new number of
   elements in the stack, and MVL_Y_PTR gives the new location of the
   stack.  Advance MVL_Y_PTR to a properly aligned location for the next
   stack.  */
# define MVL_Y_STACK_RELOCATE(Stack)					\
    do									\
      {									\
	MVL_Y_SIZE_T mvl_y_newbytes;						\
	MVL_Y_COPY (&mvl_y_ptr->Stack, Stack, mvl_y_size);				\
	Stack = &mvl_y_ptr->Stack;						\
	mvl_y_newbytes = mvl_y_stacksize * sizeof (*Stack) + MVL_Y_STACK_GAP_MAXIMUM; \
	mvl_y_ptr += mvl_y_newbytes / sizeof (*mvl_y_ptr);				\
      }									\
    while (MVL_Y_ID (0))

#endif

/* MVL_Y_FINAL -- State number of the termination state.  */
#define MVL_Y_FINAL  8
/* MVL_Y_LAST -- Last index in MVL_Y_TABLE.  */
#define MVL_Y_LAST   225

/* MVL_Y_NTOKENS -- Number of terminals.  */
#define MVL_Y_NTOKENS  136
/* MVL_Y_NNTS -- Number of nonterminals.  */
#define MVL_Y_NNTS  95
/* MVL_Y_NRULES -- Number of rules.  */
#define MVL_Y_NRULES  159
/* MVL_Y_NRULES -- Number of states.  */
#define MVL_Y_NSTATES  250

/* MVL_Y_TRANSLATE(MVL_Y_LEX) -- Bison symbol number corresponding to MVL_Y_LEX.  */
#define MVL_Y_UNDEFTOK  2
#define MVL_Y_MAXUTOK   390

#define MVL_Y_TRANSLATE(MVL_Y_X)						\
  ((unsigned int) (MVL_Y_X) <= MVL_Y_MAXUTOK ? mvl_y_translate[MVL_Y_X] : MVL_Y_UNDEFTOK)

/* MVL_Y_TRANSLATE[MVL_Y_LEX] -- Bison symbol number corresponding to MVL_Y_LEX.  */
static const mvl_y_type_uint8 mvl_y_translate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

#if MVL_Y_DEBUG
/* MVL_Y_PRHS[MVL_Y_N] -- Index of the first RHS symbol of rule number MVL_Y_N in
   MVL_Y_RHS.  */
static const mvl_y_type_uint16 mvl_y_prhs[] =
{
       0,     0,     3,     6,     7,    17,    20,    21,    23,    24,
      31,    35,    38,    39,    43,    50,    52,    55,    56,    58,
      62,    66,    68,    70,    71,    73,    79,    83,    86,    87,
      91,    99,   101,   102,   103,   117,   120,   122,   123,   126,
     128,   130,   133,   141,   142,   151,   152,   158,   161,   162,
     166,   174,   176,   178,   179,   182,   184,   187,   188,   195,
     196,   198,   204,   207,   208,   212,   216,   218,   220,   222,
     224,   226,   228,   229,   234,   235,   237,   239,   241,   242,
     244,   246,   248,   250,   251,   257,   258,   262,   265,   266,
     268,   270,   272,   274,   275,   277,   283,   286,   287,   291,
     295,   297,   299,   301,   303,   305,   307,   309,   314,   317,
     319,   321,   323,   325,   329,   331,   333,   335,   337,   339,
     343,   348,   349,   351,   352,   354,   356,   358,   360,   361,
     363,   365,   367,   369,   371,   373,   375,   377,   379,   381,
     383,   385,   387,   389,   391,   393,   395,   396,   398,   399,
     403,   404,   408,   411,   412,   414,   416,   418,   420,   422
};

/* MVL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const mvl_y_type_int16 mvl_y_rhs[] =
{
     137,     0,    -1,   138,   156,    -1,    -1,    64,   225,    77,
     139,   140,   151,   230,   225,   227,    -1,    64,     1,    -1,
      -1,   141,    -1,    -1,    71,   142,     5,   143,   229,   227,
      -1,    71,     1,   227,    -1,   145,   144,    -1,    -1,   144,
     227,   145,    -1,    57,   221,    13,   219,   147,   146,    -1,
       1,    -1,    12,   181,    -1,    -1,   148,    -1,     5,   149,
     229,    -1,   228,   150,   228,    -1,   121,    -1,    60,    -1,
      -1,   152,    -1,   102,     5,   153,   229,   227,    -1,   102,
       1,   227,    -1,   155,   154,    -1,    -1,   154,   227,   155,
      -1,   216,   221,    13,   218,   219,   147,   220,    -1,     1,
      -1,    -1,    -1,    41,   157,   226,    95,   226,    77,   158,
     159,    46,   169,   230,   225,   227,    -1,    41,     1,    -1,
     160,    -1,    -1,   160,   161,    -1,   162,    -1,   163,    -1,
       1,   227,    -1,   116,   221,    13,   219,   147,   220,   227,
      -1,    -1,    55,    26,   164,   140,   165,   230,    55,   227,
      -1,    -1,   102,     5,   166,   229,   227,    -1,   168,   167,
      -1,    -1,   167,   227,   168,    -1,   216,   221,    13,   217,
     219,   147,   220,    -1,     1,    -1,   170,    -1,    -1,   170,
     171,    -1,   172,    -1,     1,   227,    -1,    -1,   224,   226,
     173,   174,   197,   227,    -1,    -1,   175,    -1,    71,    83,
       5,   176,   229,    -1,   178,   177,    -1,    -1,   177,    10,
     178,    -1,   179,    18,   180,    -1,   180,    -1,     1,    -1,
     226,    -1,   181,    -1,   182,    -1,   183,    -1,    -1,   185,
     186,   184,   187,    -1,    -1,     9,    -1,    11,    -1,   188,
      -1,    -1,   189,    -1,   195,    -1,   196,    -1,   190,    -1,
      -1,     5,   191,   193,   192,   229,    -1,    -1,   192,    10,
     193,    -1,   194,   181,    -1,    -1,   226,    -1,   228,    -1,
      33,    -1,    32,    -1,    -1,   198,    -1,   102,    83,     5,
     199,   229,    -1,   201,   200,    -1,    -1,   200,    10,   201,
      -1,   202,    18,   203,    -1,   203,    -1,     1,    -1,   204,
      -1,   207,    -1,   226,    -1,   205,    -1,   206,    -1,   226,
       5,   228,   229,    -1,   226,   148,    -1,   208,    -1,   209,
      -1,   210,    -1,   211,    -1,   210,     3,   211,    -1,   212,
      -1,   213,    -1,   214,    -1,   215,    -1,   204,    -1,     5,
     207,   229,    -1,    58,     5,   207,   229,    -1,    -1,   116,
      -1,    -1,    74,    -1,   100,    -1,    75,    -1,    80,    -1,
      -1,    74,    -1,   100,    -1,    75,    -1,    80,    -1,    47,
      -1,   133,    -1,    85,    -1,    48,    -1,   134,    -1,    86,
      -1,    76,    -1,    88,    -1,    89,    -1,   103,    -1,   118,
      -1,    81,    -1,    43,    -1,    -1,    52,    -1,    -1,    26,
     222,   223,    -1,    -1,   223,    10,    26,    -1,    26,    13,
      -1,    -1,   226,    -1,    26,    -1,    14,    -1,    29,    -1,
       6,    -1,    63,    -1
};

/* MVL_Y_RLINE[MVL_Y_N] -- source line where rule number MVL_Y_N was defined.  */
static const mvl_y_type_uint16 mvl_y_rline[] =
{
       0,   221,   221,   233,   230,   257,   262,   264,   269,   268,
     282,   288,   292,   294,   300,   332,   336,   342,   347,   352,
     359,   378,   380,   384,   386,   390,   395,   402,   406,   408,
     414,   546,   565,   573,   564,   587,   593,   596,   598,   603,
     604,   605,   611,   698,   696,   729,   731,   739,   743,   745,
     751,   867,   885,   888,   890,   895,   896,   904,   902,  1013,
    1016,  1020,  1032,  1036,  1038,  1044,  1051,  1056,  1060,  1064,
    1068,  1072,  1078,  1076,  1090,  1091,  1092,  1096,  1099,  1107,
    1111,  1116,  1117,  1127,  1126,  1135,  1137,  1143,  1152,  1163,
    1167,  1175,  1180,  1191,  1193,  1197,  1205,  1209,  1211,  1217,
    1272,  1337,  1356,  1379,  1384,  1390,  1392,  1397,  1409,  1420,
    1425,  1430,  1435,  1437,  1455,  1461,  1466,  1468,  1470,  1573,
    1580,  1588,  1590,  1595,  1596,  1598,  1600,  1602,  1611,  1612,
    1614,  1616,  1618,  1623,  1625,  1627,  1629,  1631,  1633,  1635,
    1637,  1639,  1641,  1643,  1645,  1647,  1653,  1654,  1660,  1659,
    1666,  1668,  1677,  1684,  1685,  1690,  1695,  1700,  1713,  1718
};
#endif

#if MVL_Y_DEBUG || MVL_Y_ERROR_VERBOSE || MVL_Y_TOKEN_TABLE
/* MVL_Y_TNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at MVL_Y_NTOKENS, nonterminals.  */
static const char *const mvl_y_tname[] =
{
  "$end", "error", "$undefined", "Ampersand", "Apostrophe", "LeftParen",
  "RightParen", "DoubleStar", "Star", "Plus", "Comma", "Minus", "VarAsgn",
  "Colon", "Semicolon", "_LESym", "Box", "_LTSym", "Arrow", "_EQSym",
  "_GESym", "_GTSym", "Bar", "_NESym", "Dot", "Slash", "Identifier",
  "DecimalInt", "DecimalReal", "AbstractLit", "BasedInt", "BasedReal",
  "CharacterLit", "StringLit", "BitStringLit", "ABS", "ACCESS", "AFTER",
  "ALIAS", "ALL", "tok_AND", "ARCHITECTURE", "ARRAY", "ARG", "ASSERT",
  "ATTRIBUTE", "_BEGIN", "BIT", "BIT_VECTOR", "BLOCK", "BODY", "BUFFER",
  "BUS", "CASE", "CLOCK", "COMPONENT", "CONFIGURATION", "CONSTANT",
  "CONVERT", "DISCONNECT", "DOWNTO", "ELSE", "ELSIF", "_END", "ENTITY",
  "ERROR", "_EXIT", "_FILE", "FOR", "FUNCTION", "GENERATE", "GENERIC",
  "GUARDED", "IF", "_IN", "_INOUT", "INTEGER", "IS", "_LABEL", "LIBRARY",
  "_LINKAGE", "_LIST", "LOOP", "MAP", "MOD", "MUX_BIT", "MUX_VECTOR",
  "_NAND", "NATURAL", "NATURAL_VECTOR", "NEW", "_NEXT", "_NOR", "_NOT",
  "tok_NULL", "OF", "ON", "OPEN", "_OR", "OTHERS", "_OUT", "_PACKAGE",
  "PORT", "POSITIVE", "PROCEDURE", "PROCESS", "RANGE", "RECORD", "REG_BIT",
  "REG_VECTOR", "REGISTER", "REM", "REPORT", "RETURN", "SELECT",
  "SEVERITY", "SIGNAL", "_STABLE", "STRING", "SUBTYPE", "THEN", "TO",
  "TRANSPORT", "_TYPE", "UNITS", "UNTIL", "USE", "VARIABLE", "WAIT",
  "WARNING", "WHEN", "WHILE", "WITH", "WOR_BIT", "WOR_VECTOR", "_XOR",
  "$accept", "design_file", "entity_declaration", "@1", ".generic_clause.",
  "generic_clause", "@2", "formal_generic_list",
  "...formal_generic_element..", "formal_generic_element",
  "generic_VarAsgn__expression", ".constraint.", "constraint", "range",
  "direction", ".port_clause.", "port_clause", "formal_port_list",
  "...formal_port_element..", "formal_port_element", "architecture_body",
  "@3", "@4", "architecture_declarative_part",
  "..block_declaration_item..", "block_declaration_item",
  "signal_declaration", "component_declaration", "@5",
  ".PORT__local_port_list.", "local_port_list", "...local_port_element..",
  "local_port_element", "architecture_statement_part",
  "..concurrent_statement..", "concurrent_statement",
  "component_instantiation_statement", "@6", ".generic_map_aspect.",
  "generic_map_aspect", "generic_association_list",
  "...generic_association_element..", "generic_association_element",
  "formal_generic_name", "actual_generic_name", "generic_expression",
  "generic_relation", "generic_simple_expression", "@7", ".sign.",
  "generic_term", "...generic_term..", "generic_factor", "generic_primary",
  "generic_aggregate", "@8", "...generic_element_association..",
  "generic_element_association", ".generic_choices.", "generic_name",
  "generic_literal", ".port_map_aspect.", "port_map_aspect",
  "association_list", "...association_element..", "association_element",
  "formal_port_name", "actual_port_name", "name", "indexed_name",
  "slice_name", "expression", "relation", "simple_expression",
  ".sign.term..add_op__term..", "term", "factor", "primary", "aggregate",
  "type_convertion", ".SIGNAL.", ".local_port_mode.", ".mode.",
  "type_mark", ".BUS.", "identifier_list", "@9", "...identifier..",
  "a_label", ".simple_name.", "simple_name", "Semicolon_ERR",
  "abstractlit", "RightParen_ERR", "END_ERR", 0
};
#endif

# ifdef MVL_Y_PRINT
/* MVL_Y_TOKNUM[MVL_Y_LEX-NUM] -- Internal token number corresponding to
   token MVL_Y_LEX-NUM.  */
static const mvl_y_type_uint16 mvl_y_toknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390
};
# endif

/* MVL_Y_R1[MVL_Y_N] -- Symbol number of symbol that rule MVL_Y_N derives.  */
static const mvl_y_type_uint8 mvl_y_r1[] =
{
       0,   136,   137,   139,   138,   138,   140,   140,   142,   141,
     141,   143,   144,   144,   145,   145,   146,   147,   147,   148,
     149,   150,   150,   151,   151,   152,   152,   153,   154,   154,
     155,   155,   157,   158,   156,   156,   159,   160,   160,   161,
     161,   161,   162,   164,   163,   165,   165,   166,   167,   167,
     168,   168,   169,   170,   170,   171,   171,   173,   172,   174,
     174,   175,   176,   177,   177,   178,   178,   178,   179,   180,
     181,   182,   184,   183,   185,   185,   185,   186,   187,   188,
     189,   189,   189,   191,   190,   192,   192,   193,   194,   195,
     196,   196,   196,   197,   197,   198,   199,   200,   200,   201,
     201,   201,   202,   203,   204,   204,   204,   205,   206,   207,
     208,   209,   210,   210,   211,   212,   213,   213,   213,   214,
     215,   216,   216,   217,   217,   217,   217,   217,   218,   218,
     218,   218,   218,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   220,   220,   222,   221,
     223,   223,   224,   225,   225,   226,   227,   228,   229,   230
};

/* MVL_Y_R2[MVL_Y_N] -- Number of symbols composing right hand side of rule MVL_Y_N.  */
static const mvl_y_type_uint8 mvl_y_r2[] =
{
       0,     2,     2,     0,     9,     2,     0,     1,     0,     6,
       3,     2,     0,     3,     6,     1,     2,     0,     1,     3,
       3,     1,     1,     0,     1,     5,     3,     2,     0,     3,
       7,     1,     0,     0,    13,     2,     1,     0,     2,     1,
       1,     2,     7,     0,     8,     0,     5,     2,     0,     3,
       7,     1,     1,     0,     2,     1,     2,     0,     6,     0,
       1,     5,     2,     0,     3,     3,     1,     1,     1,     1,
       1,     1,     0,     4,     0,     1,     1,     1,     0,     1,
       1,     1,     1,     0,     5,     0,     3,     2,     0,     1,
       1,     1,     1,     0,     1,     5,     2,     0,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       4,     0,     1,     0,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     3,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1
};

/* MVL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when MVL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const mvl_y_type_uint8 mvl_y_defact[] =
{
       0,     0,     0,     0,     5,   155,     0,   154,     1,     0,
       2,     3,    35,     0,     6,     0,     0,    23,     7,     0,
       0,     0,     0,     0,    24,     0,   156,    10,     0,     0,
       0,   159,   153,    33,    15,     0,     0,    12,    26,    31,
     122,     0,    28,     0,     0,    37,   148,     0,   158,     0,
      11,     0,    27,     0,     4,     0,     0,   150,     0,     9,
       0,    25,     0,   128,    53,     0,     0,     0,    38,    39,
      40,   149,   145,   133,   136,   139,   144,   135,   138,   140,
     141,   142,   143,   134,   137,    17,    13,    29,   129,   131,
     132,   130,     0,     0,     0,    41,    43,     0,     0,     0,
       0,    18,    17,   153,     0,     0,    54,    55,     0,     6,
       0,   151,   157,     0,     0,    74,    14,   146,     0,    56,
     152,    57,    45,    17,    19,    22,    21,     0,    75,    76,
      16,    70,    71,     0,   147,    30,    34,    59,     0,     0,
     146,    20,    83,    92,    91,    72,    77,    79,    82,    80,
      81,    89,    90,     0,    93,    60,     0,     0,     0,    88,
      78,     0,     0,     0,    94,    51,     0,    48,     0,     0,
      42,    85,    74,    73,     0,     0,    58,     0,    47,     0,
      44,     0,    87,    67,     0,    63,     0,    66,    69,    68,
       0,    46,     0,   123,    88,    84,    61,    62,    74,   101,
       0,     0,     0,    97,     0,   100,   118,   105,   106,   103,
     109,   110,   111,   112,   114,   115,   116,   117,   104,    49,
     124,   126,   127,   125,     0,    86,     0,    65,   118,     0,
       0,    95,    96,     0,     0,     0,   108,    17,    64,   119,
       0,     0,    99,   113,     0,   146,   120,    98,   107,    50
};

/* MVL_Y_DEFGOTO[NTERM-NUM].  */
static const mvl_y_type_int16 mvl_y_defgoto[] =
{
      -1,     2,     3,    14,    17,    18,    21,    36,    50,    37,
     116,   100,   101,   113,   127,    23,    24,    41,    52,    42,
      10,    13,    45,    55,    56,    68,    69,    70,   109,   139,
     166,   178,   167,    93,    94,   106,   107,   137,   154,   155,
     184,   197,   185,   186,   187,   188,   131,   132,   160,   133,
     145,   173,   146,   147,   148,   159,   181,   171,   172,   149,
     150,   163,   164,   202,   232,   203,   204,   205,   228,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
      43,   224,    92,    85,   135,    47,    57,    71,   108,     6,
     218,    27,   114,    49,    32
};

/* MVL_Y_PACT[STATE-NUM] -- Index in MVL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define MVL_Y_PACT_NINF -174
static const mvl_y_type_int16 mvl_y_pact[] =
{
     -16,    13,    54,    20,  -174,  -174,   -18,  -174,  -174,    39,
    -174,  -174,  -174,    41,    -2,   -21,    45,    -8,  -174,    41,
      81,    93,    61,    38,  -174,    26,  -174,  -174,    35,    81,
       6,  -174,    41,  -174,  -174,    78,    99,  -174,  -174,  -174,
    -174,    99,  -174,    78,    81,  -174,  -174,    97,  -174,    81,
      81,    81,    81,    98,  -174,    60,     5,  -174,    -6,  -174,
      35,  -174,     6,   -22,  -174,    81,    87,    78,  -174,  -174,
    -174,   105,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,   112,  -174,  -174,  -174,  -174,
    -174,  -174,    -6,    38,    18,  -174,  -174,   106,    94,    96,
     118,  -174,   112,    41,    81,   120,  -174,  -174,    41,    -2,
      -6,  -174,  -174,    99,   -45,    36,  -174,    85,    81,  -174,
    -174,  -174,    43,   112,  -174,  -174,  -174,    96,  -174,  -174,
    -174,  -174,  -174,    67,  -174,  -174,  -174,    75,   133,    38,
      85,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,    65,    50,  -174,     7,   100,    81,  -174,
    -174,   148,    71,    81,  -174,  -174,    99,  -174,    78,    81,
    -174,  -174,    36,  -174,   138,   151,  -174,    81,    81,   144,
    -174,    58,  -174,  -174,    99,  -174,   140,  -174,  -174,  -174,
      29,  -174,     7,    34,  -174,  -174,  -174,   149,    36,  -174,
      30,   155,    99,  -174,   143,  -174,   145,  -174,  -174,  -174,
    -174,  -174,   162,  -174,  -174,  -174,  -174,  -174,   161,  -174,
    -174,  -174,  -174,  -174,    -6,  -174,   138,  -174,  -174,    99,
      30,  -174,   158,    30,    30,    96,  -174,   112,  -174,  -174,
      99,    29,  -174,  -174,     3,    85,  -174,  -174,  -174,  -174
};

/* MVL_Y_PGOTO[NTERM-NUM].  */
static const mvl_y_type_int16 mvl_y_pgoto[] =
{
    -174,  -174,  -174,  -174,    63,  -174,  -174,  -174,  -174,   109,
    -174,   -97,   -44,  -174,  -174,  -174,  -174,  -174,  -174,   113,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,   -15,  -174,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,   -48,  -174,   -17,   -86,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,  -174,   -14,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,   -65,  -174,   -54,  -170,  -174,
    -174,  -173,  -174,  -174,  -174,   -52,  -174,  -174,  -174,  -174,
    -107,  -174,  -174,   -89,  -129,   -39,  -174,  -174,  -174,   -19,
      -1,   -27,  -117,   -40,   -50
};

/* MVL_Y_TABLE[MVL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what MVL_Y_DEFACT says.
   If MVL_Y_TABLE_NINF, syntax error.  */
#define MVL_Y_TABLE_NINF -154
static const mvl_y_type_int16 mvl_y_table[] =
{
       7,    51,    38,   102,    53,   117,    65,    39,   165,    48,
     141,   158,    15,    44,     4,   125,   152,    54,    25,   104,
     206,   123,    59,    60,    61,    62,   140,   229,    97,   130,
     199,     7,  -121,  -121,   200,   200,    34,    72,    95,     5,
      12,    73,    74,   103,   105,   128,    20,   129,     1,   168,
      -8,   -36,    88,    89,     8,     5,     5,   240,    90,    11,
      66,     9,    29,   125,    48,   -32,    30,     5,   194,    16,
      75,   206,   142,   124,    19,    76,   126,   119,    91,    77,
      78,   -52,    79,    80,   118,   168,   182,   201,   201,   157,
    -153,   136,    35,     5,    22,    26,   112,    81,    28,   143,
     144,    31,     7,    33,    46,    48,    64,   121,   220,   221,
      58,    63,    82,    96,   222,    98,   249,    99,   244,   110,
     111,    67,    40,    40,   126,   112,   177,    83,    84,   179,
     115,   170,   151,   120,   223,   237,   176,   134,   156,   183,
     245,   195,   180,   -74,   196,   138,   153,   128,   161,   129,
     191,   192,   162,   174,   175,   169,   190,   193,   198,   226,
     230,   233,   231,  -102,     5,   234,   235,   -74,   241,    86,
     -74,   -74,   122,   189,   236,    87,   247,   219,   238,   242,
     225,   227,   243,     0,     0,     0,     0,     0,     0,   239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189
};

static const mvl_y_type_int16 mvl_y_check[] =
{
       1,    41,    29,    92,    43,   102,     1,     1,     1,     6,
     127,   140,    13,    32,     1,    60,   133,    44,    19,     1,
     190,   110,    49,    50,    51,    52,   123,   200,    67,   115,
       1,    32,    26,    26,     5,     5,     1,    43,    65,    26,
       1,    47,    48,    93,    26,     9,     1,    11,    64,   156,
       5,    46,    74,    75,     0,    26,    26,   230,    80,    77,
      55,    41,     1,    60,     6,    26,     5,    26,    10,    71,
      76,   241,     5,   113,    95,    81,   121,   104,   100,    85,
      86,    63,    88,    89,   103,   192,   172,    58,    58,   139,
      77,   118,    57,    26,   102,    14,    29,   103,     5,    32,
      33,    63,   103,    77,    26,     6,    46,   108,    74,    75,
      13,    13,   118,    26,    80,    10,   245,     5,   235,    13,
      26,   116,   116,   116,   121,    29,   166,   133,   134,   168,
      12,   158,   133,    13,   100,   224,   163,    52,     5,     1,
     237,   181,   169,     5,   184,   102,    71,     9,    83,    11,
     177,   178,   102,     5,    83,    55,     5,    13,    18,    10,
       5,    18,   202,    18,    26,     3,     5,    29,    10,    60,
      32,    33,   109,   174,   218,    62,   241,   192,   226,   233,
     194,   198,   234,    -1,    -1,    -1,    -1,    -1,    -1,   229,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226
};

/* MVL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const mvl_y_type_uint8 mvl_y_stos[] =
{
       0,    64,   137,   138,     1,    26,   225,   226,     0,    41,
     156,    77,     1,   157,   139,   226,    71,   140,   141,    95,
       1,   142,   102,   151,   152,   226,    14,   227,     5,     1,
       5,    63,   230,    77,     1,    57,   143,   145,   227,     1,
     116,   153,   155,   216,   225,   158,    26,   221,     6,   229,
     144,   229,   154,   221,   227,   159,   160,   222,    13,   227,
     227,   227,   227,    13,    46,     1,    55,   116,   161,   162,
     163,   223,    43,    47,    48,    76,    81,    85,    86,    88,
      89,   103,   118,   133,   134,   219,   145,   155,    74,    75,
      80,   100,   218,   169,   170,   227,    26,   221,    10,     5,
     147,   148,   219,   230,     1,    26,   171,   172,   224,   164,
      13,    26,    29,   149,   228,    12,   146,   147,   225,   227,
      13,   226,   140,   219,   229,    60,   121,   150,     9,    11,
     181,   182,   183,   185,    52,   220,   227,   173,   102,   165,
     147,   228,     5,    32,    33,   186,   188,   189,   190,   195,
     196,   226,   228,    71,   174,   175,     5,   230,   220,   191,
     184,    83,   102,   197,   198,     1,   166,   168,   216,    55,
     227,   193,   194,   187,     5,    83,   227,   229,   167,   221,
     227,   192,   181,     1,   176,   178,   179,   180,   181,   226,
       5,   227,   227,    13,    10,   229,   229,   177,    18,     1,
       5,    58,   199,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   226,   168,
      74,    75,    80,   100,   217,   193,    10,   180,   204,   207,
       5,   229,   200,    18,     3,     5,   148,   219,   178,   229,
     207,    10,   203,   211,   228,   147,   229,   201,   229,   220
};

#define mvl_y_errok		(mvl_y_errstatus = 0)
#define mvl_y_clearin	(mvl_y_char = MVL_Y_EMPTY)
#define MVL_Y_EMPTY		(-2)
#define MVL_Y_EOF		0

#define MVL_Y_ACCEPT	goto mvl_y_acceptlab
#define MVL_Y_ABORT		goto mvl_y_abortlab
#define MVL_Y_ERROR		goto mvl_y_errorlab


/* Like MVL_Y_ERROR except do call mvl_y_error.  This remains here temporarily
   to ease the transition to the new meaning of MVL_Y_ERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define MVL_Y_FAIL		goto mvl_y_errlab

#define MVL_Y_RECOVERING()  (!!mvl_y_errstatus)

#define MVL_Y_BACKUP(Token, Value)					\
do								\
  if (mvl_y_char == MVL_Y_EMPTY && mvl_y_len == 1)				\
    {								\
      mvl_y_char = (Token);						\
      mvl_y_lval = (Value);						\
      mvl_y_token = MVL_Y_TRANSLATE (mvl_y_char);				\
      MVL_Y_POPSTACK (1);						\
      goto mvl_y_backup;						\
    }								\
  else								\
    {								\
      mvl_y_error (MVL_Y__("syntax error: cannot back up")); \
      MVL_Y_ERROR;							\
    }								\
while (MVL_Y_ID (0))


#define MVL_Y_TERROR	1
#define MVL_Y_ERRCODE	256


/* MVL_Y_LLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define MVL_Y_RHSLOC(Rhs, K) ((Rhs)[K])
#ifndef MVL_Y_LLOC_DEFAULT
# define MVL_Y_LLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (MVL_Y_ID (N))                                                    \
	{								\
	  (Current).first_line   = MVL_Y_RHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = MVL_Y_RHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = MVL_Y_RHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = MVL_Y_RHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    MVL_Y_RHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    MVL_Y_RHSLOC (Rhs, 0).last_column;				\
	}								\
    while (MVL_Y_ID (0))
#endif


/* MVL_Y__LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef MVL_Y__LOCATION_PRINT
# if MVL_Y_LTYPE_IS_TRIVIAL
#  define MVL_Y__LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define MVL_Y__LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* MVL_Y_LEX -- calling `mvl_y_lex' with the right arguments.  */

#ifdef MVL_Y_LEX_PARAM
# define MVL_Y_LEX mvl_y_lex (MVL_Y_LEX_PARAM)
#else
# define MVL_Y_LEX mvl_y_lex ()
#endif

/* Enable debugging if requested.  */
#if MVL_Y_DEBUG

# ifndef MVL_Y_FPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define MVL_Y_FPRINTF fprintf
# endif

# define MVL_Y_DPRINTF(Args)			\
do {						\
  if (mvl_y_debug)					\
    MVL_Y_FPRINTF Args;				\
} while (MVL_Y_ID (0))

# define MVL_Y__SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (mvl_y_debug)								  \
    {									  \
      MVL_Y_FPRINTF (stderr, "%s ", Title);					  \
      mvl_y__symbol_print (stderr,						  \
		  Type, Value); \
      MVL_Y_FPRINTF (stderr, "\n");						  \
    }									  \
} while (MVL_Y_ID (0))


/*--------------------------------.
| Print this symbol on MVL_Y_OUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mvl_y__symbol_value_print (FILE *mvl_y_output, int mvl_y_type, MVL_Y_STYPE const * const mvl_y_valuep)
#else
static void
mvl_y__symbol_value_print (mvl_y_output, mvl_y_type, mvl_y_valuep)
    FILE *mvl_y_output;
    int mvl_y_type;
    MVL_Y_STYPE const * const mvl_y_valuep;
#endif
{
  if (!mvl_y_valuep)
    return;
# ifdef MVL_Y_PRINT
  if (mvl_y_type < MVL_Y_NTOKENS)
    MVL_Y_PRINT (mvl_y_output, mvl_y_toknum[mvl_y_type], *mvl_y_valuep);
# else
  MVL_Y_USE (mvl_y_output);
# endif
  switch (mvl_y_type)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on MVL_Y_OUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mvl_y__symbol_print (FILE *mvl_y_output, int mvl_y_type, MVL_Y_STYPE const * const mvl_y_valuep)
#else
static void
mvl_y__symbol_print (mvl_y_output, mvl_y_type, mvl_y_valuep)
    FILE *mvl_y_output;
    int mvl_y_type;
    MVL_Y_STYPE const * const mvl_y_valuep;
#endif
{
  if (mvl_y_type < MVL_Y_NTOKENS)
    MVL_Y_FPRINTF (mvl_y_output, "token %s (", mvl_y_tname[mvl_y_type]);
  else
    MVL_Y_FPRINTF (mvl_y_output, "nterm %s (", mvl_y_tname[mvl_y_type]);

  mvl_y__symbol_value_print (mvl_y_output, mvl_y_type, mvl_y_valuep);
  MVL_Y_FPRINTF (mvl_y_output, ")");
}

/*------------------------------------------------------------------.
| mvl_y__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mvl_y__stack_print (mvl_y_type_int16 *bottom, mvl_y_type_int16 *top)
#else
static void
mvl_y__stack_print (bottom, top)
    mvl_y_type_int16 *bottom;
    mvl_y_type_int16 *top;
#endif
{
  MVL_Y_FPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    MVL_Y_FPRINTF (stderr, " %d", *bottom);
  MVL_Y_FPRINTF (stderr, "\n");
}

# define MVL_Y__STACK_PRINT(Bottom, Top)				\
do {								\
  if (mvl_y_debug)							\
    mvl_y__stack_print ((Bottom), (Top));				\
} while (MVL_Y_ID (0))


/*------------------------------------------------.
| Report that the MVL_Y_RULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mvl_y__reduce_print (MVL_Y_STYPE *mvl_y_vsp, int mvl_y_rule)
#else
static void
mvl_y__reduce_print (mvl_y_vsp, mvl_y_rule)
    MVL_Y_STYPE *mvl_y_vsp;
    int mvl_y_rule;
#endif
{
  int mvl_y_nrhs = mvl_y_r2[mvl_y_rule];
  int mvl_y_i;
  unsigned long int mvl_y_lno = mvl_y_rline[mvl_y_rule];
  MVL_Y_FPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     mvl_y_rule - 1, mvl_y_lno);
  /* The symbols being reduced.  */
  for (mvl_y_i = 0; mvl_y_i < mvl_y_nrhs; mvl_y_i++)
    {
      fprintf (stderr, "   $%d = ", mvl_y_i + 1);
      mvl_y__symbol_print (stderr, mvl_y_rhs[mvl_y_prhs[mvl_y_rule] + mvl_y_i],
		       &(mvl_y_vsp[(mvl_y_i + 1) - (mvl_y_nrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define MVL_Y__REDUCE_PRINT(Rule)		\
do {					\
  if (mvl_y_debug)				\
    mvl_y__reduce_print (mvl_y_vsp, Rule); \
} while (MVL_Y_ID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int mvl_y_debug;
#else /* !MVL_Y_DEBUG */
# define MVL_Y_DPRINTF(Args)
# define MVL_Y__SYMBOL_PRINT(Title, Type, Value, Location)
# define MVL_Y__STACK_PRINT(Bottom, Top)
# define MVL_Y__REDUCE_PRINT(Rule)
#endif /* !MVL_Y_DEBUG */


/* MVL_Y_INITDEPTH -- initial size of the parser's stacks.  */
#ifndef	MVL_Y_INITDEPTH
# define MVL_Y_INITDEPTH 200
#endif

/* MVL_Y_MAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   MVL_Y_STACK_ALLOC_MAXIMUM < MVL_Y_STACK_BYTES (MVL_Y_MAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef MVL_Y_MAXDEPTH
# define MVL_Y_MAXDEPTH 10000
#endif



#if MVL_Y_ERROR_VERBOSE

# ifndef mvl_y_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define mvl_y_strlen strlen
#  else
/* Return the length of MVL_Y_STR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static MVL_Y_SIZE_T
mvl_y_strlen (const char *mvl_y_str)
#else
static MVL_Y_SIZE_T
mvl_y_strlen (mvl_y_str)
    const char *mvl_y_str;
#endif
{
  MVL_Y_SIZE_T mvl_y_len;
  for (mvl_y_len = 0; mvl_y_str[mvl_y_len]; mvl_y_len++)
    continue;
  return mvl_y_len;
}
#  endif
# endif

# ifndef mvl_y_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define mvl_y_stpcpy stpcpy
#  else
/* Copy MVL_Y_SRC to MVL_Y_DEST, returning the address of the terminating '\0' in
   MVL_Y_DEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
mvl_y_stpcpy (char *mvl_y_dest, const char *mvl_y_src)
#else
static char *
mvl_y_stpcpy (mvl_y_dest, mvl_y_src)
    char *mvl_y_dest;
    const char *mvl_y_src;
#endif
{
  char *mvl_y_d = mvl_y_dest;
  const char *mvl_y_s = mvl_y_src;

  while ((*mvl_y_d++ = *mvl_y_s++) != '\0')
    continue;

  return mvl_y_d - 1;
}
#  endif
# endif

# ifndef mvl_y_tnamerr
/* Copy to MVL_Y_RES the contents of MVL_Y_STR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for mvl_y_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  MVL_Y_STR is taken from mvl_y_tname.  If MVL_Y_RES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static MVL_Y_SIZE_T
mvl_y_tnamerr (char *mvl_y_res, const char *mvl_y_str)
{
  if (*mvl_y_str == '"')
    {
      MVL_Y_SIZE_T mvl_y_n = 0;
      char const *mvl_y_p = mvl_y_str;

      for (;;)
	switch (*++mvl_y_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++mvl_y_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (mvl_y_res)
	      mvl_y_res[mvl_y_n] = *mvl_y_p;
	    mvl_y_n++;
	    break;

	  case '"':
	    if (mvl_y_res)
	      mvl_y_res[mvl_y_n] = '\0';
	    return mvl_y_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! mvl_y_res)
    return mvl_y_strlen (mvl_y_str);

  return mvl_y_stpcpy (mvl_y_res, mvl_y_str) - mvl_y_res;
}
# endif

/* Copy into MVL_Y_RESULT an error message about the unexpected token
   MVL_Y_CHAR while in state MVL_Y_STATE.  Return the number of bytes copied,
   including the terminating null byte.  If MVL_Y_RESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return MVL_Y_SIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static MVL_Y_SIZE_T
mvl_y_syntax_error (char *mvl_y_result, int mvl_y_state, int mvl_y_char)
{
  int mvl_y_n = mvl_y_pact[mvl_y_state];

  if (! (MVL_Y_PACT_NINF < mvl_y_n && mvl_y_n <= MVL_Y_LAST))
    return 0;
  else
    {
      int mvl_y_type = MVL_Y_TRANSLATE (mvl_y_char);
      MVL_Y_SIZE_T mvl_y_size0 = mvl_y_tnamerr (0, mvl_y_tname[mvl_y_type]);
      MVL_Y_SIZE_T mvl_y_size = mvl_y_size0;
      MVL_Y_SIZE_T mvl_y_size1;
      int mvl_y_size_overflow = 0;
      enum { MVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *mvl_y_arg[MVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM];
      int mvl_y_x;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      MVL_Y__("syntax error, unexpected %s");
      MVL_Y__("syntax error, unexpected %s, expecting %s");
      MVL_Y__("syntax error, unexpected %s, expecting %s or %s");
      MVL_Y__("syntax error, unexpected %s, expecting %s or %s or %s");
      MVL_Y__("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *mvl_y_fmt;
      char const *mvl_y_f;
      static char const mvl_y_unexpected[] = "syntax error, unexpected %s";
      static char const mvl_y_expecting[] = ", expecting %s";
      static char const mvl_y_or[] = " or %s";
      char mvl_y_format[sizeof mvl_y_unexpected
		    + sizeof mvl_y_expecting - 1
		    + ((MVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof mvl_y_or - 1))];
      char const *mvl_y_prefix = mvl_y_expecting;

      /* Start MVL_Y_X at -MVL_Y_N if negative to avoid negative indexes in
	 MVL_Y_CHECK.  */
      int mvl_y_xbegin = mvl_y_n < 0 ? -mvl_y_n : 0;

      /* Stay within bounds of both mvl_y_check and mvl_y_tname.  */
      int mvl_y_checklim = MVL_Y_LAST - mvl_y_n + 1;
      int mvl_y_xend = mvl_y_checklim < MVL_Y_NTOKENS ? mvl_y_checklim : MVL_Y_NTOKENS;
      int mvl_y_count = 1;

      mvl_y_arg[0] = mvl_y_tname[mvl_y_type];
      mvl_y_fmt = mvl_y_stpcpy (mvl_y_format, mvl_y_unexpected);

      for (mvl_y_x = mvl_y_xbegin; mvl_y_x < mvl_y_xend; ++mvl_y_x)
	if (mvl_y_check[mvl_y_x + mvl_y_n] == mvl_y_x && mvl_y_x != MVL_Y_TERROR)
	  {
	    if (mvl_y_count == MVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		mvl_y_count = 1;
		mvl_y_size = mvl_y_size0;
		mvl_y_format[sizeof mvl_y_unexpected - 1] = '\0';
		break;
	      }
	    mvl_y_arg[mvl_y_count++] = mvl_y_tname[mvl_y_x];
	    mvl_y_size1 = mvl_y_size + mvl_y_tnamerr (0, mvl_y_tname[mvl_y_x]);
	    mvl_y_size_overflow |= (mvl_y_size1 < mvl_y_size);
	    mvl_y_size = mvl_y_size1;
	    mvl_y_fmt = mvl_y_stpcpy (mvl_y_fmt, mvl_y_prefix);
	    mvl_y_prefix = mvl_y_or;
	  }

      mvl_y_f = MVL_Y__(mvl_y_format);
      mvl_y_size1 = mvl_y_size + mvl_y_strlen (mvl_y_f);
      mvl_y_size_overflow |= (mvl_y_size1 < mvl_y_size);
      mvl_y_size = mvl_y_size1;

      if (mvl_y_size_overflow)
	return MVL_Y_SIZE_MAXIMUM;

      if (mvl_y_result)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *mvl_y_p = mvl_y_result;
	  int mvl_y_i = 0;
	  while ((*mvl_y_p = *mvl_y_f) != '\0')
	    {
	      if (*mvl_y_p == '%' && mvl_y_f[1] == 's' && mvl_y_i < mvl_y_count)
		{
		  mvl_y_p += mvl_y_tnamerr (mvl_y_p, mvl_y_arg[mvl_y_i++]);
		  mvl_y_f += 2;
		}
	      else
		{
		  mvl_y_p++;
		  mvl_y_f++;
		}
	    }
	}
      return mvl_y_size;
    }
}
#endif /* MVL_Y_ERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mvl_y_destruct (const char *mvl_y_msg, int mvl_y_type, MVL_Y_STYPE *mvl_y_valuep)
#else
static void
mvl_y_destruct (mvl_y_msg, mvl_y_type, mvl_y_valuep)
    const char *mvl_y_msg;
    int mvl_y_type;
    MVL_Y_STYPE *mvl_y_valuep;
#endif
{
  MVL_Y_USE (mvl_y_valuep);

  if (!mvl_y_msg)
    mvl_y_msg = "Deleting";
  MVL_Y__SYMBOL_PRINT (mvl_y_msg, mvl_y_type, mvl_y_valuep, mvl_y_locationp);

  switch (mvl_y_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef MVL_Y_PARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int mvl_y_parse (void *MVL_Y_PARSE_PARAM);
#else
int mvl_y_parse ();
#endif
#else /* ! MVL_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int mvl_y_parse (void);
#else
int mvl_y_parse ();
#endif
#endif /* ! MVL_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
int mvl_y_char;

/* The semantic value of the look-ahead symbol.  */
MVL_Y_STYPE mvl_y_lval;

/* Number of syntax errors so far.  */
int mvl_y_nerrs;



/*----------.
| mvl_y_parse.  |
`----------*/

#ifdef MVL_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
mvl_y_parse (void *MVL_Y_PARSE_PARAM)
#else
int
mvl_y_parse (MVL_Y_PARSE_PARAM)
    void *MVL_Y_PARSE_PARAM;
#endif
#else /* ! MVL_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
mvl_y_parse (void)
#else
int
mvl_y_parse ()

#endif
#endif
{
  
  int mvl_y_state;
  int mvl_y_n;
  int mvl_y_result;
  /* Number of tokens to shift before error messages enabled.  */
  int mvl_y_errstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int mvl_y_token = 0;
#if MVL_Y_ERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char mvl_y_msgbuf[128];
  char *mvl_y_msg = mvl_y_msgbuf;
  MVL_Y_SIZE_T mvl_y_msg_alloc = sizeof mvl_y_msgbuf;
#endif

  /* Three stacks and their tools:
     `mvl_y_ss': related to states,
     `mvl_y_vs': related to semantic values,
     `mvl_y_ls': related to locations.

     Refer to the stacks thru separate pointers, to allow mvl_y_overflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  mvl_y_type_int16 mvl_y_ssa[MVL_Y_INITDEPTH];
  mvl_y_type_int16 *mvl_y_ss = mvl_y_ssa;
  mvl_y_type_int16 *mvl_y_ssp;

  /* The semantic value stack.  */
  MVL_Y_STYPE mvl_y_vsa[MVL_Y_INITDEPTH];
  MVL_Y_STYPE *mvl_y_vs = mvl_y_vsa;
  MVL_Y_STYPE *mvl_y_vsp;



#define MVL_Y_POPSTACK(N)   (mvl_y_vsp -= (N), mvl_y_ssp -= (N))

  MVL_Y_SIZE_T mvl_y_stacksize = MVL_Y_INITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  MVL_Y_STYPE mvl_y_val;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int mvl_y_len = 0;

  MVL_Y_DPRINTF ((stderr, "Starting parse\n"));

  mvl_y_state = 0;
  mvl_y_errstatus = 0;
  mvl_y_nerrs = 0;
  mvl_y_char = MVL_Y_EMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  mvl_y_ssp = mvl_y_ss;
  mvl_y_vsp = mvl_y_vs;

  goto mvl_y_setstate;

/*------------------------------------------------------------.
| mvl_y_newstate -- Push a new state, which is found in mvl_y_state.  |
`------------------------------------------------------------*/
 mvl_y_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  mvl_y_ssp++;

 mvl_y_setstate:
  *mvl_y_ssp = mvl_y_state;

  if (mvl_y_ss + mvl_y_stacksize - 1 <= mvl_y_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      MVL_Y_SIZE_T mvl_y_size = mvl_y_ssp - mvl_y_ss + 1;

#ifdef mvl_y_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	MVL_Y_STYPE *mvl_y_vs1 = mvl_y_vs;
	mvl_y_type_int16 *mvl_y_ss1 = mvl_y_ss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if mvl_y_overflow is a macro.  */
	mvl_y_overflow (MVL_Y__("memory exhausted"),
		    &mvl_y_ss1, mvl_y_size * sizeof (*mvl_y_ssp),
		    &mvl_y_vs1, mvl_y_size * sizeof (*mvl_y_vsp),

		    &mvl_y_stacksize);

	mvl_y_ss = mvl_y_ss1;
	mvl_y_vs = mvl_y_vs1;
      }
#else /* no mvl_y_overflow */
# ifndef MVL_Y_STACK_RELOCATE
      goto mvl_y_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (MVL_Y_MAXDEPTH <= mvl_y_stacksize)
	goto mvl_y_exhaustedlab;
      mvl_y_stacksize *= 2;
      if (MVL_Y_MAXDEPTH < mvl_y_stacksize)
	mvl_y_stacksize = MVL_Y_MAXDEPTH;

      {
	mvl_y_type_int16 *mvl_y_ss1 = mvl_y_ss;
	union mvl_y_alloc *mvl_y_ptr =
	  (union mvl_y_alloc *) MVL_Y_STACK_ALLOC (MVL_Y_STACK_BYTES (mvl_y_stacksize));
	if (! mvl_y_ptr)
	  goto mvl_y_exhaustedlab;
	MVL_Y_STACK_RELOCATE (mvl_y_ss);
	MVL_Y_STACK_RELOCATE (mvl_y_vs);

#  undef MVL_Y_STACK_RELOCATE
	if (mvl_y_ss1 != mvl_y_ssa)
	  MVL_Y_STACK_FREE (mvl_y_ss1);
      }
# endif
#endif /* no mvl_y_overflow */

      mvl_y_ssp = mvl_y_ss + mvl_y_size - 1;
      mvl_y_vsp = mvl_y_vs + mvl_y_size - 1;


      MVL_Y_DPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) mvl_y_stacksize));

      if (mvl_y_ss + mvl_y_stacksize - 1 <= mvl_y_ssp)
	MVL_Y_ABORT;
    }

  MVL_Y_DPRINTF ((stderr, "Entering state %d\n", mvl_y_state));

  goto mvl_y_backup;

/*-----------.
| mvl_y_backup.  |
`-----------*/
mvl_y_backup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  mvl_y_n = mvl_y_pact[mvl_y_state];
  if (mvl_y_n == MVL_Y_PACT_NINF)
    goto mvl_y_default;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* MVL_Y_CHAR is either MVL_Y_EMPTY or MVL_Y_EOF or a valid look-ahead symbol.  */
  if (mvl_y_char == MVL_Y_EMPTY)
    {
      MVL_Y_DPRINTF ((stderr, "Reading a token: "));
      mvl_y_char = MVL_Y_LEX;
    }

  if (mvl_y_char <= MVL_Y_EOF)
    {
      mvl_y_char = mvl_y_token = MVL_Y_EOF;
      MVL_Y_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      mvl_y_token = MVL_Y_TRANSLATE (mvl_y_char);
      MVL_Y__SYMBOL_PRINT ("Next token is", mvl_y_token, &mvl_y_lval, &mvl_y_lloc);
    }

  /* If the proper action on seeing token MVL_Y_TOKEN is to reduce or to
     detect an error, take that action.  */
  mvl_y_n += mvl_y_token;
  if (mvl_y_n < 0 || MVL_Y_LAST < mvl_y_n || mvl_y_check[mvl_y_n] != mvl_y_token)
    goto mvl_y_default;
  mvl_y_n = mvl_y_table[mvl_y_n];
  if (mvl_y_n <= 0)
    {
      if (mvl_y_n == 0 || mvl_y_n == MVL_Y_TABLE_NINF)
	goto mvl_y_errlab;
      mvl_y_n = -mvl_y_n;
      goto mvl_y_reduce;
    }

  if (mvl_y_n == MVL_Y_FINAL)
    MVL_Y_ACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (mvl_y_errstatus)
    mvl_y_errstatus--;

  /* Shift the look-ahead token.  */
  MVL_Y__SYMBOL_PRINT ("Shifting", mvl_y_token, &mvl_y_lval, &mvl_y_lloc);

  /* Discard the shifted token unless it is eof.  */
  if (mvl_y_char != MVL_Y_EOF)
    mvl_y_char = MVL_Y_EMPTY;

  mvl_y_state = mvl_y_n;
  *++mvl_y_vsp = mvl_y_lval;

  goto mvl_y_newstate;


/*-----------------------------------------------------------.
| mvl_y_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
mvl_y_default:
  mvl_y_n = mvl_y_defact[mvl_y_state];
  if (mvl_y_n == 0)
    goto mvl_y_errlab;
  goto mvl_y_reduce;


/*-----------------------------.
| mvl_y_reduce -- Do a reduction.  |
`-----------------------------*/
mvl_y_reduce:
  /* mvl_y_n is the number of a rule to reduce with.  */
  mvl_y_len = mvl_y_r2[mvl_y_n];

  /* If MVL_Y_LEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets MVL_Y_VAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to MVL_Y_VAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that MVL_Y_VAL may be used uninitialized.  */
  mvl_y_val = mvl_y_vsp[1-mvl_y_len];


  MVL_Y__REDUCE_PRINT (mvl_y_n);
  switch (mvl_y_n)
    {
        case 2:
#line 223 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                freelomodel (MVL_CHDHED);
                mvl_fretab  (MVL_HSHTAB);
                }
    break;

  case 3:
#line 233 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                MVL_HSHTAB = mvl_initab ();
                MVL_SIMFLG = 0   ;      /* simple flag                  */
                MVL_NM1LST = NULL;      /* 1-st name liste              */
                MVL_NM2LST = NULL;      /* 2-nd name liste              */
                MVL_CHDPNT = NULL;      /* current child pointer        */
                MVL_CHDHED = NULL;      /* childs list                  */

                MVL_MODNAM = (mvl_y_vsp[(2) - (3)].text);
                mvl_addtab (MVL_HSHTAB,MVL_MODNAM,MVL_MODNAM,MVL_MODDFN,
                            MVL_ROTDFN);
                }
    break;

  case 4:
#line 250 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                if (((mvl_y_vsp[(8) - (9)].text) != NULL) && ((mvl_y_vsp[(8) - (9)].text) != (mvl_y_vsp[(2) - (9)].text)))
                  mvl_error (1, (mvl_y_vsp[(8) - (9)].text));
                mvl_addtab (MVL_HSHTAB,MVL_MODNAM,MVL_MODNAM,MVL_CCNDFN,
                            MVL_CONCNT);
                MVL_CONCNT = 0;
                }
    break;

  case 5:
#line 259 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { mvl_error (2, NULL); }
    break;

  case 8:
#line 269 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {                 /* NULL means we're in the entity declaration */
               if (!MVL_CHDHED) {
                  MVL_LOFPNT->USER=addptype(MVL_LOFPNT->USER,LOGEN,NULL);
                  MVL_PTPPNT=MVL_LOFPNT->USER;
               } else {
                  MVL_CHDPNT->USER=addptype(MVL_LOFPNT->USER,LOGEN,NULL);
                  MVL_PTPPNT=MVL_CHDPNT->USER;
               }
            }
    break;

  case 14:
#line 306 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             struct chain *l;
                
                for (l=MVL_NM1LST;l;l=l->NEXT) {
                   MVL_PTPPNT->DATA=duplogen(&MVL_LOGEN,
                                             MVL_PTPPNT->DATA,l->DATA);
                }
                switch ((mvl_y_vsp[(4) - (6)].valu)) {
                   case MVL_ARGDFN:
                   {
                      logen_list *gen = (logen_list *)MVL_PTPPNT->DATA;
                      gen->TYPE=GENTYPE_ARG;
                   }
                   break;
                   case MVL_BITDFN:
                   {
                      logen_list *gen = (logen_list *)MVL_PTPPNT->DATA;
                      gen->TYPE=GENTYPE_BIT;
                   }
                   break;
                }

                MVL_LOGEN.TYPE=GENTYPE_EMPTY;
                freechain (MVL_NM1LST);
                MVL_NM1LST = NULL;
             }
    break;

  case 17:
#line 342 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                (mvl_y_val.name).LEFT  = -1;
                (mvl_y_val.name).RIGHT = -1;
                (mvl_y_val.name).ERR_FLG = 0;
                }
    break;

  case 18:
#line 348 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.name) = (mvl_y_vsp[(1) - (1)].name); }
    break;

  case 19:
#line 355 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.name) = (mvl_y_vsp[(2) - (3)].name); }
    break;

  case 20:
#line 362 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                (mvl_y_val.name).LEFT  = (mvl_y_vsp[(1) - (3)].valu);
                (mvl_y_val.name).RIGHT = (mvl_y_vsp[(3) - (3)].valu);

                if ((((mvl_y_vsp[(1) - (3)].valu) > (mvl_y_vsp[(3) - (3)].valu)) && ((mvl_y_vsp[(2) - (3)].valu) == MVL_UPTDFN)) ||
                    (((mvl_y_vsp[(1) - (3)].valu) < (mvl_y_vsp[(3) - (3)].valu)) && ((mvl_y_vsp[(2) - (3)].valu) == MVL_DWTDFN)))
                  {
                  mvl_error (32, NULL);
                  (mvl_y_val.name).ERR_FLG = 1;
                  }
                else
                  (mvl_y_val.name).ERR_FLG = 0;
                }
    break;

  case 21:
#line 379 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_UPTDFN; }
    break;

  case 22:
#line 381 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_DWTDFN; }
    break;

  case 26:
#line 398 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { mvl_error (3, NULL); }
    break;

  case 30:
#line 421 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                struct locon *locon_pnt;
                struct losig *losig_pnt;
                long           sig_width;
                long           sig_conf;
                char         *sig_name;
                struct chain *sig_list;
                long           local_err;

                local_err = (mvl_y_vsp[(6) - (7)].name).ERR_FLG;
                if ( ((mvl_y_vsp[(6) - (7)].name).LEFT == -1) && (((mvl_y_vsp[(5) - (7)].valu) == MVL_BTVDFN) ||
                                         ((mvl_y_vsp[(5) - (7)].valu) == MVL_MXVDFN) ||
                                         ((mvl_y_vsp[(5) - (7)].valu) == MVL_WRVDFN)))
                  {
                  mvl_error (33, NULL);
                  }

                if ((mvl_y_vsp[(6) - (7)].name).LEFT <= (mvl_y_vsp[(6) - (7)].name).RIGHT)
                  sig_width = (mvl_y_vsp[(6) - (7)].name).RIGHT - (mvl_y_vsp[(6) - (7)].name).LEFT  + 1;
                else
                  sig_width = (mvl_y_vsp[(6) - (7)].name).LEFT  - (mvl_y_vsp[(6) - (7)].name).RIGHT + 1;

                sig_conf   = (mvl_y_vsp[(4) - (7)].valu) + (mvl_y_vsp[(5) - (7)].valu) + (mvl_y_vsp[(7) - (7)].valu);
                MVL_NM1LST = reverse (MVL_NM1LST);
                sig_list   = MVL_NM1LST;
                while ((sig_list != NULL) && (local_err == 0))
                  {
                  sig_name = (char *)sig_list->DATA;

                  if (mvl_chktab (MVL_HSHTAB,sig_name,MVL_MODNAM,
                                  MVL_SIGDFN) != 0)
                    mvl_error (4, sig_name);
                  else
                    {
                    switch (sig_conf)
                      {
                      case (MVL_ICNDFN + MVL_BITDFN + MVL_NORDFN) :
                      case (MVL_ICNDFN + MVL_BTVDFN + MVL_NORDFN) :
                        losig_pnt = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,'E','0',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        locon_pnt = mvl_addlocon (MVL_LOFPNT,losig_pnt,'I',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_OCNDFN + MVL_BITDFN + MVL_NORDFN) :
                      case (MVL_OCNDFN + MVL_BTVDFN + MVL_NORDFN) :
                        losig_pnt = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,'E','0',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        locon_pnt = mvl_addlocon (MVL_LOFPNT,losig_pnt,'O',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_OCNDFN + MVL_MUXDFN + MVL_BUSDFN) :
                      case (MVL_OCNDFN + MVL_MXVDFN + MVL_BUSDFN) :
                        losig_pnt = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,'E','M',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        locon_pnt = mvl_addlocon (MVL_LOFPNT,losig_pnt,'Z',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_OCNDFN + MVL_WORDFN + MVL_BUSDFN) :
                      case (MVL_OCNDFN + MVL_WRVDFN + MVL_BUSDFN) :
                        losig_pnt = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,'E','W',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        locon_pnt = mvl_addlocon (MVL_LOFPNT,losig_pnt,'Z',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_BCNDFN + MVL_BITDFN + MVL_NORDFN) :
                      case (MVL_BCNDFN + MVL_BTVDFN + MVL_NORDFN) :
                        losig_pnt = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,'E','0',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        locon_pnt = mvl_addlocon (MVL_LOFPNT,losig_pnt,'B',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_BCNDFN + MVL_MUXDFN + MVL_BUSDFN) :
                      case (MVL_BCNDFN + MVL_MXVDFN + MVL_BUSDFN) :
                        losig_pnt = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,'E','M',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        locon_pnt = mvl_addlocon (MVL_LOFPNT,losig_pnt,'T',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_BCNDFN + MVL_WORDFN + MVL_BUSDFN) :
                      case (MVL_BCNDFN + MVL_WRVDFN + MVL_BUSDFN) :
                        losig_pnt = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,'E','W',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        locon_pnt = mvl_addlocon (MVL_LOFPNT,losig_pnt,'T',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_XCNDFN + MVL_BITDFN + MVL_NORDFN) :
                      case (MVL_XCNDFN + MVL_BTVDFN + MVL_NORDFN) :
                        losig_pnt = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,'E','0',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        locon_pnt = mvl_addlocon (MVL_LOFPNT,losig_pnt,'X',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;
                      default :
                        mvl_error (5, sig_name);
                        local_err = 1;
                        break;
                      }

                    if (local_err == 0)
                      {
                      mvl_addtab (MVL_HSHTAB,sig_name,MVL_MODNAM,MVL_PNTDFN,
                                  (long)losig_pnt);
                      mvl_addtab (MVL_HSHTAB,sig_name,MVL_MODNAM,MVL_SIGDFN,
                                  sig_conf);
                      mvl_addtab (MVL_HSHTAB,sig_name,MVL_MODNAM,MVL_LFTDFN,
                                  (mvl_y_vsp[(6) - (7)].name).LEFT);
                      mvl_addtab (MVL_HSHTAB,sig_name,MVL_MODNAM,MVL_RGTDFN,
                                  (mvl_y_vsp[(6) - (7)].name).RIGHT);
                      MVL_CONCNT += sig_width;
                      MVL_SIGIDX += sig_width;
                      }
                    }

                  sig_list = sig_list->NEXT;
                  }
                freechain (MVL_NM1LST);
                MVL_NM1LST = NULL;
                }
    break;

  case 31:
#line 547 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {

                /* ###----------------------------------------------### */
                /*   The following 3 lines reject tokens until the      */
                /* sync. token ('Semicolon') is found                   */
                /* ###----------------------------------------------### */

                do
                  mvl_y_char = mvl_y_lex ();
                while ((mvl_y_char != Semicolon) && (mvl_y_char != 0));
                mvl_y_errok;

                mvl_error (6, NULL);
                }
    break;

  case 32:
#line 565 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                if (!strcmp (IN_LO, "vbe"))
                  MVL_Y_ACCEPT;
                }
    break;

  case 33:
#line 573 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                if ((mvl_y_vsp[(5) - (6)].text) != MVL_MODNAM)
                  mvl_error (1, (mvl_y_vsp[(5) - (6)].text));
                }
    break;

  case 34:
#line 583 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                if (((mvl_y_vsp[(12) - (13)].text) != NULL) && ((mvl_y_vsp[(12) - (13)].text) != (mvl_y_vsp[(3) - (13)].text)))
                  mvl_error (7, (mvl_y_vsp[(12) - (13)].text));
                }
    break;

  case 35:
#line 589 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { mvl_error (8, NULL); }
    break;

  case 41:
#line 607 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { mvl_error (9, NULL); }
    break;

  case 42:
#line 618 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                struct losig *losig_pnt;
                long           sig_width;
                long           sig_conf;
                char         *sig_name;
                struct chain *sig_list;
                long           local_err;

                local_err = (mvl_y_vsp[(5) - (7)].name).ERR_FLG;
                if (((mvl_y_vsp[(5) - (7)].name).LEFT==-1) && (((mvl_y_vsp[(4) - (7)].valu)==MVL_BTVDFN) || ((mvl_y_vsp[(4) - (7)].valu)==MVL_RGVDFN)))
                  {
                  mvl_error (33, NULL);
                  }
                if ((mvl_y_vsp[(5) - (7)].name).LEFT <= (mvl_y_vsp[(5) - (7)].name).RIGHT)
                  sig_width = (mvl_y_vsp[(5) - (7)].name).RIGHT - (mvl_y_vsp[(5) - (7)].name).LEFT  + 1;
                else
                  sig_width = (mvl_y_vsp[(5) - (7)].name).LEFT  - (mvl_y_vsp[(5) - (7)].name).RIGHT + 1;

                sig_conf   = (mvl_y_vsp[(4) - (7)].valu) + (mvl_y_vsp[(6) - (7)].valu);
                MVL_NM1LST = reverse (MVL_NM1LST);
                sig_list   = MVL_NM1LST;
                while ((sig_list != NULL) && (local_err == 0))
                  {
                  sig_name = (char *)sig_list->DATA;

                  if (mvl_chktab (MVL_HSHTAB,sig_name,MVL_MODNAM,
                                  MVL_SIGDFN) != 0)
                    mvl_error (10, sig_name);
                  else
                    {
                    switch (sig_conf)
                      {
                      case (MVL_BITDFN + MVL_NORDFN):
                      case (MVL_BTVDFN + MVL_NORDFN):
                        losig_pnt = mvl_addlosig(MVL_LOFPNT,MVL_SIGIDX,'I','0',
                                                 sig_name,(mvl_y_vsp[(5) - (7)].name).LEFT,(mvl_y_vsp[(5) - (7)].name).RIGHT);
                        break;

                      case (MVL_MUXDFN + MVL_BUSDFN):
                      case (MVL_MXVDFN + MVL_BUSDFN):
                        losig_pnt = mvl_addlosig(MVL_LOFPNT,MVL_SIGIDX,'I','M',
                                                 sig_name,(mvl_y_vsp[(5) - (7)].name).LEFT,(mvl_y_vsp[(5) - (7)].name).RIGHT);
                        break;

                      case (MVL_WORDFN + MVL_BUSDFN):
                      case (MVL_WRVDFN + MVL_BUSDFN):
                        losig_pnt = mvl_addlosig(MVL_LOFPNT,MVL_SIGIDX,'I','W',
                                                 sig_name,(mvl_y_vsp[(5) - (7)].name).LEFT,(mvl_y_vsp[(5) - (7)].name).RIGHT);
                        break;

                      default:
                        mvl_error (11, sig_name);
                        local_err = 1;
                        break;
                      }

                    if (local_err == 0)
                      {
                      mvl_addtab (MVL_HSHTAB,sig_name,MVL_MODNAM,MVL_PNTDFN,
                                  (long)losig_pnt);
                      mvl_addtab (MVL_HSHTAB,sig_name,MVL_MODNAM,MVL_SIGDFN,
                                  sig_conf);
                      mvl_addtab (MVL_HSHTAB,sig_name,MVL_MODNAM,MVL_LFTDFN,
                                  (mvl_y_vsp[(5) - (7)].name).LEFT);
                      mvl_addtab (MVL_HSHTAB,sig_name,MVL_MODNAM,MVL_RGTDFN,
                                  (mvl_y_vsp[(5) - (7)].name).RIGHT);
                      MVL_SIGIDX += sig_width;
                      }
                    }

                  sig_list = sig_list->NEXT;
                  }
                freechain (MVL_NM1LST);
                MVL_NM1LST = NULL;
                }
    break;

  case 43:
#line 698 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                MVL_CHDNAM = (mvl_y_vsp[(2) - (2)].text);

                if (mvl_chktab (MVL_HSHTAB,MVL_CHDNAM,MVL_MODNAM,MVL_MODDFN) != 0)
                  {
                  mvl_error (12, MVL_CHDNAM);
                  MVL_CHDPNT = NULL;
                  }
                else
                  {
                  MVL_CHDHED = addlomodel (MVL_CHDHED,MVL_CHDNAM);

                  MVL_CHDPNT = MVL_CHDHED;
                  mvl_addtab (MVL_HSHTAB,MVL_CHDNAM,MVL_MODNAM,MVL_MODDFN,MVL_CHDDFN);
                  }
                }
    break;

  case 44:
#line 719 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                if (MVL_CHDPNT != NULL)
                  {
                  mvl_addtab (MVL_HSHTAB,(mvl_y_vsp[(2) - (8)].text),MVL_MODNAM,MVL_CCNDFN,MVL_CONCNT);
                  MVL_LOFPNT->MODELCHAIN = addchain (MVL_LOFPNT->MODELCHAIN,(mvl_y_vsp[(2) - (8)].text));
                  }
                MVL_CONCNT = 0;
                }
    break;

  case 50:
#line 758 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                struct locon *locon_pnt;
                long           sig_width;
                long           sig_conf;
                char         *sig_name;
                struct chain *sig_list;
                long           local_err = 0;

                if (((mvl_y_vsp[(6) - (7)].name).ERR_FLG != 0) || (MVL_CHDPNT == NULL))
                  local_err = 1;

                if (((mvl_y_vsp[(6) - (7)].name).LEFT == -1) && (((mvl_y_vsp[(5) - (7)].valu) == MVL_BTVDFN) ||
                                        ((mvl_y_vsp[(5) - (7)].valu) == MVL_MXVDFN) ||
                                        ((mvl_y_vsp[(5) - (7)].valu) == MVL_WRVDFN))  )
                  {
                  mvl_error (33, NULL);
                  }
                if ((mvl_y_vsp[(6) - (7)].name).LEFT <= (mvl_y_vsp[(6) - (7)].name).RIGHT)
                  sig_width = (mvl_y_vsp[(6) - (7)].name).RIGHT - (mvl_y_vsp[(6) - (7)].name).LEFT  + 1;
                else
                  sig_width = (mvl_y_vsp[(6) - (7)].name).LEFT  - (mvl_y_vsp[(6) - (7)].name).RIGHT + 1;

                sig_conf   = (mvl_y_vsp[(4) - (7)].valu) + (mvl_y_vsp[(5) - (7)].valu) + (mvl_y_vsp[(7) - (7)].valu);
                MVL_NM1LST = reverse (MVL_NM1LST);
                sig_list   = MVL_NM1LST;
                while ((sig_list != NULL) && (local_err == 0))
                  {
                  sig_name = (char *)sig_list->DATA;
                  if (mvl_chktab (MVL_HSHTAB,sig_name,MVL_CHDNAM,
                                  MVL_SIGDFN) != 0)
                    mvl_error (4, sig_name);
                  else
                    {
                    switch (sig_conf)
                      {
                      case (MVL_ICNDFN + MVL_BITDFN + MVL_NORDFN) :
                      case (MVL_ICNDFN + MVL_BTVDFN + MVL_NORDFN) :
                        locon_pnt = mvl_addlocon (MVL_CHDPNT,NULL,'I',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_OCNDFN + MVL_BITDFN + MVL_NORDFN) :
                      case (MVL_OCNDFN + MVL_BTVDFN + MVL_NORDFN) :
                        locon_pnt = mvl_addlocon (MVL_CHDPNT,NULL,'O',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_OCNDFN + MVL_MUXDFN + MVL_BUSDFN) :
                      case (MVL_OCNDFN + MVL_MXVDFN + MVL_BUSDFN) :
                        locon_pnt = mvl_addlocon (MVL_CHDPNT,NULL,'Z',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_OCNDFN + MVL_WORDFN + MVL_BUSDFN) :
                      case (MVL_OCNDFN + MVL_WRVDFN + MVL_BUSDFN) :
                        locon_pnt = mvl_addlocon (MVL_CHDPNT,NULL,'Z',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_BCNDFN + MVL_BITDFN + MVL_NORDFN) :
                      case (MVL_BCNDFN + MVL_BTVDFN + MVL_NORDFN) :
                        locon_pnt = mvl_addlocon (MVL_CHDPNT,NULL,'B',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_BCNDFN + MVL_MUXDFN + MVL_BUSDFN) :
                      case (MVL_BCNDFN + MVL_MXVDFN + MVL_BUSDFN) :
                        locon_pnt = mvl_addlocon (MVL_CHDPNT,NULL,'T',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_BCNDFN + MVL_WORDFN + MVL_BUSDFN) :
                      case (MVL_BCNDFN + MVL_WRVDFN + MVL_BUSDFN) :
                        locon_pnt = mvl_addlocon (MVL_CHDPNT,NULL,'T',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      case (MVL_XCNDFN + MVL_BITDFN + MVL_NORDFN) :
                      case (MVL_XCNDFN + MVL_BTVDFN + MVL_NORDFN) :
                        locon_pnt = mvl_addlocon (MVL_CHDPNT,NULL,'X',
                                                  sig_name,(mvl_y_vsp[(6) - (7)].name).LEFT,(mvl_y_vsp[(6) - (7)].name).RIGHT);
                        break;

                      default :
                        mvl_error (5, sig_name);
                        local_err = 1;
                        break;
                      }

                    if (local_err == 0)
                      {
                      mvl_addtab (MVL_HSHTAB,MVL_CONCNT,MVL_CHDNAM,MVL_PNTDFN,
                                  sig_name);
                      mvl_addtab (MVL_HSHTAB,sig_name,  MVL_CHDNAM,MVL_SIGDFN,
                                  sig_conf);
                      mvl_addtab (MVL_HSHTAB,sig_name,  MVL_CHDNAM,MVL_RNGDFN,
                                  MVL_CONCNT);
                      mvl_addtab (MVL_HSHTAB,sig_name,  MVL_CHDNAM,MVL_LFTDFN,
                                  (mvl_y_vsp[(6) - (7)].name).LEFT);
                      mvl_addtab (MVL_HSHTAB,sig_name,  MVL_CHDNAM,MVL_RGTDFN,
                                  (mvl_y_vsp[(6) - (7)].name).RIGHT);
                      MVL_CONCNT += sig_width;
                      }
                    }
                  sig_list = sig_list->NEXT;
                  }
                freechain (MVL_NM1LST);
                MVL_NM1LST = NULL;
                }
    break;

  case 51:
#line 868 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {

                /* ###----------------------------------------------### */
                /*   The following 3 lines reject tokens until the      */
                /* sync. token ('Semicolon') is found                   */
                /* ###----------------------------------------------### */

                do
                  mvl_y_char = mvl_y_lex ();
                while ((mvl_y_char != Semicolon) && (mvl_y_char != 0));
                mvl_y_errok;

                mvl_error (6, NULL);
                }
    break;

  case 56:
#line 898 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { mvl_error (18, NULL); }
    break;

  case 57:
#line 904 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                long con_count;
                long local_err = 0;

                MVL_CONRNK = 0;
                MVL_CHDNAM = (mvl_y_vsp[(2) - (2)].text);
                MVL_LOCNAM = (mvl_y_vsp[(1) - (2)].text);

                if (mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(1) - (2)].text),MVL_MODNAM,MVL_LBLDFN) != 0)
                  {
                  mvl_error (13, (mvl_y_vsp[(1) - (2)].text));
                  local_err = 1;
                  }

                if (mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(2) - (2)].text),MVL_MODNAM,
                                MVL_MODDFN) != MVL_CHDDFN)
                  {
                  mvl_error (14, (mvl_y_vsp[(2) - (2)].text));
                  local_err = 1;
                  }

                if (local_err == 0)
                  {
                  mvl_addtab (MVL_HSHTAB,(mvl_y_vsp[(1) - (2)].text),MVL_MODNAM,MVL_LBLDFN,1);
                  con_count  = mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(2) - (2)].text),MVL_MODNAM,MVL_CCNDFN);
                  MVL_NM1LST = NULL;
                  while (con_count != 0)
                    {
                    MVL_NM1LST = addchain (MVL_NM1LST,NULL);
                    con_count--;
                    }
                  MVL_CHDPNT = MVL_CHDHED;
                  while (MVL_CHDPNT != NULL)
                    {
                    if (MVL_CHDPNT->NAME == (mvl_y_vsp[(2) - (2)].text))
                      break;
                    MVL_CHDPNT = MVL_CHDPNT->NEXT;
                    }
                  }
                else
                  MVL_CHDPNT = NULL;

                }
    break;

  case 58:
#line 950 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                struct loins *loins_pnt    ;
                struct locon *locon_pnt    ;
                struct chain *chain_pnt    ;
                struct logen *genmod       ;
                char         *prt_name     ;
                char          tampon [256] ;
                long           i            = 0;

                if (MVL_CHDPNT != NULL)
                  {
                  MVL_NM1LST = reverse (MVL_NM1LST);

                  chain_pnt  = MVL_NM1LST;
                  locon_pnt  = MVL_CHDPNT->LOCON;

                  while (chain_pnt != NULL)
                    {
                    if (chain_pnt->DATA == NULL)
                      {
                      MVL_SIGIDX++;
                      sprintf(tampon,"%s:%s.%s",MVL_CHDNAM,(mvl_y_vsp[(1) - (6)].text),locon_pnt->NAME);
                      chain_pnt->DATA = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,
                                                      'I','0',tampon,-1,-1);
                      }
                    chain_pnt = chain_pnt->NEXT;
                    locon_pnt = locon_pnt->NEXT;
                    }

                  if (MVL_ERRFLG == 0) {
                    loins_pnt = addloins (MVL_LOFPNT, (mvl_y_vsp[(1) - (6)].text)  , MVL_CHDPNT,
                                          MVL_NM1LST );
                     if (MVL_CHDPNT->USER) {
                        if (!MVL_PTPPNT)
                           MVL_PTPPNT = addptype(NULL,LOGEN,NULL);  
                        loins_pnt->USER=MVL_PTPPNT;
                        MVL_PTPPNT->DATA
                                = chklogen(loins_pnt->USER->DATA,
                                             MVL_CHDPNT->USER->DATA,
                                             MVL_CHDNAM, loins_pnt->INSNAME);
                     } else {
                        if (MVL_PTPPNT) {
                           fprintf(stderr,"No generic for model %s, NULLed !\n",
                                MVL_CHDPNT->NAME);
                           loins_pnt->USER=NULL;
                        }
                     }

                    }
                  }

                freechain (MVL_NM1LST);
                MVL_NM1LST = NULL;
                MVL_SIMFLG = MVL_UKNDFN;
                }
    break;

  case 59:
#line 1013 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_PTPPNT = NULL;
          }
    break;

  case 61:
#line 1025 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_PTPPNT = addptype(NULL,LOGEN,MVL_GENPNT);  
             MVL_GENPNT = NULL;
          }
    break;

  case 65:
#line 1047 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_GENPNT = duplogen(&MVL_LOGEN,MVL_GENPNT,(mvl_y_vsp[(1) - (3)].text));
             MVL_LOGEN.TYPE=GENTYPE_EMPTY;
          }
    break;

  case 66:
#line 1052 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_GENPNT = duplogen(&MVL_LOGEN,MVL_GENPNT,NULL);
             MVL_LOGEN.TYPE=GENTYPE_EMPTY;
          }
    break;

  case 72:
#line 1078 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                   if ((mvl_y_vsp[(1) - (2)].flag))
                      if (MVL_LOGEN.TYPE!=GENTYPE_VAL) {
                         fputs("Don't know how to change Identifier sign\n",
                               stderr);
                      } else
                         MVL_LOGEN.VALUE.VAL = -MVL_LOGEN.VALUE.VAL;
                }
    break;

  case 74:
#line 1090 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.flag) = 0; }
    break;

  case 75:
#line 1091 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.flag) = 0; }
    break;

  case 76:
#line 1092 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.flag) = 1; }
    break;

  case 80:
#line 1112 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_LOGEN.VALUE.TEXT=namealloc((mvl_y_vsp[(1) - (1)].text));
             MVL_LOGEN.TYPE=GENTYPE_TEXT;
          }
    break;

  case 82:
#line 1118 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_LOGEN.VALUE.LIST = (logen_list *)reverse(MVL_GENLST->DATA);
             MVL_LOGEN.TYPE = GENTYPE_LIST;
             MVL_GENLST = delchain(MVL_GENLST, MVL_GENLST);
          }
    break;

  case 83:
#line 1127 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_GENLST = addchain(MVL_GENLST, NULL);
          }
    break;

  case 87:
#line 1145 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_GENLST->DATA = duplogen (&MVL_LOGEN,
                                ((logen_list *)MVL_GENLST->DATA), NULL);
             MVL_LOGEN.TYPE = GENTYPE_EMPTY;
          }
    break;

  case 89:
#line 1163 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = (mvl_y_vsp[(1) - (1)].text); }
    break;

  case 90:
#line 1168 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_LOGEN.VALUE.VAL = (mvl_y_vsp[(1) - (1)].valu);
             if (base==16)
                MVL_LOGEN.TYPE = GENTYPE_HEX ;
             else
                MVL_LOGEN.TYPE = GENTYPE_VAL ;
          }
    break;

  case 91:
#line 1176 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_LOGEN.VALUE.TEXT = strdup((mvl_y_vsp[(1) - (1)].text));
             MVL_LOGEN.TYPE = GENTYPE_TEXT;
          }
    break;

  case 92:
#line 1181 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
             MVL_LOGEN.VALUE.CHAR = (mvl_y_vsp[(1) - (1)].text)[1];
             MVL_LOGEN.TYPE = GENTYPE_BIT;
          }
    break;

  case 99:
#line 1220 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                long           sig_width;
                long           con_pos;
                struct chain *sig_list1;
                struct chain *sig_list2;
                long           local_err = 0;

                if (MVL_CHDPNT == NULL)
                  local_err = 1;
                sig_list1 = MVL_NM1LST;

                if (MVL_SIMFLG == MVL_IMPDFN)
                  sig_list1 = MVL_NM2LST;
                MVL_SIMFLG = MVL_EXPDFN;

                if ((mvl_y_vsp[(1) - (3)].name).LEFT <= (mvl_y_vsp[(1) - (3)].name).RIGHT)
                  sig_width = (mvl_y_vsp[(1) - (3)].name).RIGHT - (mvl_y_vsp[(1) - (3)].name).LEFT + 1;
                else
                  sig_width = (mvl_y_vsp[(1) - (3)].name).LEFT - (mvl_y_vsp[(1) - (3)].name).RIGHT + 1;

                if (local_err == 0)
                  {
                  if (sig_width != (mvl_y_vsp[(3) - (3)].expr).WIDTH)
                    mvl_error (38, NULL);
                  else
                    {
                    if (MVL_ERRFLG == 0)
                      {
                      con_pos = mvl_chktab (MVL_HSHTAB, (mvl_y_vsp[(1) - (3)].name).NAME, MVL_CHDNAM,
                                            MVL_RNGDFN);
                      while (con_pos != 0)
                        {
                        sig_list1 = sig_list1->NEXT;
                        con_pos--;
                        }
                      sig_list2 = (mvl_y_vsp[(3) - (3)].expr).LIST;
                      while (sig_list2 != NULL)
                        {
                        if (sig_list1->DATA != NULL)
                          {
                          mvl_error (41, (mvl_y_vsp[(1) - (3)].name).NAME);
                          break;
                          }
                        sig_list1->DATA = sig_list2->DATA;
                        sig_list2       = sig_list2->NEXT;
                        sig_list1       = sig_list1->NEXT;
                        }
                      }
                    }
                  }
                freechain ((mvl_y_vsp[(3) - (3)].expr).LIST);
                }
    break;

  case 100:
#line 1273 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                long           sig_width ;
                struct chain *sig_list1 ;
                char         *prt_name  ;
                long           prt_width ;
                long           left_bnd  ;
                long           right_bnd ;
                long           local_err = 0;
                long           i         ;

                if (MVL_CHDPNT == NULL)
                  local_err = 1;

                if (MVL_SIMFLG == MVL_UKNDFN)
                  {
                  MVL_SIMFLG = MVL_IMPDFN;
                  MVL_NM2LST = MVL_NM1LST;
                  }
                if (MVL_SIMFLG != MVL_IMPDFN)
                  {
                  mvl_error (15, NULL);
                  local_err = 1;
                  }

                prt_name  = (char *) mvl_chktab (MVL_HSHTAB,MVL_CONRNK,
                                                 MVL_CHDNAM,MVL_PNTDFN);
                if (prt_name == NULL)
                  {
                  local_err = 1;
                  mvl_error (76, MVL_LOCNAM);
                  }

                right_bnd = mvl_chktab (MVL_HSHTAB,prt_name,MVL_CHDNAM,
                                        MVL_LFTDFN);
                left_bnd  = mvl_chktab (MVL_HSHTAB,prt_name,MVL_CHDNAM,
                                        MVL_RGTDFN);

                if (left_bnd <= right_bnd)
                  prt_width = right_bnd - left_bnd  + 1;
                else
                  prt_width = left_bnd  - right_bnd + 1;

                if (local_err == 0)
                  {
                  if (prt_width != (mvl_y_vsp[(1) - (1)].expr).WIDTH)
                    {
                    mvl_error (38, NULL);
                    for (i=0 ; i<prt_width ; i++)
                      MVL_NM2LST = MVL_NM2LST->NEXT;
                    }
                  else
                    {
                    sig_list1 = (mvl_y_vsp[(1) - (1)].expr).LIST;
                    while (sig_list1 != NULL)
                      {
                      MVL_NM2LST->DATA = sig_list1->DATA;
                      sig_list1        = sig_list1->NEXT;
                      MVL_NM2LST       = MVL_NM2LST->NEXT;
                      }
                    }
                  MVL_CONRNK += prt_width;
                  }
                freechain ((mvl_y_vsp[(1) - (1)].expr).LIST);
                }
    break;

  case 101:
#line 1338 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {

                /* ###----------------------------------------------### */
                /*   The following 3 lines reject tokens until the      */
                /* sync. token ('Comma') is found                       */
                /* ###----------------------------------------------### */

                do
                  mvl_y_char = mvl_y_lex ();
                while ((mvl_y_char != Comma) && (mvl_y_char != 0));
                mvl_y_errok;

                MVL_CONRNK++;
                mvl_error (31, NULL);
                }
    break;

  case 102:
#line 1357 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                if (MVL_CHDPNT != NULL)
                  {
                  if (mvl_chktab(MVL_HSHTAB,(mvl_y_vsp[(1) - (1)].name).NAME,MVL_CHDNAM,MVL_SIGDFN) != 0)
                    {
                    (mvl_y_val.name).LEFT  = mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(1) - (1)].name).NAME,MVL_CHDNAM,
                                           MVL_LFTDFN);
                    (mvl_y_val.name).RIGHT = mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(1) - (1)].name).NAME,MVL_CHDNAM,
                                           MVL_RGTDFN);
                    }
                  else
                    {
                    mvl_error (16, (mvl_y_vsp[(1) - (1)].name).NAME);
                    (mvl_y_val.name) = (mvl_y_vsp[(1) - (1)].name);
                    }
                  }
                else
                  (mvl_y_val.name) = (mvl_y_vsp[(1) - (1)].name);
                }
    break;

  case 103:
#line 1380 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 104:
#line 1385 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                (mvl_y_val.name).NAME  = (mvl_y_vsp[(1) - (1)].text);
                (mvl_y_val.name).LEFT  = -1;
                (mvl_y_val.name).RIGHT = -1;
                }
    break;

  case 105:
#line 1391 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.name) = (mvl_y_vsp[(1) - (1)].name); }
    break;

  case 106:
#line 1393 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.name) = (mvl_y_vsp[(1) - (1)].name); }
    break;

  case 107:
#line 1401 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                (mvl_y_val.name).NAME  = (mvl_y_vsp[(1) - (4)].text);
                (mvl_y_val.name).LEFT  = (mvl_y_vsp[(3) - (4)].valu);
                (mvl_y_val.name).RIGHT = (mvl_y_vsp[(3) - (4)].valu);
                }
    break;

  case 108:
#line 1411 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                (mvl_y_val.name).NAME  = (mvl_y_vsp[(1) - (2)].text);
                (mvl_y_val.name).LEFT  = (mvl_y_vsp[(2) - (2)].name).LEFT;
                (mvl_y_val.name).RIGHT = (mvl_y_vsp[(2) - (2)].name).RIGHT;
                }
    break;

  case 109:
#line 1421 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 110:
#line 1426 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 111:
#line 1431 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 112:
#line 1436 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 113:
#line 1440 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                struct chain *list1;

                list1 = (mvl_y_vsp[(1) - (3)].expr).LIST;
                while (list1->NEXT != NULL)
                  list1 = list1->NEXT;

                list1->NEXT = (mvl_y_vsp[(3) - (3)].expr).LIST;
                (mvl_y_val.expr).LIST     = (mvl_y_vsp[(1) - (3)].expr).LIST;
                (mvl_y_val.expr).WIDTH    = (mvl_y_vsp[(1) - (3)].expr).WIDTH + (mvl_y_vsp[(3) - (3)].expr).WIDTH;
                }
    break;

  case 114:
#line 1456 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 115:
#line 1462 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 116:
#line 1467 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 117:
#line 1469 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 118:
#line 1471 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                mvl_expr      expr;
                struct losig *losig_pnt;
                long           i;
                long           left;
                long           right;
                long           left_bnd;
                long           right_bnd;
                long           sig_width;
                long           rev_flg;
                long           in_bound;
                long           out_bound;

                if (mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(1) - (1)].name).NAME,MVL_MODNAM,MVL_SIGDFN) != 0)
                  {
                  left_bnd  = mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(1) - (1)].name).NAME,MVL_MODNAM,
                                          MVL_LFTDFN);
                  right_bnd = mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(1) - (1)].name).NAME,MVL_MODNAM,
                                          MVL_RGTDFN);

                  if ((mvl_y_vsp[(1) - (1)].name).LEFT == -1)
                    {
                    left  = left_bnd;
                    right = right_bnd;
                    }
                  else
                    {
                    left  = (mvl_y_vsp[(1) - (1)].name).LEFT;
                    right = (mvl_y_vsp[(1) - (1)].name).RIGHT;
                    }

                  if (left_bnd <= right_bnd)
                    {
                    sig_width = right_bnd - left_bnd + 1;
                    if (left <= right)
                      {
                      expr.WIDTH   = right - left + 1;
                      rev_flg    = 0;
                      in_bound   = right_bnd - right;
                      out_bound  = right_bnd - left;
                      if ((left < left_bnd) || (right > right_bnd))
                        mvl_error (36, (mvl_y_vsp[(1) - (1)].name).NAME);
                      }
                    else
                      {
                      expr.WIDTH   = left - right + 1;
                      rev_flg    = 1;
                      in_bound   = right_bnd - left;
                      out_bound  = right_bnd - right;
                      if ((left > right_bnd) || (right < left_bnd))
                        mvl_error (36, (mvl_y_vsp[(1) - (1)].name).NAME);
                      }
                    }
                  else
                    {
                    sig_width = left_bnd - right_bnd + 1;
                    if (left <= right)
                      {
                      expr.WIDTH   = right - left + 1;
                      rev_flg    = 1;
                      in_bound   = left  - right_bnd;
                      out_bound  = right - right_bnd;
                      if ((left < right_bnd) || (right > left_bnd))
                        mvl_error (36, (mvl_y_vsp[(1) - (1)].name).NAME);
                      }
                    else
                      {
                      expr.WIDTH   = left - right + 1;
                      rev_flg    = 0;
                      in_bound   = right - right_bnd;
                      out_bound  = left  - right_bnd;
                      if ((left > left_bnd) || (right < right_bnd))
                        mvl_error (36, (mvl_y_vsp[(1) - (1)].name).NAME);
                      }
                    }

                  losig_pnt = (struct losig *)
                              mvl_chktab (MVL_HSHTAB,(mvl_y_vsp[(1) - (1)].name).NAME,MVL_MODNAM,
                                          MVL_PNTDFN);
                  expr.LIST = NULL;
                  for (i=0 ; i<sig_width ; i++)
                    {
                    if (i >= in_bound)
                      expr.LIST = addchain (expr.LIST,losig_pnt);
                    if (i >= out_bound)
                      break;
                    losig_pnt = losig_pnt->NEXT;
                    }
                  if (rev_flg == 1)
                    expr.LIST = reverse (expr.LIST);
                  }
                else
                  {
                  mvl_error (17, (mvl_y_vsp[(1) - (1)].name).NAME);
                  expr.WIDTH = 1;
                  expr.LIST  = addchain (NULL,NULL);
                  }
                (mvl_y_val.expr) = expr;
                }
    break;

  case 119:
#line 1576 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(2) - (3)].expr); }
    break;

  case 120:
#line 1584 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(3) - (4)].expr); }
    break;

  case 123:
#line 1595 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ICNDFN; }
    break;

  case 124:
#line 1597 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ICNDFN; }
    break;

  case 125:
#line 1599 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_OCNDFN; }
    break;

  case 126:
#line 1601 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BCNDFN; }
    break;

  case 127:
#line 1603 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                mvl_warning (2, NULL);
                (mvl_y_val.valu) = MVL_XCNDFN;
                }
    break;

  case 128:
#line 1611 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ICNDFN; }
    break;

  case 129:
#line 1613 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ICNDFN; }
    break;

  case 130:
#line 1615 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_OCNDFN; }
    break;

  case 131:
#line 1617 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BCNDFN; }
    break;

  case 132:
#line 1619 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_XCNDFN; }
    break;

  case 133:
#line 1624 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BITDFN; }
    break;

  case 134:
#line 1626 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_WORDFN; }
    break;

  case 135:
#line 1628 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_MUXDFN; }
    break;

  case 136:
#line 1630 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BTVDFN; }
    break;

  case 137:
#line 1632 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_WRVDFN; }
    break;

  case 138:
#line 1634 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_MXVDFN; }
    break;

  case 139:
#line 1636 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_NATDFN; }
    break;

  case 140:
#line 1638 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_NATDFN; }
    break;

  case 141:
#line 1640 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_NAVDFN; }
    break;

  case 142:
#line 1642 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_NATDFN; }
    break;

  case 143:
#line 1644 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_STRDFN; }
    break;

  case 144:
#line 1646 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_LSTDFN; }
    break;

  case 145:
#line 1648 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ARGDFN; }
    break;

  case 146:
#line 1653 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_NORDFN; }
    break;

  case 147:
#line 1655 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BUSDFN; }
    break;

  case 148:
#line 1660 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                  MVL_NM1LST = addchain (MVL_NM1LST,(mvl_y_vsp[(1) - (1)].text));
                }
    break;

  case 151:
#line 1671 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                  MVL_NM1LST = addchain (MVL_NM1LST,(mvl_y_vsp[(3) - (3)].text));
                }
    break;

  case 152:
#line 1679 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = (mvl_y_vsp[(1) - (2)].text); }
    break;

  case 153:
#line 1684 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = NULL; }
    break;

  case 154:
#line 1686 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = (mvl_y_vsp[(1) - (1)].text); }
    break;

  case 155:
#line 1691 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = (mvl_y_vsp[(1) - (1)].text); }
    break;

  case 156:
#line 1696 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { mvl_y_errok; }
    break;

  case 157:
#line 1701 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    {
                  char *absend, *absbase;

                  base = strtoul ((mvl_y_vsp[(1) - (1)].text), &absbase, 10);
                  if (*absbase=='\0')
                     (mvl_y_val.valu) = base;
                  else
                     (mvl_y_val.valu) = strtoul(absbase+1, &absend, base);
                }
    break;

  case 158:
#line 1714 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { mvl_y_errok; }
    break;

  case 159:
#line 1719 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"
    { mvl_y_errok; }
    break;


/* Line 1267 of yacc.c.  */
#line 3264 "y.tab.c"
      default: break;
    }
  MVL_Y__SYMBOL_PRINT ("-> $$ =", mvl_y_r1[mvl_y_n], &mvl_y_val, &mvl_y_loc);

  MVL_Y_POPSTACK (mvl_y_len);
  mvl_y_len = 0;
  MVL_Y__STACK_PRINT (mvl_y_ss, mvl_y_ssp);

  *++mvl_y_vsp = mvl_y_val;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  mvl_y_n = mvl_y_r1[mvl_y_n];

  mvl_y_state = mvl_y_pgoto[mvl_y_n - MVL_Y_NTOKENS] + *mvl_y_ssp;
  if (0 <= mvl_y_state && mvl_y_state <= MVL_Y_LAST && mvl_y_check[mvl_y_state] == *mvl_y_ssp)
    mvl_y_state = mvl_y_table[mvl_y_state];
  else
    mvl_y_state = mvl_y_defgoto[mvl_y_n - MVL_Y_NTOKENS];

  goto mvl_y_newstate;


/*------------------------------------.
| mvl_y_errlab -- here on detecting error |
`------------------------------------*/
mvl_y_errlab:
  /* If not already recovering from an error, report this error.  */
  if (!mvl_y_errstatus)
    {
      ++mvl_y_nerrs;
#if ! MVL_Y_ERROR_VERBOSE
      mvl_y_error (MVL_Y__("syntax error"));
#else
      {
	MVL_Y_SIZE_T mvl_y_size = mvl_y_syntax_error (0, mvl_y_state, mvl_y_char);
	if (mvl_y_msg_alloc < mvl_y_size && mvl_y_msg_alloc < MVL_Y_STACK_ALLOC_MAXIMUM)
	  {
	    MVL_Y_SIZE_T mvl_y_alloc = 2 * mvl_y_size;
	    if (! (mvl_y_size <= mvl_y_alloc && mvl_y_alloc <= MVL_Y_STACK_ALLOC_MAXIMUM))
	      mvl_y_alloc = MVL_Y_STACK_ALLOC_MAXIMUM;
	    if (mvl_y_msg != mvl_y_msgbuf)
	      MVL_Y_STACK_FREE (mvl_y_msg);
	    mvl_y_msg = (char *) MVL_Y_STACK_ALLOC (mvl_y_alloc);
	    if (mvl_y_msg)
	      mvl_y_msg_alloc = mvl_y_alloc;
	    else
	      {
		mvl_y_msg = mvl_y_msgbuf;
		mvl_y_msg_alloc = sizeof mvl_y_msgbuf;
	      }
	  }

	if (0 < mvl_y_size && mvl_y_size <= mvl_y_msg_alloc)
	  {
	    (void) mvl_y_syntax_error (mvl_y_msg, mvl_y_state, mvl_y_char);
	    mvl_y_error (mvl_y_msg);
	  }
	else
	  {
	    mvl_y_error (MVL_Y__("syntax error"));
	    if (mvl_y_size != 0)
	      goto mvl_y_exhaustedlab;
	  }
      }
#endif
    }



  if (mvl_y_errstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (mvl_y_char <= MVL_Y_EOF)
	{
	  /* Return failure if at end of input.  */
	  if (mvl_y_char == MVL_Y_EOF)
	    MVL_Y_ABORT;
	}
      else
	{
	  mvl_y_destruct ("Error: discarding",
		      mvl_y_token, &mvl_y_lval);
	  mvl_y_char = MVL_Y_EMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto mvl_y_errlab1;


/*---------------------------------------------------.
| mvl_y_errorlab -- error raised explicitly by MVL_Y_ERROR.  |
`---------------------------------------------------*/
mvl_y_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     MVL_Y_ERROR and the label mvl_y_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto mvl_y_errorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this MVL_Y_ERROR.  */
  MVL_Y_POPSTACK (mvl_y_len);
  mvl_y_len = 0;
  MVL_Y__STACK_PRINT (mvl_y_ss, mvl_y_ssp);
  mvl_y_state = *mvl_y_ssp;
  goto mvl_y_errlab1;


/*-------------------------------------------------------------.
| mvl_y_errlab1 -- common code for both syntax error and MVL_Y_ERROR.  |
`-------------------------------------------------------------*/
mvl_y_errlab1:
  mvl_y_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      mvl_y_n = mvl_y_pact[mvl_y_state];
      if (mvl_y_n != MVL_Y_PACT_NINF)
	{
	  mvl_y_n += MVL_Y_TERROR;
	  if (0 <= mvl_y_n && mvl_y_n <= MVL_Y_LAST && mvl_y_check[mvl_y_n] == MVL_Y_TERROR)
	    {
	      mvl_y_n = mvl_y_table[mvl_y_n];
	      if (0 < mvl_y_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (mvl_y_ssp == mvl_y_ss)
	MVL_Y_ABORT;


      mvl_y_destruct ("Error: popping",
		  mvl_y_stos[mvl_y_state], mvl_y_vsp);
      MVL_Y_POPSTACK (1);
      mvl_y_state = *mvl_y_ssp;
      MVL_Y__STACK_PRINT (mvl_y_ss, mvl_y_ssp);
    }

  if (mvl_y_n == MVL_Y_FINAL)
    MVL_Y_ACCEPT;

  *++mvl_y_vsp = mvl_y_lval;


  /* Shift the error token.  */
  MVL_Y__SYMBOL_PRINT ("Shifting", mvl_y_stos[mvl_y_n], mvl_y_vsp, mvl_y_lsp);

  mvl_y_state = mvl_y_n;
  goto mvl_y_newstate;


/*-------------------------------------.
| mvl_y_acceptlab -- MVL_Y_ACCEPT comes here.  |
`-------------------------------------*/
mvl_y_acceptlab:
  mvl_y_result = 0;
  goto mvl_y_return;

/*-----------------------------------.
| mvl_y_abortlab -- MVL_Y_ABORT comes here.  |
`-----------------------------------*/
mvl_y_abortlab:
  mvl_y_result = 1;
  goto mvl_y_return;

#ifndef mvl_y_overflow
/*-------------------------------------------------.
| mvl_y_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
mvl_y_exhaustedlab:
  mvl_y_error (MVL_Y__("memory exhausted"));
  mvl_y_result = 2;
  /* Fall through.  */
#endif

mvl_y_return:
  if (mvl_y_char != MVL_Y_EOF && mvl_y_char != MVL_Y_EMPTY)
     mvl_y_destruct ("Cleanup: discarding lookahead",
		 mvl_y_token, &mvl_y_lval);
  /* Do not reclaim the symbols of the rule which action triggered
     this MVL_Y_ABORT or MVL_Y_ACCEPT.  */
  MVL_Y_POPSTACK (mvl_y_len);
  MVL_Y__STACK_PRINT (mvl_y_ss, mvl_y_ssp);
  while (mvl_y_ssp != mvl_y_ss)
    {
      mvl_y_destruct ("Cleanup: popping",
		  mvl_y_stos[*mvl_y_ssp], mvl_y_vsp);
      MVL_Y_POPSTACK (1);
    }
#ifndef mvl_y_overflow
  if (mvl_y_ss != mvl_y_ssa)
    MVL_Y_STACK_FREE (mvl_y_ss);
#endif
#if MVL_Y_ERROR_VERBOSE
  if (mvl_y_msg != mvl_y_msgbuf)
    MVL_Y_STACK_FREE (mvl_y_msg);
#endif
  /* Make sure MVL_Y_ID is used.  */
  return MVL_Y_ID (mvl_y_result);
}


#line 1722 "../../../src/mbkvhdlg/src/mvl_scomp_y.y"


