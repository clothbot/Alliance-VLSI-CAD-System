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
     ASSERT = 298,
     ATTRIBUTE = 299,
     _BEGIN = 300,
     BIT = 301,
     BIT_VECTOR = 302,
     BLOCK = 303,
     BODY = 304,
     BUFFER = 305,
     BUS = 306,
     CASE = 307,
     COMPONENT = 308,
     CONFIGURATION = 309,
     CONSTANT = 310,
     CONVERT = 311,
     DISCONNECT = 312,
     DOWNTO = 313,
     ELSE = 314,
     ELSIF = 315,
     _END = 316,
     ENTITY = 317,
     ERROR = 318,
     _EXIT = 319,
     _FILE = 320,
     FOR = 321,
     FUNCTION = 322,
     GENERATE = 323,
     GENERIC = 324,
     GUARDED = 325,
     IF = 326,
     _INOUT = 327,
     _IN = 328,
     IS = 329,
     _LABEL = 330,
     LIBRARY = 331,
     _LINKAGE = 332,
     LOOP = 333,
     MAP = 334,
     MOD = 335,
     MUX_BIT = 336,
     MUX_VECTOR = 337,
     _NAND = 338,
     NATURAL = 339,
     NATURAL_VECTOR = 340,
     NEW = 341,
     _NEXT = 342,
     _NOR = 343,
     _NOT = 344,
     tok_NULL = 345,
     OF = 346,
     ON = 347,
     OPEN = 348,
     _OR = 349,
     OTHERS = 350,
     _OUT = 351,
     _PACKAGE = 352,
     PORT = 353,
     PROCEDURE = 354,
     PROCESS = 355,
     RANGE = 356,
     RECORD = 357,
     REG_BIT = 358,
     REG_VECTOR = 359,
     REGISTER = 360,
     REM = 361,
     REPORT = 362,
     RETURN = 363,
     SELECT = 364,
     SEVERITY = 365,
     SIGNAL = 366,
     _STABLE = 367,
     SUBTYPE = 368,
     THEN = 369,
     TO = 370,
     TRANSPORT = 371,
     _TYPE = 372,
     UNITS = 373,
     UNTIL = 374,
     USE = 375,
     VARIABLE = 376,
     WAIT = 377,
     WARNING = 378,
     WHEN = 379,
     WHILE = 380,
     WITH = 381,
     WOR_BIT = 382,
     WOR_VECTOR = 383,
     _XOR = 384
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
#define ASSERT 298
#define ATTRIBUTE 299
#define _BEGIN 300
#define BIT 301
#define BIT_VECTOR 302
#define BLOCK 303
#define BODY 304
#define BUFFER 305
#define BUS 306
#define CASE 307
#define COMPONENT 308
#define CONFIGURATION 309
#define CONSTANT 310
#define CONVERT 311
#define DISCONNECT 312
#define DOWNTO 313
#define ELSE 314
#define ELSIF 315
#define _END 316
#define ENTITY 317
#define ERROR 318
#define _EXIT 319
#define _FILE 320
#define FOR 321
#define FUNCTION 322
#define GENERATE 323
#define GENERIC 324
#define GUARDED 325
#define IF 326
#define _INOUT 327
#define _IN 328
#define IS 329
#define _LABEL 330
#define LIBRARY 331
#define _LINKAGE 332
#define LOOP 333
#define MAP 334
#define MOD 335
#define MUX_BIT 336
#define MUX_VECTOR 337
#define _NAND 338
#define NATURAL 339
#define NATURAL_VECTOR 340
#define NEW 341
#define _NEXT 342
#define _NOR 343
#define _NOT 344
#define tok_NULL 345
#define OF 346
#define ON 347
#define OPEN 348
#define _OR 349
#define OTHERS 350
#define _OUT 351
#define _PACKAGE 352
#define PORT 353
#define PROCEDURE 354
#define PROCESS 355
#define RANGE 356
#define RECORD 357
#define REG_BIT 358
#define REG_VECTOR 359
#define REGISTER 360
#define REM 361
#define REPORT 362
#define RETURN 363
#define SELECT 364
#define SEVERITY 365
#define SIGNAL 366
#define _STABLE 367
#define SUBTYPE 368
#define THEN 369
#define TO 370
#define TRANSPORT 371
#define _TYPE 372
#define UNITS 373
#define UNTIL 374
#define USE 375
#define VARIABLE 376
#define WAIT 377
#define WARNING 378
#define WHEN 379
#define WHILE 380
#define WITH 381
#define WOR_BIT 382
#define WOR_VECTOR 383
#define _XOR 384




/* Copy the first part of user declarations.  */
#line 12 "../../../src/mbkvhdl/src/mvl_scomp_y.y"

#include <stdio.h>
#include <mut.h>
#include <mlo.h>
#include "mvl_stype.h"
#include "mvl_syacc.h"
#include "mvl_stdef.h"


