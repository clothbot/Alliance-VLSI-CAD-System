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

/* All symbols defined below should begin with fbl_y_ or FBL_Y_, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define FBL_Y_BISON 1

/* Bison version.  */
#define FBL_Y_BISON_VERSION "2.3"

/* Skeleton name.  */
#define FBL_Y_SKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define FBL_Y_PURE 0

/* Using locations.  */
#define FBL_Y_LSP_NEEDED 0



/* Tokens.  */
#ifndef FBL_Y_TOKENTYPE
# define FBL_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum fbl_y_tokentype {
     tok_AND = 258,
     Pragma = 259,
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
     _BLOCK = 295,
     BODY = 296,
     BUFFER = 297,
     BUS = 298,
     Bar = 299,
     BasedInt = 300,
     BasedReal = 301,
     BitStringLit = 302,
     Box = 303,
     CASE = 304,
     COMPONENT = 305,
     CONFIGURATION = 306,
     CONSTANT = 307,
     CharacterLit = 308,
     Colon = 309,
     Comma = 310,
     DISCONNECT = 311,
     DOWNTO = 312,
     DecimalInt = 313,
     DecimalReal = 314,
     Dot = 315,
     DoubleStar = 316,
     ELSE = 317,
     ELSIF = 318,
     ENTITY = 319,
     ERROR = 320,
     FOR = 321,
     FUNCTION = 322,
     GENERATE = 323,
     GENERIC = 324,
     GUARDED = 325,
     IF = 326,
     IS = 327,
     Identifier = 328,
     LIBRARY = 329,
     LOOP = 330,
     LeftParen = 331,
     MAP = 332,
     MOD = 333,
     Minus = 334,
     NEW = 335,
     OF = 336,
     ON = 337,
     OPEN = 338,
     OTHERS = 339,
     _PACKAGE = 340,
     PORT = 341,
     PROCEDURE = 342,
     PROCESS = 343,
     Plus = 344,
     RANGE = 345,
     RECORD = 346,
     REGISTER = 347,
     REM = 348,
     REPORT = 349,
     RETURN = 350,
     RightParen = 351,
     SELECT = 352,
     SEVERITY = 353,
     SIGNAL = 354,
     _STABLE = 355,
     _EVENT = 356,
     SUBTYPE = 357,
     Semicolon = 358,
     Star = 359,
     StringLit = 360,
     THEN = 361,
     TO = 362,
     TRANSPORT = 363,
     FBHTYPE = 364,
     UNITS = 365,
     UNTIL = 366,
     USE = 367,
     VARIABLE = 368,
     VarAsgn = 369,
     WAIT = 370,
     WARNING = 371,
     WHEN = 372,
     WHILE = 373,
     WITH = 374
   };
#endif
/* Tokens.  */
#define tok_AND 258
#define Pragma 259
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
#define _BLOCK 295
#define BODY 296
#define BUFFER 297
#define BUS 298
#define Bar 299
#define BasedInt 300
#define BasedReal 301
#define BitStringLit 302
#define Box 303
#define CASE 304
#define COMPONENT 305
#define CONFIGURATION 306
#define CONSTANT 307
#define CharacterLit 308
#define Colon 309
#define Comma 310
#define DISCONNECT 311
#define DOWNTO 312
#define DecimalInt 313
#define DecimalReal 314
#define Dot 315
#define DoubleStar 316
#define ELSE 317
#define ELSIF 318
#define ENTITY 319
#define ERROR 320
#define FOR 321
#define FUNCTION 322
#define GENERATE 323
#define GENERIC 324
#define GUARDED 325
#define IF 326
#define IS 327
#define Identifier 328
#define LIBRARY 329
#define LOOP 330
#define LeftParen 331
#define MAP 332
#define MOD 333
#define Minus 334
#define NEW 335
#define OF 336
#define ON 337
#define OPEN 338
#define OTHERS 339
#define _PACKAGE 340
#define PORT 341
#define PROCEDURE 342
#define PROCESS 343
#define Plus 344
#define RANGE 345
#define RECORD 346
#define REGISTER 347
#define REM 348
#define REPORT 349
#define RETURN 350
#define RightParen 351
#define SELECT 352
#define SEVERITY 353
#define SIGNAL 354
#define _STABLE 355
#define _EVENT 356
#define SUBTYPE 357
#define Semicolon 358
#define Star 359
#define StringLit 360
#define THEN 361
#define TO 362
#define TRANSPORT 363
#define FBHTYPE 364
#define UNITS 365
#define UNTIL 366
#define USE 367
#define VARIABLE 368
#define VarAsgn 369
#define WAIT 370
#define WARNING 371
#define WHEN 372
#define WHILE 373
#define WITH 374




/* Copy the first part of user declarations.  */
#line 38 "../../../src/fvh/src/fbl_bcomp_y.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "mut.h"
#include "aut.h"
#include "abl.h"
#include "bdd.h"
#include "fvh.h"

#include "fbl_utype.h"
#include "fbl_bedef.h"
#include "fbl_bspec.h"
#include "fbl_byacc.h"

static struct dct_entry *addent ();
static struct dct_recrd *addrcd ();
static struct dct_entry **initab ();
static void addtab ();
static long chktab ();
static void fretab ();
void *fbl_addstr ();
long fbl_chkdcl ();
struct ptype *reversetype();
struct choice_chain *order_choice();


/* Enabling traces.  */
#ifndef FBL_Y_DEBUG
# define FBL_Y_DEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef FBL_Y_ERROR_VERBOSE
# undef FBL_Y_ERROR_VERBOSE
# define FBL_Y_ERROR_VERBOSE 1
#else
# define FBL_Y_ERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef FBL_Y_TOKEN_TABLE
# define FBL_Y_TOKEN_TABLE 0
#endif

#if ! defined FBL_Y_STYPE && ! defined FBL_Y_STYPE_IS_DECLARED
typedef union FBL_Y_STYPE
#line 66 "../../../src/fvh/src/fbl_bcomp_y.y"
{
	long		 valu;
	char		*text;
	struct ptype	*ptyp;
	struct fbpcs	proc;
        struct g_type dble;
        fbl_name  	name;   
	fbl_ablstr	list;
	struct fbtyp 	type;
	}
/* Line 187 of yacc.c.  */
#line 373 "y.tab.c"
	FBL_Y_STYPE;
# define fbl_y_stype FBL_Y_STYPE /* obsolescent; will be withdrawn */
# define FBL_Y_STYPE_IS_DECLARED 1
# define FBL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 386 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef FBL_Y_TYPE_UINT8
typedef FBL_Y_TYPE_UINT8 fbl_y_type_uint8;
#else
typedef unsigned char fbl_y_type_uint8;
#endif

#ifdef FBL_Y_TYPE_INT8
typedef FBL_Y_TYPE_INT8 fbl_y_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char fbl_y_type_int8;
#else
typedef short int fbl_y_type_int8;
#endif

#ifdef FBL_Y_TYPE_UINT16
typedef FBL_Y_TYPE_UINT16 fbl_y_type_uint16;
#else
typedef unsigned short int fbl_y_type_uint16;
#endif

#ifdef FBL_Y_TYPE_INT16
typedef FBL_Y_TYPE_INT16 fbl_y_type_int16;
#else
typedef short int fbl_y_type_int16;
#endif

#ifndef FBL_Y_SIZE_T
# ifdef __SIZE_TYPE__
#  define FBL_Y_SIZE_T __SIZE_TYPE__
# elif defined size_t
#  define FBL_Y_SIZE_T size_t
# elif ! defined FBL_Y_SIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define FBL_Y_SIZE_T size_t
# else
#  define FBL_Y_SIZE_T unsigned int
# endif
#endif

#define FBL_Y_SIZE_MAXIMUM ((FBL_Y_SIZE_T) -1)

#ifndef FBL_Y__
# if FBL_Y_ENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define FBL_Y__(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef FBL_Y__
#  define FBL_Y__(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define FBL_Y_USE(e) ((void) (e))
#else
# define FBL_Y_USE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define FBL_Y_ID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
FBL_Y_ID (int i)
#else
static int
FBL_Y_ID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined fbl_y_overflow || FBL_Y_ERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef FBL_Y_STACK_USE_ALLOCA
#  if FBL_Y_STACK_USE_ALLOCA
#   ifdef __GNUC__
#    define FBL_Y_STACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define FBL_Y_STACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define FBL_Y_STACK_ALLOC alloca
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

