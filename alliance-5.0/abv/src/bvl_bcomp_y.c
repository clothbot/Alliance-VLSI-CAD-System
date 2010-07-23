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

/* All symbols defined below should begin with bvl_y_ or BVL_Y_, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define BVL_Y_BISON 1

/* Bison version.  */
#define BVL_Y_BISON_VERSION "2.3"

/* Skeleton name.  */
#define BVL_Y_SKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define BVL_Y_PURE 0

/* Using locations.  */
#define BVL_Y_LSP_NEEDED 0



/* Tokens.  */
#ifndef BVL_Y_TOKENTYPE
# define BVL_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum bvl_y_tokentype {
     tok_AND = 258,
     PRAGMA = 259,
     _BEGIN = 260,
     _END = 261,
     _EQSym = 262,
     _EXIT = 263,
     _FILE = 264,
     _GESym = 265,
     _GTSym = 266,
     _IN = 267,
     _INOUT = 268,
     _LABEL = 269,
     _LESym = 270,
     _LINKAGE = 271,
     _LTSym = 272,
     _NAND = 273,
     _NESym = 274,
     _NEXT = 275,
     _NOR = 276,
     _NOT = 277,
     tok_NULL = 278,
     _OR = 279,
     _OUT = 280,
     _XOR = 281,
     ABS = 282,
     ACCESS = 283,
     AFTER = 284,
     ALIAS = 285,
     ALL = 286,
     ARCHITECTURE = 287,
     ARRAY = 288,
     ASSERT = 289,
     ATTRIBUTE = 290,
     AbstractLit = 291,
     Ampersand = 292,
     Apostrophe = 293,
     Arrow = 294,
     BIT = 295,
     BIT_VECTOR = 296,
     _BLOCK = 297,
     BODY = 298,
     BUFFER = 299,
     BUS = 300,
     Bar = 301,
     BasedInt = 302,
     BasedReal = 303,
     BitStringLit = 304,
     Box = 305,
     CASE = 306,
     COMPONENT = 307,
     CONFIGURATION = 308,
     CONSTANT = 309,
     CharacterLit = 310,
     Colon = 311,
     Comma = 312,
     DISCONNECT = 313,
     DOWNTO = 314,
     DecimalInt = 315,
     DecimalReal = 316,
     Dot = 317,
     DoubleStar = 318,
     ELSE = 319,
     ELSIF = 320,
     ENTITY = 321,
     ERROR = 322,
     FOR = 323,
     FUNCTION = 324,
     GENERATE = 325,
     GENERIC = 326,
     GUARDED = 327,
     IF = 328,
     IS = 329,
     Identifier = 330,
     LIBRARY = 331,
     LOOP = 332,
     LeftParen = 333,
     MAP = 334,
     MOD = 335,
     MUX_BIT = 336,
     MUX_VECTOR = 337,
     Minus = 338,
     NATURAL = 339,
     NATURAL_VECTOR = 340,
     NEW = 341,
     OF = 342,
     ON = 343,
     OPEN = 344,
     OTHERS = 345,
     _PACKAGE = 346,
     PORT = 347,
     PROCEDURE = 348,
     PROCESS = 349,
     Plus = 350,
     _PS = 351,
     _NS = 352,
     _US = 353,
     _MS = 354,
     RANGE = 355,
     RECORD = 356,
     REG_BIT = 357,
     REG_VECTOR = 358,
     REGISTER = 359,
     REM = 360,
     REPORT = 361,
     RETURN = 362,
     RightParen = 363,
     SELECT = 364,
     SEVERITY = 365,
     SIGNAL = 366,
     _STABLE = 367,
     SUBTYPE = 368,
     Semicolon = 369,
     Slash = 370,
     Star = 371,
     StringLit = 372,
     THEN = 373,
     TO = 374,
     TRANSPORT = 375,
     _TYPE = 376,
     UNITS = 377,
     UNTIL = 378,
     USE = 379,
     VARIABLE = 380,
     VarAsgn = 381,
     WAIT = 382,
     WARNING = 383,
     WHEN = 384,
     WHILE = 385,
     WITH = 386,
     WOR_BIT = 387,
     WOR_VECTOR = 388
   };
#endif
/* Tokens.  */
#define tok_AND 258
#define PRAGMA 259
#define _BEGIN 260
#define _END 261
#define _EQSym 262
#define _EXIT 263
#define _FILE 264
#define _GESym 265
#define _GTSym 266
#define _IN 267
#define _INOUT 268
#define _LABEL 269
#define _LESym 270
#define _LINKAGE 271
#define _LTSym 272
#define _NAND 273
#define _NESym 274
#define _NEXT 275
#define _NOR 276
#define _NOT 277
#define tok_NULL 278
#define _OR 279
#define _OUT 280
#define _XOR 281
#define ABS 282
#define ACCESS 283
#define AFTER 284
#define ALIAS 285
#define ALL 286
#define ARCHITECTURE 287
#define ARRAY 288
#define ASSERT 289
#define ATTRIBUTE 290
#define AbstractLit 291
#define Ampersand 292
#define Apostrophe 293
#define Arrow 294
#define BIT 295
#define BIT_VECTOR 296
#define _BLOCK 297
#define BODY 298
#define BUFFER 299
#define BUS 300
#define Bar 301
#define BasedInt 302
#define BasedReal 303
#define BitStringLit 304
#define Box 305
#define CASE 306
#define COMPONENT 307
#define CONFIGURATION 308
#define CONSTANT 309
#define CharacterLit 310
#define Colon 311
#define Comma 312
#define DISCONNECT 313
#define DOWNTO 314
#define DecimalInt 315
#define DecimalReal 316
#define Dot 317
#define DoubleStar 318
#define ELSE 319
#define ELSIF 320
#define ENTITY 321
#define ERROR 322
#define FOR 323
#define FUNCTION 324
#define GENERATE 325
#define GENERIC 326
#define GUARDED 327
#define IF 328
#define IS 329
#define Identifier 330
#define LIBRARY 331
#define LOOP 332
#define LeftParen 333
#define MAP 334
#define MOD 335
#define MUX_BIT 336
#define MUX_VECTOR 337
#define Minus 338
#define NATURAL 339
#define NATURAL_VECTOR 340
#define NEW 341
#define OF 342
#define ON 343
#define OPEN 344
#define OTHERS 345
#define _PACKAGE 346
#define PORT 347
#define PROCEDURE 348
#define PROCESS 349
#define Plus 350
#define _PS 351
#define _NS 352
#define _US 353
#define _MS 354
#define RANGE 355
#define RECORD 356
#define REG_BIT 357
#define REG_VECTOR 358
#define REGISTER 359
#define REM 360
#define REPORT 361
#define RETURN 362
#define RightParen 363
#define SELECT 364
#define SEVERITY 365
#define SIGNAL 366
#define _STABLE 367
#define SUBTYPE 368
#define Semicolon 369
#define Slash 370
#define Star 371
#define StringLit 372
#define THEN 373
#define TO 374
#define TRANSPORT 375
#define _TYPE 376
#define UNITS 377
#define UNTIL 378
#define USE 379
#define VARIABLE 380
#define VarAsgn 381
#define WAIT 382
#define WARNING 383
#define WHEN 384
#define WHILE 385
#define WITH 386
#define WOR_BIT 387
#define WOR_VECTOR 388




/* Copy the first part of user declarations.  */
#line 38 "../../../src/abv/src/bvl_bcomp_y.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mut.h"
#include "aut.h"
#include "abl.h"
#include "bdd.h"
#include "abe.h"

#include "bvl_utype.h"
#include "bvl_util.h"
#include "bvl_byacc.h"
#include "bvl_bedef.h"



/* Enabling traces.  */
#ifndef BVL_Y_DEBUG
# define BVL_Y_DEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef BVL_Y_ERROR_VERBOSE
# undef BVL_Y_ERROR_VERBOSE
# define BVL_Y_ERROR_VERBOSE 1
#else
# define BVL_Y_ERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef BVL_Y_TOKEN_TABLE
# define BVL_Y_TOKEN_TABLE 0
#endif

#if ! defined BVL_Y_STYPE && ! defined BVL_Y_STYPE_IS_DECLARED
typedef union BVL_Y_STYPE
#line 55 "../../../src/abv/src/bvl_bcomp_y.y"
{
	long		 valu;
	char		*text;
        bvl_ablstr       list;
	bvl_name	 name;
        struct g_type dble;
	}
/* Line 187 of yacc.c.  */
#line 387 "y.tab.c"
	BVL_Y_STYPE;
# define bvl_y_stype BVL_Y_STYPE /* obsolescent; will be withdrawn */
# define BVL_Y_STYPE_IS_DECLARED 1
# define BVL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 400 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef BVL_Y_TYPE_UINT8
typedef BVL_Y_TYPE_UINT8 bvl_y_type_uint8;
#else
typedef unsigned char bvl_y_type_uint8;
#endif

#ifdef BVL_Y_TYPE_INT8
typedef BVL_Y_TYPE_INT8 bvl_y_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char bvl_y_type_int8;
#else
typedef short int bvl_y_type_int8;
#endif

#ifdef BVL_Y_TYPE_UINT16
typedef BVL_Y_TYPE_UINT16 bvl_y_type_uint16;
#else
typedef unsigned short int bvl_y_type_uint16;
#endif

#ifdef BVL_Y_TYPE_INT16
typedef BVL_Y_TYPE_INT16 bvl_y_type_int16;
#else
typedef short int bvl_y_type_int16;
#endif

#ifndef BVL_Y_SIZE_T
# ifdef __SIZE_TYPE__
#  define BVL_Y_SIZE_T __SIZE_TYPE__
# elif defined size_t
#  define BVL_Y_SIZE_T size_t
# elif ! defined BVL_Y_SIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define BVL_Y_SIZE_T size_t
# else
#  define BVL_Y_SIZE_T unsigned int
# endif
#endif

#define BVL_Y_SIZE_MAXIMUM ((BVL_Y_SIZE_T) -1)

#ifndef BVL_Y__
# if BVL_Y_ENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define BVL_Y__(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef BVL_Y__
#  define BVL_Y__(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define BVL_Y_USE(e) ((void) (e))
#else
# define BVL_Y_USE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define BVL_Y_ID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
BVL_Y_ID (int i)
#else
static int
BVL_Y_ID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined bvl_y_overflow || BVL_Y_ERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef BVL_Y_STACK_USE_ALLOCA
#  if BVL_Y_STACK_USE_ALLOCA
#   ifdef __GNUC__
#    define BVL_Y_STACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define BVL_Y_STACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define BVL_Y_STACK_ALLOC alloca
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