static int           MVL_GENFLG = 0   ;	/* Indicates if generic 	*/
static int           MVL_CONRNK = 0   ;	/* rank of an implicit connexion*/
static int           MVL_SIGIDX = 1   ;	/* structural's signal index    */
static int           MVL_SIMFLG = 0   ;	/* simple flag                  */
static int           MVL_CONCNT = 0   ;	/* connector's count            */
static char         *MVL_MODNAM ;	/* current model name           */
static char         *MVL_CHDNAM ;	/* child's model name           */
static char         *MVL_LOCNAM ;	/* instance's name           	*/
static struct chain *MVL_NM1LST = NULL;	/* 1-st name liste              */
static struct chain *MVL_NM2LST = NULL;	/* 2-nd name liste              */
static struct lofig *MVL_CHDPNT = NULL;	/* current child pointer        */
static struct lofig *MVL_CHDHED = NULL;	/* childs list                  */



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
#line 36 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
{
  long        valu;
  char       *text;
  char        flag;
  mvl_name    name;
  mvl_expr    expr;
  }
/* Line 187 of yacc.c.  */
#line 386 "y.tab.c"
	MVL_Y_STYPE;
# define mvl_y_stype MVL_Y_STYPE /* obsolescent; will be withdrawn */
# define MVL_Y_STYPE_IS_DECLARED 1
# define MVL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 399 "y.tab.c"

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
#define MVL_Y_LAST   160

/* MVL_Y_NTOKENS -- Number of terminals.  */
#define MVL_Y_NTOKENS  130
/* MVL_Y_NNTS -- Number of nonterminals.  */
#define MVL_Y_NNTS  77
/* MVL_Y_NRULES -- Number of rules.  */
#define MVL_Y_NRULES  127
/* MVL_Y_NRULES -- Number of states.  */
#define MVL_Y_NSTATES  210

/* MVL_Y_TRANSLATE(MVL_Y_LEX) -- Bison symbol number corresponding to MVL_Y_LEX.  */
#define MVL_Y_UNDEFTOK  2
#define MVL_Y_MAXUTOK   384

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
     125,   126,   127,   128,   129
};

#if MVL_Y_DEBUG
/* MVL_Y_PRHS[MVL_Y_N] -- Index of the first RHS symbol of rule number MVL_Y_N in
   MVL_Y_RHS.  */
static const mvl_y_type_uint16 mvl_y_prhs[] =
{
       0,     0,     3,     6,     7,    17,    20,    21,    23,    29,
      33,    36,    37,    41,    42,    43,    52,    54,    57,    59,
      61,    66,    67,    71,    73,    74,    76,    80,    84,    86,
      88,    89,    91,    97,   101,   104,   105,   109,   117,   119,
     120,   121,   135,   138,   140,   141,   144,   146,   148,   151,
     159,   160,   168,   169,   175,   178,   179,   183,   191,   193,
     195,   196,   199,   201,   204,   205,   211,   212,   214,   220,
     223,   224,   228,   232,   234,   236,   238,   240,   242,   244,
     246,   251,   254,   256,   258,   260,   262,   266,   268,   270,
     272,   274,   276,   280,   285,   286,   288,   289,   291,   293,
     295,   297,   298,   300,   302,   304,   306,   308,   310,   312,
     314,   316,   318,   320,   322,   323,   325,   326,   330,   331,
     335,   338,   339,   341,   343,   345,   347,   349
};

