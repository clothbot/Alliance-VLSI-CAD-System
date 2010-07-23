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

/* All symbols defined below should begin with ctp_y_ or CTL_Y_, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define CTL_Y_BISON 1

/* Bison version.  */
#define CTL_Y_BISON_VERSION "2.3"

/* Skeleton name.  */
#define CTL_Y_SKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define CTL_Y_PURE 0

/* Using locations.  */
#define CTL_Y_LSP_NEEDED 0



/* Tokens.  */
#ifndef CTL_Y_TOKENTYPE
# define CTL_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum ctp_y_tokentype {
     _AF = 258,
     _AG = 259,
     _AX = 260,
     _AU = 261,
     _EF = 262,
     _EG = 263,
     _EX = 264,
     _EU = 265,
     Imply = 266,
     Equiv = 267,
     tok_AND = 268,
     _BEGIN = 269,
     _END = 270,
     _EQSym = 271,
     _EXIT = 272,
     _FILE = 273,
     _GESym = 274,
     _GTSym = 275,
     _IN = 276,
     _INOUT = 277,
     _LABEL = 278,
     _LESym = 279,
     _LINKAGE = 280,
     _LTSym = 281,
     _NAND = 282,
     _IFT = 283,
     _NXOR = 284,
     _NESym = 285,
     _NEXT = 286,
     _NOR = 287,
     _NOT = 288,
     _OR = 289,
     _OUT = 290,
     _XOR = 291,
     ABS = 292,
     ACCESS = 293,
     AFTER = 294,
     ALIAS = 295,
     ALL = 296,
     ARCHITECTURE = 297,
     ARRAY = 298,
     ASSERT = 299,
     ATTRIBUTE = 300,
     AbstractLit = 301,
     Ampersand = 302,
     Apostrophe = 303,
     Arrow = 304,
     BLOCK = 305,
     BODY = 306,
     BUS = 307,
     _BUFFER = 308,
     Bar = 309,
     BasedInt = 310,
     BasedReal = 311,
     BitStringLit = 312,
     _TRUE = 313,
     _FALSE = 314,
     Box = 315,
     CASE = 316,
     COMPONENT = 317,
     CONFIGURATION = 318,
     _DEFINE = 319,
     _ASSUME = 320,
     _INITIAL = 321,
     _RESET_COND = 322,
     CharacterLit = 323,
     Colon = 324,
     Comma = 325,
     DISCONNECT = 326,
     DOWNTO = 327,
     DecimalInt = 328,
     DecimalReal = 329,
     Dot = 330,
     DoubleStar = 331,
     ELSE = 332,
     ELSIF = 333,
     _ENTITY = 334,
     ERROR = 335,
     _EVENT = 336,
     _LEFT = 337,
     _LENGTH = 338,
     _RIGHT = 339,
     _HIGH = 340,
     _LOW = 341,
     FOR = 342,
     FUNCTION = 343,
     GENERATE = 344,
     GENERIC = 345,
     GUARDED = 346,
     IF = 347,
     IS = 348,
     _NS = 349,
     _PS = 350,
     _FS = 351,
     _MS = 352,
     Identifier = 353,
     _LIBRARY = 354,
     LOOP = 355,
     LeftParen = 356,
     MAP = 357,
     MOD = 358,
     Minus = 359,
     NEW = 360,
     OF = 361,
     ON = 362,
     OPEN = 363,
     OTHERS = 364,
     _PACKAGE = 365,
     PORT = 366,
     PROCEDURE = 367,
     PROCESS = 368,
     Plus = 369,
     _RANGE = 370,
     _REV_RANGE = 371,
     RECORD = 372,
     REGISTER = 373,
     REM = 374,
     REPORT = 375,
     _RETURN = 376,
     RightParen = 377,
     SELECT = 378,
     SEVERITY = 379,
     SIGNAL = 380,
     _STABLE = 381,
     SUBTYPE = 382,
     Semicolon = 383,
     Slash = 384,
     Star = 385,
     StringLit = 386,
     THEN = 387,
     TO = 388,
     TRANSPORT = 389,
     _TYPE = 390,
     UNITS = 391,
     UNTIL = 392,
     USE = 393,
     _VARIABLE = 394,
     VarAsgn = 395,
     WAIT = 396,
     WARNING = 397,
     WHEN = 398,
     WHILE = 399,
     WITH = 400
   };
#endif
/* Tokens.  */
#define _AF 258
#define _AG 259
#define _AX 260
#define _AU 261
#define _EF 262
#define _EG 263
#define _EX 264
#define _EU 265
#define Imply 266
#define Equiv 267
#define tok_AND 268
#define _BEGIN 269
#define _END 270
#define _EQSym 271
#define _EXIT 272
#define _FILE 273
#define _GESym 274
#define _GTSym 275
#define _IN 276
#define _INOUT 277
#define _LABEL 278
#define _LESym 279
#define _LINKAGE 280
#define _LTSym 281
#define _NAND 282
#define _IFT 283
#define _NXOR 284
#define _NESym 285
#define _NEXT 286
#define _NOR 287
#define _NOT 288
#define _OR 289
#define _OUT 290
#define _XOR 291
#define ABS 292
#define ACCESS 293
#define AFTER 294
#define ALIAS 295
#define ALL 296
#define ARCHITECTURE 297
#define ARRAY 298
#define ASSERT 299
#define ATTRIBUTE 300
#define AbstractLit 301
#define Ampersand 302
#define Apostrophe 303
#define Arrow 304
#define BLOCK 305
#define BODY 306
#define BUS 307
#define _BUFFER 308
#define Bar 309
#define BasedInt 310
#define BasedReal 311
#define BitStringLit 312
#define _TRUE 313
#define _FALSE 314
#define Box 315
#define CASE 316
#define COMPONENT 317
#define CONFIGURATION 318
#define _DEFINE 319
#define _ASSUME 320
#define _INITIAL 321
#define _RESET_COND 322
#define CharacterLit 323
#define Colon 324
#define Comma 325
#define DISCONNECT 326
#define DOWNTO 327
#define DecimalInt 328
#define DecimalReal 329
#define Dot 330
#define DoubleStar 331
#define ELSE 332
#define ELSIF 333
#define _ENTITY 334
#define ERROR 335
#define _EVENT 336
#define _LEFT 337
#define _LENGTH 338
#define _RIGHT 339
#define _HIGH 340
#define _LOW 341
#define FOR 342
#define FUNCTION 343
#define GENERATE 344
#define GENERIC 345
#define GUARDED 346
#define IF 347
#define IS 348
#define _NS 349
#define _PS 350
#define _FS 351
#define _MS 352
#define Identifier 353
#define _LIBRARY 354
#define LOOP 355
#define LeftParen 356
#define MAP 357
#define MOD 358
#define Minus 359
#define NEW 360
#define OF 361
#define ON 362
#define OPEN 363
#define OTHERS 364
#define _PACKAGE 365
#define PORT 366
#define PROCEDURE 367
#define PROCESS 368
#define Plus 369
#define _RANGE 370
#define _REV_RANGE 371
#define RECORD 372
#define REGISTER 373
#define REM 374
#define REPORT 375
#define _RETURN 376
#define RightParen 377
#define SELECT 378
#define SEVERITY 379
#define SIGNAL 380
#define _STABLE 381
#define SUBTYPE 382
#define Semicolon 383
#define Slash 384
#define Star 385
#define StringLit 386
#define THEN 387
#define TO 388
#define TRANSPORT 389
#define _TYPE 390
#define UNITS 391
#define UNTIL 392
#define USE 393
#define _VARIABLE 394
#define VarAsgn 395
#define WAIT 396
#define WARNING 397
#define WHEN 398
#define WHILE 399
#define WITH 400




/* Copy the first part of user declarations.  */
#line 33 "../../../src/ctp/src/ctp_y.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mut.h"
#include "aut.h"
#include "vex.h"
#include "ctl.h"

#include "ctp_utype.h"
#include "ctp_bedef.h"
#include "ctp_bspec.h"
#include "ctp_byacc.h"

#if 1
# define my_fprintf fprintf( stdout, "%s.%d:", autbasename(__FILE__,NULL), __LINE__ ); fprintf
# define my_ctp_error(N,V) \
   do { fprintf( stderr, "%s.%d:", autbasename(__FILE__,NULL), __LINE__); ctp_error(N,V); } while(0)
#else
# define my_fprintf   fprintf
# define my_ctp_error ctp_error
#endif

#ifdef CTP_DEBUG
#define CTL_Y_DEBUG 1
#endif



/* Enabling traces.  */
#ifndef CTL_Y_DEBUG
# define CTL_Y_DEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef CTL_Y_ERROR_VERBOSE
# undef CTL_Y_ERROR_VERBOSE
# define CTL_Y_ERROR_VERBOSE 1
#else
# define CTL_Y_ERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef CTL_Y_TOKEN_TABLE
# define CTL_Y_TOKEN_TABLE 0
#endif

#if ! defined CTL_Y_STYPE && ! defined CTL_Y_STYPE_IS_DECLARED
typedef union CTL_Y_STYPE
#line 62 "../../../src/ctp/src/ctp_y.y"
{
          long          valu;
          char         *text;
          chain_list   *pcha;
          ctp_name      name;
          ctp_vexstr    list;
          ctltype_list  type;
       }
/* Line 187 of yacc.c.  */
#line 424 "y.tab.c"
	CTL_Y_STYPE;
# define ctp_y_stype CTL_Y_STYPE /* obsolescent; will be withdrawn */
# define CTL_Y_STYPE_IS_DECLARED 1
# define CTL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 437 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef CTL_Y_TYPE_UINT8
typedef CTL_Y_TYPE_UINT8 ctp_y_type_uint8;
#else
typedef unsigned char ctp_y_type_uint8;
#endif

#ifdef CTL_Y_TYPE_INT8
typedef CTL_Y_TYPE_INT8 ctp_y_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char ctp_y_type_int8;
#else
typedef short int ctp_y_type_int8;
#endif

#ifdef CTL_Y_TYPE_UINT16
typedef CTL_Y_TYPE_UINT16 ctp_y_type_uint16;
#else
typedef unsigned short int ctp_y_type_uint16;
#endif

#ifdef CTL_Y_TYPE_INT16
typedef CTL_Y_TYPE_INT16 ctp_y_type_int16;
#else
typedef short int ctp_y_type_int16;
#endif

#ifndef CTL_Y_SIZE_T
# ifdef __SIZE_TYPE__
#  define CTL_Y_SIZE_T __SIZE_TYPE__
# elif defined size_t
#  define CTL_Y_SIZE_T size_t
# elif ! defined CTL_Y_SIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define CTL_Y_SIZE_T size_t
# else
#  define CTL_Y_SIZE_T unsigned int
# endif
#endif

#define CTL_Y_SIZE_MAXIMUM ((CTL_Y_SIZE_T) -1)

#ifndef CTL_Y__
# if CTL_Y_ENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define CTL_Y__(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef CTL_Y__
#  define CTL_Y__(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define CTL_Y_USE(e) ((void) (e))
#else
# define CTL_Y_USE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define CTL_Y_ID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
CTL_Y_ID (int i)
#else
static int
CTL_Y_ID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined ctp_y_overflow || CTL_Y_ERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef CTL_Y_STACK_USE_ALLOCA
#  if CTL_Y_STACK_USE_ALLOCA
#   ifdef __GNUC__
#    define CTL_Y_STACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define CTL_Y_STACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define CTL_Y_STACK_ALLOC alloca
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