# ifdef BVL_Y_STACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define BVL_Y_STACK_FREE(Ptr) do { /* empty */; } while (BVL_Y_ID (0))
#  ifndef BVL_Y_STACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define BVL_Y_STACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define BVL_Y_STACK_ALLOC BVL_Y_MALLOC
#  define BVL_Y_STACK_FREE BVL_Y_FREE
#  ifndef BVL_Y_STACK_ALLOC_MAXIMUM
#   define BVL_Y_STACK_ALLOC_MAXIMUM BVL_Y_SIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined BVL_Y_MALLOC || defined malloc) \
	     && (defined BVL_Y_FREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef BVL_Y_MALLOC
#   define BVL_Y_MALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (BVL_Y_SIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef BVL_Y_FREE
#   define BVL_Y_FREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined bvl_y_overflow || BVL_Y_ERROR_VERBOSE */


#if (! defined bvl_y_overflow \
     && (! defined __cplusplus \
	 || (defined BVL_Y_STYPE_IS_TRIVIAL && BVL_Y_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union bvl_y_alloc
{
  bvl_y_type_int16 bvl_y_ss;
  BVL_Y_STYPE bvl_y_vs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define BVL_Y_STACK_GAP_MAXIMUM (sizeof (union bvl_y_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define BVL_Y_STACK_BYTES(N) \
     ((N) * (sizeof (bvl_y_type_int16) + sizeof (BVL_Y_STYPE)) \
      + BVL_Y_STACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef BVL_Y_COPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define BVL_Y_COPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define BVL_Y_COPY(To, From, Count)		\
      do					\
	{					\
	  BVL_Y_SIZE_T bvl_y_i;				\
	  for (bvl_y_i = 0; bvl_y_i < (Count); bvl_y_i++)	\
	    (To)[bvl_y_i] = (From)[bvl_y_i];		\
	}					\
      while (BVL_Y_ID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables BVL_Y_SIZE and BVL_Y_STACKSIZE give the old and new number of
   elements in the stack, and BVL_Y_PTR gives the new location of the
   stack.  Advance BVL_Y_PTR to a properly aligned location for the next
   stack.  */
# define BVL_Y_STACK_RELOCATE(Stack)					\
    do									\
      {									\
	BVL_Y_SIZE_T bvl_y_newbytes;						\
	BVL_Y_COPY (&bvl_y_ptr->Stack, Stack, bvl_y_size);				\
	Stack = &bvl_y_ptr->Stack;						\
	bvl_y_newbytes = bvl_y_stacksize * sizeof (*Stack) + BVL_Y_STACK_GAP_MAXIMUM; \
	bvl_y_ptr += bvl_y_newbytes / sizeof (*bvl_y_ptr);				\
      }									\
    while (BVL_Y_ID (0))

#endif

/* BVL_Y_FINAL -- State number of the termination state.  */
#define BVL_Y_FINAL  3
/* BVL_Y_LAST -- Last index in BVL_Y_TABLE.  */
#define BVL_Y_LAST   240

/* BVL_Y_NTOKENS -- Number of terminals.  */
#define BVL_Y_NTOKENS  134
/* BVL_Y_NNTS -- Number of nonterminals.  */
#define BVL_Y_NNTS  102
/* BVL_Y_NRULES -- Number of rules.  */
#define BVL_Y_NRULES  180
/* BVL_Y_NRULES -- Number of states.  */
#define BVL_Y_NSTATES  287

/* BVL_Y_TRANSLATE(BVL_Y_LEX) -- Bison symbol number corresponding to BVL_Y_LEX.  */
#define BVL_Y_UNDEFTOK  2
#define BVL_Y_MAXUTOK   388

#define BVL_Y_TRANSLATE(BVL_Y_X)						\
  ((unsigned int) (BVL_Y_X) <= BVL_Y_MAXUTOK ? bvl_y_translate[BVL_Y_X] : BVL_Y_UNDEFTOK)

/* BVL_Y_TRANSLATE[BVL_Y_LEX] -- Bison symbol number corresponding to BVL_Y_LEX.  */
static const bvl_y_type_uint8 bvl_y_translate[] =
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
     125,   126,   127,   128,   129,   130,   131,   132,   133
};

#if BVL_Y_DEBUG
/* BVL_Y_PRHS[BVL_Y_N] -- Index of the first RHS symbol of rule number BVL_Y_N in
   BVL_Y_RHS.  */
static const bvl_y_type_uint16 bvl_y_prhs[] =
{
       0,     0,     3,     4,     8,     9,    19,    22,    23,    25,
      31,    35,    38,    39,    43,    50,    52,    55,    57,    59,
      60,    66,    67,    71,    73,    74,    76,    80,    84,    86,
      88,    89,    91,    97,   101,   104,   105,   109,   117,   119,
     120,   122,   123,   125,   127,   129,   130,   143,   146,   148,
     149,   152,   154,   156,   158,   161,   163,   171,   174,   182,
     183,   185,   187,   189,   190,   193,   195,   197,   199,   202,
     203,   214,   216,   219,   221,   224,   226,   229,   231,   233,
     239,   246,   247,   253,   254,   265,   266,   270,   274,   276,
     279,   280,   283,   286,   287,   289,   291,   293,   295,   296,
     300,   301,   305,   307,   309,   311,   312,   315,   316,   319,
     321,   323,   325,   327,   329,   331,   333,   337,   341,   345,
     349,   351,   355,   359,   363,   367,   369,   373,   375,   377,
     381,   383,   385,   388,   390,   392,   394,   396,   398,   400,
     402,   404,   408,   410,   412,   414,   416,   421,   428,   432,
     434,   436,   438,   440,   442,   444,   446,   448,   450,   452,
     454,   455,   459,   460,   464,   465,   467,   468,   470,   474,
     475,   477,   478,   480,   482,   484,   487,   489,   491,   493,
     495
};

/* BVL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const bvl_y_type_int16 bvl_y_rhs[] =
{
     135,     0,    -1,    -1,   136,   137,   161,    -1,    -1,    66,
     228,    74,   138,   139,   154,   235,   227,   234,    -1,    66,
       1,    -1,    -1,   140,    -1,    71,    78,   141,   233,   234,
      -1,    71,     1,   234,    -1,   143,   142,    -1,    -1,   142,
     234,   143,    -1,    54,   220,    56,   219,   150,   144,    -1,
       1,    -1,   126,   145,    -1,   232,    -1,   146,    -1,    -1,
      78,   149,   147,   148,   233,    -1,    -1,   148,    57,   149,
      -1,   232,    -1,    -1,   151,    -1,    78,   152,   233,    -1,
     232,   153,   232,    -1,   119,    -1,    59,    -1,    -1,   155,
      -1,    92,    78,   156,   233,   234,    -1,    92,     1,   234,
      -1,   158,   157,    -1,    -1,   157,   234,   158,    -1,   159,
     220,    56,   160,   219,   150,   170,    -1,     1,    -1,    -1,
     111,    -1,    -1,    12,    -1,    25,    -1,    13,    -1,    -1,
      32,    75,    87,   228,    74,   162,   163,     5,   171,   235,
     227,   234,    -1,    32,     1,    -1,   164,    -1,    -1,   164,
     165,    -1,   169,    -1,   166,    -1,   167,    -1,     1,   234,
      -1,     4,    -1,    54,    75,    56,   219,   150,   168,   234,
      -1,   126,   212,    -1,   111,   220,    56,   219,   150,   170,
     234,    -1,    -1,   104,    -1,    45,    -1,   172,    -1,    -1,
     172,   173,    -1,   174,    -1,   177,    -1,   178,    -1,     1,
     234,    -1,    -1,   230,    42,   224,     5,   175,   176,   235,
      42,   223,   234,    -1,   172,    -1,   230,   179,    -1,   179,
      -1,   230,   181,    -1,   181,    -1,   230,   183,    -1,   183,
      -1,   180,    -1,    34,   200,   196,   197,   234,    -1,   229,
      15,   226,   182,   187,   234,    -1,    -1,   182,   187,   129,
     200,    64,    -1,    -1,   131,   200,   184,   109,   229,    15,
     226,   186,   185,   234,    -1,    -1,   185,    57,   186,    -1,
     187,   129,   192,    -1,   188,    -1,   200,   189,    -1,    -1,
      29,   190,    -1,   232,   191,    -1,    -1,    96,    -1,    97,
      -1,    98,    -1,    99,    -1,    -1,   195,   193,   194,    -1,
      -1,   194,    46,   195,    -1,   212,    -1,    90,    -1,   214,
      -1,    -1,   106,   198,    -1,    -1,   110,   199,    -1,   117,
      -1,    67,    -1,   128,    -1,   201,    -1,   202,    -1,   203,
      -1,   204,    -1,   205,     3,   205,    -1,   201,     3,   205,
      -1,   205,    24,   205,    -1,   202,    24,   205,    -1,   205,
      -1,   205,    18,   205,    -1,   205,    21,   205,    -1,   205,
      26,   205,    -1,   204,    26,   205,    -1,   206,    -1,   206,
     211,   206,    -1,   207,    -1,   208,    -1,   207,    37,   208,
      -1,   209,    -1,   210,    -1,    22,   210,    -1,   212,    -1,
     213,    -1,   214,    -1,     7,    -1,    19,    -1,    55,    -1,
     117,    -1,    49,    -1,    78,   200,   108,    -1,   228,    -1,
     215,    -1,   216,    -1,   217,    -1,   228,    78,   232,   233,
      -1,   228,    78,   232,   153,   232,   233,    -1,   228,    38,
     218,    -1,   112,    -1,    40,    -1,   132,    -1,    81,    -1,
      41,    -1,   133,    -1,    82,    -1,   102,    -1,   103,    -1,
      84,    -1,    85,    -1,    -1,    75,   221,   222,    -1,    -1,
     222,    57,    75,    -1,    -1,   231,    -1,    -1,   225,    -1,
      78,   200,   233,    -1,    -1,    72,    -1,    -1,   228,    -1,
      75,    -1,   214,    -1,   231,    56,    -1,    75,    -1,    36,
      -1,   108,    -1,   114,    -1,     6,    -1
};

/* BVL_Y_RLINE[BVL_Y_N] -- source line where rule number BVL_Y_N was defined.  */
static const bvl_y_type_uint16 bvl_y_rline[] =
{
       0,   257,   257,   257,   354,   351,   367,   374,   376,   384,
     389,   396,   400,   402,   408,   431,   447,   452,   460,   466,
     464,   477,   479,   492,   498,   503,   508,   515,   533,   535,
     539,   541,   545,   550,   557,   561,   563,   569,   607,   623,
     625,   630,   631,   633,   635,   645,   640,   659,   665,   668,
     670,   675,   676,   677,   678,   684,   698,   719,   725,   768,
     769,   771,   776,   779,   781,   786,   787,   788,   789,   799,
     795,   821,   825,   835,   839,   846,   847,   854,   858,   862,
     877,  1126,  1128,  1151,  1149,  1387,  1388,  1395,  1410,  1415,
    1424,  1425,  1431,  1438,  1439,  1441,  1443,  1445,  1451,  1450,
    1456,  1458,  1469,  1471,  1473,  1545,  1546,  1553,  1554,  1560,
    1565,  1567,  1572,  1574,  1576,  1578,  1583,  1587,  1594,  1598,
    1605,  1607,  1611,  1619,  1623,  1630,  1632,  1639,  1644,  1646,
    1654,  1659,  1661,  1667,  1673,  1675,  1770,  1772,  1777,  1779,
    1781,  1786,  1793,  1799,  1801,  1803,  1808,  1820,  1838,  1902,
    1906,  1908,  1910,  1912,  1914,  1916,  1918,  1920,  1922,  1924,
    1930,  1929,  1934,  1936,  1944,  1945,  1951,  1952,  1957,  1965,
    1966,  1972,  1973,  1978,  1983,  1988,  1997,  2002,  2007,  2012,
    2017
};
#endif

#if BVL_Y_DEBUG || BVL_Y_ERROR_VERBOSE || BVL_Y_TOKEN_TABLE
/* BVL_Y_TNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at BVL_Y_NTOKENS, nonterminals.  */
static const char *const bvl_y_tname[] =
{
  "$end", "error", "$undefined", "tok_AND", "PRAGMA", "_BEGIN", "_END",
  "_EQSym", "_EXIT", "_FILE", "_GESym", "_GTSym", "_IN", "_INOUT",
  "_LABEL", "_LESym", "_LINKAGE", "_LTSym", "_NAND", "_NESym", "_NEXT",
  "_NOR", "_NOT", "tok_NULL", "_OR", "_OUT", "_XOR", "ABS", "ACCESS",
  "AFTER", "ALIAS", "ALL", "ARCHITECTURE", "ARRAY", "ASSERT", "ATTRIBUTE",
  "AbstractLit", "Ampersand", "Apostrophe", "Arrow", "BIT", "BIT_VECTOR",
  "_BLOCK", "BODY", "BUFFER", "BUS", "Bar", "BasedInt", "BasedReal",
  "BitStringLit", "Box", "CASE", "COMPONENT", "CONFIGURATION", "CONSTANT",
  "CharacterLit", "Colon", "Comma", "DISCONNECT", "DOWNTO", "DecimalInt",
  "DecimalReal", "Dot", "DoubleStar", "ELSE", "ELSIF", "ENTITY", "ERROR",
  "FOR", "FUNCTION", "GENERATE", "GENERIC", "GUARDED", "IF", "IS",
  "Identifier", "LIBRARY", "LOOP", "LeftParen", "MAP", "MOD", "MUX_BIT",
  "MUX_VECTOR", "Minus", "NATURAL", "NATURAL_VECTOR", "NEW", "OF", "ON",
  "OPEN", "OTHERS", "_PACKAGE", "PORT", "PROCEDURE", "PROCESS", "Plus",
  "_PS", "_NS", "_US", "_MS", "RANGE", "RECORD", "REG_BIT", "REG_VECTOR",
  "REGISTER", "REM", "REPORT", "RETURN", "RightParen", "SELECT",
  "SEVERITY", "SIGNAL", "_STABLE", "SUBTYPE", "Semicolon", "Slash", "Star",
  "StringLit", "THEN", "TO", "TRANSPORT", "_TYPE", "UNITS", "UNTIL", "USE",
  "VARIABLE", "VarAsgn", "WAIT", "WARNING", "WHEN", "WHILE", "WITH",
  "WOR_BIT", "WOR_VECTOR", "$accept", "design_file", "@1",
  "entity_declaration", "@2", ".generic_clause.", "generic_clause",
  "formal_generic_list", "...formal_generic_element..",
  "formal_generic_element", "generic_VarAsgn__expression",
  "generic_expression", "generic_aggregate", "@3",
  "...generic_element_association..", "generic_element_association",
  ".constraint.", "constraint", "range", "direction", ".port_clause.",
  "port_clause", "formal_port_list", "...formal_port_element..",
  "formal_port_element", ".SIGNAL.", ".mode.", "architecture_body", "@4",
  "architecture_declarative_part", "..block_declarative_item..",
  "block_declarative_item", "pragma_declaration", "constant_declaration",
  "constant_VarAsgn__expression", "signal_declaration", ".signal_kind.",
  "architecture_statement_part", "..concurrent_statement..",
  "concurrent_statement", "block_statement", "@5", "set_of_statements",
  "concurrent_assertion_statement",
  "concurrent_signal_assignment_statement",
  "unlabeled_concurrent_assertion_statement", "assertion_statement",
  "unlabeled_conditional_signal_assignment",
  "..waveform__WHEN__condition__ELSE..",
  "unlabeled_selected_signal_assignment", "@6",
  "...waveform__WHEN__choices..", "waveform__WHEN__choices", "waveform",
  "waveform_element", ".AFTER__delay_expression.", "delay_expression",
  ".time_unit.", "choices", "@7", "..Bar__choice..", "choice",
  ".REPORT__expression.", ".SEVERITY__expression.", "report__message",
  "severity__message", "expression", "relation..AND__relation..",
  "relation..OR__relation..", "relation.NAND_NOR__relation.",
  "relation..XOR__relation..", "relation", "simple_expression",
  ".sign.term..add_op__term..", "term", "factor", "primary",
  "relational_operator", "literal", "aggregate", "name", "indexed_name",
  "slice_name", "attribute_name", "attribute_designator", "type_mark",
  "identifier_list", "@8", "...identifier..", ".label.",
  ".guard_expression.", "guard_expression", ".GUARDED.", ".simple_name.",
  "simple_name", "target", "a_label", "label", "abstractlit",
  "RightParen_ERR", "Semicolon_ERR", "END_ERR", 0
};
#endif

# ifdef BVL_Y_PRINT
/* BVL_Y_TOKNUM[BVL_Y_LEX-NUM] -- Internal token number corresponding to
   token BVL_Y_LEX-NUM.  */
static const bvl_y_type_uint16 bvl_y_toknum[] =
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
     385,   386,   387,   388
};
# endif

/* BVL_Y_R1[BVL_Y_N] -- Symbol number of symbol that rule BVL_Y_N derives.  */
static const bvl_y_type_uint8 bvl_y_r1[] =
{
       0,   134,   136,   135,   138,   137,   137,   139,   139,   140,
     140,   141,   142,   142,   143,   143,   144,   145,   145,   147,
     146,   148,   148,   149,   150,   150,   151,   152,   153,   153,
     154,   154,   155,   155,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   160,   160,   162,   161,   161,   163,   164,
     164,   165,   165,   165,   165,   166,   167,   168,   169,   170,
     170,   170,   171,   172,   172,   173,   173,   173,   173,   175,
     174,   176,   177,   177,   178,   178,   178,   178,   179,   180,
     181,   182,   182,   184,   183,   185,   185,   186,   187,   188,
     189,   189,   190,   191,   191,   191,   191,   191,   193,   192,
     194,   194,   195,   195,   195,   196,   196,   197,   197,   198,
     199,   199,   200,   200,   200,   200,   201,   201,   202,   202,
     203,   203,   203,   204,   204,   205,   205,   206,   207,   207,
     208,   209,   209,   210,   210,   210,   211,   211,   212,   212,
     212,   213,   214,   214,   214,   214,   215,   216,   217,   218,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     221,   220,   222,   222,   223,   223,   224,   224,   225,   226,
     226,   227,   227,   228,   229,   230,   231,   232,   233,   234,
     235
};

/* BVL_Y_R2[BVL_Y_N] -- Number of symbols composing right hand side of rule BVL_Y_N.  */
static const bvl_y_type_uint8 bvl_y_r2[] =
{
       0,     2,     0,     3,     0,     9,     2,     0,     1,     5,
       3,     2,     0,     3,     6,     1,     2,     1,     1,     0,
       5,     0,     3,     1,     0,     1,     3,     3,     1,     1,
       0,     1,     5,     3,     2,     0,     3,     7,     1,     0,
       1,     0,     1,     1,     1,     0,    12,     2,     1,     0,
       2,     1,     1,     1,     2,     1,     7,     2,     7,     0,
       1,     1,     1,     0,     2,     1,     1,     1,     2,     0,
      10,     1,     2,     1,     2,     1,     2,     1,     1,     5,
       6,     0,     5,     0,    10,     0,     3,     3,     1,     2,
       0,     2,     2,     0,     1,     1,     1,     1,     0,     3,
       0,     3,     1,     1,     1,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     1,     1,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     4,     6,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     0,     1,     0,     1,     3,     0,
       1,     0,     1,     1,     1,     2,     1,     1,     1,     1,
       1
};

/* BVL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when BVL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const bvl_y_type_uint8 bvl_y_defact[] =
{
       2,     0,     0,     1,     0,     0,     6,   173,     0,     0,
       3,     4,    47,     0,     7,     0,     0,    30,     8,     0,
       0,     0,     0,     0,    31,    45,   179,    10,    15,     0,
       0,    12,     0,     0,   180,   171,    49,   160,     0,   178,
       0,    11,    33,    38,    40,     0,    35,     0,     0,   172,
       0,     0,   162,     0,     9,     0,     0,    34,     0,     5,
      63,     0,    55,     0,     0,    50,    52,    53,    51,   161,
     150,   153,   152,   155,   158,   159,   156,   157,   151,   154,
      24,    13,    32,     0,    41,     0,     0,    54,     0,     0,
       0,     0,     0,    25,    36,    42,    44,    43,     0,   171,
       0,     0,   173,     0,    64,    65,    66,    67,    73,    78,
      75,    77,   174,   143,   144,   145,   142,     0,     0,     0,
       0,     0,   163,   177,     0,     0,     0,    14,    24,     0,
      68,     0,   140,   138,     0,   139,   105,   112,   113,   114,
     115,   120,   125,   127,   128,   130,   131,   133,   134,   135,
      83,     0,     0,   169,   166,    72,    74,    76,   175,    24,
      24,    26,    29,    28,     0,     0,    16,    18,    17,    59,
      46,   132,     0,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,   136,   137,     0,     0,     0,   149,   148,
       0,   170,    81,     0,     0,   167,     0,    59,    27,    19,
      23,    61,    60,    37,   141,   109,   106,     0,     0,   117,
     119,   124,   116,   121,   122,   118,   123,   126,   129,     0,
       0,   146,     0,     0,    69,     0,     0,     0,    21,   110,
     111,   108,    79,     0,     0,     0,    88,    90,   168,    63,
      57,    56,    58,     0,   169,   147,     0,    80,     0,    89,
       0,     0,     0,    20,     0,     0,    91,    93,     0,    22,
      85,     0,    82,    94,    95,    96,    97,    92,   164,     0,
       0,   176,     0,   165,     0,    84,   103,    87,    98,   102,
     104,    70,    86,   100,    99,     0,   101
};

/* BVL_Y_DEFGOTO[NTERM-NUM].  */
static const bvl_y_type_int16 bvl_y_defgoto[] =
{
      -1,     1,     2,     5,    14,    17,    18,    30,    41,    31,
     127,   166,   167,   228,   243,   199,    92,    93,   124,   164,
      23,    24,    45,    57,    46,    47,    98,    10,    36,    50,
      51,    65,    66,    67,   226,    68,   203,    85,    86,   104,
     105,   239,   251,   106,   107,   108,   109,   110,   222,   111,
     187,   269,   260,   261,   236,   249,   256,   267,   277,   283,
     284,   278,   174,   208,   206,   231,   237,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   185,   147,   148,
     149,   113,   114,   115,   189,    80,    38,    52,    69,   272,
     194,   195,   192,    48,   116,   117,   118,   119,   200,    40,
      27,    35
};

/* BVL_Y_PACT[STATE-NUM] -- Index in BVL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define BVL_Y_PACT_NINF -177
static const bvl_y_type_int16 bvl_y_pact[] =
{
    -177,    53,    -7,  -177,    25,    28,  -177,  -177,   -17,    26,
    -177,  -177,  -177,   -25,    -8,    20,     5,   -26,  -177,    31,
     -41,    36,    21,   102,  -177,  -177,  -177,  -177,  -177,    39,
       8,  -177,   -41,     4,  -177,    20,  -177,  -177,    63,  -177,
     -41,   -41,  -177,  -177,  -177,     8,  -177,    39,   -41,  -177,
     116,    16,  -177,   -10,  -177,    36,   -41,   -41,    75,  -177,
    -177,   -41,  -177,    61,    39,  -177,  -177,  -177,  -177,    82,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
      64,  -177,  -177,     4,   112,   102,    12,  -177,    89,    90,
      72,   113,    34,  -177,  -177,  -177,  -177,  -177,   -10,    20,
     -41,   -11,    96,   -11,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,     2,   139,   -27,   106,
     -10,   -10,  -177,  -177,     8,    -9,     6,  -177,    64,   -41,
    -177,     3,  -177,  -177,   -11,  -177,    57,   161,   142,  -177,
     141,   114,   134,   132,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,    58,   113,    99,    94,  -177,  -177,  -177,  -177,    64,
      64,  -177,  -177,  -177,   113,   113,  -177,  -177,  -177,   -13,
    -177,  -177,    65,    62,    67,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,   -11,  -177,  -177,   -11,   -11,    66,  -177,  -177,
     -23,  -177,  -177,   -11,   169,  -177,    52,   -13,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,   -39,   -41,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,    20,
     113,  -177,   -11,     8,  -177,    -4,   -41,   -41,  -177,  -177,
    -177,  -177,  -177,   165,     8,    -3,  -177,   153,  -177,  -177,
    -177,  -177,  -177,    -1,    99,  -177,   -11,  -177,   113,  -177,
      13,   102,   113,  -177,   -11,   119,  -177,    60,   144,  -177,
    -177,    55,  -177,  -177,  -177,  -177,  -177,  -177,   115,    -2,
     -14,  -177,   -41,  -177,   -11,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,   143,   -14,  -177
};

/* BVL_Y_PGOTO[NTERM-NUM].  */
static const bvl_y_type_int16 bvl_y_pgoto[] =
{
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,   133,
    -177,  -177,  -177,  -177,  -177,   -65,   -30,  -177,  -177,     1,
    -177,  -177,  -177,  -177,   110,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,     0,  -177,   -43,  -177,
    -177,  -177,  -177,  -177,  -177,    80,  -177,    81,  -177,    84,
    -177,  -177,   -62,    -6,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,   -72,  -177,  -177,  -177,  -177,   -91,  -177,  -177,  -177,
    -177,    29,    32,  -177,    33,  -177,    83,  -177,  -176,  -177,
     -85,  -177,  -177,  -177,  -177,    30,    22,  -177,  -177,  -177,
    -177,  -177,   -29,   121,    19,     7,  -177,   -50,   -87,   -42,
     -32,   -83
};

/* BVL_Y_TABLE[BVL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what BVL_Y_DEFACT says.
   If BVL_Y_TABLE_NINF, syntax error.  */
#define BVL_Y_TABLE_NINF -177
static const bvl_y_type_int16 bvl_y_table[] =
{
      42,   112,    99,    56,   125,    43,    20,   101,    54,    55,
     136,   131,   150,   100,   100,   154,    59,    61,   -62,   -71,
      62,   -48,    32,     8,    82,    83,     6,    12,   229,    87,
      70,    71,   201,   112,    19,   132,   162,    28,   132,   168,
     151,   133,   123,   172,   133,   132,   101,   101,     7,   240,
     162,   133,   132,     3,    49,   274,   252,    11,   133,     4,
       9,     7,    15,    16,     7,   190,    22,   134,   130,    58,
      63,    72,    73,    26,    74,    75,   276,   198,     7,   -39,
     152,   134,   161,    21,   165,    39,    89,   102,   102,   230,
      29,   202,    76,    77,   279,     7,   163,   170,   169,    33,
       7,    13,   223,   135,   103,    25,   135,    39,    34,   279,
     163,    26,    26,   135,    37,    44,    39,   178,    49,    53,
     135,    60,    78,    79,    95,    96,   246,    64,   128,   196,
     197,    84,   179,   234,   112,   180,    88,    97,   181,    90,
     182,   183,    91,   103,   103,   120,   121,   122,   221,   123,
     159,   160,  -176,   184,   153,   255,   263,   264,   265,   266,
     126,   257,   158,   173,   175,   112,   176,   177,   258,   186,
     188,   191,   193,   204,   224,   219,   232,   207,   225,   205,
     244,   238,   248,   262,   270,   280,   268,   259,    81,   285,
     271,   220,   245,    94,   241,   242,   250,   227,   155,   156,
     280,   253,   157,   247,   209,   210,   211,   212,   213,   214,
     215,   216,   282,   286,   171,   254,   235,   217,   273,   218,
     129,     0,     0,     0,     0,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   275,     0,     0,
     281
};

static const bvl_y_type_int16 bvl_y_check[] =
{
      32,    86,    85,    45,    91,     1,     1,    34,    40,    41,
     101,    22,   103,     1,     1,    42,    48,     1,     6,     6,
       4,     5,     1,     4,    56,    57,     1,     1,    67,    61,
      40,    41,    45,   118,    15,    49,    59,     1,    49,   126,
      38,    55,    36,   134,    55,    49,    34,    34,    75,   225,
      59,    55,    49,     0,    35,    57,    57,    74,    55,    66,
      32,    75,    87,    71,    75,   152,    92,    78,   100,    47,
      54,    81,    82,   114,    84,    85,    90,   164,    75,    75,
      78,    78,   124,    78,    78,   108,    64,    75,    75,   128,
      54,   104,   102,   103,   270,    75,   119,   129,   128,    78,
      75,    75,   193,   117,   131,    74,   117,   108,     6,   285,
     119,   114,   114,   117,    75,   111,   108,     3,    99,    56,
     117,     5,   132,   133,    12,    13,   129,   111,    98,   159,
     160,    56,    18,   220,   219,    21,    75,    25,    24,    57,
      26,     7,    78,   131,   131,    56,    56,    75,   190,    36,
     120,   121,    56,    19,    15,   246,    96,    97,    98,    99,
     126,   248,    56,   106,     3,   250,    24,    26,   251,    37,
     112,    72,    78,   108,     5,   109,   208,   110,   126,   117,
      15,   223,    29,    64,   129,   270,    42,   252,    55,    46,
      75,   190,   234,    83,   226,   227,   239,   197,   118,   118,
     285,   243,   118,   235,   175,   176,   177,   178,   179,   180,
     181,   182,   274,   285,   131,   244,   222,   185,   268,   186,
      99,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,
     272
};

/* BVL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const bvl_y_type_uint8 bvl_y_stos[] =
{
       0,   135,   136,     0,    66,   137,     1,    75,   228,    32,
     161,    74,     1,    75,   138,    87,    71,   139,   140,   228,
       1,    78,    92,   154,   155,    74,   114,   234,     1,    54,
     141,   143,     1,    78,     6,   235,   162,    75,   220,   108,
     233,   142,   234,     1,   111,   156,   158,   159,   227,   228,
     163,   164,   221,    56,   234,   234,   233,   157,   220,   234,
       5,     1,     4,    54,   111,   165,   166,   167,   169,   222,
      40,    41,    81,    82,    84,    85,   102,   103,   132,   133,
     219,   143,   234,   234,    56,   171,   172,   234,    75,   220,
      57,    78,   150,   151,   158,    12,    13,    25,   160,   235,
       1,    34,    75,   131,   173,   174,   177,   178,   179,   180,
     181,   183,   214,   215,   216,   217,   228,   229,   230,   231,
      56,    56,    75,    36,   152,   232,   126,   144,   219,   227,
     234,    22,    49,    55,    78,   117,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   212,   213,   214,
     200,    38,    78,    15,    42,   179,   181,   183,    56,   219,
     219,   233,    59,   119,   153,    78,   145,   146,   232,   150,
     234,   210,   200,   106,   196,     3,    24,    26,     3,    18,
      21,    24,    26,     7,    19,   211,    37,   184,   112,   218,
     232,    72,   226,    78,   224,   225,   150,   150,   232,   149,
     232,    45,   104,   170,   108,   117,   198,   110,   197,   205,
     205,   205,   205,   205,   205,   205,   205,   206,   208,   109,
     153,   233,   182,   200,     5,   126,   168,   170,   147,    67,
     128,   199,   234,   229,   232,   187,   188,   200,   233,   175,
     212,   234,   234,   148,    15,   233,   129,   234,    29,   189,
     172,   176,    57,   233,   226,   200,   190,   232,   235,   149,
     186,   187,    64,    96,    97,    98,    99,   191,    42,   185,
     129,    75,   223,   231,    57,   234,    90,   192,   195,   212,
     214,   234,   186,   193,   194,    46,   195
};

#define bvl_y_errok		(bvl_y_errstatus = 0)
#define bvl_y_clearin	(bvl_y_char = BVL_Y_EMPTY)
#define BVL_Y_EMPTY		(-2)
#define BVL_Y_EOF		0

#define BVL_Y_ACCEPT	goto bvl_y_acceptlab
#define BVL_Y_ABORT		goto bvl_y_abortlab
#define BVL_Y_ERROR		goto bvl_y_errorlab


/* Like BVL_Y_ERROR except do call bvl_y_error.  This remains here temporarily
   to ease the transition to the new meaning of BVL_Y_ERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define BVL_Y_FAIL		goto bvl_y_errlab

#define BVL_Y_RECOVERING()  (!!bvl_y_errstatus)

#define BVL_Y_BACKUP(Token, Value)					\
do								\
  if (bvl_y_char == BVL_Y_EMPTY && bvl_y_len == 1)				\
    {								\
      bvl_y_char = (Token);						\
      bvl_y_lval = (Value);						\
      bvl_y_token = BVL_Y_TRANSLATE (bvl_y_char);				\
      BVL_Y_POPSTACK (1);						\
      goto bvl_y_backup;						\
    }								\
  else								\
    {								\
      bvl_y_error (BVL_Y__("syntax error: cannot back up")); \
      BVL_Y_ERROR;							\
    }								\
while (BVL_Y_ID (0))


#define BVL_Y_TERROR	1
#define BVL_Y_ERRCODE	256


/* BVL_Y_LLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define BVL_Y_RHSLOC(Rhs, K) ((Rhs)[K])
#ifndef BVL_Y_LLOC_DEFAULT
# define BVL_Y_LLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (BVL_Y_ID (N))                                                    \
	{								\
	  (Current).first_line   = BVL_Y_RHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = BVL_Y_RHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = BVL_Y_RHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = BVL_Y_RHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    BVL_Y_RHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    BVL_Y_RHSLOC (Rhs, 0).last_column;				\
	}								\
    while (BVL_Y_ID (0))
#endif


/* BVL_Y__LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef BVL_Y__LOCATION_PRINT
# if BVL_Y_LTYPE_IS_TRIVIAL
#  define BVL_Y__LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define BVL_Y__LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* BVL_Y_LEX -- calling `bvl_y_lex' with the right arguments.  */

#ifdef BVL_Y_LEX_PARAM
# define BVL_Y_LEX bvl_y_lex (BVL_Y_LEX_PARAM)
#else
# define BVL_Y_LEX bvl_y_lex ()
#endif

/* Enable debugging if requested.  */
#if BVL_Y_DEBUG

# ifndef BVL_Y_FPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define BVL_Y_FPRINTF fprintf
# endif

# define BVL_Y_DPRINTF(Args)			\
do {						\
  if (bvl_y_debug)					\
    BVL_Y_FPRINTF Args;				\
} while (BVL_Y_ID (0))

# define BVL_Y__SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (bvl_y_debug)								  \
    {									  \
      BVL_Y_FPRINTF (stderr, "%s ", Title);					  \
      bvl_y__symbol_print (stderr,						  \
		  Type, Value); \
      BVL_Y_FPRINTF (stderr, "\n");						  \
    }									  \
} while (BVL_Y_ID (0))


/*--------------------------------.
| Print this symbol on BVL_Y_OUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y__symbol_value_print (FILE *bvl_y_output, int bvl_y_type, BVL_Y_STYPE const * const bvl_y_valuep)
#else
static void
bvl_y__symbol_value_print (bvl_y_output, bvl_y_type, bvl_y_valuep)
    FILE *bvl_y_output;
    int bvl_y_type;
    BVL_Y_STYPE const * const bvl_y_valuep;
#endif
{
  if (!bvl_y_valuep)
    return;
# ifdef BVL_Y_PRINT
  if (bvl_y_type < BVL_Y_NTOKENS)
    BVL_Y_PRINT (bvl_y_output, bvl_y_toknum[bvl_y_type], *bvl_y_valuep);
# else
  BVL_Y_USE (bvl_y_output);
# endif
  switch (bvl_y_type)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on BVL_Y_OUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y__symbol_print (FILE *bvl_y_output, int bvl_y_type, BVL_Y_STYPE const * const bvl_y_valuep)
#else
static void
bvl_y__symbol_print (bvl_y_output, bvl_y_type, bvl_y_valuep)
    FILE *bvl_y_output;
    int bvl_y_type;
    BVL_Y_STYPE const * const bvl_y_valuep;
#endif
{
  if (bvl_y_type < BVL_Y_NTOKENS)
    BVL_Y_FPRINTF (bvl_y_output, "token %s (", bvl_y_tname[bvl_y_type]);
  else
    BVL_Y_FPRINTF (bvl_y_output, "nterm %s (", bvl_y_tname[bvl_y_type]);

  bvl_y__symbol_value_print (bvl_y_output, bvl_y_type, bvl_y_valuep);
  BVL_Y_FPRINTF (bvl_y_output, ")");
}

/*------------------------------------------------------------------.
| bvl_y__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y__stack_print (bvl_y_type_int16 *bottom, bvl_y_type_int16 *top)
#else
static void
bvl_y__stack_print (bottom, top)
    bvl_y_type_int16 *bottom;
    bvl_y_type_int16 *top;
#endif
{
  BVL_Y_FPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    BVL_Y_FPRINTF (stderr, " %d", *bottom);
  BVL_Y_FPRINTF (stderr, "\n");
}

# define BVL_Y__STACK_PRINT(Bottom, Top)				\
do {								\
  if (bvl_y_debug)							\
    bvl_y__stack_print ((Bottom), (Top));				\
} while (BVL_Y_ID (0))


/*------------------------------------------------.
| Report that the BVL_Y_RULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y__reduce_print (BVL_Y_STYPE *bvl_y_vsp, int bvl_y_rule)
#else
static void
bvl_y__reduce_print (bvl_y_vsp, bvl_y_rule)
    BVL_Y_STYPE *bvl_y_vsp;
    int bvl_y_rule;
#endif
{
  int bvl_y_nrhs = bvl_y_r2[bvl_y_rule];
  int bvl_y_i;
  unsigned long int bvl_y_lno = bvl_y_rline[bvl_y_rule];
  BVL_Y_FPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     bvl_y_rule - 1, bvl_y_lno);
  /* The symbols being reduced.  */
  for (bvl_y_i = 0; bvl_y_i < bvl_y_nrhs; bvl_y_i++)
    {
      fprintf (stderr, "   $%d = ", bvl_y_i + 1);
      bvl_y__symbol_print (stderr, bvl_y_rhs[bvl_y_prhs[bvl_y_rule] + bvl_y_i],
		       &(bvl_y_vsp[(bvl_y_i + 1) - (bvl_y_nrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define BVL_Y__REDUCE_PRINT(Rule)		\
do {					\
  if (bvl_y_debug)				\
    bvl_y__reduce_print (bvl_y_vsp, Rule); \
} while (BVL_Y_ID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int bvl_y_debug;
#else /* !BVL_Y_DEBUG */
# define BVL_Y_DPRINTF(Args)
# define BVL_Y__SYMBOL_PRINT(Title, Type, Value, Location)
# define BVL_Y__STACK_PRINT(Bottom, Top)
# define BVL_Y__REDUCE_PRINT(Rule)
#endif /* !BVL_Y_DEBUG */


/* BVL_Y_INITDEPTH -- initial size of the parser's stacks.  */
#ifndef	BVL_Y_INITDEPTH
# define BVL_Y_INITDEPTH 200
#endif

/* BVL_Y_MAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   BVL_Y_STACK_ALLOC_MAXIMUM < BVL_Y_STACK_BYTES (BVL_Y_MAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef BVL_Y_MAXDEPTH
# define BVL_Y_MAXDEPTH 10000
#endif



#if BVL_Y_ERROR_VERBOSE

# ifndef bvl_y_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define bvl_y_strlen strlen
#  else
/* Return the length of BVL_Y_STR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static BVL_Y_SIZE_T
bvl_y_strlen (const char *bvl_y_str)
#else
static BVL_Y_SIZE_T
bvl_y_strlen (bvl_y_str)
    const char *bvl_y_str;
#endif
{
  BVL_Y_SIZE_T bvl_y_len;
  for (bvl_y_len = 0; bvl_y_str[bvl_y_len]; bvl_y_len++)
    continue;
  return bvl_y_len;
}
#  endif
# endif

# ifndef bvl_y_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define bvl_y_stpcpy stpcpy
#  else
/* Copy BVL_Y_SRC to BVL_Y_DEST, returning the address of the terminating '\0' in
   BVL_Y_DEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
bvl_y_stpcpy (char *bvl_y_dest, const char *bvl_y_src)
#else
static char *
bvl_y_stpcpy (bvl_y_dest, bvl_y_src)
    char *bvl_y_dest;
    const char *bvl_y_src;
#endif
{
  char *bvl_y_d = bvl_y_dest;
  const char *bvl_y_s = bvl_y_src;

  while ((*bvl_y_d++ = *bvl_y_s++) != '\0')
    continue;

  return bvl_y_d - 1;
}
#  endif
# endif

# ifndef bvl_y_tnamerr
/* Copy to BVL_Y_RES the contents of BVL_Y_STR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for bvl_y_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  BVL_Y_STR is taken from bvl_y_tname.  If BVL_Y_RES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static BVL_Y_SIZE_T
bvl_y_tnamerr (char *bvl_y_res, const char *bvl_y_str)
{
  if (*bvl_y_str == '"')
    {
      BVL_Y_SIZE_T bvl_y_n = 0;
      char const *bvl_y_p = bvl_y_str;

      for (;;)
	switch (*++bvl_y_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++bvl_y_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (bvl_y_res)
	      bvl_y_res[bvl_y_n] = *bvl_y_p;
	    bvl_y_n++;
	    break;

	  case '"':
	    if (bvl_y_res)
	      bvl_y_res[bvl_y_n] = '\0';
	    return bvl_y_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! bvl_y_res)
    return bvl_y_strlen (bvl_y_str);

  return bvl_y_stpcpy (bvl_y_res, bvl_y_str) - bvl_y_res;
}
# endif

/* Copy into BVL_Y_RESULT an error message about the unexpected token
   BVL_Y_CHAR while in state BVL_Y_STATE.  Return the number of bytes copied,
   including the terminating null byte.  If BVL_Y_RESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return BVL_Y_SIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static BVL_Y_SIZE_T
bvl_y_syntax_error (char *bvl_y_result, int bvl_y_state, int bvl_y_char)
{
  int bvl_y_n = bvl_y_pact[bvl_y_state];

  if (! (BVL_Y_PACT_NINF < bvl_y_n && bvl_y_n <= BVL_Y_LAST))
    return 0;
  else
    {
      int bvl_y_type = BVL_Y_TRANSLATE (bvl_y_char);
      BVL_Y_SIZE_T bvl_y_size0 = bvl_y_tnamerr (0, bvl_y_tname[bvl_y_type]);
      BVL_Y_SIZE_T bvl_y_size = bvl_y_size0;
      BVL_Y_SIZE_T bvl_y_size1;
      int bvl_y_size_overflow = 0;
      enum { BVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *bvl_y_arg[BVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM];
      int bvl_y_x;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      BVL_Y__("syntax error, unexpected %s");
      BVL_Y__("syntax error, unexpected %s, expecting %s");
      BVL_Y__("syntax error, unexpected %s, expecting %s or %s");
      BVL_Y__("syntax error, unexpected %s, expecting %s or %s or %s");
      BVL_Y__("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *bvl_y_fmt;
      char const *bvl_y_f;
      static char const bvl_y_unexpected[] = "syntax error, unexpected %s";
      static char const bvl_y_expecting[] = ", expecting %s";
      static char const bvl_y_or[] = " or %s";
      char bvl_y_format[sizeof bvl_y_unexpected
		    + sizeof bvl_y_expecting - 1
		    + ((BVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof bvl_y_or - 1))];
      char const *bvl_y_prefix = bvl_y_expecting;

      /* Start BVL_Y_X at -BVL_Y_N if negative to avoid negative indexes in
	 BVL_Y_CHECK.  */
      int bvl_y_xbegin = bvl_y_n < 0 ? -bvl_y_n : 0;

      /* Stay within bounds of both bvl_y_check and bvl_y_tname.  */
      int bvl_y_checklim = BVL_Y_LAST - bvl_y_n + 1;
      int bvl_y_xend = bvl_y_checklim < BVL_Y_NTOKENS ? bvl_y_checklim : BVL_Y_NTOKENS;
      int bvl_y_count = 1;

      bvl_y_arg[0] = bvl_y_tname[bvl_y_type];
      bvl_y_fmt = bvl_y_stpcpy (bvl_y_format, bvl_y_unexpected);

      for (bvl_y_x = bvl_y_xbegin; bvl_y_x < bvl_y_xend; ++bvl_y_x)
	if (bvl_y_check[bvl_y_x + bvl_y_n] == bvl_y_x && bvl_y_x != BVL_Y_TERROR)
	  {
	    if (bvl_y_count == BVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		bvl_y_count = 1;
		bvl_y_size = bvl_y_size0;
		bvl_y_format[sizeof bvl_y_unexpected - 1] = '\0';
		break;
	      }
	    bvl_y_arg[bvl_y_count++] = bvl_y_tname[bvl_y_x];
	    bvl_y_size1 = bvl_y_size + bvl_y_tnamerr (0, bvl_y_tname[bvl_y_x]);
	    bvl_y_size_overflow |= (bvl_y_size1 < bvl_y_size);
	    bvl_y_size = bvl_y_size1;
	    bvl_y_fmt = bvl_y_stpcpy (bvl_y_fmt, bvl_y_prefix);
	    bvl_y_prefix = bvl_y_or;
	  }

      bvl_y_f = BVL_Y__(bvl_y_format);
      bvl_y_size1 = bvl_y_size + bvl_y_strlen (bvl_y_f);
      bvl_y_size_overflow |= (bvl_y_size1 < bvl_y_size);
      bvl_y_size = bvl_y_size1;

      if (bvl_y_size_overflow)
	return BVL_Y_SIZE_MAXIMUM;

      if (bvl_y_result)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *bvl_y_p = bvl_y_result;
	  int bvl_y_i = 0;
	  while ((*bvl_y_p = *bvl_y_f) != '\0')
	    {
	      if (*bvl_y_p == '%' && bvl_y_f[1] == 's' && bvl_y_i < bvl_y_count)
		{
		  bvl_y_p += bvl_y_tnamerr (bvl_y_p, bvl_y_arg[bvl_y_i++]);
		  bvl_y_f += 2;
		}
	      else
		{
		  bvl_y_p++;
		  bvl_y_f++;
		}
	    }
	}
      return bvl_y_size;
    }
}
#endif /* BVL_Y_ERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y_destruct (const char *bvl_y_msg, int bvl_y_type, BVL_Y_STYPE *bvl_y_valuep)
#else
static void
bvl_y_destruct (bvl_y_msg, bvl_y_type, bvl_y_valuep)
    const char *bvl_y_msg;
    int bvl_y_type;
    BVL_Y_STYPE *bvl_y_valuep;
#endif
{
  BVL_Y_USE (bvl_y_valuep);

  if (!bvl_y_msg)
    bvl_y_msg = "Deleting";
  BVL_Y__SYMBOL_PRINT (bvl_y_msg, bvl_y_type, bvl_y_valuep, bvl_y_locationp);

  switch (bvl_y_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef BVL_Y_PARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int bvl_y_parse (void *BVL_Y_PARSE_PARAM);
#else
int bvl_y_parse ();
#endif
#else /* ! BVL_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int bvl_y_parse (void);
#else
int bvl_y_parse ();
#endif
#endif /* ! BVL_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
int bvl_y_char;

/* The semantic value of the look-ahead symbol.  */
BVL_Y_STYPE bvl_y_lval;

/* Number of syntax errors so far.  */
int bvl_y_nerrs;



/*----------.
| bvl_y_parse.  |
`----------*/

#ifdef BVL_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
bvl_y_parse (void *BVL_Y_PARSE_PARAM)
#else
int
bvl_y_parse (BVL_Y_PARSE_PARAM)
    void *BVL_Y_PARSE_PARAM;
#endif
#else /* ! BVL_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
bvl_y_parse (void)
#else
int
bvl_y_parse ()

#endif
#endif
{
  
  int bvl_y_state;
  int bvl_y_n;
  int bvl_y_result;
  /* Number of tokens to shift before error messages enabled.  */
  int bvl_y_errstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int bvl_y_token = 0;
#if BVL_Y_ERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char bvl_y_msgbuf[128];
  char *bvl_y_msg = bvl_y_msgbuf;
  BVL_Y_SIZE_T bvl_y_msg_alloc = sizeof bvl_y_msgbuf;
#endif

  /* Three stacks and their tools:
     `bvl_y_ss': related to states,
     `bvl_y_vs': related to semantic values,
     `bvl_y_ls': related to locations.

     Refer to the stacks thru separate pointers, to allow bvl_y_overflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  bvl_y_type_int16 bvl_y_ssa[BVL_Y_INITDEPTH];
  bvl_y_type_int16 *bvl_y_ss = bvl_y_ssa;
  bvl_y_type_int16 *bvl_y_ssp;

  /* The semantic value stack.  */
  BVL_Y_STYPE bvl_y_vsa[BVL_Y_INITDEPTH];
  BVL_Y_STYPE *bvl_y_vs = bvl_y_vsa;
  BVL_Y_STYPE *bvl_y_vsp;



#define BVL_Y_POPSTACK(N)   (bvl_y_vsp -= (N), bvl_y_ssp -= (N))

  BVL_Y_SIZE_T bvl_y_stacksize = BVL_Y_INITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  BVL_Y_STYPE bvl_y_val;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int bvl_y_len = 0;

  BVL_Y_DPRINTF ((stderr, "Starting parse\n"));

  bvl_y_state = 0;
  bvl_y_errstatus = 0;
  bvl_y_nerrs = 0;
  bvl_y_char = BVL_Y_EMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  bvl_y_ssp = bvl_y_ss;
  bvl_y_vsp = bvl_y_vs;

  goto bvl_y_setstate;

/*------------------------------------------------------------.
| bvl_y_newstate -- Push a new state, which is found in bvl_y_state.  |
`------------------------------------------------------------*/
 bvl_y_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  bvl_y_ssp++;

 bvl_y_setstate:
  *bvl_y_ssp = bvl_y_state;

  if (bvl_y_ss + bvl_y_stacksize - 1 <= bvl_y_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      BVL_Y_SIZE_T bvl_y_size = bvl_y_ssp - bvl_y_ss + 1;

#ifdef bvl_y_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	BVL_Y_STYPE *bvl_y_vs1 = bvl_y_vs;
	bvl_y_type_int16 *bvl_y_ss1 = bvl_y_ss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if bvl_y_overflow is a macro.  */
	bvl_y_overflow (BVL_Y__("memory exhausted"),
		    &bvl_y_ss1, bvl_y_size * sizeof (*bvl_y_ssp),
		    &bvl_y_vs1, bvl_y_size * sizeof (*bvl_y_vsp),

		    &bvl_y_stacksize);

	bvl_y_ss = bvl_y_ss1;
	bvl_y_vs = bvl_y_vs1;
      }
#else /* no bvl_y_overflow */
# ifndef BVL_Y_STACK_RELOCATE
      goto bvl_y_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (BVL_Y_MAXDEPTH <= bvl_y_stacksize)
	goto bvl_y_exhaustedlab;
      bvl_y_stacksize *= 2;
      if (BVL_Y_MAXDEPTH < bvl_y_stacksize)
	bvl_y_stacksize = BVL_Y_MAXDEPTH;

      {
	bvl_y_type_int16 *bvl_y_ss1 = bvl_y_ss;
	union bvl_y_alloc *bvl_y_ptr =
	  (union bvl_y_alloc *) BVL_Y_STACK_ALLOC (BVL_Y_STACK_BYTES (bvl_y_stacksize));
	if (! bvl_y_ptr)
	  goto bvl_y_exhaustedlab;
	BVL_Y_STACK_RELOCATE (bvl_y_ss);
	BVL_Y_STACK_RELOCATE (bvl_y_vs);

#  undef BVL_Y_STACK_RELOCATE
	if (bvl_y_ss1 != bvl_y_ssa)
	  BVL_Y_STACK_FREE (bvl_y_ss1);
      }
# endif
#endif /* no bvl_y_overflow */

      bvl_y_ssp = bvl_y_ss + bvl_y_size - 1;
      bvl_y_vsp = bvl_y_vs + bvl_y_size - 1;


      BVL_Y_DPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) bvl_y_stacksize));

      if (bvl_y_ss + bvl_y_stacksize - 1 <= bvl_y_ssp)
	BVL_Y_ABORT;
    }

  BVL_Y_DPRINTF ((stderr, "Entering state %d\n", bvl_y_state));

  goto bvl_y_backup;

/*-----------.
| bvl_y_backup.  |
`-----------*/
bvl_y_backup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  bvl_y_n = bvl_y_pact[bvl_y_state];
  if (bvl_y_n == BVL_Y_PACT_NINF)
    goto bvl_y_default;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* BVL_Y_CHAR is either BVL_Y_EMPTY or BVL_Y_EOF or a valid look-ahead symbol.  */
  if (bvl_y_char == BVL_Y_EMPTY)
    {
      BVL_Y_DPRINTF ((stderr, "Reading a token: "));
      bvl_y_char = BVL_Y_LEX;
    }

  if (bvl_y_char <= BVL_Y_EOF)
    {
      bvl_y_char = bvl_y_token = BVL_Y_EOF;
      BVL_Y_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      bvl_y_token = BVL_Y_TRANSLATE (bvl_y_char);
      BVL_Y__SYMBOL_PRINT ("Next token is", bvl_y_token, &bvl_y_lval, &bvl_y_lloc);
    }

  /* If the proper action on seeing token BVL_Y_TOKEN is to reduce or to
     detect an error, take that action.  */
  bvl_y_n += bvl_y_token;
  if (bvl_y_n < 0 || BVL_Y_LAST < bvl_y_n || bvl_y_check[bvl_y_n] != bvl_y_token)
    goto bvl_y_default;
  bvl_y_n = bvl_y_table[bvl_y_n];
  if (bvl_y_n <= 0)
    {
      if (bvl_y_n == 0 || bvl_y_n == BVL_Y_TABLE_NINF)
	goto bvl_y_errlab;
      bvl_y_n = -bvl_y_n;
      goto bvl_y_reduce;
    }

  if (bvl_y_n == BVL_Y_FINAL)
    BVL_Y_ACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (bvl_y_errstatus)
    bvl_y_errstatus--;

  /* Shift the look-ahead token.  */
  BVL_Y__SYMBOL_PRINT ("Shifting", bvl_y_token, &bvl_y_lval, &bvl_y_lloc);

  /* Discard the shifted token unless it is eof.  */
  if (bvl_y_char != BVL_Y_EOF)
    bvl_y_char = BVL_Y_EMPTY;

  bvl_y_state = bvl_y_n;
  *++bvl_y_vsp = bvl_y_lval;

  goto bvl_y_newstate;


/*-----------------------------------------------------------.
| bvl_y_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
bvl_y_default:
  bvl_y_n = bvl_y_defact[bvl_y_state];
  if (bvl_y_n == 0)
    goto bvl_y_errlab;
  goto bvl_y_reduce;


/*-----------------------------.
| bvl_y_reduce -- Do a reduction.  |
`-----------------------------*/
bvl_y_reduce:
  /* bvl_y_n is the number of a rule to reduce with.  */
  bvl_y_len = bvl_y_r2[bvl_y_n];

  /* If BVL_Y_LEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets BVL_Y_VAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to BVL_Y_VAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that BVL_Y_VAL may be used uninitialized.  */
  bvl_y_val = bvl_y_vsp[1-bvl_y_len];


  BVL_Y__REDUCE_PRINT (bvl_y_n);
  switch (bvl_y_n)
    {
        case 2:
#line 257 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		/* ###----------------------------------------------### */
		/*    Initializations					*/
		/*      - erroneous description presumed !		*/
		/* ###----------------------------------------------### */

		BVL_NM1LST = NULL;
		BVL_GRDLST = NULL;
		BVL_CNDLST = NULL;
		BVL_VALLST = NULL;
		BVL_ERRFLG = 0;

		dic                = beh_initab ();
		BVL_BEFPNT         = beh_addbefig (BVL_HEDFIG,NULL);
		BVL_BEFPNT->ERRFLG = 1;
		BVL_HEDFIG         = BVL_BEFPNT;
		}
    break;

  case 3:
#line 276 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		struct beout *beout_pnt;
		struct beaux *beaux_pnt;
		struct bebus *bebus_pnt;
		struct bereg *bereg_pnt;
		struct berin *berin_pnt;
		struct beaux *beaux_pred;
		struct berin *berin_pred;

		/* ###----------------------------------------------### */
		/*    Checking that each output have at least one driver*/
		/* ###----------------------------------------------### */

		beout_pnt = BVL_BEFPNT->BEOUT;
		while (beout_pnt != NULL)
		  {
		  if (beout_pnt->ABL == NULL)
		    bvl_error (40, beout_pnt->NAME);
		  beout_pnt = beout_pnt->NEXT;
		  }

		beaux_pnt = BVL_BEFPNT->BEAUX;
      beaux_pred=NULL;
		while (beaux_pnt != NULL)
		  {
        if (beaux_pnt->ABL == NULL)
        {
          fprintf (stderr,"`%s` Warning %d line %d :",BVL_CURFIL,40,BVL_LINNUM);
          fprintf (stderr,"signal `%s` never assigned\n",beaux_pnt->NAME);
          
          /*removing signal*/
          if ( beaux_pred ) beaux_pred->NEXT = beaux_pnt->NEXT;
          else BVL_BEFPNT->BEAUX = beaux_pnt->NEXT;

          /*removing other ref to signal*/
          berin_pred = NULL;
          for ( berin_pnt = BVL_BEFPNT->BERIN; berin_pnt; berin_pnt = berin_pnt->NEXT )
          {
             if ( berin_pnt->NAME == beaux_pnt->NAME )
             {
                 if ( berin_pred ) berin_pred->NEXT = berin_pnt->NEXT;
                 else BVL_BEFPNT->BERIN = berin_pnt->NEXT;
                 break;
             }
             berin_pred = berin_pnt;
          }
        }
        else beaux_pred = beaux_pnt;
		  beaux_pnt = beaux_pnt->NEXT;
		  }

		bebus_pnt = BVL_BEFPNT->BEBUS;
		while (bebus_pnt != NULL)
		  {
		  if (bebus_pnt->BIABL == NULL)
		    bvl_error (40, bebus_pnt->NAME);
		  bebus_pnt = bebus_pnt->NEXT;
		  }

		bereg_pnt = BVL_BEFPNT->BEREG;
		while (bereg_pnt != NULL)
		  {
		  if (bereg_pnt->BIABL == NULL)
		    bvl_error (40,bereg_pnt->NAME);
		  bereg_pnt = bereg_pnt->NEXT;
		  }

		if (BVL_ERRFLG == 0)
		  BVL_BEFPNT->ERRFLG = 0;

		beh_fretab (dic);
		}
    break;

  case 4:
#line 354 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		BVL_BEFPNT->NAME = (bvl_y_vsp[(2) - (3)].text);
		BVL_MODNAM       = (bvl_y_vsp[(2) - (3)].text);
		}
    break;

  case 5:
#line 363 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if (((bvl_y_vsp[(8) - (9)].text) != NULL) && ((bvl_y_vsp[(8) - (9)].text) != (bvl_y_vsp[(2) - (9)].text)))
		  bvl_error (1,(bvl_y_vsp[(8) - (9)].text));
		}
    break;

  case 6:
#line 369 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		bvl_error (2,NULL);
		}
    break;

  case 8:
#line 377 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		BVL_BEFPNT->BEGEN = BVL_GENPNT;
		BVL_GENPNT = NULL;
		}
    break;

  case 10:
#line 392 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_error (74,NULL); }
    break;

  case 14:
#line 414 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		char *type;

		if ((bvl_y_vsp[(5) - (6)].name).FLAG == (bvl_y_vsp[(4) - (6)].dble).FLAG)
		  {
		  BVL_NM1LST = reverse (BVL_NM1LST);
		  type = namealloc ("natural");
		  BVL_GENPNT = bvl_addgen (BVL_GENPNT,BVL_INTLST,BVL_NM1LST,
		                           type,(bvl_y_vsp[(5) - (6)].name).LEFT,(bvl_y_vsp[(5) - (6)].name).RIGHT);
		  }
		else
		  bvl_error (33,NULL);
		freechain (BVL_NM1LST);
		freechain (BVL_INTLST);
		BVL_NM1LST = NULL;
		BVL_INTLST = NULL;
		}
    break;

  case 15:
#line 432 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		/* ###----------------------------------------------### */
		/*   The following 3 lines reject tokens until the	*/
		/* sync. token 'Semicolon' is found			*/
		/* ###----------------------------------------------### */

		do
		  bvl_y_char = bvl_y_lex ();
		while ((bvl_y_char != Semicolon) && (bvl_y_char != 0));
		bvl_y_errok;
		bvl_error (75,NULL);
		}
    break;

  case 17:
#line 453 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		long *ptlong;

		ptlong = (long *) mbkalloc (sizeof(long));
		*ptlong = (bvl_y_vsp[(1) - (1)].valu);
		BVL_INTLST = addchain (BVL_INTLST,(void *)ptlong);
		}
    break;

  case 19:
#line 466 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		long *ptlong;

		ptlong = (long *) mbkalloc (sizeof(long));
		*ptlong = (bvl_y_vsp[(2) - (2)].valu);
		BVL_INTLST = addchain (BVL_INTLST,(void *)ptlong);
		}
    break;

  case 22:
#line 482 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		long *ptlong;

		ptlong = (long *) mbkalloc (sizeof(long));
		*ptlong = (bvl_y_vsp[(3) - (3)].valu);
		BVL_INTLST = addchain (BVL_INTLST,(void *)ptlong);
		}
    break;

  case 23:
#line 493 "../../../src/abv/src/bvl_bcomp_y.y"
    {(bvl_y_val.valu) = (bvl_y_vsp[(1) - (1)].valu);}
    break;

  case 24:
#line 498 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.name).FLAG  = 'S';
		(bvl_y_val.name).LEFT  = -1;
		(bvl_y_val.name).RIGHT = -1;
		}
    break;

  case 25:
#line 504 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 26:
#line 511 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(2) - (3)].name); }
    break;

  case 27:
#line 518 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.name).FLAG  = 'A';
		(bvl_y_val.name).LEFT  = (bvl_y_vsp[(1) - (3)].valu);
		(bvl_y_val.name).RIGHT = (bvl_y_vsp[(3) - (3)].valu);

		if ((((bvl_y_vsp[(1) - (3)].valu) > (bvl_y_vsp[(3) - (3)].valu)) && ((bvl_y_vsp[(2) - (3)].valu) == BVL_UPTDFN)) ||
		    (((bvl_y_vsp[(1) - (3)].valu) < (bvl_y_vsp[(3) - (3)].valu)) && ((bvl_y_vsp[(2) - (3)].valu) == BVL_DWTDFN)) ||
		    (((bvl_y_vsp[(1) - (3)].valu) < 0 ) || ((bvl_y_vsp[(2) - (3)].valu) < 0 )))
		  {
		  bvl_error (32,NULL);
		  }
		}
    break;

  case 28:
#line 534 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BVL_UPTDFN; }
    break;

  case 29:
#line 536 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BVL_DWTDFN; }
    break;

  case 33:
#line 553 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_error (3,NULL); }
    break;

  case 37:
#line 576 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		char *signame;
		long   sigconf;
		void *pnt;

		/* ###----------------------------------------------### */
		/*    First, check the validity of the declaration.	*/
		/* Then, for each port, create the apropriate set of	*/
		/* structures (berin, bepor, beout, bebus)		*/
		/* ###----------------------------------------------### */

		chkdcl ('P', (bvl_y_vsp[(4) - (7)].valu), (bvl_y_vsp[(5) - (7)].dble).VALU, (bvl_y_vsp[(5) - (7)].dble).FLAG, (bvl_y_vsp[(7) - (7)].valu), (bvl_y_vsp[(6) - (7)].name).FLAG, &sigconf);

		BVL_NM1LST = reverse (BVL_NM1LST);
		while (BVL_NM1LST != NULL)
		  {
		  signame = (char *)BVL_NM1LST->DATA;
		  if (beh_chktab (dic,signame,BVL_MODNAM,BVL_SIGDFN) != 0)
		    bvl_error (4,signame);

		  pnt = addstr (BVL_BEFPNT,'P',(bvl_y_vsp[(4) - (7)].valu),(bvl_y_vsp[(5) - (7)].dble).VALU,(bvl_y_vsp[(5) - (7)].dble).FLAG,signame,
		                (bvl_y_vsp[(6) - (7)].name).LEFT,(bvl_y_vsp[(6) - (7)].name).RIGHT);

		  beh_addtab (dic,signame,BVL_MODNAM,BVL_SIGDFN,sigconf);
		  beh_addtab (dic,signame,BVL_MODNAM,BVL_WMNDFN,(bvl_y_vsp[(6) - (7)].name).LEFT);
		  beh_addtab (dic,signame,BVL_MODNAM,BVL_WMXDFN,(bvl_y_vsp[(6) - (7)].name).RIGHT);
		  beh_addtab (dic,signame,BVL_MODNAM,BVL_PNTDFN,(long)pnt);

		  BVL_NM1LST = delchain (BVL_NM1LST, BVL_NM1LST);
		  }
		}
    break;

  case 38:
#line 608 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		/* ###----------------------------------------------### */
		/*   The following 3 lines reject tokens until the	*/
		/* sync. token 'Semicolon' is found			*/
		/* ###----------------------------------------------### */

		do
		  bvl_y_char = bvl_y_lex ();
		while ((bvl_y_char != Semicolon) && (bvl_y_char != 0));
		bvl_y_errok;

		bvl_error (6,NULL);
		}
    break;

  case 41:
#line 630 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = _IN; }
    break;

  case 42:
#line 632 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = _IN; }
    break;

  case 43:
#line 634 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = _OUT; }
    break;

  case 44:
#line 636 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = _INOUT; }
    break;

  case 45:
#line 645 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if ((bvl_y_vsp[(4) - (5)].text) != BVL_MODNAM)
		  bvl_error (1,(bvl_y_vsp[(4) - (5)].text));
		}
    break;

  case 46:
#line 655 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if (((bvl_y_vsp[(11) - (12)].text) != NULL) && ((bvl_y_vsp[(11) - (12)].text) != (bvl_y_vsp[(2) - (12)].text)))
		  bvl_error (7,(bvl_y_vsp[(11) - (12)].text));
		}
    break;

  case 47:
#line 661 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_error (8,NULL); }
    break;

  case 54:
#line 680 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_error (9,NULL); }
    break;

  case 55:
#line 685 "../../../src/abv/src/bvl_bcomp_y.y"
    {
             char pragma[30];
             char type  [100];
             char name  [100];

             sscanf((char *)(bvl_y_vsp[(1) - (1)].valu),"-- %s %s %s", pragma,type,name);

             BVL_BEFPNT->BEPGM = beh_addbepgm(BVL_BEFPNT->BEPGM,
                                              type,name,(void *)0);
           }
    break;

  case 56:
#line 705 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		long sigconf;
		
		if (chkdcl ('C',0,(bvl_y_vsp[(4) - (7)].dble).VALU,(bvl_y_vsp[(4) - (7)].dble).FLAG,0,(bvl_y_vsp[(5) - (7)].name).FLAG,&sigconf) == 0)
		  {
		  beh_addtab (dic,(bvl_y_vsp[(2) - (7)].text),BVL_MODNAM,BVL_WMNDFN,(bvl_y_vsp[(5) - (7)].name).LEFT);
		  beh_addtab (dic,(bvl_y_vsp[(2) - (7)].text),BVL_MODNAM,BVL_WMXDFN,(bvl_y_vsp[(5) - (7)].name).RIGHT);
		  beh_addtab (dic,(bvl_y_vsp[(2) - (7)].text),BVL_MODNAM,BVL_SIGDFN,sigconf);
		  beh_addtab (dic,(bvl_y_vsp[(2) - (7)].text),NULL,BVL_PNTDFN,(bvl_y_vsp[(6) - (7)].text));
		  }
		}
    break;

  case 57:
#line 721 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(2) - (2)].text); }
    break;

  case 58:
#line 732 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		char *signame;
		long   sigconf;
		void *pnt;
		long   errflg;

		errflg = chkdcl ('S',0,(bvl_y_vsp[(4) - (7)].dble).VALU,(bvl_y_vsp[(4) - (7)].dble).FLAG,(bvl_y_vsp[(6) - (7)].valu),(bvl_y_vsp[(5) - (7)].name).FLAG,&sigconf);

		/* ###----------------------------------------------### */
		/*    First, check the validity of the declaration.	*/
		/* Then, for each signal, create the apropriate set of	*/
		/* structures (berin, bereg, beaux, bebux)		*/
		/* ###----------------------------------------------### */

		BVL_NM1LST = reverse (BVL_NM1LST);
		while (BVL_NM1LST != NULL)
		  {
		  signame = (char *)BVL_NM1LST->DATA;
		  if (beh_chktab (dic,signame,BVL_MODNAM,BVL_SIGDFN) != 0)
		    bvl_error (10,signame);

		  pnt = addstr (BVL_BEFPNT,'S',0,(bvl_y_vsp[(4) - (7)].dble).VALU,(bvl_y_vsp[(4) - (7)].dble).FLAG,signame,
		                (bvl_y_vsp[(5) - (7)].name).LEFT,(bvl_y_vsp[(5) - (7)].name).RIGHT);

		  beh_addtab (dic,signame,BVL_MODNAM,BVL_SIGDFN,sigconf);
		  beh_addtab (dic,signame,BVL_MODNAM,BVL_WMNDFN,(bvl_y_vsp[(5) - (7)].name).LEFT);
		  beh_addtab (dic,signame,BVL_MODNAM,BVL_WMXDFN,(bvl_y_vsp[(5) - (7)].name).RIGHT);
		  beh_addtab (dic,signame,BVL_MODNAM,BVL_PNTDFN,(long)pnt);

		  BVL_NM1LST = delchain (BVL_NM1LST,BVL_NM1LST);
		  }
		}
    break;

  case 59:
#line 768 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 0; }
    break;

  case 60:
#line 770 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = REGISTER; }
    break;

  case 61:
#line 772 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BUS; }
    break;

  case 68:
#line 791 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_error (18,NULL); }
    break;

  case 69:
#line 799 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if (beh_chktab (dic,(bvl_y_vsp[(1) - (4)].text),BVL_MODNAM,BVL_LBLDFN) != 0)
		  bvl_error (19,(bvl_y_vsp[(1) - (4)].text));

		beh_addtab (dic,(bvl_y_vsp[(1) - (4)].text),BVL_MODNAM,BVL_LBLDFN,1);
		if ((bvl_y_vsp[(3) - (4)].text) != NULL)
		  BVL_GRDLST = addchain (BVL_GRDLST,(char *)(bvl_y_vsp[(3) - (4)].text));
		}
    break;

  case 70:
#line 812 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if ((bvl_y_vsp[(3) - (10)].text) != NULL)
		  BVL_GRDLST = delchain (BVL_GRDLST,BVL_GRDLST);
		if (((bvl_y_vsp[(9) - (10)].text) != NULL) && ((bvl_y_vsp[(9) - (10)].text) != (bvl_y_vsp[(1) - (10)].text)))
		  bvl_error (20,(bvl_y_vsp[(9) - (10)].text));
		}
    break;

  case 72:
#line 827 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if (beh_chktab (dic,(bvl_y_vsp[(1) - (2)].text),BVL_MODNAM,BVL_LBLDFN) != 0)
		  bvl_error (19,(bvl_y_vsp[(1) - (2)].text));

		beh_addtab (dic,(bvl_y_vsp[(1) - (2)].text),BVL_MODNAM,BVL_LBLDFN,1);
		if (BVL_ERRFLG == 0)
		  BVL_BEFPNT->BEMSG->LABEL = (bvl_y_vsp[(1) - (2)].text);
		}
    break;

  case 74:
#line 841 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if (beh_chktab (dic,(bvl_y_vsp[(1) - (2)].text),BVL_MODNAM,BVL_LBLDFN) != 0)
		  bvl_error (19,(bvl_y_vsp[(1) - (2)].text));
		beh_addtab (dic,(bvl_y_vsp[(1) - (2)].text),BVL_MODNAM,BVL_LBLDFN,1);
		}
    break;

  case 76:
#line 849 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if (beh_chktab (dic,(bvl_y_vsp[(1) - (2)].text),BVL_MODNAM,BVL_LBLDFN) != 0)
		  bvl_error (19,(bvl_y_vsp[(1) - (2)].text));
		beh_addtab (dic,(bvl_y_vsp[(1) - (2)].text),BVL_MODNAM,BVL_LBLDFN,1);
		}
    break;

  case 79:
#line 867 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if (BVL_ERRFLG == 0)
		  {
		  BVL_BEFPNT->BEMSG = beh_addbemsg(BVL_BEFPNT->BEMSG,NULL,(bvl_y_vsp[(4) - (5)].valu),
		                                   (bvl_y_vsp[(3) - (5)].text),(bvl_y_vsp[(2) - (5)].list).LIST_ABL->DATA,NULL);
		  }
		}
    break;

  case 80:
#line 883 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		long             i;
		struct beout   *beout_pnt;
		struct bebus   *bebus_pnt;
		struct bereg   *bereg_pnt;
		struct beaux   *beaux_pnt;
		struct bebux   *bebux_pnt;
		struct chain   *abl_pnt;
		struct bvl_expr expr0;
		struct bvl_expr expr1;
		struct bvl_expr expr2;
		struct bvl_expr expr3;
		struct bvl_expr expr4;
		struct bvl_expr expr5;
		struct bvl_expr expr6;
		long             rev_flg = 0;
		long             left_bnd;
		long             right_bnd;
		long             left;
		long             right;
		long             in_bound;
		long             out_bound;
		long             sig_width;
		long             sig_conf;

		expr4 = (bvl_y_vsp[(5) - (6)].list);

		while (BVL_CNDLST != NULL)
		  {
		  expr5 = *((bvl_ablstr *) BVL_CNDLST->DATA);
		  expr6 = *((bvl_ablstr *) BVL_VALLST->DATA);

		  expr0 = bvl_cpyablstr (expr5);
		  expr1 = bvl_crtabl (ABL_NOT , expr5, BVL_EMPSTR,-1,-1);
		  expr5 = expr0;
		  expr2 = bvl_crtabl (ANDM, expr4, expr1     ,-1,-1);
		  expr3 = bvl_crtabl (ANDM, expr6, expr5     ,-1,-1);
		  expr4 = bvl_crtabl (ABL_OR  , expr2, expr3     ,-1,-1);

		  BVL_CNDLST = delchain (BVL_CNDLST,BVL_CNDLST);
		  BVL_VALLST = delchain (BVL_VALLST,BVL_VALLST);
		  }

		left_bnd  = beh_chktab (dic,(bvl_y_vsp[(1) - (6)].name).NAME,BVL_MODNAM,BVL_WMNDFN);
		right_bnd = beh_chktab (dic,(bvl_y_vsp[(1) - (6)].name).NAME,BVL_MODNAM,BVL_WMXDFN);
		sig_conf  = beh_chktab (dic,(bvl_y_vsp[(1) - (6)].name).NAME,BVL_MODNAM,BVL_SIGDFN);

		left  = (bvl_y_vsp[(1) - (6)].name).LEFT;
		right = (bvl_y_vsp[(1) - (6)].name).RIGHT;

		if (left_bnd <= right_bnd)
		  {
		  sig_width = right_bnd - left_bnd + 1;
		  if (left <= right)
		    {
		    rev_flg   = 0;
		    in_bound  = right_bnd - right;
		    out_bound = right_bnd - left;
		    if ((left < left_bnd) || (right > right_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (6)].name).NAME);
		    }
		  else
		    {
		    rev_flg   = 1;
		    in_bound  = right_bnd - left;
		    out_bound = right_bnd - right;
		    if ((left > right_bnd) || (right < left_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (6)].name).NAME);
		    }
		  }
		else
		  {
		  sig_width = left_bnd - right_bnd + 1;
		  if (left <= right)
		    {
		    rev_flg   = 1;
		    in_bound  = left  - right_bnd;
		    out_bound = right - right_bnd;
		    if ((left < right_bnd) || (right > left_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (6)].name).NAME);
		    }
		  else
		    {
		    rev_flg   = 0;
		    in_bound  = right - right_bnd;
		    out_bound = left  - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (6)].name).NAME);
		    }
		  }

		if ((out_bound - in_bound + 1) != expr4.WIDTH)
		  bvl_error (35,(bvl_y_vsp[(1) - (6)].name).NAME);

		if (rev_flg == 1)
		  expr4.LIST_ABL = reverse (expr4.LIST_ABL);

		abl_pnt = expr4.LIST_ABL;

		switch (sig_conf)
		  {
		  case (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN) :
		    bvl_error (21,(bvl_y_vsp[(1) - (6)].name).NAME);
		    break;

		  case (BVL_OCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_BITDFN + BVL_NORDFN) :
		    if ((bvl_y_vsp[(3) - (6)].valu) == BVL_GRDDFN)
		      bvl_error (22,(bvl_y_vsp[(1) - (6)].name).NAME);
		    beout_pnt = (struct beout *)
		                 beh_chktab (dic,(bvl_y_vsp[(1) - (6)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (beout_pnt->ABL != NULL)
		            bvl_error (39,beout_pnt->NAME);
		          else
		            beout_pnt->ABL = (struct chain *)abl_pnt->DATA;
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        beout_pnt = beout_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_OCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_OCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		    if (((bvl_y_vsp[(3) - (6)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23,(bvl_y_vsp[(1) - (6)].name).NAME);
		    bebus_pnt = (struct bebus *)
		                 beh_chktab (dic,(bvl_y_vsp[(1) - (6)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bebus_pnt->BINODE = beh_addbinode (bebus_pnt->BINODE,
		                                             NULL,NULL);
		          bebus_pnt->BIABL  = beh_addbiabl  (bebus_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             dupablexpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bebus_pnt = bebus_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_BITDFN + BVL_NORDFN):
		    if ((bvl_y_vsp[(3) - (6)].valu) == BVL_GRDDFN)
		      bvl_error (22,(bvl_y_vsp[(1) - (6)].name).NAME);
		    beaux_pnt = (struct beaux *)
		                beh_chktab (dic,(bvl_y_vsp[(1) - (6)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (beaux_pnt->ABL != NULL)
		            bvl_error (39,beaux_pnt->NAME);
		          else
		            beaux_pnt->ABL = (struct chain *)abl_pnt->DATA;
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        beaux_pnt = beaux_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_RBIDFN + BVL_REGDFN):
		    if (((bvl_y_vsp[(3) - (6)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23,(bvl_y_vsp[(1) - (6)].name).NAME);
		    bereg_pnt = (struct bereg *)
		                beh_chktab (dic,(bvl_y_vsp[(1) - (6)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bereg_pnt->BINODE = beh_addbinode (bereg_pnt->BINODE,
		                                             NULL,NULL);
		          bereg_pnt->BIABL  = beh_addbiabl  (bereg_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             dupablexpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bereg_pnt = bereg_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_WORDFN + BVL_BUSDFN) :
		    if (((bvl_y_vsp[(3) - (6)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23,(bvl_y_vsp[(1) - (6)].name).NAME);
		    bebux_pnt = (struct bebux *)
		                beh_chktab (dic,(bvl_y_vsp[(1) - (6)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bebux_pnt->BINODE = beh_addbinode (bebux_pnt->BINODE,
		                                             NULL,NULL);
		          bebux_pnt->BIABL  = beh_addbiabl  (bebux_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             dupablexpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bebux_pnt = bebux_pnt->NEXT;
		        }
		      }
		    break;

		  default :
		    bvl_error (17,(bvl_y_vsp[(1) - (6)].name).NAME);
		    break;
		  }
		}
    break;

  case 82:
#line 1133 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		struct bvl_expr *expr_pnt;

		expr_pnt           = (bvl_ablstr *)mbkalloc(sizeof(bvl_ablstr));
		expr_pnt->WIDTH    = (bvl_y_vsp[(4) - (5)].list).WIDTH;
		expr_pnt->LIST_ABL = (bvl_y_vsp[(4) - (5)].list).LIST_ABL;
		BVL_CNDLST         = addchain (BVL_CNDLST,(char *) expr_pnt);

		expr_pnt           = (bvl_ablstr *)mbkalloc(sizeof(bvl_ablstr));
		expr_pnt->WIDTH    = (bvl_y_vsp[(2) - (5)].list).WIDTH;
		expr_pnt->LIST_ABL = (bvl_y_vsp[(2) - (5)].list).LIST_ABL;
		BVL_VALLST         = addchain (BVL_VALLST,(char *) expr_pnt);
		}
    break;

  case 83:
#line 1151 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		BVL_SLCEXP = (bvl_y_vsp[(2) - (2)].list);
		BVL_BDDPNT = NULL;
		}
    break;

  case 84:
#line 1162 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		long             i;
		struct beout   *beout_pnt;
		struct bebus   *bebus_pnt;
		struct bereg   *bereg_pnt;
		struct beaux   *beaux_pnt;
		struct bebux   *bebux_pnt;
		struct chain   *abl_pnt;
		struct bvl_expr expr1;
		long             rev_flg = 0;
		long             left_bnd;
		long             right_bnd;
		long             left;
		long             right;
		long             in_bound;
		long             out_bound;
		long             sig_width;
		long             sig_conf;

		expr1 = bvl_crtabl (ABL_OR ,(bvl_y_vsp[(8) - (10)].list) ,(bvl_y_vsp[(9) - (10)].list),-1,-1);
		if (BVL_BDDPNT != getlogbddnodeone())
		  bvl_error (25,NULL);
		left_bnd  = beh_chktab (dic,(bvl_y_vsp[(5) - (10)].name).NAME,BVL_MODNAM,BVL_WMNDFN);
		right_bnd = beh_chktab (dic,(bvl_y_vsp[(5) - (10)].name).NAME,BVL_MODNAM,BVL_WMXDFN);
		sig_conf  = beh_chktab (dic,(bvl_y_vsp[(5) - (10)].name).NAME,BVL_MODNAM,BVL_SIGDFN);

		left  = (bvl_y_vsp[(5) - (10)].name).LEFT;
		right = (bvl_y_vsp[(5) - (10)].name).RIGHT;
		if (left_bnd <= right_bnd)
		  {
		  sig_width = right_bnd - left_bnd + 1;
		  if (left <= right)
		    {
		    rev_flg   = 0;
		    in_bound  = right_bnd - right;
		    out_bound = right_bnd - left;
		    if ((left < left_bnd) || (right > right_bnd))
		      bvl_error (36,(bvl_y_vsp[(5) - (10)].name).NAME);
		    }
		  else
		    {
		    rev_flg   = 1;
		    in_bound  = right_bnd - left;
		    out_bound = right_bnd - right;
		    if ((left > right_bnd) || (right < left_bnd))
		      bvl_error (36,(bvl_y_vsp[(5) - (10)].name).NAME);
		    }
		  }
		else
		  {
		  sig_width = left_bnd - right_bnd + 1;
		  if (left <= right)
		    {
		    rev_flg   = 1;
		    in_bound  = left  - right_bnd;
		    out_bound = right - right_bnd;
		    if ((left < right_bnd) || (right > left_bnd))
		      bvl_error (36,(bvl_y_vsp[(5) - (10)].name).NAME);
		    }
		  else
		    {
		    rev_flg   = 0;
		    in_bound  = right - right_bnd;
		    out_bound = left  - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
		      bvl_error (36,(bvl_y_vsp[(5) - (10)].name).NAME);
		    }
		  }

		if ((out_bound - in_bound + 1) != expr1.WIDTH)
		  bvl_error (35,(bvl_y_vsp[(5) - (10)].name).NAME);

		if (rev_flg == 1)
		  expr1.LIST_ABL = reverse (expr1.LIST_ABL);

		abl_pnt = expr1.LIST_ABL;

		switch (sig_conf)
		  {
		  case (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN) :
		    bvl_error (21,(bvl_y_vsp[(5) - (10)].name).NAME);
		    break;

		  case (BVL_OCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_BITDFN + BVL_NORDFN) :
		    if ((bvl_y_vsp[(7) - (10)].valu) == BVL_GRDDFN)
		      bvl_error (22,(bvl_y_vsp[(5) - (10)].name).NAME);
		    beout_pnt = (struct beout *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (10)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (beout_pnt->ABL != NULL)
		            bvl_error (39,beout_pnt->NAME);
		          else
		            beout_pnt->ABL = (struct chain *)abl_pnt->DATA;
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        beout_pnt = beout_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_OCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_OCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		    if (((bvl_y_vsp[(7) - (10)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23,(bvl_y_vsp[(5) - (10)].name).NAME);
		    bebus_pnt = (struct bebus *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (10)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bebus_pnt->BINODE = beh_addbinode (bebus_pnt->BINODE,
		                                             NULL,NULL);
		          bebus_pnt->BIABL  = beh_addbiabl  (bebus_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             dupablexpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bebus_pnt = bebus_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_BITDFN + BVL_NORDFN):
		    if ((bvl_y_vsp[(7) - (10)].valu) == BVL_GRDDFN)
		      bvl_error (22,(bvl_y_vsp[(5) - (10)].name).NAME);
		    beaux_pnt = (struct beaux *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (10)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (beaux_pnt->ABL != NULL)
		            bvl_error (39,beaux_pnt->NAME);
		          else
		           {
		            beaux_pnt->ABL = (struct chain *)abl_pnt->DATA;
		            }
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        beaux_pnt = beaux_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_RBIDFN + BVL_REGDFN):
		    if (((bvl_y_vsp[(7) - (10)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23,(bvl_y_vsp[(5) - (10)].name).NAME);
		    bereg_pnt = (struct bereg *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (10)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bereg_pnt->BINODE = beh_addbinode (bereg_pnt->BINODE,
		                                             NULL,NULL);
		          bereg_pnt->BIABL  = beh_addbiabl  (bereg_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             dupablexpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bereg_pnt = bereg_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_WORDFN + BVL_BUSDFN) :
		    if (((bvl_y_vsp[(7) - (10)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23,(bvl_y_vsp[(5) - (10)].name).NAME);
		    bebux_pnt = (struct bebux *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (10)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bebux_pnt->BINODE = beh_addbinode (bebux_pnt->BINODE,
		                                             NULL,NULL);
		          bebux_pnt->BIABL  = beh_addbiabl  (bebux_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             dupablexpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bebux_pnt = bebux_pnt->NEXT;
		        }
		      }
		    break;

		  default :
		    bvl_error (17,(bvl_y_vsp[(5) - (10)].name).NAME);
		    break;
		  }
		}
    break;

  case 85:
#line 1387 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = BVL_EMPSTR; }
    break;

  case 86:
#line 1391 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_OR,(bvl_y_vsp[(1) - (3)].list),(bvl_y_vsp[(3) - (3)].list),-1,-1); }
    break;

  case 87:
#line 1398 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		struct bvl_expr expr1;

		bvl_select (&expr1,BVL_NM1LST,&BVL_BDDPNT,BVL_SLCEXP);
		freechain (BVL_NM1LST);
		BVL_NM1LST = NULL;

		(bvl_y_val.list) = bvl_crtabl (ANDM,(bvl_y_vsp[(1) - (3)].list),expr1,-1,-1);
		}
    break;

  case 88:
#line 1411 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 89:
#line 1417 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.list)      = (bvl_y_vsp[(1) - (2)].list);
		}
    break;

  case 90:
#line 1424 "../../../src/abv/src/bvl_bcomp_y.y"
    {}
    break;

  case 91:
#line 1427 "../../../src/abv/src/bvl_bcomp_y.y"
    {}
    break;

  case 92:
#line 1433 "../../../src/abv/src/bvl_bcomp_y.y"
    {}
    break;

  case 93:
#line 1438 "../../../src/abv/src/bvl_bcomp_y.y"
    {}
    break;

  case 94:
#line 1440 "../../../src/abv/src/bvl_bcomp_y.y"
    {}
    break;

  case 95:
#line 1442 "../../../src/abv/src/bvl_bcomp_y.y"
    {}
    break;

  case 96:
#line 1444 "../../../src/abv/src/bvl_bcomp_y.y"
    {}
    break;

  case 97:
#line 1446 "../../../src/abv/src/bvl_bcomp_y.y"
    {}
    break;

  case 98:
#line 1451 "../../../src/abv/src/bvl_bcomp_y.y"
    { BVL_NM1LST = addchain (NULL ,(bvl_y_vsp[(1) - (1)].text)); }
    break;

  case 99:
#line 1453 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_y_errok; }
    break;

  case 101:
#line 1461 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if ((bvl_y_vsp[(3) - (3)].text) == "others")
		  bvl_error (30,NULL);
		BVL_NM1LST = addchain (BVL_NM1LST ,(bvl_y_vsp[(3) - (3)].text));
		}
    break;

  case 102:
#line 1470 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 103:
#line 1472 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = "others"; }
    break;

  case 104:
#line 1474 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		char           *val;
		char            val2[256];
		long             left;
		long             right;
		long             in_bound;
		long             out_bound;
		long             left_bnd;
		long             right_bnd;
		long             sig_conf;

		strcpy (val2,"B\"");
		sig_conf = beh_chktab (dic,(bvl_y_vsp[(1) - (1)].name).NAME,BVL_MODNAM,BVL_SIGDFN);
		val      = (char *) beh_chktab (dic,(bvl_y_vsp[(1) - (1)].name).NAME,NULL,BVL_PNTDFN);
		if (sig_conf == 0)
		  bvl_error (17,(bvl_y_vsp[(1) - (1)].name).NAME);
		else
		  {
		  if (sig_conf != BVL_CSTDFN)
		    bvl_error (76,(bvl_y_vsp[(1) - (1)].name).NAME);
		  }

		left_bnd  = beh_chktab (dic,(bvl_y_vsp[(1) - (1)].name).NAME,BVL_MODNAM,BVL_WMNDFN);
		right_bnd = beh_chktab (dic,(bvl_y_vsp[(1) - (1)].name).NAME,BVL_MODNAM,BVL_WMXDFN);

		left  = (bvl_y_vsp[(1) - (1)].name).LEFT;
		right = (bvl_y_vsp[(1) - (1)].name).RIGHT;

		if (left_bnd <= right_bnd)
		  {
		  if (left <= right)
		    {
		    in_bound = left - left_bnd;
		    out_bound = right - left_bnd;
		    if ((left < left_bnd) || (right > right_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  else
		    {
		    in_bound = left - right_bnd;
		    out_bound = right - right_bnd;
		    if ((left > right_bnd) || (right < left_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  }
		else
		  {
		  if (left <= right)
		    {
		    in_bound = right - left_bnd;
		    out_bound = left - left_bnd;
		    if ((left < right_bnd) || (right > left_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  else
		    {
		    in_bound = right - right_bnd;
		    out_bound = left - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  }

		bvl_tobin (&val2[2],val,in_bound,out_bound);
		strcat (val2,"\"");
		(bvl_y_val.text) = namealloc (val2);
		}
    break;

  case 105:
#line 1545 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = NULL; }
    break;

  case 106:
#line 1548 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(2) - (2)].text); }
    break;

  case 107:
#line 1553 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 'E'; }
    break;

  case 108:
#line 1556 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = (bvl_y_vsp[(2) - (2)].valu); }
    break;

  case 109:
#line 1561 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 110:
#line 1566 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 'E'; }
    break;

  case 111:
#line 1568 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 'W'; }
    break;

  case 112:
#line 1573 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 113:
#line 1575 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 114:
#line 1577 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 115:
#line 1579 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 116:
#line 1586 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_AND ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 117:
#line 1590 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_AND ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 118:
#line 1597 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_OR ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 119:
#line 1601 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_OR ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 120:
#line 1606 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 121:
#line 1610 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_NAND ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 122:
#line 1614 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_NOR ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 123:
#line 1622 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_XOR ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 124:
#line 1626 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_XOR ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 125:
#line 1631 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 126:
#line 1635 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl ((bvl_y_vsp[(2) - (3)].valu) ,(bvl_y_vsp[(1) - (3)].list) ,(bvl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 127:
#line 1640 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 128:
#line 1645 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 129:
#line 1649 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (CONC,(bvl_y_vsp[(1) - (3)].list),(bvl_y_vsp[(3) - (3)].list),-1,-1); }
    break;

  case 130:
#line 1655 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 131:
#line 1660 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 132:
#line 1663 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = bvl_crtabl (ABL_NOT,(bvl_y_vsp[(2) - (2)].list),BVL_EMPSTR,-1,-1); }
    break;

  case 133:
#line 1668 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		struct bvl_expr expr1;
		expr1.IDENT = (bvl_y_vsp[(1) - (1)].text);
		(bvl_y_val.list) = bvl_crtabl (NOPS,expr1,BVL_EMPSTR,-1,-1);
		}
    break;

  case 134:
#line 1674 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 135:
#line 1676 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		struct bvl_expr expr1;
		long             left;
		long             right;
		long             left_bnd;
		long             right_bnd;
		long             in_bound;
		long             out_bound;
		long             sig_conf;

		sig_conf = beh_chktab (dic,(bvl_y_vsp[(1) - (1)].name).NAME,BVL_MODNAM,BVL_SIGDFN);
		switch (sig_conf)
		  {
		  case (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		  case (BVL_BITDFN + BVL_NORDFN):
		  case (BVL_MUXDFN + BVL_BUSDFN):
		  case (BVL_WORDFN + BVL_BUSDFN):
		  case (BVL_RBIDFN + BVL_REGDFN):
		  case (BVL_CSTDFN):
		    break;
		  case (BVL_OCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_OCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_OCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		    bvl_error (26,(bvl_y_vsp[(1) - (1)].name).NAME);
		    break;
		  default :
		    bvl_error (17,(bvl_y_vsp[(1) - (1)].name).NAME);
		    break;
		  }

		left_bnd  = beh_chktab (dic,(bvl_y_vsp[(1) - (1)].name).NAME,BVL_MODNAM,BVL_WMNDFN);
		right_bnd = beh_chktab (dic,(bvl_y_vsp[(1) - (1)].name).NAME,BVL_MODNAM,BVL_WMXDFN);

		left  = (bvl_y_vsp[(1) - (1)].name).LEFT;
		right = (bvl_y_vsp[(1) - (1)].name).RIGHT;

		if (left_bnd <= right_bnd)
		  {
		  if (left <= right)
		    {
		    in_bound  = left  - left_bnd;
		    out_bound = right - left_bnd;
		    if ((left < left_bnd) || (right > right_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  else
		    {
		    in_bound  = right - left_bnd;
		    out_bound = left  - left_bnd;
		    if ((left > right_bnd) || (right < left_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  }
		else
		  {
		  if (left <= right)
		    {
		    in_bound  = left  - right_bnd;
		    out_bound = right - right_bnd;
		    if ((left < right_bnd) || (right > left_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  else
		    {
		    in_bound  = right - right_bnd;
		    out_bound = left  - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
		      bvl_error (36,(bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  }

		if (sig_conf != BVL_CSTDFN)
		  {
		  expr1.IDENT = (bvl_y_vsp[(1) - (1)].name).NAME;
		  if((bvl_y_vsp[(1) - (1)].name).FLAG == 'X')
			{
		  	expr1 = bvl_crtabl (NOPI,expr1,BVL_EMPSTR,left,right);
		  	(bvl_y_val.list) = bvl_crtabl (ABL_STABLE,expr1,BVL_EMPSTR,left,right);
			}
		  else 
		  	(bvl_y_val.list) = bvl_crtabl (NOPI,expr1,BVL_EMPSTR,left,right);
		  }
		else
		  {
		  expr1.IDENT = (char *)beh_chktab(dic,(bvl_y_vsp[(1) - (1)].name).NAME,NULL,BVL_PNTDFN);
		  (bvl_y_val.list) = bvl_crtabl (NOPS,expr1,BVL_EMPSTR,in_bound,out_bound);
		  }
		}
    break;

  case 136:
#line 1771 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = EQ; }
    break;

  case 137:
#line 1773 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = NE; }
    break;

  case 138:
#line 1778 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 139:
#line 1780 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 140:
#line 1782 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 141:
#line 1789 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(2) - (3)].list); }
    break;

  case 142:
#line 1794 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.name).NAME  = (bvl_y_vsp[(1) - (1)].text);
		(bvl_y_val.name).LEFT  = beh_chktab (dic,(bvl_y_vsp[(1) - (1)].text),BVL_MODNAM,BVL_WMNDFN);
		(bvl_y_val.name).RIGHT = beh_chktab (dic,(bvl_y_vsp[(1) - (1)].text),BVL_MODNAM,BVL_WMXDFN);
		}
    break;

  case 143:
#line 1800 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 144:
#line 1802 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 145:
#line 1804 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 146:
#line 1812 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.name).NAME  = (bvl_y_vsp[(1) - (4)].text);
		(bvl_y_val.name).LEFT  = (bvl_y_vsp[(3) - (4)].valu);
		(bvl_y_val.name).RIGHT = (bvl_y_vsp[(3) - (4)].valu);
		}
    break;

  case 147:
#line 1826 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		if ((((bvl_y_vsp[(5) - (6)].valu) > (bvl_y_vsp[(3) - (6)].valu)) && ((bvl_y_vsp[(4) - (6)].valu) != BVL_UPTDFN)) ||
		    (((bvl_y_vsp[(5) - (6)].valu) < (bvl_y_vsp[(3) - (6)].valu)) && ((bvl_y_vsp[(4) - (6)].valu) != BVL_DWTDFN)))
		  bvl_error (32,(bvl_y_vsp[(1) - (6)].text));

		(bvl_y_val.name).NAME  = (bvl_y_vsp[(1) - (6)].text);
		(bvl_y_val.name).LEFT  = (bvl_y_vsp[(3) - (6)].valu);
		(bvl_y_val.name).RIGHT = (bvl_y_vsp[(5) - (6)].valu);
		}
    break;

  case 148:
#line 1841 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		char             extname[100];
		char            *lclname;
		long              sig_conf;
		struct bvl_expr  expr1;
		struct bvl_expr  expr2;
		struct chain    *ptabl;

		sig_conf = beh_chktab (dic,(bvl_y_vsp[(1) - (3)].text),BVL_MODNAM,BVL_SIGDFN);
		switch (sig_conf)
		  {
		  case (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		  case (BVL_BITDFN + BVL_NORDFN):
		  case (BVL_MUXDFN + BVL_BUSDFN):
		  case (BVL_WORDFN + BVL_BUSDFN):
		  case (BVL_RBIDFN + BVL_REGDFN):
		    break;
		  default :
		    bvl_error (79,(bvl_y_vsp[(1) - (3)].text));
		  }

		if (beh_chktab (dic,(bvl_y_vsp[(1) - (3)].text),BVL_MODNAM,BVL_WMNDFN) != -1)
		  bvl_error (79,(bvl_y_vsp[(1) - (3)].text));

		sprintf (extname,"%s'delayed",(bvl_y_vsp[(1) - (3)].text));
		lclname = namealloc (extname);

		if (BVL_ERRFLG == 0)
		  {
		  if (beh_chktab (dic,(bvl_y_vsp[(1) - (3)].text),BVL_MODNAM,BVL_STBDFN) == 0)
		    {
		    expr1.IDENT = (bvl_y_vsp[(1) - (3)].text);
		    expr1.WIDTH  = 1;
		    expr2 = bvl_crtabl (NOPI,expr1,BVL_EMPSTR,-1,-1);
		    ptabl = expr2.LIST_ABL->DATA;

		    if (BVL_AUXMOD == 1)
		      BVL_BEFPNT->BERIN=beh_addberin(BVL_BEFPNT->BERIN,lclname);

		    BVL_BEFPNT->BEDLY = beh_addbeaux(BVL_BEFPNT->BEDLY,lclname,
		                                     ptabl,NULL);
		    beh_addtab (dic,(bvl_y_vsp[(1) - (3)].text)     ,BVL_MODNAM,BVL_STBDFN,1);
		    beh_addtab (dic,lclname,BVL_MODNAM,BVL_WMNDFN,-1);
		    beh_addtab (dic,lclname,BVL_MODNAM,BVL_WMXDFN,-1);
		    beh_addtab (dic,lclname,BVL_MODNAM,BVL_SIGDFN,
		                (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN));
		    }
		  }
		BVL_BEFPNT->TYPE |= BEH_STABLE;
		(bvl_y_val.name).NAME = (bvl_y_vsp[(1) - (3)].text);
		(bvl_y_val.name).LEFT = -1;
		(bvl_y_val.name).RIGHT = -1;
		(bvl_y_val.name).FLAG  = 'X';

		}
    break;

  case 150:
#line 1907 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = BIT; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 151:
#line 1909 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = WOR_BIT; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 152:
#line 1911 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = MUX_BIT; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 153:
#line 1913 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = BIT; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 154:
#line 1915 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = WOR_BIT; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 155:
#line 1917 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = MUX_BIT; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 156:
#line 1919 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = REG_BIT; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 157:
#line 1921 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = REG_BIT; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 158:
#line 1923 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = NATURAL; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 159:
#line 1925 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = NATURAL; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 160:
#line 1930 "../../../src/abv/src/bvl_bcomp_y.y"
    { BVL_NM1LST = addchain (BVL_NM1LST,(bvl_y_vsp[(1) - (1)].text)); }
    break;

  case 163:
#line 1939 "../../../src/abv/src/bvl_bcomp_y.y"
    { BVL_NM1LST = addchain (BVL_NM1LST,(bvl_y_vsp[(3) - (3)].text)); }
    break;

  case 164:
#line 1944 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = NULL; }
    break;

  case 165:
#line 1946 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 166:
#line 1951 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = NULL; }
    break;

  case 167:
#line 1953 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 168:
#line 1960 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (char *)(bvl_y_vsp[(2) - (3)].list).LIST_ABL->DATA; }
    break;

  case 169:
#line 1965 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BVL_UNGDFN ; }
    break;

  case 170:
#line 1967 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BVL_GRDDFN; }
    break;

  case 171:
#line 1972 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = NULL; }
    break;

  case 172:
#line 1974 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 173:
#line 1979 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 174:
#line 1984 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 175:
#line 1990 "../../../src/abv/src/bvl_bcomp_y.y"
    {
		BVL_LBLNAM = (bvl_y_vsp[(1) - (2)].text);
		(bvl_y_val.text) = (bvl_y_vsp[(1) - (2)].text);
		}
    break;

  case 176:
#line 1998 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 177:
#line 2003 "../../../src/abv/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = atoi ((bvl_y_vsp[(1) - (1)].text)); }
    break;

  case 178:
#line 2008 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_y_errok; }
    break;

  case 179:
#line 2013 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_y_errok; }
    break;

  case 180:
#line 2018 "../../../src/abv/src/bvl_bcomp_y.y"
    { bvl_y_errok; }
    break;


/* Line 1267 of yacc.c.  */
#line 3643 "y.tab.c"
      default: break;
    }
  BVL_Y__SYMBOL_PRINT ("-> $$ =", bvl_y_r1[bvl_y_n], &bvl_y_val, &bvl_y_loc);

  BVL_Y_POPSTACK (bvl_y_len);
  bvl_y_len = 0;
  BVL_Y__STACK_PRINT (bvl_y_ss, bvl_y_ssp);

  *++bvl_y_vsp = bvl_y_val;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  bvl_y_n = bvl_y_r1[bvl_y_n];

  bvl_y_state = bvl_y_pgoto[bvl_y_n - BVL_Y_NTOKENS] + *bvl_y_ssp;
  if (0 <= bvl_y_state && bvl_y_state <= BVL_Y_LAST && bvl_y_check[bvl_y_state] == *bvl_y_ssp)
    bvl_y_state = bvl_y_table[bvl_y_state];
  else
    bvl_y_state = bvl_y_defgoto[bvl_y_n - BVL_Y_NTOKENS];

  goto bvl_y_newstate;


/*------------------------------------.
| bvl_y_errlab -- here on detecting error |
`------------------------------------*/
bvl_y_errlab:
  /* If not already recovering from an error, report this error.  */
  if (!bvl_y_errstatus)
    {
      ++bvl_y_nerrs;
#if ! BVL_Y_ERROR_VERBOSE
      bvl_y_error (BVL_Y__("syntax error"));
#else
      {
	BVL_Y_SIZE_T bvl_y_size = bvl_y_syntax_error (0, bvl_y_state, bvl_y_char);
	if (bvl_y_msg_alloc < bvl_y_size && bvl_y_msg_alloc < BVL_Y_STACK_ALLOC_MAXIMUM)
	  {
	    BVL_Y_SIZE_T bvl_y_alloc = 2 * bvl_y_size;
	    if (! (bvl_y_size <= bvl_y_alloc && bvl_y_alloc <= BVL_Y_STACK_ALLOC_MAXIMUM))
	      bvl_y_alloc = BVL_Y_STACK_ALLOC_MAXIMUM;
	    if (bvl_y_msg != bvl_y_msgbuf)
	      BVL_Y_STACK_FREE (bvl_y_msg);
	    bvl_y_msg = (char *) BVL_Y_STACK_ALLOC (bvl_y_alloc);
	    if (bvl_y_msg)
	      bvl_y_msg_alloc = bvl_y_alloc;
	    else
	      {
		bvl_y_msg = bvl_y_msgbuf;
		bvl_y_msg_alloc = sizeof bvl_y_msgbuf;
	      }
	  }

	if (0 < bvl_y_size && bvl_y_size <= bvl_y_msg_alloc)
	  {
	    (void) bvl_y_syntax_error (bvl_y_msg, bvl_y_state, bvl_y_char);
	    bvl_y_error (bvl_y_msg);
	  }
	else
	  {
	    bvl_y_error (BVL_Y__("syntax error"));
	    if (bvl_y_size != 0)
	      goto bvl_y_exhaustedlab;
	  }
      }
#endif
    }



  if (bvl_y_errstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (bvl_y_char <= BVL_Y_EOF)
	{
	  /* Return failure if at end of input.  */
	  if (bvl_y_char == BVL_Y_EOF)
	    BVL_Y_ABORT;
	}
      else
	{
	  bvl_y_destruct ("Error: discarding",
		      bvl_y_token, &bvl_y_lval);
	  bvl_y_char = BVL_Y_EMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto bvl_y_errlab1;


/*---------------------------------------------------.
| bvl_y_errorlab -- error raised explicitly by BVL_Y_ERROR.  |
`---------------------------------------------------*/
bvl_y_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     BVL_Y_ERROR and the label bvl_y_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto bvl_y_errorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this BVL_Y_ERROR.  */
  BVL_Y_POPSTACK (bvl_y_len);
  bvl_y_len = 0;
  BVL_Y__STACK_PRINT (bvl_y_ss, bvl_y_ssp);
  bvl_y_state = *bvl_y_ssp;
  goto bvl_y_errlab1;


/*-------------------------------------------------------------.
| bvl_y_errlab1 -- common code for both syntax error and BVL_Y_ERROR.  |
`-------------------------------------------------------------*/
bvl_y_errlab1:
  bvl_y_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      bvl_y_n = bvl_y_pact[bvl_y_state];
      if (bvl_y_n != BVL_Y_PACT_NINF)
	{
	  bvl_y_n += BVL_Y_TERROR;
	  if (0 <= bvl_y_n && bvl_y_n <= BVL_Y_LAST && bvl_y_check[bvl_y_n] == BVL_Y_TERROR)
	    {
	      bvl_y_n = bvl_y_table[bvl_y_n];
	      if (0 < bvl_y_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (bvl_y_ssp == bvl_y_ss)
	BVL_Y_ABORT;


      bvl_y_destruct ("Error: popping",
		  bvl_y_stos[bvl_y_state], bvl_y_vsp);
      BVL_Y_POPSTACK (1);
      bvl_y_state = *bvl_y_ssp;
      BVL_Y__STACK_PRINT (bvl_y_ss, bvl_y_ssp);
    }

  if (bvl_y_n == BVL_Y_FINAL)
    BVL_Y_ACCEPT;

  *++bvl_y_vsp = bvl_y_lval;


  /* Shift the error token.  */
  BVL_Y__SYMBOL_PRINT ("Shifting", bvl_y_stos[bvl_y_n], bvl_y_vsp, bvl_y_lsp);

  bvl_y_state = bvl_y_n;
  goto bvl_y_newstate;


/*-------------------------------------.
| bvl_y_acceptlab -- BVL_Y_ACCEPT comes here.  |
`-------------------------------------*/
bvl_y_acceptlab:
  bvl_y_result = 0;
  goto bvl_y_return;

/*-----------------------------------.
| bvl_y_abortlab -- BVL_Y_ABORT comes here.  |
`-----------------------------------*/
bvl_y_abortlab:
  bvl_y_result = 1;
  goto bvl_y_return;

#ifndef bvl_y_overflow
/*-------------------------------------------------.
| bvl_y_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
bvl_y_exhaustedlab:
  bvl_y_error (BVL_Y__("memory exhausted"));
  bvl_y_result = 2;
  /* Fall through.  */
#endif

bvl_y_return:
  if (bvl_y_char != BVL_Y_EOF && bvl_y_char != BVL_Y_EMPTY)
     bvl_y_destruct ("Cleanup: discarding lookahead",
		 bvl_y_token, &bvl_y_lval);
  /* Do not reclaim the symbols of the rule which action triggered
     this BVL_Y_ABORT or BVL_Y_ACCEPT.  */
  BVL_Y_POPSTACK (bvl_y_len);
  BVL_Y__STACK_PRINT (bvl_y_ss, bvl_y_ssp);
  while (bvl_y_ssp != bvl_y_ss)
    {
      bvl_y_destruct ("Cleanup: popping",
		  bvl_y_stos[*bvl_y_ssp], bvl_y_vsp);
      BVL_Y_POPSTACK (1);
    }
#ifndef bvl_y_overflow
  if (bvl_y_ss != bvl_y_ssa)
    BVL_Y_STACK_FREE (bvl_y_ss);
#endif
#if BVL_Y_ERROR_VERBOSE
  if (bvl_y_msg != bvl_y_msgbuf)
    BVL_Y_STACK_FREE (bvl_y_msg);
#endif
  /* Make sure BVL_Y_ID is used.  */
  return BVL_Y_ID (bvl_y_result);
}


#line 2020 "../../../src/abv/src/bvl_bcomp_y.y"


void *addstr (

struct befig *ptfig,
char          object,
long           mode,
long           type,
char          flag,
char         *name,
short         left,
short         right )

  {
  void  *pnt    = NULL;
  char   porflg = 0;
  char   rinflg = 0;
  char   outflg = 0;
  char   busflg = 0;
  char   auxflg = 0;
  char   buxflg = 0;
  char   regflg = 0;
  char   lclmod;
  char   lcltyp;
  char   extname[100];
  short  i;
  short  inc = 1;

  switch (object)
    {
    case 'P':

	/* ###------------------------------------------------------### */
	/*   if object is a port ...					*/
	/* ###------------------------------------------------------### */

      porflg = 1;
      switch (mode)
        {
        case _IN:
          lclmod = 'I'; lcltyp = 'B'; rinflg = 1; break;
        case _OUT:
          switch (type)
            {
            case BIT:
              lclmod = 'O'; lcltyp = 'B'; outflg = 1; break;
            case MUX_BIT:
              lclmod = 'Z'; lcltyp = 'M'; busflg = 1; break;
            case WOR_BIT:
              lclmod = 'Z'; lcltyp = 'W'; busflg = 1; break;
            }
          break;
        case _INOUT:
          rinflg = 1;
          switch (type)
            {
            case BIT:
              lclmod = 'B'; lcltyp = 'B'; outflg = 1; break;
            case MUX_BIT:
              lclmod = 'T'; lcltyp = 'M'; busflg = 1; break;
            case WOR_BIT:
              lclmod = 'T'; lcltyp = 'W'; busflg = 1; break;
            }
          break;
        }
      break;

    case 'S':

	/* ###------------------------------------------------------### */
	/*   if object is a signal ...					*/
	/* ###------------------------------------------------------### */

      switch (type)
        {
        case BIT:
          lcltyp = 'B'; rinflg = BVL_AUXMOD; auxflg = 1; break;
        case REG_BIT:
          rinflg = 1; regflg = 1; break;
        case MUX_BIT:
          lcltyp = 'M'; rinflg = 1; buxflg = 1; break;
        case WOR_BIT:
          lcltyp = 'W'; rinflg = 1; buxflg = 1; break;
        }
      break;
    }

  if (flag == 'S')
    {
	/* ###------------------------------------------------------### */
	/*   if object is a scalar ...					*/
	/* ###------------------------------------------------------### */

    if (porflg == 1)
      ptfig->BEPOR = beh_addbepor (ptfig->BEPOR,name,lclmod,lcltyp);
    if (rinflg == 1)
      ptfig->BERIN = beh_addberin (ptfig->BERIN,name);
    if (outflg == 1)
      ptfig->BEOUT = beh_addbeout (ptfig->BEOUT,name,NULL,NULL);
    if (busflg == 1)
      ptfig->BEBUS = beh_addbebus (ptfig->BEBUS,name,NULL,NULL,lcltyp);
    if (auxflg == 1)
      ptfig->BEAUX = beh_addbeaux (ptfig->BEAUX,name,NULL,NULL);
    if (buxflg == 1)
      ptfig->BEBUX = beh_addbebux (ptfig->BEBUX,name,NULL,NULL,lcltyp);
    if (regflg == 1)
      ptfig->BEREG = beh_addbereg (ptfig->BEREG,name,NULL,NULL);

    }
  else
    {
	/* ###------------------------------------------------------### */
	/*   if object is an array ...					*/
	/* ###------------------------------------------------------### */

    if (left >= right)
      inc = -1;

    for (i=left ; i!=(right+inc) ; i+=inc)
      {
      sprintf (extname,"%s %d",name,i);

      if (porflg == 1)
        ptfig->BEPOR = beh_addbepor (ptfig->BEPOR,extname,lclmod,lcltyp);
      if (rinflg == 1)
        ptfig->BERIN = beh_addberin (ptfig->BERIN,extname);
      if (outflg == 1)
        ptfig->BEOUT = beh_addbeout (ptfig->BEOUT,extname,NULL,NULL);
      if (busflg == 1)
        ptfig->BEBUS = beh_addbebus (ptfig->BEBUS,extname,NULL,NULL,lcltyp);
      if (auxflg == 1)
        ptfig->BEAUX = beh_addbeaux (ptfig->BEAUX,extname,NULL,NULL);
      if (buxflg == 1)
        ptfig->BEBUX = beh_addbebux (ptfig->BEBUX,extname,NULL,NULL,lcltyp);
      if (regflg == 1)
        ptfig->BEREG = beh_addbereg (ptfig->BEREG,extname,NULL,NULL);
      }
    }

  if (outflg == 1)
    pnt = (void *) ptfig->BEOUT;
  if (busflg == 1)
    pnt = (void *) ptfig->BEBUS;
  if (auxflg == 1)
    pnt = (void *) ptfig->BEAUX;
  if (buxflg == 1)
    pnt = (void *) ptfig->BEBUX;
  if (regflg == 1)
    pnt = (void *) ptfig->BEREG;

  return (pnt);
  }

static long 
chkdcl (
char object,
long  mode,
long  type,
char flag,
long  kind,
char constraint,
long  *conf  )

  {
  long errflg = 0;
  long lclcnf = 0;

  if (flag != constraint)
    {
    errflg = 1;
    bvl_error (33,NULL);
    }
  else
    {
    switch (object)
      {
      case 'P':
	/* ###------------------------------------------------------### */
	/*    If object is a port :					*/
	/*       - if type is bit, no guard indication can be used	*/
	/*       - if type is wor_bit or mux_bit, bus kind must be used	*/
	/*       - other types are illegal				*/
	/* ###------------------------------------------------------### */

        switch (type)
          {
          case BIT:

            lclcnf += BVL_BITDFN + BVL_NORDFN;
            switch (mode)
              {
              case _IN :
                lclcnf += BVL_ICNDFN; break;
              case _OUT:
                lclcnf += BVL_OCNDFN; break;
              case _INOUT :
                lclcnf += BVL_BCNDFN; break;
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != 0)
              errflg = 1;
            break;

          case MUX_BIT:

            lclcnf += BVL_MUXDFN + BVL_BUSDFN;
            switch (mode)
              {
              case _OUT :
                lclcnf += BVL_OCNDFN; break;
              case _INOUT :
                lclcnf += BVL_BCNDFN; break;
              case _IN :
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != BUS)
              errflg = 1;
            break;

          case WOR_BIT:

            lclcnf += BVL_WORDFN + BVL_BUSDFN;
            switch (mode)
              {
              case _OUT :
                lclcnf += BVL_OCNDFN; break;
              case _INOUT :
                lclcnf += BVL_BCNDFN; break;
              case _IN :
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != BUS)
              errflg = 1;
            break;

          case REG_BIT:
          case NATURAL:

            errflg = 1;
            break;
          }
        if (errflg == 1)
          bvl_error (5,NULL);
        break;

      case 'G':
	/* ###------------------------------------------------------### */
	/*    If object is a generic :					*/
	/*       - only natural type is allowed				*/
	/* ###------------------------------------------------------### */

        if ((type != NATURAL) || (mode != 0) || (kind != 0))
          {
          errflg = 1;
          bvl_error (77,NULL);
          }
        break;

      case 'S':
	/* ###------------------------------------------------------### */
	/*    If object is a signal :					*/
	/*       - no mode can be specified				*/
	/*       - if type is bit no guard indication can be used	*/
	/*       - if type is wor_bit or mux_bit, bus kind must be used	*/
	/*       - if type is reg_bit, register kind must be used	*/
	/*       - other types are illegal				*/
	/* ###------------------------------------------------------### */

        switch (type)
          {
          case BIT:
            lclcnf += BVL_BITDFN + BVL_NORDFN;
            if ((mode != 0) || (kind != 0))
              errflg = 1;
            break;
          case MUX_BIT:
            lclcnf += BVL_MUXDFN + BVL_BUSDFN;
            if ((mode != 0) || (kind != BUS))
              errflg = 1;
            break;
          case WOR_BIT:
            lclcnf += BVL_WORDFN + BVL_BUSDFN;
            if ((mode != 0) || (kind != BUS))
              errflg = 1;
            break;
          case REG_BIT:
            lclcnf += BVL_RBIDFN + BVL_REGDFN;
            if ((mode != 0) || (kind != REGISTER))
              errflg = 1;
            break;
          case NATURAL:
            errflg = 1; break;
          }

        if (mode != 0)
          errflg = 1;

        if (errflg == 1)
          bvl_error (11,NULL);
        break;

      case 'C':
	/* ###------------------------------------------------------### */
	/*    If object is a constant :					*/
	/*       - only bit type without any other indication is legal	*/
	/* ###------------------------------------------------------### */

        lclcnf += BVL_CSTDFN;
        if ((type != BIT) || (mode != 0) || (kind != 0))
          {
          errflg = 1;
          bvl_error (78,NULL);
          }
        break;
      }
    }

  *conf = lclcnf ;
  return (errflg);
  }