# ifdef FBL_Y_STACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define FBL_Y_STACK_FREE(Ptr) do { /* empty */; } while (FBL_Y_ID (0))
#  ifndef FBL_Y_STACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define FBL_Y_STACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define FBL_Y_STACK_ALLOC FBL_Y_MALLOC
#  define FBL_Y_STACK_FREE FBL_Y_FREE
#  ifndef FBL_Y_STACK_ALLOC_MAXIMUM
#   define FBL_Y_STACK_ALLOC_MAXIMUM FBL_Y_SIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined FBL_Y_MALLOC || defined malloc) \
	     && (defined FBL_Y_FREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef FBL_Y_MALLOC
#   define FBL_Y_MALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (FBL_Y_SIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef FBL_Y_FREE
#   define FBL_Y_FREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined fbl_y_overflow || FBL_Y_ERROR_VERBOSE */


#if (! defined fbl_y_overflow \
     && (! defined __cplusplus \
	 || (defined FBL_Y_STYPE_IS_TRIVIAL && FBL_Y_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union fbl_y_alloc
{
  fbl_y_type_int16 fbl_y_ss;
  FBL_Y_STYPE fbl_y_vs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define FBL_Y_STACK_GAP_MAXIMUM (sizeof (union fbl_y_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define FBL_Y_STACK_BYTES(N) \
     ((N) * (sizeof (fbl_y_type_int16) + sizeof (FBL_Y_STYPE)) \
      + FBL_Y_STACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef FBL_Y_COPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define FBL_Y_COPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define FBL_Y_COPY(To, From, Count)		\
      do					\
	{					\
	  FBL_Y_SIZE_T fbl_y_i;				\
	  for (fbl_y_i = 0; fbl_y_i < (Count); fbl_y_i++)	\
	    (To)[fbl_y_i] = (From)[fbl_y_i];		\
	}					\
      while (FBL_Y_ID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables FBL_Y_SIZE and FBL_Y_STACKSIZE give the old and new number of
   elements in the stack, and FBL_Y_PTR gives the new location of the
   stack.  Advance FBL_Y_PTR to a properly aligned location for the next
   stack.  */
# define FBL_Y_STACK_RELOCATE(Stack)					\
    do									\
      {									\
	FBL_Y_SIZE_T fbl_y_newbytes;						\
	FBL_Y_COPY (&fbl_y_ptr->Stack, Stack, fbl_y_size);				\
	Stack = &fbl_y_ptr->Stack;						\
	fbl_y_newbytes = fbl_y_stacksize * sizeof (*Stack) + FBL_Y_STACK_GAP_MAXIMUM; \
	fbl_y_ptr += fbl_y_newbytes / sizeof (*fbl_y_ptr);				\
      }									\
    while (FBL_Y_ID (0))

#endif

/* FBL_Y_FINAL -- State number of the termination state.  */
#define FBL_Y_FINAL  3
/* FBL_Y_LAST -- Last index in FBL_Y_TABLE.  */
#define FBL_Y_LAST   369

/* FBL_Y_NTOKENS -- Number of terminals.  */
#define FBL_Y_NTOKENS  120
/* FBL_Y_NNTS -- Number of nonterminals.  */
#define FBL_Y_NNTS  159
/* FBL_Y_NRULES -- Number of rules.  */
#define FBL_Y_NRULES  256
/* FBL_Y_NRULES -- Number of states.  */
#define FBL_Y_NSTATES  411

/* FBL_Y_TRANSLATE(FBL_Y_LEX) -- Bison symbol number corresponding to FBL_Y_LEX.  */
#define FBL_Y_UNDEFTOK  2
#define FBL_Y_MAXUTOK   374

#define FBL_Y_TRANSLATE(FBL_Y_X)						\
  ((unsigned int) (FBL_Y_X) <= FBL_Y_MAXUTOK ? fbl_y_translate[FBL_Y_X] : FBL_Y_UNDEFTOK)

/* FBL_Y_TRANSLATE[FBL_Y_LEX] -- Bison symbol number corresponding to FBL_Y_LEX.  */
static const fbl_y_type_uint8 fbl_y_translate[] =
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
     115,   116,   117,   118,   119
};

#if FBL_Y_DEBUG
/* FBL_Y_PRHS[FBL_Y_N] -- Index of the first RHS symbol of rule number FBL_Y_N in
   FBL_Y_RHS.  */
static const fbl_y_type_uint16 fbl_y_prhs[] =
{
       0,     0,     3,     4,     8,     9,    12,    15,    17,    19,
      21,    23,    25,    29,    32,    33,    37,    39,    40,    43,
      45,    47,    52,    53,    57,    61,    63,    65,    67,    71,
      72,    81,    84,    85,    87,    91,    94,    98,   100,   102,
     103,   105,   111,   115,   118,   119,   123,   131,   133,   134,
     136,   137,   139,   141,   143,   144,   145,   159,   162,   164,
     165,   168,   170,   172,   174,   176,   178,   181,   183,   191,
     194,   202,   204,   205,   212,   214,   216,   219,   220,   227,
     230,   232,   237,   238,   242,   244,   246,   248,   250,   252,
     259,   264,   268,   272,   274,   277,   279,   281,   282,   284,
     286,   288,   289,   292,   294,   296,   298,   300,   303,   304,
     315,   317,   320,   322,   325,   327,   330,   332,   334,   341,
     342,   348,   349,   360,   361,   365,   366,   369,   370,   371,
     372,   373,   387,   389,   390,   393,   395,   397,   399,   400,
     402,   406,   409,   410,   414,   416,   417,   420,   422,   424,
     426,   428,   430,   436,   441,   443,   444,   445,   457,   458,
     459,   466,   467,   470,   471,   481,   482,   485,   486,   492,
     493,   497,   501,   502,   506,   507,   511,   513,   514,   518,
     521,   522,   526,   528,   530,   532,   534,   535,   538,   539,
     542,   544,   546,   548,   550,   552,   554,   556,   560,   564,
     568,   572,   574,   578,   582,   586,   590,   592,   596,   598,
     600,   604,   606,   608,   611,   613,   615,   617,   619,   621,
     623,   625,   627,   629,   631,   633,   635,   639,   641,   643,
     645,   647,   652,   659,   663,   665,   667,   668,   672,   673,
     677,   678,   680,   681,   683,   687,   688,   690,   691,   693,
     695,   697,   700,   702,   704,   706,   708
};

/* FBL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const fbl_y_type_int16 fbl_y_rhs[] =
{
     121,     0,    -1,    -1,   122,   124,   123,    -1,    -1,   124,
     123,    -1,   131,   125,    -1,   126,    -1,   127,    -1,     1,
      -1,   139,    -1,   153,    -1,    74,   129,   277,    -1,    73,
     130,    -1,    -1,   130,    55,    73,    -1,   132,    -1,    -1,
     132,   133,    -1,   128,    -1,   134,    -1,   112,   136,   135,
     277,    -1,    -1,   135,    55,   136,    -1,   138,    60,   137,
      -1,   271,    -1,    31,    -1,   271,    -1,   138,    60,   271,
      -1,    -1,    64,   271,    72,   140,   146,   278,   270,   277,
      -1,    64,     1,    -1,    -1,   142,    -1,    76,   144,   276,
      -1,    90,   144,    -1,   275,   145,   275,    -1,   107,    -1,
      57,    -1,    -1,   147,    -1,    86,    76,   148,   276,   277,
      -1,    86,     1,   277,    -1,   150,   149,    -1,    -1,   149,
     277,   150,    -1,   151,   263,    54,   152,   181,   141,   182,
      -1,     1,    -1,    -1,    99,    -1,    -1,    12,    -1,    25,
      -1,    13,    -1,    -1,    -1,    32,    73,    81,   271,    72,
     154,   156,   155,     5,   183,   278,   270,   277,    -1,    32,
       1,    -1,   157,    -1,    -1,   157,   158,    -1,   162,    -1,
     163,    -1,   167,    -1,   160,    -1,   159,    -1,     1,   277,
      -1,     4,    -1,    52,    73,    54,   181,   141,   161,   277,
      -1,   114,   256,    -1,    99,   263,    54,   181,   141,   182,
     277,    -1,   164,    -1,    -1,   109,    73,    72,   166,   165,
     277,    -1,   170,    -1,   174,    -1,     1,   277,    -1,    -1,
     102,    73,    72,   169,   168,   277,    -1,   181,   141,    -1,
     171,    -1,    76,   173,   172,   276,    -1,    -1,   172,    55,
     173,    -1,    73,    -1,    53,    -1,   175,    -1,   176,    -1,
     177,    -1,    33,    76,   178,   276,    81,   169,    -1,    33,
     179,    81,   169,    -1,   258,    90,    48,    -1,    76,   180,
     276,    -1,   144,    -1,   258,   143,    -1,   181,    -1,   271,
      -1,    -1,    92,    -1,    43,    -1,   184,    -1,    -1,   184,
     185,    -1,   196,    -1,   186,    -1,   189,    -1,   190,    -1,
       1,   277,    -1,    -1,   273,    40,   267,     5,   187,   188,
     278,    40,   266,   277,    -1,   184,    -1,   273,   191,    -1,
     191,    -1,   273,   192,    -1,   192,    -1,   273,   194,    -1,
     194,    -1,   214,    -1,   272,    15,   269,   193,   233,   277,
      -1,    -1,   193,   233,   117,   244,    62,    -1,    -1,   119,
     244,   195,    97,   272,    15,   269,   229,   228,   277,    -1,
      -1,   273,   197,   199,    -1,    -1,   198,   199,    -1,    -1,
      -1,    -1,    -1,    88,   200,   207,   201,   204,     5,   202,
     211,   203,   278,    88,   266,   277,    -1,   205,    -1,    -1,
     205,   206,    -1,   160,    -1,   163,    -1,   167,    -1,    -1,
     208,    -1,    76,   209,    96,    -1,   258,   210,    -1,    -1,
      55,   258,   210,    -1,   212,    -1,    -1,   212,   213,    -1,
     214,    -1,   215,    -1,   217,    -1,   223,    -1,   236,    -1,
      34,   244,   240,   241,   277,    -1,   272,    15,   233,   277,
      -1,   244,    -1,    -1,    -1,    71,   239,   106,   218,   211,
     219,   220,   222,   278,    71,   277,    -1,    -1,    -1,   220,
      63,   239,   106,   221,   211,    -1,    -1,    62,   211,    -1,
      -1,    49,   244,   224,    72,   226,   225,   278,    49,   277,
      -1,    -1,   225,   226,    -1,    -1,   117,   234,    39,   227,
     211,    -1,    -1,   228,    55,   229,    -1,   233,   117,   230,
      -1,    -1,   238,   231,   232,    -1,    -1,   232,    44,   238,
      -1,   216,    -1,    -1,   238,   235,   237,    -1,    23,   277,
      -1,    -1,   237,    44,   238,    -1,   256,    -1,    84,    -1,
     258,    -1,   244,    -1,    -1,    94,   242,    -1,    -1,    98,
     243,    -1,   105,    -1,    65,    -1,   116,    -1,   245,    -1,
     246,    -1,   247,    -1,   248,    -1,   249,     3,   249,    -1,
     245,     3,   249,    -1,   249,    24,   249,    -1,   246,    24,
     249,    -1,   249,    -1,   249,    18,   249,    -1,   249,    21,
     249,    -1,   249,    26,   249,    -1,   248,    26,   249,    -1,
     250,    -1,   250,   255,   250,    -1,   251,    -1,   252,    -1,
     251,    37,   252,    -1,   253,    -1,   254,    -1,    22,   254,
      -1,   256,    -1,   257,    -1,   258,    -1,     7,    -1,    19,
      -1,    10,    -1,    11,    -1,    15,    -1,    17,    -1,    53,
      -1,   105,    -1,    47,    -1,    76,   244,    96,    -1,   271,
      -1,   259,    -1,   260,    -1,   261,    -1,   271,    76,   275,
     276,    -1,   271,    76,   275,   145,   275,   276,    -1,   271,
      38,   262,    -1,   100,    -1,   101,    -1,    -1,    73,   264,
     265,    -1,    -1,   265,    55,    73,    -1,    -1,   274,    -1,
      -1,   268,    -1,    76,   244,   276,    -1,    -1,    70,    -1,
      -1,   271,    -1,    73,    -1,   258,    -1,   274,    54,    -1,
      73,    -1,    36,    -1,    96,    -1,   103,    -1,     6,    -1
};

/* FBL_Y_RLINE[FBL_Y_N] -- source line where rule number FBL_Y_N was defined.  */
static const fbl_y_type_uint16 fbl_y_rline[] =
{
       0,   274,   274,   274,   407,   409,   414,   419,   421,   423,
     428,   433,   438,   445,   450,   452,   460,   464,   466,   472,
     474,   479,   489,   490,   497,   505,   507,   512,   514,   524,
     521,   597,   604,   609,   614,   621,   627,   645,   647,   651,
     653,   657,   662,   669,   673,   675,   681,   723,   739,   741,
     746,   747,   749,   751,   761,   768,   756,   797,   803,   806,
     808,   813,   814,   815,   816,   817,   818,   824,   849,   871,
     877,   930,   938,   934,   952,   954,   956,   965,   961,   979,
     995,  1001,  1054,  1056,  1063,  1065,  1071,  1078,  1080,  1085,
    1099,  1110,  1128,  1135,  1137,  1142,  1148,  1167,  1168,  1170,
    1175,  1178,  1180,  1185,  1186,  1187,  1188,  1189,  1201,  1197,
    1227,  1231,  1243,  1247,  1256,  1257,  1268,  1272,  1276,  1553,
    1555,  1578,  1576,  1845,  1844,  1849,  1849,  1860,  1862,  1867,
    1874,  1859,  1892,  1896,  1898,  1906,  1907,  1908,  1911,  1913,
    1917,  1923,  1933,  1935,  1947,  1950,  1952,  1957,  1958,  1959,
    1960,  1961,  1966,  1978,  2121,  2129,  2137,  2126,  2154,  2160,
    2156,  2183,  2187,  2203,  2201,  2267,  2269,  2277,  2275,  2311,
    2314,  2323,  2339,  2338,  2346,  2348,  2365,  2371,  2370,  2382,
    2386,  2388,  2401,  2407,  2413,  2510,  2516,  2517,  2524,  2525,
    2531,  2536,  2538,  2543,  2545,  2547,  2549,  2554,  2558,  2565,
    2569,  2576,  2578,  2582,  2589,  2593,  2600,  2602,  2609,  2614,
    2616,  2623,  2628,  2630,  2636,  2644,  2646,  2780,  2782,  2784,
    2786,  2788,  2790,  2795,  2797,  2799,  2804,  2811,  2818,  2820,
    2822,  2827,  2840,  2861,  2931,  2932,  2937,  2936,  2941,  2943,
    2951,  2952,  2960,  2961,  2966,  2974,  2975,  2983,  2984,  2989,
    2994,  2999,  3008,  3013,  3018,  3023,  3028
};
#endif

#if FBL_Y_DEBUG || FBL_Y_ERROR_VERBOSE || FBL_Y_TOKEN_TABLE
/* FBL_Y_TNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at FBL_Y_NTOKENS, nonterminals.  */
static const char *const fbl_y_tname[] =
{
  "$end", "error", "$undefined", "tok_AND", "Pragma", "_BEGIN", "_END",
  "_EQSym", "_EXIT", "_FILE", "_GESym", "_GTSym", "_IN", "_INOUT",
  "_LABEL", "_LESym", "_LINKAGE", "_LTSym", "_NAND", "_NESym", "_NEXT",
  "_NOR", "_NOT", "tok_NULL", "_OR", "_OUT", "_XOR", "ABS", "ACCESS",
  "AFTER", "ALIAS", "ALL", "ARCHITECTURE", "ARRAY", "ASSERT", "ATTRIBUTE",
  "AbstractLit", "Ampersand", "Apostrophe", "Arrow", "_BLOCK", "BODY",
  "BUFFER", "BUS", "Bar", "BasedInt", "BasedReal", "BitStringLit", "Box",
  "CASE", "COMPONENT", "CONFIGURATION", "CONSTANT", "CharacterLit",
  "Colon", "Comma", "DISCONNECT", "DOWNTO", "DecimalInt", "DecimalReal",
  "Dot", "DoubleStar", "ELSE", "ELSIF", "ENTITY", "ERROR", "FOR",
  "FUNCTION", "GENERATE", "GENERIC", "GUARDED", "IF", "IS", "Identifier",
  "LIBRARY", "LOOP", "LeftParen", "MAP", "MOD", "Minus", "NEW", "OF", "ON",
  "OPEN", "OTHERS", "_PACKAGE", "PORT", "PROCEDURE", "PROCESS", "Plus",
  "RANGE", "RECORD", "REGISTER", "REM", "REPORT", "RETURN", "RightParen",
  "SELECT", "SEVERITY", "SIGNAL", "_STABLE", "_EVENT", "SUBTYPE",
  "Semicolon", "Star", "StringLit", "THEN", "TO", "TRANSPORT", "FBHTYPE",
  "UNITS", "UNTIL", "USE", "VARIABLE", "VarAsgn", "WAIT", "WARNING",
  "WHEN", "WHILE", "WITH", "$accept", "design_file", "@1",
  "..design_unit..", "design_unit", "library_unit", "primary_unit",
  "secondary_unit", "library_clause", "logical_name_list",
  "...logical_name..", "context_clause", "..context_item..",
  "context_item", "use_clause", "...selected_name..", "selected_name",
  "suffix", "prefix", "entity_declaration", "@2", ".constraint.",
  "constraint", "range_constraint", "range", "direction", ".port_clause.",
  "port_clause", "formal_port_list", "...formal_port_element..",
  "formal_port_element", ".SIGNAL.", ".mode.", "architecture_body", "@3",
  "@4", "architecture_declarative_part", "..block_declarative_item..",
  "block_declarative_item", "pragma_declaration", "constant_declaration",
  "constant_VarAsgn__expression", "signal_declaration", "type_declaration",
  "full_type_declaration", "@5", "type_definition", "subtype_declaration",
  "@6", "subtype_indication", "scalar_type_definition",
  "enumeration_type_definition", "...enumeration_literal..",
  "enumeration_literal", "composite_type_definition",
  "array_type_definition", "unconstrained_array_definition",
  "constrained_array_definition", "index_subtype_definition",
  "index_constraint", "discrete_range", "type_mark", ".signal_kind.",
  "architecture_statement_part", "..concurrent_statement..",
  "concurrent_statement", "block_statement", "@7", "set_of_statements",
  "concurrent_assertion_statement",
  "concurrent_signal_assignment_statement",
  "unlabeled_concurrent_assertion_statement",
  "unlabeled_conditional_signal_assignment",
  "..waveform__WHEN__condition__ELSE..",
  "unlabeled_selected_signal_assignment", "@8", "process_statement", "@9",
  "@10", "unlabeled_process_statement", "@11", "@12", "@13", "@14",
  "process_declarative_part", "..process_declarative_item..",
  "process_declarative_item", ".sensitivity_list.", "sensitivity_list",
  "signal_list", "...name..", "sequence_of_statements",
  "..sequential_statement..", "sequential_statement",
  "assertion_statement", "signal_assignment_statement", "waveform_element",
  "if_statement", "@15", "@16", "..ELSIF__THEN__seq_of_stmts..", "@17",
  ".ELSE__seq_of_stmts.", "case_statement", "@18",
  "..case_statement_alternative..", "case_statement_alternative", "@19",
  "...waveform__WHEN__choices..", "waveform__WHEN__choices", "choices2",
  "@20", "..Bar__choice2..", "waveform", "choices", "@21",
  "null_statement", "..Bar__choice..", "choice", "condition",
  ".REPORT__expression.", ".SEVERITY__expression.", "report__message",
  "severity__message", "expression", "relation..AND__relation..",
  "relation..OR__relation..", "relation.NAND_NOR__relation.",
  "relation..XOR__relation..", "relation", "simple_expression",
  ".sign.term..add_op__term..", "term", "factor", "primary",
  "relational_operator", "literal", "aggregate", "name", "indexed_name",
  "slice_name", "attribute_name", "attribute_designator",
  "identifier_list", "@22", "...identifier..", ".label.",
  ".guard_expression.", "guard_expression", ".GUARDED.", ".simple_name.",
  "simple_name", "target", "a_label", "label", "abstractlit",
  "RightParen_ERR", "Semicolon_ERR", "END_ERR", 0
};
#endif

# ifdef FBL_Y_PRINT
/* FBL_Y_TOKNUM[FBL_Y_LEX-NUM] -- Internal token number corresponding to
   token FBL_Y_LEX-NUM.  */
static const fbl_y_type_uint16 fbl_y_toknum[] =
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374
};
# endif

/* FBL_Y_R1[FBL_Y_N] -- Symbol number of symbol that rule FBL_Y_N derives.  */
static const fbl_y_type_uint16 fbl_y_r1[] =
{
       0,   120,   122,   121,   123,   123,   124,   125,   125,   125,
     126,   127,   128,   129,   130,   130,   131,   132,   132,   133,
     133,   134,   135,   135,   136,   137,   137,   138,   138,   140,
     139,   139,   141,   141,   142,   143,   144,   145,   145,   146,
     146,   147,   147,   148,   149,   149,   150,   150,   151,   151,
     152,   152,   152,   152,   154,   155,   153,   153,   156,   157,
     157,   158,   158,   158,   158,   158,   158,   159,   160,   161,
     162,   163,   165,   164,   166,   166,   166,   168,   167,   169,
     170,   171,   172,   172,   173,   173,   174,   175,   175,   176,
     177,   178,   179,   180,   180,   180,   181,   182,   182,   182,
     183,   184,   184,   185,   185,   185,   185,   185,   187,   186,
     188,   189,   189,   190,   190,   190,   190,   191,   192,   193,
     193,   195,   194,   197,   196,   198,   196,   200,   201,   202,
     203,   199,   204,   205,   205,   206,   206,   206,   207,   207,
     208,   209,   210,   210,   211,   212,   212,   213,   213,   213,
     213,   213,   214,   215,   216,   218,   219,   217,   220,   221,
     220,   222,   222,   224,   223,   225,   225,   227,   226,   228,
     228,   229,   231,   230,   232,   232,   233,   235,   234,   236,
     237,   237,   238,   238,   238,   239,   240,   240,   241,   241,
     242,   243,   243,   244,   244,   244,   244,   245,   245,   246,
     246,   247,   247,   247,   248,   248,   249,   249,   250,   251,
     251,   252,   253,   253,   254,   254,   254,   255,   255,   255,
     255,   255,   255,   256,   256,   256,   257,   258,   258,   258,
     258,   259,   260,   261,   262,   262,   264,   263,   265,   265,
     266,   266,   267,   267,   268,   269,   269,   270,   270,   271,
     272,   273,   274,   275,   276,   277,   278
};

/* FBL_Y_R2[FBL_Y_N] -- Number of symbols composing right hand side of rule FBL_Y_N.  */
static const fbl_y_type_uint8 fbl_y_r2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     1,     1,
       1,     1,     3,     2,     0,     3,     1,     0,     2,     1,
       1,     4,     0,     3,     3,     1,     1,     1,     3,     0,
       8,     2,     0,     1,     3,     2,     3,     1,     1,     0,
       1,     5,     3,     2,     0,     3,     7,     1,     0,     1,
       0,     1,     1,     1,     0,     0,    13,     2,     1,     0,
       2,     1,     1,     1,     1,     1,     2,     1,     7,     2,
       7,     1,     0,     6,     1,     1,     2,     0,     6,     2,
       1,     4,     0,     3,     1,     1,     1,     1,     1,     6,
       4,     3,     3,     1,     2,     1,     1,     0,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     2,     0,    10,
       1,     2,     1,     2,     1,     2,     1,     1,     6,     0,
       5,     0,    10,     0,     3,     0,     2,     0,     0,     0,
       0,    13,     1,     0,     2,     1,     1,     1,     0,     1,
       3,     2,     0,     3,     1,     0,     2,     1,     1,     1,
       1,     1,     5,     4,     1,     0,     0,    11,     0,     0,
       6,     0,     2,     0,     9,     0,     2,     0,     5,     0,
       3,     3,     0,     3,     0,     3,     1,     0,     3,     2,
       0,     3,     1,     1,     1,     1,     0,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     1,     1,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     4,     6,     3,     1,     1,     0,     3,     0,     3,
       0,     1,     0,     1,     3,     0,     1,     0,     1,     1,
       1,     2,     1,     1,     1,     1,     1
};

/* FBL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when FBL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const fbl_y_type_uint16 fbl_y_defact[] =
{
       2,     0,    17,     1,    17,     0,    16,     3,    17,     9,
       0,     0,     6,     7,     8,    10,    11,     0,     0,    19,
      18,    20,     5,    57,     0,    31,   249,     0,    14,     0,
      22,     0,    27,     0,    29,    13,   255,    12,     0,     0,
       0,    39,     0,     0,    21,    26,    24,    25,    54,     0,
       0,    40,    15,    23,    59,     0,     0,   256,   247,    55,
       0,    42,    47,    49,     0,    44,     0,     0,   248,     0,
       0,    67,     0,     0,     0,     0,    60,    65,    64,    61,
      62,    71,    63,   254,     0,    43,   236,     0,    30,   101,
      66,     0,     0,     0,     0,    41,     0,   238,    50,     0,
       0,     0,     0,     0,     0,    45,   237,    51,    53,    52,
       0,   247,     0,     0,   249,     0,   102,   104,   105,   106,
     112,   114,   116,   103,     0,   117,   250,   228,   229,   230,
     227,     0,   123,     0,    32,    96,    32,    77,    32,     0,
       0,     0,    72,    74,    80,    75,    86,    87,    88,     0,
      32,     0,   107,     0,   225,   223,     0,   224,   186,   193,
     194,   195,   196,   201,   206,   208,   209,   211,   212,   214,
     215,   216,   121,   127,   126,     0,     0,   245,   242,   111,
     113,   115,     0,   251,     0,     0,    33,    97,     0,    79,
      76,     0,     0,    85,    84,    82,     0,   239,    97,    56,
     213,     0,     0,   188,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   219,   220,   221,   222,   218,     0,     0,
       0,   138,   234,   235,   233,   253,     0,   246,   119,     0,
       0,   243,   124,     0,     0,     0,     0,    99,    98,     0,
      78,    93,     0,     0,    95,     0,    96,     0,     0,    73,
      46,   226,   190,   187,     0,     0,   198,   200,   205,   197,
     202,   203,   199,   204,   207,   210,     0,     0,   128,   139,
      38,    37,     0,   231,     0,     0,   108,    34,     0,    69,
      68,    70,     0,    92,     0,    94,    90,     0,    81,   191,
     192,   189,   152,     0,     0,   142,   133,     0,   176,     0,
     154,   244,   101,    36,     0,    91,    35,    83,   245,   140,
       0,   141,     0,   132,   232,     0,   118,     0,     0,    89,
       0,   142,   129,   135,   136,   137,   134,     0,     0,   169,
       0,   143,   145,   120,   240,     0,     0,   130,   144,   252,
       0,   241,     0,   122,   183,   171,   172,   182,   184,     0,
       0,     0,     0,   146,   147,   148,   149,   150,   151,     0,
     109,   170,   174,     0,   179,   163,     0,   185,     0,   173,
     240,     0,   155,     0,     0,     0,     0,   145,   153,   175,
     131,     0,   165,   156,     0,   177,     0,   158,   167,   180,
     166,     0,   161,   145,   178,     0,   145,     0,     0,   168,
       0,   164,   162,     0,     0,   181,   159,     0,   145,   157,
     160
};

/* FBL_Y_DEFGOTO[NTERM-NUM].  */
static const fbl_y_type_int16 fbl_y_defgoto[] =
{
      -1,     1,     2,     7,     8,    12,    13,    14,    19,    29,
      35,     5,     6,    20,    21,    38,    30,    46,    31,    15,
      41,   185,   186,   285,   233,   272,    50,    51,    64,    85,
      65,    66,   110,    16,    54,    69,    59,    60,    76,    77,
      78,   236,    79,    80,    81,   196,   142,    82,   188,   137,
     143,   144,   248,   195,   145,   146,   147,   148,   242,   192,
     243,   138,   239,    99,   100,   116,   117,   302,   318,   118,
     119,   120,   121,   274,   122,   220,   123,   182,   124,   174,
     221,   296,   332,   349,   312,   313,   326,   268,   269,   294,
     311,   337,   338,   353,   125,   355,   298,   356,   377,   387,
     392,   408,   398,   357,   371,   386,   382,   393,   335,   329,
     345,   362,   369,   330,   384,   389,   358,   394,   346,   366,
     203,   255,   253,   291,   300,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   218,   169,   170,   171,   127,
     128,   129,   224,    87,    97,   106,   340,   230,   231,   228,
      67,   130,   131,   132,   133,   234,    84,    37,    58
};

/* FBL_Y_PACT[STATE-NUM] -- Index in FBL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define FBL_Y_PACT_NINF -265
static const fbl_y_type_int16 fbl_y_pact[] =
{
    -265,    55,  -265,  -265,    61,    19,    57,  -265,    61,  -265,
      38,    39,  -265,  -265,  -265,  -265,  -265,   -23,    -9,  -265,
    -265,  -265,  -265,  -265,    -2,  -265,  -265,    68,  -265,   -19,
    -265,    25,  -265,    -9,  -265,   101,  -265,  -265,   -31,    27,
      89,    76,    97,    -9,  -265,  -265,  -265,   120,  -265,    14,
     176,  -265,  -265,  -265,  -265,   -19,     8,  -265,    -9,  -265,
      21,  -265,  -265,  -265,    91,  -265,   112,   -19,  -265,   185,
     -19,  -265,   123,   112,   126,   129,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,   -19,   -19,  -265,   150,  -265,  -265,
    -265,   151,   154,   137,   138,  -265,     8,  -265,   181,   176,
      15,    -9,    -9,    -9,    11,  -265,   158,  -265,  -265,  -265,
      -9,    -9,   -19,   -11,   160,   -11,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,   131,  -265,  -265,  -265,  -265,  -265,
      99,   206,     3,   172,   149,  -265,   149,  -265,   149,   -19,
     159,     4,  -265,  -265,  -265,  -265,  -265,  -265,  -265,   163,
     149,   -19,  -265,    13,  -265,  -265,   -11,  -265,   144,   237,
     217,  -265,   219,   171,   205,   209,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,   -30,   211,   178,   173,  -265,
    -265,  -265,   131,  -265,   211,   136,  -265,    50,   -19,  -265,
    -265,   103,   170,  -265,  -265,  -265,   -19,  -265,    50,  -265,
    -265,   156,   148,   157,   -11,   -11,   -11,   -11,   -11,   -11,
     -11,   -11,  -265,  -265,  -265,  -265,  -265,  -265,   -11,   -11,
     161,   180,  -265,  -265,  -265,  -265,    42,  -265,  -265,   -11,
     252,  -265,  -265,    91,   -16,    22,   -19,  -265,  -265,   -19,
    -265,  -265,    91,    91,  -265,   169,    81,    -9,    70,  -265,
    -265,  -265,  -265,  -265,   -34,   -19,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,    -9,    -9,  -265,  -265,
    -265,  -265,   211,  -265,   -11,    91,  -265,  -265,   211,  -265,
    -265,  -265,   179,  -265,   107,  -265,  -265,     4,  -265,  -265,
    -265,  -265,  -265,   247,   167,   210,  -265,    91,  -265,   -58,
    -265,  -265,  -265,  -265,    -9,  -265,  -265,  -265,   178,  -265,
      -9,  -265,   259,    26,  -265,   -11,  -265,    29,   176,  -265,
     -11,   210,  -265,  -265,  -265,  -265,  -265,   204,   227,  -265,
     152,  -265,  -265,  -265,   195,    12,    79,  -265,   110,  -265,
     -19,  -265,   -11,  -265,  -265,  -265,  -265,  -265,  -265,   176,
     -19,   -11,   -11,  -265,  -265,  -265,  -265,  -265,  -265,   255,
    -265,  -265,  -265,   183,  -265,  -265,   166,  -265,   -11,   229,
     195,   202,  -265,   -19,    79,   -19,   162,  -265,  -265,  -265,
    -265,    79,  -265,  -265,   238,  -265,    -3,  -265,  -265,  -265,
    -265,   231,   102,  -265,   232,   -19,  -265,   -11,   176,  -265,
      79,  -265,  -265,   175,   207,  -265,  -265,   -19,  -265,  -265,
    -265
};

/* FBL_Y_PGOTO[NTERM-NUM].  */
static const fbl_y_type_int16 fbl_y_pgoto[] =
{
    -265,  -265,  -265,   275,   282,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,   242,  -265,  -265,  -265,
    -265,   -82,  -265,  -265,  -189,    52,  -265,  -265,  -265,  -265,
     191,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
     -25,  -265,  -265,   -21,  -265,  -265,  -265,   -20,  -265,  -224,
    -265,  -265,  -265,     7,  -265,  -265,  -265,  -265,  -265,  -265,
    -265,   -83,    92,  -265,    -7,  -265,  -265,  -265,  -265,  -265,
    -265,   164,   168,  -265,   174,  -265,  -265,  -265,  -265,   116,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,
     -17,  -205,  -265,  -265,   -33,  -265,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,   -79,  -265,  -265,   -32,
    -265,  -265,  -265,  -264,  -265,  -265,  -265,  -265,  -221,   -89,
    -265,  -265,  -265,  -265,  -108,  -265,  -265,  -265,  -265,    23,
      93,  -265,    90,  -265,   165,  -265,  -227,  -265,   -99,  -265,
    -265,  -265,  -265,   240,  -265,  -265,   -56,  -265,  -265,     9,
     208,    -5,  -214,  -265,  -193,  -162,   -97,   -38,   -95
};

/* FBL_Y_TABLE[FBL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what FBL_Y_DEFACT says.
   If FBL_Y_TABLE_NINF, syntax error.  */
#define FBL_Y_TABLE_NINF -253
static const fbl_y_type_int16 fbl_y_table[] =
{
      44,   126,   241,    57,   111,   158,    27,   172,   279,    62,
     299,   153,   139,    32,   226,    55,   112,    61,   134,   136,
       9,  -100,    70,   286,    43,    71,   -58,   150,    40,    88,
     112,   289,    90,   126,    47,  -110,   154,   113,    32,    23,
      25,   270,   155,   178,   140,    36,    95,    96,   201,   113,
      28,    10,   293,    68,   187,     3,   189,   193,    45,   315,
     154,    -4,    26,   113,    26,   156,   155,   342,   198,   154,
     222,   223,    36,    72,   152,   155,    26,   194,    72,    33,
     319,   -48,   290,    11,    36,    39,    26,   141,   114,   156,
      56,   271,   245,   237,   157,   306,   135,   135,   135,   270,
      26,   190,   114,  -125,   373,   135,    68,    63,   244,   347,
     297,    24,    26,   199,   381,    36,   303,  -125,   157,   175,
      73,   275,   115,    74,   359,   287,   154,   157,    74,   273,
      75,    17,   155,   350,   115,    75,   277,   175,    83,   225,
      34,   341,   238,   225,   113,   282,   283,   347,   115,   271,
     240,   288,    26,   379,   347,   305,    42,   176,   249,   351,
     385,    48,    49,   344,   396,   397,    83,   126,   295,    18,
      52,  -227,   383,   347,   207,   176,    26,   341,   301,   405,
     -28,   352,    57,    26,   157,    86,   246,    83,   399,   208,
      89,   402,   209,   107,   108,   210,    91,   211,   280,    93,
     314,   281,    94,   410,    98,   101,   109,   327,   102,   103,
     104,   321,   212,   149,  -252,   213,   214,   292,   126,   173,
     215,   177,   216,   328,   217,   184,   183,   256,   257,   258,
     259,   260,   261,   262,   263,   191,   197,   348,   202,   126,
     204,   205,   135,   365,   367,   206,   219,   225,   227,   229,
     235,   247,   251,   252,   363,   254,   267,   276,   266,   284,
     304,   316,   308,   309,   322,   310,   333,   334,   339,   336,
     368,   370,   372,   374,   376,   348,   400,   388,   407,   381,
     395,   406,   348,    22,     4,    53,   278,   105,   323,   367,
     250,   391,   324,   325,   307,   317,   179,   343,   232,   135,
     180,   348,   360,   404,   331,   354,   181,   390,   403,   265,
     361,   264,   364,    92,   375,     0,     0,   320,   200,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   378,     0,   380,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   401,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   409
};

static const fbl_y_type_int16 fbl_y_check[] =
{
      38,   100,   191,     6,    99,   113,    11,   115,   235,     1,
     274,    22,     1,    18,   176,     1,     1,    55,   101,   102,
       1,     6,     1,   247,    55,     4,     5,   110,    33,    67,
       1,    65,    70,   132,    39,     6,    47,    34,    43,     1,
       1,    57,    53,    40,    33,   103,    84,    85,   156,    34,
      73,    32,   266,    58,   136,     0,   138,    53,    31,   117,
      47,     0,    73,    34,    73,    76,    53,    55,   150,    47,
     100,   101,   103,    52,   112,    53,    73,    73,    52,    81,
     304,    73,   116,    64,   103,    60,    73,    76,    73,    76,
      76,   107,   191,    43,   105,   284,   101,   102,   103,    57,
      73,   139,    73,    88,   368,   110,   111,    99,   191,   336,
     272,    73,    73,   151,   117,   103,   278,    88,   105,    38,
      99,   229,   119,   102,   338,    55,    47,   105,   102,   226,
     109,    74,    53,    23,   119,   109,   233,    38,    96,    36,
      72,   334,    92,    36,    34,   242,   243,   374,   119,   107,
     188,   248,    73,   374,   381,    48,    55,    76,   196,    49,
     381,    72,    86,    84,    62,    63,    96,   266,   267,   112,
      73,    90,   377,   400,     3,    76,    73,   370,   275,   400,
      60,    71,     6,    73,   105,    73,   191,    96,   393,    18,
       5,   396,    21,    12,    13,    24,    73,    26,   236,    73,
     297,   239,    73,   408,    54,    54,    25,   315,    54,    72,
      72,   310,     7,    55,    54,    10,    11,   255,   317,    88,
      15,    15,    17,   318,    19,    76,    54,   204,   205,   206,
     207,   208,   209,   210,   211,    76,    73,   336,    94,   338,
       3,    24,   247,   351,   352,    26,    37,    36,    70,    76,
     114,    81,    96,   105,   349,    98,    76,     5,    97,    90,
      81,   299,    15,    96,     5,    55,    62,    40,    73,   117,
      15,    88,   106,    44,    72,   374,    44,    39,    71,   117,
      49,   106,   381,     8,     2,    43,   234,    96,   313,   397,
     198,   386,   313,   313,   287,   302,   132,   335,   182,   304,
     132,   400,   340,   398,   321,   338,   132,   386,   397,   219,
     342,   218,   350,    73,   370,    -1,    -1,   308,   153,   111,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   373,    -1,   375,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   407
};

/* FBL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const fbl_y_type_uint16 fbl_y_stos[] =
{
       0,   121,   122,     0,   124,   131,   132,   123,   124,     1,
      32,    64,   125,   126,   127,   139,   153,    74,   112,   128,
     133,   134,   123,     1,    73,     1,    73,   271,    73,   129,
     136,   138,   271,    81,    72,   130,   103,   277,   135,    60,
     271,   140,    55,    55,   277,    31,   137,   271,    72,    86,
     146,   147,    73,   136,   154,     1,    76,     6,   278,   156,
     157,   277,     1,    99,   148,   150,   151,   270,   271,   155,
       1,     4,    52,    99,   102,   109,   158,   159,   160,   162,
     163,   164,   167,    96,   276,   149,    73,   263,   277,     5,
     277,    73,   263,    73,    73,   277,   277,   264,    54,   183,
     184,    54,    54,    72,    72,   150,   265,    12,    13,    25,
     152,   278,     1,    34,    73,   119,   185,   186,   189,   190,
     191,   192,   194,   196,   198,   214,   258,   259,   260,   261,
     271,   272,   273,   274,   181,   271,   181,   169,   181,     1,
      33,    76,   166,   170,   171,   174,   175,   176,   177,    55,
     181,   270,   277,    22,    47,    53,    76,   105,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   256,
     257,   258,   244,    88,   199,    38,    76,    15,    40,   191,
     192,   194,   197,    54,    76,   141,   142,   141,   168,   141,
     277,    76,   179,    53,    73,   173,   165,    73,   141,   277,
     254,   244,    94,   240,     3,    24,    26,     3,    18,    21,
      24,    26,     7,    10,    11,    15,    17,    19,   255,    37,
     195,   200,   100,   101,   262,    36,   275,    70,   269,    76,
     267,   268,   199,   144,   275,   114,   161,    43,    92,   182,
     277,   144,   178,   180,   181,   258,   271,    81,   172,   277,
     182,    96,   105,   242,    98,   241,   249,   249,   249,   249,
     249,   249,   249,   249,   250,   252,    97,    76,   207,   208,
      57,   107,   145,   276,   193,   244,     5,   276,   145,   256,
     277,   277,   276,   276,    90,   143,   169,    55,   276,    65,
     116,   243,   277,   272,   209,   258,   201,   275,   216,   233,
     244,   276,   187,   275,    81,    48,   144,   173,    15,    96,
      55,   210,   204,   205,   276,   117,   277,   184,   188,   169,
     269,   258,     5,   160,   163,   167,   206,   244,   278,   229,
     233,   210,   202,    62,    40,   228,   117,   211,   212,    73,
     266,   274,    55,   277,    84,   230,   238,   256,   258,   203,
      23,    49,    71,   213,   214,   215,   217,   223,   236,   272,
     277,   229,   231,   278,   277,   244,   239,   244,    15,   232,
      88,   224,   106,   233,    44,   266,    72,   218,   277,   238,
     277,   117,   226,   211,   234,   238,   225,   219,    39,   235,
     226,   278,   220,   227,   237,    49,    62,    63,   222,   211,
      44,   277,   211,   239,   278,   238,   106,    71,   221,   277,
     211
};

#define fbl_y_errok		(fbl_y_errstatus = 0)
#define fbl_y_clearin	(fbl_y_char = FBL_Y_EMPTY)
#define FBL_Y_EMPTY		(-2)
#define FBL_Y_EOF		0

#define FBL_Y_ACCEPT	goto fbl_y_acceptlab
#define FBL_Y_ABORT		goto fbl_y_abortlab
#define FBL_Y_ERROR		goto fbl_y_errorlab


/* Like FBL_Y_ERROR except do call fbl_y_error.  This remains here temporarily
   to ease the transition to the new meaning of FBL_Y_ERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define FBL_Y_FAIL		goto fbl_y_errlab

#define FBL_Y_RECOVERING()  (!!fbl_y_errstatus)

#define FBL_Y_BACKUP(Token, Value)					\
do								\
  if (fbl_y_char == FBL_Y_EMPTY && fbl_y_len == 1)				\
    {								\
      fbl_y_char = (Token);						\
      fbl_y_lval = (Value);						\
      fbl_y_token = FBL_Y_TRANSLATE (fbl_y_char);				\
      FBL_Y_POPSTACK (1);						\
      goto fbl_y_backup;						\
    }								\
  else								\
    {								\
      fbl_y_error (FBL_Y__("syntax error: cannot back up")); \
      FBL_Y_ERROR;							\
    }								\
while (FBL_Y_ID (0))


#define FBL_Y_TERROR	1
#define FBL_Y_ERRCODE	256


/* FBL_Y_LLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define FBL_Y_RHSLOC(Rhs, K) ((Rhs)[K])
#ifndef FBL_Y_LLOC_DEFAULT
# define FBL_Y_LLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (FBL_Y_ID (N))                                                    \
	{								\
	  (Current).first_line   = FBL_Y_RHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = FBL_Y_RHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = FBL_Y_RHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = FBL_Y_RHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    FBL_Y_RHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    FBL_Y_RHSLOC (Rhs, 0).last_column;				\
	}								\
    while (FBL_Y_ID (0))
#endif


/* FBL_Y__LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef FBL_Y__LOCATION_PRINT
# if FBL_Y_LTYPE_IS_TRIVIAL
#  define FBL_Y__LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define FBL_Y__LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* FBL_Y_LEX -- calling `fbl_y_lex' with the right arguments.  */

#ifdef FBL_Y_LEX_PARAM
# define FBL_Y_LEX fbl_y_lex (FBL_Y_LEX_PARAM)
#else
# define FBL_Y_LEX fbl_y_lex ()
#endif

/* Enable debugging if requested.  */
#if FBL_Y_DEBUG

# ifndef FBL_Y_FPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define FBL_Y_FPRINTF fprintf
# endif

# define FBL_Y_DPRINTF(Args)			\
do {						\
  if (fbl_y_debug)					\
    FBL_Y_FPRINTF Args;				\
} while (FBL_Y_ID (0))

# define FBL_Y__SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (fbl_y_debug)								  \
    {									  \
      FBL_Y_FPRINTF (stderr, "%s ", Title);					  \
      fbl_y__symbol_print (stderr,						  \
		  Type, Value); \
      FBL_Y_FPRINTF (stderr, "\n");						  \
    }									  \
} while (FBL_Y_ID (0))


/*--------------------------------.
| Print this symbol on FBL_Y_OUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
fbl_y__symbol_value_print (FILE *fbl_y_output, int fbl_y_type, FBL_Y_STYPE const * const fbl_y_valuep)
#else
static void
fbl_y__symbol_value_print (fbl_y_output, fbl_y_type, fbl_y_valuep)
    FILE *fbl_y_output;
    int fbl_y_type;
    FBL_Y_STYPE const * const fbl_y_valuep;
#endif
{
  if (!fbl_y_valuep)
    return;
# ifdef FBL_Y_PRINT
  if (fbl_y_type < FBL_Y_NTOKENS)
    FBL_Y_PRINT (fbl_y_output, fbl_y_toknum[fbl_y_type], *fbl_y_valuep);
# else
  FBL_Y_USE (fbl_y_output);
# endif
  switch (fbl_y_type)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on FBL_Y_OUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
fbl_y__symbol_print (FILE *fbl_y_output, int fbl_y_type, FBL_Y_STYPE const * const fbl_y_valuep)
#else
static void
fbl_y__symbol_print (fbl_y_output, fbl_y_type, fbl_y_valuep)
    FILE *fbl_y_output;
    int fbl_y_type;
    FBL_Y_STYPE const * const fbl_y_valuep;
#endif
{
  if (fbl_y_type < FBL_Y_NTOKENS)
    FBL_Y_FPRINTF (fbl_y_output, "token %s (", fbl_y_tname[fbl_y_type]);
  else
    FBL_Y_FPRINTF (fbl_y_output, "nterm %s (", fbl_y_tname[fbl_y_type]);

  fbl_y__symbol_value_print (fbl_y_output, fbl_y_type, fbl_y_valuep);
  FBL_Y_FPRINTF (fbl_y_output, ")");
}

/*------------------------------------------------------------------.
| fbl_y__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
fbl_y__stack_print (fbl_y_type_int16 *bottom, fbl_y_type_int16 *top)
#else
static void
fbl_y__stack_print (bottom, top)
    fbl_y_type_int16 *bottom;
    fbl_y_type_int16 *top;
#endif
{
  FBL_Y_FPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    FBL_Y_FPRINTF (stderr, " %d", *bottom);
  FBL_Y_FPRINTF (stderr, "\n");
}

# define FBL_Y__STACK_PRINT(Bottom, Top)				\
do {								\
  if (fbl_y_debug)							\
    fbl_y__stack_print ((Bottom), (Top));				\
} while (FBL_Y_ID (0))


/*------------------------------------------------.
| Report that the FBL_Y_RULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
fbl_y__reduce_print (FBL_Y_STYPE *fbl_y_vsp, int fbl_y_rule)
#else
static void
fbl_y__reduce_print (fbl_y_vsp, fbl_y_rule)
    FBL_Y_STYPE *fbl_y_vsp;
    int fbl_y_rule;
#endif
{
  int fbl_y_nrhs = fbl_y_r2[fbl_y_rule];
  int fbl_y_i;
  unsigned long int fbl_y_lno = fbl_y_rline[fbl_y_rule];
  FBL_Y_FPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     fbl_y_rule - 1, fbl_y_lno);
  /* The symbols being reduced.  */
  for (fbl_y_i = 0; fbl_y_i < fbl_y_nrhs; fbl_y_i++)
    {
      fprintf (stderr, "   $%d = ", fbl_y_i + 1);
      fbl_y__symbol_print (stderr, fbl_y_rhs[fbl_y_prhs[fbl_y_rule] + fbl_y_i],
		       &(fbl_y_vsp[(fbl_y_i + 1) - (fbl_y_nrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define FBL_Y__REDUCE_PRINT(Rule)		\
do {					\
  if (fbl_y_debug)				\
    fbl_y__reduce_print (fbl_y_vsp, Rule); \
} while (FBL_Y_ID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int fbl_y_debug;
#else /* !FBL_Y_DEBUG */
# define FBL_Y_DPRINTF(Args)
# define FBL_Y__SYMBOL_PRINT(Title, Type, Value, Location)
# define FBL_Y__STACK_PRINT(Bottom, Top)
# define FBL_Y__REDUCE_PRINT(Rule)
#endif /* !FBL_Y_DEBUG */


/* FBL_Y_INITDEPTH -- initial size of the parser's stacks.  */
#ifndef	FBL_Y_INITDEPTH
# define FBL_Y_INITDEPTH 200
#endif

/* FBL_Y_MAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   FBL_Y_STACK_ALLOC_MAXIMUM < FBL_Y_STACK_BYTES (FBL_Y_MAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef FBL_Y_MAXDEPTH
# define FBL_Y_MAXDEPTH 10000
#endif



#if FBL_Y_ERROR_VERBOSE

# ifndef fbl_y_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define fbl_y_strlen strlen
#  else
/* Return the length of FBL_Y_STR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static FBL_Y_SIZE_T
fbl_y_strlen (const char *fbl_y_str)
#else
static FBL_Y_SIZE_T
fbl_y_strlen (fbl_y_str)
    const char *fbl_y_str;
#endif
{
  FBL_Y_SIZE_T fbl_y_len;
  for (fbl_y_len = 0; fbl_y_str[fbl_y_len]; fbl_y_len++)
    continue;
  return fbl_y_len;
}
#  endif
# endif

# ifndef fbl_y_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define fbl_y_stpcpy stpcpy
#  else
/* Copy FBL_Y_SRC to FBL_Y_DEST, returning the address of the terminating '\0' in
   FBL_Y_DEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
fbl_y_stpcpy (char *fbl_y_dest, const char *fbl_y_src)
#else
static char *
fbl_y_stpcpy (fbl_y_dest, fbl_y_src)
    char *fbl_y_dest;
    const char *fbl_y_src;
#endif
{
  char *fbl_y_d = fbl_y_dest;
  const char *fbl_y_s = fbl_y_src;

  while ((*fbl_y_d++ = *fbl_y_s++) != '\0')
    continue;

  return fbl_y_d - 1;
}
#  endif
# endif

# ifndef fbl_y_tnamerr
/* Copy to FBL_Y_RES the contents of FBL_Y_STR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for fbl_y_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  FBL_Y_STR is taken from fbl_y_tname.  If FBL_Y_RES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static FBL_Y_SIZE_T
fbl_y_tnamerr (char *fbl_y_res, const char *fbl_y_str)
{
  if (*fbl_y_str == '"')
    {
      FBL_Y_SIZE_T fbl_y_n = 0;
      char const *fbl_y_p = fbl_y_str;

      for (;;)
	switch (*++fbl_y_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++fbl_y_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (fbl_y_res)
	      fbl_y_res[fbl_y_n] = *fbl_y_p;
	    fbl_y_n++;
	    break;

	  case '"':
	    if (fbl_y_res)
	      fbl_y_res[fbl_y_n] = '\0';
	    return fbl_y_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! fbl_y_res)
    return fbl_y_strlen (fbl_y_str);

  return fbl_y_stpcpy (fbl_y_res, fbl_y_str) - fbl_y_res;
}
# endif

/* Copy into FBL_Y_RESULT an error message about the unexpected token
   FBL_Y_CHAR while in state FBL_Y_STATE.  Return the number of bytes copied,
   including the terminating null byte.  If FBL_Y_RESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return FBL_Y_SIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static FBL_Y_SIZE_T
fbl_y_syntax_error (char *fbl_y_result, int fbl_y_state, int fbl_y_char)
{
  int fbl_y_n = fbl_y_pact[fbl_y_state];

  if (! (FBL_Y_PACT_NINF < fbl_y_n && fbl_y_n <= FBL_Y_LAST))
    return 0;
  else
    {
      int fbl_y_type = FBL_Y_TRANSLATE (fbl_y_char);
      FBL_Y_SIZE_T fbl_y_size0 = fbl_y_tnamerr (0, fbl_y_tname[fbl_y_type]);
      FBL_Y_SIZE_T fbl_y_size = fbl_y_size0;
      FBL_Y_SIZE_T fbl_y_size1;
      int fbl_y_size_overflow = 0;
      enum { FBL_Y_ERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *fbl_y_arg[FBL_Y_ERROR_VERBOSE_ARGS_MAXIMUM];
      int fbl_y_x;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      FBL_Y__("syntax error, unexpected %s");
      FBL_Y__("syntax error, unexpected %s, expecting %s");
      FBL_Y__("syntax error, unexpected %s, expecting %s or %s");
      FBL_Y__("syntax error, unexpected %s, expecting %s or %s or %s");
      FBL_Y__("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *fbl_y_fmt;
      char const *fbl_y_f;
      static char const fbl_y_unexpected[] = "syntax error, unexpected %s";
      static char const fbl_y_expecting[] = ", expecting %s";
      static char const fbl_y_or[] = " or %s";
      char fbl_y_format[sizeof fbl_y_unexpected
		    + sizeof fbl_y_expecting - 1
		    + ((FBL_Y_ERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof fbl_y_or - 1))];
      char const *fbl_y_prefix = fbl_y_expecting;

      /* Start FBL_Y_X at -FBL_Y_N if negative to avoid negative indexes in
	 FBL_Y_CHECK.  */
      int fbl_y_xbegin = fbl_y_n < 0 ? -fbl_y_n : 0;

      /* Stay within bounds of both fbl_y_check and fbl_y_tname.  */
      int fbl_y_checklim = FBL_Y_LAST - fbl_y_n + 1;
      int fbl_y_xend = fbl_y_checklim < FBL_Y_NTOKENS ? fbl_y_checklim : FBL_Y_NTOKENS;
      int fbl_y_count = 1;

      fbl_y_arg[0] = fbl_y_tname[fbl_y_type];
      fbl_y_fmt = fbl_y_stpcpy (fbl_y_format, fbl_y_unexpected);

      for (fbl_y_x = fbl_y_xbegin; fbl_y_x < fbl_y_xend; ++fbl_y_x)
	if (fbl_y_check[fbl_y_x + fbl_y_n] == fbl_y_x && fbl_y_x != FBL_Y_TERROR)
	  {
	    if (fbl_y_count == FBL_Y_ERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		fbl_y_count = 1;
		fbl_y_size = fbl_y_size0;
		fbl_y_format[sizeof fbl_y_unexpected - 1] = '\0';
		break;
	      }
	    fbl_y_arg[fbl_y_count++] = fbl_y_tname[fbl_y_x];
	    fbl_y_size1 = fbl_y_size + fbl_y_tnamerr (0, fbl_y_tname[fbl_y_x]);
	    fbl_y_size_overflow |= (fbl_y_size1 < fbl_y_size);
	    fbl_y_size = fbl_y_size1;
	    fbl_y_fmt = fbl_y_stpcpy (fbl_y_fmt, fbl_y_prefix);
	    fbl_y_prefix = fbl_y_or;
	  }

      fbl_y_f = FBL_Y__(fbl_y_format);
      fbl_y_size1 = fbl_y_size + fbl_y_strlen (fbl_y_f);
      fbl_y_size_overflow |= (fbl_y_size1 < fbl_y_size);
      fbl_y_size = fbl_y_size1;

      if (fbl_y_size_overflow)
	return FBL_Y_SIZE_MAXIMUM;

      if (fbl_y_result)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *fbl_y_p = fbl_y_result;
	  int fbl_y_i = 0;
	  while ((*fbl_y_p = *fbl_y_f) != '\0')
	    {
	      if (*fbl_y_p == '%' && fbl_y_f[1] == 's' && fbl_y_i < fbl_y_count)
		{
		  fbl_y_p += fbl_y_tnamerr (fbl_y_p, fbl_y_arg[fbl_y_i++]);
		  fbl_y_f += 2;
		}
	      else
		{
		  fbl_y_p++;
		  fbl_y_f++;
		}
	    }
	}
      return fbl_y_size;
    }
}
#endif /* FBL_Y_ERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
fbl_y_destruct (const char *fbl_y_msg, int fbl_y_type, FBL_Y_STYPE *fbl_y_valuep)
#else
static void
fbl_y_destruct (fbl_y_msg, fbl_y_type, fbl_y_valuep)
    const char *fbl_y_msg;
    int fbl_y_type;
    FBL_Y_STYPE *fbl_y_valuep;
#endif
{
  FBL_Y_USE (fbl_y_valuep);

  if (!fbl_y_msg)
    fbl_y_msg = "Deleting";
  FBL_Y__SYMBOL_PRINT (fbl_y_msg, fbl_y_type, fbl_y_valuep, fbl_y_locationp);

  switch (fbl_y_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef FBL_Y_PARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int fbl_y_parse (void *FBL_Y_PARSE_PARAM);
#else
int fbl_y_parse ();
#endif
#else /* ! FBL_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int fbl_y_parse (void);
#else
int fbl_y_parse ();
#endif
#endif /* ! FBL_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
int fbl_y_char;

/* The semantic value of the look-ahead symbol.  */
FBL_Y_STYPE fbl_y_lval;

/* Number of syntax errors so far.  */
int fbl_y_nerrs;



/*----------.
| fbl_y_parse.  |
`----------*/

#ifdef FBL_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
fbl_y_parse (void *FBL_Y_PARSE_PARAM)
#else
int
fbl_y_parse (FBL_Y_PARSE_PARAM)
    void *FBL_Y_PARSE_PARAM;
#endif
#else /* ! FBL_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
fbl_y_parse (void)
#else
int
fbl_y_parse ()

#endif
#endif
{
  
  int fbl_y_state;
  int fbl_y_n;
  int fbl_y_result;
  /* Number of tokens to shift before error messages enabled.  */
  int fbl_y_errstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int fbl_y_token = 0;
#if FBL_Y_ERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char fbl_y_msgbuf[128];
  char *fbl_y_msg = fbl_y_msgbuf;
  FBL_Y_SIZE_T fbl_y_msg_alloc = sizeof fbl_y_msgbuf;
#endif

  /* Three stacks and their tools:
     `fbl_y_ss': related to states,
     `fbl_y_vs': related to semantic values,
     `fbl_y_ls': related to locations.

     Refer to the stacks thru separate pointers, to allow fbl_y_overflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  fbl_y_type_int16 fbl_y_ssa[FBL_Y_INITDEPTH];
  fbl_y_type_int16 *fbl_y_ss = fbl_y_ssa;
  fbl_y_type_int16 *fbl_y_ssp;

  /* The semantic value stack.  */
  FBL_Y_STYPE fbl_y_vsa[FBL_Y_INITDEPTH];
  FBL_Y_STYPE *fbl_y_vs = fbl_y_vsa;
  FBL_Y_STYPE *fbl_y_vsp;



#define FBL_Y_POPSTACK(N)   (fbl_y_vsp -= (N), fbl_y_ssp -= (N))

  FBL_Y_SIZE_T fbl_y_stacksize = FBL_Y_INITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  FBL_Y_STYPE fbl_y_val;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int fbl_y_len = 0;

  FBL_Y_DPRINTF ((stderr, "Starting parse\n"));

  fbl_y_state = 0;
  fbl_y_errstatus = 0;
  fbl_y_nerrs = 0;
  fbl_y_char = FBL_Y_EMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  fbl_y_ssp = fbl_y_ss;
  fbl_y_vsp = fbl_y_vs;

  goto fbl_y_setstate;

/*------------------------------------------------------------.
| fbl_y_newstate -- Push a new state, which is found in fbl_y_state.  |
`------------------------------------------------------------*/
 fbl_y_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  fbl_y_ssp++;

 fbl_y_setstate:
  *fbl_y_ssp = fbl_y_state;

  if (fbl_y_ss + fbl_y_stacksize - 1 <= fbl_y_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      FBL_Y_SIZE_T fbl_y_size = fbl_y_ssp - fbl_y_ss + 1;

#ifdef fbl_y_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	FBL_Y_STYPE *fbl_y_vs1 = fbl_y_vs;
	fbl_y_type_int16 *fbl_y_ss1 = fbl_y_ss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if fbl_y_overflow is a macro.  */
	fbl_y_overflow (FBL_Y__("memory exhausted"),
		    &fbl_y_ss1, fbl_y_size * sizeof (*fbl_y_ssp),
		    &fbl_y_vs1, fbl_y_size * sizeof (*fbl_y_vsp),

		    &fbl_y_stacksize);

	fbl_y_ss = fbl_y_ss1;
	fbl_y_vs = fbl_y_vs1;
      }
#else /* no fbl_y_overflow */
# ifndef FBL_Y_STACK_RELOCATE
      goto fbl_y_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (FBL_Y_MAXDEPTH <= fbl_y_stacksize)
	goto fbl_y_exhaustedlab;
      fbl_y_stacksize *= 2;
      if (FBL_Y_MAXDEPTH < fbl_y_stacksize)
	fbl_y_stacksize = FBL_Y_MAXDEPTH;

      {
	fbl_y_type_int16 *fbl_y_ss1 = fbl_y_ss;
	union fbl_y_alloc *fbl_y_ptr =
	  (union fbl_y_alloc *) FBL_Y_STACK_ALLOC (FBL_Y_STACK_BYTES (fbl_y_stacksize));
	if (! fbl_y_ptr)
	  goto fbl_y_exhaustedlab;
	FBL_Y_STACK_RELOCATE (fbl_y_ss);
	FBL_Y_STACK_RELOCATE (fbl_y_vs);

#  undef FBL_Y_STACK_RELOCATE
	if (fbl_y_ss1 != fbl_y_ssa)
	  FBL_Y_STACK_FREE (fbl_y_ss1);
      }
# endif
#endif /* no fbl_y_overflow */

      fbl_y_ssp = fbl_y_ss + fbl_y_size - 1;
      fbl_y_vsp = fbl_y_vs + fbl_y_size - 1;


      FBL_Y_DPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) fbl_y_stacksize));

      if (fbl_y_ss + fbl_y_stacksize - 1 <= fbl_y_ssp)
	FBL_Y_ABORT;
    }

  FBL_Y_DPRINTF ((stderr, "Entering state %d\n", fbl_y_state));

  goto fbl_y_backup;

/*-----------.
| fbl_y_backup.  |
`-----------*/
fbl_y_backup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  fbl_y_n = fbl_y_pact[fbl_y_state];
  if (fbl_y_n == FBL_Y_PACT_NINF)
    goto fbl_y_default;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* FBL_Y_CHAR is either FBL_Y_EMPTY or FBL_Y_EOF or a valid look-ahead symbol.  */
  if (fbl_y_char == FBL_Y_EMPTY)
    {
      FBL_Y_DPRINTF ((stderr, "Reading a token: "));
      fbl_y_char = FBL_Y_LEX;
    }

  if (fbl_y_char <= FBL_Y_EOF)
    {
      fbl_y_char = fbl_y_token = FBL_Y_EOF;
      FBL_Y_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      fbl_y_token = FBL_Y_TRANSLATE (fbl_y_char);
      FBL_Y__SYMBOL_PRINT ("Next token is", fbl_y_token, &fbl_y_lval, &fbl_y_lloc);
    }

  /* If the proper action on seeing token FBL_Y_TOKEN is to reduce or to
     detect an error, take that action.  */
  fbl_y_n += fbl_y_token;
  if (fbl_y_n < 0 || FBL_Y_LAST < fbl_y_n || fbl_y_check[fbl_y_n] != fbl_y_token)
    goto fbl_y_default;
  fbl_y_n = fbl_y_table[fbl_y_n];
  if (fbl_y_n <= 0)
    {
      if (fbl_y_n == 0 || fbl_y_n == FBL_Y_TABLE_NINF)
	goto fbl_y_errlab;
      fbl_y_n = -fbl_y_n;
      goto fbl_y_reduce;
    }

  if (fbl_y_n == FBL_Y_FINAL)
    FBL_Y_ACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (fbl_y_errstatus)
    fbl_y_errstatus--;

  /* Shift the look-ahead token.  */
  FBL_Y__SYMBOL_PRINT ("Shifting", fbl_y_token, &fbl_y_lval, &fbl_y_lloc);

  /* Discard the shifted token unless it is eof.  */
  if (fbl_y_char != FBL_Y_EOF)
    fbl_y_char = FBL_Y_EMPTY;

  fbl_y_state = fbl_y_n;
  *++fbl_y_vsp = fbl_y_lval;

  goto fbl_y_newstate;


/*-----------------------------------------------------------.
| fbl_y_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
fbl_y_default:
  fbl_y_n = fbl_y_defact[fbl_y_state];
  if (fbl_y_n == 0)
    goto fbl_y_errlab;
  goto fbl_y_reduce;


/*-----------------------------.
| fbl_y_reduce -- Do a reduction.  |
`-----------------------------*/
fbl_y_reduce:
  /* fbl_y_n is the number of a rule to reduce with.  */
  fbl_y_len = fbl_y_r2[fbl_y_n];

  /* If FBL_Y_LEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets FBL_Y_VAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to FBL_Y_VAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that FBL_Y_VAL may be used uninitialized.  */
  fbl_y_val = fbl_y_vsp[1-fbl_y_len];


  FBL_Y__REDUCE_PRINT (fbl_y_n);
  switch (fbl_y_n)
    {
        case 2:
#line 274 "../../../src/fvh/src/fbl_bcomp_y.y"
    {  
                /* ###----------------------------------------------###  */
                /*    Initializations					 */
                /* ###----------------------------------------------###  */
                FBL_NM1LST = 0;
                FBL_GRDLST = 0;
                FBL_CNDLST = 0;
                FBL_VALLST = 0;

                hshtab     = initab ();

                FBL_ERRFLG  = 0;
                FBL_LINNUM  = 1;
                FBL_NUMPTP  = 0;
                FBL_HEADFIG = (fbfig_list *)0;

		FBL_MODNAM  = 0;
                FBL_BEFPNT  = fbh_addfbfig (FBL_HEADFIG,0);
                FBL_HEADFIG = FBL_BEFPNT;
                FBL_HASH_ASG_FSM = createauthtable( 1000 );
                }
    break;

  case 3:
#line 297 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                struct fbbus *fbbus_pnt;
                struct fbreg *fbreg_pnt;
                struct fbout *fbout_pnt;
                struct fbaux *fbaux_pnt;
                authelem *Element;
 
                /* ###----------------------------------------------### */
                /*    Checking that each output have at least one driver*/
                /* ###----------------------------------------------### */

		/*printf("liste des types\n");
                fbtyp_pnt = FBL_BEFPNT->BETYP;
                while (fbtyp_pnt != 0)
                  {
		   printf("name : %s [%d]\n",fbtyp_pnt->NAME,j);
		   printf("class : %c \n",fbtyp_pnt->CLASS);
		   printf("BASE : %d \n",fbtyp_pnt->BASE);
		   printf("INDEX : %d \n",fbtyp_pnt->INDEX);
		   printf("TYPE : %d \n",chktab (hshtab,fbtyp_pnt->NAME,FBL_MODNAM,FBL_TYPDFN) );
		   if(fbtyp_pnt->VALUE != 0)
		   for ( i= 0; i< fbtyp_pnt->SIZE ; i++)
		   	  printf("VAL : %s \n",*(fbtyp_pnt->VALUE + i));
                  fbtyp_pnt = fbtyp_pnt->NEXT;
				  j++;
                  }*/
	
                fbout_pnt = FBL_BEFPNT->BEOUT;
                while (fbout_pnt != 0)
                  {
                    Element = searchauthelem( FBL_HASH_ASG_FSM, fbout_pnt->NAME );
                    if ( Element != (authelem *)0 ) SetFbhAssignByFsm( fbout_pnt );

                  /* LUDO
                  if ( (fbout_pnt->ABL == 0) &&
                       (! IsFbhAssignByFsm( fbout_pnt ) ) )
                  {
                    fbl_error (40,fbout_pnt->NAME);
                  }
                  */
                  fbout_pnt = fbout_pnt->NEXT;
                  }

                /*fbrin_pnt = FBL_BEFPNT->BERIN;
                while (fbout_pnt != 0)
                  {
		   printf("%s \n",fbrin_pnt->NAME);
                  if (fbout_pnt->ABL == 0)
                    fbl_error (40,fbrin_pnt->NAME);
                  fbrin_pnt = fbrin_pnt->NEXT;
                  }*/
 
                /*fbpcs_pnt = FBL_BEFPNT->BEPCS;
                while (fbpcs_pnt != 0)
                  {
		  struct fbpgm *fbpgm;
		  struct ptype *fbtyp;
		   printf("label : %s \n",fbpcs_pnt->LABEL);
			fbpgm = FBL_BEFPNT->BEPGM;
			while(fbpgm)
			{
			  fbpgm = fbpgm->NEXT;
			}
			fbtyp = fbpcs_pnt->INSTRUCTION;
			while(fbtyp)
			{
			  display_fbh(fbtyp); 
			  fbtyp = fbtyp->NEXT;
			}
                  fbpcs_pnt = fbpcs_pnt->NEXT;
                  }*/

                fbaux_pnt = FBL_BEFPNT->BEAUX;
                while (fbaux_pnt != 0)
                  {
                    Element = searchauthelem( FBL_HASH_ASG_FSM, fbaux_pnt->NAME );
                    if ( Element != (authelem *)0 ) SetFbhAssignByFsm( fbaux_pnt );

                  if ( (fbaux_pnt->ABL == 0) &&
                       (! IsFbhAssignByFsm( fbaux_pnt ) ) )
                  {
                    fbl_error (40,fbaux_pnt->NAME);
                  }
                  fbaux_pnt = fbaux_pnt->NEXT;
                  }
 
                fbbus_pnt = FBL_BEFPNT->BEBUS;
                while (fbbus_pnt != 0)
                  {
                  if (fbbus_pnt->BIABL == 0)
                  {
                    fbl_error (40,fbbus_pnt->NAME);
                  }
                  fbbus_pnt = fbbus_pnt->NEXT;
                  }
 
                fbreg_pnt = FBL_BEFPNT->BEREG;
                while (fbreg_pnt != 0)
                  {
                  if (fbreg_pnt->BIABL == 0)
                  {
                    fbl_error (40,fbreg_pnt->NAME);
                  }
                  fbreg_pnt = fbreg_pnt->NEXT;
                  }
                fretab (hshtab);
                destroyauthtable( FBL_HASH_ASG_FSM );
                }
    break;

  case 7:
#line 420 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 8:
#line 422 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 9:
#line 424 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 10:
#line 429 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 11:
#line 434 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 12:
#line 441 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 13:
#line 447 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 15:
#line 455 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 16:
#line 461 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 18:
#line 468 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 19:
#line 473 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 20:
#line 475 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 21:
#line 483 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
	  }
    break;

  case 22:
#line 489 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 23:
#line 493 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 24:
#line 500 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
	  }
    break;

  case 25:
#line 506 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 26:
#line 508 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 27:
#line 513 "../../../src/fvh/src/fbl_bcomp_y.y"
    {  }
    break;

  case 28:
#line 517 "../../../src/fvh/src/fbl_bcomp_y.y"
    { }
    break;

  case 29:
#line 524 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		long type,size=0;
		struct fbtyp *fbtyp_pnt;
                char   *name;
                char   *name_bit;
                char   *name_bit_vector;
                char   *name_std_logic;
                char   *name_std_ulogic;
                char   *name_std_logic_vector;
                char   *name_std_ulogic_vector;
                FBL_BEFPNT->NAME = (fbl_y_vsp[(2) - (3)].text);
		FBL_MODNAM = (fbl_y_vsp[(2) - (3)].text);

		fbtyp_pnt = fbh_prdeftyp();
		 FBL_BEFPNT->BETYP = fbtyp_pnt;
		 FBL_NUMTYP =1;
		 while(fbtyp_pnt)
		 {
		   size++;
		    fbtyp_pnt = fbtyp_pnt->NEXT;
		  }

                  name_bit = namealloc( "bit" );
                  name_bit_vector = namealloc( "bit_vector" );
                  name_std_logic = namealloc( "std_logic" );
                  name_std_ulogic = namealloc( "std_ulogic" );
                  name_std_logic_vector = namealloc( "std_logic_vector" );
                  name_std_ulogic_vector = namealloc( "std_ulogic_vector" );

		 fbtyp_pnt =FBL_BEFPNT->BETYP ;
		while(fbtyp_pnt)
		  {
		type = val_type(fbtyp_pnt->NAME);
   	    addtab(hshtab,fbtyp_pnt->NAME,FBL_MODNAM,FBL_SIGDFN,FBL_TPEDFN);
   	    addtab(hshtab,fbtyp_pnt->NAME,FBL_MODNAM,FBL_USRDFN,type);
   	    addtab(hshtab,fbtyp_pnt->NAME,FBL_MODNAM,FBL_LBLDFN,fbtyp_pnt->CLASS);
   	    addtab(hshtab,fbtyp_pnt->NAME,FBL_MODNAM,FBL_TYPDFN,size +1 - FBL_NUMTYP);
            addtab(hshtab,fbtyp_pnt->NAME,FBL_MODNAM,FBL_PNTDFN,(long)fbtyp_pnt);
                    if ( ( fbtyp_pnt->NAME == name_bit        ) ||
                         ( fbtyp_pnt->NAME == name_bit_vector ) )
                    {
                      if ( fbtyp_pnt->NAME == name_bit ) name = name_std_logic;
                      else                               name = name_std_logic_vector;

   	    addtab(hshtab,name,FBL_MODNAM,FBL_SIGDFN,FBL_TPEDFN);
   	    addtab(hshtab,name,FBL_MODNAM,FBL_USRDFN,type);
   	    addtab(hshtab,name,FBL_MODNAM,FBL_LBLDFN,fbtyp_pnt->CLASS);
   	    addtab(hshtab,name,FBL_MODNAM,FBL_TYPDFN,size +1 - FBL_NUMTYP);
            addtab(hshtab,name,FBL_MODNAM,FBL_PNTDFN,(long)fbtyp_pnt);

                      if ( fbtyp_pnt->NAME == name_bit ) name = name_std_ulogic;
                      else                               name = name_std_ulogic_vector;

   	    addtab(hshtab,name,FBL_MODNAM,FBL_SIGDFN,FBL_TPEDFN);
   	    addtab(hshtab,name,FBL_MODNAM,FBL_USRDFN,type);
   	    addtab(hshtab,name,FBL_MODNAM,FBL_LBLDFN,fbtyp_pnt->CLASS);
   	    addtab(hshtab,name,FBL_MODNAM,FBL_TYPDFN,size +1 - FBL_NUMTYP);
            addtab(hshtab,name,FBL_MODNAM,FBL_PNTDFN,(long)fbtyp_pnt);
                    }
		    fbtyp_pnt = fbtyp_pnt->NEXT;
		    FBL_NUMTYP++;
		  }
                }
    break;

  case 30:
#line 591 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                if (((fbl_y_vsp[(7) - (8)].text) != 0) && ((fbl_y_vsp[(7) - (8)].text) != (fbl_y_vsp[(2) - (8)].text)))
                {
                  fbl_error (1,(fbl_y_vsp[(7) - (8)].text));
                }
                }
    break;

  case 31:
#line 599 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_error (2,0); }
    break;

  case 32:
#line 604 "../../../src/fvh/src/fbl_bcomp_y.y"
    {  
                (fbl_y_val.name).FLAG  = 'U';
                (fbl_y_val.name).LEFT  = -1;
                (fbl_y_val.name).RIGHT = -1;
                }
    break;

  case 33:
#line 610 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(1) - (1)].name); }
    break;

  case 34:
#line 617 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(2) - (3)].name); }
    break;

  case 35:
#line 623 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(2) - (2)].name); }
    break;

  case 36:
#line 630 "../../../src/fvh/src/fbl_bcomp_y.y"
    {    
                (fbl_y_val.name).FLAG  = 'A';
                (fbl_y_val.name).LEFT  = (fbl_y_vsp[(1) - (3)].valu);
                (fbl_y_val.name).RIGHT = (fbl_y_vsp[(3) - (3)].valu);

                if ((((fbl_y_vsp[(1) - (3)].valu) > (fbl_y_vsp[(3) - (3)].valu)) && ((fbl_y_vsp[(2) - (3)].valu) == FBL_UPTDFN)) ||
                    (((fbl_y_vsp[(1) - (3)].valu) < (fbl_y_vsp[(3) - (3)].valu)) && ((fbl_y_vsp[(2) - (3)].valu) == FBL_DWTDFN)) ||
                    (((fbl_y_vsp[(1) - (3)].valu) < 0 ) || ((fbl_y_vsp[(2) - (3)].valu) < 0 )))
                  {
                  fbl_error (32,0);
                  }
                }
    break;

  case 37:
#line 646 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_UPTDFN; }
    break;

  case 38:
#line 648 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_DWTDFN; }
    break;

  case 42:
#line 665 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_error (3,0); }
    break;

  case 46:
#line 688 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                char *signame;
                long   sigconf;
                void *pnt;
 
                /* ###----------------------------------------------### */
                /*    First, check the validity of the declaration.     */
                /* Then, for each port, create the apropriate set of    */
                /* structures (fbrin, fbpor, fbout, fbbus)              */
                /* ###----------------------------------------------### */
 
                fbl_chkdcl ('P', (fbl_y_vsp[(4) - (7)].valu), val_type((fbl_y_vsp[(5) - (7)].name).NAME), (fbl_y_vsp[(5) - (7)].name).FLAG, (fbl_y_vsp[(7) - (7)].valu), (fbl_y_vsp[(6) - (7)].name).FLAG,&sigconf);

                FBL_NM1LST = reverse (FBL_NM1LST);
                while (FBL_NM1LST != 0)
                  {
                  signame = (char *)FBL_NM1LST->DATA;
                  if (chktab (hshtab,signame,FBL_MODNAM,FBL_SIGDFN) != 0)
                  {
                    fbl_error (4,signame);
                  }

                  pnt =  fbl_addstr (FBL_BEFPNT,'P',(fbl_y_vsp[(4) - (7)].valu),val_type((fbl_y_vsp[(5) - (7)].name).NAME),(fbl_y_vsp[(5) - (7)].name).TYPE,(fbl_y_vsp[(5) - (7)].name).FLAG,signame,
                                (fbl_y_vsp[(6) - (7)].name).LEFT,(fbl_y_vsp[(6) - (7)].name).RIGHT);
 
                  addtab (hshtab,signame,FBL_MODNAM,FBL_SIGDFN,sigconf);
                  addtab (hshtab,signame,FBL_MODNAM,FBL_TYPDFN,(fbl_y_vsp[(5) - (7)].name).TYPE);
                  addtab (hshtab,signame,FBL_MODNAM,FBL_WMNDFN,(fbl_y_vsp[(6) - (7)].name).LEFT);
                  addtab (hshtab,signame,FBL_MODNAM,FBL_WMXDFN,(fbl_y_vsp[(6) - (7)].name).RIGHT);
                  addtab (hshtab,signame,FBL_MODNAM,FBL_LBLDFN,(fbl_y_vsp[(7) - (7)].valu));
                  addtab (hshtab,signame,FBL_MODNAM,FBL_PNTDFN,(long)pnt);
 
                  FBL_NM1LST = delchain (FBL_NM1LST, FBL_NM1LST);
                  }
                }
    break;

  case 47:
#line 724 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                /* ###----------------------------------------------### */
                /*   The following 3 lines reject tokens until the	*/
                /* sync. token 'Semicolon' is found			*/
                /* ###----------------------------------------------### */
 
                /*do
                  fbl_y_char = fbl_y_lex ();
                while ((fbl_y_char != Semicolon) && (fbl_y_char != 0));           
                fbl_y_errok;
*/ 
                fbl_error (6,0);
                }
    break;

  case 50:
#line 746 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_ICNDFN; }
    break;

  case 51:
#line 748 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_ICNDFN; }
    break;

  case 52:
#line 750 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_OCNDFN; }
    break;

  case 53:
#line 752 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_BCNDFN; }
    break;

  case 54:
#line 761 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                if ((fbl_y_vsp[(4) - (5)].text) != FBL_MODNAM)
                {
                  fbl_error (1,(fbl_y_vsp[(4) - (5)].text));
                }
                }
    break;

  case 55:
#line 768 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		  struct fbtyp *listfbtyp; 
		  struct fbtyp *fbtypaux; 
		  struct fbtyp *revfbtyp = 0; 
			listfbtyp = FBL_BEFPNT->BETYP;
		     revfbtyp = listfbtyp;
		     listfbtyp = listfbtyp->NEXT;		
		     revfbtyp->NEXT = 0;	
		  while(listfbtyp != 0)
		   {
		     fbtypaux = revfbtyp;	
		     revfbtyp = listfbtyp;
		     listfbtyp = listfbtyp->NEXT;		
		     revfbtyp->NEXT = fbtypaux;		
		   }
			
                        FBL_BEFPNT->BETYP = fbh_crtfbtyp(revfbtyp);
		}
    break;

  case 56:
#line 791 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                if (((fbl_y_vsp[(12) - (13)].text) != 0) && ((fbl_y_vsp[(12) - (13)].text) != (fbl_y_vsp[(2) - (13)].text)))
                {
                  fbl_error (7,(fbl_y_vsp[(12) - (13)].text));
                }
                }
    break;

  case 57:
#line 799 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_error (8,0); }
    break;

  case 66:
#line 820 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_error (9,0); }
    break;

  case 67:
#line 825 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		char pragma[30];
		char type[128];
		char name[128];
		char value[128];
		char *pt;
		long  field;

		 field = sscanf((char *)(fbl_y_vsp[(1) - (1)].valu),"-- %s %s %s %s", pragma,type,name,value);

		if ( field == 3 ) pt = (void *)0;
		else
		if ( field == 4 ) pt = namealloc( value );
		else
		{
                  fbl_error (86,0);
		}
		
                        FBL_BEFPNT->BEPGM = fbh_addfbpgm(FBL_BEFPNT->BEPGM,type,name,pt);
                        FBL_BEFPNT->BEPGM->LINE_NUM = FBL_LINNUM;
		}
    break;

  case 68:
#line 856 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                long sigconf;

                if (fbl_chkdcl ('C',0,val_type((fbl_y_vsp[(4) - (7)].name).NAME),(fbl_y_vsp[(4) - (7)].name).FLAG,0,(fbl_y_vsp[(5) - (7)].name).FLAG,&sigconf) == 0)
                {
                  addtab (hshtab,(fbl_y_vsp[(2) - (7)].text),FBL_MODNAM,FBL_WMNDFN,(fbl_y_vsp[(5) - (7)].name).LEFT);
                  addtab (hshtab,(fbl_y_vsp[(2) - (7)].text),FBL_MODNAM,FBL_WMXDFN,(fbl_y_vsp[(5) - (7)].name).RIGHT);
                  addtab (hshtab,(fbl_y_vsp[(2) - (7)].text),FBL_MODNAM,FBL_SIGDFN,sigconf);
                  addtab (hshtab,(fbl_y_vsp[(2) - (7)].text),FBL_MODNAM,FBL_TYPDFN,-1);
                  addtab (hshtab,(fbl_y_vsp[(2) - (7)].text),0,FBL_PNTDFN,(fbl_y_vsp[(6) - (7)].text));
                }
                }
    break;

  case 69:
#line 873 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(2) - (2)].text); }
    break;

  case 70:
#line 884 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                char *signame;
                long   sigconf;
                void *pnt;
                long   errflg;
 
                errflg = fbl_chkdcl ('S',0,val_type((fbl_y_vsp[(4) - (7)].name).NAME),(fbl_y_vsp[(4) - (7)].name).FLAG,(fbl_y_vsp[(6) - (7)].valu),(fbl_y_vsp[(5) - (7)].name).FLAG,&sigconf);
 
              /* ###----------------------------------------------### */
            /*    First, check the validity of the declaration.     */
          /* Then, for each signal, create the apropriate set of  */
        /* structures (fbrin, fbreg, fbaux, fbbux)
                */
                /* ###----------------------------------------------### */
 
	  /*if( val_type($4.NAME) != -1)
		fbl_error(81,$4.NAME);*/
	  /*else */
	  {
              FBL_NM1LST = reverse (FBL_NM1LST);
                while (FBL_NM1LST != 0)
                  {
                  signame = (char *)FBL_NM1LST->DATA;
                  if (chktab (hshtab,signame,FBL_MODNAM,FBL_SIGDFN) != 0)
                  {
                  fbl_error (10,signame);
                  }

                  pnt = fbl_addstr (FBL_BEFPNT,'S',0,val_type((fbl_y_vsp[(4) - (7)].name).NAME),(fbl_y_vsp[(4) - (7)].name).TYPE,
			(fbl_y_vsp[(4) - (7)].name).FLAG,signame, (fbl_y_vsp[(5) - (7)].name).LEFT,(fbl_y_vsp[(5) - (7)].name).RIGHT);
 
                  addtab (hshtab,signame,FBL_MODNAM,FBL_SIGDFN,sigconf);
                  addtab (hshtab,signame,FBL_MODNAM,FBL_TYPDFN,(fbl_y_vsp[(4) - (7)].name).TYPE);
                addtab (hshtab,signame,FBL_MODNAM,FBL_WMNDFN,(fbl_y_vsp[(5) - (7)].name).LEFT);
              addtab (hshtab,signame,FBL_MODNAM,FBL_WMXDFN,(fbl_y_vsp[(5) - (7)].name).RIGHT);
              addtab (hshtab,signame,FBL_MODNAM,FBL_LBLDFN,(fbl_y_vsp[(6) - (7)].valu));
            addtab (hshtab,signame,FBL_MODNAM,FBL_PNTDFN,(long)pnt);
 
          FBL_NM1LST = delchain (FBL_NM1LST,FBL_NM1LST);
        
                  }
           }  
	}
    break;

  case 72:
#line 938 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		FBL_BEFPNT->BETYP =  fbh_addfbtyp(FBL_BEFPNT->BETYP,(fbl_y_vsp[(2) - (4)].text),(fbl_y_vsp[(4) - (4)].type).LEFT,
		 (fbl_y_vsp[(4) - (4)].type).RIGHT,(fbl_y_vsp[(4) - (4)].type).VALUE,(fbl_y_vsp[(4) - (4)].type).SIZE,(fbl_y_vsp[(4) - (4)].type).BYTE,(fbl_y_vsp[(4) - (4)].type).BASE,(fbl_y_vsp[(4) - (4)].type).INDEX,(fbl_y_vsp[(4) - (4)].type).RESOLV,(fbl_y_vsp[(4) - (4)].type).CLASS); 
                FBL_BEFPNT->BETYP->LINE_NUM = FBL_LINNUM;
   		addtab(hshtab,(fbl_y_vsp[(2) - (4)].text),FBL_MODNAM,FBL_SIGDFN,FBL_TPEDFN);
   		addtab(hshtab,(fbl_y_vsp[(2) - (4)].text),FBL_MODNAM,FBL_LBLDFN,(fbl_y_vsp[(4) - (4)].type).CLASS);
   	        addtab(hshtab,(fbl_y_vsp[(2) - (4)].text),FBL_MODNAM,FBL_TYPDFN,FBL_NUMTYP);
                addtab (hshtab,(fbl_y_vsp[(2) - (4)].text),FBL_MODNAM,FBL_PNTDFN,(long)FBL_BEFPNT->BETYP);
				FBL_NUMTYP++;
		}
    break;

  case 74:
#line 953 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.type) = (fbl_y_vsp[(1) - (1)].type); }
    break;

  case 75:
#line 955 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.type) = (fbl_y_vsp[(1) - (1)].type); }
    break;

  case 76:
#line 957 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_y_errok; }
    break;

  case 77:
#line 965 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		FBL_BEFPNT->BETYP =  fbh_addfbtyp(FBL_BEFPNT->BETYP,(fbl_y_vsp[(2) - (4)].text),(fbl_y_vsp[(4) - (4)].type).LEFT,
		 (fbl_y_vsp[(4) - (4)].type).RIGHT,(fbl_y_vsp[(4) - (4)].type).VALUE,(fbl_y_vsp[(4) - (4)].type).SIZE,(fbl_y_vsp[(4) - (4)].type).BYTE,(fbl_y_vsp[(4) - (4)].type).BASE,(fbl_y_vsp[(4) - (4)].type).INDEX,(fbl_y_vsp[(4) - (4)].type).RESOLV,(fbl_y_vsp[(4) - (4)].type).CLASS); 
                FBL_BEFPNT->BETYP->LINE_NUM = FBL_LINNUM;
   		addtab(hshtab,(fbl_y_vsp[(2) - (4)].text),FBL_MODNAM,FBL_SIGDFN,FBL_TPEDFN);
   		addtab(hshtab,(fbl_y_vsp[(2) - (4)].text),FBL_MODNAM,FBL_LBLDFN,(fbl_y_vsp[(4) - (4)].type).CLASS);
   	        addtab(hshtab,(fbl_y_vsp[(2) - (4)].text),FBL_MODNAM,FBL_TYPDFN,FBL_NUMTYP);
                addtab (hshtab,(fbl_y_vsp[(2) - (4)].text),FBL_MODNAM,FBL_PNTDFN,(long)FBL_BEFPNT->BETYP);
				FBL_NUMTYP++;
		}
    break;

  case 79:
#line 981 "../../../src/fvh/src/fbl_bcomp_y.y"
    { struct fbtyp *fbtyp_pnt;
		fbtyp_pnt = (struct fbtyp*)chktab(hshtab,(fbl_y_vsp[(1) - (2)].name),FBL_MODNAM,FBL_PNTDFN);
		(fbl_y_val.type).BASE = (fbl_y_vsp[(1) - (2)].name).TYPE ; 
		(fbl_y_val.type).VALUE = 0 ;
		(fbl_y_val.type).SIZE = 0 ;
		(fbl_y_val.type).BYTE = fbtyp_pnt->BYTE  ;
		(fbl_y_val.type).LEFT = (fbl_y_vsp[(2) - (2)].name).LEFT ;
		(fbl_y_val.type).RIGHT = (fbl_y_vsp[(2) - (2)].name).RIGHT ;
		(fbl_y_val.type).CLASS = 'S' ;
		(fbl_y_val.type).RESOLV = 0 ;
		}
    break;

  case 80:
#line 996 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		(fbl_y_val.type) = (fbl_y_vsp[(1) - (1)].type); 
		}
    break;

  case 81:
#line 1005 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                char *enumname;
		long size=0;
		long indice=0;
                char **pnt;
		chain_list *nm1lst;
 
                FBL_NM1LST = reverse (FBL_NM1LST);

		nm1lst = FBL_NM1LST;
                while (nm1lst != 0)
		  {
			size++;
			nm1lst = nm1lst->NEXT;
	  	  }
		if( size != 0)
		  pnt = (char **) malloc(size * sizeof(char*));
	         
                while (FBL_NM1LST != 0)
                  {
                  enumname = namealloc((char *)FBL_NM1LST->DATA);
                  if (chktab (hshtab,enumname,FBL_MODNAM,FBL_SIGDFN) != 0)
                  {
                    fbl_error (82,enumname);
                  }

                  addtab (hshtab,enumname,FBL_MODNAM,FBL_SIGDFN,FBL_CSTDFN);
                  addtab (hshtab,enumname,FBL_MODNAM,FBL_TYPDFN,FBL_NUMTYP);
                  addtab (hshtab,enumname,FBL_MODNAM,FBL_USRDFN,size);
                  addtab (hshtab,enumname,FBL_MODNAM,FBL_WMNDFN,-1);
                  addtab (hshtab,enumname,FBL_MODNAM,FBL_WMXDFN,-1);
                  addtab (hshtab,enumname,FBL_MODNAM,FBL_LBLDFN,indice);
                  addtab (hshtab,enumname,FBL_MODNAM,FBL_PNTDFN,(long)pnt);
 
		  pnt[indice++] = enumname;
                  FBL_NM1LST = delchain (FBL_NM1LST, FBL_NM1LST);
                  }
		(fbl_y_val.type).VALUE = pnt ;
		(fbl_y_val.type).SIZE = size ;
		(fbl_y_val.type).LEFT = 0 ;
		(fbl_y_val.type).RIGHT = 0 ;
		(fbl_y_val.type).BYTE = size/256 +1;
		(fbl_y_val.type).CLASS = 'E' ;
		(fbl_y_val.type).BASE = 0 ;
		(fbl_y_val.type).RESOLV = 0 ;
		}
    break;

  case 83:
#line 1059 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_y_errok; }
    break;

  case 84:
#line 1064 "../../../src/fvh/src/fbl_bcomp_y.y"
    { FBL_NM1LST = addchain (FBL_NM1LST,(fbl_y_vsp[(1) - (1)].text)); }
    break;

  case 85:
#line 1066 "../../../src/fvh/src/fbl_bcomp_y.y"
    { FBL_NM1LST = addchain (FBL_NM1LST,(fbl_y_vsp[(1) - (1)].text)); }
    break;

  case 86:
#line 1072 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		 (fbl_y_val.type) = (fbl_y_vsp[(1) - (1)].type); 
		}
    break;

  case 87:
#line 1079 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.type) = (fbl_y_vsp[(1) - (1)].type); }
    break;

  case 88:
#line 1081 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.type) = (fbl_y_vsp[(1) - (1)].type); }
    break;

  case 89:
#line 1091 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		(fbl_y_val.type) = (fbl_y_vsp[(6) - (6)].type);
		(fbl_y_val.type).CLASS = 'U'; 
		(fbl_y_val.type).INDEX = (fbl_y_vsp[(3) - (6)].name).TYPE; 
		}
    break;

  case 90:
#line 1103 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.type) = (fbl_y_vsp[(4) - (4)].type); 
		(fbl_y_val.type).CLASS = 'A'; 
		(fbl_y_val.type).INDEX = (fbl_y_vsp[(2) - (4)].name).TYPE; 
		}
    break;

  case 91:
#line 1113 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		(fbl_y_val.name).NAME = (fbl_y_vsp[(1) - (3)].name).NAME;
		(fbl_y_val.name).LEFT = (fbl_y_vsp[(1) - (3)].name).LEFT;
		(fbl_y_val.name).RIGHT = (fbl_y_vsp[(1) - (3)].name).RIGHT;
		/*$$.TYPE = chktab(hshtab,$1,FBL_MODNAM,FBL_TYPDFN); */
		(fbl_y_val.name).TYPE = (fbl_y_vsp[(1) - (3)].name).TYPE; 
		(fbl_y_val.name).FLAG = chktab(hshtab,(fbl_y_vsp[(1) - (3)].name),FBL_MODNAM,FBL_LBLDFN);
		if ((fbl_y_val.name).TYPE == 0 || (fbl_y_val.name).FLAG ==0)
                {
		  fbl_error(83,(fbl_y_vsp[(1) - (3)].name).NAME);
                }
	      }
    break;

  case 92:
#line 1131 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(2) - (3)].name);}
    break;

  case 93:
#line 1136 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(1) - (1)].name);}
    break;

  case 94:
#line 1139 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(2) - (2)].name);
	    (fbl_y_val.name).NAME = (fbl_y_vsp[(1) - (2)].name).NAME;
	  }
    break;

  case 95:
#line 1144 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(1) - (1)].name);}
    break;

  case 96:
#line 1149 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		long type;
		(fbl_y_val.name).NAME = (fbl_y_vsp[(1) - (1)].text);
		(fbl_y_val.name).LEFT = -1;
		(fbl_y_val.name).RIGHT = -1;
		(fbl_y_val.name).TYPE = chktab(hshtab,(fbl_y_vsp[(1) - (1)].text),FBL_MODNAM,FBL_TYPDFN);
		(fbl_y_val.name).FLAG = chktab(hshtab,(fbl_y_vsp[(1) - (1)].text),FBL_MODNAM,FBL_LBLDFN);
		type = chktab(hshtab,(fbl_y_vsp[(1) - (1)].text),FBL_MODNAM,FBL_SIGDFN); 
		if (type != FBL_TPEDFN || (fbl_y_val.name).TYPE ==0)
                {
			fbl_error(84,(fbl_y_vsp[(1) - (1)].text));
                }
	      }
    break;

  case 97:
#line 1167 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = 0; }
    break;

  case 98:
#line 1169 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = REGISTER; }
    break;

  case 99:
#line 1171 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = BUS; }
    break;

  case 107:
#line 1191 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_error (18,0); }
    break;

  case 108:
#line 1201 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		if (chktab (hshtab,(fbl_y_vsp[(1) - (4)].text),FBL_MODNAM,FBL_LBLDFN) != 0)
                {
		  fbl_error (19,(fbl_y_vsp[(1) - (4)].text));
                }

		addtab (hshtab,(fbl_y_vsp[(1) - (4)].text),FBL_MODNAM,FBL_LBLDFN,1);
		if ((fbl_y_vsp[(3) - (4)].text) != NULL)
		  FBL_GRDLST = addchain (FBL_GRDLST,(char *)(fbl_y_vsp[(3) - (4)].text));
		}
    break;

  case 109:
#line 1216 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		if ((fbl_y_vsp[(3) - (10)].text) != NULL)
		  FBL_GRDLST = delchain (FBL_GRDLST,FBL_GRDLST);
		if (((fbl_y_vsp[(9) - (10)].text) != NULL) && ((fbl_y_vsp[(9) - (10)].text) != (fbl_y_vsp[(1) - (10)].text)))
                {
		  fbl_error (20,(fbl_y_vsp[(9) - (10)].text));
                }
		}
    break;

  case 111:
#line 1233 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		if (chktab (hshtab,(fbl_y_vsp[(1) - (2)].text),FBL_MODNAM,FBL_LBLDFN) != 0)
                {
		  fbl_error (19,(fbl_y_vsp[(1) - (2)].text));
                }

		addtab (hshtab,(fbl_y_vsp[(1) - (2)].text),FBL_MODNAM,FBL_LBLDFN,1);
		if (FBL_ERRFLG == 0)
		  FBL_BEFPNT->BEMSG->LABEL = (fbl_y_vsp[(1) - (2)].text);
		}
    break;

  case 113:
#line 1249 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		if (chktab (hshtab,(fbl_y_vsp[(1) - (2)].text),FBL_MODNAM,FBL_LBLDFN) != 0)
                {
		  fbl_error (19,(fbl_y_vsp[(1) - (2)].text));
                }
		addtab (hshtab,(fbl_y_vsp[(1) - (2)].text),FBL_MODNAM,FBL_LBLDFN,1);
		}
    break;

  case 115:
#line 1259 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		if (chktab (hshtab,(fbl_y_vsp[(1) - (2)].text),FBL_MODNAM,FBL_LBLDFN) != 0)
                {
                  {
		  fbl_error (19,(fbl_y_vsp[(1) - (2)].text));
                  }
                }
		addtab (hshtab,(fbl_y_vsp[(1) - (2)].text),FBL_MODNAM,FBL_LBLDFN,1);
		}
    break;

  case 118:
#line 1282 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		long             i;
		struct fbout   *fbout_pnt;
		struct fbbus   *fbbus_pnt;
		struct fbreg   *fbreg_pnt;
		struct fbaux   *fbaux_pnt;
		struct fbbux   *fbbux_pnt;
		struct chain   *abl_pnt;
		struct fbl_expr expr0;
		struct fbl_expr expr1;
		struct fbl_expr expr2;
		struct fbl_expr expr3;
		struct fbl_expr expr4;
		struct fbl_expr expr5;
		struct fbl_expr expr6;
		long             rev_flg = 0;
		long             left_bnd;
		long             right_bnd;
		long             left;
		long             right;
		long             in_bound;
		long             out_bound;
		long             sig_width;
		long             sig_conf;

		expr4 = (fbl_y_vsp[(5) - (6)].list);

		while (FBL_CNDLST != NULL)
		  {
		  expr5 = *((fbl_ablstr *) FBL_CNDLST->DATA);
		  expr6 = *((fbl_ablstr *) FBL_VALLST->DATA);

		  expr0 = fbl_cpyablstr (expr5);
		  expr1 = fbl_crtabl (ABL_NOT , expr5, FBL_EMPSTR,-1,-1);
		  expr5 = expr0;
		  expr2 = fbl_crtabl (ANDM, expr4, expr1     ,-1,-1);
		  expr3 = fbl_crtabl (ANDM, expr6, expr5     ,-1,-1);
		  expr4 = fbl_crtabl (ABL_OR  , expr2, expr3     ,-1,-1);

		  FBL_CNDLST = delchain (FBL_CNDLST,FBL_CNDLST);
		  FBL_VALLST = delchain (FBL_VALLST,FBL_VALLST);
		  }

		left_bnd  = chktab (hshtab,(fbl_y_vsp[(1) - (6)].name).NAME,FBL_MODNAM,FBL_WMNDFN);
		right_bnd = chktab (hshtab,(fbl_y_vsp[(1) - (6)].name).NAME,FBL_MODNAM,FBL_WMXDFN);
		sig_conf  = chktab (hshtab,(fbl_y_vsp[(1) - (6)].name).NAME,FBL_MODNAM,FBL_SIGDFN);

		left  = (fbl_y_vsp[(1) - (6)].name).LEFT;
		right = (fbl_y_vsp[(1) - (6)].name).RIGHT;

		if (left_bnd <= right_bnd)
		  {
		  sig_width = right_bnd - left_bnd + 1;
		  if (left <= right)
		    {
		    rev_flg   = 0;
		    in_bound  = right_bnd - right;
		    out_bound = right_bnd - left;
		    if ((left < left_bnd) || (right > right_bnd))
                    {
		      fbl_error (36,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    }
		  else
		    {
		    rev_flg   = 1;
		    in_bound  = right_bnd - left;
		    out_bound = right_bnd - right;
		    if ((left > right_bnd) || (right < left_bnd))
                    {
		      fbl_error (36,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
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
                    {
		      fbl_error (36,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    }
		  else
		    {
		    rev_flg   = 0;
		    in_bound  = right - right_bnd;
		    out_bound = left  - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
                    {
		      fbl_error (36,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    }
		  }

		if ((out_bound - in_bound + 1) != expr4.WIDTH)
                {
		  fbl_error (35,(fbl_y_vsp[(1) - (6)].name).NAME);
                }

		if (rev_flg == 1)
		  expr4.LIST_ABL = reverse (expr4.LIST_ABL);

		abl_pnt = expr4.LIST_ABL;

		switch (sig_conf)
		  {
		  case (FBL_ICNDFN + FBL_BITDFN + FBL_NORDFN) :
                    {
		    fbl_error (21,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    break;

		  case (FBL_OCNDFN + FBL_BITDFN + FBL_NORDFN) :
		  case (FBL_BCNDFN + FBL_BITDFN + FBL_NORDFN) :
		    if ((fbl_y_vsp[(3) - (6)].valu) == FBL_GRDDFN)
                    {
		      fbl_error (22,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    fbout_pnt = (struct fbout *)
		                 chktab (hshtab,(fbl_y_vsp[(1) - (6)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (fbout_pnt->ABL != NULL)
                          {
		            fbl_error (39,fbout_pnt->NAME);
                          }
		          else
		            fbout_pnt->ABL = (struct chain *)abl_pnt->DATA;
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbout_pnt = fbout_pnt->NEXT;
		        }
		      }
		    break;

		  case (FBL_OCNDFN + FBL_MUXDFN + FBL_BUSDFN) :
		  case (FBL_OCNDFN + FBL_WORDFN + FBL_BUSDFN) :
		  case (FBL_BCNDFN + FBL_MUXDFN + FBL_BUSDFN) :
		  case (FBL_BCNDFN + FBL_WORDFN + FBL_BUSDFN) :
		    if (((fbl_y_vsp[(3) - (6)].valu) != FBL_GRDDFN) || (FBL_GRDLST == NULL))
                    {
		      fbl_error (23,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    fbbus_pnt = (struct fbbus *)
		                 chktab (hshtab,(fbl_y_vsp[(1) - (6)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          fbbus_pnt->BINODE = fbh_addbinode (fbbus_pnt->BINODE,
		                                             NULL,NULL);
		          fbbus_pnt->BIABL  = fbh_addbiabl  (fbbus_pnt->BIABL,
		                                             FBL_LBLNAM,
		                                             dupablexpr(FBL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbbus_pnt = fbbus_pnt->NEXT;
		        }
		      }
		    break;

		  case (FBL_BITDFN + FBL_NORDFN):
		    if ((fbl_y_vsp[(3) - (6)].valu) == FBL_GRDDFN)
                    {
		      fbl_error (22,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    fbaux_pnt = (struct fbaux *)
		                chktab (hshtab,(fbl_y_vsp[(1) - (6)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (fbaux_pnt->ABL != NULL)
                          {
		            fbl_error (39,fbaux_pnt->NAME);
                          }
		          else
		            fbaux_pnt->ABL = (struct chain *)abl_pnt->DATA;
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbaux_pnt = fbaux_pnt->NEXT;
		        }
		      }
		    break;

		  case (FBL_RBIDFN + FBL_REGDFN):
		    if (((fbl_y_vsp[(3) - (6)].valu) != FBL_GRDDFN) || (FBL_GRDLST == NULL))
                    {
		      fbl_error (23,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    fbreg_pnt = (struct fbreg *)
		                chktab (hshtab,(fbl_y_vsp[(1) - (6)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          fbreg_pnt->BINODE = fbh_addbinode (fbreg_pnt->BINODE,
		                                             NULL,NULL);
		          fbreg_pnt->BIABL  = fbh_addbiabl  (fbreg_pnt->BIABL,
		                                             FBL_LBLNAM,
		                                             dupablexpr(FBL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbreg_pnt = fbreg_pnt->NEXT;
		        }
		      }
		    break;

		  case (FBL_MUXDFN + FBL_BUSDFN) :
		  case (FBL_WORDFN + FBL_BUSDFN) :
		    if (((fbl_y_vsp[(3) - (6)].valu) != FBL_GRDDFN) || (FBL_GRDLST == NULL))
                    {
		      fbl_error (23,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    fbbux_pnt = (struct fbbux *)
		                chktab (hshtab,(fbl_y_vsp[(1) - (6)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          fbbux_pnt->BINODE = fbh_addbinode (fbbux_pnt->BINODE,
		                                             NULL,NULL);
		          fbbux_pnt->BIABL  = fbh_addbiabl  (fbbux_pnt->BIABL,
		                                             FBL_LBLNAM,
		                                             dupablexpr(FBL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbbux_pnt = fbbux_pnt->NEXT;
		        }
		      }
		    break;

		  default :
                    {
		    fbl_error (17,(fbl_y_vsp[(1) - (6)].name).NAME);
                    }
		    break;
		  }
		}
    break;

  case 120:
#line 1560 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		struct fbl_expr *expr_pnt;

		expr_pnt           = (fbl_ablstr *)mbkalloc(sizeof(fbl_ablstr));
		expr_pnt->WIDTH    = (fbl_y_vsp[(4) - (5)].list).WIDTH;
		expr_pnt->LIST_ABL = (fbl_y_vsp[(4) - (5)].list).LIST_ABL;
		FBL_CNDLST         = addchain (FBL_CNDLST,(char *) expr_pnt);

		expr_pnt           = (fbl_ablstr *)mbkalloc(sizeof(fbl_ablstr));
		expr_pnt->WIDTH    = (fbl_y_vsp[(2) - (5)].list).WIDTH;
		expr_pnt->LIST_ABL = (fbl_y_vsp[(2) - (5)].list).LIST_ABL;
		FBL_VALLST         = addchain (FBL_VALLST,(char *) expr_pnt);
		}
    break;

  case 121:
#line 1578 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		FBL_SLCEXP = (fbl_y_vsp[(2) - (2)].list);
		FBL_BDDPNT = NULL;
		}
    break;

  case 122:
#line 1589 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		long             i;
		struct fbout   *fbout_pnt;
		struct fbbus   *fbbus_pnt;
		struct fbreg   *fbreg_pnt;
		struct fbaux   *fbaux_pnt;
		struct fbbux   *fbbux_pnt;
		struct chain   *abl_pnt;
		struct fbl_expr expr1;
		long             rev_flg = 0;
		long             left_bnd;
		long             right_bnd;
		long             left;
		long             right;
		long             in_bound;
		long             out_bound;
		long             sig_width;
		long             sig_conf;

		expr1 = fbl_crtabl (ABL_OR ,(fbl_y_vsp[(8) - (10)].list) ,(fbl_y_vsp[(9) - (10)].list),-1,-1);
		if (FBL_BDDPNT != getlogbddnodeone())
                {
		  fbl_error (25,NULL);
                }
		left_bnd  = chktab (hshtab,(fbl_y_vsp[(5) - (10)].name).NAME,FBL_MODNAM,FBL_WMNDFN);
		right_bnd = chktab (hshtab,(fbl_y_vsp[(5) - (10)].name).NAME,FBL_MODNAM,FBL_WMXDFN);
		sig_conf  = chktab (hshtab,(fbl_y_vsp[(5) - (10)].name).NAME,FBL_MODNAM,FBL_SIGDFN);

		left  = (fbl_y_vsp[(5) - (10)].name).LEFT;
		right = (fbl_y_vsp[(5) - (10)].name).RIGHT;
		if (left_bnd <= right_bnd)
		  {
		  sig_width = right_bnd - left_bnd + 1;
		  if (left <= right)
		    {
		    rev_flg   = 0;
		    in_bound  = right_bnd - right;
		    out_bound = right_bnd - left;
		    if ((left < left_bnd) || (right > right_bnd))
                    {
		      fbl_error (36,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    }
		  else
		    {
		    rev_flg   = 1;
		    in_bound  = right_bnd - left;
		    out_bound = right_bnd - right;
		    if ((left > right_bnd) || (right < left_bnd))
                    {
		      fbl_error (36,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
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
                    {
		      fbl_error (36,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    }
		  else
		    {
		    rev_flg   = 0;
		    in_bound  = right - right_bnd;
		    out_bound = left  - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
                    {
		      fbl_error (36,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    }
		  }

		if ((out_bound - in_bound + 1) != expr1.WIDTH)
                {
		  fbl_error (35,(fbl_y_vsp[(5) - (10)].name).NAME);
                }

		if (rev_flg == 1)
		  expr1.LIST_ABL = reverse (expr1.LIST_ABL);

		abl_pnt = expr1.LIST_ABL;

		switch (sig_conf)
		  {
		  case (FBL_ICNDFN + FBL_BITDFN + FBL_NORDFN) :
                    {
		    fbl_error (21,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    break;

		  case (FBL_OCNDFN + FBL_BITDFN + FBL_NORDFN) :
		  case (FBL_BCNDFN + FBL_BITDFN + FBL_NORDFN) :
		    if ((fbl_y_vsp[(7) - (10)].valu) == FBL_GRDDFN)
                    {
		      fbl_error (22,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    fbout_pnt = (struct fbout *)
		                chktab (hshtab,(fbl_y_vsp[(5) - (10)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (fbout_pnt->ABL != NULL)
                          {
		            fbl_error (39,fbout_pnt->NAME);
                          }
		          else
		            fbout_pnt->ABL = (struct chain *)abl_pnt->DATA;
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbout_pnt = fbout_pnt->NEXT;
		        }
		      }
		    break;

		  case (FBL_OCNDFN + FBL_MUXDFN + FBL_BUSDFN) :
		  case (FBL_OCNDFN + FBL_WORDFN + FBL_BUSDFN) :
		  case (FBL_BCNDFN + FBL_MUXDFN + FBL_BUSDFN) :
		  case (FBL_BCNDFN + FBL_WORDFN + FBL_BUSDFN) :
		    if (((fbl_y_vsp[(7) - (10)].valu) != FBL_GRDDFN) || (FBL_GRDLST == NULL))
                    {
		      fbl_error (23,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    fbbus_pnt = (struct fbbus *)
		                chktab (hshtab,(fbl_y_vsp[(5) - (10)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          fbbus_pnt->BINODE = fbh_addbinode (fbbus_pnt->BINODE,
		                                             NULL,NULL);
		          fbbus_pnt->BIABL  = fbh_addbiabl  (fbbus_pnt->BIABL,
		                                             FBL_LBLNAM,
		                                             dupablexpr(FBL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbbus_pnt = fbbus_pnt->NEXT;
		        }
		      }
		    break;

		  case (FBL_BITDFN + FBL_NORDFN):
		    if ((fbl_y_vsp[(7) - (10)].valu) == FBL_GRDDFN)
                    {
		      fbl_error (22,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    fbaux_pnt = (struct fbaux *)
		                chktab (hshtab,(fbl_y_vsp[(5) - (10)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (fbaux_pnt->ABL != NULL)
                          {
		            fbl_error (39,fbaux_pnt->NAME);
                          }
		          else
		           {
		            fbaux_pnt->ABL = (struct chain *)abl_pnt->DATA;
		            }
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbaux_pnt = fbaux_pnt->NEXT;
		        }
		      }
		    break;

		  case (FBL_RBIDFN + FBL_REGDFN):
		    if (((fbl_y_vsp[(7) - (10)].valu) != FBL_GRDDFN) || (FBL_GRDLST == NULL))
                    {
		      fbl_error (23,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    fbreg_pnt = (struct fbreg *)
		                chktab (hshtab,(fbl_y_vsp[(5) - (10)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          fbreg_pnt->BINODE = fbh_addbinode (fbreg_pnt->BINODE,
		                                             NULL,NULL);
		          fbreg_pnt->BIABL  = fbh_addbiabl  (fbreg_pnt->BIABL,
		                                             FBL_LBLNAM,
		                                             dupablexpr(FBL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbreg_pnt = fbreg_pnt->NEXT;
		        }
		      }
		    break;

		  case (FBL_MUXDFN + FBL_BUSDFN) :
		  case (FBL_WORDFN + FBL_BUSDFN) :
		    if (((fbl_y_vsp[(7) - (10)].valu) != FBL_GRDDFN) || (FBL_GRDLST == NULL))
                    {
		      fbl_error (23,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    fbbux_pnt = (struct fbbux *)
		                chktab (hshtab,(fbl_y_vsp[(5) - (10)].name).NAME,FBL_MODNAM,FBL_PNTDFN);
		    if (FBL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          fbbux_pnt->BINODE = fbh_addbinode (fbbux_pnt->BINODE,
		                                             NULL,NULL);
		          fbbux_pnt->BIABL  = fbh_addbiabl  (fbbux_pnt->BIABL,
		                                             FBL_LBLNAM,
		                                             dupablexpr(FBL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          abl_pnt           = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        fbbux_pnt = fbbux_pnt->NEXT;
		        }
		      }
		    break;

		  default :
                    {
		    fbl_error (17,(fbl_y_vsp[(5) - (10)].name).NAME);
                    }
		    break;
		  }
		}
    break;

  case 123:
#line 1845 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		  FBL_LBLNAM = namealloc((fbl_y_vsp[(1) - (1)].text)); 
		}
    break;

  case 125:
#line 1849 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                  char buffer[ 64 ];

                  sprintf( buffer, "process_%d", FBL_LINNUM );
		  FBL_LBLNAM = namealloc( buffer ); 
		}
    break;

  case 127:
#line 1860 "../../../src/fvh/src/fbl_bcomp_y.y"
    {FBL_NM1LST = 0 ;}
    break;

  case 128:
#line 1862 "../../../src/fvh/src/fbl_bcomp_y.y"
    { FBL_BEFPNT->BEPCS = fbh_addfbpcs(FBL_BEFPNT->BEPCS,FBL_LBLNAM,FBL_NM1LST,0,0,0); 
                  FBL_BEFPNT->BEPCS->LINE_NUM = FBL_LINNUM;
		  FBL_NM1LST = 0; }
    break;

  case 129:
#line 1867 "../../../src/fvh/src/fbl_bcomp_y.y"
    {  
		void *pnt;
		pnt = (void *)(&(FBL_BEFPNT->BEPCS->INSTRUCTION));
                   FBL_NM1LST = addchain(0,pnt);
		}
    break;

  case 130:
#line 1874 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		    struct ptype **pnt;
		    struct ptype *ptype;
		    pnt = (struct ptype**)FBL_NM1LST->DATA;
		    ptype = reversetype(*pnt); 
		    *pnt = ptype; 
                  FBL_NM1LST = delchain (FBL_NM1LST, FBL_NM1LST);
		  }
    break;

  case 131:
#line 1886 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
                fbl_y_errok;
		}
    break;

  case 134:
#line 1900 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                fbl_y_errok;
                }
    break;

  case 141:
#line 1925 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		if((fbl_y_vsp[(1) - (2)].name).TYPE == 0)
                {
			fbl_error(17,(fbl_y_vsp[(1) - (2)].name).NAME) ;
                }
		FBL_NM1LST = addchain (FBL_NM1LST,(fbl_y_vsp[(1) - (2)].name).NAME); }
    break;

  case 143:
#line 1938 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		if((fbl_y_vsp[(2) - (3)].name).TYPE == 0)
                {
			fbl_error(17,(fbl_y_vsp[(2) - (3)].name).NAME) ;
                }
		FBL_NM1LST = addchain (FBL_NM1LST,(fbl_y_vsp[(2) - (3)].name).NAME); }
    break;

  case 152:
#line 1971 "../../../src/fvh/src/fbl_bcomp_y.y"
    {   
                    FBL_BEFPNT->BEMSG  = fbh_addfbmsg(FBL_BEFPNT->BEMSG,0,(fbl_y_vsp[(4) - (5)].valu),(fbl_y_vsp[(3) - (5)].text),(fbl_y_vsp[(2) - (5)].list).LIST_ABL->DATA,0);
                    FBL_BEFPNT->BEMSG->LINE_NUM = FBL_LINNUM;
		}
    break;

  case 153:
#line 1982 "../../../src/fvh/src/fbl_bcomp_y.y"
    {   unsigned long type; 
		    long sig_conf,i; 	
		    long left_bnd,right_bnd;
		    long in_bound,out_bound;
		    long left ,right;
	            long rev_flg, debut;
		    long sig_width;
		    struct chain   *abl_pnt;
		    char extname[100];
		    struct fbl_expr expr;
		    struct ptype **pnt;
                    struct fbaux *fbaux_pnt;
                    struct fbout *fbout_pnt;

		    type = chktab(hshtab,(fbl_y_vsp[(1) - (4)].name).NAME,FBL_MODNAM,FBL_TYPDFN);
		    sig_conf = chktab(hshtab,(fbl_y_vsp[(1) - (4)].name).NAME,FBL_MODNAM,FBL_SIGDFN);

	 	if( type == 0)
                {
			fbl_error(17,(fbl_y_vsp[(1) - (4)].name).NAME);
                }

                addauthelem( FBL_HASH_ASG_FSM, (fbl_y_vsp[(1) - (4)].name).NAME, 1 );

 	    left_bnd  = chktab (hshtab,(fbl_y_vsp[(1) - (4)].name).NAME,FBL_MODNAM,FBL_WMNDFN);
            right_bnd = chktab (hshtab,(fbl_y_vsp[(1) - (4)].name).NAME,FBL_MODNAM,FBL_WMXDFN);
 
                left  = (fbl_y_vsp[(1) - (4)].name).LEFT;
                right = (fbl_y_vsp[(1) - (4)].name).RIGHT;

		expr = (fbl_y_vsp[(3) - (4)].list); 

                if (left_bnd <= right_bnd)
                  {
                  sig_width = right_bnd - left_bnd + 1;
                  if (left <= right)
                    {
                    rev_flg   = 0;
                    in_bound  = right_bnd - right;
                    out_bound = right_bnd - left;
                    if ((left < left_bnd) || (right > right_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (4)].name).NAME);
                    }
		    debut = left;  
                    }

                    else
                    {
                    rev_flg   = 1;
                    in_bound  = right_bnd - left;
                    out_bound = right_bnd - right;
                    if ((left > right_bnd) || (right < left_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (4)].name).NAME);
                    }
		    debut = right;  
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
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (4)].name).NAME);
                    }
		    debut = left;  
                    }
                  else
                    {
                    rev_flg   = 0;
                    in_bound  = right - right_bnd;
                    out_bound = left  - right_bnd;
                    if ((left > left_bnd) || (right < right_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (4)].name).NAME);
                    }
		    debut = right;  
                    }
                  }
                if ((out_bound - in_bound + 1) != expr.WIDTH)
		{
                  fbl_error (35,(fbl_y_vsp[(1) - (4)].name).NAME);
		}
 
                if (rev_flg == 1)
                  expr.LIST_ABL = reverse (expr.LIST_ABL);
 
                abl_pnt = expr.LIST_ABL;
 

		    if( sig_conf == FBL_ICNDFN)
                    {
			fbl_error(21,(fbl_y_vsp[(1) - (4)].name).NAME);
                    }
                    /* LUDO
		    else if( sig_conf == 0)
                    {
			fbl_error(17,$1.NAME);
                    }
                    */
			else
			{
		      pnt = (struct ptype**)(FBL_NM1LST->DATA);
                  if(sig_width >1) 
		  {
                      for (i=0 ; i<sig_width ; i++)
                        {
                          char *newname;

      			sprintf (extname,"%s %d",(fbl_y_vsp[(1) - (4)].name).NAME,i+debut-in_bound);
                        newname = namealloc( extname );
                        if (i >= in_bound)
                          {
                         *pnt =fbh_addfbasg(*pnt,newname, (struct chain *)abl_pnt->DATA,type);
                         ((struct fbasg *)((*pnt)->DATA))->LINE_NUM = FBL_LINNUM;
                          abl_pnt = abl_pnt->NEXT;
                
                          addauthelem( FBL_HASH_ASG_FSM, newname, 1 );
                          }
                        if (i >= out_bound)
                          break;
                        } 
                  }
		else
                  {
                    *pnt = fbh_addfbasg(*pnt,(fbl_y_vsp[(1) - (4)].name).NAME,abl_pnt->DATA,type);
                    ((struct fbasg *)((*pnt)->DATA))->LINE_NUM = FBL_LINNUM;
                  }
	        }
		}
    break;

  case 154:
#line 2122 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 155:
#line 2129 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		    struct ptype **pnt;
		    pnt = (struct ptype**)FBL_NM1LST->DATA;
		    *pnt = fbh_addfbifs(*pnt,(fbl_y_vsp[(2) - (3)].list).LIST_ABL->DATA);
                    ((struct fbifs *)((*pnt)->DATA))->LINE_NUM = FBL_LINNUM;
	            FBL_NM1LST = addchain(FBL_NM1LST,&(((struct fbifs*)(*pnt)->DATA)->CNDTRUE));
		}
    break;

  case 156:
#line 2137 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		    struct ptype **pnt;
		    struct ptype *ptype;
		    pnt = (struct ptype**)FBL_NM1LST->DATA;
		    ptype = reversetype(*pnt); 
		    *pnt = ptype; 
                  FBL_NM1LST = delchain (FBL_NM1LST, FBL_NM1LST);
		    pnt = (struct ptype**)FBL_NM1LST->DATA;
	            FBL_NM1LST = addchain(FBL_NM1LST,&(((struct fbifs*)(*pnt)->DATA)->CNDFALSE));	
		}
    break;

  case 159:
#line 2160 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		    struct ptype **pnt;
		    pnt = (struct ptype**)FBL_NM1LST->DATA;
		    *pnt = fbh_addfbifs(*pnt,(fbl_y_vsp[(3) - (4)].list).LIST_ABL->DATA);
                    ((struct fbifs *)((*pnt)->DATA))->LINE_NUM = FBL_LINNUM;
	            FBL_NM1LST = addchain(FBL_NM1LST,(void*)&((struct fbifs*)(*pnt)->DATA)->CNDTRUE);	
		}
    break;

  case 160:
#line 2168 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		    struct ptype **pnt;
		    struct ptype *ptype;
		    pnt = (struct ptype**)FBL_NM1LST->DATA;
		    ptype = reversetype(*pnt); 
		    *pnt = ptype; 
                    FBL_NM1LST = delchain (FBL_NM1LST, FBL_NM1LST);
		    pnt = (struct ptype**)FBL_NM1LST->DATA;
                    FBL_NM1LST = delchain (FBL_NM1LST, FBL_NM1LST);
	            FBL_NM1LST = addchain(FBL_NM1LST,&((struct fbifs*)(*pnt)->DATA)->CNDFALSE);	
		fbl_y_errok; }
    break;

  case 161:
#line 2183 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
                  FBL_NM1LST = delchain (FBL_NM1LST, FBL_NM1LST);
		  fbl_y_errok; 
		}
    break;

  case 162:
#line 2189 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		    struct ptype *ptype;
		    struct ptype **pnt;
		    pnt = (struct ptype**)FBL_NM1LST->DATA;
		    ptype = reversetype(*pnt); 
		    *pnt = ptype; 
                  FBL_NM1LST = delchain (FBL_NM1LST, FBL_NM1LST);
		  fbl_y_errok; 
		}
    break;

  case 163:
#line 2203 "../../../src/fvh/src/fbl_bcomp_y.y"
    {	
		    struct ptype **pnt;

		    pnt = (struct ptype**)FBL_NM1LST->DATA;
		    
		    /*fbcas = (struct fbcas *)mbkalloc(sizeof(struct fbcas));
		    fbcas->CHOICE = 0;
		    fbcas->USER   = 0;		
		    fbcas->LINE_NUM   = 0;		
		    fbcas->SIZE   = 0;		
		    fbcas->TYPE = $2.TYPE;
		    fbcas->ABL = $2.LIST_ABL->DATA;*/
		    FBL_OTHPNT  = 0;	
		*pnt = fbh_addfbcas(*pnt,(fbl_y_vsp[(2) - (2)].list).LIST_ABL->DATA,(fbl_y_vsp[(2) - (2)].list).TYPE);	
                    ((struct fbcas *)((*pnt)->DATA))->LINE_NUM = FBL_LINNUM;
	            FBL_NM1LST = addchain(FBL_NM1LST,(void*)&(((struct fbcas*)((*pnt)->DATA))->SIZE));
	            FBL_NM1LST = addchain(FBL_NM1LST,(void*)&(((struct fbcas*)(*pnt)->DATA)->CHOICE));
		}
    break;

  case 164:
#line 2227 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		unsigned long size=1;
		unsigned long *size1;
		long indice=0;
		struct choice_chain *ch;
                struct fbcho **pnt;
                struct fbcho *tab;
		struct choice_chain *nm1lst;
 

		nm1lst = FBL_CASPNT;
                while (nm1lst != 0)
		  {
			size++;
			nm1lst = nm1lst->NEXT;
	  	  }
		pnt = (struct fbcho**)FBL_NM1LST->DATA;
		  FBL_NM1LST = delchain(FBL_NM1LST,FBL_NM1LST);
		if( size != 0)
		  tab  = (struct fbcho*)mbkalloc(size*sizeof(struct fbcho));
		 while(FBL_CASPNT)
		 {
		  tab[indice].INSTRUCTION = reversetype(FBL_CASPNT->INSTRUCTION);
		  tab[indice].SIZE = FBL_CASPNT->SIZE;
		  tab[indice++].VALUE = FBL_CASPNT->VALUE;
		  ch = FBL_CASPNT;
		  FBL_CASPNT =FBL_CASPNT->NEXT;
		  /*free(ch);*/
		  }
		  tab[indice].INSTRUCTION = reversetype(FBL_OTHPNT);
		  tab[indice].SIZE = -1;
		  tab[indice++].VALUE = namealloc("others");
		  (*pnt) = tab;
		  size1 = (unsigned long*) FBL_NM1LST->DATA;
		  *size1 = size;
		  FBL_NM1LST = delchain(FBL_NM1LST,FBL_NM1LST);
		  FBL_OTHPNT = 0;
		}
    break;

  case 166:
#line 2271 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_y_errok; }
    break;

  case 167:
#line 2277 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		 FBL_PTYPE = 0;
		 FBL_NM1LST = addchain(FBL_NM1LST,(void*)&FBL_PTYPE);
		 }
    break;

  case 168:
#line 2282 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
		 if( FBL_CNDLST == 0)
                 {
		     fbl_error(85,"case");
                 }
		 else if ( FBL_CNDLST->DATA == 0)
                 {
		     FBL_OTHPNT = FBL_PTYPE ;
                     while (FBL_CNDLST )
                     {
		       FBL_CNDLST = delchain(FBL_CNDLST,FBL_CNDLST);
                     }
                 }
		 else 
		 while(FBL_CNDLST)
		 {
		  char* val;
		  val = (char *)FBL_CNDLST->DATA;
		  FBL_CASPNT = order_choice(FBL_CASPNT,FBL_PTYPE,val,strlen(val));
		  FBL_CNDLST = delchain(FBL_CNDLST,FBL_CNDLST);
		 }
		  FBL_NM1LST = delchain(FBL_NM1LST,FBL_NM1LST);
		}
    break;

  case 169:
#line 2311 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
            (fbl_y_val.list) = FBL_EMPSTR;
          }
    break;

  case 170:
#line 2317 "../../../src/fvh/src/fbl_bcomp_y.y"
    { 
                  (fbl_y_val.list) = fbl_crtabl (ABL_OR,(fbl_y_vsp[(1) - (3)].list),(fbl_y_vsp[(3) - (3)].list),-1,-1);
                }
    break;

  case 171:
#line 2326 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		  fbl_ablstr expr1;

		fbl_select (&expr1,FBL_NM1LST,&FBL_BDDPNT,&FBL_SLCEXP);
		freechain (FBL_NM1LST);
		FBL_NM1LST = NULL;

		(fbl_y_val.list) = fbl_crtabl(ANDM,(fbl_y_vsp[(1) - (3)].list),expr1,-1,-1);
		}
    break;

  case 172:
#line 2339 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                  FBL_NM1LST = addchain (NULL ,(fbl_y_vsp[(1) - (1)].name).NAME);
                }
    break;

  case 173:
#line 2343 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_y_errok; }
    break;

  case 175:
#line 2351 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		if ((fbl_y_vsp[(3) - (3)].name).NAME == "others")
                {
		  fbl_error (30,NULL);
                }
		FBL_NM1LST = addchain (FBL_NM1LST ,(fbl_y_vsp[(3) - (3)].name).NAME);
		fprintf( stdout, "%s%d: %s\n", basename(__FILE__),__LINE__,(fbl_y_vsp[(3) - (3)].name).NAME );
		}
    break;

  case 176:
#line 2366 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 177:
#line 2371 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		 if (strcmp((fbl_y_vsp[(1) - (1)].name).NAME , "others"))
                 	FBL_CNDLST = addchain (0 ,(void*)(fbl_y_vsp[(1) - (1)].name).NAME); 
		 else 
                 	FBL_CNDLST = addchain (0 ,0); 
		}
    break;

  case 178:
#line 2378 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_y_errok; }
    break;

  case 181:
#line 2391 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                if (!strcmp((fbl_y_vsp[(3) - (3)].name).NAME , "others")  || FBL_CNDLST->DATA == 0)
                {
                  fbl_error (31,0);
                }
                FBL_CNDLST = addchain (FBL_CNDLST ,(void*)(fbl_y_vsp[(3) - (3)].name).NAME);
                }
    break;

  case 182:
#line 2402 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                  (fbl_y_val.name).NAME  = (fbl_y_vsp[(1) - (1)].text);
		  (fbl_y_val.name).RIGHT = -1;
		  (fbl_y_val.name).TYPE  = -1;
		  (fbl_y_val.name).LEFT  = -1;}
    break;

  case 183:
#line 2408 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
		  (fbl_y_val.name).RIGHT = -1;
		  (fbl_y_val.name).TYPE  = -1;
		  (fbl_y_val.name).LEFT  = -1;
		  (fbl_y_val.name).NAME  = namealloc("others");}
    break;

  case 184:
#line 2414 "../../../src/fvh/src/fbl_bcomp_y.y"
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
                sig_conf = chktab (hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_SIGDFN);
                val      = (char *) chktab (hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,0,FBL_PNTDFN);
                if (sig_conf == 0)
                {
                  fbl_error (17,(fbl_y_vsp[(1) - (1)].name).NAME);
                }
                else
                  {
                  if (sig_conf != FBL_CSTDFN)
                  {
                    fbl_error (76,(fbl_y_vsp[(1) - (1)].name).NAME);
                  }
                  }
 
                left_bnd  = chktab (hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_WMNDFN);
                right_bnd = chktab (hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_WMXDFN);
 
                left  = (fbl_y_vsp[(1) - (1)].name).LEFT;
                right = (fbl_y_vsp[(1) - (1)].name).RIGHT;
 
                if (left_bnd <= right_bnd)
                  {
                  if (left <= right)
                    {
                    in_bound = left - left_bnd;
                    out_bound = right - left_bnd;
                    if ((left < left_bnd) || (right > right_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (1)].name).NAME);
                    }
                    }
                  else
                    {
                    in_bound = left - right_bnd;
                    out_bound = right - right_bnd;
                    if ((left > right_bnd) || (right < left_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (1)].name).NAME);
                    }
                    }
                  }
                else
                  {
                  if (left <= right)
                    {
                    in_bound = right - left_bnd;
                    out_bound = left - left_bnd;
                    if ((left < right_bnd) || (right > left_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (1)].name).NAME);
                    }
                    }
                  else
                    {
                    in_bound = right - right_bnd;
                    out_bound = left - right_bnd;
                    if ((left > left_bnd) || (right < right_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (1)].name).NAME);
                    }
                    }
                  }
		if( chktab (hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_TYPDFN) == -1) 
		{
                  fbl_tobin (&val2[2],val,in_bound,out_bound);
                  strcat (val2,"\"");
                  (fbl_y_val.name).NAME = namealloc (val2);
                  (fbl_y_val.name).LEFT = -1;
                  (fbl_y_val.name).RIGHT = -1;
                  (fbl_y_val.name).TYPE = -1;
		}
		else 
		 {
                  (fbl_y_val.name).LEFT = (fbl_y_vsp[(1) - (1)].name).LEFT;
                  (fbl_y_val.name).RIGHT = (fbl_y_vsp[(1) - (1)].name).RIGHT;
                  (fbl_y_val.name).TYPE = (fbl_y_vsp[(1) - (1)].name).TYPE;
		  /* sig_conf = chktab(hshtab,$1.NAME,FBL_MODNAM,FBL_LBLDFN) ;
		      $$.NAME = (char *)fbl_numtobin(sig_conf); */
			(fbl_y_val.name).NAME = (fbl_y_vsp[(1) - (1)].name).NAME;
		 }
		}
    break;

  case 185:
#line 2511 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 186:
#line 2516 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = 0;}
    break;

  case 187:
#line 2519 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(2) - (2)].text);}
    break;

  case 188:
#line 2524 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = 'E';}
    break;

  case 189:
#line 2527 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = (fbl_y_vsp[(1) - (2)].valu);}
    break;

  case 190:
#line 2532 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_stostr((fbl_y_vsp[(1) - (1)].text));}
    break;

  case 191:
#line 2537 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = 'E';}
    break;

  case 192:
#line 2539 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = 'W';}
    break;

  case 193:
#line 2544 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 194:
#line 2546 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 195:
#line 2548 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 196:
#line 2550 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 197:
#line 2557 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_AND ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 198:
#line 2561 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_AND ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1);}
    break;

  case 199:
#line 2568 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_OR ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 200:
#line 2572 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_OR ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 201:
#line 2577 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 202:
#line 2581 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_NAND ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 203:
#line 2585 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_NAND ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 204:
#line 2592 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_XOR ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 205:
#line 2596 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_XOR ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 206:
#line 2601 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 207:
#line 2605 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl ((fbl_y_vsp[(2) - (3)].valu) ,(fbl_y_vsp[(1) - (3)].list) ,(fbl_y_vsp[(3) - (3)].list) ,-1,-1); }
    break;

  case 208:
#line 2610 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 209:
#line 2615 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 210:
#line 2619 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (CONC,(fbl_y_vsp[(1) - (3)].list),(fbl_y_vsp[(3) - (3)].list),-1,-1); }
    break;

  case 211:
#line 2624 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 212:
#line 2629 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 213:
#line 2632 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = fbl_crtabl (ABL_NOT,(fbl_y_vsp[(2) - (2)].list),FBL_EMPSTR,-1,-1); }
    break;

  case 214:
#line 2637 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                struct fbl_expr expr1;
 
                expr1.IDENT = (fbl_y_vsp[(1) - (1)].text);
                expr1.TYPE = -1;
                (fbl_y_val.list) = fbl_crtabl (NOPS,expr1,FBL_EMPSTR,-1,-1);
                }
    break;

  case 215:
#line 2645 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(1) - (1)].list); }
    break;

  case 216:
#line 2647 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                struct fbl_expr expr1;
                long             left;
                long             right;
                long             left_bnd;
                long             right_bnd;
                long             in_bound;
                long             out_bound;
                long             mode;
		long  prtype;
		long  type;

                mode = chktab (hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_SIGDFN);
		type = chktab(hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_TYPDFN);
		if( mode == FBL_OCNDFN)
		{
                  {
                    fbl_error (26,(fbl_y_vsp[(1) - (1)].name).NAME);
                  }
	            (fbl_y_val.list).IDENT = 0;	
	            (fbl_y_val.list).LIST_ABL = 0;	
	            (fbl_y_val.list).WIDTH = 0;	
	            (fbl_y_val.list).TYPE = 0;	
		}
		else if( type == 0 || mode == FBL_TPEDFN)
		{
                  {
                    fbl_error (17,(fbl_y_vsp[(1) - (1)].name).NAME);
                  }
	            (fbl_y_val.list).IDENT = 0;	
	            (fbl_y_val.list).LIST_ABL = 0;	
	            (fbl_y_val.list).WIDTH = 0;	
	            (fbl_y_val.list).TYPE = 0;	
		}
	       else
               { 
                left_bnd  = chktab (hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_WMNDFN);
                right_bnd = chktab (hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_WMXDFN);
 
                left  = (fbl_y_vsp[(1) - (1)].name).LEFT;
                right = (fbl_y_vsp[(1) - (1)].name).RIGHT;
 
                if (left_bnd <= right_bnd)
                  {
                  if (left <= right)
                    {
                    in_bound  = left  - left_bnd;
                    out_bound = right - left_bnd;
                    if ((left < left_bnd) || (right > right_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (1)].name).NAME);
                    }
                    }
                  else
                    {
                    in_bound  = right - left_bnd;
                    out_bound = left  - left_bnd;
                    if ((left > right_bnd) || (right < left_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (1)].name).NAME);
                    }
                    }
                  }
                else
                  {
                  if (left <= right)
                    {
                    in_bound  = left  - right_bnd;
                    out_bound = right - right_bnd;
                    if ((left < right_bnd) || (right > left_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (1)].name).NAME);
                    }
                    }
                  else
                    {
                    in_bound  = right - right_bnd;
                    out_bound = left  - right_bnd;
                    if ((left > left_bnd) || (right < right_bnd))
                    {
                      fbl_error (36,(fbl_y_vsp[(1) - (1)].name).NAME);
                    }
                    }
                  }

                /* LUDO
                if ( mode == FBL_VARDFN)
                  {
                  expr1.IDENT = 0;
                  expr1.TYPE = chktab(hshtab,$1.NAME,FBL_MODNAM,FBL_TYPDFN);

                  expr1.LIST_ABL = (struct chain *)chktab(hshtab,$1.NAME,FBL_MODNAM,FBL_PNTDFN);
                  $$ = fbl_crtabl (SUBVAR,expr1,FBL_EMPSTR,in_bound,out_bound);
                  }
                else
                */
                if ((mode != FBL_CSTDFN)||
		   (chktab(hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_TYPDFN) != -1))
                  {
                  expr1.IDENT = (fbl_y_vsp[(1) - (1)].name).NAME;
		prtype = chktab(hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,FBL_MODNAM,FBL_USRDFN);
		if(val_type((FBL_BEFPNT->BETYP + type -1)->NAME) !=-1)
		  expr1.TYPE = chktab(hshtab,namealloc("bit"),FBL_MODNAM,FBL_TYPDFN);
		else
		  expr1.TYPE = type;
              if((fbl_y_vsp[(1) - (1)].name).FLAG == 'X')
                        {
                        expr1 = fbl_crtabl (NOPI,expr1,FBL_EMPSTR,left,right);  
                        (fbl_y_val.list)    = fbl_crtabl (ABL_STABLE,expr1,FBL_EMPSTR,left,right);   
                        }
              else
              if((fbl_y_vsp[(1) - (1)].name).FLAG == 'x')
              {
                        expr1 = fbl_crtabl (NOPI,expr1,FBL_EMPSTR,left,right);  
                        expr1 = fbl_crtabl (ABL_STABLE,expr1,FBL_EMPSTR,left,right);   
                        (fbl_y_val.list)    = fbl_crtabl (ABL_NOT,expr1,FBL_EMPSTR,left,right);   
              }
		  else
                  {
                  (fbl_y_val.list) = fbl_crtabl (NOPI,expr1,FBL_EMPSTR,left,right);
                  }
                 }
                else
                 {
                 expr1.IDENT = (char *)chktab(hshtab,(fbl_y_vsp[(1) - (1)].name).NAME,0,FBL_PNTDFN);
		 expr1.TYPE =(long)-1;/*dec, cast long */
                  (fbl_y_val.list) = fbl_crtabl (NOPS,expr1,FBL_EMPSTR,in_bound,out_bound);
                 }
		}
               }
    break;

  case 217:
#line 2781 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = EQ; }
    break;

  case 218:
#line 2783 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = NE; }
    break;

  case 219:
#line 2785 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = GE; }
    break;

  case 220:
#line 2787 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = GT; }
    break;

  case 221:
#line 2789 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = LE; }
    break;

  case 222:
#line 2791 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = LT; }
    break;

  case 223:
#line 2796 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(1) - (1)].text); }
    break;

  case 224:
#line 2798 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(1) - (1)].text); }
    break;

  case 225:
#line 2800 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(1) - (1)].text); }
    break;

  case 226:
#line 2807 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.list) = (fbl_y_vsp[(2) - (3)].list); }
    break;

  case 227:
#line 2812 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                (fbl_y_val.name).NAME  = (fbl_y_vsp[(1) - (1)].text);
                (fbl_y_val.name).TYPE  = chktab (hshtab,(fbl_y_vsp[(1) - (1)].text),FBL_MODNAM,FBL_TYPDFN);
              	(fbl_y_val.name).LEFT  = chktab (hshtab,(fbl_y_vsp[(1) - (1)].text),FBL_MODNAM,FBL_WMNDFN);
                (fbl_y_val.name).RIGHT = chktab (hshtab,(fbl_y_vsp[(1) - (1)].text),FBL_MODNAM,FBL_WMXDFN);
                }
    break;

  case 228:
#line 2819 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(1) - (1)].name); }
    break;

  case 229:
#line 2821 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(1) - (1)].name); }
    break;

  case 230:
#line 2823 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(1) - (1)].name); }
    break;

  case 231:
#line 2831 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                (fbl_y_val.name).NAME  = (fbl_y_vsp[(1) - (4)].text);
                (fbl_y_val.name).LEFT  = (fbl_y_vsp[(3) - (4)].valu);
                (fbl_y_val.name).TYPE  = chktab (hshtab,(fbl_y_vsp[(1) - (4)].text),FBL_MODNAM,FBL_TYPDFN);
                (fbl_y_val.name).RIGHT = (fbl_y_vsp[(3) - (4)].valu);
                }
    break;

  case 232:
#line 2846 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                if ((((fbl_y_vsp[(3) - (6)].valu) > (fbl_y_vsp[(5) - (6)].valu)) && ((fbl_y_vsp[(4) - (6)].valu) == FBL_UPTDFN)) ||
                    (((fbl_y_vsp[(3) - (6)].valu) < (fbl_y_vsp[(5) - (6)].valu)) && ((fbl_y_vsp[(4) - (6)].valu) == FBL_DWTDFN)))
                {
                  fbl_error (32,(fbl_y_vsp[(1) - (6)].text));
                }
 
                (fbl_y_val.name).NAME  = (fbl_y_vsp[(1) - (6)].text);
                (fbl_y_val.name).TYPE  = chktab (hshtab,(fbl_y_vsp[(1) - (6)].text),FBL_MODNAM,FBL_TYPDFN);
                (fbl_y_val.name).LEFT  = (fbl_y_vsp[(3) - (6)].valu);
                (fbl_y_val.name).RIGHT = (fbl_y_vsp[(5) - (6)].valu);
                }
    break;

  case 233:
#line 2864 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                char             extname[100];
                char            *lclname;
                long              sig_conf;
                long              type;
		long              kind;
                struct fbl_expr  expr1;
                struct fbl_expr  expr2;
                struct chain    *ptabl;

                sprintf (extname,"%s'delayed",(fbl_y_vsp[(1) - (3)].text));
                lclname = namealloc (extname);

                if (chktab (hshtab,lclname,FBL_MODNAM,FBL_SIGDFN) == 0 )
                {
		sig_conf = chktab (hshtab,(fbl_y_vsp[(1) - (3)].text),FBL_MODNAM,FBL_SIGDFN);
		switch (sig_conf)
		  {
		  case (FBL_ICNDFN + FBL_BITDFN + FBL_NORDFN) :
		  case (FBL_BCNDFN + FBL_BITDFN + FBL_NORDFN) :
		  case (FBL_BCNDFN + FBL_MUXDFN + FBL_BUSDFN) :
		  case (FBL_BCNDFN + FBL_WORDFN + FBL_BUSDFN) :
		  case (FBL_BITDFN + FBL_NORDFN):
		  case (FBL_MUXDFN + FBL_BUSDFN):
		  case (FBL_WORDFN + FBL_BUSDFN):
		  case (FBL_RBIDFN + FBL_REGDFN):
		    break;
		  default :
                    {
		    fbl_error (79,(fbl_y_vsp[(1) - (3)].text));
                    }
		  }
                type = chktab (hshtab,(fbl_y_vsp[(1) - (3)].text),FBL_MODNAM,FBL_TYPDFN);
                kind = chktab (hshtab,(fbl_y_vsp[(1) - (3)].text),FBL_MODNAM,FBL_LBLDFN);
 
                if (chktab (hshtab,(fbl_y_vsp[(1) - (3)].text),FBL_MODNAM,FBL_WMNDFN) != -1)
                {
                  fbl_error (79,(fbl_y_vsp[(1) - (3)].text));
                }

                if (FBL_ERRFLG == 0)
                  {
                    expr1.IDENT = (fbl_y_vsp[(1) - (3)].text);
                    expr1.WIDTH  = 1;
                    expr2 = fbl_crtabl (NOPI,expr1,FBL_EMPSTR,-1,-1);
                    ptabl = (struct chain*)expr2.LIST_ABL->DATA;
                    FBL_BEFPNT->BEDLY = fbh_addfbaux(FBL_BEFPNT->BEDLY,lclname,
                                                     ptabl,0,type);
                    FBL_BEFPNT->BEDLY->LINE_NUM = FBL_LINNUM;
                    /* LUDO addtab (hshtab,$1,FBL_MODNAM,FBL_STBDFN,1); */
                    addtab (hshtab,lclname,FBL_MODNAM,FBL_WMNDFN,-1);
                    addtab (hshtab,lclname,FBL_MODNAM,FBL_WMXDFN,-1);
                    addtab (hshtab,lclname,FBL_MODNAM,FBL_TYPDFN, type);
                    addtab (hshtab,lclname,FBL_MODNAM,FBL_LBLDFN, kind);
                    addtab (hshtab,lclname,FBL_MODNAM,FBL_SIGDFN,
                    (FBL_ICNDFN + FBL_BITDFN + FBL_NORDFN));
                    }
                 }
                (fbl_y_val.name).NAME = (fbl_y_vsp[(1) - (3)].text);
                (fbl_y_val.name).LEFT = -1;
                (fbl_y_val.name).RIGHT = -1;
                if ( (fbl_y_vsp[(3) - (3)].valu) == FBL_STABLE ) (fbl_y_val.name).FLAG  = 'X';
                else                    (fbl_y_val.name).FLAG  = 'x';
             }
    break;

  case 234:
#line 2931 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_STABLE; }
    break;

  case 235:
#line 2932 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_EVENT;  }
    break;

  case 236:
#line 2937 "../../../src/fvh/src/fbl_bcomp_y.y"
    { FBL_NM1LST = addchain (FBL_NM1LST,(fbl_y_vsp[(1) - (1)].text)); }
    break;

  case 239:
#line 2946 "../../../src/fvh/src/fbl_bcomp_y.y"
    { FBL_NM1LST = addchain (FBL_NM1LST,(fbl_y_vsp[(3) - (3)].text)); }
    break;

  case 240:
#line 2951 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = 0; }
    break;

  case 241:
#line 2953 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(1) - (1)].text); }
    break;

  case 242:
#line 2960 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = NULL; }
    break;

  case 243:
#line 2962 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(1) - (1)].text); }
    break;

  case 244:
#line 2969 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (char *)(fbl_y_vsp[(2) - (3)].list).LIST_ABL->DATA; }
    break;

  case 245:
#line 2974 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_UNGDFN ; }
    break;

  case 246:
#line 2976 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = FBL_GRDDFN; }
    break;

  case 247:
#line 2983 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = 0; }
    break;

  case 248:
#line 2985 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(1) - (1)].text); }
    break;

  case 249:
#line 2990 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(1) - (1)].text); }
    break;

  case 250:
#line 2995 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.name) = (fbl_y_vsp[(1) - (1)].name); }
    break;

  case 251:
#line 3001 "../../../src/fvh/src/fbl_bcomp_y.y"
    {
                FBL_LBLNAM = (fbl_y_vsp[(1) - (2)].text);
                (fbl_y_val.text) = (fbl_y_vsp[(1) - (2)].text);
                }
    break;

  case 252:
#line 3009 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.text) = (fbl_y_vsp[(1) - (1)].text); }
    break;

  case 253:
#line 3014 "../../../src/fvh/src/fbl_bcomp_y.y"
    { (fbl_y_val.valu) = atoi((fbl_y_vsp[(1) - (1)].text)); }
    break;

  case 254:
#line 3019 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_y_errok; }
    break;

  case 255:
#line 3024 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_y_errok; }
    break;

  case 256:
#line 3029 "../../../src/fvh/src/fbl_bcomp_y.y"
    { fbl_y_errok; }
    break;


/* Line 1267 of yacc.c.  */
#line 4683 "y.tab.c"
      default: break;
    }
  FBL_Y__SYMBOL_PRINT ("-> $$ =", fbl_y_r1[fbl_y_n], &fbl_y_val, &fbl_y_loc);

  FBL_Y_POPSTACK (fbl_y_len);
  fbl_y_len = 0;
  FBL_Y__STACK_PRINT (fbl_y_ss, fbl_y_ssp);

  *++fbl_y_vsp = fbl_y_val;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  fbl_y_n = fbl_y_r1[fbl_y_n];

  fbl_y_state = fbl_y_pgoto[fbl_y_n - FBL_Y_NTOKENS] + *fbl_y_ssp;
  if (0 <= fbl_y_state && fbl_y_state <= FBL_Y_LAST && fbl_y_check[fbl_y_state] == *fbl_y_ssp)
    fbl_y_state = fbl_y_table[fbl_y_state];
  else
    fbl_y_state = fbl_y_defgoto[fbl_y_n - FBL_Y_NTOKENS];

  goto fbl_y_newstate;