# ifdef CTL_Y_STACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define CTL_Y_STACK_FREE(Ptr) do { /* empty */; } while (CTL_Y_ID (0))
#  ifndef CTL_Y_STACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define CTL_Y_STACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define CTL_Y_STACK_ALLOC CTL_Y_MALLOC
#  define CTL_Y_STACK_FREE CTL_Y_FREE
#  ifndef CTL_Y_STACK_ALLOC_MAXIMUM
#   define CTL_Y_STACK_ALLOC_MAXIMUM CTL_Y_SIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined CTL_Y_MALLOC || defined malloc) \
	     && (defined CTL_Y_FREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef CTL_Y_MALLOC
#   define CTL_Y_MALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (CTL_Y_SIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef CTL_Y_FREE
#   define CTL_Y_FREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined ctp_y_overflow || CTL_Y_ERROR_VERBOSE */


#if (! defined ctp_y_overflow \
     && (! defined __cplusplus \
	 || (defined CTL_Y_STYPE_IS_TRIVIAL && CTL_Y_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union ctp_y_alloc
{
  ctp_y_type_int16 ctp_y_ss;
  CTL_Y_STYPE ctp_y_vs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define CTL_Y_STACK_GAP_MAXIMUM (sizeof (union ctp_y_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define CTL_Y_STACK_BYTES(N) \
     ((N) * (sizeof (ctp_y_type_int16) + sizeof (CTL_Y_STYPE)) \
      + CTL_Y_STACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef CTL_Y_COPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define CTL_Y_COPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define CTL_Y_COPY(To, From, Count)		\
      do					\
	{					\
	  CTL_Y_SIZE_T ctp_y_i;				\
	  for (ctp_y_i = 0; ctp_y_i < (Count); ctp_y_i++)	\
	    (To)[ctp_y_i] = (From)[ctp_y_i];		\
	}					\
      while (CTL_Y_ID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables CTL_Y_SIZE and CTL_Y_STACKSIZE give the old and new number of
   elements in the stack, and CTL_Y_PTR gives the new location of the
   stack.  Advance CTL_Y_PTR to a properly aligned location for the next
   stack.  */
# define CTL_Y_STACK_RELOCATE(Stack)					\
    do									\
      {									\
	CTL_Y_SIZE_T ctp_y_newbytes;						\
	CTL_Y_COPY (&ctp_y_ptr->Stack, Stack, ctp_y_size);				\
	Stack = &ctp_y_ptr->Stack;						\
	ctp_y_newbytes = ctp_y_stacksize * sizeof (*Stack) + CTL_Y_STACK_GAP_MAXIMUM; \
	ctp_y_ptr += ctp_y_newbytes / sizeof (*ctp_y_ptr);				\
      }									\
    while (CTL_Y_ID (0))

#endif

/* CTL_Y_FINAL -- State number of the termination state.  */
#define CTL_Y_FINAL  3
/* CTL_Y_LAST -- Last index in CTL_Y_TABLE.  */
#define CTL_Y_LAST   376

/* CTL_Y_NTOKENS -- Number of terminals.  */
#define CTL_Y_NTOKENS  146
/* CTL_Y_NNTS -- Number of nonterminals.  */
#define CTL_Y_NNTS  70
/* CTL_Y_NRULES -- Number of rules.  */
#define CTL_Y_NRULES  151
/* CTL_Y_NRULES -- Number of states.  */
#define CTL_Y_NSTATES  251

/* CTL_Y_TRANSLATE(CTL_Y_LEX) -- Bison symbol number corresponding to CTL_Y_LEX.  */
#define CTL_Y_UNDEFTOK  2
#define CTL_Y_MAXUTOK   400

#define CTL_Y_TRANSLATE(CTL_Y_X)						\
  ((unsigned int) (CTL_Y_X) <= CTL_Y_MAXUTOK ? ctp_y_translate[CTL_Y_X] : CTL_Y_UNDEFTOK)

/* CTL_Y_TRANSLATE[CTL_Y_LEX] -- Bison symbol number corresponding to CTL_Y_LEX.  */
static const ctp_y_type_uint8 ctp_y_translate[] =
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
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145
};

#if CTL_Y_DEBUG
/* CTL_Y_PRHS[CTL_Y_N] -- Index of the first RHS symbol of rule number CTL_Y_N in
   CTL_Y_RHS.  */
static const ctp_y_type_uint16 ctp_y_prhs[] =
{
       0,     0,     3,     4,     7,    13,    15,    16,    19,    21,
      23,    25,    27,    29,    31,    33,    36,    44,    49,    54,
      59,    62,    69,    71,    77,    79,    81,    84,    90,    94,
      97,    99,   101,   106,   107,   111,   113,   115,   117,   119,
     124,   128,   130,   133,   135,   136,   138,   140,   144,   147,
     149,   153,   155,   157,   159,   161,   162,   165,   167,   170,
     175,   177,   179,   181,   183,   187,   191,   195,   199,   201,
     205,   209,   213,   217,   224,   231,   235,   239,   241,   245,
     247,   249,   252,   256,   258,   260,   262,   264,   266,   268,
     270,   272,   274,   276,   280,   282,   286,   289,   292,   295,
     298,   301,   304,   307,   310,   312,   314,   316,   318,   322,
     324,   326,   328,   330,   332,   334,   336,   338,   340,   342,
     344,   346,   348,   350,   355,   356,   360,   362,   366,   368,
     370,   372,   374,   377,   384,   388,   390,   392,   394,   396,
     398,   400,   402,   404,   406,   407,   411,   412,   416,   418,
     420,   422
};

/* CTL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const ctp_y_type_int16 ctp_y_rhs[] =
{
     147,     0,    -1,    -1,   148,   149,    -1,   150,    14,   180,
     215,   214,    -1,   151,    -1,    -1,   151,   152,    -1,   153,
      -1,   158,    -1,   154,    -1,   155,    -1,   156,    -1,   159,
      -1,   162,    -1,     1,   214,    -1,    64,    98,    69,   179,
     174,   157,   214,    -1,    65,    98,   157,   214,    -1,    66,
      98,   157,   214,    -1,    67,    98,   157,   214,    -1,   140,
     184,    -1,   139,   209,    69,   179,   174,   214,    -1,   160,
      -1,   135,    98,    93,   161,   214,    -1,   165,    -1,   169,
      -1,     1,   214,    -1,   127,    98,    93,   163,   214,    -1,
     164,   179,   174,    -1,   179,   174,    -1,   212,    -1,   166,
      -1,   101,   168,   167,   213,    -1,    -1,   167,    70,   168,
      -1,    98,    -1,    68,    -1,   170,    -1,   171,    -1,    43,
     172,   106,   163,    -1,   101,   173,   213,    -1,   177,    -1,
     204,   176,    -1,   179,    -1,    -1,   175,    -1,   176,    -1,
     101,   177,   213,    -1,   115,   177,    -1,   207,    -1,   190,
     178,   190,    -1,   133,    -1,    72,    -1,   212,    -1,   181,
      -1,    -1,   181,   182,    -1,   183,    -1,     1,   214,    -1,
     212,    69,   184,   214,    -1,   185,    -1,   186,    -1,   187,
      -1,   188,    -1,   189,    13,   189,    -1,   185,    13,   189,
      -1,   189,    34,   189,    -1,   186,    34,   189,    -1,   189,
      -1,   189,    27,   189,    -1,   189,    32,   189,    -1,   189,
      29,   189,    -1,   189,    28,   189,    -1,    10,   101,   189,
      70,   189,   213,    -1,     6,   101,   189,    70,   189,   213,
      -1,   189,    36,   189,    -1,   188,    36,   189,    -1,   190,
      -1,   190,   199,   190,    -1,   191,    -1,   195,    -1,   193,
     195,    -1,   191,   192,   195,    -1,   114,    -1,   104,    -1,
      47,    -1,   114,    -1,   104,    -1,   130,    -1,   129,    -1,
     103,    -1,   119,    -1,   196,    -1,   195,   194,   196,    -1,
     197,    -1,   197,    76,   197,    -1,    37,   197,    -1,    33,
     197,    -1,     4,   197,    -1,     3,   197,    -1,     5,   197,
      -1,     7,   197,    -1,     8,   197,    -1,     9,   197,    -1,
     200,    -1,   201,    -1,   204,    -1,   198,    -1,   204,    48,
     201,    -1,    16,    -1,    30,    -1,    19,    -1,    20,    -1,
      24,    -1,    26,    -1,    12,    -1,    11,    -1,    46,    -1,
      68,    -1,   131,    -1,    57,    -1,    58,    -1,    59,    -1,
     101,   203,   202,   213,    -1,    -1,   202,    70,   203,    -1,
     184,    -1,   109,    49,   184,    -1,   212,    -1,   205,    -1,
     206,    -1,   207,    -1,   212,   201,    -1,   212,   101,   190,
     178,   190,   213,    -1,   204,    48,   208,    -1,   126,    -1,
      81,    -1,    82,    -1,    84,    -1,    86,    -1,    85,    -1,
      83,    -1,   115,    -1,   116,    -1,    -1,    98,   210,   211,
      -1,    -1,   211,    70,    98,    -1,    98,    -1,   122,    -1,
     128,    -1,    15,    -1
};

/* CTL_Y_RLINE[CTL_Y_N] -- source line where rule number CTL_Y_N was defined.  */
static const ctp_y_type_uint16 ctp_y_rline[] =
{
       0,   275,   275,   275,   316,   326,   329,   331,   336,   337,
     338,   339,   340,   341,   342,   343,   351,   419,   464,   509,
     555,   561,   640,   644,   667,   669,   671,   676,   698,   718,
     738,   744,   750,   807,   809,   816,   820,   827,   834,   839,
     895,   902,   904,   909,   916,   921,   928,   933,   942,   948,
     958,   995,   997,  1004,  1022,  1025,  1027,  1032,  1033,  1039,
    1062,  1064,  1066,  1068,  1073,  1079,  1088,  1094,  1103,  1105,
    1111,  1117,  1123,  1129,  1138,  1150,  1156,  1165,  1167,  1176,
    1181,  1183,  1195,  1204,  1206,  1208,  1212,  1214,  1219,  1221,
    1223,  1225,  1230,  1232,  1241,  1245,  1251,  1256,  1261,  1266,
    1271,  1276,  1281,  1286,  1294,  1304,  1331,  1424,  1440,  1487,
    1489,  1491,  1493,  1495,  1497,  1499,  1501,  1506,  1508,  1511,
    1513,  1515,  1517,  1522,  1538,  1541,  1555,  1564,  1578,  1595,
    1597,  1599,  1604,  1679,  1719,  1798,  1799,  1800,  1801,  1802,
    1803,  1804,  1805,  1806,  1811,  1810,  1815,  1817,  1826,  1831,
    1836,  1841
};
#endif

#if CTL_Y_DEBUG || CTL_Y_ERROR_VERBOSE || CTL_Y_TOKEN_TABLE
/* CTL_Y_TNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at CTL_Y_NTOKENS, nonterminals.  */
static const char *const ctp_y_tname[] =
{
  "$end", "error", "$undefined", "_AF", "_AG", "_AX", "_AU", "_EF", "_EG",
  "_EX", "_EU", "Imply", "Equiv", "tok_AND", "_BEGIN", "_END", "_EQSym",
  "_EXIT", "_FILE", "_GESym", "_GTSym", "_IN", "_INOUT", "_LABEL",
  "_LESym", "_LINKAGE", "_LTSym", "_NAND", "_IFT", "_NXOR", "_NESym",
  "_NEXT", "_NOR", "_NOT", "_OR", "_OUT", "_XOR", "ABS", "ACCESS", "AFTER",
  "ALIAS", "ALL", "ARCHITECTURE", "ARRAY", "ASSERT", "ATTRIBUTE",
  "AbstractLit", "Ampersand", "Apostrophe", "Arrow", "BLOCK", "BODY",
  "BUS", "_BUFFER", "Bar", "BasedInt", "BasedReal", "BitStringLit",
  "_TRUE", "_FALSE", "Box", "CASE", "COMPONENT", "CONFIGURATION",
  "_DEFINE", "_ASSUME", "_INITIAL", "_RESET_COND", "CharacterLit", "Colon",
  "Comma", "DISCONNECT", "DOWNTO", "DecimalInt", "DecimalReal", "Dot",
  "DoubleStar", "ELSE", "ELSIF", "_ENTITY", "ERROR", "_EVENT", "_LEFT",
  "_LENGTH", "_RIGHT", "_HIGH", "_LOW", "FOR", "FUNCTION", "GENERATE",
  "GENERIC", "GUARDED", "IF", "IS", "_NS", "_PS", "_FS", "_MS",
  "Identifier", "_LIBRARY", "LOOP", "LeftParen", "MAP", "MOD", "Minus",
  "NEW", "OF", "ON", "OPEN", "OTHERS", "_PACKAGE", "PORT", "PROCEDURE",
  "PROCESS", "Plus", "_RANGE", "_REV_RANGE", "RECORD", "REGISTER", "REM",
  "REPORT", "_RETURN", "RightParen", "SELECT", "SEVERITY", "SIGNAL",
  "_STABLE", "SUBTYPE", "Semicolon", "Slash", "Star", "StringLit", "THEN",
  "TO", "TRANSPORT", "_TYPE", "UNITS", "UNTIL", "USE", "_VARIABLE",
  "VarAsgn", "WAIT", "WARNING", "WHEN", "WHILE", "WITH", "$accept",
  "ctl_file", "@1", "ctl_body", "ctl_declarative_part",
  "..block_declarative_item..", "block_declarative_item",
  "constant_declaration", "assumption_declaration", "initial_declaration",
  "reset_cond_declaration", "constant_VarAsgn__expression",
  "variable_declaration", "type_declaration", "full_type_declaration",
  "type_definition", "subtype_declaration", "subtype_indication",
  "type_or_function_name", "scalar_type_definition",
  "enumeration_type_definition", "...enumeration_literal..",
  "enumeration_literal", "composite_type_definition",
  "array_type_definition", "constrained_array_definition",
  "index_constraint", "discrete_range", ".constraint.", "constraint",
  "range_constraint", "range", "direction", "type_mark",
  "ctl_statement_part", "..concurrent_statement..", "concurrent_statement",
  "formula_assignment_statement", "expression",
  "relation..AND__relation..", "relation..OR__relation..",
  "relation.NAND_NOR_NXOR_relation.", "relation..XOR__relation..",
  "relation", "simple_expression", ".sign.term..add_op__term..",
  "adding_operator", "sign", "multiplying_operator", "term", "factor",
  "primary", "qualified_expression", "relational_operator", "literal",
  "aggregate", "...element_association..", "element_association", "name",
  "indexed_name", "slice_name", "attribute_name", "attribute_designator",
  "identifier_list", "@2", "...identifier..", "simple_name",
  "RightParen_ERR", "Semicolon_ERR", "END_ERR", 0
};
#endif

# ifdef CTL_Y_PRINT
/* CTL_Y_TOKNUM[CTL_Y_LEX-NUM] -- Internal token number corresponding to
   token CTL_Y_LEX-NUM.  */
static const ctp_y_type_uint16 ctp_y_toknum[] =
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
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400
};
# endif

/* CTL_Y_R1[CTL_Y_N] -- Symbol number of symbol that rule CTL_Y_N derives.  */
static const ctp_y_type_uint8 ctp_y_r1[] =
{
       0,   146,   148,   147,   149,   150,   151,   151,   152,   152,
     152,   152,   152,   152,   152,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   161,   161,   162,   163,   163,
     164,   165,   166,   167,   167,   168,   168,   169,   170,   171,
     172,   173,   173,   173,   174,   174,   175,   175,   176,   177,
     177,   178,   178,   179,   180,   181,   181,   182,   182,   183,
     184,   184,   184,   184,   185,   185,   186,   186,   187,   187,
     187,   187,   187,   187,   187,   188,   188,   189,   189,   190,
     191,   191,   191,   192,   192,   192,   193,   193,   194,   194,
     194,   194,   195,   195,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   197,   197,   197,   197,   198,   199,
     199,   199,   199,   199,   199,   199,   199,   200,   200,   200,
     200,   200,   200,   201,   202,   202,   203,   203,   204,   204,
     204,   204,   205,   206,   207,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   210,   209,   211,   211,   212,   213,
     214,   215
};

/* CTL_Y_R2[CTL_Y_N] -- Number of symbols composing right hand side of rule CTL_Y_N.  */
static const ctp_y_type_uint8 ctp_y_r2[] =
{
       0,     2,     0,     2,     5,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     7,     4,     4,     4,
       2,     6,     1,     5,     1,     1,     2,     5,     3,     2,
       1,     1,     4,     0,     3,     1,     1,     1,     1,     4,
       3,     1,     2,     1,     0,     1,     1,     3,     2,     1,
       3,     1,     1,     1,     1,     0,     2,     1,     2,     4,
       1,     1,     1,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     6,     6,     3,     3,     1,     3,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     3,     1,     3,     1,     1,
       1,     1,     2,     6,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     1,
       1,     1
};

/* CTL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when CTL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const ctp_y_type_uint8 ctp_y_defact[] =
{
       2,     0,     6,     1,     3,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,    10,    11,
      12,     9,    13,    22,    14,     0,     0,   150,    15,     0,
       0,     0,     0,     0,     0,   144,     0,   151,     0,     0,
     148,    56,    57,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,     4,    58,     0,    44,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,   120,
     121,   122,   118,     0,    87,    86,   119,    20,    60,    61,
      62,    63,    68,    77,    79,     0,    80,    92,    94,   107,
     104,   105,   106,   129,   130,   131,   128,    17,    18,    19,
       0,     0,    44,    53,     0,     0,     0,     0,    24,    31,
      25,    37,    38,   145,    44,     0,     0,     0,     0,    45,
      46,    99,    98,   100,     0,   101,   102,   103,     0,    97,
      96,     0,   126,   124,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,   115,   109,   111,   112,   113,
     114,   110,     0,    85,    84,    83,     0,    81,    90,    91,
      89,    88,     0,     0,     0,     0,   132,    27,    44,    29,
      26,     0,     0,    36,    35,    33,    23,     0,     0,    59,
       0,     0,   131,    48,     0,     0,     0,     0,     0,    65,
      67,    76,    64,    69,    72,    71,    70,    66,    75,    78,
      82,    93,    95,   136,   137,   141,   138,   140,   139,   142,
     143,   135,   108,   134,    77,    28,     0,    41,    43,   106,
     128,     0,     0,   147,    21,   149,    47,    52,    51,     0,
      16,     0,     0,   127,     0,   123,     0,    40,    42,    39,
       0,    32,    50,     0,     0,   125,     0,    34,    74,    73,
     133
};

/* CTL_Y_DEFGOTO[NTERM-NUM].  */
static const ctp_y_type_int16 ctp_y_defgoto[] =
{
      -1,     1,     2,     4,     5,     6,    16,    17,    18,    19,
      20,    46,    21,    22,    23,   107,    24,   100,   101,   108,
     109,   222,   175,   110,   111,   112,   172,   216,   118,   119,
     120,   180,   229,   102,    25,    26,    41,    42,   132,    78,
      79,    80,    81,    82,    83,    84,   156,    85,   162,    86,
      87,    88,    89,   152,    90,    91,   188,   133,    92,    93,
      94,    95,   213,    36,    51,   113,    96,   226,    28,    38
};

/* CTL_Y_PACT[STATE-NUM] -- Index in CTL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define CTL_Y_PACT_NINF -99
static const ctp_y_type_int16 ctp_y_pact[] =
{
     -99,    21,   -99,   -99,   -99,    14,    15,   -99,   -98,   -57,
     -43,   -42,   -38,   -34,   -33,   -30,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,    44,     2,   -99,   -99,    -8,
     -71,   -71,   -71,   -22,    -7,   -99,    20,   -99,   -98,   -98,
     -99,   -99,   -99,    22,    -3,   118,   -98,   -98,   -98,    -3,
       7,   -99,    -3,   -99,   -99,   118,   -49,   -99,   110,   110,
     110,     3,   110,   110,   110,    10,   110,   110,   -99,   -99,
     -99,   -99,   -99,    39,   -99,   -99,   -99,   -99,   100,    81,
     -99,    82,   231,   287,   -20,   196,    62,   -99,    43,   -99,
     -99,   -99,    96,   -99,   -99,   -99,    37,   -99,   -99,   -99,
     -98,    -3,   -49,    51,   -98,    59,   -44,   -98,   -99,   -99,
     -99,   -99,   -99,    91,   -49,   -98,   126,   126,   -71,   -99,
     -99,   -99,   -99,   -99,   126,   -99,   -99,   -99,   126,   -99,
     -99,   103,   -99,   -99,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   126,   -99,   -99,   -99,   196,    62,   -99,   -99,
     -99,   -99,   196,   110,   207,    39,   -99,   -99,   -49,   -99,
     -99,   126,    60,   -99,   -99,   -99,   -99,    73,   -98,   -99,
      52,   -60,   -23,   -99,   -98,   112,   117,   118,   -45,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
      62,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,    90,   -99,    52,   -99,   -99,   -28,
     -48,    -3,   -19,   -99,   -99,   -99,   -99,   -99,   -99,   126,
     -99,   126,   126,   -99,    39,   -99,   126,   -99,   -99,   -99,
     -44,   -99,   -99,    52,    52,   -99,    52,   -99,   -99,   -99,
     -99
};

/* CTL_Y_PGOTO[NTERM-NUM].  */
static const ctp_y_type_int16 ctp_y_pgoto[] =
{
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -25,   -99,   -99,   -99,   -99,   -99,   -32,   -99,   -99,
     -99,   -99,   -67,   -99,   -99,   -99,   -99,   -99,   -80,   -99,
     -31,   -79,   -24,   -39,   -99,   -99,   -99,   -99,   -41,   -99,
     -99,   -99,   -99,   144,    41,   -99,   -99,   -99,   -99,   -66,
      18,   -27,   -99,   -99,   -99,   -81,   -99,   -36,    25,   -99,
     -99,   -59,   -99,   -99,   -99,   -99,   -26,    -9,   -37,   -99
};

/* CTL_Y_TABLE[CTL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what CTL_Y_DEFACT says.
   If CTL_Y_TABLE_NINF, syntax error.  */
#define CTL_Y_TABLE_NINF -55
static const ctp_y_type_int16 ctp_y_table[] =
{
      43,    53,    54,    39,    77,    56,    47,    48,   104,    97,
      98,    99,   227,   114,   115,   166,     8,   -54,    57,   157,
     164,     3,   169,   103,   173,   234,    57,   153,     7,    -5,
      27,   121,   122,   123,   178,   125,   126,   127,   183,   129,
     130,    29,    58,    59,    60,    61,    62,    63,    64,    65,
     105,   240,   116,   165,   174,    30,    31,   182,   182,    37,
      32,    44,   168,   167,    33,    34,   117,   170,    35,    45,
     176,    49,    66,   228,   -53,    57,    67,   225,   179,     9,
      10,    11,    12,   212,   154,    68,    50,   117,   215,    52,
     200,    55,   217,   184,   155,    40,    69,    70,    71,   -49,
      40,   144,   145,   225,   124,   -49,   146,    72,   106,   147,
     148,   128,   182,   134,   149,   135,   150,   -49,   136,   163,
     151,    58,    59,    60,    61,    62,    63,    64,    65,    58,
      59,    60,   218,    62,    63,    64,   202,    40,   165,   166,
      73,   224,    13,    74,   164,   220,   233,   230,   131,   -30,
      14,    66,   187,    75,    15,    67,    68,   181,   181,    66,
     171,   177,   227,    67,    68,   158,   221,    69,    70,    71,
      76,   223,    68,   247,   225,    69,    70,    71,    72,   235,
     201,   159,   231,    69,    70,    71,    72,   232,   238,   239,
     236,   160,   161,   199,    72,   103,   219,     0,   245,    58,
      59,    60,     0,    62,    63,    64,   214,   237,    40,     0,
       0,    73,   181,   241,     0,     0,    40,     0,     0,    73,
       0,     0,    74,   228,    40,     0,     0,    73,     0,    66,
      74,     0,    75,    67,   248,   249,     0,   250,     0,     0,
      75,    76,    68,     0,   137,     0,     0,     0,     0,    76,
       0,     0,     0,    69,    70,    71,     0,    76,   138,   139,
     140,     0,     0,   141,    72,   142,     0,   143,   185,     0,
     242,     0,   186,     0,     0,     0,     0,   246,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   203,   204,
     205,   206,   207,   208,    40,     0,     0,    73,   144,   145,
       0,     0,     0,   146,     0,     0,   147,   148,    73,     0,
       0,   149,     0,   150,     0,     0,     0,   151,     0,     0,
       0,     0,   209,   210,     0,     0,     0,    76,     0,     0,
       0,     0,     0,   211,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   244
};

static const ctp_y_type_int16 ctp_y_check[] =
{
      26,    38,    39,     1,    45,    44,    31,    32,     1,    46,
      47,    48,    72,    52,    55,    96,     1,    15,    44,    85,
      48,     0,   102,    49,    68,    70,    52,    47,    14,    14,
     128,    58,    59,    60,   114,    62,    63,    64,   117,    66,
      67,    98,     3,     4,     5,     6,     7,     8,     9,    10,
      43,    70,   101,   101,    98,    98,    98,   116,   117,    15,
      98,    69,   101,   100,    98,    98,   115,   104,    98,   140,
     107,    93,    33,   133,   122,   101,    37,   122,   115,    64,
      65,    66,    67,   164,   104,    46,    93,   115,   168,    69,
     156,    69,   171,   118,   114,    98,    57,    58,    59,   122,
      98,    11,    12,   122,   101,   128,    16,    68,   101,    19,
      20,   101,   171,    13,    24,    34,    26,   140,    36,    76,
      30,     3,     4,     5,     6,     7,     8,     9,    10,     3,
       4,     5,   171,     7,     8,     9,   163,    98,   101,   220,
     101,   178,   127,   104,    48,   171,   187,   184,   109,    98,
     135,    33,    49,   114,   139,    37,    46,   116,   117,    33,
     101,    70,    72,    37,    46,   103,   106,    57,    58,    59,
     131,    98,    46,   240,   122,    57,    58,    59,    68,   188,
     162,   119,    70,    57,    58,    59,    68,    70,   219,   221,
     214,   129,   130,   152,    68,   221,   171,    -1,   234,     3,
       4,     5,    -1,     7,     8,     9,   165,   216,    98,    -1,
      -1,   101,   171,   222,    -1,    -1,    98,    -1,    -1,   101,
      -1,    -1,   104,   133,    98,    -1,    -1,   101,    -1,    33,
     104,    -1,   114,    37,   243,   244,    -1,   246,    -1,    -1,
     114,   131,    46,    -1,    13,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    -1,    57,    58,    59,    -1,   131,    27,    28,
      29,    -1,    -1,    32,    68,    34,    -1,    36,   124,    -1,
     229,    -1,   128,    -1,    -1,    -1,    -1,   236,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,    81,    82,
      83,    84,    85,    86,    98,    -1,    -1,   101,    11,    12,
      -1,    -1,    -1,    16,    -1,    -1,    19,    20,   101,    -1,
      -1,    24,    -1,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,   115,   116,    -1,    -1,    -1,   131,    -1,    -1,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232
};

/* CTL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const ctp_y_type_uint8 ctp_y_stos[] =
{
       0,   147,   148,     0,   149,   150,   151,    14,     1,    64,
      65,    66,    67,   127,   135,   139,   152,   153,   154,   155,
     156,   158,   159,   160,   162,   180,   181,   128,   214,    98,
      98,    98,    98,    98,    98,    98,   209,    15,   215,     1,
      98,   182,   183,   212,    69,   140,   157,   157,   157,    93,
      93,   210,    69,   214,   214,    69,   179,   212,     3,     4,
       5,     6,     7,     8,     9,    10,    33,    37,    46,    57,
      58,    59,    68,   101,   104,   114,   131,   184,   185,   186,
     187,   188,   189,   190,   191,   193,   195,   196,   197,   198,
     200,   201,   204,   205,   206,   207,   212,   214,   214,   214,
     163,   164,   179,   212,     1,    43,   101,   161,   165,   166,
     169,   170,   171,   211,   179,   184,   101,   115,   174,   175,
     176,   197,   197,   197,   101,   197,   197,   197,   101,   197,
     197,   109,   184,   203,    13,    34,    36,    13,    27,    28,
      29,    32,    34,    36,    11,    12,    16,    19,    20,    24,
      26,    30,   199,    47,   104,   114,   192,   195,   103,   119,
     129,   130,   194,    76,    48,   101,   201,   214,   179,   174,
     214,   101,   172,    68,    98,   168,   214,    70,   174,   214,
     177,   190,   207,   177,   157,   189,   189,    49,   202,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   190,
     195,   196,   197,    81,    82,    83,    84,    85,    86,   115,
     116,   126,   201,   208,   190,   174,   173,   177,   179,   204,
     212,   106,   167,    98,   214,   122,   213,    72,   133,   178,
     214,    70,    70,   184,    70,   213,   178,   213,   176,   163,
      70,   213,   190,   189,   189,   203,   190,   168,   213,   213,
     213
};

#define ctp_y_errok		(ctp_y_errstatus = 0)
#define ctp_y_clearin	(ctp_y_char = CTL_Y_EMPTY)
#define CTL_Y_EMPTY		(-2)
#define CTL_Y_EOF		0

#define CTL_Y_ACCEPT	goto ctp_y_acceptlab
#define CTL_Y_ABORT		goto ctp_y_abortlab
#define CTL_Y_ERROR		goto ctp_y_errorlab


/* Like CTL_Y_ERROR except do call ctp_y_error.  This remains here temporarily
   to ease the transition to the new meaning of CTL_Y_ERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define CTL_Y_FAIL		goto ctp_y_errlab

#define CTL_Y_RECOVERING()  (!!ctp_y_errstatus)

#define CTL_Y_BACKUP(Token, Value)					\
do								\
  if (ctp_y_char == CTL_Y_EMPTY && ctp_y_len == 1)				\
    {								\
      ctp_y_char = (Token);						\
      ctp_y_lval = (Value);						\
      ctp_y_token = CTL_Y_TRANSLATE (ctp_y_char);				\
      CTL_Y_POPSTACK (1);						\
      goto ctp_y_backup;						\
    }								\
  else								\
    {								\
      ctp_y_error (CTL_Y__("syntax error: cannot back up")); \
      CTL_Y_ERROR;							\
    }								\
while (CTL_Y_ID (0))


#define CTL_Y_TERROR	1
#define CTL_Y_ERRCODE	256


/* CTL_Y_LLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define CTL_Y_RHSLOC(Rhs, K) ((Rhs)[K])
#ifndef CTL_Y_LLOC_DEFAULT
# define CTL_Y_LLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (CTL_Y_ID (N))                                                    \
	{								\
	  (Current).first_line   = CTL_Y_RHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = CTL_Y_RHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = CTL_Y_RHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = CTL_Y_RHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    CTL_Y_RHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    CTL_Y_RHSLOC (Rhs, 0).last_column;				\
	}								\
    while (CTL_Y_ID (0))
#endif


/* CTL_Y__LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef CTL_Y__LOCATION_PRINT
# if CTL_Y_LTYPE_IS_TRIVIAL
#  define CTL_Y__LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define CTL_Y__LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* CTL_Y_LEX -- calling `ctp_y_lex' with the right arguments.  */

#ifdef CTL_Y_LEX_PARAM
# define CTL_Y_LEX ctp_y_lex (CTL_Y_LEX_PARAM)
#else
# define CTL_Y_LEX ctp_y_lex ()
#endif

/* Enable debugging if requested.  */
#if CTL_Y_DEBUG

# ifndef CTL_Y_FPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define CTL_Y_FPRINTF fprintf
# endif

# define CTL_Y_DPRINTF(Args)			\
do {						\
  if (ctp_y_debug)					\
    CTL_Y_FPRINTF Args;				\
} while (CTL_Y_ID (0))

# define CTL_Y__SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (ctp_y_debug)								  \
    {									  \
      CTL_Y_FPRINTF (stderr, "%s ", Title);					  \
      ctp_y__symbol_print (stderr,						  \
		  Type, Value); \
      CTL_Y_FPRINTF (stderr, "\n");						  \
    }									  \
} while (CTL_Y_ID (0))


/*--------------------------------.
| Print this symbol on CTL_Y_OUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ctp_y__symbol_value_print (FILE *ctp_y_output, int ctp_y_type, CTL_Y_STYPE const * const ctp_y_valuep)
#else
static void
ctp_y__symbol_value_print (ctp_y_output, ctp_y_type, ctp_y_valuep)
    FILE *ctp_y_output;
    int ctp_y_type;
    CTL_Y_STYPE const * const ctp_y_valuep;
#endif
{
  if (!ctp_y_valuep)
    return;
# ifdef CTL_Y_PRINT
  if (ctp_y_type < CTL_Y_NTOKENS)
    CTL_Y_PRINT (ctp_y_output, ctp_y_toknum[ctp_y_type], *ctp_y_valuep);
# else
  CTL_Y_USE (ctp_y_output);
# endif
  switch (ctp_y_type)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on CTL_Y_OUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ctp_y__symbol_print (FILE *ctp_y_output, int ctp_y_type, CTL_Y_STYPE const * const ctp_y_valuep)
#else
static void
ctp_y__symbol_print (ctp_y_output, ctp_y_type, ctp_y_valuep)
    FILE *ctp_y_output;
    int ctp_y_type;
    CTL_Y_STYPE const * const ctp_y_valuep;
#endif
{
  if (ctp_y_type < CTL_Y_NTOKENS)
    CTL_Y_FPRINTF (ctp_y_output, "token %s (", ctp_y_tname[ctp_y_type]);
  else
    CTL_Y_FPRINTF (ctp_y_output, "nterm %s (", ctp_y_tname[ctp_y_type]);

  ctp_y__symbol_value_print (ctp_y_output, ctp_y_type, ctp_y_valuep);
  CTL_Y_FPRINTF (ctp_y_output, ")");
}

/*------------------------------------------------------------------.
| ctp_y__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ctp_y__stack_print (ctp_y_type_int16 *bottom, ctp_y_type_int16 *top)
#else
static void
ctp_y__stack_print (bottom, top)
    ctp_y_type_int16 *bottom;
    ctp_y_type_int16 *top;
#endif
{
  CTL_Y_FPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    CTL_Y_FPRINTF (stderr, " %d", *bottom);
  CTL_Y_FPRINTF (stderr, "\n");
}

# define CTL_Y__STACK_PRINT(Bottom, Top)				\
do {								\
  if (ctp_y_debug)							\
    ctp_y__stack_print ((Bottom), (Top));				\
} while (CTL_Y_ID (0))


/*------------------------------------------------.
| Report that the CTL_Y_RULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ctp_y__reduce_print (CTL_Y_STYPE *ctp_y_vsp, int ctp_y_rule)
#else
static void
ctp_y__reduce_print (ctp_y_vsp, ctp_y_rule)
    CTL_Y_STYPE *ctp_y_vsp;
    int ctp_y_rule;
#endif
{
  int ctp_y_nrhs = ctp_y_r2[ctp_y_rule];
  int ctp_y_i;
  unsigned long int ctp_y_lno = ctp_y_rline[ctp_y_rule];
  CTL_Y_FPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     ctp_y_rule - 1, ctp_y_lno);
  /* The symbols being reduced.  */
  for (ctp_y_i = 0; ctp_y_i < ctp_y_nrhs; ctp_y_i++)
    {
      fprintf (stderr, "   $%d = ", ctp_y_i + 1);
      ctp_y__symbol_print (stderr, ctp_y_rhs[ctp_y_prhs[ctp_y_rule] + ctp_y_i],
		       &(ctp_y_vsp[(ctp_y_i + 1) - (ctp_y_nrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define CTL_Y__REDUCE_PRINT(Rule)		\
do {					\
  if (ctp_y_debug)				\
    ctp_y__reduce_print (ctp_y_vsp, Rule); \
} while (CTL_Y_ID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int ctp_y_debug;
#else /* !CTL_Y_DEBUG */
# define CTL_Y_DPRINTF(Args)
# define CTL_Y__SYMBOL_PRINT(Title, Type, Value, Location)
# define CTL_Y__STACK_PRINT(Bottom, Top)
# define CTL_Y__REDUCE_PRINT(Rule)
#endif /* !CTL_Y_DEBUG */


/* CTL_Y_INITDEPTH -- initial size of the parser's stacks.  */
#ifndef	CTL_Y_INITDEPTH
# define CTL_Y_INITDEPTH 200
#endif

/* CTL_Y_MAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   CTL_Y_STACK_ALLOC_MAXIMUM < CTL_Y_STACK_BYTES (CTL_Y_MAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef CTL_Y_MAXDEPTH
# define CTL_Y_MAXDEPTH 10000
#endif



#if CTL_Y_ERROR_VERBOSE

# ifndef ctp_y_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define ctp_y_strlen strlen
#  else
/* Return the length of CTL_Y_STR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static CTL_Y_SIZE_T
ctp_y_strlen (const char *ctp_y_str)
#else
static CTL_Y_SIZE_T
ctp_y_strlen (ctp_y_str)
    const char *ctp_y_str;
#endif
{
  CTL_Y_SIZE_T ctp_y_len;
  for (ctp_y_len = 0; ctp_y_str[ctp_y_len]; ctp_y_len++)
    continue;
  return ctp_y_len;
}
#  endif
# endif

# ifndef ctp_y_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define ctp_y_stpcpy stpcpy
#  else
/* Copy CTL_Y_SRC to CTL_Y_DEST, returning the address of the terminating '\0' in
   CTL_Y_DEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
ctp_y_stpcpy (char *ctp_y_dest, const char *ctp_y_src)
#else
static char *
ctp_y_stpcpy (ctp_y_dest, ctp_y_src)
    char *ctp_y_dest;
    const char *ctp_y_src;
#endif
{
  char *ctp_y_d = ctp_y_dest;
  const char *ctp_y_s = ctp_y_src;

  while ((*ctp_y_d++ = *ctp_y_s++) != '\0')
    continue;

  return ctp_y_d - 1;
}
#  endif
# endif

# ifndef ctp_y_tnamerr
/* Copy to CTL_Y_RES the contents of CTL_Y_STR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for ctp_y_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  CTL_Y_STR is taken from ctp_y_tname.  If CTL_Y_RES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static CTL_Y_SIZE_T
ctp_y_tnamerr (char *ctp_y_res, const char *ctp_y_str)
{
  if (*ctp_y_str == '"')
    {
      CTL_Y_SIZE_T ctp_y_n = 0;
      char const *ctp_y_p = ctp_y_str;

      for (;;)
	switch (*++ctp_y_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++ctp_y_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (ctp_y_res)
	      ctp_y_res[ctp_y_n] = *ctp_y_p;
	    ctp_y_n++;
	    break;

	  case '"':
	    if (ctp_y_res)
	      ctp_y_res[ctp_y_n] = '\0';
	    return ctp_y_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! ctp_y_res)
    return ctp_y_strlen (ctp_y_str);

  return ctp_y_stpcpy (ctp_y_res, ctp_y_str) - ctp_y_res;
}
# endif

/* Copy into CTL_Y_RESULT an error message about the unexpected token
   CTL_Y_CHAR while in state CTL_Y_STATE.  Return the number of bytes copied,
   including the terminating null byte.  If CTL_Y_RESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return CTL_Y_SIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static CTL_Y_SIZE_T
ctp_y_syntax_error (char *ctp_y_result, int ctp_y_state, int ctp_y_char)
{
  int ctp_y_n = ctp_y_pact[ctp_y_state];

  if (! (CTL_Y_PACT_NINF < ctp_y_n && ctp_y_n <= CTL_Y_LAST))
    return 0;
  else
    {
      int ctp_y_type = CTL_Y_TRANSLATE (ctp_y_char);
      CTL_Y_SIZE_T ctp_y_size0 = ctp_y_tnamerr (0, ctp_y_tname[ctp_y_type]);
      CTL_Y_SIZE_T ctp_y_size = ctp_y_size0;
      CTL_Y_SIZE_T ctp_y_size1;
      int ctp_y_size_overflow = 0;
      enum { CTL_Y_ERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *ctp_y_arg[CTL_Y_ERROR_VERBOSE_ARGS_MAXIMUM];
      int ctp_y_x;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      CTL_Y__("syntax error, unexpected %s");
      CTL_Y__("syntax error, unexpected %s, expecting %s");
      CTL_Y__("syntax error, unexpected %s, expecting %s or %s");
      CTL_Y__("syntax error, unexpected %s, expecting %s or %s or %s");
      CTL_Y__("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *ctp_y_fmt;
      char const *ctp_y_f;
      static char const ctp_y_unexpected[] = "syntax error, unexpected %s";
      static char const ctp_y_expecting[] = ", expecting %s";
      static char const ctp_y_or[] = " or %s";
      char ctp_y_format[sizeof ctp_y_unexpected
		    + sizeof ctp_y_expecting - 1
		    + ((CTL_Y_ERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof ctp_y_or - 1))];
      char const *ctp_y_prefix = ctp_y_expecting;

      /* Start CTL_Y_X at -CTL_Y_N if negative to avoid negative indexes in
	 CTL_Y_CHECK.  */
      int ctp_y_xbegin = ctp_y_n < 0 ? -ctp_y_n : 0;

      /* Stay within bounds of both ctp_y_check and ctp_y_tname.  */
      int ctp_y_checklim = CTL_Y_LAST - ctp_y_n + 1;
      int ctp_y_xend = ctp_y_checklim < CTL_Y_NTOKENS ? ctp_y_checklim : CTL_Y_NTOKENS;
      int ctp_y_count = 1;

      ctp_y_arg[0] = ctp_y_tname[ctp_y_type];
      ctp_y_fmt = ctp_y_stpcpy (ctp_y_format, ctp_y_unexpected);

      for (ctp_y_x = ctp_y_xbegin; ctp_y_x < ctp_y_xend; ++ctp_y_x)
	if (ctp_y_check[ctp_y_x + ctp_y_n] == ctp_y_x && ctp_y_x != CTL_Y_TERROR)
	  {
	    if (ctp_y_count == CTL_Y_ERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		ctp_y_count = 1;
		ctp_y_size = ctp_y_size0;
		ctp_y_format[sizeof ctp_y_unexpected - 1] = '\0';
		break;
	      }
	    ctp_y_arg[ctp_y_count++] = ctp_y_tname[ctp_y_x];
	    ctp_y_size1 = ctp_y_size + ctp_y_tnamerr (0, ctp_y_tname[ctp_y_x]);
	    ctp_y_size_overflow |= (ctp_y_size1 < ctp_y_size);
	    ctp_y_size = ctp_y_size1;
	    ctp_y_fmt = ctp_y_stpcpy (ctp_y_fmt, ctp_y_prefix);
	    ctp_y_prefix = ctp_y_or;
	  }

      ctp_y_f = CTL_Y__(ctp_y_format);
      ctp_y_size1 = ctp_y_size + ctp_y_strlen (ctp_y_f);
      ctp_y_size_overflow |= (ctp_y_size1 < ctp_y_size);
      ctp_y_size = ctp_y_size1;

      if (ctp_y_size_overflow)
	return CTL_Y_SIZE_MAXIMUM;

      if (ctp_y_result)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *ctp_y_p = ctp_y_result;
	  int ctp_y_i = 0;
	  while ((*ctp_y_p = *ctp_y_f) != '\0')
	    {
	      if (*ctp_y_p == '%' && ctp_y_f[1] == 's' && ctp_y_i < ctp_y_count)
		{
		  ctp_y_p += ctp_y_tnamerr (ctp_y_p, ctp_y_arg[ctp_y_i++]);
		  ctp_y_f += 2;
		}
	      else
		{
		  ctp_y_p++;
		  ctp_y_f++;
		}
	    }
	}
      return ctp_y_size;
    }
}
#endif /* CTL_Y_ERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
ctp_y_destruct (const char *ctp_y_msg, int ctp_y_type, CTL_Y_STYPE *ctp_y_valuep)
#else
static void
ctp_y_destruct (ctp_y_msg, ctp_y_type, ctp_y_valuep)
    const char *ctp_y_msg;
    int ctp_y_type;
    CTL_Y_STYPE *ctp_y_valuep;
#endif
{
  CTL_Y_USE (ctp_y_valuep);

  if (!ctp_y_msg)
    ctp_y_msg = "Deleting";
  CTL_Y__SYMBOL_PRINT (ctp_y_msg, ctp_y_type, ctp_y_valuep, ctp_y_locationp);

  switch (ctp_y_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef CTL_Y_PARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int ctp_y_parse (void *CTL_Y_PARSE_PARAM);
#else
int ctp_y_parse ();
#endif
#else /* ! CTL_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int ctp_y_parse (void);
#else
int ctp_y_parse ();
#endif
#endif /* ! CTL_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
int ctp_y_char;

/* The semantic value of the look-ahead symbol.  */
CTL_Y_STYPE ctp_y_lval;

/* Number of syntax errors so far.  */
int ctp_y_nerrs;



/*----------.
| ctp_y_parse.  |
`----------*/

#ifdef CTL_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
ctp_y_parse (void *CTL_Y_PARSE_PARAM)
#else
int
ctp_y_parse (CTL_Y_PARSE_PARAM)
    void *CTL_Y_PARSE_PARAM;
#endif
#else /* ! CTL_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
ctp_y_parse (void)
#else
int
ctp_y_parse ()

#endif
#endif
{
  
  int ctp_y_state;
  int ctp_y_n;
  int ctp_y_result;
  /* Number of tokens to shift before error messages enabled.  */
  int ctp_y_errstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int ctp_y_token = 0;
#if CTL_Y_ERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char ctp_y_msgbuf[128];
  char *ctp_y_msg = ctp_y_msgbuf;
  CTL_Y_SIZE_T ctp_y_msg_alloc = sizeof ctp_y_msgbuf;
#endif

  /* Three stacks and their tools:
     `ctp_y_ss': related to states,
     `ctp_y_vs': related to semantic values,
     `ctp_y_ls': related to locations.

     Refer to the stacks thru separate pointers, to allow ctp_y_overflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  ctp_y_type_int16 ctp_y_ssa[CTL_Y_INITDEPTH];
  ctp_y_type_int16 *ctp_y_ss = ctp_y_ssa;
  ctp_y_type_int16 *ctp_y_ssp;

  /* The semantic value stack.  */
  CTL_Y_STYPE ctp_y_vsa[CTL_Y_INITDEPTH];
  CTL_Y_STYPE *ctp_y_vs = ctp_y_vsa;
  CTL_Y_STYPE *ctp_y_vsp;



#define CTL_Y_POPSTACK(N)   (ctp_y_vsp -= (N), ctp_y_ssp -= (N))

  CTL_Y_SIZE_T ctp_y_stacksize = CTL_Y_INITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  CTL_Y_STYPE ctp_y_val;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int ctp_y_len = 0;

  CTL_Y_DPRINTF ((stderr, "Starting parse\n"));

  ctp_y_state = 0;
  ctp_y_errstatus = 0;
  ctp_y_nerrs = 0;
  ctp_y_char = CTL_Y_EMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  ctp_y_ssp = ctp_y_ss;
  ctp_y_vsp = ctp_y_vs;

  goto ctp_y_setstate;

/*------------------------------------------------------------.
| ctp_y_newstate -- Push a new state, which is found in ctp_y_state.  |
`------------------------------------------------------------*/
 ctp_y_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  ctp_y_ssp++;

 ctp_y_setstate:
  *ctp_y_ssp = ctp_y_state;

  if (ctp_y_ss + ctp_y_stacksize - 1 <= ctp_y_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      CTL_Y_SIZE_T ctp_y_size = ctp_y_ssp - ctp_y_ss + 1;

#ifdef ctp_y_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	CTL_Y_STYPE *ctp_y_vs1 = ctp_y_vs;
	ctp_y_type_int16 *ctp_y_ss1 = ctp_y_ss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if ctp_y_overflow is a macro.  */
	ctp_y_overflow (CTL_Y__("memory exhausted"),
		    &ctp_y_ss1, ctp_y_size * sizeof (*ctp_y_ssp),
		    &ctp_y_vs1, ctp_y_size * sizeof (*ctp_y_vsp),

		    &ctp_y_stacksize);

	ctp_y_ss = ctp_y_ss1;
	ctp_y_vs = ctp_y_vs1;
      }
#else /* no ctp_y_overflow */
# ifndef CTL_Y_STACK_RELOCATE
      goto ctp_y_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (CTL_Y_MAXDEPTH <= ctp_y_stacksize)
	goto ctp_y_exhaustedlab;
      ctp_y_stacksize *= 2;
      if (CTL_Y_MAXDEPTH < ctp_y_stacksize)
	ctp_y_stacksize = CTL_Y_MAXDEPTH;

      {
	ctp_y_type_int16 *ctp_y_ss1 = ctp_y_ss;
	union ctp_y_alloc *ctp_y_ptr =
	  (union ctp_y_alloc *) CTL_Y_STACK_ALLOC (CTL_Y_STACK_BYTES (ctp_y_stacksize));
	if (! ctp_y_ptr)
	  goto ctp_y_exhaustedlab;
	CTL_Y_STACK_RELOCATE (ctp_y_ss);
	CTL_Y_STACK_RELOCATE (ctp_y_vs);

#  undef CTL_Y_STACK_RELOCATE
	if (ctp_y_ss1 != ctp_y_ssa)
	  CTL_Y_STACK_FREE (ctp_y_ss1);
      }
# endif
#endif /* no ctp_y_overflow */

      ctp_y_ssp = ctp_y_ss + ctp_y_size - 1;
      ctp_y_vsp = ctp_y_vs + ctp_y_size - 1;


      CTL_Y_DPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) ctp_y_stacksize));

      if (ctp_y_ss + ctp_y_stacksize - 1 <= ctp_y_ssp)
	CTL_Y_ABORT;
    }

  CTL_Y_DPRINTF ((stderr, "Entering state %d\n", ctp_y_state));

  goto ctp_y_backup;

/*-----------.
| ctp_y_backup.  |
`-----------*/
ctp_y_backup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  ctp_y_n = ctp_y_pact[ctp_y_state];
  if (ctp_y_n == CTL_Y_PACT_NINF)
    goto ctp_y_default;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* CTL_Y_CHAR is either CTL_Y_EMPTY or CTL_Y_EOF or a valid look-ahead symbol.  */
  if (ctp_y_char == CTL_Y_EMPTY)
    {
      CTL_Y_DPRINTF ((stderr, "Reading a token: "));
      ctp_y_char = CTL_Y_LEX;
    }

  if (ctp_y_char <= CTL_Y_EOF)
    {
      ctp_y_char = ctp_y_token = CTL_Y_EOF;
      CTL_Y_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      ctp_y_token = CTL_Y_TRANSLATE (ctp_y_char);
      CTL_Y__SYMBOL_PRINT ("Next token is", ctp_y_token, &ctp_y_lval, &ctp_y_lloc);
    }

  /* If the proper action on seeing token CTL_Y_TOKEN is to reduce or to
     detect an error, take that action.  */
  ctp_y_n += ctp_y_token;
  if (ctp_y_n < 0 || CTL_Y_LAST < ctp_y_n || ctp_y_check[ctp_y_n] != ctp_y_token)
    goto ctp_y_default;
  ctp_y_n = ctp_y_table[ctp_y_n];
  if (ctp_y_n <= 0)
    {
      if (ctp_y_n == 0 || ctp_y_n == CTL_Y_TABLE_NINF)
	goto ctp_y_errlab;
      ctp_y_n = -ctp_y_n;
      goto ctp_y_reduce;
    }

  if (ctp_y_n == CTL_Y_FINAL)
    CTL_Y_ACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (ctp_y_errstatus)
    ctp_y_errstatus--;

  /* Shift the look-ahead token.  */
  CTL_Y__SYMBOL_PRINT ("Shifting", ctp_y_token, &ctp_y_lval, &ctp_y_lloc);

  /* Discard the shifted token unless it is eof.  */
  if (ctp_y_char != CTL_Y_EOF)
    ctp_y_char = CTL_Y_EMPTY;

  ctp_y_state = ctp_y_n;
  *++ctp_y_vsp = ctp_y_lval;

  goto ctp_y_newstate;


/*-----------------------------------------------------------.
| ctp_y_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
ctp_y_default:
  ctp_y_n = ctp_y_defact[ctp_y_state];
  if (ctp_y_n == 0)
    goto ctp_y_errlab;
  goto ctp_y_reduce;


/*-----------------------------.
| ctp_y_reduce -- Do a reduction.  |
`-----------------------------*/
ctp_y_reduce:
  /* ctp_y_n is the number of a rule to reduce with.  */
  ctp_y_len = ctp_y_r2[ctp_y_n];

  /* If CTL_Y_LEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets CTL_Y_VAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to CTL_Y_VAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that CTL_Y_VAL may be used uninitialized.  */
  ctp_y_val = ctp_y_vsp[1-ctp_y_len];


  CTL_Y__REDUCE_PRINT (ctp_y_n);
  switch (ctp_y_n)
    {
        case 2:
#line 275 "../../../src/ctp/src/ctp_y.y"
    {
            ctltype_list *CtlType;

            CTP_HEADFIG = addctlfig( CTP_FILENAME );;
            CTP_MODNAM  = CTP_HEADFIG->NAME;
            addctlpredefinedtype( CTP_HEADFIG );

            hshtab = initab ();

            CTP_NM1LST = NULL;
            CTP_INSLST = NULL;
            CTP_LINLST = NULL;
            CTP_VALLST = NULL;

            CTP_ERRFLG    = 0;
            CTP_LINNUM    = 1;
            CTP_NUMTYP    = 0;

            CtlType = CTP_HEADFIG->TYPE;

            while( CtlType )
            {
              addtab(hshtab,CtlType->NAME,CTP_MODNAM,CTP_SYMDFN,CTP_TPEDFN);
              addtab(hshtab,CtlType->NAME,CTP_MODNAM,CTP_LBLDFN,CtlType->CLASS);
              addtab(hshtab,CtlType->NAME,CTP_MODNAM,CTP_TYPDFN,CtlType->INDEX);
              addtab(hshtab,CtlType->NAME,CTP_MODNAM,CTP_WMNDFN,CtlType->LEFT);
              addtab(hshtab,CtlType->NAME,CTP_MODNAM,CTP_WMXDFN,CtlType->RIGHT);
              addtab(hshtab,CtlType->NAME,CTP_MODNAM,CTP_PNTDFN,(long)CtlType);

              CtlType = CtlType->NEXT;
            }

            CTP_NUMTYP = VEX_MAX_TYPE;
          }
    break;

  case 3:
#line 310 "../../../src/ctp/src/ctp_y.y"
    {
            fretab( hshtab );
          }
    break;

  case 4:
#line 321 "../../../src/ctp/src/ctp_y.y"
    {
         }
    break;

  case 15:
#line 345 "../../../src/ctp/src/ctp_y.y"
    {
           my_ctp_error(9,NULL);
         }
    break;

  case 16:
#line 358 "../../../src/ctp/src/ctp_y.y"
    {
          ctltype_list  *Type;
          ctldecl_list  *CtlCst;
          vexexpr       *VexValue;
          chain_list    *HeadChain;
          chain_list    *ScanChain;
          ctp_vexstr    *VexStr;
          short          Signed;
          long           Left;
          long           Right;
          short          Width;
          long           AttrLeft;
          long           AttrRight;

          VexValue = simpvexexpr( (ctp_y_vsp[(6) - (7)].list).VEX );

          Type = val_type( (ctp_y_vsp[(4) - (7)].name).NAME );

          if ( ( (ctp_y_vsp[(5) - (7)].name).LEFT  == -1 ) &&
               ( (ctp_y_vsp[(5) - (7)].name).RIGHT == -1 ) )
          {
            AttrLeft  = Type->LEFT;
            AttrRight = Type->RIGHT;
          }
          else
          {
            AttrLeft  = (ctp_y_vsp[(5) - (7)].name).LEFT;
            AttrRight = (ctp_y_vsp[(5) - (7)].name).RIGHT;
          }

          CtlCst  = (ctldecl_list *)ctp_addstr( 'C',0,val_type((ctp_y_vsp[(4) - (7)].name).NAME),
                 (ctp_y_vsp[(4) - (7)].name).TYPE,(ctp_y_vsp[(4) - (7)].name).FLAG,(ctp_y_vsp[(2) - (7)].text),AttrLeft,AttrRight,VexValue);

          Signed = ( IsVexNodeSigned( CtlCst->VEX_ATOM ) != 0 );

          {
            if ( IsVexAtomBit( CtlCst->VEX_ATOM ) )
            {
              Left  = -1;
              Right = -1;
            }
            else
            {
              Left  = CtlCst->VEX_ATOM->LEFT;
              Right = CtlCst->VEX_ATOM->RIGHT;
            }
          }

          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_SYMDFN,CTP_CSTDFN);
          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_TYPDFN,(ctp_y_vsp[(4) - (7)].name).TYPE);
          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_WMNDFN,Left);
          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_WMXDFN,Right);
          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_ATLDFN,AttrLeft);
          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_ATRDFN,AttrRight);
          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_LBLDFN,0);
          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_PNTDFN,(long)CtlCst->VEX_ATOM);
          addtab(hshtab,(ctp_y_vsp[(2) - (7)].text),CTP_MODNAM,CTP_SUNDFN,Signed );
        }
    break;

  case 17:
#line 423 "../../../src/ctp/src/ctp_y.y"
    {
          ctltype_list  *Type;
          ctldecl_list  *CtlAss;
          vexexpr       *VexValue;
          chain_list    *HeadChain;
          chain_list    *ScanChain;
          ctp_vexstr    *VexStr;
          short          Signed;
          long           Left;
          long           Right;
          short          Width;
          long           AttrLeft;
          long           AttrRight;

          VexValue = simpvexexpr( (ctp_y_vsp[(3) - (4)].list).VEX );

          Type = val_type( "boolean" );

          AttrLeft  = -1;
          AttrRight = -1;

          CtlAss  = (ctldecl_list *)ctp_addstr( 'A',0, Type,
                 VEX_TYPE_BOOLEAN, 0, (ctp_y_vsp[(2) - (4)].text), AttrLeft,AttrRight,VexValue);

          Signed = 0;
          Left   = -1;
          Right  = -1;

          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_SYMDFN,CTP_CSTDFN);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_TYPDFN,VEX_TYPE_BOOLEAN);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_WMNDFN,Left);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_WMXDFN,Right);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_ATLDFN,AttrLeft);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_ATRDFN,AttrRight);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_LBLDFN,0);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_PNTDFN,(long)CtlAss->VEX_ATOM);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_SUNDFN,Signed );
        }
    break;

  case 18:
#line 468 "../../../src/ctp/src/ctp_y.y"
    {
          ctltype_list  *Type;
          ctldecl_list  *CtlAss;
          vexexpr       *VexValue;
          chain_list    *HeadChain;
          chain_list    *ScanChain;
          ctp_vexstr    *VexStr;
          short          Signed;
          long           Left;
          long           Right;
          short          Width;
          long           AttrLeft;
          long           AttrRight;

          VexValue = simpvexexpr( (ctp_y_vsp[(3) - (4)].list).VEX );

          Type = val_type( "boolean" );

          AttrLeft  = -1;
          AttrRight = -1;

          CtlAss  = (ctldecl_list *)ctp_addstr( 'I',0, Type,
                 VEX_TYPE_BOOLEAN, 0, (ctp_y_vsp[(2) - (4)].text), AttrLeft,AttrRight,VexValue);

          Signed = 0;
          Left   = -1;
          Right  = -1;

          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_SYMDFN,CTP_CSTDFN);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_TYPDFN,VEX_TYPE_BOOLEAN);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_WMNDFN,Left);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_WMXDFN,Right);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_ATLDFN,AttrLeft);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_ATRDFN,AttrRight);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_LBLDFN,0);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_PNTDFN,(long)CtlAss->VEX_ATOM);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_SUNDFN,Signed );
        }
    break;

  case 19:
#line 513 "../../../src/ctp/src/ctp_y.y"
    {
          ctltype_list  *Type;
          ctldecl_list  *CtlAss;
          vexexpr       *VexValue;
          chain_list    *HeadChain;
          chain_list    *ScanChain;
          ctp_vexstr    *VexStr;
          short          Signed;
          long           Left;
          long           Right;
          short          Width;
          long           AttrLeft;
          long           AttrRight;

          VexValue = simpvexexpr( (ctp_y_vsp[(3) - (4)].list).VEX );

          Type = val_type( "boolean" );

          AttrLeft  = -1;
          AttrRight = -1;

          CtlAss  = (ctldecl_list *)ctp_addstr( 'R',0, Type,
                 VEX_TYPE_BOOLEAN, 0, (ctp_y_vsp[(2) - (4)].text), AttrLeft,AttrRight,VexValue);

          Signed = 0;
          Left   = -1;
          Right  = -1;

          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_SYMDFN,CTP_CSTDFN);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_TYPDFN,VEX_TYPE_BOOLEAN);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_WMNDFN,Left);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_WMXDFN,Right);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_ATLDFN,AttrLeft);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_ATRDFN,AttrRight);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_LBLDFN,0);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_PNTDFN,(long)CtlAss->VEX_ATOM);
          addtab(hshtab,(ctp_y_vsp[(2) - (4)].text),CTP_MODNAM,CTP_SUNDFN,Signed );
        }
    break;

  case 20:
#line 557 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(2) - (2)].list); }
    break;

  case 21:
#line 567 "../../../src/ctp/src/ctp_y.y"
    {
            char         *LocalName;
            char         *signame;
            char         *codedsigname;
            char          buffer[ 128 ];
            ctltype_list *Type;
            ctldecl_list *CtlVar;
            short         Signed;
            long          Left;
            long          Right;
            long          AttrLeft;
            long          AttrRight;
            char          StrFlag;
            vexexpr      *VexInit;
            struct ctp_expr expr1;

            LocalName = CTP_MODNAM;
            Type  = val_type( (ctp_y_vsp[(4) - (6)].name).NAME );

            if ( ( (ctp_y_vsp[(5) - (6)].name).LEFT  == -1 ) &&
                 ( (ctp_y_vsp[(5) - (6)].name).RIGHT == -1 ) )
            {
              AttrLeft  = Type->LEFT;
              AttrRight = Type->RIGHT;
            }
            else
            {
              AttrLeft  = (ctp_y_vsp[(5) - (6)].name).LEFT;
              AttrRight = (ctp_y_vsp[(5) - (6)].name).RIGHT;
            }

            CTP_NM1LST = reverse (CTP_NM1LST);

            while (CTP_NM1LST != NULL)
            {
              signame = (char *)CTP_NM1LST->DATA;
              if (chktab (hshtab,signame,LocalName,CTP_SYMDFN) != 0)
                  my_ctp_error (80,signame);

              CtlVar = (ctldecl_list *)ctp_addstr( 'V', 0,
                      val_type((ctp_y_vsp[(4) - (6)].name).NAME),(ctp_y_vsp[(4) - (6)].name).TYPE,
                      (ctp_y_vsp[(4) - (6)].name).FLAG,signame, AttrLeft, AttrRight, NULL );

              Signed = ( IsVexNodeSigned( CtlVar->VEX_ATOM ) != 0 );

              if ( IsVexAtomBit( CtlVar->VEX_ATOM ) )
              {
                Left  = -1;
                Right = -1;
              }
              else
              {
                Left  = CtlVar->VEX_ATOM->LEFT;
                Right = CtlVar->VEX_ATOM->RIGHT;
              }

              addtab (hshtab,signame,LocalName,CTP_SYMDFN,CTP_VARDFN);
              addtab (hshtab,signame,LocalName,CTP_TYPDFN,(ctp_y_vsp[(4) - (6)].name).TYPE);
              addtab (hshtab,signame,LocalName,CTP_WMNDFN,Left);
              addtab (hshtab,signame,LocalName,CTP_WMXDFN,Right);
              addtab (hshtab,signame,LocalName,CTP_ATLDFN,AttrLeft);
              addtab (hshtab,signame,LocalName,CTP_ATRDFN,AttrRight);
              addtab (hshtab,signame,LocalName,CTP_LBLDFN,0);
              addtab (hshtab,signame,LocalName,CTP_PNTDFN,(long)CtlVar->VEX_ATOM);
              addtab (hshtab,signame,LocalName,CTP_SUNDFN,Signed);

              CTP_NM1LST = delchain (CTP_NM1LST,CTP_NM1LST);
            }
          }
    break;

  case 23:
#line 649 "../../../src/ctp/src/ctp_y.y"
    {
           ctltype_list *CtlType;

           CtlType = addctltype( CTP_HEADFIG,(ctp_y_vsp[(2) - (5)].text), CTP_NUMTYP, (ctp_y_vsp[(4) - (5)].type).LEFT,
               (ctp_y_vsp[(4) - (5)].type).RIGHT,(ctp_y_vsp[(4) - (5)].type).SIZE,(ctp_y_vsp[(4) - (5)].type).VALUE, (ctp_y_vsp[(4) - (5)].type).CLASS, (ctp_y_vsp[(4) - (5)].type).BASE );
           addctlline( CTP_HEADFIG, &CtlType->LINE, CTP_LINNUM);

           addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_SYMDFN,CTP_TPEDFN);
           addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_LBLDFN,(ctp_y_vsp[(4) - (5)].type).CLASS);
           addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_TYPDFN,CTP_NUMTYP);
           addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_WMNDFN,(ctp_y_vsp[(4) - (5)].type).LEFT);
           addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_WMXDFN,(ctp_y_vsp[(4) - (5)].type).RIGHT);
           addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_PNTDFN,(long)CtlType );
           CTP_NUMTYP++;
         }
    break;

  case 24:
#line 668 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.type) = (ctp_y_vsp[(1) - (1)].type); }
    break;

  case 25:
#line 670 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.type) = (ctp_y_vsp[(1) - (1)].type); }
    break;

  case 26:
#line 672 "../../../src/ctp/src/ctp_y.y"
    { ctp_y_errok; }
    break;

  case 27:
#line 681 "../../../src/ctp/src/ctp_y.y"
    {
            ctltype_list *CtlType;

            CtlType = addctltype(CTP_HEADFIG,(ctp_y_vsp[(2) - (5)].text),(ctp_y_vsp[(4) - (5)].type).INDEX,(ctp_y_vsp[(4) - (5)].type).LEFT,
                   (ctp_y_vsp[(4) - (5)].type).RIGHT, (ctp_y_vsp[(4) - (5)].type).SIZE, (ctp_y_vsp[(4) - (5)].type).VALUE, (ctp_y_vsp[(4) - (5)].type).CLASS,(ctp_y_vsp[(4) - (5)].type).BASE );
            addctlline( CTP_HEADFIG, &CtlType->LINE, CTP_LINNUM);
            addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_SYMDFN,CTP_TPEDFN);
            addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_LBLDFN,(ctp_y_vsp[(4) - (5)].type).CLASS);
            addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_TYPDFN,(ctp_y_vsp[(4) - (5)].type).INDEX);
            addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_WMNDFN,(ctp_y_vsp[(4) - (5)].type).LEFT);
            addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_WMXDFN,(ctp_y_vsp[(4) - (5)].type).RIGHT);
            addtab(hshtab,(ctp_y_vsp[(2) - (5)].text),CTP_MODNAM,CTP_PNTDFN,(long)CTP_HEADFIG->TYPE);
            CTP_NUMTYP++;
          }
    break;

  case 28:
#line 701 "../../../src/ctp/src/ctp_y.y"
    {
           ctltype_list *ctltype_pnt;
           long          mode;
  
           mode = chktab(hshtab,(ctp_y_vsp[(1) - (3)].text),CTP_MODNAM,CTP_SYMDFN);

           ctltype_pnt = (ctltype_list *)chktab(hshtab,(ctp_y_vsp[(2) - (3)].name).NAME,CTP_MODNAM,CTP_PNTDFN);
  
           (ctp_y_val.type).NAME = NULL;
           (ctp_y_val.type).BASE = ctltype_pnt;
           (ctp_y_val.type).VALUE = NULL ;
           (ctp_y_val.type).SIZE = 0 ;
           (ctp_y_val.type).INDEX = CTP_NUMTYP;
           (ctp_y_val.type).LEFT  = (ctp_y_vsp[(3) - (3)].name).LEFT ;
           (ctp_y_val.type).RIGHT = (ctp_y_vsp[(3) - (3)].name).RIGHT ;
           (ctp_y_val.type).CLASS = (ctp_y_vsp[(3) - (3)].name).FLAG ;
         }
    break;

  case 29:
#line 720 "../../../src/ctp/src/ctp_y.y"
    {
           ctltype_list *ctltype_pnt;
  
           ctltype_pnt = (ctltype_list *)chktab(hshtab,(ctp_y_vsp[(1) - (2)].name).NAME,CTP_MODNAM,CTP_PNTDFN);
  
           (ctp_y_val.type).NAME = NULL;
           (ctp_y_val.type).BASE = ctltype_pnt;
           (ctp_y_val.type).VALUE = NULL ;
           (ctp_y_val.type).SIZE = 0 ;
           (ctp_y_val.type).INDEX = CTP_NUMTYP;
           (ctp_y_val.type).CLASS = (ctp_y_vsp[(2) - (2)].name).FLAG;

           (ctp_y_val.type).LEFT    = (ctp_y_vsp[(2) - (2)].name).LEFT ;
           (ctp_y_val.type).RIGHT   = (ctp_y_vsp[(2) - (2)].name).RIGHT ;
        }
    break;

  case 30:
#line 739 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.text) = (ctp_y_vsp[(1) - (1)].text); }
    break;

  case 31:
#line 745 "../../../src/ctp/src/ctp_y.y"
    {
            (ctp_y_val.type) = (ctp_y_vsp[(1) - (1)].type);
          }
    break;

  case 32:
#line 754 "../../../src/ctp/src/ctp_y.y"
    {
              char *enumname;
              char *enumval;
              long  size;
              long  indice;
              long  numbit;
              char **pnt;
              chain_list *nm1lst;

              CTP_NM1LST = reverse (CTP_NM1LST);

              nm1lst = CTP_NM1LST;
              size   = 0;

              while (nm1lst != NULL)
              {
                size++;
                nm1lst = nm1lst->NEXT;
              }

              pnt = (char **) autallocblock(size * sizeof(char*));

              indice = 0;

              while (CTP_NM1LST != NULL)
              {
                enumname = (char *)CTP_NM1LST->DATA;

                if (chktab (hshtab,enumname,CTP_MODNAM,CTP_SYMDFN) != 0)
                  my_ctp_error (82,enumname);

                addtab (hshtab,enumname,CTP_MODNAM,CTP_SYMDFN,CTP_CSTDFN);
                addtab (hshtab,enumname,CTP_MODNAM,CTP_TYPDFN,CTP_NUMTYP);
                addtab (hshtab,enumname,CTP_MODNAM,CTP_WMNDFN,-1);
                addtab (hshtab,enumname,CTP_MODNAM,CTP_WMXDFN,-1);
                addtab (hshtab,enumname,CTP_MODNAM,CTP_LBLDFN,indice);
                addtab (hshtab,enumname,CTP_MODNAM,CTP_PNTDFN,(long)pnt);
                
                pnt[indice++] = enumname;
                CTP_NM1LST = delchain (CTP_NM1LST, CTP_NM1LST);
              }

              (ctp_y_val.type).VALUE = pnt ;
              (ctp_y_val.type).SIZE = size ;
              (ctp_y_val.type).LEFT = -1 ;
              (ctp_y_val.type).RIGHT = -1 ;
              (ctp_y_val.type).INDEX = CTP_NUMTYP;
              (ctp_y_val.type).CLASS = 'E' ;
              (ctp_y_val.type).BASE = 0 ;
        }
    break;

  case 34:
#line 812 "../../../src/ctp/src/ctp_y.y"
    { ctp_y_errok; }
    break;

  case 35:
#line 817 "../../../src/ctp/src/ctp_y.y"
    {
            CTP_NM1LST = addchain (CTP_NM1LST,(ctp_y_vsp[(1) - (1)].text));
          }
    break;

  case 36:
#line 821 "../../../src/ctp/src/ctp_y.y"
    {
            CTP_NM1LST = addchain (CTP_NM1LST,(ctp_y_vsp[(1) - (1)].text));
          }
    break;

  case 37:
#line 828 "../../../src/ctp/src/ctp_y.y"
    {
            (ctp_y_val.type) = (ctp_y_vsp[(1) - (1)].type);
          }
    break;

  case 38:
#line 835 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.type) = (ctp_y_vsp[(1) - (1)].type); }
    break;

  case 39:
#line 843 "../../../src/ctp/src/ctp_y.y"
    {
            ctltype_list *NewType;
            char       *name;
            char        buffer[ 32 ];

            (ctp_y_val.type) = (ctp_y_vsp[(4) - (4)].type);

            if ( (ctp_y_vsp[(4) - (4)].type).CLASS == 'U' )
            {
              if ( (ctp_y_vsp[(4) - (4)].type).BASE->CLASS != 'A' )
              {
                my_ctp_error(123,NULL);
              }
            }
            else
            if ( (ctp_y_vsp[(4) - (4)].type).CLASS == 'A' )
            {
              if ( (ctp_y_vsp[(4) - (4)].type).BASE->CLASS != 'U' )
              {
                my_ctp_error(123,NULL);
              }

              sprintf( buffer, "_subtype_%d", CTP_NUMTYP );
              name = namealloc( buffer );

              NewType = addctltype(CTP_HEADFIG,name,(ctp_y_vsp[(4) - (4)].type).INDEX, (ctp_y_vsp[(4) - (4)].type).LEFT,
                   (ctp_y_vsp[(4) - (4)].type).RIGHT,(ctp_y_vsp[(4) - (4)].type).SIZE,(ctp_y_vsp[(4) - (4)].type).VALUE,(ctp_y_vsp[(4) - (4)].type).CLASS,(ctp_y_vsp[(4) - (4)].type).BASE );
              addctlline( CTP_HEADFIG, &NewType->LINE, CTP_LINNUM);
              addtab(hshtab,name,CTP_MODNAM,CTP_SYMDFN,CTP_TPEDFN);
              addtab(hshtab,name,CTP_MODNAM,CTP_LBLDFN,(ctp_y_vsp[(4) - (4)].type).CLASS);
              addtab(hshtab,name,CTP_MODNAM,CTP_TYPDFN,(ctp_y_vsp[(4) - (4)].type).INDEX);
              addtab(hshtab,name,CTP_MODNAM,CTP_WMNDFN,(ctp_y_vsp[(4) - (4)].type).LEFT);
              addtab(hshtab,name,CTP_MODNAM,CTP_WMXDFN,(ctp_y_vsp[(4) - (4)].type).RIGHT);
              addtab(hshtab,name,CTP_MODNAM,CTP_PNTDFN,(long)CTP_HEADFIG->TYPE );
              CTP_NUMTYP++;

              (ctp_y_val.type).BASE = NewType;
            }
            else
            {
              my_ctp_error(123,NULL);
            }

            (ctp_y_val.type).CLASS = 'A';
            (ctp_y_val.type).INDEX = (ctp_y_vsp[(2) - (4)].name).TYPE;

            (ctp_y_val.type).LEFT  = (ctp_y_vsp[(2) - (4)].name).LEFT;
            (ctp_y_val.type).RIGHT = (ctp_y_vsp[(2) - (4)].name).RIGHT;
          }
    break;

  case 40:
#line 898 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.name) = (ctp_y_vsp[(2) - (3)].name);}
    break;

  case 41:
#line 903 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.name) = (ctp_y_vsp[(1) - (1)].name);}
    break;

  case 42:
#line 906 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.name) = (ctp_y_vsp[(2) - (2)].name);
           (ctp_y_val.name).NAME = (ctp_y_vsp[(1) - (2)].name).NAME;
         }
    break;

  case 43:
#line 911 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.name) = (ctp_y_vsp[(1) - (1)].name);}
    break;

  case 44:
#line 916 "../../../src/ctp/src/ctp_y.y"
    {
          (ctp_y_val.name).FLAG   = 'U';
          (ctp_y_val.name).LEFT   = -1;
          (ctp_y_val.name).RIGHT  = -1;
        }
    break;

  case 45:
#line 922 "../../../src/ctp/src/ctp_y.y"
    { 
          (ctp_y_val.name) = (ctp_y_vsp[(1) - (1)].name);
        }
    break;

  case 46:
#line 929 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.name) = (ctp_y_vsp[(1) - (1)].name);
         }
    break;

  case 47:
#line 936 "../../../src/ctp/src/ctp_y.y"
    {
           (ctp_y_val.name) = (ctp_y_vsp[(2) - (3)].name);
         }
    break;

  case 48:
#line 944 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.name) = (ctp_y_vsp[(2) - (2)].name); }
    break;

  case 49:
#line 949 "../../../src/ctp/src/ctp_y.y"
    {
           if ( ( (ctp_y_vsp[(1) - (1)].name).FLAG != CTP_RANGE     ) &&
                ( (ctp_y_vsp[(1) - (1)].name).FLAG != CTP_REV_RANGE ) )
           {
             my_ctp_error (32,NULL);
           }

           (ctp_y_val.name) = (ctp_y_vsp[(1) - (1)].name);
         }
    break;

  case 50:
#line 961 "../../../src/ctp/src/ctp_y.y"
    {
           long Left;
           long Right;
           long ErrorL;
           long  ErrorR;

           ErrorL = ctp_vextonum( (ctp_y_vsp[(1) - (3)].list).VEX, &Left  );
           ErrorR = ctp_vextonum( (ctp_y_vsp[(3) - (3)].list).VEX, &Right );

           (ctp_y_val.name).NAME   = NULL;
           (ctp_y_val.name).TYPE   = (ctp_y_vsp[(1) - (3)].list).TYPE;
           (ctp_y_val.name).SIGNED = 0;
           (ctp_y_val.name).FLAG   = 'A';

           if ( ( ! ErrorL ) && ( ! ErrorR ) )
           {
             if (((Left > Right) && ((ctp_y_vsp[(2) - (3)].valu) == CTP_UPTDFN)) ||
                  ((Left < Right) && ((ctp_y_vsp[(2) - (3)].valu) == CTP_DWTDFN)))
             {
               my_ctp_error (32,NULL);
             }

             (ctp_y_val.name).LEFT   = Left;
             (ctp_y_val.name).RIGHT  = Right;
           }
           else
           {
             (ctp_y_val.name).LEFT    = (long)(ctp_y_vsp[(1) - (3)].list).VEX;
             (ctp_y_val.name).RIGHT   = (long)(ctp_y_vsp[(3) - (3)].list).VEX;
           }
         }
    break;

  case 51:
#line 996 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_UPTDFN; }
    break;

  case 52:
#line 998 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_DWTDFN; }
    break;

  case 53:
#line 1005 "../../../src/ctp/src/ctp_y.y"
    {
              long type;
              (ctp_y_val.name).NAME = (ctp_y_vsp[(1) - (1)].text);
              (ctp_y_val.name).LEFT = -1;
              (ctp_y_val.name).RIGHT = -1;
              (ctp_y_val.name).TYPE = chktab(hshtab,(ctp_y_vsp[(1) - (1)].text),CTP_MODNAM,CTP_TYPDFN);
              (ctp_y_val.name).FLAG = chktab(hshtab,(ctp_y_vsp[(1) - (1)].text),CTP_MODNAM,CTP_LBLDFN);
              type = chktab(hshtab,(ctp_y_vsp[(1) - (1)].text),CTP_MODNAM,CTP_SYMDFN);

              if (type != CTP_TPEDFN || (ctp_y_val.name).TYPE ==0)
              {
                my_ctp_error(84,(ctp_y_vsp[(1) - (1)].text));
              }
          }
    break;

  case 58:
#line 1035 "../../../src/ctp/src/ctp_y.y"
    { my_ctp_error (18,NULL); }
    break;

  case 59:
#line 1043 "../../../src/ctp/src/ctp_y.y"
    {
           ctlform_list *CtlForm;
           vexexpr      *VexForm;

           VexForm = simpvexexpr( (ctp_y_vsp[(3) - (4)].list).VEX );

           if (chktab (hshtab,(ctp_y_vsp[(1) - (4)].text), CTP_MODNAM,CTP_SYMDFN) != 0)
           {
             my_ctp_error (80,(ctp_y_vsp[(1) - (4)].text));
           }

           CtlForm = addctlform( CTP_HEADFIG, (ctp_y_vsp[(1) - (4)].text), VexForm );
           addctlline( CTP_HEADFIG, &CtlForm->LINE, CTP_LINNUM);

           addtab(hshtab,(ctp_y_vsp[(1) - (4)].text),CTP_MODNAM,CTP_SYMDFN,CTP_LABDFN);
         }
    break;

  case 60:
#line 1063 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 61:
#line 1065 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 62:
#line 1067 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 63:
#line 1069 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 64:
#line 1076 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_AND ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 65:
#line 1082 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_AND ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 66:
#line 1091 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_OR ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 67:
#line 1097 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_OR ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 68:
#line 1104 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 69:
#line 1108 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_NAND ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 70:
#line 1114 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_NOR ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 71:
#line 1120 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_NXOR ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 72:
#line 1126 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_IFT,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 73:
#line 1135 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_EU,(ctp_y_vsp[(3) - (6)].list) ,(ctp_y_vsp[(5) - (6)].list) ,-1,-1);
         }
    break;

  case 74:
#line 1144 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex (VEX_AU,(ctp_y_vsp[(3) - (6)].list) ,(ctp_y_vsp[(5) - (6)].list) ,-1,-1);
         }
    break;

  case 75:
#line 1153 "../../../src/ctp/src/ctp_y.y"
    {
           (ctp_y_val.list) = ctp_crtvex (VEX_XOR ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 76:
#line 1159 "../../../src/ctp/src/ctp_y.y"
    {
           (ctp_y_val.list) = ctp_crtvex (VEX_XOR ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 77:
#line 1166 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 78:
#line 1170 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex ((ctp_y_vsp[(2) - (3)].valu) ,(ctp_y_vsp[(1) - (3)].list) ,(ctp_y_vsp[(3) - (3)].list) ,-1,-1);
         }
    break;

  case 79:
#line 1177 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 80:
#line 1182 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 81:
#line 1185 "../../../src/ctp/src/ctp_y.y"
    {
             if ( (ctp_y_vsp[(1) - (2)].valu) == VEX_NEG )
             {
               (ctp_y_val.list) = ctp_crtvex( VEX_NEG,(ctp_y_vsp[(2) - (2)].list),NULL,-1,-1);
             }
             else
             {
               (ctp_y_val.list) = (ctp_y_vsp[(2) - (2)].list);
             }
          }
    break;

  case 82:
#line 1198 "../../../src/ctp/src/ctp_y.y"
    {
            (ctp_y_val.list) = ctp_crtvex((ctp_y_vsp[(2) - (3)].valu),(ctp_y_vsp[(1) - (3)].list),(ctp_y_vsp[(3) - (3)].list),-1,-1);
          }
    break;

  case 83:
#line 1205 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_ADD; }
    break;

  case 84:
#line 1207 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_SUB; }
    break;

  case 85:
#line 1209 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_CONCAT; }
    break;

  case 86:
#line 1213 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = 0; }
    break;

  case 87:
#line 1215 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_NEG; }
    break;

  case 88:
#line 1220 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_MUL; }
    break;

  case 89:
#line 1222 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_DIV; }
    break;

  case 90:
#line 1224 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_MOD; }
    break;

  case 91:
#line 1226 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_REM; }
    break;

  case 92:
#line 1231 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list); }
    break;

  case 93:
#line 1235 "../../../src/ctp/src/ctp_y.y"
    {
           (ctp_y_val.list) = ctp_crtvex( (ctp_y_vsp[(2) - (3)].valu), (ctp_y_vsp[(1) - (3)].list), (ctp_y_vsp[(3) - (3)].list),-1,-1);
         }
    break;

  case 94:
#line 1242 "../../../src/ctp/src/ctp_y.y"
    {
           (ctp_y_val.list) = (ctp_y_vsp[(1) - (1)].list);
         }
    break;

  case 95:
#line 1248 "../../../src/ctp/src/ctp_y.y"
    {
           (ctp_y_val.list) = ctp_crtvex( VEX_EXP,(ctp_y_vsp[(1) - (3)].list),(ctp_y_vsp[(3) - (3)].list),-1,-1);
         }
    break;

  case 96:
#line 1253 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex( VEX_ABS,(ctp_y_vsp[(2) - (2)].list),CTP_EMPSTR,-1,-1); 
         }
    break;

  case 97:
#line 1258 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex( VEX_NOT,(ctp_y_vsp[(2) - (2)].list),CTP_EMPSTR,-1,-1);
         }
    break;

  case 98:
#line 1263 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex( VEX_AG,(ctp_y_vsp[(2) - (2)].list),CTP_EMPSTR,-1,-1);
         }
    break;

  case 99:
#line 1268 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex( VEX_AF,(ctp_y_vsp[(2) - (2)].list),CTP_EMPSTR,-1,-1);
         }
    break;

  case 100:
#line 1273 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex( VEX_AX,(ctp_y_vsp[(2) - (2)].list),CTP_EMPSTR,-1,-1);
         }
    break;

  case 101:
#line 1278 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex( VEX_EF,(ctp_y_vsp[(2) - (2)].list),CTP_EMPSTR,-1,-1);
         }
    break;

  case 102:
#line 1283 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex( VEX_EG,(ctp_y_vsp[(2) - (2)].list),CTP_EMPSTR,-1,-1);
         }
    break;

  case 103:
#line 1288 "../../../src/ctp/src/ctp_y.y"
    { 
           (ctp_y_val.list) = ctp_crtvex( VEX_EX,(ctp_y_vsp[(2) - (2)].list),CTP_EMPSTR,-1,-1);
         }
    break;

  case 104:
#line 1295 "../../../src/ctp/src/ctp_y.y"
    {
           struct ctp_expr expr1;

           expr1.IDENT = (ctp_y_vsp[(1) - (1)].text);
           expr1.TYPE  = -1;
           expr1.VEX   = (vexexpr *)0;

           (ctp_y_val.list) = ctp_crtvex( NOPS,expr1,CTP_EMPSTR,-1,-1);
        }
    break;

  case 105:
#line 1305 "../../../src/ctp/src/ctp_y.y"
    {
            ctp_vexstr *VexStr;
            chain_list *ScanChain;

            ScanChain = (ctp_y_vsp[(1) - (1)].pcha);

            if ( ScanChain == (chain_list *)0 )
            {
              my_ctp_error(114,NULL);
            }

            if ( ScanChain->NEXT == (chain_list *)0 )
            {
              VexStr = (ctp_vexstr *)ScanChain->DATA;

              (ctp_y_val.list) = *VexStr;

              autfreeheap( VexStr, sizeof( ctp_vexstr ) );
              freechain( ScanChain );
            }
            else
            {
              (ctp_y_val.list).IDENT  = (char *)(ctp_y_vsp[(1) - (1)].pcha);
              (ctp_y_val.list).AGGREG = 1;
            }
        }
    break;

  case 106:
#line 1332 "../../../src/ctp/src/ctp_y.y"
    {
          struct ctp_expr expr1;
          char           *LocalName;
          char            Buffer[ 40 ];
          long            left;
          long            right;
          long            left_bnd;
          long            right_bnd;
          long            in_bound;
          long            out_bound;
          long             mode;
          long             flag;

          flag = (ctp_y_vsp[(1) - (1)].name).FLAG;

          if ( ( flag != 0          ) &&
               ( flag != CTP_EVENT  ) &&
               ( flag != CTP_STABLE ) )
          {
            if ( ( flag != CTP_RANGE     ) &&
                 ( flag != CTP_REV_RANGE ) )
            {
              {
                sprintf( Buffer, "%ld", (ctp_y_vsp[(1) - (1)].name).LEFT );

                expr1.IDENT = Buffer;
                expr1.VEX   = (vexexpr *)0;
                expr1.TYPE  = -1;

                (ctp_y_val.list) = ctp_crtvex( NOPS, expr1, CTP_EMPSTR, -1, -1);
              }
            }
            else
            {
              autexit( 1 );
            }
          }
          else
          if ( ( (ctp_y_vsp[(1) - (1)].name).NAME[0] == '"' ) ||
               ( (ctp_y_vsp[(1) - (1)].name).NAME[0] == '\'') )
          {
            expr1.IDENT = (ctp_y_vsp[(1) - (1)].name).NAME;
            expr1.VEX   = (vexexpr *)0;
            expr1.TYPE  = -1;

            (ctp_y_val.list) = ctp_crtvex( NOPS ,expr1, CTP_EMPSTR, -1, -1); /* as for literal */
          }
          else
          {
            LocalName = CTP_MODNAM;
            mode = chktab (hshtab,(ctp_y_vsp[(1) - (1)].name).NAME,LocalName,CTP_SYMDFN);

            if( mode == 0 )
            {
              my_ctp_error (17,(ctp_y_vsp[(1) - (1)].name).NAME);
            }

            left_bnd  = chktab (hshtab,(ctp_y_vsp[(1) - (1)].name).NAME,LocalName,CTP_WMNDFN);
            right_bnd = chktab (hshtab,(ctp_y_vsp[(1) - (1)].name).NAME,LocalName,CTP_WMXDFN);
              
            left  = (ctp_y_vsp[(1) - (1)].name).LEFT;
            right = (ctp_y_vsp[(1) - (1)].name).RIGHT;

            {
              long  type;

              expr1.IDENT = (ctp_y_vsp[(1) - (1)].name).NAME;
              type = chktab(hshtab,(ctp_y_vsp[(1) - (1)].name).NAME,LocalName,CTP_TYPDFN);
              expr1.TYPE = type;
              expr1.SIGNED = chktab (hshtab,(ctp_y_vsp[(1) - (1)].name).NAME,LocalName,CTP_SUNDFN);

              {
                expr1 = ctp_crtvex (NOPI,expr1,CTP_EMPSTR,left,right);
              }

              if( flag == CTP_EVENT )
              {
                (ctp_y_val.list) = ctp_crtvex (VEX_EVENT,expr1,CTP_EMPSTR,left,right);
              }
              else
              if( flag == CTP_STABLE )
              {
                expr1 = ctp_crtvex(VEX_EVENT,expr1,CTP_EMPSTR,left,right);
                (ctp_y_val.list)    = ctp_crtvex (VEX_NOT,expr1,CTP_EMPSTR,-1,-1);
              }
              else
              {
                (ctp_y_val.list) = expr1;
              }
            }
          }
        }
    break;

  case 107:
#line 1425 "../../../src/ctp/src/ctp_y.y"
    {
          struct ctp_expr expr1;

          expr1.IDENT  = (ctp_y_vsp[(1) - (1)].name).NAME;
          expr1.TYPE   = (ctp_y_vsp[(1) - (1)].name).TYPE;
          expr1.SIGNED = (ctp_y_vsp[(1) - (1)].name).SIGNED;
          expr1.VEX    = (vexexpr *)(ctp_y_vsp[(1) - (1)].name).LEFT;

          expr1 = ctp_crtvex(SUBVAR,expr1,CTP_EMPSTR,expr1.VEX->LEFT,expr1.VEX->RIGHT);

          (ctp_y_val.list) = expr1;
        }
    break;

  case 108:
#line 1443 "../../../src/ctp/src/ctp_y.y"
    {
            char       *LocalName;
            ctp_vexstr *VexStr;
            chain_list *ScanChain;
            vexexpr    *VexExpr;
            long        Def;

            ScanChain = (ctp_y_vsp[(3) - (3)].pcha);

            if ( ( ScanChain       == (chain_list *)0 ) ||
                 ( ScanChain->NEXT != (chain_list *)0 ) )
            {
              my_ctp_error(122,NULL);
            }

            LocalName = CTP_MODNAM;
            Def = chktab (hshtab,(ctp_y_vsp[(1) - (3)].name).NAME,LocalName,CTP_SYMDFN);

            if ( Def == CTP_TPEDFN )
            {
              VexStr = (ctp_vexstr *)ScanChain->DATA;

              VexExpr = createvexfunc( (ctp_y_vsp[(1) - (3)].name).NAME, VexStr->VEX->WIDTH );
              addvexhexpr( VexExpr, VexStr->VEX );

              autfreeheap( VexStr, sizeof( ctp_vexstr ) );

              (ctp_y_val.name).NAME    = (ctp_y_vsp[(1) - (3)].name).NAME;
              (ctp_y_val.name).TYPE    = chktab (hshtab,(ctp_y_vsp[(1) - (3)].name).NAME,LocalName,CTP_TYPDFN);
              (ctp_y_val.name).SIGNED  = chktab (hshtab,(ctp_y_vsp[(1) - (3)].name).NAME,LocalName,CTP_SUNDFN);
              (ctp_y_val.name).FLAG    = 0;
              (ctp_y_val.name).LEFT    = (long)VexExpr;
              (ctp_y_val.name).RIGHT   = 0;

              freechain( (ctp_y_vsp[(3) - (3)].pcha) );
            }
            else
            {
              my_ctp_error(122, (ctp_y_vsp[(1) - (3)].name).NAME);
            }
          }
    break;

  case 109:
#line 1488 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_EQ; }
    break;

  case 110:
#line 1490 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_NE; }
    break;

  case 111:
#line 1492 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_GE; }
    break;

  case 112:
#line 1494 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_GT; }
    break;

  case 113:
#line 1496 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_LE; }
    break;

  case 114:
#line 1498 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_LT; }
    break;

  case 115:
#line 1500 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_EQUIV; }
    break;

  case 116:
#line 1502 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = VEX_IMPLY; }
    break;

  case 117:
#line 1507 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.text) = (ctp_y_vsp[(1) - (1)].text); }
    break;

  case 118:
#line 1509 "../../../src/ctp/src/ctp_y.y"
    { 
                (ctp_y_val.text) = (ctp_y_vsp[(1) - (1)].text); }
    break;

  case 119:
#line 1512 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.text) = (ctp_y_vsp[(1) - (1)].text); }
    break;

  case 120:
#line 1514 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.text) = (ctp_y_vsp[(1) - (1)].text); }
    break;

  case 121:
#line 1516 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.text) = namealloc( "'1'" ); }
    break;

  case 122:
#line 1518 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.text) = namealloc( "'0'" ); }
    break;

  case 123:
#line 1526 "../../../src/ctp/src/ctp_y.y"
    {
            if ( (ctp_y_vsp[(3) - (4)].pcha) != (chain_list *)0 )
            {
              (ctp_y_vsp[(2) - (4)].pcha)->NEXT = reverse( (ctp_y_vsp[(3) - (4)].pcha) );
            }

            (ctp_y_val.pcha) = (ctp_y_vsp[(2) - (4)].pcha);
          }
    break;

  case 124:
#line 1538 "../../../src/ctp/src/ctp_y.y"
    { 
            (ctp_y_val.pcha) = (chain_list *)0;
          }
    break;

  case 125:
#line 1544 "../../../src/ctp/src/ctp_y.y"
    {
            if ( (ctp_y_vsp[(1) - (3)].pcha) != (chain_list *)0 )
            {
              (ctp_y_vsp[(3) - (3)].pcha)->NEXT = (ctp_y_vsp[(1) - (3)].pcha);
            }

            (ctp_y_val.pcha) = (ctp_y_vsp[(3) - (3)].pcha);
          }
    break;

  case 126:
#line 1556 "../../../src/ctp/src/ctp_y.y"
    { 
            ctp_vexstr *VexStr;

            VexStr  = (ctp_vexstr *)autallocheap( sizeof( ctp_vexstr ) );
            *VexStr = (ctp_y_vsp[(1) - (1)].list);

            (ctp_y_val.pcha) = addchain( (chain_list *)0, VexStr );
          }
    break;

  case 127:
#line 1567 "../../../src/ctp/src/ctp_y.y"
    {
            ctp_vexstr *VexStr;

            VexStr  = (ctp_vexstr *)autallocheap( sizeof( ctp_vexstr ) );
            *VexStr = ctp_crtvex( VEX_OTHERS, (ctp_y_vsp[(3) - (3)].list),CTP_EMPSTR,-1,-1);

            (ctp_y_val.pcha) = addchain( (chain_list *)0, VexStr );
          }
    break;

  case 128:
#line 1579 "../../../src/ctp/src/ctp_y.y"
    {
           authelem *valbitstr;
           char     *codedsigname;
           char     *LocalName;
           char      buffer[128];

           LocalName = CTP_MODNAM;

           (ctp_y_val.name).NAME = (ctp_y_vsp[(1) - (1)].text);
           (ctp_y_val.name).FLAG = 0;

           (ctp_y_val.name).TYPE   = chktab (hshtab,(ctp_y_vsp[(1) - (1)].text),LocalName,CTP_TYPDFN);
           (ctp_y_val.name).LEFT   = chktab (hshtab,(ctp_y_vsp[(1) - (1)].text),LocalName,CTP_WMNDFN);
           (ctp_y_val.name).RIGHT  = chktab (hshtab,(ctp_y_vsp[(1) - (1)].text),LocalName,CTP_WMXDFN);
           (ctp_y_val.name).SIGNED = chktab (hshtab,(ctp_y_vsp[(1) - (1)].text),LocalName,CTP_SUNDFN);
         }
    break;

  case 129:
#line 1596 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.name) = (ctp_y_vsp[(1) - (1)].name); }
    break;

  case 130:
#line 1598 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.name) = (ctp_y_vsp[(1) - (1)].name); }
    break;

  case 131:
#line 1600 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.name) = (ctp_y_vsp[(1) - (1)].name); }
    break;

  case 132:
#line 1606 "../../../src/ctp/src/ctp_y.y"
    {
            char       *LocalName;
            ctp_vexstr *VexStr;
            chain_list *ScanChain;
            vexexpr    *VexExpr;
            vexexpr    *VexRet;
            long        Index;
            long         Error;
            long        Def;

            ScanChain = (ctp_y_vsp[(2) - (2)].pcha);

            if ( ScanChain == (chain_list *)0 )
            {
              my_ctp_error(114,NULL);
            }

            LocalName = CTP_MODNAM;
            Def = chktab (hshtab,(ctp_y_vsp[(1) - (2)].text),LocalName,CTP_SYMDFN);

            if ( ScanChain->NEXT != (chain_list *)0 )
            {
              if ( ( ! Def                                    ) || 
                   ( ScanChain->NEXT->NEXT != (chain_list *)0 ) )
              {
                my_ctp_error(118,(ctp_y_vsp[(1) - (2)].text));
              }

              /* ICI */

              (ctp_y_val.name).NAME   = (ctp_y_vsp[(1) - (2)].text);
              (ctp_y_val.name).TYPE   = chktab (hshtab,(ctp_y_vsp[(1) - (2)].text),LocalName,CTP_TYPDFN);
              (ctp_y_val.name).SIGNED = chktab (hshtab,(ctp_y_vsp[(1) - (2)].text),LocalName,CTP_SUNDFN);
              (ctp_y_val.name).FLAG   = 0;

              VexStr  = (ctp_vexstr *)ScanChain->DATA;
              (ctp_y_val.name).LEFT = (long)VexStr->VEX;
              autfreeheap( VexStr, sizeof( ctp_vexstr ) );

              ScanChain = ScanChain->NEXT;
              VexStr   = (ctp_vexstr *)ScanChain->DATA;
              (ctp_y_val.name).RIGHT = (long)VexStr->VEX;
              autfreeheap( VexStr, sizeof( ctp_vexstr ) );

              freechain( (ctp_y_vsp[(2) - (2)].pcha) );
            }
            else
            {
              VexStr = (ctp_vexstr *)ScanChain->DATA;
              Error  = ctp_vextonum( VexStr->VEX, &Index );

              (ctp_y_val.name).NAME   = (ctp_y_vsp[(1) - (2)].text);
              (ctp_y_val.name).TYPE   = chktab (hshtab,(ctp_y_vsp[(1) - (2)].text),LocalName,CTP_TYPDFN);
              (ctp_y_val.name).SIGNED = chktab (hshtab,(ctp_y_vsp[(1) - (2)].text),LocalName,CTP_SUNDFN);
              (ctp_y_val.name).FLAG   = 0;

              if ( Error )
              {
                my_ctp_error(36, (ctp_y_vsp[(1) - (2)].text));
              }
              else
              {
                (ctp_y_val.name).LEFT   = Index;
                (ctp_y_val.name).RIGHT  = Index;
              }

              autfreeheap( VexStr, sizeof( ctp_vexstr ) );
              freechain( ScanChain );
            }
          }
    break;

  case 133:
#line 1685 "../../../src/ctp/src/ctp_y.y"
    {
           char *LocalName;
           long  Left;
           long  Right;
           long   ErrorL;
           long   ErrorR;

           LocalName = CTP_MODNAM;

           ErrorL = ctp_vextonum( (ctp_y_vsp[(3) - (6)].list).VEX, &Left  );
           ErrorR = ctp_vextonum( (ctp_y_vsp[(5) - (6)].list).VEX, &Right );

           (ctp_y_val.name).NAME   = (ctp_y_vsp[(1) - (6)].text);
           (ctp_y_val.name).TYPE   = chktab (hshtab,(ctp_y_vsp[(1) - (6)].text),LocalName,CTP_TYPDFN);
           (ctp_y_val.name).SIGNED = chktab (hshtab,(ctp_y_vsp[(1) - (6)].text),LocalName,CTP_SUNDFN);
           (ctp_y_val.name).FLAG   = 0;

           if ( ( ! ErrorL ) && ( ! ErrorR ) )
           {
             if (((Left > Right) && ((ctp_y_vsp[(4) - (6)].valu) == CTP_UPTDFN)) ||
                  ((Left < Right) && ((ctp_y_vsp[(4) - (6)].valu) == CTP_DWTDFN)))
               my_ctp_error (32,(ctp_y_vsp[(1) - (6)].text));

             (ctp_y_val.name).LEFT   = Left;
             (ctp_y_val.name).RIGHT  = Right;
           }
           else
           {
             my_ctp_error (36,(ctp_y_vsp[(1) - (6)].text));
           }
         }
    break;

  case 134:
#line 1722 "../../../src/ctp/src/ctp_y.y"
    {
            char *LocalName;
            long   type;
            long   flag;
            long   mode;
            long  AttrLeft;
            long  AttrRight;
            long  AttrLow;
            long  AttrHigh;

            LocalName = CTP_MODNAM;
            mode = chktab (hshtab,(ctp_y_vsp[(1) - (3)].name).NAME,LocalName,CTP_SYMDFN);
            type = chktab (hshtab,(ctp_y_vsp[(1) - (3)].name).NAME,LocalName,CTP_TYPDFN);
            flag = (ctp_y_vsp[(3) - (3)].valu);

            (ctp_y_val.name).NAME   = (ctp_y_vsp[(1) - (3)].name).NAME;
            (ctp_y_val.name).TYPE   = type;
            (ctp_y_val.name).LEFT   = -1;
            (ctp_y_val.name).RIGHT  = -1;
            (ctp_y_val.name).SIGNED = chktab (hshtab,(ctp_y_vsp[(1) - (3)].name).NAME,LocalName,CTP_SUNDFN);
            (ctp_y_val.name).FLAG   = (ctp_y_vsp[(3) - (3)].valu);

            if ( ( flag == CTP_STABLE ) ||
                 ( flag == CTP_EVENT  ) )
            {
              if ( LocalName != CTP_MODNAM )
                my_ctp_error (79,(ctp_y_vsp[(1) - (3)].name));
            }
            else
            {
              AttrLeft  = chktab( hshtab,(ctp_y_vsp[(1) - (3)].name).NAME,LocalName,CTP_ATLDFN);
              AttrRight = chktab( hshtab,(ctp_y_vsp[(1) - (3)].name).NAME,LocalName,CTP_ATRDFN);

              {
                if ( AttrLeft > AttrRight )
                {
                  AttrLow  = AttrRight;
                  AttrHigh = AttrLeft;
                }
                else
                {
                  AttrHigh = AttrRight;
                  AttrLow  = AttrLeft;
                }
              }

              switch ( flag )
              {
                case CTP_LEFT   : (ctp_y_val.name).LEFT = AttrLeft;
                break;

                case CTP_RIGHT  : (ctp_y_val.name).LEFT = AttrRight;
                break;

                case CTP_LOW    : (ctp_y_val.name).LEFT = AttrLow;
                break;

                case CTP_HIGH   : (ctp_y_val.name).LEFT = AttrHigh;
                break;

                case CTP_LENGTH : (ctp_y_val.name).LEFT = 1 + (AttrHigh - AttrLow);
                break;

                case CTP_RANGE  : (ctp_y_val.name).LEFT  = AttrLeft;
                                  (ctp_y_val.name).RIGHT = AttrRight;
                break;

                case CTP_REV_RANGE : (ctp_y_val.name).LEFT  = AttrRight;
                                     (ctp_y_val.name).RIGHT = AttrLeft;
                break;
              }
            }
          }
    break;

  case 135:
#line 1798 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_STABLE; }
    break;

  case 136:
#line 1799 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_EVENT; }
    break;

  case 137:
#line 1800 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_LEFT; }
    break;

  case 138:
#line 1801 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_RIGHT; }
    break;

  case 139:
#line 1802 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_LOW; }
    break;

  case 140:
#line 1803 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_HIGH; }
    break;

  case 141:
#line 1804 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_LENGTH; }
    break;

  case 142:
#line 1805 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_RANGE; }
    break;

  case 143:
#line 1806 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.valu) = CTP_REV_RANGE; }
    break;

  case 144:
#line 1811 "../../../src/ctp/src/ctp_y.y"
    { CTP_NM1LST = addchain (CTP_NM1LST,(ctp_y_vsp[(1) - (1)].text)); }
    break;

  case 147:
#line 1820 "../../../src/ctp/src/ctp_y.y"
    { 
                  CTP_NM1LST = addchain (CTP_NM1LST,(ctp_y_vsp[(3) - (3)].text));
                }
    break;

  case 148:
#line 1827 "../../../src/ctp/src/ctp_y.y"
    { (ctp_y_val.text) = (ctp_y_vsp[(1) - (1)].text); }
    break;

  case 149:
#line 1832 "../../../src/ctp/src/ctp_y.y"
    { ctp_y_errok; }
    break;

  case 150:
#line 1837 "../../../src/ctp/src/ctp_y.y"
    { ctp_y_errok; }
    break;

  case 151:
#line 1842 "../../../src/ctp/src/ctp_y.y"
    { ctp_y_errok; }
    break;


/* Line 1267 of yacc.c.  */
#line 3577 "y.tab.c"
      default: break;
    }
  CTL_Y__SYMBOL_PRINT ("-> $$ =", ctp_y_r1[ctp_y_n], &ctp_y_val, &ctp_y_loc);

  CTL_Y_POPSTACK (ctp_y_len);
  ctp_y_len = 0;
  CTL_Y__STACK_PRINT (ctp_y_ss, ctp_y_ssp);

  *++ctp_y_vsp = ctp_y_val;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  ctp_y_n = ctp_y_r1[ctp_y_n];

  ctp_y_state = ctp_y_pgoto[ctp_y_n - CTL_Y_NTOKENS] + *ctp_y_ssp;
  if (0 <= ctp_y_state && ctp_y_state <= CTL_Y_LAST && ctp_y_check[ctp_y_state] == *ctp_y_ssp)
    ctp_y_state = ctp_y_table[ctp_y_state];
  else
    ctp_y_state = ctp_y_defgoto[ctp_y_n - CTL_Y_NTOKENS];

  goto ctp_y_newstate;