/* MVL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const mvl_y_type_int16 mvl_y_rhs[] =
{
     131,     0,    -1,   132,   155,    -1,    -1,    62,   201,    74,
     133,   134,   150,   206,   201,   203,    -1,    62,     1,    -1,
      -1,   135,    -1,    69,     5,   136,   205,   203,    -1,    69,
       1,   203,    -1,   138,   137,    -1,    -1,   137,   203,   138,
      -1,    -1,    -1,    55,   139,   197,   140,    13,   195,   146,
     141,    -1,     1,    -1,    12,   142,    -1,   204,    -1,   143,
      -1,     5,   145,   144,   205,    -1,    -1,   144,    10,   145,
      -1,   204,    -1,    -1,   147,    -1,     5,   148,   205,    -1,
     204,   149,   204,    -1,   115,    -1,    58,    -1,    -1,   151,
      -1,    98,     5,   152,   205,   203,    -1,    98,     1,   203,
      -1,   154,   153,    -1,    -1,   153,   203,   154,    -1,   192,
     197,    13,   194,   195,   146,   196,    -1,     1,    -1,    -1,
      -1,    41,   156,   202,    91,   202,    74,   157,   158,    45,
     168,   206,   201,   203,    -1,    41,     1,    -1,   159,    -1,
      -1,   159,   160,    -1,   161,    -1,   162,    -1,     1,   203,
      -1,   111,   197,    13,   195,   146,   196,   203,    -1,    -1,
      53,    26,   163,   164,   206,    53,   203,    -1,    -1,    98,
       5,   165,   205,   203,    -1,   167,   166,    -1,    -1,   166,
     203,   167,    -1,   192,   197,    13,   193,   195,   146,   196,
      -1,     1,    -1,   169,    -1,    -1,   169,   170,    -1,   171,
      -1,     1,   203,    -1,    -1,   200,   202,   172,   173,   203,
      -1,    -1,   174,    -1,    98,    79,     5,   175,   205,    -1,
     177,   176,    -1,    -1,   176,    10,   177,    -1,   178,    18,
     179,    -1,   179,    -1,     1,    -1,   180,    -1,   183,    -1,
     202,    -1,   181,    -1,   182,    -1,   202,     5,   204,   205,
      -1,   202,   147,    -1,   184,    -1,   185,    -1,   186,    -1,
     187,    -1,   186,     3,   187,    -1,   188,    -1,   189,    -1,
     190,    -1,   191,    -1,   180,    -1,     5,   183,   205,    -1,
      56,     5,   183,   205,    -1,    -1,   111,    -1,    -1,    73,
      -1,    96,    -1,    72,    -1,    77,    -1,    -1,    73,    -1,
      96,    -1,    72,    -1,    77,    -1,    46,    -1,   127,    -1,
      81,    -1,    47,    -1,   128,    -1,    82,    -1,    84,    -1,
      85,    -1,    -1,    51,    -1,    -1,    26,   198,   199,    -1,
      -1,   199,    10,    26,    -1,    26,    13,    -1,    -1,   202,
      -1,    26,    -1,    14,    -1,    29,    -1,     6,    -1,    61,
      -1
};

/* MVL_Y_RLINE[MVL_Y_N] -- source line where rule number MVL_Y_N was defined.  */
static const mvl_y_type_uint16 mvl_y_rline[] =
{
       0,   205,   205,   217,   214,   241,   246,   248,   252,   257,
     263,   267,   269,   276,   278,   275,   283,   287,   292,   294,
     299,   305,   307,   313,   319,   324,   329,   336,   355,   357,
     361,   363,   367,   372,   379,   383,   385,   391,   523,   542,
     550,   541,   564,   570,   573,   575,   580,   581,   582,   588,
     675,   673,   705,   707,   715,   719,   721,   727,   843,   861,
     864,   866,   871,   872,   880,   878,   963,   965,   969,   977,
     981,   983,   989,  1044,  1109,  1128,  1151,  1156,  1162,  1164,
    1169,  1181,  1192,  1197,  1202,  1207,  1209,  1227,  1233,  1238,
    1240,  1242,  1345,  1352,  1360,  1362,  1367,  1368,  1370,  1372,
    1374,  1383,  1384,  1386,  1388,  1390,  1395,  1397,  1399,  1401,
    1403,  1405,  1407,  1409,  1415,  1416,  1422,  1421,  1429,  1431,
    1441,  1448,  1449,  1454,  1459,  1464,  1469,  1474
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
  "ALIAS", "ALL", "tok_AND", "ARCHITECTURE", "ARRAY", "ASSERT",
  "ATTRIBUTE", "_BEGIN", "BIT", "BIT_VECTOR", "BLOCK", "BODY", "BUFFER",
  "BUS", "CASE", "COMPONENT", "CONFIGURATION", "CONSTANT", "CONVERT",
  "DISCONNECT", "DOWNTO", "ELSE", "ELSIF", "_END", "ENTITY", "ERROR",
  "_EXIT", "_FILE", "FOR", "FUNCTION", "GENERATE", "GENERIC", "GUARDED",
  "IF", "_INOUT", "_IN", "IS", "_LABEL", "LIBRARY", "_LINKAGE", "LOOP",
  "MAP", "MOD", "MUX_BIT", "MUX_VECTOR", "_NAND", "NATURAL",
  "NATURAL_VECTOR", "NEW", "_NEXT", "_NOR", "_NOT", "tok_NULL", "OF", "ON",
  "OPEN", "_OR", "OTHERS", "_OUT", "_PACKAGE", "PORT", "PROCEDURE",
  "PROCESS", "RANGE", "RECORD", "REG_BIT", "REG_VECTOR", "REGISTER", "REM",
  "REPORT", "RETURN", "SELECT", "SEVERITY", "SIGNAL", "_STABLE", "SUBTYPE",
  "THEN", "TO", "TRANSPORT", "_TYPE", "UNITS", "UNTIL", "USE", "VARIABLE",
  "WAIT", "WARNING", "WHEN", "WHILE", "WITH", "WOR_BIT", "WOR_VECTOR",
  "_XOR", "$accept", "design_file", "entity_declaration", "@1",
  ".generic_clause.", "generic_clause", "formal_generic_list",
  "...formal_generic_element..", "formal_generic_element", "@2", "@3",
  "generic_VarAsgn__expression", "generic_expression", "generic_aggregate",
  "...generic_element_association..", "generic_element_association",
  ".constraint.", "constraint", "range", "direction", ".port_clause.",
  "port_clause", "formal_port_list", "...formal_port_element..",
  "formal_port_element", "architecture_body", "@4", "@5",
  "architecture_declarative_part", "..block_declaration_item..",
  "block_declaration_item", "signal_declaration", "component_declaration",
  "@6", ".PORT__local_port_list.", "local_port_list",
  "...local_port_element..", "local_port_element",
  "architecture_statement_part", "..concurrent_statement..",
  "concurrent_statement", "component_instantiation_statement", "@7",
  ".port_map_aspect.", "port_map_aspect", "association_list",
  "...association_element..", "association_element", "formal_port_name",
  "actual_port_name", "name", "indexed_name", "slice_name", "expression",
  "relation", "simple_expression", ".sign.term..add_op__term..", "term",
  "factor", "primary", "aggregate", "type_convertion", ".SIGNAL.",
  ".local_port_mode.", ".mode.", "type_mark", ".BUS.", "identifier_list",
  "@8", "...identifier..", "a_label", ".simple_name.", "simple_name",
  "Semicolon_ERR", "abstractlit", "RightParen_ERR", "END_ERR", 0
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384
};
# endif