/*------------------------------------.
| fbl_y_errlab -- here on detecting error |
`------------------------------------*/
fbl_y_errlab:
  /* If not already recovering from an error, report this error.  */
  if (!fbl_y_errstatus)
    {
      ++fbl_y_nerrs;
#if ! FBL_Y_ERROR_VERBOSE
      fbl_y_error (FBL_Y__("syntax error"));
#else
      {
	FBL_Y_SIZE_T fbl_y_size = fbl_y_syntax_error (0, fbl_y_state, fbl_y_char);
	if (fbl_y_msg_alloc < fbl_y_size && fbl_y_msg_alloc < FBL_Y_STACK_ALLOC_MAXIMUM)
	  {
	    FBL_Y_SIZE_T fbl_y_alloc = 2 * fbl_y_size;
	    if (! (fbl_y_size <= fbl_y_alloc && fbl_y_alloc <= FBL_Y_STACK_ALLOC_MAXIMUM))
	      fbl_y_alloc = FBL_Y_STACK_ALLOC_MAXIMUM;
	    if (fbl_y_msg != fbl_y_msgbuf)
	      FBL_Y_STACK_FREE (fbl_y_msg);
	    fbl_y_msg = (char *) FBL_Y_STACK_ALLOC (fbl_y_alloc);
	    if (fbl_y_msg)
	      fbl_y_msg_alloc = fbl_y_alloc;
	    else
	      {
		fbl_y_msg = fbl_y_msgbuf;
		fbl_y_msg_alloc = sizeof fbl_y_msgbuf;
	      }
	  }

	if (0 < fbl_y_size && fbl_y_size <= fbl_y_msg_alloc)
	  {
	    (void) fbl_y_syntax_error (fbl_y_msg, fbl_y_state, fbl_y_char);
	    fbl_y_error (fbl_y_msg);
	  }
	else
	  {
	    fbl_y_error (FBL_Y__("syntax error"));
	    if (fbl_y_size != 0)
	      goto fbl_y_exhaustedlab;
	  }
      }
#endif
    }



  if (fbl_y_errstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (fbl_y_char <= FBL_Y_EOF)
	{
	  /* Return failure if at end of input.  */
	  if (fbl_y_char == FBL_Y_EOF)
	    FBL_Y_ABORT;
	}
      else
	{
	  fbl_y_destruct ("Error: discarding",
		      fbl_y_token, &fbl_y_lval);
	  fbl_y_char = FBL_Y_EMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto fbl_y_errlab1;


/*---------------------------------------------------.
| fbl_y_errorlab -- error raised explicitly by FBL_Y_ERROR.  |
`---------------------------------------------------*/
fbl_y_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     FBL_Y_ERROR and the label fbl_y_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto fbl_y_errorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this FBL_Y_ERROR.  */
  FBL_Y_POPSTACK (fbl_y_len);
  fbl_y_len = 0;
  FBL_Y__STACK_PRINT (fbl_y_ss, fbl_y_ssp);
  fbl_y_state = *fbl_y_ssp;
  goto fbl_y_errlab1;


/*-------------------------------------------------------------.
| fbl_y_errlab1 -- common code for both syntax error and FBL_Y_ERROR.  |
`-------------------------------------------------------------*/
fbl_y_errlab1:
  fbl_y_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      fbl_y_n = fbl_y_pact[fbl_y_state];
      if (fbl_y_n != FBL_Y_PACT_NINF)
	{
	  fbl_y_n += FBL_Y_TERROR;
	  if (0 <= fbl_y_n && fbl_y_n <= FBL_Y_LAST && fbl_y_check[fbl_y_n] == FBL_Y_TERROR)
	    {
	      fbl_y_n = fbl_y_table[fbl_y_n];
	      if (0 < fbl_y_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (fbl_y_ssp == fbl_y_ss)
	FBL_Y_ABORT;


      fbl_y_destruct ("Error: popping",
		  fbl_y_stos[fbl_y_state], fbl_y_vsp);
      FBL_Y_POPSTACK (1);
      fbl_y_state = *fbl_y_ssp;
      FBL_Y__STACK_PRINT (fbl_y_ss, fbl_y_ssp);
    }

  if (fbl_y_n == FBL_Y_FINAL)
    FBL_Y_ACCEPT;

  *++fbl_y_vsp = fbl_y_lval;


  /* Shift the error token.  */
  FBL_Y__SYMBOL_PRINT ("Shifting", fbl_y_stos[fbl_y_n], fbl_y_vsp, fbl_y_lsp);

  fbl_y_state = fbl_y_n;
  goto fbl_y_newstate;


/*-------------------------------------.
| fbl_y_acceptlab -- FBL_Y_ACCEPT comes here.  |
`-------------------------------------*/
fbl_y_acceptlab:
  fbl_y_result = 0;
  goto fbl_y_return;

/*-----------------------------------.
| fbl_y_abortlab -- FBL_Y_ABORT comes here.  |
`-----------------------------------*/
fbl_y_abortlab:
  fbl_y_result = 1;
  goto fbl_y_return;

#ifndef fbl_y_overflow
/*-------------------------------------------------.
| fbl_y_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
fbl_y_exhaustedlab:
  fbl_y_error (FBL_Y__("memory exhausted"));
  fbl_y_result = 2;
  /* Fall through.  */
#endif

fbl_y_return:
  if (fbl_y_char != FBL_Y_EOF && fbl_y_char != FBL_Y_EMPTY)
     fbl_y_destruct ("Cleanup: discarding lookahead",
		 fbl_y_token, &fbl_y_lval);
  /* Do not reclaim the symbols of the rule which action triggered
     this FBL_Y_ABORT or FBL_Y_ACCEPT.  */
  FBL_Y_POPSTACK (fbl_y_len);
  FBL_Y__STACK_PRINT (fbl_y_ss, fbl_y_ssp);
  while (fbl_y_ssp != fbl_y_ss)
    {
      fbl_y_destruct ("Cleanup: popping",
		  fbl_y_stos[*fbl_y_ssp], fbl_y_vsp);
      FBL_Y_POPSTACK (1);
    }
#ifndef fbl_y_overflow
  if (fbl_y_ss != fbl_y_ssa)
    FBL_Y_STACK_FREE (fbl_y_ss);
#endif
#if FBL_Y_ERROR_VERBOSE
  if (fbl_y_msg != fbl_y_msgbuf)
    FBL_Y_STACK_FREE (fbl_y_msg);
#endif
  /* Make sure FBL_Y_ID is used.  */
  return FBL_Y_ID (fbl_y_result);
}


#line 3031 "../../../src/fvh/src/fbl_bcomp_y.y"

static struct dct_entry *addent (head , key)
struct dct_entry *head;
char             *key;

  {
  struct dct_entry *entry;
  long              i;

  if (FBL_DCEHED == 0)
    {
    FBL_DCEHED = (struct dct_entry *)
                 mbkalloc (sizeof(struct dct_entry) * FBL_ALODFN);

    entry = FBL_DCEHED;
    for (i=1 ; i<FBL_ALODFN ; i++)
      {
      entry->next = entry + 1;
      entry++;
      }
    entry->next = 0;
    }

  entry       = FBL_DCEHED;
  FBL_DCEHED  = FBL_DCEHED->next;

  entry->next = head;
  entry->data = 0;
  entry->key  = key;

  return (entry);
  }

static struct dct_recrd *addrcd (head , key)

struct dct_recrd *head;
char             *key;

  {
  struct dct_recrd *recrd;
  long               i;

  if (FBL_DCRHED == 0)
    {
    FBL_DCRHED = (struct dct_recrd *)
                 mbkalloc (sizeof(struct dct_recrd) * FBL_ALODFN);

    recrd = FBL_DCRHED;
    for (i=1 ; i<FBL_ALODFN ; i++)
      {
      recrd->next = recrd + 1;
      recrd++;
      }
    recrd->next = 0;
    }

  recrd           = FBL_DCRHED;
  FBL_DCRHED      = FBL_DCRHED->next;

  recrd->next     = head;
  recrd->fd0_val  = 0;
  recrd->fd1_val  = 0;
  recrd->fd2_val  = 0;
  recrd->fd3_val  = 0;
  recrd->fd4_val  = 0;
  recrd->fd5_val  = 0;
  recrd->fd6_val  = 0;
  recrd->pnt_val  = 0;
  recrd->key      = key;

  return (recrd);
  }

static struct dct_entry **initab ()

  {
  struct dct_entry **head;
  long                i;

  head = (struct dct_entry **)
         mbkalloc (sizeof(struct dct_entry *) * FBL_HSZDFN);

  for (i=0 ; i<FBL_HSZDFN ; i++)
    head[i] = 0;

  return (head);
  }

static void addtab (head,key_str,ctx_str,field,valu)

struct dct_entry **head;
char              *key_str;
char              *ctx_str;
long                field;
long               valu;

  {
  long               found = 0;
  long               index;
  struct dct_entry *entry_pnt;
  struct dct_recrd *recrd_pnt;

  index     = ((unsigned long) key_str) % FBL_HSZDFN;
  entry_pnt = head[index];

  while (entry_pnt != 0)
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
  while (recrd_pnt != 0)
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
    case 0 :
      recrd_pnt->fd0_val = valu;
      break;
    case 1 :
      recrd_pnt->fd1_val = valu;
      break;
    case 2 :
      recrd_pnt->fd2_val = valu;
      break;
    case 3 :
      recrd_pnt->fd3_val = valu;
      break;
    case 4 :
      recrd_pnt->fd4_val = valu;
      break;
    case 5 :
      recrd_pnt->fd5_val = valu;
      break;
    case 6 :
      recrd_pnt->fd6_val = valu;
      break;
    case 7 :
      recrd_pnt->pnt_val = valu;
      break;
    }

  }

static long chktab (head,key_str,ctx_str,field)

struct dct_entry **head;
char              *key_str;
char              *ctx_str;
long                field;

  {
  long               found = 0;
  long               valu = 0;
  struct dct_entry *entry_pnt;
  struct dct_recrd *recrd_pnt;

  entry_pnt = head [((unsigned long)key_str) % FBL_HSZDFN];

  while (entry_pnt != 0)
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
    while (recrd_pnt != 0)
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
        case 0 :
          valu = recrd_pnt->fd0_val;
          break;
        case 1 :
          valu = recrd_pnt->fd1_val;
          break;
        case 2 :
          valu = recrd_pnt->fd2_val;
          break;
        case 3 :
          valu = recrd_pnt->fd3_val;
          break;
        case 4 :
          valu = recrd_pnt->fd4_val;
          break;
        case 5 :
          valu = recrd_pnt->fd5_val;
          break;
        case 6 :
          valu = recrd_pnt->fd6_val;
          break;
        case 7 :
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
  long               i;

  if (pt_hash != 0)
    {
    for (i=0 ; i<FBL_HSZDFN ; i++)
      {
      if ((pt_entry = pt_hash[i]) != 0)
        {
        while (pt_entry != 0)
          {
          pt_record = pt_entry->data;

          while (pt_record->next != 0)
            pt_record = pt_record->next;

          pt_record->next = FBL_DCRHED;
          FBL_DCRHED      = pt_entry->data;

          pt_nxtentry     = pt_entry->next;
          pt_entry->next  = FBL_DCEHED;
          FBL_DCEHED      = pt_entry;
          pt_entry        = pt_nxtentry;
          }
        }
      }
    free (pt_hash);
    }
  }

void *fbl_addstr (ptfig,object,mode,prtype,type,flag,name,left,right)

struct fbfig *ptfig;
char          object;
long           mode;
long           prtype;
unsigned char type;
char          flag;
char         *name;
short         left;
short         right;

{
  void  *pnt    = 0;
  char   porflg = 0;
  char   rinflg = 0;
  char   outflg = 0;
  char   busflg = 0;
  char   auxflg = 0;
  char   buxflg = 0;
  char   regflg = 0;
  char   lclmod;
  char   lcltyp = type;
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
        case FBL_ICNDFN:
          lclmod = 'I'; lcltyp = type ; rinflg = 1; break;
        case FBL_OCNDFN:
          switch (prtype)
            {
            case BIT :
              lclmod = 'O'; lcltyp = type ; outflg = 1; break;
            case MUX_BIT :
              lclmod = 'Z'; lcltyp = type; busflg = 1; break;
            case WOR_BIT :
              lclmod = 'Z'; lcltyp = type; busflg = 1; break;
            }
          break;
        case FBL_BCNDFN:
          rinflg = 1;
          switch (prtype)
            {
            case BIT:
              lclmod = 'B'; lcltyp = type; outflg = 1; rinflg =1;break;
            case MUX_BIT:
              lclmod = 'T'; lcltyp = type; busflg = 1;rinflg =1; break;
            case WOR_BIT:
              lclmod = 'T'; lcltyp = type; busflg = 1; rinflg =1;break;
            }
          break;
        }
      break;

    case 'S':

	/* ###------------------------------------------------------### */
	/*   if object is a signal ...					*/
	/* ###------------------------------------------------------### */

      switch (prtype)
        {
        case BIT:
          lcltyp = type; auxflg = 1; break;
        case REG_BIT :
          rinflg = 1; regflg = 1; break;
        case MUX_BIT :
          lcltyp = type; rinflg = 1; buxflg = 1; break;
        case WOR_BIT :
          lcltyp = type; rinflg = 1; buxflg = 1; break;
	default : lcltyp = type ; auxflg =1;break;
        }
      break;
    }

  if (flag == 'A' || flag == 'U')
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
      {
        ptfig->BEPOR = fbh_addfbpor (ptfig->BEPOR,extname,lclmod,lcltyp);
        ptfig->BEPOR->LINE_NUM = FBL_LINNUM;
      }
      if (rinflg == 1)
      {
        ptfig->BERIN = fbh_addfbrin (ptfig->BERIN,extname);
        ptfig->BERIN->LINE_NUM = FBL_LINNUM;
      }
      if (outflg == 1)
      {
        ptfig->BEOUT = fbh_addfbout (ptfig->BEOUT,extname,0,0,lcltyp);
        ptfig->BEOUT->LINE_NUM = FBL_LINNUM;
      }
      if (busflg == 1)
      {
        ptfig->BEBUS = fbh_addfbbus (ptfig->BEBUS,extname,0,0,lcltyp);
        ptfig->BEBUS->LINE_NUM = FBL_LINNUM;
      }
      if (auxflg == 1)
      {
        ptfig->BEAUX = fbh_addfbaux (ptfig->BEAUX,extname,0,0,lcltyp);
        ptfig->BEAUX->LINE_NUM = FBL_LINNUM;
      }
      if (buxflg == 1)
      {
        ptfig->BEBUX = fbh_addfbbux (ptfig->BEBUX,extname,0,0,lcltyp);
        ptfig->BEBUX->LINE_NUM = FBL_LINNUM;
      }
      if (regflg == 1)
      {
        ptfig->BEREG = fbh_addfbreg (ptfig->BEREG,extname,0,0);
        ptfig->BEREG->LINE_NUM = FBL_LINNUM;
      }
      }
    }
  else
    {
	/* ###------------------------------------------------------### */
	/*   if object is a scalar ...					*/
	/* ###------------------------------------------------------### */

    if (porflg == 1)
    {
      ptfig->BEPOR = fbh_addfbpor (ptfig->BEPOR,name,lclmod,lcltyp);
      ptfig->BEPOR->LINE_NUM = FBL_LINNUM;
    }
    if (rinflg == 1)
    {
      ptfig->BERIN = fbh_addfbrin (ptfig->BERIN,name);
      ptfig->BERIN->LINE_NUM = FBL_LINNUM;
    }
    if (outflg == 1)
    {
      ptfig->BEOUT = fbh_addfbout (ptfig->BEOUT,name,0,0,lcltyp);
      ptfig->BEOUT->LINE_NUM = FBL_LINNUM;
    }
    if (busflg == 1)
    {
      ptfig->BEBUS = fbh_addfbbus (ptfig->BEBUS,name,0,0,lcltyp);
      ptfig->BEBUS->LINE_NUM = FBL_LINNUM;
    }
    if (auxflg == 1)
    {
      ptfig->BEAUX = fbh_addfbaux (ptfig->BEAUX,name,0,0,lcltyp);
      ptfig->BEAUX->LINE_NUM = FBL_LINNUM;
    }
    if (buxflg == 1)
    {
      ptfig->BEBUX = fbh_addfbbux (ptfig->BEBUX,name,0,0,lcltyp);
      ptfig->BEBUX->LINE_NUM = FBL_LINNUM;
    }
    if (regflg == 1)
    {
      ptfig->BEREG = fbh_addfbreg (ptfig->BEREG,name,0,0);
      ptfig->BEREG->LINE_NUM = FBL_LINNUM;
    }

    }

  if (outflg == 1)
  {
    pnt = (void *) ptfig->BEOUT;
  }
  if (busflg == 1)
  {
    pnt = (void *) ptfig->BEBUS;
  }
  if (auxflg == 1)
  {
    pnt = (void *) ptfig->BEAUX;
  }
  if (buxflg == 1)
  {
    pnt = (void *) ptfig->BEBUX;
  }
  if (regflg == 1)
  {
    pnt = (void *) ptfig->BEREG;
  }

  return (pnt);
}

long fbl_chkdcl (object,mode,type,flag,kind,constraint,conf)

char object;
long  mode;
long  type;
char flag;
long  kind;
char constraint;
long  *conf;

{
  long errflg = 0;
  long lclcnf = 0;

  if (flag != constraint && constraint !='U'  && flag !='U')
    {
    errflg = 1;
    {
    fbl_error (33,0);
    }
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
          case BIT :

            lclcnf += FBL_BITDFN + FBL_NORDFN;
            switch (mode)
              {
              case _IN :
                lclcnf += FBL_ICNDFN; break;
              case _OUT:
                lclcnf += FBL_OCNDFN; break;
              case _INOUT :
                lclcnf += FBL_BCNDFN; break;
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != 0)
              errflg = 1;
            break;

          case MUX_BIT :

            lclcnf += FBL_MUXDFN + FBL_BUSDFN;
            switch (mode)
              {
              case _OUT :
                lclcnf += FBL_OCNDFN; break;
              case _INOUT :
                lclcnf += FBL_BCNDFN; break;
              case _IN :
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != BUS)
              errflg = 1;
            break;

          case WOR_BIT :

            lclcnf += FBL_WORDFN + FBL_BUSDFN;
            switch (mode)
              {
              case _OUT :
                lclcnf += FBL_OCNDFN; break;
              case _INOUT :
                lclcnf += FBL_BCNDFN; break;
              case _IN :
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != BUS)
              errflg = 1;
            break;

          case REG_BIT :
          case NATURAL:

            errflg = 1;
            break;
          }
        if (errflg == 1)
        {
          fbl_error (5,0);
        }
        break;

      case 'G':
	/* ###------------------------------------------------------### */
	/*    If object is a generic :					*/
	/*       - only natural type is allowed				*/
	/* ###------------------------------------------------------### */

        if ((type != NATURAL) || (mode != 0) || (kind != 0))
          {
          errflg = 1;
          {
          fbl_error (77,0);
          }
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
            lclcnf += FBL_BITDFN + FBL_NORDFN;
            if ((mode != 0) || (kind != 0))
              errflg = 1;
            break;
          case MUX_BIT:
            lclcnf += FBL_MUXDFN + FBL_BUSDFN;
            if ((mode != 0) || (kind != BUS))
              errflg = 1;
            break;
          case WOR_BIT:
            lclcnf += FBL_WORDFN + FBL_BUSDFN;
            if ((mode != 0) || (kind != BUS))
              errflg = 1;
            break;
          case REG_BIT:
            lclcnf += FBL_RBIDFN + FBL_REGDFN;
            if ((mode != 0) || (kind != REGISTER))
              errflg = 1;
            break;
          case NATURAL:
            errflg = 1; break;
          }

        if (mode != 0)
          errflg = 1;

        if (errflg == 1)
        {
          fbl_error (11,NULL);
        }
        break;

      case 'C':
	/* ###------------------------------------------------------### */
	/*    If object is a constant :					*/
	/*       - only bit type without any other indication is legal	*/
	/* ###------------------------------------------------------### */

        lclcnf += FBL_CSTDFN;
        if ((type != BIT) || (mode != 0) || (kind != 0))
          {
          errflg = 1;
          {
          fbl_error (78,NULL);
          }
          }
        break;
      }
    }

  *conf = lclcnf;
  return (errflg);
}

long val_type(name)
 char *name;
{
    if(!name)
	   return(-1);
	if (!strcmp(name,"severity_level"))
          return(SEVERITY_LEVEL);
	if (!strcmp(name,"boolean"))
             return(BOOLEAN);	
	if (!strcmp(name,"bit"))
             return(BIT);	
	if (!strcmp(name,"mux_bit"))
             return(MUX_BIT);	
	if (!strcmp(name,"wor_bit"))
             return(WOR_BIT);	
	if (!strcmp(name,"reg_bit"))
             return(REG_BIT);	
	if (!strcmp(name,"bit_vector"))
             return(BIT);
	if (!strcmp(name,"mux_vector"))
             return(MUX_BIT);	
	if (!strcmp(name,"wor_vector"))
             return(WOR_BIT);	
	if (!strcmp(name,"reg_vector"))
             return(REG_BIT);	
	if (!strcmp(name,"integer"))
             return(INTEGER);	
	if (!strcmp(name,"natural"))
             return(NATURAL);	
	if (!strcmp(name,"std_logic"))
             return(BIT);	
	if (!strcmp(name,"std_ulogic"))
             return(BIT);	
	if (!strcmp(name,"std_logic_vector"))
             return(BIT);
	if (!strcmp(name,"std_ulogic_vector"))
             return(BIT);
        return( -1 );
}
 struct ptype *reversetype(pnt)
 struct ptype *pnt;
  {
    struct ptype* revtype;
    struct ptype* aux2;
    struct ptype* aux1;

    if(pnt == 0 || pnt->NEXT == 0)
	return(pnt);
			revtype = pnt;
		     aux1 = pnt->NEXT;		
		     revtype->NEXT = 0;	
		  while(aux1)
		   {
		     aux2 = revtype;	
		     revtype = aux1;
		     aux1 = aux1->NEXT;		
		     revtype->NEXT = aux2;	
		   }
	return(revtype);
 }
	
 struct choice_chain *addchoice(lastpnt,type,val,size)
 struct choice_chain *lastpnt;
 struct ptype *type;
 char    *val;
 unsigned long size;
 {
    struct choice_chain *pnt;	

    pnt = (struct choice_chain*)mbkalloc(sizeof(struct choice_chain));
    pnt->VALUE = val;
    pnt->SIZE = size;
    pnt->INSTRUCTION  = type;
    pnt->NEXT   = lastpnt;
	return(pnt);
 }

 struct choice_chain *order_choice(pnt,type,val,size)
 struct choice_chain *pnt;
 struct ptype *type;
 char    *val;
 unsigned long size;
 {
    struct choice_chain *aux1;
    struct choice_chain *aux2;
   
      if(!pnt)
	{
    	 	aux1 = addchoice (pnt,type,val,size);
		return(aux1);
	}

	 if(strcmp(pnt->VALUE,val)>0) 
		{
	  aux1 =addchoice(pnt,type,val,size);
               return(aux1);
		}
	
    aux1 =pnt; 
    aux2 =pnt->NEXT; 
	while(aux2)
	{
	 if(strcmp(aux2->VALUE, val)>0) 
	  {
    	 	aux2 = addchoice (aux2,type,val,size);
		aux1->NEXT = aux2;
		return(pnt);
  	  }
	 aux1 = aux2;
	 aux2 = aux2->NEXT;
	}
    	 	aux2 = addchoice (aux2,type,val,size);
		aux1->NEXT = aux2;
		return(pnt);
 } 
          