/*------------------------------------.
| ctp_y_errlab -- here on detecting error |
`------------------------------------*/
ctp_y_errlab:
  /* If not already recovering from an error, report this error.  */
  if (!ctp_y_errstatus)
    {
      ++ctp_y_nerrs;
#if ! CTL_Y_ERROR_VERBOSE
      ctp_y_error (CTL_Y__("syntax error"));
#else
      {
	CTL_Y_SIZE_T ctp_y_size = ctp_y_syntax_error (0, ctp_y_state, ctp_y_char);
	if (ctp_y_msg_alloc < ctp_y_size && ctp_y_msg_alloc < CTL_Y_STACK_ALLOC_MAXIMUM)
	  {
	    CTL_Y_SIZE_T ctp_y_alloc = 2 * ctp_y_size;
	    if (! (ctp_y_size <= ctp_y_alloc && ctp_y_alloc <= CTL_Y_STACK_ALLOC_MAXIMUM))
	      ctp_y_alloc = CTL_Y_STACK_ALLOC_MAXIMUM;
	    if (ctp_y_msg != ctp_y_msgbuf)
	      CTL_Y_STACK_FREE (ctp_y_msg);
	    ctp_y_msg = (char *) CTL_Y_STACK_ALLOC (ctp_y_alloc);
	    if (ctp_y_msg)
	      ctp_y_msg_alloc = ctp_y_alloc;
	    else
	      {
		ctp_y_msg = ctp_y_msgbuf;
		ctp_y_msg_alloc = sizeof ctp_y_msgbuf;
	      }
	  }

	if (0 < ctp_y_size && ctp_y_size <= ctp_y_msg_alloc)
	  {
	    (void) ctp_y_syntax_error (ctp_y_msg, ctp_y_state, ctp_y_char);
	    ctp_y_error (ctp_y_msg);
	  }
	else
	  {
	    ctp_y_error (CTL_Y__("syntax error"));
	    if (ctp_y_size != 0)
	      goto ctp_y_exhaustedlab;
	  }
      }
#endif
    }



  if (ctp_y_errstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (ctp_y_char <= CTL_Y_EOF)
	{
	  /* Return failure if at end of input.  */
	  if (ctp_y_char == CTL_Y_EOF)
	    CTL_Y_ABORT;
	}
      else
	{
	  ctp_y_destruct ("Error: discarding",
		      ctp_y_token, &ctp_y_lval);
	  ctp_y_char = CTL_Y_EMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto ctp_y_errlab1;


/*---------------------------------------------------.
| ctp_y_errorlab -- error raised explicitly by CTL_Y_ERROR.  |
`---------------------------------------------------*/
ctp_y_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     CTL_Y_ERROR and the label ctp_y_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto ctp_y_errorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this CTL_Y_ERROR.  */
  CTL_Y_POPSTACK (ctp_y_len);
  ctp_y_len = 0;
  CTL_Y__STACK_PRINT (ctp_y_ss, ctp_y_ssp);
  ctp_y_state = *ctp_y_ssp;
  goto ctp_y_errlab1;


/*-------------------------------------------------------------.
| ctp_y_errlab1 -- common code for both syntax error and CTL_Y_ERROR.  |
`-------------------------------------------------------------*/
ctp_y_errlab1:
  ctp_y_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      ctp_y_n = ctp_y_pact[ctp_y_state];
      if (ctp_y_n != CTL_Y_PACT_NINF)
	{
	  ctp_y_n += CTL_Y_TERROR;
	  if (0 <= ctp_y_n && ctp_y_n <= CTL_Y_LAST && ctp_y_check[ctp_y_n] == CTL_Y_TERROR)
	    {
	      ctp_y_n = ctp_y_table[ctp_y_n];
	      if (0 < ctp_y_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (ctp_y_ssp == ctp_y_ss)
	CTL_Y_ABORT;


      ctp_y_destruct ("Error: popping",
		  ctp_y_stos[ctp_y_state], ctp_y_vsp);
      CTL_Y_POPSTACK (1);
      ctp_y_state = *ctp_y_ssp;
      CTL_Y__STACK_PRINT (ctp_y_ss, ctp_y_ssp);
    }

  if (ctp_y_n == CTL_Y_FINAL)
    CTL_Y_ACCEPT;

  *++ctp_y_vsp = ctp_y_lval;


  /* Shift the error token.  */
  CTL_Y__SYMBOL_PRINT ("Shifting", ctp_y_stos[ctp_y_n], ctp_y_vsp, ctp_y_lsp);

  ctp_y_state = ctp_y_n;
  goto ctp_y_newstate;


/*-------------------------------------.
| ctp_y_acceptlab -- CTL_Y_ACCEPT comes here.  |
`-------------------------------------*/
ctp_y_acceptlab:
  ctp_y_result = 0;
  goto ctp_y_return;

/*-----------------------------------.
| ctp_y_abortlab -- CTL_Y_ABORT comes here.  |
`-----------------------------------*/
ctp_y_abortlab:
  ctp_y_result = 1;
  goto ctp_y_return;

#ifndef ctp_y_overflow
/*-------------------------------------------------.
| ctp_y_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
ctp_y_exhaustedlab:
  ctp_y_error (CTL_Y__("memory exhausted"));
  ctp_y_result = 2;
  /* Fall through.  */
#endif

ctp_y_return:
  if (ctp_y_char != CTL_Y_EOF && ctp_y_char != CTL_Y_EMPTY)
     ctp_y_destruct ("Cleanup: discarding lookahead",
		 ctp_y_token, &ctp_y_lval);
  /* Do not reclaim the symbols of the rule which action triggered
     this CTL_Y_ABORT or CTL_Y_ACCEPT.  */
  CTL_Y_POPSTACK (ctp_y_len);
  CTL_Y__STACK_PRINT (ctp_y_ss, ctp_y_ssp);
  while (ctp_y_ssp != ctp_y_ss)
    {
      ctp_y_destruct ("Cleanup: popping",
		  ctp_y_stos[*ctp_y_ssp], ctp_y_vsp);
      CTL_Y_POPSTACK (1);
    }
#ifndef ctp_y_overflow
  if (ctp_y_ss != ctp_y_ssa)
    CTL_Y_STACK_FREE (ctp_y_ss);
#endif
#if CTL_Y_ERROR_VERBOSE
  if (ctp_y_msg != ctp_y_msgbuf)
    CTL_Y_STACK_FREE (ctp_y_msg);
#endif
  /* Make sure CTL_Y_ID is used.  */
  return CTL_Y_ID (ctp_y_result);
}


#line 1845 "../../../src/ctp/src/ctp_y.y"


static struct dct_entry *addent (head , key)
struct dct_entry *head;
char             *key;

{
  struct dct_entry *entry = NULL;
  long              i;

  if (CTP_DCEHED == NULL)
    {
    CTP_DCEHED = (struct dct_entry *)
                 autallocblock (sizeof(struct dct_entry) * CTP_ALODFN);

    entry = CTP_DCEHED;
    for (i=1 ; i<CTP_ALODFN ; i++)
      {
      entry->next = entry + 1;
      entry++;
      }
    entry->next = NULL;
    }

  entry       = CTP_DCEHED;
  CTP_DCEHED  = CTP_DCEHED->next;

  entry->next = head;
  entry->data = NULL;
  entry->key  = key;

  return (entry);
}

static struct dct_recrd *addrcd (head , key)

struct dct_recrd *head;
char             *key;

{
  struct dct_recrd *recrd = NULL;
  long               i;

  if (CTP_DCRHED == NULL)
    {
    CTP_DCRHED = (struct dct_recrd *)
                 autallocblock (sizeof(struct dct_recrd) * CTP_ALODFN);

    recrd = CTP_DCRHED;
    for (i=1 ; i<CTP_ALODFN ; i++)
      {
      recrd->next = recrd + 1;
      recrd++;
      }
    recrd->next = NULL;
    }

  recrd           = CTP_DCRHED;
  CTP_DCRHED      = CTP_DCRHED->next;

  recrd->next     = head;
  recrd->key      = key;

  return (recrd);
}

static struct dct_entry **initab ()

{
  struct dct_entry **head = NULL;
  long                i;

  head = (struct dct_entry **)
         autallocblock (sizeof(struct dct_entry *) * CTP_HSZDFN);

  for (i=0 ; i<CTP_HSZDFN ; i++)
    head[i] = NULL;

  return (head);
}

static void addtab (head,key_str,ctx_str,field,valu)

struct dct_entry **head;
char              *key_str;
char              *ctx_str;
long               field;
long               valu;

{
  long              found = 0;
  long              index;
  struct dct_entry *entry_pnt;
  struct dct_recrd *recrd_pnt;

  index     = ((unsigned long) key_str) % CTP_HSZDFN;
  entry_pnt = head[index];

  while (entry_pnt != NULL)
    {
    if (entry_pnt->key == key_str)
      {
      found = 1;
      break;
      }
    entry_pnt = entry_pnt->next;
    }

  if (found == 0)
    {
    head[index] = addent (head[index],key_str);
    entry_pnt = head[index];
    }

  found = 0;
  recrd_pnt = entry_pnt->data;
  while (recrd_pnt != NULL)
    {
    if (recrd_pnt->key == ctx_str)
      {
      found = 1;
      break;
      }
    recrd_pnt = recrd_pnt->next;
    }

  if (found == 0)
    {
    entry_pnt->data = addrcd (entry_pnt->data,ctx_str);
    recrd_pnt       = entry_pnt->data ;
    }

  switch (field)
    {
      case CTP_MODDFN :
        recrd_pnt->fd0_val = valu;
        break;
      case CTP_SYMDFN :
        recrd_pnt->fd1_val = valu;
        break;
      case CTP_TYPDFN :
        recrd_pnt->fd2_val = valu;
        break;
      case CTP_SUNDFN :
        recrd_pnt->fd3_val = valu;
        break;
      case CTP_LBLDFN :
        recrd_pnt->fd4_val = valu;
        break;
      case CTP_WMXDFN :
        recrd_pnt->fd5_val = valu;
        break;
      case CTP_WMNDFN :
        recrd_pnt->fd6_val = valu;
        break;
      case CTP_ATLDFN :
        recrd_pnt->fd7_val = valu;
        break;
      case CTP_ATRDFN :
        recrd_pnt->fd8_val = valu;
        break;
      case CTP_PNTDFN :
        recrd_pnt->pnt_val = valu;
        break;
    }
}

static long chktab (head,key_str,ctx_str,field)

struct dct_entry **head;
char              *key_str;
char              *ctx_str;
long               field;

{
  long              found = 0;
  long              valu = 0;
  struct dct_entry *entry_pnt;
  struct dct_recrd *recrd_pnt;

  entry_pnt = head [((unsigned long)key_str) % CTP_HSZDFN];

  while (entry_pnt != NULL)
    {
    if (entry_pnt->key == key_str)
      {
      found = 1;
      break;
      }
    entry_pnt = entry_pnt->next;
    }

  if (found == 1)
    {
    found = 0;
    recrd_pnt = entry_pnt->data;
    while (recrd_pnt != NULL)
      {
      if (recrd_pnt->key == ctx_str)
        {
        found = 1;
        break;
        }
      recrd_pnt = recrd_pnt->next;
      }
    if (found == 1)
      {
      switch (field)
        {
        case CTP_MODDFN :
          valu = recrd_pnt->fd0_val;
          break;
        case CTP_SYMDFN :
          valu = recrd_pnt->fd1_val;
          break;
        case CTP_TYPDFN :
          valu = recrd_pnt->fd2_val;
          break;
        case CTP_SUNDFN :
          valu = recrd_pnt->fd3_val;
          break;
        case CTP_LBLDFN :
          valu = recrd_pnt->fd4_val;
          break;
        case CTP_WMXDFN :
          valu = recrd_pnt->fd5_val;
          break;
        case CTP_WMNDFN :
          valu = recrd_pnt->fd6_val;
          break;
        case CTP_ATLDFN :
          valu = recrd_pnt->fd7_val;
          break;
        case CTP_ATRDFN :
          valu = recrd_pnt->fd8_val;
          break;
        case CTP_PNTDFN :
          valu = recrd_pnt->pnt_val;
          break;
        }
      }
    }

  return (valu);
}

static void fretab (pt_hash)

struct dct_entry **pt_hash;
{
  struct dct_entry *pt_entry;
  struct dct_entry *pt_nxtentry;
  struct dct_recrd *pt_record;
  long              i;

  if (pt_hash != NULL)
    {
    for (i=0 ; i<CTP_HSZDFN ; i++)
      {
      if ((pt_entry = pt_hash[i]) != NULL)
        {
        while (pt_entry != NULL)
          {
          pt_record = pt_entry->data;

          while (pt_record->next != NULL)
            pt_record = pt_record->next;

          pt_record->next = CTP_DCRHED;
          CTP_DCRHED      = pt_entry->data;

          pt_nxtentry     = pt_entry->next;
          pt_entry->next  = CTP_DCEHED;
          CTP_DCEHED      = pt_entry;
          pt_entry        = pt_nxtentry;
          }
        }
      }
    autfreeblock(pt_hash);
    }
}

static void *ctp_addstr(object,mode,prtype,type,flag,name,left,right,exp)

char          object;
long           mode;
ctltype_list *prtype;
unsigned char type;
char          flag;
char         *name;
long          left;
long          right;
vexexpr      *exp;

{ 
  ctlform_list *CtlForm;
  ctldecl_list *CtlDeclar;
  void         *pnt    = NULL;
  vexexpr      *vex_pnt;
  long           bitsize;

  if ( object == 'F' )
  {
    CtlForm = addctlform( CTP_HEADFIG, name, exp );
    addctlline( CTP_HEADFIG, &CtlForm->LINE, CTP_LINNUM );

    return( (void *)CtlForm );
  }


  if ( (flag == 'A') ||
       (flag == 'U') )
  {
       /* ###------------------------------------------------------### */
       /*   if object is an array ...                                   */
       /* ###------------------------------------------------------### */

    if ( flag == 'A' )
    {
      vex_pnt = createvexatomvec( name, prtype->LEFT, prtype->RIGHT ); 
    }
    else
    {
      vex_pnt = createvexatomvec( name, left, right );
    }

    if ( prtype->INDEX == VEX_TYPE_SIGNED )
    {
      SetVexNodeSigned( vex_pnt );
    }

  }
  else
  if ( (flag == 'I') )
  {
       /* ###------------------------------------------------------### */
       /*   if object is an integer ...                            */
       /* ###------------------------------------------------------### */

      if ((left == -1 ) && (right == -1))
      {
        left  = prtype->LEFT;
        right = prtype->RIGHT;
      }

      bitsize = ctp_intSize( left, right );

      vex_pnt = createvexatomvec( name, bitsize - 1, 0 );

      if ( ( left  < 0 ) ||
           ( right < 0 ) )
      {
        SetVexNodeSigned( vex_pnt );
      }
  }
  else
  {
       /* ###------------------------------------------------------### */
       /*   if object is a scalar ...                                   */
       /* ###------------------------------------------------------### */
    vex_pnt = createvexatombit( name );
  }

  if ( object == 'C' )
  {
    CtlDeclar = addctldecldef( CTP_HEADFIG, vex_pnt );
    CtlDeclar->TYPE     = prtype;
    CtlDeclar->VEX_INIT = exp;
    addctlline( CTP_HEADFIG, &CtlDeclar->LINE, CTP_LINNUM );

    pnt = (void *)CtlDeclar;
  }
  else
  if ( object == 'V' )
  {
    CtlDeclar = addctldeclvar( CTP_HEADFIG, vex_pnt );
    CtlDeclar->TYPE     = prtype;
    addctlline( CTP_HEADFIG, &CtlDeclar->LINE, CTP_LINNUM );

    pnt = (void *)CtlDeclar;
  }
  else
  if ( object == 'A' )
  {
    CtlDeclar = addctldeclass( CTP_HEADFIG, vex_pnt );
    CtlDeclar->TYPE     = prtype;
    CtlDeclar->VEX_INIT = exp;
    addctlline( CTP_HEADFIG, &CtlDeclar->LINE, CTP_LINNUM );

    pnt = (void *)CtlDeclar;
  }
  else
  if ( object == 'I' )
  {
    CtlDeclar = addctldeclinit( CTP_HEADFIG, vex_pnt );
    CtlDeclar->TYPE     = prtype;
    CtlDeclar->VEX_INIT = exp;
    addctlline( CTP_HEADFIG, &CtlDeclar->LINE, CTP_LINNUM );

    pnt = (void *)CtlDeclar;
  }
  else
  if ( object == 'R' )
  {
    CtlDeclar = addctldeclreset( CTP_HEADFIG, vex_pnt );
    CtlDeclar->TYPE     = prtype;
    CtlDeclar->VEX_INIT = exp;
    addctlline( CTP_HEADFIG, &CtlDeclar->LINE, CTP_LINNUM );

    pnt = (void *)CtlDeclar;
  }

  return (pnt);
}

static ctltype_list *val_type(name)

 char *name;
{
  return( searchctltype( CTP_HEADFIG, name ) );
}

static ctltype_list *get_type(val)

  long val;
{
  ctltype_list *Type;

  for ( Type  = CTP_HEADFIG->TYPE;
        Type != (ctltype_list *)0;
        Type  = Type->NEXT )
  {
    if  ( Type->INDEX == val ) break;
  }

  return( Type );
}

int ctp_y_wrap ()
{
  return (1);
}