/* MVL_Y_R1[MVL_Y_N] -- Symbol number of symbol that rule MVL_Y_N derives.  */
static const mvl_y_type_uint8 mvl_y_r1[] =
{
       0,   130,   131,   133,   132,   132,   134,   134,   135,   135,
     136,   137,   137,   139,   140,   138,   138,   141,   142,   142,
     143,   144,   144,   145,   146,   146,   147,   148,   149,   149,
     150,   150,   151,   151,   152,   153,   153,   154,   154,   156,
     157,   155,   155,   158,   159,   159,   160,   160,   160,   161,
     163,   162,   164,   164,   165,   166,   166,   167,   167,   168,
     169,   169,   170,   170,   172,   171,   173,   173,   174,   175,
     176,   176,   177,   177,   177,   178,   179,   180,   180,   180,
     181,   182,   183,   184,   185,   186,   186,   187,   188,   189,
     189,   189,   190,   191,   192,   192,   193,   193,   193,   193,
     193,   194,   194,   194,   194,   194,   195,   195,   195,   195,
     195,   195,   195,   195,   196,   196,   198,   197,   199,   199,
     200,   201,   201,   202,   203,   204,   205,   206
};

/* MVL_Y_R2[MVL_Y_N] -- Number of symbols composing right hand side of rule MVL_Y_N.  */
static const mvl_y_type_uint8 mvl_y_r2[] =
{
       0,     2,     2,     0,     9,     2,     0,     1,     5,     3,
       2,     0,     3,     0,     0,     8,     1,     2,     1,     1,
       4,     0,     3,     1,     0,     1,     3,     3,     1,     1,
       0,     1,     5,     3,     2,     0,     3,     7,     1,     0,
       0,    13,     2,     1,     0,     2,     1,     1,     2,     7,
       0,     7,     0,     5,     2,     0,     3,     7,     1,     1,
       0,     2,     1,     2,     0,     5,     0,     1,     5,     2,
       0,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     3,     4,     0,     1,     0,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     3,     0,     3,
       2,     0,     1,     1,     1,     1,     1,     1
};

/* MVL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when MVL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const mvl_y_type_uint8 mvl_y_defact[] =
{
       0,     0,     0,     0,     5,   123,     0,   122,     1,     0,
       2,     3,    42,     0,     6,     0,     0,    30,     7,     0,
       0,     0,     0,     0,    31,     0,   124,     9,    16,    13,
       0,    11,     0,     0,   127,   121,    40,     0,   126,     0,
      10,    33,    38,    95,     0,    35,     0,     0,    44,   116,
      14,     8,     0,     0,    34,     0,     4,     0,     0,   118,
       0,    12,    32,     0,   101,    60,     0,     0,     0,    45,
      46,    47,   117,     0,    36,   104,   102,   105,   103,     0,
       0,     0,    48,    50,     0,     0,   106,   109,   108,   111,
     112,   113,   107,   110,    24,    24,   121,     0,     0,    61,
      62,     0,    52,     0,   119,     0,     0,    25,   114,     0,
      63,   120,    64,     0,     0,    24,   125,     0,     0,     0,
      15,   115,    37,    41,    66,     0,     0,   114,    26,    29,
      28,     0,     0,    17,    19,    18,     0,     0,    67,    58,
       0,    55,     0,     0,     0,    27,    21,    23,     0,    65,
       0,    54,     0,    51,    49,     0,     0,    53,     0,    96,
       0,    20,    74,     0,     0,     0,    70,     0,    73,    91,
      78,    79,    76,    82,    83,    84,    85,    87,    88,    89,
      90,    77,    56,    99,    97,   100,    98,     0,    22,    91,
       0,     0,    68,    69,     0,     0,     0,    81,    24,    92,
       0,     0,    72,    86,     0,   114,    93,    71,    80,    57
};

/* MVL_Y_DEFGOTO[NTERM-NUM].  */
static const mvl_y_type_int16 mvl_y_defgoto[] =
{
      -1,     2,     3,    14,    17,    18,    30,    40,    31,    37,
      60,   120,   133,   134,   155,   146,   106,   107,   117,   131,
      23,    24,    44,    54,    45,    10,    13,    48,    57,    58,
      69,    70,    71,   102,   114,   140,   151,   141,    80,    81,
      99,   100,   124,   137,   138,   165,   193,   166,   167,   168,
     189,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,    46,   187,    79,    94,   122,    50,    59,    72,
     101,     6,   181,    27,   147,    39,    35
};

/* MVL_Y_PACT[STATE-NUM] -- Index in MVL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define MVL_Y_PACT_NINF -132
static const mvl_y_type_int16 mvl_y_pact[] =
{
     -21,    16,    49,    21,  -132,  -132,   -17,  -132,  -132,    37,
    -132,  -132,  -132,    41,    -1,   -16,    45,   -22,  -132,    41,
      72,    17,    50,    28,  -132,    18,  -132,  -132,  -132,  -132,
      85,  -132,    72,     4,  -132,    41,  -132,    67,  -132,    72,
      72,  -132,  -132,  -132,    85,  -132,    67,    72,  -132,  -132,
    -132,  -132,    17,    72,    72,    82,  -132,    52,     3,  -132,
      89,  -132,  -132,     4,   -19,  -132,    72,    79,    67,  -132,
    -132,  -132,    98,    -2,  -132,  -132,  -132,  -132,  -132,    -2,
      28,    26,  -132,  -132,    96,    92,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,   119,   119,    41,    72,   114,  -132,
    -132,    41,    30,    -2,  -132,   100,   118,  -132,    80,    72,
    -132,  -132,  -132,   127,    28,   119,  -132,    85,   -46,    42,
    -132,  -132,  -132,  -132,    35,     5,    81,    80,  -132,  -132,
    -132,   100,   100,  -132,  -132,  -132,    56,    72,  -132,  -132,
      85,  -132,    67,    72,    72,  -132,  -132,  -132,   131,  -132,
      72,    72,   124,  -132,  -132,    78,    38,  -132,     5,    27,
     100,  -132,  -132,    14,   133,    85,  -132,   121,  -132,   122,
    -132,  -132,  -132,  -132,  -132,   138,  -132,  -132,  -132,  -132,
    -132,   137,  -132,  -132,  -132,  -132,  -132,    -2,  -132,  -132,
      85,    14,  -132,   134,    14,    14,   100,  -132,   119,  -132,
      85,    38,  -132,  -132,     7,    80,  -132,  -132,  -132,  -132
};

/* MVL_Y_PGOTO[NTERM-NUM].  */
static const mvl_y_type_int16 mvl_y_pgoto[] =
{
    -132,  -132,  -132,  -132,  -132,  -132,  -132,  -132,    91,  -132,
    -132,  -132,  -132,  -132,  -132,   -13,   -81,   -36,  -132,  -132,
    -132,  -132,  -132,  -132,    86,  -132,  -132,  -132,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,   -10,  -132,  -132,
    -132,  -132,  -132,  -132,  -132,  -132,  -132,   -51,  -132,   -43,
    -127,  -132,  -132,  -131,  -132,  -132,  -132,   -42,  -132,  -132,
    -132,  -132,   -97,  -132,  -132,   -77,  -120,   -35,  -132,  -132,
    -132,   -15,     2,   -31,   -95,   -44,   -55
};

/* MVL_Y_TABLE[MVL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what MVL_Y_DEFACT says.
   If MVL_Y_TABLE_NINF, syntax error.  */
#define MVL_Y_TABLE_NINF -122
static const mvl_y_type_int16 mvl_y_table[] =
{
      53,    41,    95,     7,    66,    42,   139,   144,    51,    52,
     118,    55,   129,    38,   108,    15,    56,     4,    28,   163,
      47,    25,    62,    63,   135,    96,   115,    97,   142,   169,
     -94,   -94,   190,    84,   127,    82,   145,     7,    12,   162,
       5,     1,     5,   163,    86,    87,    20,   132,   -43,     8,
      21,    32,    98,    75,    76,    33,    67,    11,    77,   126,
     200,   142,     9,   -39,     5,   129,   110,     5,    16,   130,
     164,   116,    29,   128,   169,    19,    22,    78,   123,    88,
      89,   109,    90,    91,    38,   209,    26,   -59,   160,    34,
    -121,    38,    36,    49,   164,    64,   150,    65,     7,   183,
     184,   204,    73,   112,   185,    83,   149,   152,    85,   103,
     198,   161,   153,   154,    68,    43,    43,   205,   104,   157,
     158,   192,   130,   186,   105,    92,    93,   111,   113,   116,
     119,   121,   125,   136,   143,   148,   156,   159,   191,   194,
     -75,   195,   196,    61,   201,   197,   199,   188,   182,    74,
     207,   202,     0,   203,     0,     0,   206,     0,     0,     0,
     208
};

static const mvl_y_type_int16 mvl_y_check[] =
{
      44,    32,    79,     1,     1,     1,     1,   127,    39,    40,
     105,    46,    58,     6,    95,    13,    47,     1,     1,     5,
      35,    19,    53,    54,   119,    80,   103,     1,   125,   156,
      26,    26,   163,    68,   115,    66,   131,    35,     1,     1,
      26,    62,    26,     5,    46,    47,     1,     5,    45,     0,
       5,     1,    26,    72,    73,     5,    53,    74,    77,   114,
     191,   158,    41,    26,    26,    58,    97,    26,    69,   115,
      56,    29,    55,   117,   201,    91,    98,    96,   109,    81,
      82,    96,    84,    85,     6,   205,    14,    61,    10,    61,
      74,     6,    74,    26,    56,    13,   140,    45,    96,    72,
      73,   196,    13,   101,    77,    26,   137,   142,    10,    13,
     187,   155,   143,   144,   111,   111,   111,   198,    26,   150,
     151,   165,   115,    96,     5,   127,   128,    13,    98,    29,
      12,    51,     5,    98,    53,    79,     5,    13,     5,    18,
      18,     3,     5,    52,    10,   181,   190,   160,   158,    63,
     201,   194,    -1,   195,    -1,    -1,   200,    -1,    -1,    -1,
     204
};

/* MVL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const mvl_y_type_uint8 mvl_y_stos[] =
{
       0,    62,   131,   132,     1,    26,   201,   202,     0,    41,
     155,    74,     1,   156,   133,   202,    69,   134,   135,    91,
       1,     5,    98,   150,   151,   202,    14,   203,     1,    55,
     136,   138,     1,     5,    61,   206,    74,   139,     6,   205,
     137,   203,     1,   111,   152,   154,   192,   201,   157,    26,
     197,   203,   203,   205,   153,   197,   203,   158,   159,   198,
     140,   138,   203,   203,    13,    45,     1,    53,   111,   160,
     161,   162,   199,    13,   154,    72,    73,    77,    96,   194,
     168,   169,   203,    26,   197,    10,    46,    47,    81,    82,
      84,    85,   127,   128,   195,   195,   206,     1,    26,   170,
     171,   200,   163,    13,    26,     5,   146,   147,   146,   201,
     203,    13,   202,    98,   164,   195,    29,   148,   204,    12,
     141,    51,   196,   203,   172,     5,   206,   146,   205,    58,
     115,   149,     5,   142,   143,   204,    98,   173,   174,     1,
     165,   167,   192,    53,   196,   204,   145,   204,    79,   203,
     205,   166,   197,   203,   203,   144,     5,   203,   203,    13,
      10,   205,     1,     5,    56,   175,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   202,   167,    72,    73,    77,    96,   193,   145,   180,
     183,     5,   205,   176,    18,     3,     5,   147,   195,   205,
     183,    10,   179,   187,   204,   146,   205,   177,   205,   196
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
#line 207 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		freelomodel (MVL_CHDHED);
		mvl_fretab  (MVL_HSHTAB);
		}
    break;

  case 3:
#line 217 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		MVL_HSHTAB = mvl_initab ();
		MVL_SIMFLG = 0   ;	/* simple flag			*/
		MVL_NM1LST = NULL;	/* 1-st name liste		*/
		MVL_NM2LST = NULL;	/* 2-nd name liste		*/
		MVL_CHDPNT = NULL;	/* current child pointer	*/
		MVL_CHDHED = NULL;	/* childs list			*/

		MVL_MODNAM = (mvl_y_vsp[(2) - (3)].text);
		mvl_addtab (MVL_HSHTAB,MVL_MODNAM,MVL_MODNAM,MVL_MODDFN,
		            MVL_ROTDFN);
		}
    break;

  case 4:
#line 234 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		if (((mvl_y_vsp[(8) - (9)].text) != NULL) && ((mvl_y_vsp[(8) - (9)].text) != (mvl_y_vsp[(2) - (9)].text)))
		  mvl_error (1, (mvl_y_vsp[(8) - (9)].text));
		mvl_addtab (MVL_HSHTAB,MVL_MODNAM,MVL_MODNAM,MVL_CCNDFN,
		            MVL_CONCNT);
		MVL_CONCNT = 0;
		}
    break;

  case 5:
#line 243 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { mvl_error (2, NULL); }
    break;

  case 13:
#line 276 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { MVL_GENFLG = 1; }
    break;

  case 14:
#line 278 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { MVL_GENFLG = 0; }
    break;

  case 18:
#line 293 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = 0; }
    break;

  case 19:
#line 295 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = 0; }
    break;

  case 23:
#line 314 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = 0; }
    break;

  case 24:
#line 319 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		(mvl_y_val.name).LEFT  = -1;
		(mvl_y_val.name).RIGHT = -1;
		(mvl_y_val.name).ERR_FLG = 0;
		}
    break;

  case 25:
#line 325 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.name) = (mvl_y_vsp[(1) - (1)].name); }
    break;

  case 26:
#line 332 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.name) = (mvl_y_vsp[(2) - (3)].name); }
    break;

  case 27:
#line 339 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 28:
#line 356 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_UPTDFN; }
    break;

  case 29:
#line 358 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_DWTDFN; }
    break;

  case 33:
#line 375 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { mvl_error (3, NULL); }
    break;

  case 37:
#line 398 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		struct locon *locon_pnt;
		struct losig *losig_pnt;
		long          sig_width;
		long          sig_conf;
		char         *sig_name;
		struct chain *sig_list;
		long          local_err;

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

  case 38:
#line 524 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {

		/* ###----------------------------------------------### */
		/*   The following 3 lines reject tokens until the	*/
		/* sync. token ('Semicolon') is found			*/
		/* ###----------------------------------------------### */

		do
		  mvl_y_char = mvl_y_lex ();
		while ((mvl_y_char != Semicolon) && (mvl_y_char != 0));
		mvl_y_errok;

		mvl_error (6, NULL);
		}
    break;

  case 39:
#line 542 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		if (!strcmp (IN_LO, "vbe"))
		  MVL_Y_ACCEPT;
		}
    break;

  case 40:
#line 550 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		if ((mvl_y_vsp[(5) - (6)].text) != MVL_MODNAM)
		  mvl_error (1, (mvl_y_vsp[(5) - (6)].text));
		}
    break;

  case 41:
#line 560 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		if (((mvl_y_vsp[(12) - (13)].text) != NULL) && ((mvl_y_vsp[(12) - (13)].text) != (mvl_y_vsp[(3) - (13)].text)))
		  mvl_error (7, (mvl_y_vsp[(12) - (13)].text));
		}
    break;

  case 42:
#line 566 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { mvl_error (8, NULL); }
    break;

  case 48:
#line 584 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { mvl_error (9, NULL); }
    break;

  case 49:
#line 595 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 50:
#line 675 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 51:
#line 695 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		if (MVL_CHDPNT != NULL)
		  {
		  mvl_addtab (MVL_HSHTAB,(mvl_y_vsp[(2) - (7)].text),MVL_MODNAM,MVL_CCNDFN,MVL_CONCNT);
		  MVL_LOFPNT->MODELCHAIN = addchain (MVL_LOFPNT->MODELCHAIN,(mvl_y_vsp[(2) - (7)].text));
		  }
		MVL_CONCNT = 0;
		}
    break;

  case 57:
#line 734 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 58:
#line 844 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {

		/* ###----------------------------------------------### */
		/*   The following 3 lines reject tokens until the	*/
		/* sync. token ('Semicolon') is found			*/
		/* ###----------------------------------------------### */

		do
		  mvl_y_char = mvl_y_lex ();
		while ((mvl_y_char != Semicolon) && (mvl_y_char != 0));
		mvl_y_errok;

		mvl_error (6, NULL);
		}
    break;

  case 63:
#line 874 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { mvl_error (18, NULL); }
    break;

  case 64:
#line 880 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 65:
#line 924 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		struct loins *loins_pnt    ;
		struct locon *locon_pnt    ;
		struct chain *chain_pnt    ;
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
		      sprintf(tampon,"%s:%s.%s",MVL_CHDNAM,(mvl_y_vsp[(1) - (5)].text),locon_pnt->NAME);
		      chain_pnt->DATA = mvl_addlosig (MVL_LOFPNT,MVL_SIGIDX,
		                                      'I','0',tampon,-1,-1);
		      }
		    chain_pnt = chain_pnt->NEXT;
		    locon_pnt = locon_pnt->NEXT;
		    }

		  if (MVL_ERRFLG == 0)
		    loins_pnt = addloins (MVL_LOFPNT, (mvl_y_vsp[(1) - (5)].text)  , MVL_CHDPNT,
		                          MVL_NM1LST );
		  }

		freechain (MVL_NM1LST);
		MVL_NM1LST = NULL;
		MVL_SIMFLG = MVL_UKNDFN;
		}
    break;

  case 72:
#line 992 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 73:
#line 1045 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 74:
#line 1110 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {

		/* ###----------------------------------------------### */
		/*   The following 3 lines reject tokens until the	*/
		/* sync. token ('Comma') is found			*/
		/* ###----------------------------------------------### */

		do
		  mvl_y_char = mvl_y_lex ();
		while ((mvl_y_char != Comma) && (mvl_y_char != 0));
		mvl_y_errok;

		MVL_CONRNK++;
		mvl_error (31, NULL);
		}
    break;

  case 75:
#line 1129 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 76:
#line 1152 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 77:
#line 1157 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		(mvl_y_val.name).NAME  = (mvl_y_vsp[(1) - (1)].text);
		(mvl_y_val.name).LEFT  = -1;
		(mvl_y_val.name).RIGHT = -1;
		}
    break;

  case 78:
#line 1163 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.name) = (mvl_y_vsp[(1) - (1)].name); }
    break;

  case 79:
#line 1165 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.name) = (mvl_y_vsp[(1) - (1)].name); }
    break;

  case 80:
#line 1173 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		(mvl_y_val.name).NAME  = (mvl_y_vsp[(1) - (4)].text);
		(mvl_y_val.name).LEFT  = (mvl_y_vsp[(3) - (4)].valu);
		(mvl_y_val.name).RIGHT = (mvl_y_vsp[(3) - (4)].valu);
		}
    break;

  case 81:
#line 1183 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		(mvl_y_val.name).NAME  = (mvl_y_vsp[(1) - (2)].text);
		(mvl_y_val.name).LEFT  = (mvl_y_vsp[(2) - (2)].name).LEFT;
		(mvl_y_val.name).RIGHT = (mvl_y_vsp[(2) - (2)].name).RIGHT;
		}
    break;

  case 82:
#line 1193 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 83:
#line 1198 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 84:
#line 1203 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 85:
#line 1208 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 86:
#line 1212 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 87:
#line 1228 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 88:
#line 1234 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 89:
#line 1239 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 90:
#line 1241 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(1) - (1)].expr); }
    break;

  case 91:
#line 1243 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
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

  case 92:
#line 1348 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(2) - (3)].expr); }
    break;

  case 93:
#line 1356 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.expr) = (mvl_y_vsp[(3) - (4)].expr); }
    break;

  case 96:
#line 1367 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ICNDFN; }
    break;

  case 97:
#line 1369 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ICNDFN; }
    break;

  case 98:
#line 1371 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_OCNDFN; }
    break;

  case 99:
#line 1373 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BCNDFN; }
    break;

  case 100:
#line 1375 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		mvl_warning (2, NULL);
		(mvl_y_val.valu) = MVL_XCNDFN;
		}
    break;

  case 101:
#line 1383 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ICNDFN; }
    break;

  case 102:
#line 1385 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_ICNDFN; }
    break;

  case 103:
#line 1387 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_OCNDFN; }
    break;

  case 104:
#line 1389 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BCNDFN; }
    break;

  case 105:
#line 1391 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_XCNDFN; }
    break;

  case 106:
#line 1396 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BITDFN; }
    break;

  case 107:
#line 1398 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_WORDFN; }
    break;

  case 108:
#line 1400 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_MUXDFN; }
    break;

  case 109:
#line 1402 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BTVDFN; }
    break;

  case 110:
#line 1404 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_WRVDFN; }
    break;

  case 111:
#line 1406 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_MXVDFN; }
    break;

  case 112:
#line 1408 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = 0; }
    break;

  case 113:
#line 1410 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = 0; }
    break;

  case 114:
#line 1415 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_NORDFN; }
    break;

  case 115:
#line 1417 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = MVL_BUSDFN; }
    break;

  case 116:
#line 1422 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		if (MVL_GENFLG != 1)
		  MVL_NM1LST = addchain (MVL_NM1LST,(mvl_y_vsp[(1) - (1)].text));
		}
    break;

  case 119:
#line 1434 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    {
		if (MVL_GENFLG != 1)
		  MVL_NM1LST = addchain (MVL_NM1LST,(mvl_y_vsp[(3) - (3)].text));
		}
    break;

  case 120:
#line 1443 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = (mvl_y_vsp[(1) - (2)].text); }
    break;

  case 121:
#line 1448 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = NULL; }
    break;

  case 122:
#line 1450 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = (mvl_y_vsp[(1) - (1)].text); }
    break;

  case 123:
#line 1455 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.text) = (mvl_y_vsp[(1) - (1)].text); }
    break;

  case 124:
#line 1460 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { mvl_y_errok; }
    break;

  case 125:
#line 1465 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { (mvl_y_val.valu) = atol ((mvl_y_vsp[(1) - (1)].text)); }
    break;

  case 126:
#line 1470 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { mvl_y_errok; }
    break;

  case 127:
#line 1475 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
    { mvl_y_errok; }
    break;


/* Line 1267 of yacc.c.  */
#line 2997 "y.tab.c"
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


#line 1478 "../../../src/mbkvhdl/src/mvl_scomp_y.y"


