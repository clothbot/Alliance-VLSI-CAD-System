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

/* All symbols defined below should begin with vbl_y_ or VBL_Y_, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define VBL_Y_BISON 1

/* Bison version.  */
#define VBL_Y_BISON_VERSION "2.3"

/* Skeleton name.  */
#define VBL_Y_SKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define VBL_Y_PURE 0

/* Using locations.  */
#define VBL_Y_LSP_NEEDED 0



/* Tokens.  */
#ifndef VBL_Y_TOKENTYPE
# define VBL_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum vbl_y_tokentype {
     tok_AND = 258,
     _BEGIN = 259,
     _END = 260,
     _EQSym = 261,
     _EXIT = 262,
     _FILE = 263,
     _GESym = 264,
     _GTSym = 265,
     _IN = 266,
     _INOUT = 267,
     _LABEL = 268,
     _LESym = 269,
     _LINKAGE = 270,
     _LTSym = 271,
     _NAND = 272,
     _IFT = 273,
     _NXOR = 274,
     _NESym = 275,
     _NEXT = 276,
     _NOR = 277,
     _NOT = 278,
     tok_NULL = 279,
     _OR = 280,
     _OUT = 281,
     _XOR = 282,
     ABS = 283,
     ACCESS = 284,
     AFTER = 285,
     ALIAS = 286,
     ALL = 287,
     ARCHITECTURE = 288,
     ARRAY = 289,
     ASSERT = 290,
     ATTRIBUTE = 291,
     AbstractLit = 292,
     Ampersand = 293,
     Apostrophe = 294,
     Arrow = 295,
     BLOCK = 296,
     BODY = 297,
     BUS = 298,
     _BUFFER = 299,
     Bar = 300,
     BasedInt = 301,
     BasedReal = 302,
     BitStringLit = 303,
     _TRUE = 304,
     _FALSE = 305,
     Box = 306,
     CASE = 307,
     COMPONENT = 308,
     CONFIGURATION = 309,
     CONSTANT = 310,
     CharacterLit = 311,
     Colon = 312,
     Comma = 313,
     DISCONNECT = 314,
     DOWNTO = 315,
     DecimalInt = 316,
     DecimalReal = 317,
     Dot = 318,
     DoubleStar = 319,
     ELSE = 320,
     ELSIF = 321,
     _ENTITY = 322,
     ERROR = 323,
     _EVENT = 324,
     _LEFT = 325,
     _LENGTH = 326,
     _RIGHT = 327,
     _HIGH = 328,
     _LOW = 329,
     FOR = 330,
     FUNCTION = 331,
     GENERATE = 332,
     GENERIC = 333,
     GUARDED = 334,
     IF = 335,
     IS = 336,
     _NS = 337,
     _PS = 338,
     _FS = 339,
     _MS = 340,
     Identifier = 341,
     _LIBRARY = 342,
     LOOP = 343,
     LeftParen = 344,
     MAP = 345,
     MOD = 346,
     Minus = 347,
     NEW = 348,
     OF = 349,
     ON = 350,
     OPEN = 351,
     OTHERS = 352,
     _PACKAGE = 353,
     PORT = 354,
     PROCEDURE = 355,
     PROCESS = 356,
     Plus = 357,
     _RANGE = 358,
     _REV_RANGE = 359,
     RECORD = 360,
     REGISTER = 361,
     REM = 362,
     REPORT = 363,
     _RETURN = 364,
     RightParen = 365,
     SELECT = 366,
     SEVERITY = 367,
     SIGNAL = 368,
     _STABLE = 369,
     SUBTYPE = 370,
     Semicolon = 371,
     Slash = 372,
     Star = 373,
     StringLit = 374,
     THEN = 375,
     TO = 376,
     TRANSPORT = 377,
     _TYPE = 378,
     UNITS = 379,
     UNTIL = 380,
     USE = 381,
     _VARIABLE = 382,
     VarAsgn = 383,
     WAIT = 384,
     WARNING = 385,
     WHEN = 386,
     WHILE = 387,
     WITH = 388
   };
#endif
/* Tokens.  */
#define tok_AND 258
#define _BEGIN 259
#define _END 260
#define _EQSym 261
#define _EXIT 262
#define _FILE 263
#define _GESym 264
#define _GTSym 265
#define _IN 266
#define _INOUT 267
#define _LABEL 268
#define _LESym 269
#define _LINKAGE 270
#define _LTSym 271
#define _NAND 272
#define _IFT 273
#define _NXOR 274
#define _NESym 275
#define _NEXT 276
#define _NOR 277
#define _NOT 278
#define tok_NULL 279
#define _OR 280
#define _OUT 281
#define _XOR 282
#define ABS 283
#define ACCESS 284
#define AFTER 285
#define ALIAS 286
#define ALL 287
#define ARCHITECTURE 288
#define ARRAY 289
#define ASSERT 290
#define ATTRIBUTE 291
#define AbstractLit 292
#define Ampersand 293
#define Apostrophe 294
#define Arrow 295
#define BLOCK 296
#define BODY 297
#define BUS 298
#define _BUFFER 299
#define Bar 300
#define BasedInt 301
#define BasedReal 302
#define BitStringLit 303
#define _TRUE 304
#define _FALSE 305
#define Box 306
#define CASE 307
#define COMPONENT 308
#define CONFIGURATION 309
#define CONSTANT 310
#define CharacterLit 311
#define Colon 312
#define Comma 313
#define DISCONNECT 314
#define DOWNTO 315
#define DecimalInt 316
#define DecimalReal 317
#define Dot 318
#define DoubleStar 319
#define ELSE 320
#define ELSIF 321
#define _ENTITY 322
#define ERROR 323
#define _EVENT 324
#define _LEFT 325
#define _LENGTH 326
#define _RIGHT 327
#define _HIGH 328
#define _LOW 329
#define FOR 330
#define FUNCTION 331
#define GENERATE 332
#define GENERIC 333
#define GUARDED 334
#define IF 335
#define IS 336
#define _NS 337
#define _PS 338
#define _FS 339
#define _MS 340
#define Identifier 341
#define _LIBRARY 342
#define LOOP 343
#define LeftParen 344
#define MAP 345
#define MOD 346
#define Minus 347
#define NEW 348
#define OF 349
#define ON 350
#define OPEN 351
#define OTHERS 352
#define _PACKAGE 353
#define PORT 354
#define PROCEDURE 355
#define PROCESS 356
#define Plus 357
#define _RANGE 358
#define _REV_RANGE 359
#define RECORD 360
#define REGISTER 361
#define REM 362
#define REPORT 363
#define _RETURN 364
#define RightParen 365
#define SELECT 366
#define SEVERITY 367
#define SIGNAL 368
#define _STABLE 369
#define SUBTYPE 370
#define Semicolon 371
#define Slash 372
#define Star 373
#define StringLit 374
#define THEN 375
#define TO 376
#define TRANSPORT 377
#define _TYPE 378
#define UNITS 379
#define UNTIL 380
#define USE 381
#define _VARIABLE 382
#define VarAsgn 383
#define WAIT 384
#define WARNING 385
#define WHEN 386
#define WHILE 387
#define WITH 388




/* Copy the first part of user declarations.  */
#line 33 "../../../src/vbl/src/vbl_bcomp_y.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mut.h"
#include "aut.h"
#include "vex.h"
#include "vbh.h"

#include "vbl_utype.h"
#include "vbl_bedef.h"
#include "vbl_bspec.h"
#include "vbl_byacc.h"

#if 1
# define my_fprintf fprintf( stdout, "%s %d : ", basename(__FILE__), __LINE__ ); fprintf
# define my_vbl_error(N,V) \
   do { fprintf( stderr, "%s %d : ", basename(__FILE__), __LINE__); vbl_error( (long)N, (char *)V); } while(0)
# define my_vbl_warning(N,V) \
   do { fprintf( stderr, "%s %d : ", basename(__FILE__), __LINE__); vbl_warning((long)N, (char *)V); } while(0)
#else
# define my_fprintf   fprintf
# define my_vbl_error vbl_error
# define my_vbl_warning vbl_warning
#endif

#ifdef VBL_DEBUG
#define VBL_Y_DEBUG 1
#endif



/* Enabling traces.  */
#ifndef VBL_Y_DEBUG
# define VBL_Y_DEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef VBL_Y_ERROR_VERBOSE
# undef VBL_Y_ERROR_VERBOSE
# define VBL_Y_ERROR_VERBOSE 1
#else
# define VBL_Y_ERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef VBL_Y_TOKEN_TABLE
# define VBL_Y_TOKEN_TABLE 0
#endif

#if ! defined VBL_Y_STYPE && ! defined VBL_Y_STYPE_IS_DECLARED
typedef union VBL_Y_STYPE
#line 65 "../../../src/vbl/src/vbl_bcomp_y.y"
{
          long                valu;
          char              *text;
          chain_list        *pcha;
          vbl_name           name;
          vbl_vexstr         list;
          struct vbtyp       type;
       }
/* Line 187 of yacc.c.  */
#line 403 "y.tab.c"
	VBL_Y_STYPE;
# define vbl_y_stype VBL_Y_STYPE /* obsolescent; will be withdrawn */
# define VBL_Y_STYPE_IS_DECLARED 1
# define VBL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 416 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef VBL_Y_TYPE_UINT8
typedef VBL_Y_TYPE_UINT8 vbl_y_type_uint8;
#else
typedef unsigned char vbl_y_type_uint8;
#endif

#ifdef VBL_Y_TYPE_INT8
typedef VBL_Y_TYPE_INT8 vbl_y_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char vbl_y_type_int8;
#else
typedef short int vbl_y_type_int8;
#endif

#ifdef VBL_Y_TYPE_UINT16
typedef VBL_Y_TYPE_UINT16 vbl_y_type_uint16;
#else
typedef unsigned short int vbl_y_type_uint16;
#endif

#ifdef VBL_Y_TYPE_INT16
typedef VBL_Y_TYPE_INT16 vbl_y_type_int16;
#else
typedef short int vbl_y_type_int16;
#endif

#ifndef VBL_Y_SIZE_T
# ifdef __SIZE_TYPE__
#  define VBL_Y_SIZE_T __SIZE_TYPE__
# elif defined size_t
#  define VBL_Y_SIZE_T size_t
# elif ! defined VBL_Y_SIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define VBL_Y_SIZE_T size_t
# else
#  define VBL_Y_SIZE_T unsigned int
# endif
#endif

#define VBL_Y_SIZE_MAXIMUM ((VBL_Y_SIZE_T) -1)

#ifndef VBL_Y__
# if VBL_Y_ENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define VBL_Y__(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef VBL_Y__
#  define VBL_Y__(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define VBL_Y_USE(e) ((void) (e))
#else
# define VBL_Y_USE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define VBL_Y_ID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
VBL_Y_ID (int i)
#else
static int
VBL_Y_ID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined vbl_y_overflow || VBL_Y_ERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef VBL_Y_STACK_USE_ALLOCA
#  if VBL_Y_STACK_USE_ALLOCA
#   ifdef __GNUC__
#    define VBL_Y_STACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define VBL_Y_STACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define VBL_Y_STACK_ALLOC alloca
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

# ifdef VBL_Y_STACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define VBL_Y_STACK_FREE(Ptr) do { /* empty */; } while (VBL_Y_ID (0))
#  ifndef VBL_Y_STACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define VBL_Y_STACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define VBL_Y_STACK_ALLOC VBL_Y_MALLOC
#  define VBL_Y_STACK_FREE VBL_Y_FREE
#  ifndef VBL_Y_STACK_ALLOC_MAXIMUM
#   define VBL_Y_STACK_ALLOC_MAXIMUM VBL_Y_SIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined VBL_Y_MALLOC || defined malloc) \
	     && (defined VBL_Y_FREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef VBL_Y_MALLOC
#   define VBL_Y_MALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (VBL_Y_SIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef VBL_Y_FREE
#   define VBL_Y_FREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined vbl_y_overflow || VBL_Y_ERROR_VERBOSE */


#if (! defined vbl_y_overflow \
     && (! defined __cplusplus \
	 || (defined VBL_Y_STYPE_IS_TRIVIAL && VBL_Y_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union vbl_y_alloc
{
  vbl_y_type_int16 vbl_y_ss;
  VBL_Y_STYPE vbl_y_vs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define VBL_Y_STACK_GAP_MAXIMUM (sizeof (union vbl_y_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define VBL_Y_STACK_BYTES(N) \
     ((N) * (sizeof (vbl_y_type_int16) + sizeof (VBL_Y_STYPE)) \
      + VBL_Y_STACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef VBL_Y_COPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define VBL_Y_COPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define VBL_Y_COPY(To, From, Count)		\
      do					\
	{					\
	  VBL_Y_SIZE_T vbl_y_i;				\
	  for (vbl_y_i = 0; vbl_y_i < (Count); vbl_y_i++)	\
	    (To)[vbl_y_i] = (From)[vbl_y_i];		\
	}					\
      while (VBL_Y_ID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables VBL_Y_SIZE and VBL_Y_STACKSIZE give the old and new number of
   elements in the stack, and VBL_Y_PTR gives the new location of the
   stack.  Advance VBL_Y_PTR to a properly aligned location for the next
   stack.  */
# define VBL_Y_STACK_RELOCATE(Stack)					\
    do									\
      {									\
	VBL_Y_SIZE_T vbl_y_newbytes;						\
	VBL_Y_COPY (&vbl_y_ptr->Stack, Stack, vbl_y_size);				\
	Stack = &vbl_y_ptr->Stack;						\
	vbl_y_newbytes = vbl_y_stacksize * sizeof (*Stack) + VBL_Y_STACK_GAP_MAXIMUM; \
	vbl_y_ptr += vbl_y_newbytes / sizeof (*vbl_y_ptr);				\
      }									\
    while (VBL_Y_ID (0))

#endif

/* VBL_Y_FINAL -- State number of the termination state.  */
#define VBL_Y_FINAL  3
/* VBL_Y_LAST -- Last index in VBL_Y_TABLE.  */
#define VBL_Y_LAST   1012

/* VBL_Y_NTOKENS -- Number of terminals.  */
#define VBL_Y_NTOKENS  134
/* VBL_Y_NNTS -- Number of nonterminals.  */
#define VBL_Y_NNTS  261
/* VBL_Y_NRULES -- Number of rules.  */
#define VBL_Y_NRULES  494
/* VBL_Y_NRULES -- Number of states.  */
#define VBL_Y_NSTATES  816

/* VBL_Y_TRANSLATE(VBL_Y_LEX) -- Bison symbol number corresponding to VBL_Y_LEX.  */
#define VBL_Y_UNDEFTOK  2
#define VBL_Y_MAXUTOK   388

#define VBL_Y_TRANSLATE(VBL_Y_X)						\
  ((unsigned int) (VBL_Y_X) <= VBL_Y_MAXUTOK ? vbl_y_translate[VBL_Y_X] : VBL_Y_UNDEFTOK)

/* VBL_Y_TRANSLATE[VBL_Y_LEX] -- Bison symbol number corresponding to VBL_Y_LEX.  */
static const vbl_y_type_uint8 vbl_y_translate[] =
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

#if VBL_Y_DEBUG
/* VBL_Y_PRHS[VBL_Y_N] -- Index of the first RHS symbol of rule number VBL_Y_N in
   VBL_Y_RHS.  */
static const vbl_y_type_uint16 vbl_y_prhs[] =
{
       0,     0,     3,     4,     8,     9,    12,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    35,    38,    39,    43,
      45,    46,    49,    51,    53,    58,    68,    71,    77,    78,
      87,    90,    92,    93,    96,    98,   100,   102,   104,   106,
     108,   110,   112,   116,   117,   127,   131,   133,   134,   137,
     139,   141,   143,   145,   147,   148,   149,   150,   159,   160,
     162,   168,   169,   171,   177,   178,   182,   183,   192,   195,
     198,   202,   205,   206,   210,   211,   216,   218,   219,   223,
     224,   233,   234,   240,   243,   246,   247,   251,   259,   260,
     262,   264,   266,   268,   270,   271,   277,   280,   283,   284,
     288,   296,   302,   303,   314,   316,   318,   320,   322,   324,
     326,   328,   330,   332,   334,   336,   338,   340,   344,   346,
     348,   350,   354,   355,   365,   368,   369,   371,   373,   377,
     380,   382,   386,   388,   390,   391,   393,   399,   400,   402,
     408,   412,   415,   416,   420,   429,   431,   434,   437,   438,
     442,   450,   451,   453,   454,   456,   457,   459,   460,   462,
     464,   466,   467,   480,   483,   485,   486,   489,   491,   493,
     495,   497,   499,   501,   503,   505,   507,   509,   512,   514,
     515,   520,   524,   525,   529,   536,   537,   539,   541,   543,
     544,   546,   548,   550,   551,   556,   560,   561,   565,   572,
     573,   575,   577,   578,   580,   581,   584,   586,   588,   590,
     592,   594,   596,   597,   601,   602,   607,   608,   615,   616,
     617,   618,   630,   631,   633,   641,   644,   645,   648,   656,
     665,   667,   673,   675,   677,   680,   686,   690,   693,   695,
     697,   702,   703,   707,   709,   711,   713,   715,   717,   724,
     729,   733,   737,   739,   742,   744,   746,   747,   749,   751,
     753,   754,   757,   759,   761,   763,   765,   767,   769,   772,
     775,   777,   779,   780,   791,   793,   796,   798,   801,   803,
     810,   811,   817,   818,   829,   830,   834,   838,   839,   843,
     844,   847,   848,   849,   850,   851,   865,   867,   868,   871,
     873,   875,   877,   879,   881,   883,   885,   887,   888,   890,
     894,   897,   898,   902,   903,   906,   908,   910,   912,   914,
     916,   918,   920,   922,   924,   926,   928,   930,   931,   935,
     936,   939,   940,   949,   950,   952,   955,   958,   962,   963,
     970,   971,   973,   974,   978,   979,   981,   984,   985,   987,
     991,   993,   995,   997,   999,  1004,  1009,  1010,  1013,  1017,
    1018,  1020,  1026,  1031,  1034,  1039,  1042,  1043,  1046,  1049,
    1050,  1051,  1063,  1064,  1065,  1072,  1073,  1076,  1077,  1087,
    1088,  1091,  1092,  1098,  1100,  1101,  1105,  1108,  1109,  1113,
    1115,  1117,  1119,  1121,  1122,  1125,  1126,  1129,  1131,  1133,
    1135,  1137,  1139,  1141,  1143,  1147,  1151,  1155,  1159,  1161,
    1165,  1169,  1173,  1177,  1181,  1185,  1187,  1191,  1193,  1195,
    1198,  1202,  1204,  1206,  1208,  1210,  1212,  1214,  1216,  1218,
    1220,  1222,  1226,  1228,  1232,  1235,  1238,  1240,  1242,  1244,
    1246,  1250,  1252,  1254,  1256,  1258,  1260,  1262,  1264,  1266,
    1268,  1270,  1272,  1274,  1279,  1280,  1284,  1286,  1290,  1292,
    1294,  1296,  1298,  1301,  1308,  1312,  1314,  1316,  1318,  1320,
    1322,  1324,  1326,  1328,  1330,  1331,  1335,  1336,  1340,  1341,
    1343,  1344,  1346,  1350,  1351,  1353,  1354,  1356,  1358,  1360,
    1362,  1365,  1367,  1369,  1371
};

/* VBL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const vbl_y_type_int16 vbl_y_rhs[] =
{
     135,     0,    -1,    -1,   136,   138,   137,    -1,    -1,   138,
     137,    -1,   145,   139,    -1,   140,    -1,   141,    -1,     1,
      -1,   198,    -1,   149,    -1,   151,    -1,   219,    -1,   156,
      -1,    87,   143,   393,    -1,    86,   144,    -1,    -1,   144,
      58,    86,    -1,   146,    -1,    -1,   146,   147,    -1,   142,
      -1,   148,    -1,   126,   195,   179,   393,    -1,    54,    86,
      94,    86,    81,   150,   394,   387,   393,    -1,    54,     1,
      -1,    75,   391,   394,    75,   393,    -1,    -1,    98,    86,
      81,   152,   153,   394,   387,   393,    -1,    98,     1,    -1,
     154,    -1,    -1,   154,   155,    -1,   252,    -1,   255,    -1,
     191,    -1,   247,    -1,   237,    -1,   180,    -1,   192,    -1,
     251,    -1,     1,   394,   393,    -1,    -1,    98,    42,    86,
      81,   157,   158,   394,   387,   393,    -1,    98,    42,     1,
      -1,   159,    -1,    -1,   159,   160,    -1,   237,    -1,   242,
      -1,   252,    -1,   255,    -1,   247,    -1,    -1,    -1,    -1,
     390,   375,   162,   167,   163,   165,   164,   393,    -1,    -1,
     166,    -1,    99,    90,    89,   175,   392,    -1,    -1,   168,
      -1,    78,    90,    89,   175,   392,    -1,    -1,   390,   170,
     171,    -1,    -1,   173,    77,   172,   278,   394,    77,   383,
     393,    -1,    75,   174,    -1,    80,   350,    -1,    86,    11,
     268,    -1,   177,   176,    -1,    -1,    58,   177,   176,    -1,
      -1,   375,    40,   178,   355,    -1,   355,    -1,    -1,   179,
      58,   195,    -1,    -1,    53,    86,   181,   187,   182,   394,
      53,   393,    -1,    -1,    99,    89,   183,   392,   393,    -1,
     185,   184,    -1,     1,   392,    -1,    -1,   184,   393,   185,
      -1,   215,   380,    57,   186,   269,   200,   270,    -1,    -1,
      11,    -1,    26,    -1,    12,    -1,    44,    -1,    15,    -1,
      -1,    78,    89,   188,   392,   393,    -1,   190,   189,    -1,
       1,   392,    -1,    -1,   189,   393,   190,    -1,   216,   380,
      57,   217,   269,   200,   249,    -1,    36,    86,    57,   388,
     393,    -1,    -1,    36,   388,   193,    94,   388,    57,   194,
      81,   119,   393,    -1,    67,    -1,    33,    -1,    98,    -1,
      76,    -1,   100,    -1,   115,    -1,    55,    -1,   127,    -1,
     113,    -1,    13,    -1,   123,    -1,    54,    -1,    53,    -1,
     197,    63,   196,    -1,   388,    -1,    32,    -1,   388,    -1,
     197,    63,   388,    -1,    -1,    67,   388,    81,   199,   205,
     207,   394,   387,   393,    -1,    67,     1,    -1,    -1,   201,
      -1,   202,    -1,    89,   203,   392,    -1,   103,   203,    -1,
     378,    -1,   361,   204,   361,    -1,   121,    -1,    60,    -1,
      -1,   206,    -1,    78,    89,   212,   392,   393,    -1,    -1,
     208,    -1,    99,    89,   209,   392,   393,    -1,    99,     1,
     393,    -1,   211,   210,    -1,    -1,   210,   393,   211,    -1,
     215,   380,    57,   218,   269,   200,   270,   249,    -1,     1,
      -1,   214,   213,    -1,     1,   392,    -1,    -1,   213,   393,
     214,    -1,   216,   380,    57,   217,   269,   200,   249,    -1,
      -1,   113,    -1,    -1,    55,    -1,    -1,    11,    -1,    -1,
      11,    -1,    26,    -1,    12,    -1,    -1,    33,    86,    94,
     388,    81,   220,   221,     4,   271,   394,   387,   393,    -1,
      33,     1,    -1,   222,    -1,    -1,   222,   223,    -1,   247,
      -1,   251,    -1,   252,    -1,   250,    -1,   255,    -1,   191,
      -1,   192,    -1,   180,    -1,   237,    -1,   242,    -1,     1,
     393,    -1,    86,    -1,    -1,    89,   227,   226,   392,    -1,
      89,     1,   392,    -1,    -1,   226,   393,   227,    -1,   228,
     380,    57,   229,   269,   200,    -1,    -1,   127,    -1,    55,
      -1,   113,    -1,    -1,    11,    -1,    26,    -1,    12,    -1,
      -1,    89,   232,   231,   392,    -1,    89,     1,   392,    -1,
      -1,   231,   393,   232,    -1,   233,   380,    57,   234,   269,
     200,    -1,    -1,    55,    -1,   113,    -1,    -1,    11,    -1,
      -1,   235,   236,    -1,   247,    -1,   250,    -1,   252,    -1,
     255,    -1,   191,    -1,   192,    -1,    -1,   239,   238,   393,
      -1,    -1,   100,   224,   240,   225,    -1,    -1,    76,   224,
     241,   230,   109,   269,    -1,    -1,    -1,    -1,   239,    81,
     235,     4,   243,   301,   244,   394,   246,   245,   393,    -1,
      -1,   224,    -1,    55,    86,    57,   269,   200,   248,   393,
      -1,   128,   355,    -1,    -1,   128,   355,    -1,   127,   380,
      57,   269,   200,   249,   393,    -1,   113,   380,    57,   269,
     200,   270,   249,   393,    -1,   253,    -1,   123,    86,    81,
     254,   393,    -1,   258,    -1,   262,    -1,     1,   393,    -1,
     115,    86,    81,   256,   393,    -1,   257,   269,   200,    -1,
     269,   200,    -1,   388,    -1,   259,    -1,    89,   261,   260,
     392,    -1,    -1,   260,    58,   261,    -1,    86,    -1,    56,
      -1,   263,    -1,   264,    -1,   265,    -1,    34,    89,   266,
     392,    94,   256,    -1,    34,   267,    94,   256,    -1,   375,
     103,    51,    -1,    89,   268,   392,    -1,   203,    -1,   375,
     202,    -1,   269,    -1,   388,    -1,    -1,    43,    -1,   106,
      -1,   272,    -1,    -1,   272,   273,    -1,   276,    -1,   274,
      -1,   286,    -1,   279,    -1,   161,    -1,   169,    -1,     1,
     393,    -1,   390,   275,    -1,   275,    -1,   326,    -1,    -1,
     390,    41,   384,     4,   277,   278,   394,    41,   383,   393,
      -1,   272,    -1,   390,   280,    -1,   280,    -1,   390,   282,
      -1,   282,    -1,   389,    14,   386,   281,   344,   393,    -1,
      -1,   281,   344,   131,   355,    65,    -1,    -1,   133,   355,
     283,   111,   389,    14,   386,   285,   284,   393,    -1,    -1,
     284,    58,   285,    -1,   344,   131,   345,    -1,    -1,   390,
     287,   289,    -1,    -1,   288,   289,    -1,    -1,    -1,    -1,
      -1,   101,   290,   297,   291,   294,     4,   292,   301,   293,
     394,   101,   383,   393,    -1,   295,    -1,    -1,   295,   296,
      -1,   247,    -1,   250,    -1,   252,    -1,   255,    -1,   191,
      -1,   192,    -1,   237,    -1,   242,    -1,    -1,   298,    -1,
      89,   299,   110,    -1,   375,   300,    -1,    -1,    58,   375,
     300,    -1,    -1,   301,   302,    -1,   326,    -1,   327,    -1,
     329,    -1,   333,    -1,   339,    -1,   303,    -1,   321,    -1,
     322,    -1,   324,    -1,   347,    -1,   328,    -1,   311,    -1,
      -1,   390,   304,   306,    -1,    -1,   305,   306,    -1,    -1,
     308,    88,   307,   301,   394,    88,   383,   393,    -1,    -1,
     309,    -1,   132,   355,    -1,    75,   310,    -1,    86,    11,
     268,    -1,    -1,   129,   312,   313,   316,   318,   393,    -1,
      -1,   314,    -1,    -1,    95,   315,   299,    -1,    -1,   317,
      -1,   125,   355,    -1,    -1,   319,    -1,    75,   361,   320,
      -1,    84,    -1,    83,    -1,    82,    -1,    85,    -1,    21,
     383,   323,   393,    -1,     7,   383,   323,   393,    -1,    -1,
     131,   350,    -1,   109,   325,   393,    -1,    -1,   355,    -1,
      35,   355,   351,   352,   393,    -1,   389,   128,   355,   393,
      -1,   375,   393,    -1,   389,    14,   344,   393,    -1,   355,
     331,    -1,    -1,    30,   332,    -1,    37,   320,    -1,    -1,
      -1,    80,   350,   120,   334,   301,   335,   336,   338,   394,
      80,   393,    -1,    -1,    -1,   336,    66,   350,   120,   337,
     301,    -1,    -1,    65,   301,    -1,    -1,    52,   355,   340,
      81,   342,   341,   394,    52,   393,    -1,    -1,   341,   342,
      -1,    -1,   131,   345,    40,   343,   301,    -1,   330,    -1,
      -1,   349,   346,   348,    -1,    24,   393,    -1,    -1,   348,
      45,   349,    -1,   371,    -1,    97,    -1,   375,    -1,   355,
      -1,    -1,   108,   353,    -1,    -1,   112,   354,    -1,   119,
      -1,    68,    -1,   130,    -1,   356,    -1,   357,    -1,   358,
      -1,   359,    -1,   360,     3,   360,    -1,   356,     3,   360,
      -1,   360,    25,   360,    -1,   357,    25,   360,    -1,   360,
      -1,   360,    17,   360,    -1,   360,    22,   360,    -1,   360,
      19,   360,    -1,   360,    18,   360,    -1,   360,    27,   360,
      -1,   359,    27,   360,    -1,   361,    -1,   361,   370,   361,
      -1,   362,    -1,   366,    -1,   364,   366,    -1,   362,   363,
     366,    -1,   102,    -1,    92,    -1,    38,    -1,   102,    -1,
      92,    -1,   118,    -1,   117,    -1,    91,    -1,   107,    -1,
     367,    -1,   366,   365,   367,    -1,   368,    -1,   368,    64,
     368,    -1,    28,   368,    -1,    23,   368,    -1,   371,    -1,
     372,    -1,   375,    -1,   369,    -1,   375,    39,   372,    -1,
       6,    -1,    20,    -1,     9,    -1,    10,    -1,    14,    -1,
      16,    -1,    37,    -1,    56,    -1,   119,    -1,    48,    -1,
      49,    -1,    50,    -1,    89,   374,   373,   392,    -1,    -1,
     373,    58,   374,    -1,   355,    -1,    97,    40,   355,    -1,
     388,    -1,   376,    -1,   377,    -1,   378,    -1,   388,   372,
      -1,   388,    89,   361,   204,   361,   392,    -1,   375,    39,
     379,    -1,   114,    -1,    69,    -1,    70,    -1,    72,    -1,
      74,    -1,    73,    -1,    71,    -1,   103,    -1,   104,    -1,
      -1,    86,   381,   382,    -1,    -1,   382,    58,    86,    -1,
      -1,   391,    -1,    -1,   385,    -1,    89,   355,   392,    -1,
      -1,    79,    -1,    -1,   388,    -1,    86,    -1,   375,    -1,
     372,    -1,   391,    57,    -1,    86,    -1,   110,    -1,   116,
      -1,     5,    -1
};

/* VBL_Y_RLINE[VBL_Y_N] -- source line where rule number VBL_Y_N was defined.  */
static const vbl_y_type_uint16 vbl_y_rline[] =
{
       0,   318,   318,   318,   373,   375,   380,   386,   388,   390,
     395,   397,   399,   404,   406,   411,   418,   423,   425,   433,
     437,   439,   445,   447,   452,   462,   472,   478,   494,   491,
     879,   885,   889,   891,   897,   898,   899,   900,   901,   902,
     903,   904,   905,   917,   913,   927,   934,   937,   939,   944,
     945,   946,   947,   948,   958,   976,   981,   955,  1067,  1068,
    1073,  1084,  1085,  1090,  1105,  1104,  1121,  1119,  1254,  1259,
    1267,  1282,  1289,  1290,  1301,  1299,  1503,  1515,  1516,  1526,
    1524,  1546,  1548,  1557,  1560,  1565,  1567,  1575,  1667,  1668,
    1670,  1672,  1674,  1676,  1680,  1682,  1691,  1694,  1701,  1702,
    1710,  1800,  1818,  1816,  1847,  1849,  1851,  1853,  1855,  1857,
    1859,  1861,  1863,  1865,  1867,  1869,  1871,  1876,  1886,  1888,
    1892,  1894,  1905,  1902,  2291,  2298,  2305,  2312,  2317,  2326,
    2332,  2342,  2383,  2385,  2389,  2391,  2396,  2404,  2406,  2410,
    2415,  2422,  2427,  2429,  2436,  2553,  2561,  2564,  2569,  2571,
    2579,  2705,  2707,  2711,  2713,  2717,  2719,  2725,  2726,  2728,
    2730,  2740,  2735,  2752,  2758,  2761,  2763,  2768,  2769,  2770,
    2771,  2772,  2773,  2774,  2775,  2776,  2777,  2778,  2784,  2788,
    2790,  2795,  2802,  2804,  2810,  2989,  2990,  2992,  2994,  3000,
    3001,  3003,  3005,  3009,  3011,  3016,  3023,  3025,  3031,  3200,
    3201,  3203,  3209,  3210,  3214,  3217,  3222,  3223,  3224,  3225,
    3226,  3227,  3232,  3231,  3241,  3239,  3277,  3275,  3440,  3446,
    3456,  3436,  3462,  3464,  3469,  3584,  3591,  3592,  3598,  3815,
    4029,  4033,  4061,  4063,  4065,  4070,  4098,  4130,  4166,  4172,
    4178,  4246,  4248,  4255,  4257,  4262,  4269,  4274,  4279,  4293,
    4365,  4385,  4392,  4394,  4399,  4406,  4437,  4438,  4440,  4445,
    4448,  4450,  4455,  4456,  4457,  4458,  4459,  4460,  4461,  4467,
    4475,  4479,  4487,  4483,  4516,  4520,  4527,  4528,  4535,  4539,
    4803,  4805,  4830,  4828,  5067,  5069,  5075,  5097,  5096,  5106,
    5106,  5117,  5119,  5126,  5132,  5116,  5151,  5155,  5157,  5165,
    5166,  5167,  5168,  5169,  5170,  5171,  5172,  5175,  5177,  5181,
    5187,  5231,  5233,  5278,  5280,  5285,  5286,  5287,  5288,  5289,
    5290,  5291,  5292,  5293,  5294,  5295,  5296,  5301,  5300,  5310,
    5310,  5323,  5321,  5464,  5467,  5474,  5479,  5487,  5503,  5502,
    5531,  5532,  5537,  5536,  5543,  5544,  5551,  5560,  5569,  5576,
    5595,  5599,  5603,  5607,  5614,  5629,  5645,  5646,  5652,  5672,
    5673,  5678,  5687,  5855,  5878,  6049,  6058,  6059,  6067,  6076,
    6084,  6073,  6102,  6108,  6104,  6132,  6136,  6152,  6150,  6219,
    6221,  6230,  6227,  6274,  6280,  6279,  6299,  6303,  6305,  6320,
    6341,  6350,  6445,  6451,  6452,  6459,  6460,  6466,  6471,  6473,
    6478,  6480,  6482,  6484,  6489,  6493,  6500,  6504,  6511,  6513,
    6517,  6521,  6525,  6532,  6536,  6543,  6545,  6552,  6557,  6559,
    6570,  6577,  6579,  6581,  6585,  6587,  6592,  6594,  6596,  6598,
    6603,  6605,  6612,  6614,  6618,  6623,  6629,  6639,  6666,  6909,
    6925,  6986,  6988,  6990,  6992,  6994,  6996,  7001,  7003,  7006,
    7008,  7010,  7012,  7017,  7033,  7036,  7050,  7059,  7073,  7140,
    7142,  7144,  7149,  7316,  7378,  7488,  7489,  7490,  7491,  7492,
    7493,  7494,  7495,  7496,  7501,  7500,  7505,  7507,  7515,  7516,
    7522,  7523,  7528,  7536,  7539,  7550,  7551,  7556,  7561,  7563,
    7577,  7585,  7590,  7595,  7600
};
#endif

#if VBL_Y_DEBUG || VBL_Y_ERROR_VERBOSE || VBL_Y_TOKEN_TABLE
/* VBL_Y_TNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at VBL_Y_NTOKENS, nonterminals.  */
static const char *const vbl_y_tname[] =
{
  "$end", "error", "$undefined", "tok_AND", "_BEGIN", "_END", "_EQSym",
  "_EXIT", "_FILE", "_GESym", "_GTSym", "_IN", "_INOUT", "_LABEL",
  "_LESym", "_LINKAGE", "_LTSym", "_NAND", "_IFT", "_NXOR", "_NESym",
  "_NEXT", "_NOR", "_NOT", "tok_NULL", "_OR", "_OUT", "_XOR", "ABS",
  "ACCESS", "AFTER", "ALIAS", "ALL", "ARCHITECTURE", "ARRAY", "ASSERT",
  "ATTRIBUTE", "AbstractLit", "Ampersand", "Apostrophe", "Arrow", "BLOCK",
  "BODY", "BUS", "_BUFFER", "Bar", "BasedInt", "BasedReal", "BitStringLit",
  "_TRUE", "_FALSE", "Box", "CASE", "COMPONENT", "CONFIGURATION",
  "CONSTANT", "CharacterLit", "Colon", "Comma", "DISCONNECT", "DOWNTO",
  "DecimalInt", "DecimalReal", "Dot", "DoubleStar", "ELSE", "ELSIF",
  "_ENTITY", "ERROR", "_EVENT", "_LEFT", "_LENGTH", "_RIGHT", "_HIGH",
  "_LOW", "FOR", "FUNCTION", "GENERATE", "GENERIC", "GUARDED", "IF", "IS",
  "_NS", "_PS", "_FS", "_MS", "Identifier", "_LIBRARY", "LOOP",
  "LeftParen", "MAP", "MOD", "Minus", "NEW", "OF", "ON", "OPEN", "OTHERS",
  "_PACKAGE", "PORT", "PROCEDURE", "PROCESS", "Plus", "_RANGE",
  "_REV_RANGE", "RECORD", "REGISTER", "REM", "REPORT", "_RETURN",
  "RightParen", "SELECT", "SEVERITY", "SIGNAL", "_STABLE", "SUBTYPE",
  "Semicolon", "Slash", "Star", "StringLit", "THEN", "TO", "TRANSPORT",
  "_TYPE", "UNITS", "UNTIL", "USE", "_VARIABLE", "VarAsgn", "WAIT",
  "WARNING", "WHEN", "WHILE", "WITH", "$accept", "design_file", "@1",
  "..design_unit..", "design_unit", "library_unit", "primary_unit",
  "secondary_unit", "library_clause", "logical_name_list",
  "...logical_name..", "context_clause", "..context_item..",
  "context_item", "use_clause", "configuration_declaration",
  "block_configuration", "package_declaration", "@2",
  "package_declarative_part", "..package_declarative_item..",
  "package_declarative_item", "package_body", "@3",
  "package_body_declarative_part", "..package_body_declarative_item..",
  "package_body_declarative_item", "component_instantiation_statement",
  "@4", "@5", "@6", ".port_map_aspect.", "port_map_aspect",
  ".generic_map_aspect.", "generic_map_aspect", "generate_statement", "@7",
  "unlabeled_generate_statement", "@8", "generation_scheme",
  "generate_parameter_specification", "association_list",
  "...association_element..", "association_element", "@9",
  "...selected_name..", "component_declaration", "@10",
  ".PORT__local_port_list.", "local_port_list", "...local_port_element..",
  "local_port_element", ".local_port_mode.",
  ".GENERIC__local_generic_list.", "local_generic_list",
  "...local_generic_element..", "local_generic_element",
  "attribute_declaration", "attribute_specification", "@11",
  "entity_class", "selected_name", "suffix", "prefix",
  "entity_declaration", "@12", ".constraint.", "constraint",
  "range_constraint", "range", "direction", ".generic_clause.",
  "generic_clause", ".port_clause.", "port_clause", "formal_port_list",
  "...formal_port_element..", "formal_port_element", "formal_generic_list",
  "...formal_generic_element..", "formal_generic_element", ".SIGNAL.",
  ".CONSTANT.", ".IN.", ".mode.", "architecture_body", "@13",
  "architecture_declarative_part", "..block_declarative_item..",
  "block_declarative_item", "designator", ".procedure_parameter_list.",
  "...procedure_parameter_element..", "procedure_parameter_element",
  ".procedure_parameter_object_class.", ".procedure_parameter_mode.",
  ".function_parameter_list.", "...function_parameter_element..",
  "function_parameter_element", ".function_parameter_object_class.",
  ".function_parameter_mode.", "subprogram_declarative_part",
  "subprogram_declarative_item", "subprogram_declaration", "@14",
  "subprogram_specification", "@15", "@16", "subprogram_body", "@17",
  "@18", "@19", ".designator.", "constant_declaration",
  "constant_VarAsgn__expression", ".VarAsgn__expression.",
  "variable_declaration", "signal_declaration", "type_declaration",
  "full_type_declaration", "type_definition", "subtype_declaration",
  "subtype_indication", "type_or_function_name", "scalar_type_definition",
  "enumeration_type_definition", "...enumeration_literal..",
  "enumeration_literal", "composite_type_definition",
  "array_type_definition", "unconstrained_array_definition",
  "constrained_array_definition", "index_subtype_definition",
  "index_constraint", "discrete_range", "type_mark", ".signal_kind.",
  "architecture_statement_part", "..concurrent_statement..",
  "concurrent_statement", "concurrent_assertion_statement",
  "unlabeled_concurrent_assertion_statement", "block_statement", "@20",
  "set_of_statements", "concurrent_signal_assignment_statement",
  "unlabeled_conditional_signal_assignment",
  "..waveform__WHEN__condition__ELSE..",
  "unlabeled_selected_signal_assignment", "@21",
  "...waveform__WHEN__choices..", "waveform__WHEN__choices",
  "process_statement", "@22", "@23", "unlabeled_process_statement", "@24",
  "@25", "@26", "@27", "process_declarative_part",
  "..process_declarative_item..", "process_declarative_item",
  ".sensitivity_list.", "sensitivity_list", "signal_list", "...name..",
  "sequence_of_statements", "sequential_statement", "loop_statement",
  "@28", "@29", "unlabeled_loop_statement", "@30", ".iteration_scheme.",
  "iteration_scheme", "loop_parameter_specification", "wait_statement",
  "@31", ".sensitivity_clause.", "sensitivity_clause", "@32",
  ".condition_clause.", "condition_clause", ".timeout_clause.",
  "timeout_clause", "time_label", "next_statement", "exit_statement",
  ".WHEN__condition.", "return_statement", ".expression.",
  "assertion_statement", "variable_assignment_statement",
  "procedure_call_statement", "signal_assignment_statement",
  "waveform_element", ".AFTER__delay_expression.", "delay_expression",
  "if_statement", "@33", "@34", "..ELSIF__THEN__seq_of_stmts..", "@35",
  ".ELSE__seq_of_stmts.", "case_statement", "@36",
  "..case_statement_alternative..", "case_statement_alternative", "@37",
  "waveform", "choices", "@38", "null_statement", "..Bar__choice..",
  "choice", "condition", ".REPORT__expression.", ".SEVERITY__expression.",
  "report__message", "severity__message", "expression",
  "relation..AND__relation..", "relation..OR__relation..",
  "relation.NAND_NOR_NXOR_relation.", "relation..XOR__relation..",
  "relation", "simple_expression", ".sign.term..add_op__term..",
  "adding_operator", "sign", "multiplying_operator", "term", "factor",
  "primary", "qualified_expression", "relational_operator", "literal",
  "aggregate", "...element_association..", "element_association", "name",
  "indexed_name", "slice_name", "attribute_name", "attribute_designator",
  "identifier_list", "@39", "...identifier..", ".label.",
  ".guard_expression.", "guard_expression", ".GUARDED.", ".simple_name.",
  "simple_name", "target", "a_label", "label", "RightParen_ERR",
  "Semicolon_ERR", "END_ERR", 0
};
#endif

# ifdef VBL_Y_PRINT
/* VBL_Y_TOKNUM[VBL_Y_LEX-NUM] -- Internal token number corresponding to
   token VBL_Y_LEX-NUM.  */
static const vbl_y_type_uint16 vbl_y_toknum[] =
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

/* VBL_Y_R1[VBL_Y_N] -- Symbol number of symbol that rule VBL_Y_N derives.  */
static const vbl_y_type_uint16 vbl_y_r1[] =
{
       0,   134,   136,   135,   137,   137,   138,   139,   139,   139,
     140,   140,   140,   141,   141,   142,   143,   144,   144,   145,
     146,   146,   147,   147,   148,   149,   149,   150,   152,   151,
     151,   153,   154,   154,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   157,   156,   156,   158,   159,   159,   160,
     160,   160,   160,   160,   162,   163,   164,   161,   165,   165,
     166,   167,   167,   168,   170,   169,   172,   171,   173,   173,
     174,   175,   176,   176,   178,   177,   177,   179,   179,   181,
     180,   182,   182,   183,   183,   184,   184,   185,   186,   186,
     186,   186,   186,   186,   187,   187,   188,   188,   189,   189,
     190,   191,   193,   192,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   195,   196,   196,
     197,   197,   199,   198,   198,   200,   200,   201,   201,   202,
     203,   203,   204,   204,   205,   205,   206,   207,   207,   208,
     208,   209,   210,   210,   211,   211,   212,   212,   213,   213,
     214,   215,   215,   216,   216,   217,   217,   218,   218,   218,
     218,   220,   219,   219,   221,   222,   222,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   224,   225,
     225,   225,   226,   226,   227,   228,   228,   228,   228,   229,
     229,   229,   229,   230,   230,   230,   231,   231,   232,   233,
     233,   233,   234,   234,   235,   235,   236,   236,   236,   236,
     236,   236,   238,   237,   240,   239,   241,   239,   243,   244,
     245,   242,   246,   246,   247,   248,   249,   249,   250,   251,
     252,   253,   254,   254,   254,   255,   256,   256,   257,   258,
     259,   260,   260,   261,   261,   262,   263,   263,   264,   265,
     266,   267,   268,   268,   268,   269,   270,   270,   270,   271,
     272,   272,   273,   273,   273,   273,   273,   273,   273,   274,
     274,   275,   277,   276,   278,   279,   279,   279,   279,   280,
     281,   281,   283,   282,   284,   284,   285,   287,   286,   288,
     286,   290,   291,   292,   293,   289,   294,   295,   295,   296,
     296,   296,   296,   296,   296,   296,   296,   297,   297,   298,
     299,   300,   300,   301,   301,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   304,   303,   305,
     303,   307,   306,   308,   308,   309,   309,   310,   312,   311,
     313,   313,   315,   314,   316,   316,   317,   318,   318,   319,
     320,   320,   320,   320,   321,   322,   323,   323,   324,   325,
     325,   326,   327,   328,   329,   330,   331,   331,   332,   334,
     335,   333,   336,   337,   336,   338,   338,   340,   339,   341,
     341,   343,   342,   344,   346,   345,   347,   348,   348,   349,
     349,   349,   350,   351,   351,   352,   352,   353,   354,   354,
     355,   355,   355,   355,   356,   356,   357,   357,   358,   358,
     358,   358,   358,   359,   359,   360,   360,   361,   362,   362,
     362,   363,   363,   363,   364,   364,   365,   365,   365,   365,
     366,   366,   367,   367,   367,   367,   368,   368,   368,   368,
     369,   370,   370,   370,   370,   370,   370,   371,   371,   371,
     371,   371,   371,   372,   373,   373,   374,   374,   375,   375,
     375,   375,   376,   377,   378,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   381,   380,   382,   382,   383,   383,
     384,   384,   385,   386,   386,   387,   387,   388,   389,   389,
     390,   391,   392,   393,   394
};

/* VBL_Y_R2[VBL_Y_N] -- Number of symbols composing right hand side of rule VBL_Y_N.  */
static const vbl_y_type_uint8 vbl_y_r2[] =
{
       0,     2,     0,     3,     0,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     0,     3,     1,
       0,     2,     1,     1,     4,     9,     2,     5,     0,     8,
       2,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     9,     3,     1,     0,     2,     1,
       1,     1,     1,     1,     0,     0,     0,     8,     0,     1,
       5,     0,     1,     5,     0,     3,     0,     8,     2,     2,
       3,     2,     0,     3,     0,     4,     1,     0,     3,     0,
       8,     0,     5,     2,     2,     0,     3,     7,     0,     1,
       1,     1,     1,     1,     0,     5,     2,     2,     0,     3,
       7,     5,     0,    10,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     0,     9,     2,     0,     1,     1,     3,     2,
       1,     3,     1,     1,     0,     1,     5,     0,     1,     5,
       3,     2,     0,     3,     8,     1,     2,     2,     0,     3,
       7,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       1,     0,    12,     2,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     0,
       4,     3,     0,     3,     6,     0,     1,     1,     1,     0,
       1,     1,     1,     0,     4,     3,     0,     3,     6,     0,
       1,     1,     0,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     4,     0,     6,     0,     0,
       0,    11,     0,     1,     7,     2,     0,     2,     7,     8,
       1,     5,     1,     1,     2,     5,     3,     2,     1,     1,
       4,     0,     3,     1,     1,     1,     1,     1,     6,     4,
       3,     3,     1,     2,     1,     1,     0,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     0,    10,     1,     2,     1,     2,     1,     6,
       0,     5,     0,    10,     0,     3,     3,     0,     3,     0,
       2,     0,     0,     0,     0,    13,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     3,
       2,     0,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       2,     0,     8,     0,     1,     2,     2,     3,     0,     6,
       0,     1,     0,     3,     0,     1,     2,     0,     1,     3,
       1,     1,     1,     1,     4,     4,     0,     2,     3,     0,
       1,     5,     4,     2,     4,     2,     0,     2,     2,     0,
       0,    11,     0,     0,     6,     0,     2,     0,     9,     0,
       2,     0,     5,     1,     0,     3,     2,     0,     3,     1,
       1,     1,     1,     0,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     2,     2,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     0,     3,     1,     3,     1,     1,
       1,     1,     2,     6,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     0,     1,
       0,     1,     3,     0,     1,     0,     1,     1,     1,     1,
       2,     1,     1,     1,     1
};

/* VBL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when VBL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const vbl_y_type_uint16 vbl_y_defact[] =
{
       2,     0,    20,     1,    20,     0,    19,     3,    20,     9,
       0,     0,     0,     0,     6,     7,     8,    11,    12,    14,
      10,    13,     0,     0,    22,    21,    23,     5,   163,     0,
      26,     0,   124,   487,     0,    30,     0,     0,    17,     0,
      77,     0,   120,     0,     0,   122,    45,     0,    28,    16,
     493,    15,     0,     0,     0,     0,   134,    43,    32,     0,
       0,    24,   119,   117,   118,   161,     0,     0,   137,   135,
      47,     0,     0,    18,    78,   165,     0,     0,     0,     0,
       0,   138,     0,    46,   494,   485,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    39,    36,    40,    38,
     212,    37,    41,    34,   230,    35,     0,     0,   491,     0,
     485,     0,   154,     0,   148,     0,     0,     0,   485,   485,
      48,    49,   212,    50,    53,    51,    52,     0,   486,     0,
     487,   102,    79,     0,   178,   216,   214,   474,     0,     0,
       0,     0,   260,     0,     0,   174,   172,   173,   166,   175,
     176,   167,   170,   168,   169,   171,     0,     0,   492,   147,
       0,   146,     0,   140,   145,   152,     0,   142,     0,     0,
       0,   204,    29,    42,     0,     0,    94,     0,   193,   179,
     476,     0,     0,     0,   213,     0,     0,   177,     0,     0,
      25,   136,   153,   155,     0,   141,     0,   123,    44,     0,
       0,     0,     0,    81,   125,   255,     0,     0,     0,   215,
     475,   125,     0,     0,   125,   255,     0,     0,     0,     0,
     232,   239,   233,   245,   246,   247,   485,     0,     0,   487,
       0,     0,   266,   267,   261,   263,   270,   262,   265,   276,
     278,   264,     0,   271,   489,   488,   459,   460,   461,   458,
       0,    64,     0,     0,    27,   149,   156,     0,   139,     0,
     157,   218,   210,   211,   205,   206,   207,   208,   209,   101,
       0,     0,     0,     0,     0,     0,     0,   126,   127,     0,
     200,   201,   196,     0,     0,     0,   187,   188,   186,   182,
       0,     0,   256,   235,   125,   237,   234,     0,     0,   244,
     243,   241,   231,     0,   268,     0,     0,   447,   450,   451,
     452,   448,   425,   424,   449,   393,   400,   401,   402,   403,
     408,   415,   417,     0,   418,   430,   432,   439,   436,   437,
     438,     0,   456,   454,   282,   291,   290,     0,     0,   462,
     483,   480,     0,   269,   275,   277,     0,    54,   490,   125,
     125,   143,   158,   160,   159,     0,   313,     0,     0,     0,
      98,     0,     0,     0,     0,     0,   461,   129,     0,     0,
     195,     0,     0,   217,   181,     0,     0,   477,   257,   258,
     226,   236,   252,     0,     0,   254,   438,   458,     0,     0,
     162,   435,   434,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   441,   443,   444,   445,   446,
     442,     0,   423,   422,   421,     0,   419,   428,   429,   427,
     426,     0,     0,     0,     0,     0,     0,   307,   466,   467,
     471,   468,   470,   469,   472,   473,   465,   464,   415,   484,
     280,     0,     0,   481,     0,     0,    65,     0,   288,    61,
     226,   226,   125,   329,   113,   105,   116,   115,   110,   104,
     107,   106,   108,   112,   109,   114,   111,     0,    97,     0,
      96,     0,     0,     0,    85,     0,     0,   128,   133,   132,
       0,   225,   224,   194,   199,   202,   180,   185,   189,     0,
       0,     0,   251,     0,   253,   249,     0,   240,   397,   394,
       0,     0,   405,   407,   414,   404,   409,   412,   411,   410,
     406,   413,   416,   420,   431,   433,   440,   457,     0,   453,
       0,     0,   292,   308,     0,     0,     0,   272,     0,    68,
      69,   392,    66,     0,    55,    62,     0,   150,   256,   478,
     478,     0,     0,     0,   359,   338,     0,   314,   320,   333,
     326,   321,   322,   323,   315,   316,   325,   317,   318,   319,
     324,   488,     0,   327,     0,    95,   153,   155,    84,     0,
      83,     0,    80,   131,   197,   203,     0,   183,   190,   192,
     191,     0,   227,   229,     0,   250,   242,   398,   399,   396,
     361,   455,     0,     0,   311,   297,     0,   383,     0,   366,
     482,   260,     0,   260,     0,    58,   228,   226,   356,   479,
     356,   386,   377,     0,     0,   360,   340,   222,     0,     0,
     330,     0,   334,   363,     0,     0,   333,     0,    99,     0,
      82,   151,    88,   125,   125,   248,   483,   309,     0,   310,
       0,   296,   463,     0,   279,     0,   365,     0,     0,    70,
     438,     0,     0,     0,    56,    59,   144,     0,     0,     0,
       0,   369,   358,   342,   344,   341,   223,   220,     0,   336,
     335,   331,     0,     0,   328,   103,   125,    86,    89,    91,
      93,    90,    92,     0,   198,   184,     0,   311,   293,   303,
     304,   305,   306,   299,   300,   301,   302,   298,     0,     0,
     367,     0,     0,     0,    72,    76,   438,     0,     0,   357,
     355,   354,     0,   313,     0,     0,   347,   345,     0,     0,
     313,   364,   362,   226,   125,   284,     0,   312,   313,   281,
     352,   351,   350,   353,   368,   478,   478,    63,     0,    71,
      74,     0,    57,     0,   379,   329,   343,   346,     0,     0,
     348,   221,   337,   329,   100,   256,     0,     0,   329,     0,
       0,    72,     0,     0,   390,     0,   384,   389,   391,     0,
     372,     0,   339,     0,    87,     0,   283,   286,     0,   273,
      67,    73,    75,    60,   381,   387,   380,     0,   375,   349,
     478,   285,     0,   313,   385,     0,   313,     0,     0,     0,
     478,   329,     0,   378,   329,     0,     0,   332,     0,   388,
     373,     0,   295,   313,   371,   329
};

/* VBL_Y_DEFGOTO[NTERM-NUM].  */
static const vbl_y_type_int16 vbl_y_defgoto[] =
{
      -1,     1,     2,     7,     8,    14,    15,    16,    24,    39,
      49,     5,     6,    25,    26,    17,    77,    18,    58,    71,
      72,    95,    19,    70,    82,    83,   120,   232,   449,   605,
     708,   654,   655,   534,   535,   233,   342,   446,   603,   447,
     529,   703,   739,   704,   762,    52,    96,   176,   273,   473,
     570,   474,   683,   203,   359,   470,   360,    97,    98,   175,
     467,    40,    63,    41,    20,    56,   276,   277,   278,   382,
     480,    68,    69,    80,    81,   166,   195,   167,   113,   161,
     114,   168,   115,   257,   355,    21,    75,   106,   107,   148,
     135,   209,   375,   289,   290,   581,   207,   371,   282,   283,
     576,   199,   264,    99,   141,   122,   179,   178,   123,   356,
     546,   718,   667,   101,   369,   490,   152,   102,   103,   104,
     219,   105,   212,   213,   220,   221,   389,   301,   222,   223,
     224,   225,   383,   298,   384,   214,   380,   185,   647,   234,
     235,   236,   237,   601,   648,   238,   239,   525,   240,   426,
     756,   725,   241,   346,   242,   336,   427,   595,   728,   778,
     640,   641,   697,   522,   523,   593,   639,   453,   547,   548,
     626,   549,   620,   720,   621,   622,   669,   550,   616,   664,
     665,   714,   716,   717,   749,   750,   734,   551,   552,   658,
     553,   614,   554,   555,   556,   557,   597,   646,   700,   558,
     713,   770,   788,   813,   798,   559,   660,   769,   744,   793,
     726,   765,   785,   560,   794,   766,   530,   394,   501,   499,
     589,   531,   316,   317,   318,   319,   320,   321,   322,   415,
     323,   421,   324,   325,   326,   327,   411,   328,   329,   425,
     333,   330,   246,   247,   248,   437,   138,   180,   210,   608,
     442,   443,   440,   127,   249,   562,   563,   252,   159,    51,
      85
};

/* VBL_Y_PACT[STATE-NUM] -- Index in VBL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define VBL_Y_PACT_NINF -549
static const vbl_y_type_int16 vbl_y_pact[] =
{
    -549,    71,  -549,  -549,   107,    78,   162,  -549,   107,  -549,
      80,    87,   114,   171,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,   115,   119,  -549,  -549,  -549,  -549,  -549,    36,
    -549,   124,  -549,  -549,   131,  -549,   123,   153,  -549,   130,
    -549,   202,  -549,   119,   188,  -549,  -549,   226,  -549,   262,
    -549,  -549,    -2,   183,   245,   258,   264,  -549,  -549,   267,
     119,  -549,  -549,  -549,   291,  -549,   284,   271,   272,  -549,
    -549,   361,   332,  -549,  -549,  -549,   287,   361,   133,    60,
     361,  -549,   361,   296,  -549,   119,   361,   290,   293,   298,
     303,   303,   305,   318,   321,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,   374,   312,  -549,   361,
     119,   299,  -549,   299,  -549,   305,   130,    49,   119,   119,
    -549,  -549,   301,  -549,  -549,  -549,  -549,   130,  -549,   130,
     337,  -549,  -549,   346,  -549,  -549,  -549,  -549,   356,   333,
     335,   130,  -549,   130,   305,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,   345,   130,  -549,  -549,
     130,   130,   366,  -549,  -549,  -549,   299,  -549,   305,   130,
     130,  -549,  -549,  -549,   119,   336,   351,   119,   342,   344,
    -549,   119,   119,    52,  -549,   361,    96,  -549,   383,   130,
    -549,  -549,   388,   433,   130,   130,   389,  -549,  -549,   185,
     130,   119,   359,   358,   221,  -549,    65,   341,    43,  -549,
     404,   221,   130,   119,   221,   380,   130,   378,    14,   130,
    -549,  -549,  -549,  -549,  -549,  -549,   119,   130,   860,   418,
     803,   860,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,   375,  -549,  -549,   443,  -549,  -549,  -549,   399,
     476,   309,   437,   119,  -549,  -549,  -549,   119,  -549,    49,
     317,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
     438,   215,   402,   361,   860,   860,   370,  -549,  -549,   299,
    -549,  -549,  -549,   305,   119,   299,  -549,  -549,  -549,  -549,
     305,   414,    20,  -549,   221,  -549,  -549,   860,   411,  -549,
    -549,  -549,  -549,   130,  -549,   465,   465,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,   396,   503,   483,  -549,   484,
     434,   522,   141,   883,   283,  -549,   448,  -549,  -549,  -549,
     477,   480,  -549,  -549,  -549,  -549,  -549,   884,   803,  -549,
     444,   436,   128,  -549,  -549,  -549,   375,   308,  -549,   221,
     221,  -549,  -549,  -549,  -549,   119,  -549,   757,   299,   299,
    -549,   305,    50,   474,   299,   146,   199,  -549,   860,   130,
    -549,   -43,   472,  -549,  -549,   -43,   482,  -549,  -549,  -549,
     405,  -549,  -549,   299,   299,  -549,    54,   292,   119,   167,
    -549,  -549,  -549,   415,   425,   860,   860,   860,   860,   860,
     860,   860,   860,   860,   860,  -549,  -549,  -549,  -549,  -549,
    -549,   860,  -549,  -549,  -549,   883,   283,  -549,  -549,  -549,
    -549,   883,   465,   576,   860,   187,   432,   456,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,   487,  -549,
    -549,   860,   546,  -549,   466,   860,  -549,   478,  -549,   475,
     405,   405,   221,   664,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,   485,  -549,   130,
     130,   499,   299,   299,  -549,   305,   130,  -549,  -549,  -549,
     860,  -549,  -549,  -549,   173,   554,  -549,   225,   410,   860,
     130,   463,  -549,   826,  -549,  -549,    14,  -549,  -549,  -549,
     109,   130,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,   283,  -549,  -549,  -549,  -549,   803,  -549,
     152,   119,  -549,  -549,   860,   860,   299,  -549,   558,  -549,
    -549,  -549,  -549,   481,  -549,  -549,   130,  -549,    20,   287,
     287,   130,   860,   860,   860,  -549,   361,  -549,  -549,   118,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,    37,    24,  -549,   453,  -549,   388,   433,  -549,   130,
     130,   516,  -549,  -549,  -549,  -549,   119,  -549,  -549,  -549,
    -549,   119,  -549,  -549,   119,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,   562,   468,   159,  -549,   299,  -549,   -36,   557,
    -549,  -549,   860,  -549,   494,   496,  -549,   405,   467,  -549,
     467,  -549,  -549,   479,   130,  -549,   501,   303,   511,   860,
    -549,   512,  -549,  -549,   860,   860,   118,   130,  -549,   119,
    -549,   488,   319,   221,   221,  -549,   444,  -549,   119,  -549,
     599,   156,  -549,   860,  -549,   567,  -549,    98,   361,  -549,
      99,   361,   860,   519,  -549,  -549,  -549,   860,   130,   130,
     531,  -549,  -549,  -549,   489,  -549,  -549,  -549,   611,  -549,
    -549,  -549,   130,   130,  -549,  -549,   221,  -549,  -549,  -549,
    -549,  -549,  -549,   119,  -549,  -549,   860,   159,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,   559,   387,
    -549,   582,   549,   299,   569,  -549,    44,   539,   130,  -549,
    -549,  -549,   504,  -549,   119,   860,   561,  -549,   130,   860,
    -549,  -549,  -549,   405,   221,  -549,   510,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,   287,   287,  -549,   860,  -549,
    -549,   860,  -549,   772,  -549,   553,  -549,  -549,   860,   130,
    -549,  -549,  -549,   696,  -549,    20,   178,   772,   714,   130,
     130,   569,   860,   299,  -549,   592,  -549,  -549,   443,    30,
    -549,   387,  -549,   555,  -549,   860,  -549,  -549,   361,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,   601,   270,  -549,
     287,  -549,   533,  -549,   610,   130,  -549,   860,   361,   130,
     287,   297,   772,  -549,   756,   524,   578,  -549,   130,  -549,
    -549,   130,  -549,  -549,  -549,   689
};

/* VBL_Y_PGOTO[NTERM-NUM].  */
static const vbl_y_type_int16 vbl_y_pgoto[] =
{
    -549,  -549,  -549,   651,   661,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,   -73,   -94,   -68,  -549,  -549,   565,  -549,  -549,  -549,
    -549,    33,  -549,  -549,  -549,  -549,   111,   -97,   -93,  -549,
    -549,   615,  -549,  -549,  -549,  -549,  -154,  -549,  -358,  -238,
     243,  -549,  -549,  -549,  -549,  -549,  -549,   424,  -549,  -549,
     497,  -336,  -255,   126,  -549,  -549,  -549,  -549,  -549,  -549,
     -87,  -549,  -549,   208,  -549,  -549,  -549,  -549,   214,  -549,
    -549,  -549,  -549,   -80,  -549,   614,  -549,  -549,   -92,  -549,
    -549,  -549,  -549,   -78,  -549,  -427,  -187,   595,   -77,  -549,
    -549,   -74,  -354,  -549,  -549,  -549,  -549,   209,  -549,  -549,
    -549,  -549,  -549,  -549,  -548,  -103,  -492,  -549,   564,  -549,
    -549,   460,  -549,  -549,   120,  -549,   461,  -549,   471,  -549,
    -549,   -61,  -549,  -549,  -549,   372,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,    12,    40,  -438,  -549,  -549,
    -549,  -549,   104,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,   -39,  -549,  -549,   127,
    -549,  -549,  -161,  -549,  -549,  -549,  -549,  -549,  -549,  -549,
    -549,  -549,  -549,  -549,  -549,  -549,  -549,  -549,   -35,  -549,
    -466,   -24,  -549,  -549,  -549,   -66,  -498,  -549,  -549,  -549,
    -549,   -84,  -549,  -549,  -549,  -549,   608,  -256,  -549,  -549,
    -549,  -549,  -276,   324,  -257,  -549,  -549,  -499,  -164,  -549,
     222,  -128,  -549,  -549,  -232,  -549,   -76,  -549,  -549,  -509,
    -549,  -549,   103,    -6,     9,  -179,  -166,   -75,  -111,   -52,
     -69
};

/* VBL_Y_TABLE[VBL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what VBL_Y_DEFACT says.
   If VBL_Y_TABLE_NINF, syntax error.  */
#define VBL_Y_TABLE_NINF -492
static const vbl_y_type_int16 vbl_y_table[] =
{
      61,   109,   160,   121,   136,   124,   125,   250,   110,   126,
     146,   118,   266,   119,   147,   150,   361,   129,   365,   365,
     251,    34,   244,   536,   537,   243,   475,   149,   494,   151,
     154,   610,    42,   155,   495,    84,   364,   367,   624,   162,
     156,   365,   366,   366,   285,   613,   607,   416,   391,   392,
     164,   472,    54,   216,   649,   194,    60,   292,   245,   598,
     295,   116,    64,   378,   163,   366,   279,   158,   188,    42,
     299,     3,   250,    50,   204,   172,   337,   173,   211,     9,
      50,    28,   438,   423,   740,   339,   217,   244,    30,   184,
     243,   187,   196,   423,   128,   643,   131,   227,   286,   227,
     300,  -259,   262,  -274,   157,   190,   263,    -4,   191,   192,
     294,    10,   169,   170,    50,    32,   226,   197,   198,   128,
     280,   265,   267,   347,    46,   268,   379,   128,   128,  -185,
      43,   228,    11,   228,   111,  -151,  -151,   254,   423,   513,
     381,   218,   258,   259,   315,    12,   332,   334,   269,   117,
     349,  -199,   625,    50,   350,   512,   287,   493,   672,   709,
     293,   743,   165,   165,   296,   515,    29,   302,   370,   386,
     288,   752,    35,    31,   374,   304,    13,   587,   281,   412,
     656,   373,   229,   200,   229,   230,   205,   230,   112,   261,
     205,   215,    87,   618,   385,   450,   451,  -289,   337,  -289,
      33,    38,   275,   444,   363,    33,   478,   372,   445,    47,
     270,    89,    45,    36,   376,    62,   358,   638,    44,  -153,
     303,    87,   205,   339,   573,   496,   759,   760,   280,   231,
     635,   231,    90,   413,    48,   128,   775,   365,    33,   588,
      89,   230,  -130,   414,   767,   518,    50,   468,   469,    22,
     619,   390,   452,   477,   332,   367,    91,    37,   767,   516,
     483,   366,   205,   774,   486,    53,   205,   479,   596,    33,
     112,    93,   491,   492,    55,   745,  -130,   158,   497,    94,
     286,   799,   753,   144,   481,   471,   281,  -130,    23,   244,
     758,   808,   494,   205,    50,   475,   754,   158,   538,   805,
      93,  -153,  -382,   767,   539,  -130,   387,    57,    94,  -130,
     274,   361,   144,   143,   519,  -130,  -164,   482,   540,   484,
      59,   541,  -488,   487,   275,   561,    65,  -130,   352,   353,
     678,   679,   228,    86,   680,   796,   797,   -31,   287,    66,
     517,   592,    67,   354,   228,   681,   365,   337,    87,   542,
     341,    89,   288,    73,  -121,   801,   244,   526,   804,    76,
      78,   568,   569,   682,   205,    88,    84,    89,    87,  -255,
     366,    79,    90,   108,   417,   815,   130,   543,   142,   132,
    -255,   338,   171,   229,   133,    88,   230,    89,    90,   134,
     418,   137,   245,   594,   174,    33,    91,   215,   230,   571,
     419,   420,  -255,   177,   139,   582,   544,   140,    90,   158,
    -287,    93,    91,   181,   182,   600,   183,   565,   566,    94,
     189,   578,   579,   193,   572,    92,   545,    93,  -382,   202,
     201,   206,    91,   208,   332,    94,   580,   398,   583,   144,
     253,   599,   231,   112,   256,    92,   260,    93,   271,   590,
     284,   399,   400,   401,   694,    94,   402,   272,   612,   403,
     615,   404,   291,   365,   609,   609,  -238,   297,   250,   730,
     731,   732,   733,   633,   650,  -491,   335,   617,   634,   684,
     685,   251,   337,   244,   606,   642,   243,   366,   338,   611,
     340,   362,   771,   405,   348,   357,   406,   407,   368,   385,
     377,   408,   307,   409,   393,   388,   395,   410,   396,   623,
     687,   397,   422,   308,   309,   310,   423,   630,   631,   245,
     424,   311,   723,   439,   706,   441,   676,   476,   405,   485,
     666,   406,   407,   489,   498,   670,   408,   500,   409,   488,
     599,   673,   410,   520,   689,   521,   644,   478,   690,   692,
     527,    33,   528,   533,   230,   532,   567,   584,  -370,   698,
     539,   691,   662,   693,   695,   575,   564,   696,   705,   602,
     755,   604,   627,   632,   540,   675,   636,   541,   637,   701,
     724,   244,   702,   652,   314,   205,   594,   645,   228,   244,
     205,   650,   737,   215,   244,   653,   663,   668,   657,   661,
     671,   165,   599,   688,   699,   542,   710,   711,   479,   707,
     706,   387,   712,   706,   715,   768,   385,   561,  -370,  -370,
     721,   722,   719,   735,   729,   561,   736,   738,   741,   768,
     561,   747,   784,   543,   800,   743,   748,   244,   205,   229,
     244,   757,   230,   790,   810,   428,   429,   430,   431,   432,
     433,   244,   783,   795,   705,   802,   742,   705,   811,    27,
     609,   609,   544,     4,   677,   230,   751,   781,   763,  -219,
     761,   539,   145,   561,   768,    74,   561,   628,   782,   434,
     435,   524,   545,   351,   773,   540,   100,   561,   541,   255,
     436,   599,   205,   629,  -374,   577,   539,   772,   574,   228,
     787,    84,   153,   539,   776,   586,   186,   779,   780,   792,
     540,   343,   344,   541,   791,   609,   542,   540,   448,  -294,
     541,   539,   345,   651,   228,   609,   746,   727,   387,   806,
     674,   228,   789,   777,   786,   540,   809,   659,   541,   686,
     591,   542,     0,   803,   543,   514,     0,   807,   542,   228,
     229,     0,     0,   230,  -374,  -374,   812,     0,     0,   814,
       0,  -376,     0,   539,     0,     0,   542,     0,     0,   543,
     454,     0,     0,   544,     0,   229,   543,   540,   230,     0,
     541,     0,   229,     0,     0,   230,     0,     0,     0,     0,
     455,   228,     0,   545,   543,     0,     0,     0,   544,     0,
     229,     0,     0,   230,     0,   544,     0,     0,   542,   307,
     456,   457,   458,     0,     0,     0,     0,     0,   545,     0,
     308,   309,   310,   544,   459,   545,   305,     0,   311,     0,
       0,   306,     0,   460,     0,     0,   543,     0,     0,     0,
     307,     0,   229,   545,     0,   230,     0,     0,     0,   305,
       0,   308,   309,   310,   306,   461,     0,   462,    33,   311,
       0,     0,     0,   307,     0,   544,     0,     0,     0,   764,
     463,     0,   464,     0,   308,   309,   310,   585,     0,     0,
     465,     0,   311,   305,   466,   545,     0,     0,   306,    33,
       0,   314,   230,     0,     0,   312,     0,   307,     0,     0,
     331,     0,     0,     0,     0,   313,   305,     0,   308,   309,
     310,   306,    33,     0,     0,   230,   311,     0,   312,     0,
     307,     0,   314,     0,     0,     0,     0,     0,   313,     0,
       0,   308,   309,   310,     0,     0,     0,     0,     0,   311,
       0,     0,     0,     0,     0,   314,    33,     0,     0,   230,
       0,     0,   312,   428,   429,   430,   431,   432,   433,     0,
       0,     0,   313,     0,     0,     0,     0,     0,     0,    33,
       0,     0,   230,     0,     0,     0,     0,     0,     0,   314,
       0,     0,     0,     0,     0,     0,     0,   434,   435,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   436,     0,
       0,     0,   314,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511
};

static const vbl_y_type_int16 vbl_y_check[] =
{
      52,    76,   113,    83,    91,    83,    83,   186,    77,    83,
     107,    80,   199,    82,   107,   107,   271,    86,   274,   275,
     186,    12,   186,   450,   451,   186,   362,   107,   386,   107,
     107,   540,    23,   107,   388,     5,   274,   275,    14,   115,
     109,   297,   274,   275,     1,   543,   538,   323,   305,   306,
       1,     1,    43,     1,   602,   166,    58,   211,   186,   525,
     214,     1,    53,    43,   116,   297,     1,   110,   144,    60,
      56,     0,   251,   116,   177,   127,    39,   129,   181,     1,
     116,     1,   338,    39,    40,   249,    34,   251,     1,   141,
     251,   143,   168,    39,    85,   131,    87,     1,    55,     1,
      86,     5,   199,     5,   110,   157,   199,     0,   160,   161,
     213,    33,   118,   119,   116,     1,   185,   169,   170,   110,
      55,   199,   199,   251,     1,   199,   106,   118,   119,    86,
      94,    35,    54,    35,     1,    86,    86,   189,    39,   415,
     294,    89,   194,   195,   228,    67,   230,   231,   200,    89,
     253,    86,   128,   116,   257,   411,   113,   103,   624,   657,
     212,   131,   113,   113,   216,   422,    86,   219,   279,   297,
     127,   719,     1,    86,   285,   227,    98,    68,   113,    38,
     607,   284,    86,   174,    86,    89,   177,    89,    55,     4,
     181,   182,    36,    75,   297,   349,   350,   101,    39,   101,
      86,    86,   103,    75,   273,    86,    60,   283,    80,    86,
     201,    55,    81,    42,   290,    32,     1,    58,    94,    86,
     226,    36,   213,   387,   480,    58,   735,   736,    55,   133,
     584,   133,    76,    92,    81,   226,    58,   493,    86,   130,
      55,    89,    43,   102,   743,    58,   116,   358,   359,    87,
     132,   303,   355,   364,   338,   493,   100,    86,   757,   423,
     371,   493,   253,   755,   375,    63,   257,   121,   524,    86,
      55,   115,   383,   384,    86,   713,    77,   110,   389,   123,
      55,   790,   720,   127,   368,   361,   113,    88,   126,   453,
     728,   800,   650,   284,   116,   631,   723,   110,   452,   797,
     115,    86,     5,   802,     7,   106,   297,    81,   123,   110,
      89,   566,   127,     1,   425,   116,     4,   369,    21,   371,
      58,    24,    14,   375,   103,   453,    81,   128,    11,    12,
      11,    12,    35,     1,    15,    65,    66,     5,   113,    81,
     424,   520,    78,    26,    35,    26,   602,    39,    36,    52,
      41,    55,   127,    86,    63,   793,   520,   441,   796,    75,
      89,   472,   473,    44,   355,    53,     5,    55,    36,    77,
     602,    99,    76,    86,    91,   813,    86,    80,     4,    86,
      88,    89,    81,    86,    86,    53,    89,    55,    76,    86,
     107,    86,   520,   521,    57,    86,   100,   388,    89,   475,
     117,   118,   110,    57,    86,   489,   109,    86,    76,   110,
     101,   115,   100,    57,    81,   526,    81,   469,   470,   123,
      75,    11,    12,    57,   476,   113,   129,   115,   131,    78,
      94,    89,   100,    89,   518,   123,    26,     3,   490,   127,
      57,   525,   133,    55,    11,   113,    57,   115,    89,   501,
     109,    17,    18,    19,   641,   123,    22,    99,   542,    25,
     544,    27,    58,   719,   539,   540,    86,    89,   647,    82,
      83,    84,    85,   576,   602,    57,   101,   546,   581,   633,
     634,   647,    39,   647,   536,   596,   647,   719,    89,   541,
      14,    89,   748,     6,    57,    57,     9,    10,   128,   602,
      86,    14,    37,    16,   108,    94,     3,    20,    25,   561,
     638,    27,    64,    48,    49,    50,    39,   569,   570,   647,
      40,    56,   676,    79,   652,    89,   629,    53,     6,    57,
     617,     9,    10,   128,   119,   619,    14,   112,    16,    57,
     624,   625,    20,   111,   641,    89,   598,    60,   641,   641,
       4,    86,    86,    78,    89,    77,    57,    94,     5,   643,
       7,   641,   614,   641,   641,    11,    81,   641,   652,    11,
     724,    90,   119,    57,    21,   627,    14,    24,   110,   648,
     683,   745,   651,    89,   119,   576,   714,    30,    35,   753,
     581,   719,   703,   584,   758,    99,    95,    86,   131,   120,
      88,   113,   686,     4,    37,    52,   658,   659,   121,    90,
     738,   602,    81,   741,   125,   743,   719,   745,    65,    66,
     672,   673,    11,    41,    65,   753,    77,    58,    89,   757,
     758,   715,    40,    80,   101,   131,    75,   801,   629,    86,
     804,   131,    89,    88,   120,    69,    70,    71,    72,    73,
      74,   815,   763,    52,   738,    45,   708,   741,    80,     8,
     735,   736,   109,     2,   631,    89,   718,   761,   741,     5,
     738,     7,   107,   801,   802,    60,   804,   566,   762,   103,
     104,   438,   129,   259,   753,    21,    72,   815,    24,   192,
     114,   775,   683,   567,     5,   487,     7,   749,   484,    35,
     769,     5,   107,     7,   756,   496,   142,   759,   760,   778,
      21,   251,   251,    24,   775,   790,    52,    21,   346,     5,
      24,     7,   251,   603,    35,   800,   714,   687,   719,   798,
     626,    35,   771,   757,   769,    21,   802,   610,    24,   636,
     518,    52,    -1,   795,    80,   421,    -1,   799,    52,    35,
      86,    -1,    -1,    89,    65,    66,   808,    -1,    -1,   811,
      -1,     5,    -1,     7,    -1,    -1,    52,    -1,    -1,    80,
      13,    -1,    -1,   109,    -1,    86,    80,    21,    89,    -1,
      24,    -1,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      33,    35,    -1,   129,    80,    -1,    -1,    -1,   109,    -1,
      86,    -1,    -1,    89,    -1,   109,    -1,    -1,    52,    37,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,   129,    -1,
      48,    49,    50,   109,    67,   129,    23,    -1,    56,    -1,
      -1,    28,    -1,    76,    -1,    -1,    80,    -1,    -1,    -1,
      37,    -1,    86,   129,    -1,    89,    -1,    -1,    -1,    23,
      -1,    48,    49,    50,    28,    98,    -1,   100,    86,    56,
      -1,    -1,    -1,    37,    -1,   109,    -1,    -1,    -1,    97,
     113,    -1,   115,    -1,    48,    49,    50,    51,    -1,    -1,
     123,    -1,    56,    23,   127,   129,    -1,    -1,    28,    86,
      -1,   119,    89,    -1,    -1,    92,    -1,    37,    -1,    -1,
      97,    -1,    -1,    -1,    -1,   102,    23,    -1,    48,    49,
      50,    28,    86,    -1,    -1,    89,    56,    -1,    92,    -1,
      37,    -1,   119,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,   119,    86,    -1,    -1,    89,
      -1,    -1,    92,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,    -1,   119,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404
};

/* VBL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const vbl_y_type_uint16 vbl_y_stos[] =
{
       0,   135,   136,     0,   138,   145,   146,   137,   138,     1,
      33,    54,    67,    98,   139,   140,   141,   149,   151,   156,
     198,   219,    87,   126,   142,   147,   148,   137,     1,    86,
       1,    86,     1,    86,   388,     1,    42,    86,    86,   143,
     195,   197,   388,    94,    94,    81,     1,    86,    81,   144,
     116,   393,   179,    63,   388,    86,   199,    81,   152,    58,
      58,   393,    32,   196,   388,    81,    81,    78,   205,   206,
     157,   153,   154,    86,   195,   220,    75,   150,    89,    99,
     207,   208,   158,   159,     5,   394,     1,    36,    53,    55,
      76,   100,   113,   115,   123,   155,   180,   191,   192,   237,
     239,   247,   251,   252,   253,   255,   221,   222,    86,   391,
     394,     1,    55,   212,   214,   216,     1,    89,   394,   394,
     160,   237,   239,   242,   247,   252,   255,   387,   388,   394,
      86,   388,    86,    86,    86,   224,   224,    86,   380,    86,
      86,   238,     4,     1,   127,   180,   191,   192,   223,   237,
     242,   247,   250,   251,   252,   255,   394,   387,   110,   392,
     392,   213,   380,   393,     1,   113,   209,   211,   215,   387,
     387,    81,   393,   393,    57,   193,   181,    57,   241,   240,
     381,    57,    81,    81,   393,   271,   272,   393,   380,    75,
     393,   393,   393,    57,   392,   210,   380,   393,   393,   235,
     388,    94,    78,   187,   269,   388,    89,   230,    89,   225,
     382,   269,   256,   257,   269,   388,     1,    34,    89,   254,
     258,   259,   262,   263,   264,   265,   394,     1,    35,    86,
      89,   133,   161,   169,   273,   274,   275,   276,   279,   280,
     282,   286,   288,   326,   372,   375,   376,   377,   378,   388,
     389,   390,   391,    57,   393,   214,    11,   217,   393,   393,
      57,     4,   191,   192,   236,   247,   250,   252,   255,   393,
     388,    89,    99,   182,    89,   103,   200,   201,   202,     1,
      55,   113,   232,   233,   109,     1,    55,   113,   127,   227,
     228,    58,   200,   393,   269,   200,   393,    89,   267,    56,
      86,   261,   393,   387,   393,    23,    28,    37,    48,    49,
      50,    56,    92,   102,   119,   355,   356,   357,   358,   359,
     360,   361,   362,   364,   366,   367,   368,   369,   371,   372,
     375,    97,   355,   374,   355,   101,   289,    39,    89,   372,
      14,    41,   170,   275,   280,   282,   287,   375,    57,   269,
     269,   211,    11,    12,    26,   218,   243,    57,     1,   188,
     190,   216,    89,   394,   203,   361,   378,   203,   128,   248,
     392,   231,   380,   269,   392,   226,   380,    86,    43,   106,
     270,   200,   203,   266,   268,   269,   375,   388,    94,   260,
     393,   368,   368,   108,   351,     3,    25,    27,     3,    17,
      18,    19,    22,    25,    27,     6,     9,    10,    14,    16,
      20,   370,    38,    92,   102,   363,   366,    91,   107,   117,
     118,   365,    64,    39,    40,   373,   283,   290,    69,    70,
      71,    72,    73,    74,   103,   104,   114,   379,   361,    79,
     386,    89,   384,   385,    75,    80,   171,   173,   289,   162,
     200,   200,   269,   301,    13,    33,    53,    54,    55,    67,
      76,    98,   100,   113,   115,   123,   127,   194,   392,   392,
     189,   380,     1,   183,   185,   215,    53,   392,    60,   121,
     204,   355,   393,   392,   393,    57,   392,   393,    57,   128,
     249,   392,   392,   103,   202,   256,    58,   392,   119,   353,
     112,   352,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   361,   366,   367,   368,   372,   355,    58,   392,
     111,    89,   297,   298,   204,   281,   355,     4,    86,   174,
     350,   355,    77,    78,   167,   168,   249,   249,   200,     7,
      21,    24,    52,    80,   109,   129,   244,   302,   303,   305,
     311,   321,   322,   324,   326,   327,   328,   329,   333,   339,
     347,   375,   389,   390,    81,   393,   393,    57,   392,   392,
     184,   380,   393,   361,   232,    11,   234,   227,    11,    12,
      26,   229,   355,   393,    94,    51,   261,    68,   130,   354,
     393,   374,   389,   299,   375,   291,   361,   330,   344,   355,
     392,   277,    11,   172,    90,   163,   393,   270,   383,   391,
     383,   393,   355,   350,   325,   355,   312,   394,    75,   132,
     306,   308,   309,   393,    14,   128,   304,   119,   190,   217,
     393,   393,    57,   269,   269,   256,    14,   110,    58,   300,
     294,   295,   392,   131,   393,    30,   331,   272,   278,   268,
     375,   278,    89,    99,   165,   166,   249,   131,   323,   323,
     340,   120,   393,    95,   313,   314,   224,   246,    86,   310,
     355,    88,   344,   355,   306,   393,   269,   185,    11,    12,
      15,    26,    44,   186,   200,   200,   386,   375,     4,   191,
     192,   237,   242,   247,   250,   252,   255,   296,   355,    37,
     332,   394,   394,   175,   177,   355,   375,    90,   164,   350,
     393,   393,    81,   334,   315,   125,   316,   317,   245,    11,
     307,   393,   393,   200,   269,   285,   344,   300,   292,    65,
      82,    83,    84,    85,   320,    41,    77,   392,    58,   176,
      40,    89,   393,   131,   342,   301,   299,   355,    75,   318,
     319,   393,   268,   301,   249,   200,   284,   131,   301,   383,
     383,   177,   178,   175,    97,   345,   349,   371,   375,   341,
     335,   361,   393,   394,   270,    58,   393,   345,   293,   393,
     393,   176,   355,   392,    40,   346,   342,   394,   336,   320,
      88,   285,   394,   343,   348,    52,    65,    66,   338,   383,
     101,   301,    45,   393,   301,   350,   394,   393,   383,   349,
     120,    80,   393,   337,   393,   301
};

#define vbl_y_errok		(vbl_y_errstatus = 0)
#define vbl_y_clearin	(vbl_y_char = VBL_Y_EMPTY)
#define VBL_Y_EMPTY		(-2)
#define VBL_Y_EOF		0

#define VBL_Y_ACCEPT	goto vbl_y_acceptlab
#define VBL_Y_ABORT		goto vbl_y_abortlab
#define VBL_Y_ERROR		goto vbl_y_errorlab


/* Like VBL_Y_ERROR except do call vbl_y_error.  This remains here temporarily
   to ease the transition to the new meaning of VBL_Y_ERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define VBL_Y_FAIL		goto vbl_y_errlab

#define VBL_Y_RECOVERING()  (!!vbl_y_errstatus)

#define VBL_Y_BACKUP(Token, Value)					\
do								\
  if (vbl_y_char == VBL_Y_EMPTY && vbl_y_len == 1)				\
    {								\
      vbl_y_char = (Token);						\
      vbl_y_lval = (Value);						\
      vbl_y_token = VBL_Y_TRANSLATE (vbl_y_char);				\
      VBL_Y_POPSTACK (1);						\
      goto vbl_y_backup;						\
    }								\
  else								\
    {								\
      vbl_y_error (VBL_Y__("syntax error: cannot back up")); \
      VBL_Y_ERROR;							\
    }								\
while (VBL_Y_ID (0))


#define VBL_Y_TERROR	1
#define VBL_Y_ERRCODE	256


/* VBL_Y_LLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define VBL_Y_RHSLOC(Rhs, K) ((Rhs)[K])
#ifndef VBL_Y_LLOC_DEFAULT
# define VBL_Y_LLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (VBL_Y_ID (N))                                                    \
	{								\
	  (Current).first_line   = VBL_Y_RHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = VBL_Y_RHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = VBL_Y_RHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = VBL_Y_RHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    VBL_Y_RHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    VBL_Y_RHSLOC (Rhs, 0).last_column;				\
	}								\
    while (VBL_Y_ID (0))
#endif


/* VBL_Y__LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef VBL_Y__LOCATION_PRINT
# if VBL_Y_LTYPE_IS_TRIVIAL
#  define VBL_Y__LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define VBL_Y__LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* VBL_Y_LEX -- calling `vbl_y_lex' with the right arguments.  */

#ifdef VBL_Y_LEX_PARAM
# define VBL_Y_LEX vbl_y_lex (VBL_Y_LEX_PARAM)
#else
# define VBL_Y_LEX vbl_y_lex ()
#endif

/* Enable debugging if requested.  */
#if VBL_Y_DEBUG

# ifndef VBL_Y_FPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define VBL_Y_FPRINTF fprintf
# endif

# define VBL_Y_DPRINTF(Args)			\
do {						\
  if (vbl_y_debug)					\
    VBL_Y_FPRINTF Args;				\
} while (VBL_Y_ID (0))

# define VBL_Y__SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (vbl_y_debug)								  \
    {									  \
      VBL_Y_FPRINTF (stderr, "%s ", Title);					  \
      vbl_y__symbol_print (stderr,						  \
		  Type, Value); \
      VBL_Y_FPRINTF (stderr, "\n");						  \
    }									  \
} while (VBL_Y_ID (0))


/*--------------------------------.
| Print this symbol on VBL_Y_OUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vbl_y__symbol_value_print (FILE *vbl_y_output, int vbl_y_type, VBL_Y_STYPE const * const vbl_y_valuep)
#else
static void
vbl_y__symbol_value_print (vbl_y_output, vbl_y_type, vbl_y_valuep)
    FILE *vbl_y_output;
    int vbl_y_type;
    VBL_Y_STYPE const * const vbl_y_valuep;
#endif
{
  if (!vbl_y_valuep)
    return;
# ifdef VBL_Y_PRINT
  if (vbl_y_type < VBL_Y_NTOKENS)
    VBL_Y_PRINT (vbl_y_output, vbl_y_toknum[vbl_y_type], *vbl_y_valuep);
# else
  VBL_Y_USE (vbl_y_output);
# endif
  switch (vbl_y_type)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on VBL_Y_OUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vbl_y__symbol_print (FILE *vbl_y_output, int vbl_y_type, VBL_Y_STYPE const * const vbl_y_valuep)
#else
static void
vbl_y__symbol_print (vbl_y_output, vbl_y_type, vbl_y_valuep)
    FILE *vbl_y_output;
    int vbl_y_type;
    VBL_Y_STYPE const * const vbl_y_valuep;
#endif
{
  if (vbl_y_type < VBL_Y_NTOKENS)
    VBL_Y_FPRINTF (vbl_y_output, "token %s (", vbl_y_tname[vbl_y_type]);
  else
    VBL_Y_FPRINTF (vbl_y_output, "nterm %s (", vbl_y_tname[vbl_y_type]);

  vbl_y__symbol_value_print (vbl_y_output, vbl_y_type, vbl_y_valuep);
  VBL_Y_FPRINTF (vbl_y_output, ")");
}

/*------------------------------------------------------------------.
| vbl_y__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vbl_y__stack_print (vbl_y_type_int16 *bottom, vbl_y_type_int16 *top)
#else
static void
vbl_y__stack_print (bottom, top)
    vbl_y_type_int16 *bottom;
    vbl_y_type_int16 *top;
#endif
{
  VBL_Y_FPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    VBL_Y_FPRINTF (stderr, " %d", *bottom);
  VBL_Y_FPRINTF (stderr, "\n");
}

# define VBL_Y__STACK_PRINT(Bottom, Top)				\
do {								\
  if (vbl_y_debug)							\
    vbl_y__stack_print ((Bottom), (Top));				\
} while (VBL_Y_ID (0))


/*------------------------------------------------.
| Report that the VBL_Y_RULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vbl_y__reduce_print (VBL_Y_STYPE *vbl_y_vsp, int vbl_y_rule)
#else
static void
vbl_y__reduce_print (vbl_y_vsp, vbl_y_rule)
    VBL_Y_STYPE *vbl_y_vsp;
    int vbl_y_rule;
#endif
{
  int vbl_y_nrhs = vbl_y_r2[vbl_y_rule];
  int vbl_y_i;
  unsigned long int vbl_y_lno = vbl_y_rline[vbl_y_rule];
  VBL_Y_FPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     vbl_y_rule - 1, vbl_y_lno);
  /* The symbols being reduced.  */
  for (vbl_y_i = 0; vbl_y_i < vbl_y_nrhs; vbl_y_i++)
    {
      fprintf (stderr, "   $%d = ", vbl_y_i + 1);
      vbl_y__symbol_print (stderr, vbl_y_rhs[vbl_y_prhs[vbl_y_rule] + vbl_y_i],
		       &(vbl_y_vsp[(vbl_y_i + 1) - (vbl_y_nrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define VBL_Y__REDUCE_PRINT(Rule)		\
do {					\
  if (vbl_y_debug)				\
    vbl_y__reduce_print (vbl_y_vsp, Rule); \
} while (VBL_Y_ID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int vbl_y_debug;
#else /* !VBL_Y_DEBUG */
# define VBL_Y_DPRINTF(Args)
# define VBL_Y__SYMBOL_PRINT(Title, Type, Value, Location)
# define VBL_Y__STACK_PRINT(Bottom, Top)
# define VBL_Y__REDUCE_PRINT(Rule)
#endif /* !VBL_Y_DEBUG */


/* VBL_Y_INITDEPTH -- initial size of the parser's stacks.  */
#ifndef	VBL_Y_INITDEPTH
# define VBL_Y_INITDEPTH 200
#endif

/* VBL_Y_MAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   VBL_Y_STACK_ALLOC_MAXIMUM < VBL_Y_STACK_BYTES (VBL_Y_MAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef VBL_Y_MAXDEPTH
# define VBL_Y_MAXDEPTH 10000
#endif



#if VBL_Y_ERROR_VERBOSE

# ifndef vbl_y_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define vbl_y_strlen strlen
#  else
/* Return the length of VBL_Y_STR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static VBL_Y_SIZE_T
vbl_y_strlen (const char *vbl_y_str)
#else
static VBL_Y_SIZE_T
vbl_y_strlen (vbl_y_str)
    const char *vbl_y_str;
#endif
{
  VBL_Y_SIZE_T vbl_y_len;
  for (vbl_y_len = 0; vbl_y_str[vbl_y_len]; vbl_y_len++)
    continue;
  return vbl_y_len;
}
#  endif
# endif

# ifndef vbl_y_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define vbl_y_stpcpy stpcpy
#  else
/* Copy VBL_Y_SRC to VBL_Y_DEST, returning the address of the terminating '\0' in
   VBL_Y_DEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
vbl_y_stpcpy (char *vbl_y_dest, const char *vbl_y_src)
#else
static char *
vbl_y_stpcpy (vbl_y_dest, vbl_y_src)
    char *vbl_y_dest;
    const char *vbl_y_src;
#endif
{
  char *vbl_y_d = vbl_y_dest;
  const char *vbl_y_s = vbl_y_src;

  while ((*vbl_y_d++ = *vbl_y_s++) != '\0')
    continue;

  return vbl_y_d - 1;
}
#  endif
# endif

# ifndef vbl_y_tnamerr
/* Copy to VBL_Y_RES the contents of VBL_Y_STR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for vbl_y_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  VBL_Y_STR is taken from vbl_y_tname.  If VBL_Y_RES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static VBL_Y_SIZE_T
vbl_y_tnamerr (char *vbl_y_res, const char *vbl_y_str)
{
  if (*vbl_y_str == '"')
    {
      VBL_Y_SIZE_T vbl_y_n = 0;
      char const *vbl_y_p = vbl_y_str;

      for (;;)
	switch (*++vbl_y_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++vbl_y_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (vbl_y_res)
	      vbl_y_res[vbl_y_n] = *vbl_y_p;
	    vbl_y_n++;
	    break;

	  case '"':
	    if (vbl_y_res)
	      vbl_y_res[vbl_y_n] = '\0';
	    return vbl_y_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! vbl_y_res)
    return vbl_y_strlen (vbl_y_str);

  return vbl_y_stpcpy (vbl_y_res, vbl_y_str) - vbl_y_res;
}
# endif

/* Copy into VBL_Y_RESULT an error message about the unexpected token
   VBL_Y_CHAR while in state VBL_Y_STATE.  Return the number of bytes copied,
   including the terminating null byte.  If VBL_Y_RESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return VBL_Y_SIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static VBL_Y_SIZE_T
vbl_y_syntax_error (char *vbl_y_result, int vbl_y_state, int vbl_y_char)
{
  int vbl_y_n = vbl_y_pact[vbl_y_state];

  if (! (VBL_Y_PACT_NINF < vbl_y_n && vbl_y_n <= VBL_Y_LAST))
    return 0;
  else
    {
      int vbl_y_type = VBL_Y_TRANSLATE (vbl_y_char);
      VBL_Y_SIZE_T vbl_y_size0 = vbl_y_tnamerr (0, vbl_y_tname[vbl_y_type]);
      VBL_Y_SIZE_T vbl_y_size = vbl_y_size0;
      VBL_Y_SIZE_T vbl_y_size1;
      int vbl_y_size_overflow = 0;
      enum { VBL_Y_ERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *vbl_y_arg[VBL_Y_ERROR_VERBOSE_ARGS_MAXIMUM];
      int vbl_y_x;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      VBL_Y__("syntax error, unexpected %s");
      VBL_Y__("syntax error, unexpected %s, expecting %s");
      VBL_Y__("syntax error, unexpected %s, expecting %s or %s");
      VBL_Y__("syntax error, unexpected %s, expecting %s or %s or %s");
      VBL_Y__("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *vbl_y_fmt;
      char const *vbl_y_f;
      static char const vbl_y_unexpected[] = "syntax error, unexpected %s";
      static char const vbl_y_expecting[] = ", expecting %s";
      static char const vbl_y_or[] = " or %s";
      char vbl_y_format[sizeof vbl_y_unexpected
		    + sizeof vbl_y_expecting - 1
		    + ((VBL_Y_ERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof vbl_y_or - 1))];
      char const *vbl_y_prefix = vbl_y_expecting;

      /* Start VBL_Y_X at -VBL_Y_N if negative to avoid negative indexes in
	 VBL_Y_CHECK.  */
      int vbl_y_xbegin = vbl_y_n < 0 ? -vbl_y_n : 0;

      /* Stay within bounds of both vbl_y_check and vbl_y_tname.  */
      int vbl_y_checklim = VBL_Y_LAST - vbl_y_n + 1;
      int vbl_y_xend = vbl_y_checklim < VBL_Y_NTOKENS ? vbl_y_checklim : VBL_Y_NTOKENS;
      int vbl_y_count = 1;

      vbl_y_arg[0] = vbl_y_tname[vbl_y_type];
      vbl_y_fmt = vbl_y_stpcpy (vbl_y_format, vbl_y_unexpected);

      for (vbl_y_x = vbl_y_xbegin; vbl_y_x < vbl_y_xend; ++vbl_y_x)
	if (vbl_y_check[vbl_y_x + vbl_y_n] == vbl_y_x && vbl_y_x != VBL_Y_TERROR)
	  {
	    if (vbl_y_count == VBL_Y_ERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		vbl_y_count = 1;
		vbl_y_size = vbl_y_size0;
		vbl_y_format[sizeof vbl_y_unexpected - 1] = '\0';
		break;
	      }
	    vbl_y_arg[vbl_y_count++] = vbl_y_tname[vbl_y_x];
	    vbl_y_size1 = vbl_y_size + vbl_y_tnamerr (0, vbl_y_tname[vbl_y_x]);
	    vbl_y_size_overflow |= (vbl_y_size1 < vbl_y_size);
	    vbl_y_size = vbl_y_size1;
	    vbl_y_fmt = vbl_y_stpcpy (vbl_y_fmt, vbl_y_prefix);
	    vbl_y_prefix = vbl_y_or;
	  }

      vbl_y_f = VBL_Y__(vbl_y_format);
      vbl_y_size1 = vbl_y_size + vbl_y_strlen (vbl_y_f);
      vbl_y_size_overflow |= (vbl_y_size1 < vbl_y_size);
      vbl_y_size = vbl_y_size1;

      if (vbl_y_size_overflow)
	return VBL_Y_SIZE_MAXIMUM;

      if (vbl_y_result)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *vbl_y_p = vbl_y_result;
	  int vbl_y_i = 0;
	  while ((*vbl_y_p = *vbl_y_f) != '\0')
	    {
	      if (*vbl_y_p == '%' && vbl_y_f[1] == 's' && vbl_y_i < vbl_y_count)
		{
		  vbl_y_p += vbl_y_tnamerr (vbl_y_p, vbl_y_arg[vbl_y_i++]);
		  vbl_y_f += 2;
		}
	      else
		{
		  vbl_y_p++;
		  vbl_y_f++;
		}
	    }
	}
      return vbl_y_size;
    }
}
#endif /* VBL_Y_ERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vbl_y_destruct (const char *vbl_y_msg, int vbl_y_type, VBL_Y_STYPE *vbl_y_valuep)
#else
static void
vbl_y_destruct (vbl_y_msg, vbl_y_type, vbl_y_valuep)
    const char *vbl_y_msg;
    int vbl_y_type;
    VBL_Y_STYPE *vbl_y_valuep;
#endif
{
  VBL_Y_USE (vbl_y_valuep);

  if (!vbl_y_msg)
    vbl_y_msg = "Deleting";
  VBL_Y__SYMBOL_PRINT (vbl_y_msg, vbl_y_type, vbl_y_valuep, vbl_y_locationp);

  switch (vbl_y_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef VBL_Y_PARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int vbl_y_parse (void *VBL_Y_PARSE_PARAM);
#else
int vbl_y_parse ();
#endif
#else /* ! VBL_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int vbl_y_parse (void);
#else
int vbl_y_parse ();
#endif
#endif /* ! VBL_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
int vbl_y_char;

/* The semantic value of the look-ahead symbol.  */
VBL_Y_STYPE vbl_y_lval;

/* Number of syntax errors so far.  */
int vbl_y_nerrs;



/*----------.
| vbl_y_parse.  |
`----------*/

#ifdef VBL_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
vbl_y_parse (void *VBL_Y_PARSE_PARAM)
#else
int
vbl_y_parse (VBL_Y_PARSE_PARAM)
    void *VBL_Y_PARSE_PARAM;
#endif
#else /* ! VBL_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
vbl_y_parse (void)
#else
int
vbl_y_parse ()

#endif
#endif
{
  
  int vbl_y_state;
  int vbl_y_n;
  int vbl_y_result;
  /* Number of tokens to shift before error messages enabled.  */
  int vbl_y_errstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int vbl_y_token = 0;
#if VBL_Y_ERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char vbl_y_msgbuf[128];
  char *vbl_y_msg = vbl_y_msgbuf;
  VBL_Y_SIZE_T vbl_y_msg_alloc = sizeof vbl_y_msgbuf;
#endif

  /* Three stacks and their tools:
     `vbl_y_ss': related to states,
     `vbl_y_vs': related to semantic values,
     `vbl_y_ls': related to locations.

     Refer to the stacks thru separate pointers, to allow vbl_y_overflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  vbl_y_type_int16 vbl_y_ssa[VBL_Y_INITDEPTH];
  vbl_y_type_int16 *vbl_y_ss = vbl_y_ssa;
  vbl_y_type_int16 *vbl_y_ssp;

  /* The semantic value stack.  */
  VBL_Y_STYPE vbl_y_vsa[VBL_Y_INITDEPTH];
  VBL_Y_STYPE *vbl_y_vs = vbl_y_vsa;
  VBL_Y_STYPE *vbl_y_vsp;



#define VBL_Y_POPSTACK(N)   (vbl_y_vsp -= (N), vbl_y_ssp -= (N))

  VBL_Y_SIZE_T vbl_y_stacksize = VBL_Y_INITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  VBL_Y_STYPE vbl_y_val;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int vbl_y_len = 0;

  VBL_Y_DPRINTF ((stderr, "Starting parse\n"));

  vbl_y_state = 0;
  vbl_y_errstatus = 0;
  vbl_y_nerrs = 0;
  vbl_y_char = VBL_Y_EMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  vbl_y_ssp = vbl_y_ss;
  vbl_y_vsp = vbl_y_vs;

  goto vbl_y_setstate;

/*------------------------------------------------------------.
| vbl_y_newstate -- Push a new state, which is found in vbl_y_state.  |
`------------------------------------------------------------*/
 vbl_y_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  vbl_y_ssp++;

 vbl_y_setstate:
  *vbl_y_ssp = vbl_y_state;

  if (vbl_y_ss + vbl_y_stacksize - 1 <= vbl_y_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      VBL_Y_SIZE_T vbl_y_size = vbl_y_ssp - vbl_y_ss + 1;

#ifdef vbl_y_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	VBL_Y_STYPE *vbl_y_vs1 = vbl_y_vs;
	vbl_y_type_int16 *vbl_y_ss1 = vbl_y_ss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if vbl_y_overflow is a macro.  */
	vbl_y_overflow (VBL_Y__("memory exhausted"),
		    &vbl_y_ss1, vbl_y_size * sizeof (*vbl_y_ssp),
		    &vbl_y_vs1, vbl_y_size * sizeof (*vbl_y_vsp),

		    &vbl_y_stacksize);

	vbl_y_ss = vbl_y_ss1;
	vbl_y_vs = vbl_y_vs1;
      }
#else /* no vbl_y_overflow */
# ifndef VBL_Y_STACK_RELOCATE
      goto vbl_y_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (VBL_Y_MAXDEPTH <= vbl_y_stacksize)
	goto vbl_y_exhaustedlab;
      vbl_y_stacksize *= 2;
      if (VBL_Y_MAXDEPTH < vbl_y_stacksize)
	vbl_y_stacksize = VBL_Y_MAXDEPTH;

      {
	vbl_y_type_int16 *vbl_y_ss1 = vbl_y_ss;
	union vbl_y_alloc *vbl_y_ptr =
	  (union vbl_y_alloc *) VBL_Y_STACK_ALLOC (VBL_Y_STACK_BYTES (vbl_y_stacksize));
	if (! vbl_y_ptr)
	  goto vbl_y_exhaustedlab;
	VBL_Y_STACK_RELOCATE (vbl_y_ss);
	VBL_Y_STACK_RELOCATE (vbl_y_vs);

#  undef VBL_Y_STACK_RELOCATE
	if (vbl_y_ss1 != vbl_y_ssa)
	  VBL_Y_STACK_FREE (vbl_y_ss1);
      }
# endif
#endif /* no vbl_y_overflow */

      vbl_y_ssp = vbl_y_ss + vbl_y_size - 1;
      vbl_y_vsp = vbl_y_vs + vbl_y_size - 1;


      VBL_Y_DPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) vbl_y_stacksize));

      if (vbl_y_ss + vbl_y_stacksize - 1 <= vbl_y_ssp)
	VBL_Y_ABORT;
    }

  VBL_Y_DPRINTF ((stderr, "Entering state %d\n", vbl_y_state));

  goto vbl_y_backup;

/*-----------.
| vbl_y_backup.  |
`-----------*/
vbl_y_backup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  vbl_y_n = vbl_y_pact[vbl_y_state];
  if (vbl_y_n == VBL_Y_PACT_NINF)
    goto vbl_y_default;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* VBL_Y_CHAR is either VBL_Y_EMPTY or VBL_Y_EOF or a valid look-ahead symbol.  */
  if (vbl_y_char == VBL_Y_EMPTY)
    {
      VBL_Y_DPRINTF ((stderr, "Reading a token: "));
      vbl_y_char = VBL_Y_LEX;
    }

  if (vbl_y_char <= VBL_Y_EOF)
    {
      vbl_y_char = vbl_y_token = VBL_Y_EOF;
      VBL_Y_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      vbl_y_token = VBL_Y_TRANSLATE (vbl_y_char);
      VBL_Y__SYMBOL_PRINT ("Next token is", vbl_y_token, &vbl_y_lval, &vbl_y_lloc);
    }

  /* If the proper action on seeing token VBL_Y_TOKEN is to reduce or to
     detect an error, take that action.  */
  vbl_y_n += vbl_y_token;
  if (vbl_y_n < 0 || VBL_Y_LAST < vbl_y_n || vbl_y_check[vbl_y_n] != vbl_y_token)
    goto vbl_y_default;
  vbl_y_n = vbl_y_table[vbl_y_n];
  if (vbl_y_n <= 0)
    {
      if (vbl_y_n == 0 || vbl_y_n == VBL_Y_TABLE_NINF)
	goto vbl_y_errlab;
      vbl_y_n = -vbl_y_n;
      goto vbl_y_reduce;
    }

  if (vbl_y_n == VBL_Y_FINAL)
    VBL_Y_ACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (vbl_y_errstatus)
    vbl_y_errstatus--;

  /* Shift the look-ahead token.  */
  VBL_Y__SYMBOL_PRINT ("Shifting", vbl_y_token, &vbl_y_lval, &vbl_y_lloc);

  /* Discard the shifted token unless it is eof.  */
  if (vbl_y_char != VBL_Y_EOF)
    vbl_y_char = VBL_Y_EMPTY;

  vbl_y_state = vbl_y_n;
  *++vbl_y_vsp = vbl_y_lval;

  goto vbl_y_newstate;


/*-----------------------------------------------------------.
| vbl_y_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
vbl_y_default:
  vbl_y_n = vbl_y_defact[vbl_y_state];
  if (vbl_y_n == 0)
    goto vbl_y_errlab;
  goto vbl_y_reduce;


/*-----------------------------.
| vbl_y_reduce -- Do a reduction.  |
`-----------------------------*/
vbl_y_reduce:
  /* vbl_y_n is the number of a rule to reduce with.  */
  vbl_y_len = vbl_y_r2[vbl_y_n];

  /* If VBL_Y_LEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets VBL_Y_VAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to VBL_Y_VAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that VBL_Y_VAL may be used uninitialized.  */
  vbl_y_val = vbl_y_vsp[1-vbl_y_len];


  VBL_Y__REDUCE_PRINT (vbl_y_n);
  switch (vbl_y_n)
    {
        case 2:
#line 318 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
                /* ###----------------------------------------------###  */
                /*    Initializations                                    */
                /* ###----------------------------------------------###  */

            VBL_NM1LST = NULL;
            VBL_NM2LST = NULL;
            VBL_LOOPLBLLST = NULL;
            VBL_LOOPLBL = NULL;
            VBL_INSLST = NULL;
            VBL_GRDLST = NULL;
            VBL_CNDLST = NULL;
            VBL_LINLST = NULL;
            VBL_VALLST = NULL;
            VBL_ENUMVAL = createauthtable( 100 );
            hshtab = initab ();

            VBL_ERRFLG    = 0;
            VBL_LINNUM    = 1;
            VBL_NUMPTP    = 0;
            VBL_NUMCHOICE = 0;

            VBL_MODNAM  = namealloc( "undefined" );
            VBL_PROCNAM = (char *)0;
            VBL_PROCNUM = 0;
	    VBL_LOOPNUM = 0;
            VBL_GNRNAM  = (char *)0;
            VBL_FUNCNAM = (char *)0;
            VBL_COMPNAM = (char *)0;
            VBL_BEFUN   = (vbfun_list *)0;

            VBL_HEADFIG = vbh_addvbfig( VBL_HEADFIG, 0);
            VBL_BEFPNT  = VBL_HEADFIG;

            VBL_BEPCS   = (vbpcs_list *)0;
            VBL_BEINS   = (vbins_list *)0;
            VBL_BEGNR   = (vbgnr_list *)0;
            VBL_BEMAP   = (vbmap_list *)0;

            VBL_GNR_BEPCS = (chain_list *)0;
            VBL_GNR_BEINS = (chain_list *)0;
            VBL_GNR_BEGNR = (chain_list *)0;
          }
    break;

  case 3:
#line 363 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            VBL_BEFPNT->BEPCS = VBL_BEPCS;
            VBL_BEFPNT->BEINS = VBL_BEINS;
            VBL_BEFPNT->BEGNR = VBL_BEGNR;

            fretab( hshtab );
            destroyauthtable( VBL_ENUMVAL );
          }
    break;

  case 6:
#line 382 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 7:
#line 387 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 8:
#line 389 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 9:
#line 391 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 10:
#line 396 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 11:
#line 398 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 12:
#line 400 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 13:
#line 405 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 14:
#line 407 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 15:
#line 414 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 16:
#line 420 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 18:
#line 428 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 19:
#line 434 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 21:
#line 441 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 22:
#line 446 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 23:
#line 448 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 24:
#line 456 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
          }
    break;

  case 25:
#line 471 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 26:
#line 473 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 27:
#line 483 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 28:
#line 494 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           vbfig_list  *ScanPkgFig;
            chain_list *ScanChain;
            char       *Name;
            char      **FuncArray;
            long         Index;   
            long        Left;
            long        Right;
            long        AttrLeft;
            long        AttrRight;
            long        Dir;
            long         Signed;
            vbcst_list *VbhCst;
            vbaux_list *VbhAux;
            vbmod_list *VbhMod;
            vbpor_list *VbhPor;
            vbgen_list *VbhGen;
            vbtyp_list *VbhType;
            vbpcs_list *VbhPcs;
            vexexpr    *VexAtom;
            long        Dynamic;
            long        Oper;
            chain_list *PackList;

                extern char *vbl_func_std_logic_1164[];
                extern char *vbl_func_std_logic_arith[];
                extern char *vbl_func_std_numeric_std[];

           long size=0;
           struct vbtyp *vbtyp_pnt;
             VBL_BEFPNT->NAME = (vbl_y_vsp[(2) - (3)].text);
             VBL_BEFPNT->IS_PACKAGE = 1;
           VBL_MODNAM = (vbl_y_vsp[(2) - (3)].text);

           vbtyp_pnt = VBL_BEFPNT->BETYP;
           while(vbtyp_pnt)
           {
             size++;
              vbtyp_pnt = vbtyp_pnt->NEXT;
           }

           vbtyp_pnt  = VBL_BEFPNT->BETYP;
           VBL_NUMTYP = 0;
           while(vbtyp_pnt)
           {
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_SYMDFN,VBL_TPEDFN);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_LBLDFN,vbtyp_pnt->CLASS);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_TYPDFN,vbtyp_pnt->INDEX);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_WMNDFN,vbtyp_pnt->LEFT);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_WMXDFN,vbtyp_pnt->RIGHT);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_PNTDFN,(long)vbtyp_pnt);
              vbtyp_pnt = vbtyp_pnt->NEXT;
              VBL_NUMTYP++;
           }

            for ( ScanChain  = VBL_NM2LST;
                  ScanChain != (chain_list *)0;
                  ScanChain  = ScanChain->NEXT )
            {
              FuncArray = (char **)0;

              if ( ! strcmp( ScanChain->DATA, "ieee.std_logic_1164.all" ) )
              {
                FuncArray = vbl_func_std_logic_1164;
              }
              else
              if ( ( ! strcmp( ScanChain->DATA, "ieee.std_logic_arith.all"    ) ) ||
                   ( ! strcmp( ScanChain->DATA, "ieee.std_logic_signed.all"   ) ) ||
                   ( ! strcmp( ScanChain->DATA, "ieee.std_logic_unsigned.all" ) ) )
              {
                FuncArray = vbl_func_std_logic_arith;
              }
              else
              if ( ( ! strcmp( ScanChain->DATA, "ieee.numeric_std.all" ) ) ||
                   ( ! strcmp( ScanChain->DATA, "ieee.numeric_bit.all" ) ) )
              {
                FuncArray = vbl_func_std_numeric_std;
              }
              else
              {
                for ( ScanPkgFig  = VBL_HEADFIG;
                      ScanPkgFig != (vbfig_list *)0;
                      ScanPkgFig  = ScanPkgFig->NEXT )
                {
                  if ( ( ScanPkgFig->IS_PACKAGE                         ) &&
                       ( ScanPkgFig->NAME == (char *)ScanChain->DATA ) )
                  {
                    for ( PackList  = VBL_BEFPNT->PACK_LIST;
                          PackList != (chain_list *)0;
                          PackList  = PackList->NEXT )
                    {
                      if ( PackList->DATA == ScanChain->DATA ) break; /* already included */
                    }

                    if ( PackList == (chain_list *)0 )
                    {
                      vbh_dupvbfig( VBL_BEFPNT, ScanPkgFig );
                    }

                    /* BECST */

                    for ( VbhCst  = ScanPkgFig->BECST;
                          VbhCst != (vbcst_list *)0;
                          VbhCst  = VbhCst->NEXT )
                    {
                      VbhType = vbh_getvbtyp( VBL_BEFPNT, VbhCst->TYPE->NAME );
                      VexAtom = VbhCst->TARGET;

                      if ( ! IsVexNodeAtom( VexAtom ) )
                      {
                        my_fprintf( stdout, "dynamic declaration not supported !\n" );
                        autexit( 1 );
                      }

                      Name = GetVexAtomValue( VexAtom );

		      /*
                      if ( chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN ) )
                      {
                        my_vbl_error( 10, Name );
                      }
		      */

                      if ( IsVexAtomBit( VexAtom ) )
                      {
                        Left  = -1;
                        Right = -1;
                      }
                      else
                      {
                        Left  = VexAtom->LEFT;
                        Right = VexAtom->RIGHT;
                      }

                      Signed    = ( IsVexNodeSigned( VexAtom ) != 0 );
                      AttrLeft  = Left;
                      AttrRight = Right;

                      addtab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN, VBL_CSTDFN     );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_TYPDFN, VbhType->INDEX );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_WMNDFN, Left           );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_WMXDFN, Right          );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_ATLDFN, AttrLeft       );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_ATRDFN, AttrRight      );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_LBLDFN, 0              );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_PNTDFN, (long)VbhCst->VEX  );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_SUNDFN, Signed         );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_DYNDFN, 0              );
                    }

                    /* BEAUX */

                    for ( VbhAux  = ScanPkgFig->BEAUX;
                          VbhAux != (vbaux_list *)0;
                          VbhAux  = VbhAux->NEXT )
                    {
                      VbhType = vbh_getvbtyp( VBL_BEFPNT, VbhAux->TYPE->NAME );
                      VexAtom = VbhAux->TARGET;

                      if ( ! IsVexNodeAtom( VexAtom ) )
                      {
                        my_fprintf( stdout, "dynamic declaration not supported !\n" );
                        autexit( 1 );
                      }

                      Name = GetVexAtomValue( VexAtom );

		      /*
                      if ( chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN ) )
                      {
                        my_vbl_error( 10, Name );
                      }
		      */

                      Signed    = (IsVexNodeSigned( VexAtom ) != 0);
                      Left      = VexAtom->LEFT;
                      Right     = VexAtom->RIGHT;
                      AttrLeft  = Left;
                      AttrRight = Right;

                      addtab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN, VBL_SGNDFN     );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_TYPDFN, VbhType->INDEX );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_WMNDFN, Left           );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_WMXDFN, Right          );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_ATLDFN, AttrLeft       );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_ATRDFN, AttrRight      );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_LBLDFN, VbhAux->KIND   );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_PNTDFN, (long)VexAtom  );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_SUNDFN, Signed         );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_DYNDFN, 0              );
                    }

                    /* BEPCS */

                    for ( VbhPcs  = ScanPkgFig->BEPCS;
                          VbhPcs != (vbpcs_list *)0; 
                          VbhPcs  = VbhPcs->NEXT )
                    {
                      addtab( hshtab, VbhPcs->LABEL, VBL_MODNAM, VBL_SYMDFN, VBL_LBLDFN );
                    }

                    /* BEFUN TO BE DONE */

                    if ( ScanPkgFig->BEFUN != (vbfun_list *)0 )
                    {
                      my_fprintf( stdout, "function in package not supported !\n" );
                      autexit( 1 );
                    }

                    /* BEATR TO BE DONE */

                    if ( ScanPkgFig->BEATR != (vbatr_list *)0 )
                    {
                      my_fprintf( stdout, "attribute in package not supported !\n" );
                      autexit( 1 );
                    }

                    /* BEGNR TO BE DONE ??? */

                    if ( ScanPkgFig->BEGNR != (vbgnr_list *)0 )
                    {
                      my_fprintf( stdout, "generate in package not supported !\n" );
                      autexit( 1 );
                    }

                    /* BEMOD */

                    for ( VbhMod  = ScanPkgFig->BEMOD;
                          VbhMod != (vbmod_list *)0;
                          VbhMod  = VbhMod->NEXT )
                    {
                      addtab(hshtab,VbhMod->NAME,VBL_MODNAM,VBL_SYMDFN,VBL_COMDFN);
                      addtab(hshtab,VbhMod->NAME,VBL_MODNAM,VBL_PNTDFN,(long)VbhMod);

                      for ( VbhGen  = VbhMod->BEGEN;
                            VbhGen != (vbgen_list *)0;
                            VbhGen  = VbhGen->NEXT )
                      {
                        VbhType = vbh_getvbtyp( VBL_BEFPNT, VbhGen->TYPE->NAME );
                        VexAtom = VbhGen->TARGET;
  
                        if ( ! IsVexNodeAtom( VexAtom ) )
                        {
                          my_fprintf( stdout, "dynamic declaration not supported !\n" );
                          autexit( 1 );
                        }
  
                        Name = GetVexAtomValue( VexAtom );
  
			/*
                        if ( chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN ) )
                        {
                          my_vbl_error( 10, Name );
                        }
			*/
  
                        Signed    = (IsVexNodeSigned( VexAtom ) != 0);
                        Left      = VexAtom->LEFT;
                        Right     = VexAtom->RIGHT;
                        AttrLeft  = Left;
                        AttrRight = Right;
  
                        addtab( hshtab, Name, VbhMod->NAME, VBL_SYMDFN, VBL_GENDFN     );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_TYPDFN, VbhType->INDEX );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_WMNDFN, Left           );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_WMXDFN, Right          );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_ATLDFN, AttrLeft       );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_ATRDFN, AttrRight      );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_LBLDFN, VBH_KIND_NONE  );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_PNTDFN, (long)VexAtom  );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_SUNDFN, Signed         );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_DYNDFN, 0              );
                      }

                      for ( VbhPor  = VbhMod->BEPOR;
                            VbhPor != (vbpor_list *)0;
                            VbhPor  = VbhPor->NEXT )
                      {
                        VbhType = vbh_getvbtyp( VBL_BEFPNT, VbhPor->TYPE->NAME );
                        VexAtom = VbhPor->TARGET;
  
                        if ( ! IsVexNodeAtom( VexAtom ) )
                        {
                          Name    = getvexatomname( VexAtom );
                          Dynamic = 0;

                          if ( IsVexNodeOper( VexAtom ) )
                          {
                            Oper = GetVexOperValue( VexAtom );

                            if ( Oper == VEX_DOWNTO ) Dynamic = VBL_DWTDFN;
                            else         
                            if ( Oper == VEX_TO     ) Dynamic = VBL_UPTDFN;

                            Signed    = (IsVexNodeSigned( VexAtom ) != 0);
                            Left      = (long)GetVexOperand( VexAtom->OPERAND );
                            Right     = (long)GetVexOperand( VexAtom->OPERAND->NEXT );
                            AttrLeft  = Left;
                            AttrRight = Right;
                          }

                          if ( ! Dynamic )
                          {
                            my_fprintf( stdout, "such dynamic declaration not supported !\n" );
                            autexit( 1 );
                          }
                        }
                        else
                        {
                          Name = GetVexAtomValue( VexAtom );

                          Signed    = (IsVexNodeSigned( VexAtom ) != 0);
                          Left      = VexAtom->LEFT;
                          Right     = VexAtom->RIGHT;
                          AttrLeft  = Left;
                          AttrRight = Right;
                          Dynamic   = 0;
                        }
  
			/*
                        if ( chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN ) )
                        {
                          my_vbl_error( 10, Name );
                        }
			*/
  
                        if ( VbhPor->DIR == 'I' ) Dir = VBL_ICNDFN;
                        else 
                        if ( VbhPor->DIR == 'O' ) Dir = VBL_OCNDFN;
                        else                      Dir = VBL_BCNDFN;
  
                        addtab( hshtab, Name, VbhMod->NAME, VBL_SYMDFN, Dir            );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_TYPDFN, VbhType->INDEX );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_WMNDFN, Left           );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_WMXDFN, Right          );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_ATLDFN, AttrLeft       );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_ATRDFN, AttrRight      );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_LBLDFN, VbhPor->KIND   );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_PNTDFN, (long)VexAtom  );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_SUNDFN, Signed         );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_DYNDFN, Dynamic        );
                      }
                    }

                    /* BEINS */

                    if ( ScanPkgFig->BEINS != (vbins_list *)0 )
                    {
                      my_fprintf( stdout, "instance in package not supported !\n" );
                      autexit( 1 );
                    }

                    break;
                  }
                }

                if ( ScanPkgFig == (vbfig_list *)0 )
                {
                  my_vbl_error(127,(char *)ScanChain->DATA);
                }
              }

              if ( FuncArray != (char **)0 )
              {
                Index = 0;

                while ( FuncArray[ Index ] != NULL )
                {
                  Name = namealloc( FuncArray[ Index ] );
                  addtab ( hshtab, Name, VBL_MODNAM, VBL_SYMDFN, VBL_FUNDFN );
                  Index++;
                }
              }
            }

            freechain( VBL_NM2LST );
            VBL_NM2LST = NULL;
         }
    break;

  case 29:
#line 876 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
             if (((vbl_y_vsp[(7) - (8)].text) != NULL) && ((vbl_y_vsp[(7) - (8)].text) != (vbl_y_vsp[(2) - (8)].text))) my_vbl_error (128,(vbl_y_vsp[(7) - (8)].text));
          }
    break;

  case 30:
#line 881 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 31:
#line 886 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 33:
#line 893 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 43:
#line 917 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ((vbl_y_vsp[(3) - (4)].text) != VBL_MODNAM) my_vbl_error (128,(vbl_y_vsp[(3) - (4)].text));
          }
    break;

  case 44:
#line 924 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
            if (((vbl_y_vsp[(8) - (9)].text) != NULL) && ((vbl_y_vsp[(8) - (9)].text) != (vbl_y_vsp[(3) - (9)].text))) my_vbl_error (128,(vbl_y_vsp[(8) - (9)].text));
          }
    break;

  case 45:
#line 930 "../../../src/vbl/src/vbl_bcomp_y.y"
    { my_vbl_error ( 129,NULL); }
    break;

  case 54:
#line 958 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if (chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_MODNAM,VBL_SYMDFN) != 0)
            {
              my_vbl_error (19,(vbl_y_vsp[(1) - (2)].text));
            }

            addtab (hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_MODNAM,VBL_SYMDFN,VBL_LBLDFN);

            if (chktab (hshtab,(vbl_y_vsp[(2) - (2)].name).NAME,VBL_MODNAM,VBL_SYMDFN) != VBL_COMDFN)
            {
              my_vbl_error (125,(vbl_y_vsp[(2) - (2)].name).NAME);
            }

            VBL_BEINS = vbh_addvbins( VBL_BEINS, (vbl_y_vsp[(1) - (2)].text), (vbl_y_vsp[(2) - (2)].name).NAME, VBL_LINNUM );
            VBL_COMPNAM = (vbl_y_vsp[(2) - (2)].name).NAME;
            VBL_BEMAP = (vbmap_list *)0;
          }
    break;

  case 55:
#line 976 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            VBL_BEINS->GEN_MAP = VBL_BEMAP;
            VBL_BEMAP = (vbmap_list *)0;
          }
    break;

  case 56:
#line 981 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            VBL_BEINS->PORT_MAP = VBL_BEMAP;
            VBL_BEMAP = (vbmap_list *)0;
          }
    break;

  case 57:
#line 986 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbmod_list *VbMod;
            vbgen_list *VbGen;
            vbpor_list *VbPor;
            vbins_list *VbIns;
            vbmap_list *VbMap;
            long         Explicit;

            VbMod = (vbmod_list *)chktab(hshtab,(vbl_y_vsp[(2) - (8)].name).NAME,VBL_MODNAM,VBL_PNTDFN);
            VbIns = VBL_BEINS;

            VbIns->PORT_MAP = (vbmap_list *)reverse( (chain_list *)VbIns->PORT_MAP );

            VbPor    = VbMod->BEPOR;
            VbMap    = VbIns->PORT_MAP;
            Explicit = 0;

            while ( ( VbMap != (vbmap_list *)0 ) &&
                    ( VbPor != (vbpor_list *)0 ) )
            {
              if ( VbMap->FORMAL == (vexexpr *)0 )
              {
                if ( Explicit )
                {
                  my_vbl_error (125, VbIns->NAME);
                }

                VbMap->FORMAL = dupvexexpr( VbPor->TARGET );
                VbPor = VbPor->NEXT;
              }
              else
              {
                Explicit = 1;
              }

              VbMap = VbMap->NEXT;
            }

            if ( VbMap != (vbmap_list *)0 )
            {
              my_vbl_error (125, VbIns->NAME);
            }

            VbIns->GEN_MAP = (vbmap_list *)reverse( (chain_list *)VbIns->GEN_MAP );

            VbGen    = VbMod->BEGEN;
            VbMap    = VbIns->GEN_MAP;
            Explicit = 0;

            while ( ( VbMap != (vbmap_list *)0 ) &&
                    ( VbGen != (vbgen_list *)0 ) )
            {
              if ( VbMap->FORMAL == (vexexpr *)0 )
              {
                if ( Explicit )
                {
                  my_vbl_error (125, VbIns->NAME);
                }

                VbMap->FORMAL = dupvexexpr( VbGen->TARGET );
                VbGen = VbGen->NEXT;
              }
              else
              {
                Explicit = 1;
              }

              VbMap = VbMap->NEXT;
            }

            if ( VbMap != (vbmap_list *)0 )
            {
              my_vbl_error (125, VbIns->NAME);
            }

            VBL_COMPNAM = (char *)0;
          }
    break;

  case 58:
#line 1067 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 59:
#line 1069 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 60:
#line 1078 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 61:
#line 1084 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 62:
#line 1086 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 63:
#line 1095 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 64:
#line 1105 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ( chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_SYMDFN) != 0)
             my_vbl_error (19,(vbl_y_vsp[(1) - (1)].text));

            addtab( hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_SYMDFN,VBL_LBLDFN);

            VBL_GNRNAM = (vbl_y_vsp[(1) - (1)].text);
          }
    break;

  case 65:
#line 1114 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
          }
    break;

  case 66:
#line 1121 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbl_name      *Range;
            vbvar_list    *VbVar;
            vexexpr       *Target;
            short          Signed;
            long           Left;
            long           Right;
            long           AttrLeft;
            long           AttrRight;
            char           ForUp;

            VBL_BEGNR = vbh_addvbgnr( VBL_BEGNR, VBL_GNRNAM, VBL_LINNUM );

            if ( (vbl_y_vsp[(1) - (2)].list).IDENT != (char *)0 )
            {
              if ( chktab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_SYMDFN ) != 0 )
              {
                my_vbl_error (80,(vbl_y_vsp[(1) - (2)].list).IDENT);
              }

              Range = (vbl_name *)(vbl_y_vsp[(1) - (2)].list).VEX;

              if ( Range->DYNAMIC )
              {
                if ( Range->DYNAMIC == VBL_UPTDFN ) ForUp = 1;
                else                                ForUp = 0;

                AttrLeft  = -1;
                AttrRight = -1;
              }
              else
              {
                AttrLeft  = Range->LEFT;
                AttrRight = Range->RIGHT;

                if ( AttrLeft <= AttrRight ) ForUp = 1;
                else                         ForUp = 0;
              }

              VbVar = (vbvar_list *)vbl_addstr( 'f',0,
                                               get_type(VBH_TYPE_INTEGER),VBH_TYPE_INTEGER,
                                              'I',(vbl_y_vsp[(1) - (2)].list).IDENT, -1, -1, NULL, 0, 0 );
              Target = VbVar->TARGET;
              Signed = ( IsVexNodeSigned( VbVar->TARGET ) != 0 );

              if ( IsVexAtomBit( VbVar->TARGET ) )
              {
                Left  = -1;
                Right = -1;
              }
              else
              {
                Left  = VbVar->TARGET->LEFT;
                Right = VbVar->TARGET->RIGHT;
              }

              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_SYMDFN,VBL_VARDFN);
              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_TYPDFN,VBH_TYPE_INTEGER);
              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_WMNDFN,Left);
              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_WMXDFN,Right);
              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_ATLDFN,AttrLeft);
              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_ATRDFN,AttrRight);
              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_LBLDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_PNTDFN,(long)VbVar->TARGET);
              addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,VBL_MODNAM,VBL_SUNDFN,Signed);

              if ( ! Range->DYNAMIC )
              {
                Range->LEFT  = (long)createvexatomlong( AttrLeft , 0, Signed );
                Range->RIGHT = (long)createvexatomlong( AttrRight, 0, Signed );
              }

              VBL_BEGNR->TYPE = VBH_GENERATE_FOR;
              VBL_BEGNR->FOR_VARIABLE = VbVar->TARGET;
              VBL_BEGNR->FOR_LEFT     = (vexexpr *)Range->LEFT;
              VBL_BEGNR->FOR_RIGHT    = (vexexpr *)Range->RIGHT;
              VBL_BEGNR->FOR_UP       = ForUp;

              autfreeheap( Range, sizeof( vbl_name ) );
            }
            else
            {
              VBL_BEGNR->TYPE = VBH_GENERATE_IF;
              VBL_BEGNR->IF_COND = (vbl_y_vsp[(1) - (2)].list).VEX;
            }

            VBL_GNR_BEINS = addchain( VBL_GNR_BEINS, (void *)VBL_BEINS );
            VBL_GNR_BEPCS = addchain( VBL_GNR_BEPCS, (void *)VBL_BEPCS );
            VBL_GNR_BEGNR = addchain( VBL_GNR_BEGNR, (void *)VBL_BEGNR );

            VBL_BEINS = (vbins_list *)0;
            VBL_BEPCS = (vbpcs_list *)0;
            VBL_BEGNR = (vbgnr_list *)0;

          }
    break;

  case 67:
#line 1221 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbgnr_list *BeGnr;

            if ( (vbl_y_vsp[(1) - (8)].list).IDENT != (char *)0 )
            {
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_SYMDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_TYPDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_WMNDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_WMXDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_ATLDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_ATRDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_LBLDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_PNTDFN,0);
              addtab( hshtab,(vbl_y_vsp[(1) - (8)].list).IDENT,VBL_MODNAM,VBL_SUNDFN,0);
            }

            BeGnr = (vbgnr_list *)VBL_GNR_BEGNR->DATA;

            BeGnr->BEINS = VBL_BEINS;
            BeGnr->BEPCS = VBL_BEPCS;
            BeGnr->BEGNR = VBL_BEGNR;

            VBL_BEINS = (vbins_list *)VBL_GNR_BEINS->DATA;
            VBL_BEPCS = (vbpcs_list *)VBL_GNR_BEPCS->DATA;
            VBL_BEGNR = (vbgnr_list *)VBL_GNR_BEGNR->DATA;

            VBL_GNR_BEINS = delchain( VBL_GNR_BEINS, VBL_GNR_BEINS );
            VBL_GNR_BEPCS = delchain( VBL_GNR_BEPCS, VBL_GNR_BEPCS );
            VBL_GNR_BEGNR = delchain( VBL_GNR_BEGNR, VBL_GNR_BEGNR );
          }
    break;

  case 68:
#line 1256 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list);
          }
    break;

  case 69:
#line 1261 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list);
          }
    break;

  case 70:
#line 1270 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbl_name *Range;

            Range  = (vbl_name *)autallocheap( sizeof( vbl_name ) );
            *Range = (vbl_y_vsp[(3) - (3)].name);

            (vbl_y_val.list).IDENT = (vbl_y_vsp[(1) - (3)].text);
            (vbl_y_val.list).VEX   = (vexexpr *)Range;
          }
    break;

  case 71:
#line 1284 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 72:
#line 1289 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 73:
#line 1293 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
             vbl_y_errok;
           }
    break;

  case 74:
#line 1301 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
	    VBL_SAVCOMPNAM = VBL_COMPNAM;
	    VBL_COMPNAM    = (char *)0;
	  }
    break;

  case 75:
#line 1306 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vexexpr *Formal;
            vexexpr *Actual;

          struct vbl_expr expr1;
          struct vbl_expr expr_name;
          char           *LocalName;
          char            Buffer[ 40 ];
          long            left;
          long            right;
          long            left_bnd;
          long            right_bnd;
          long            in_bound;
          long            out_bound;
          unsigned char   dynamic;
          long             mode;
          long             flag;

	  VBL_COMPNAM = VBL_SAVCOMPNAM;
	  VBL_SAVCOMPNAM = (char *)0;

          flag = (vbl_y_vsp[(1) - (4)].name).FLAG;

          if ( ( flag != 0          ) &&
               ( flag != VBL_EVENT  ) &&
               ( flag != VBL_STABLE ) )
          {
            if ( ( flag != VBL_RANGE     ) &&
                 ( flag != VBL_REV_RANGE ) )
            {
              sprintf( Buffer, "%ld", (vbl_y_vsp[(1) - (4)].name).LEFT );

              expr1.IDENT = Buffer;
              expr1.VEX   = (vexexpr *)0;
              expr1.TYPE  = -1;

              expr_name = vbl_crtvex( NOPS, expr1, VBL_EMPSTR, -1, -1, 0);
            }
            else
            {
              my_vbl_error(124,(vbl_y_vsp[(1) - (4)].name).NAME);
            }
          }
          else
          if ( ( (vbl_y_vsp[(1) - (4)].name).NAME[0] == '"' ) ||
               ( (vbl_y_vsp[(1) - (4)].name).NAME[0] == '\'') )
          {
            my_vbl_error(124,(vbl_y_vsp[(1) - (4)].name).NAME);
          }
          else
          {
            LocalName = VBL_COMPNAM;
            mode = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_SYMDFN);

            if( mode == 0 || mode == VBL_PRODFN )
            {
              my_vbl_error (17,(vbl_y_vsp[(1) - (4)].name).NAME);
            }

            /* LUDO_DYNAMIC */
            dynamic   = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_DYNDFN);
            left_bnd  = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_WMNDFN);
            right_bnd = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_WMXDFN);
              
            if ( ( ! (vbl_y_vsp[(1) - (4)].name).DYNAMIC ) &&
                 ( ! dynamic    ) )
            {
              left  = (vbl_y_vsp[(1) - (4)].name).LEFT;
              right = (vbl_y_vsp[(1) - (4)].name).RIGHT;
              
              if ( left_bnd <= right_bnd )
              {
                if (left <= right)
                {
                  in_bound  = left  - left_bnd;
                  out_bound = right - left_bnd;
                  if ((left < left_bnd) || (right > right_bnd))
                  {
                    my_vbl_error (36,(vbl_y_vsp[(1) - (4)].name).NAME);
                  }
                }
                else
                {
                  in_bound  = right - left_bnd;
                  out_bound = left  - left_bnd;
                  if ((left > right_bnd) || (right < left_bnd))
                  {
                    my_vbl_error (36,(vbl_y_vsp[(1) - (4)].name).NAME);
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
                    my_vbl_error (36,(vbl_y_vsp[(1) - (4)].name).NAME);
                  }
                }
                else
                {
                  in_bound  = right - right_bnd;
                  out_bound = left  - right_bnd;
                  if ((left > left_bnd) || (right < right_bnd))
                  {
                    my_vbl_error (36,(vbl_y_vsp[(1) - (4)].name).NAME);
                  }
                }
              }
            }
            else
            {
              left  = (vbl_y_vsp[(1) - (4)].name).LEFT;
              right = (vbl_y_vsp[(1) - (4)].name).RIGHT;
            }

            {
              long  type;

              expr1.IDENT = (vbl_y_vsp[(1) - (4)].name).NAME;
              type = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_TYPDFN);
              expr1.TYPE = type;
              expr1.SIGNED = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_SUNDFN);

              if ( (vbl_y_vsp[(1) - (4)].name).DYNAMIC )
              {
                if ( ( mode == VBL_FUNDFN ) ||
                     ( mode == VBL_TPEDFN ) ||
                     ( mode == VBL_PRODFN ) )
                {
                  expr1.VEX = (vexexpr *)left;
                  expr1 = 
                     vbl_crtvex(SUBVAR,expr1,VBL_EMPSTR,expr1.VEX->LEFT,expr1.VEX->RIGHT,0);
                }
                else
                {
                  expr1 = vbl_crtvex (NOPI,expr1,VBL_EMPSTR,left_bnd,right_bnd,dynamic);

                  if ( (vbl_y_vsp[(1) - (4)].name).DYNAMIC == VBL_UPTDFN ) 
                  {
                    if ( ( ! dynamic                                                  ) ||
                         ( ! isvexequalexpr( (vexexpr *)left_bnd, (vexexpr *)left   ) ) ||
                         ( ! isvexequalexpr( (vexexpr *)right_bnd, (vexexpr *)right ) ) )
                    {
                      expr1 = vbl_crtvex( VEX_TO, expr1,VBL_EMPSTR,left,right,0);
                    }
                  }
                  else
                  if ( (vbl_y_vsp[(1) - (4)].name).DYNAMIC == VBL_DWTDFN )
                  {
                    if ( ( ! dynamic                                                  ) ||
                         ( ! isvexequalexpr( (vexexpr *)left_bnd, (vexexpr *)left   ) ) ||
                         ( ! isvexequalexpr( (vexexpr *)right_bnd, (vexexpr *)right ) ) )
                    {
                      expr1 = vbl_crtvex( VEX_DOWNTO, expr1,VBL_EMPSTR,left,right,0);
                    }
                  }
                  else
                  {
                    expr1.VEX = 
                      createvexbinexpr( VEX_INDEX_N, 1, expr1.VEX, (vexexpr *)left );
                    expr1.VEX = 
                      createvexbinexpr( VEX_INDEX_N, 1, expr1.VEX, (vexexpr *)right );
                  }
                }
              }
              else
              {
                expr1 = vbl_crtvex (NOPI,expr1,VBL_EMPSTR,left,right,0);
              }

              if( flag == VBL_EVENT )
              {
                expr_name = vbl_crtvex (VEX_EVENT,expr1,VBL_EMPSTR,left,right,0);
              }
              else
              if( flag == VBL_STABLE )
              {
                expr1 = vbl_crtvex(VEX_EVENT,expr1,VBL_EMPSTR,left,right,0);
                expr_name    = vbl_crtvex (VEX_NOT,expr1,VBL_EMPSTR,-1,-1,0);
              }
              else
              {
                expr_name = expr1;
              }
            }
          }

            Formal = expr_name.VEX;
            Actual = (vbl_y_vsp[(4) - (4)].list).VEX;

          VBL_BEMAP = vbh_addvbmap( VBL_BEMAP, Formal, Actual, VBL_LINNUM);
          }
    break;

  case 76:
#line 1504 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vexexpr *Actual;

            Actual = (vbl_y_vsp[(1) - (1)].list).VEX;

            VBL_BEMAP = vbh_addvbmap( VBL_BEMAP, (vexexpr *)0, Actual, VBL_LINNUM);
          }
    break;

  case 77:
#line 1515 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 78:
#line 1519 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 79:
#line 1526 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            VBL_COMPNAM = (vbl_y_vsp[(2) - (2)].text);
            VBL_BEFPNT->BEMOD = vbh_addvbmod( VBL_BEFPNT->BEMOD, VBL_COMPNAM, VBL_LINNUM );
            addtab(hshtab,(vbl_y_vsp[(2) - (2)].text),VBL_MODNAM,VBL_SYMDFN,VBL_COMDFN);
            addtab(hshtab,(vbl_y_vsp[(2) - (2)].text),VBL_MODNAM,VBL_PNTDFN,(long)VBL_BEFPNT->BEMOD);
          }
    break;

  case 80:
#line 1537 "../../../src/vbl/src/vbl_bcomp_y.y"
    { VBL_COMPNAM = (char *)0;
            VBL_BEFPNT->BEMOD->BEPOR = 
               (vbpor_list *)reverse( (chain_list *)VBL_BEFPNT->BEMOD->BEPOR ); 
            VBL_BEFPNT->BEMOD->BEGEN = 
               (vbgen_list *)reverse( (chain_list *)VBL_BEFPNT->BEMOD->BEGEN ); 
          }
    break;

  case 82:
#line 1553 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 83:
#line 1559 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 84:
#line 1561 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 86:
#line 1570 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 87:
#line 1582 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char       *signame;
            vbpor_list *VbPort;
            vbtyp_list *VbType;
            short       Signed;
            long        Left;
            long        Right;
            long        AttrLeft;
            long        AttrRight;

            VbType = val_type( (vbl_y_vsp[(5) - (7)].name).NAME );

            if ( (vbl_y_vsp[(6) - (7)].name).DYNAMIC ) /* LUDO_DYNAMIC */
            {
              AttrLeft  = (vbl_y_vsp[(6) - (7)].name).LEFT;
              AttrRight = (vbl_y_vsp[(6) - (7)].name).RIGHT;
              Left      = AttrLeft;
              Right     = AttrRight;
            }
            else
            if ( ( (vbl_y_vsp[(6) - (7)].name).LEFT  == -1 ) &&
                 ( (vbl_y_vsp[(6) - (7)].name).RIGHT == -1 ) )
            {
              AttrLeft  = VbType->LEFT;
              AttrRight = VbType->RIGHT;
            }
            else
            {
              AttrLeft  = (vbl_y_vsp[(6) - (7)].name).LEFT;
              AttrRight = (vbl_y_vsp[(6) - (7)].name).RIGHT;
            }

            VBL_NM1LST = reverse( VBL_NM1LST );

            while (VBL_NM1LST != NULL)
            {
              signame = (char *)VBL_NM1LST->DATA;
              if (chktab (hshtab,signame,VBL_COMPNAM,VBL_SYMDFN) != 0)
                my_vbl_error (4,signame);

              VbPort = (vbpor_list *)vbl_addstr( 'M',(vbl_y_vsp[(4) - (7)].valu), VbType,
                                                 (vbl_y_vsp[(5) - (7)].name).TYPE,(vbl_y_vsp[(5) - (7)].name).FLAG,signame,
                                                 AttrLeft, AttrRight,
                                                 (vexexpr *)0,VBH_KIND_NONE, (vbl_y_vsp[(6) - (7)].name).DYNAMIC);

              addtab (hshtab,signame,VBL_COMPNAM,VBL_SYMDFN,(vbl_y_vsp[(4) - (7)].valu));

              Signed = ( IsVexNodeSigned( VbPort->TARGET ) != 0 );

              if ( ( (vbl_y_vsp[(5) - (7)].name).FLAG == 'I' ) && ( (vbl_y_vsp[(6) - (7)].name).DYNAMIC ) )
              {
                (vbl_y_vsp[(6) - (7)].name).DYNAMIC = VBL_DWTDFN;
              }

              if ( ! (vbl_y_vsp[(6) - (7)].name).DYNAMIC ) /* LUDO_DYNAMIC */
              {
                if ( IsVexAtomBit( VbPort->TARGET ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VbPort->TARGET->LEFT;
                  Right = VbPort->TARGET->RIGHT;
                }
              }

              addtab( hshtab,signame,VBL_COMPNAM,VBL_TYPDFN,(vbl_y_vsp[(5) - (7)].name).TYPE);
              addtab( hshtab,signame,VBL_COMPNAM,VBL_WMNDFN,Left  );
              addtab( hshtab,signame,VBL_COMPNAM,VBL_WMXDFN,Right );
              addtab( hshtab,signame,VBL_COMPNAM,VBL_ATLDFN,AttrLeft  );
              addtab( hshtab,signame,VBL_COMPNAM,VBL_ATRDFN,AttrRight );
              addtab( hshtab,signame,VBL_COMPNAM,VBL_LBLDFN,VBH_KIND_NONE);
              addtab( hshtab,signame,VBL_COMPNAM,VBL_PNTDFN,(long)VbPort->TARGET);
              addtab( hshtab,signame,VBL_COMPNAM,VBL_SUNDFN,Signed);
              addtab( hshtab,signame,VBL_COMPNAM,VBL_DYNDFN,(vbl_y_vsp[(6) - (7)].name).DYNAMIC);

              VBL_NM1LST = delchain (VBL_NM1LST, VBL_NM1LST);
           }
         }
    break;

  case 88:
#line 1667 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_ICNDFN; }
    break;

  case 89:
#line 1669 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_ICNDFN; }
    break;

  case 90:
#line 1671 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_OCNDFN; }
    break;

  case 91:
#line 1673 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_BCNDFN; }
    break;

  case 92:
#line 1675 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_BCNDFN; }
    break;

  case 93:
#line 1677 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_BCNDFN; }
    break;

  case 95:
#line 1687 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 96:
#line 1693 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 97:
#line 1695 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 98:
#line 1701 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 99:
#line 1705 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 100:
#line 1717 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char       *signame;
            vbgen_list *VbGen;
            vbtyp_list *VbType;
            vexexpr    *VexInit;
            short       Signed;
            long        Left;
            long        Right;
            long        AttrLeft;
            long        AttrRight;

            if ( (vbl_y_vsp[(6) - (7)].name).DYNAMIC )
            {
              my_vbl_error (6,NULL);
            }

            VbType = val_type( (vbl_y_vsp[(5) - (7)].name).NAME );

            if ( ( (vbl_y_vsp[(6) - (7)].name).LEFT  == -1 ) &&
                 ( (vbl_y_vsp[(6) - (7)].name).RIGHT == -1 ) )
            {
              AttrLeft  = VbType->LEFT;
              AttrRight = VbType->RIGHT;
            }
            else
            {
              AttrLeft  = (vbl_y_vsp[(6) - (7)].name).LEFT;
              AttrRight = (vbl_y_vsp[(6) - (7)].name).RIGHT;
            }

            VBL_NM1LST = reverse( VBL_NM1LST );

            while (VBL_NM1LST != NULL)
            {
              VexInit = (vbl_y_vsp[(7) - (7)].list).VEX;

              if ( ( VexInit          != (vexexpr    *)0 ) &&
                   ( VBL_NM1LST->NEXT != (chain_list *)0 ) )
              {
                VexInit = dupvexexpr( (vbl_y_vsp[(7) - (7)].list).VEX );
              }

              signame = (char *)VBL_NM1LST->DATA;
              if (chktab (hshtab,signame,VBL_COMPNAM,VBL_SYMDFN) != 0)
                my_vbl_error (4,signame);

              VexInit = simpvexexpr( VexInit );

              VbGen = (vbgen_list *)vbl_addstr( 'g',0, VbType,
                                                 (vbl_y_vsp[(5) - (7)].name).TYPE,(vbl_y_vsp[(5) - (7)].name).FLAG,signame,
                                                 AttrLeft, AttrRight,VexInit,VBH_KIND_NONE, 0);

              addtab (hshtab,signame,VBL_COMPNAM,VBL_SYMDFN,VBL_GENDFN);

              Signed = ( IsVexNodeSigned( VbGen->TARGET ) != 0 );

              if ( IsVexAtomBit( VbGen->TARGET ) )
              {
                Left  = -1;
                Right = -1;
              }
              else
              {
                Left  = VbGen->TARGET->LEFT;
                Right = VbGen->TARGET->RIGHT;
              }

              addtab( hshtab,signame,VBL_COMPNAM,VBL_TYPDFN,(vbl_y_vsp[(5) - (7)].name).TYPE);
              addtab( hshtab,signame,VBL_COMPNAM,VBL_WMNDFN,Left  );
              addtab( hshtab,signame,VBL_COMPNAM,VBL_WMXDFN,Right );
              addtab( hshtab,signame,VBL_COMPNAM,VBL_ATLDFN,AttrLeft  );
              addtab( hshtab,signame,VBL_COMPNAM,VBL_ATRDFN,AttrRight );
              addtab( hshtab,signame,VBL_COMPNAM,VBL_LBLDFN,VBH_KIND_NONE);
              addtab( hshtab,signame,VBL_COMPNAM,VBL_PNTDFN,(long)VbGen->TARGET);
              addtab( hshtab,signame,VBL_COMPNAM,VBL_SUNDFN,Signed);

              VBL_NM1LST = delchain (VBL_NM1LST, VBL_NM1LST);
           }
         }
    break;

  case 101:
#line 1805 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ( strcmp( (vbl_y_vsp[(4) - (5)].text), "string" ) )
            {
              my_vbl_error(9, (vbl_y_vsp[(2) - (5)].text) );
            }

            addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_SYMDFN,VBL_ATTDFN);
          }
    break;

  case 102:
#line 1818 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ( ! chktab(hshtab,(vbl_y_vsp[(2) - (2)].text),VBL_MODNAM,VBL_SYMDFN ) )
            {
              my_vbl_error(9,(vbl_y_vsp[(2) - (2)].text));
            }
          }
    break;

  case 103:
#line 1831 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char Buffer[ 512 ];
            long  length;

            length = strlen( (vbl_y_vsp[(9) - (10)].text) );

            strcpy( Buffer, (vbl_y_vsp[(9) - (10)].text) + 1);
            Buffer[ length -2 ] = '\0';

            (vbl_y_vsp[(9) - (10)].text) = namealloc( Buffer );

            VBL_BEFPNT->BEATR = vbh_addvbatr( VBL_BEFPNT->BEATR, (vbl_y_vsp[(2) - (10)].text), (vbl_y_vsp[(5) - (10)].text), (vbl_y_vsp[(7) - (10)].valu), (vbl_y_vsp[(9) - (10)].text), VBL_LINNUM ); 
          }
    break;

  case 104:
#line 1848 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_ENTITY; }
    break;

  case 105:
#line 1850 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_ARCHITECTURE; }
    break;

  case 106:
#line 1852 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_PACKAGE; }
    break;

  case 107:
#line 1854 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_FUNCTION; }
    break;

  case 108:
#line 1856 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_PROCEDURE; }
    break;

  case 109:
#line 1858 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_SUBTYPE; }
    break;

  case 110:
#line 1860 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_CONSTANT; }
    break;

  case 111:
#line 1862 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_VARIABLE; }
    break;

  case 112:
#line 1864 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_SIGNAL; }
    break;

  case 113:
#line 1866 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_LABEL; }
    break;

  case 114:
#line 1868 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_TYPE; }
    break;

  case 115:
#line 1870 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_CONFIGURATION; }
    break;

  case 116:
#line 1872 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_ATTR_COMPONENT; }
    break;

  case 117:
#line 1879 "../../../src/vbl/src/vbl_bcomp_y.y"
    { char buffer[ 128 ]; sprintf( buffer, "%s.%s", (vbl_y_vsp[(1) - (3)].text), (vbl_y_vsp[(3) - (3)].text) );
            (vbl_y_val.text) = namealloc( buffer ); 
            VBL_NM2LST = addchain( VBL_NM2LST, (vbl_y_val.text) );
          }
    break;

  case 118:
#line 1887 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 119:
#line 1889 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = namealloc( "all" ); }
    break;

  case 120:
#line 1893 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 121:
#line 1897 "../../../src/vbl/src/vbl_bcomp_y.y"
    { char buffer[ 128 ]; sprintf( buffer, "%s.%s", (vbl_y_vsp[(1) - (3)].text), (vbl_y_vsp[(3) - (3)].text) );
            (vbl_y_val.text) = namealloc( buffer );  }
    break;

  case 122:
#line 1905 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           vbfig_list  *ScanPkgFig;
            chain_list *ScanChain;
            char       *Name;
            char      **FuncArray;
            long         Index;   
            long        Left;
            long        Right;
            long        AttrLeft;
            long        AttrRight;
            long        Dir;
            long         Signed;
            vbcst_list *VbhCst;
            vbaux_list *VbhAux;
            vbmod_list *VbhMod;
            vbpor_list *VbhPor;
            vbgen_list *VbhGen;
            vbtyp_list *VbhType;
            vbpcs_list *VbhPcs;
            vexexpr    *VexAtom;
            chain_list *PackList;
            long        Dynamic;
            long        Oper;

                extern char *vbl_func_std_logic_1164[];
                extern char *vbl_func_std_logic_arith[];
                extern char *vbl_func_std_numeric_std[];

           long size=0;
           struct vbtyp *vbtyp_pnt;
             VBL_BEFPNT->NAME = (vbl_y_vsp[(2) - (3)].text);
           VBL_MODNAM = (vbl_y_vsp[(2) - (3)].text);

            for ( ScanChain  = VBL_NM2LST;
                  ScanChain != (chain_list *)0;
                  ScanChain  = ScanChain->NEXT )
            {
              FuncArray = (char **)0;

              if ( ! strcmp( ScanChain->DATA, "ieee.std_logic_1164.all" ) )
              {
                FuncArray = vbl_func_std_logic_1164;
              }
              else
              if ( ( ! strcmp( ScanChain->DATA, "ieee.std_logic_arith.all"    ) ) ||
                   ( ! strcmp( ScanChain->DATA, "ieee.std_logic_signed.all"   ) ) ||
                   ( ! strcmp( ScanChain->DATA, "ieee.std_logic_unsigned.all" ) ) )
              {
                FuncArray = vbl_func_std_logic_arith;
              }
              else
              if ( ( ! strcmp( ScanChain->DATA, "ieee.numeric_std.all" ) ) ||
                   ( ! strcmp( ScanChain->DATA, "ieee.numeric_bit.all" ) ) )
              {
                FuncArray = vbl_func_std_numeric_std;
              }
              else
              {
                for ( ScanPkgFig  = VBL_HEADFIG;
                      ScanPkgFig != (vbfig_list *)0;
                      ScanPkgFig  = ScanPkgFig->NEXT )
                {
                  if ( ( ScanPkgFig->IS_PACKAGE                         ) &&
                       ( ScanPkgFig->NAME == (char *)ScanChain->DATA ) )
                  {
                    for ( PackList  = VBL_BEFPNT->PACK_LIST;
                          PackList != (chain_list *)0;
                          PackList  = PackList->NEXT )
                    {
                      if ( PackList->DATA == ScanChain->DATA ) break; /* already included */
                    }

                    if ( PackList == (chain_list *)0 )
                    {
                      vbh_dupvbfig( VBL_BEFPNT, ScanPkgFig );
                    }

                    /* BECST */

                    for ( VbhCst  = ScanPkgFig->BECST;
                          VbhCst != (vbcst_list *)0;
                          VbhCst  = VbhCst->NEXT )
                    {
                      VbhType = vbh_getvbtyp( VBL_BEFPNT, VbhCst->TYPE->NAME );
                      VexAtom = VbhCst->TARGET;

                      if ( ! IsVexNodeAtom( VexAtom ) )
                      {
                        my_fprintf( stdout, "dynamic declaration not supported !\n" );
                        autexit( 1 );
                      }

                      Name = GetVexAtomValue( VexAtom );

		      /*
                      if ( chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN ) )
                      {
                        my_vbl_error( 10, Name );
                      }
		      */

                      if ( IsVexAtomBit( VexAtom ) )
                      {
                        Left  = -1;
                        Right = -1;
                      }
                      else
                      {
                        Left  = VexAtom->LEFT;
                        Right = VexAtom->RIGHT;
                      }

                      Signed    = ( IsVexNodeSigned( VexAtom ) != 0 );
                      AttrLeft  = Left;
                      AttrRight = Right;

                      addtab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN, VBL_CSTDFN     );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_TYPDFN, VbhType->INDEX );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_WMNDFN, Left           );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_WMXDFN, Right          );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_ATLDFN, AttrLeft       );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_ATRDFN, AttrRight      );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_LBLDFN, 0              );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_PNTDFN, (long)VbhCst->VEX  );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_SUNDFN, Signed         );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_DYNDFN, 0              );
                    }

                    /* BEAUX */

                    for ( VbhAux  = ScanPkgFig->BEAUX;
                          VbhAux != (vbaux_list *)0;
                          VbhAux  = VbhAux->NEXT )
                    {
                      VbhType = vbh_getvbtyp( VBL_BEFPNT, VbhAux->TYPE->NAME );
                      VexAtom = VbhAux->TARGET;

                      if ( ! IsVexNodeAtom( VexAtom ) )
                      {
                        my_fprintf( stdout, "dynamic declaration not supported !\n" );
                        autexit( 1 );
                      }

                      Name = GetVexAtomValue( VexAtom );

		      /*
                      if ( chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN ) )
                      {
                        my_vbl_error( 10, Name );
                      }
		      */

                      Signed    = (IsVexNodeSigned( VexAtom ) != 0);
                      Left      = VexAtom->LEFT;
                      Right     = VexAtom->RIGHT;
                      AttrLeft  = Left;
                      AttrRight = Right;

                      addtab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN, VBL_SGNDFN     );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_TYPDFN, VbhType->INDEX );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_WMNDFN, Left           );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_WMXDFN, Right          );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_ATLDFN, AttrLeft       );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_ATRDFN, AttrRight      );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_LBLDFN, VbhAux->KIND   );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_PNTDFN, (long)VexAtom  );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_SUNDFN, Signed         );
                      addtab( hshtab, Name, VBL_MODNAM, VBL_DYNDFN, 0              );
                    }

                    /* BEPCS */

                    for ( VbhPcs  = ScanPkgFig->BEPCS;
                          VbhPcs != (vbpcs_list *)0; 
                          VbhPcs  = VbhPcs->NEXT )
                    {
                      addtab( hshtab, VbhPcs->LABEL, VBL_MODNAM, VBL_SYMDFN, VBL_LBLDFN );
                    }

                    /* BEFUN TO BE DONE */

                    if ( ScanPkgFig->BEFUN != (vbfun_list *)0 )
                    {
                      my_fprintf( stdout, "function in package not supported !\n" );
                      autexit( 1 );
                    }

                    /* BEATR TO BE DONE */

                    if ( ScanPkgFig->BEATR != (vbatr_list *)0 )
                    {
                      my_fprintf( stdout, "attribute in package not supported !\n" );
                      autexit( 1 );
                    }

                    /* BEGNR TO BE DONE ??? */

                    if ( ScanPkgFig->BEGNR != (vbgnr_list *)0 )
                    {
                      my_fprintf( stdout, "generate in package not supported !\n" );
                      autexit( 1 );
                    }

                    /* BEMOD */

                    for ( VbhMod  = ScanPkgFig->BEMOD;
                          VbhMod != (vbmod_list *)0;
                          VbhMod  = VbhMod->NEXT )
                    {
                      addtab(hshtab,VbhMod->NAME,VBL_MODNAM,VBL_SYMDFN,VBL_COMDFN);
                      addtab(hshtab,VbhMod->NAME,VBL_MODNAM,VBL_PNTDFN,(long)VbhMod);

                      for ( VbhGen  = VbhMod->BEGEN;
                            VbhGen != (vbgen_list *)0;
                            VbhGen  = VbhGen->NEXT )
                      {
                        VbhType = vbh_getvbtyp( VBL_BEFPNT, VbhGen->TYPE->NAME );
                        VexAtom = VbhGen->TARGET;
  
                        if ( ! IsVexNodeAtom( VexAtom ) )
                        {
                          my_fprintf( stdout, "dynamic declaration not supported !\n" );
                          autexit( 1 );
                        }
  
                        Name = GetVexAtomValue( VexAtom );
  
			/*
                        if ( chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN ) )
                        {
                          my_vbl_error( 10, Name );
                        }
			*/
  
                        Signed    = (IsVexNodeSigned( VexAtom ) != 0);
                        Left      = VexAtom->LEFT;
                        Right     = VexAtom->RIGHT;
                        AttrLeft  = Left;
                        AttrRight = Right;
  
                        addtab( hshtab, Name, VbhMod->NAME, VBL_SYMDFN, VBL_GENDFN     );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_TYPDFN, VbhType->INDEX );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_WMNDFN, Left           );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_WMXDFN, Right          );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_ATLDFN, AttrLeft       );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_ATRDFN, AttrRight      );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_LBLDFN, VBH_KIND_NONE  );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_PNTDFN, (long)VexAtom  );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_SUNDFN, Signed         );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_DYNDFN, 0              );
                      }

                      for ( VbhPor  = VbhMod->BEPOR;
                            VbhPor != (vbpor_list *)0;
                            VbhPor  = VbhPor->NEXT )
                      {
                        VbhType = vbh_getvbtyp( VBL_BEFPNT, VbhPor->TYPE->NAME );
                        VexAtom = VbhPor->TARGET;
  
                        if ( ! IsVexNodeAtom( VexAtom ) )
                        {
                          Name    = getvexatomname( VexAtom );
                          Dynamic = 0;

                          if ( IsVexNodeOper( VexAtom ) )
                          {
                            Oper = GetVexOperValue( VexAtom );

                            if ( Oper == VEX_DOWNTO    ) Dynamic = VBL_DWTDFN;
                            else
                            if ( Oper == VEX_TO        ) Dynamic = VBL_UPTDFN;

                            Signed    = (IsVexNodeSigned( VexAtom ) != 0);
                            Left      = (long)GetVexOperand( VexAtom->OPERAND->NEXT );
                            Right     = (long)GetVexOperand( VexAtom->OPERAND->NEXT->NEXT );
                            AttrLeft  = Left;
                            AttrRight = Right;
                          }

                          if ( ! Dynamic )
                          {
                            my_fprintf( stdout, "such dynamic declaration not supported !\n" );
                            autexit( 1 );
                          }
                        }
                        else
                        {
                          Name = GetVexAtomValue( VexAtom );

                          Signed    = (IsVexNodeSigned( VexAtom ) != 0);
                          Left      = VexAtom->LEFT;
                          Right     = VexAtom->RIGHT;
                          AttrLeft  = Left;
                          AttrRight = Right;
                          Dynamic   = 0;
                        }
  
			/*
                        if ( chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN ) )
                        {
                          my_vbl_error( 10, Name );
                        }
			*/
  
                        if ( VbhPor->DIR == 'I' ) Dir = VBL_ICNDFN;
                        else 
                        if ( VbhPor->DIR == 'O' ) Dir = VBL_OCNDFN;
                        else                      Dir = VBL_BCNDFN;
  
                        addtab( hshtab, Name, VbhMod->NAME, VBL_SYMDFN, Dir            );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_TYPDFN, VbhType->INDEX );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_WMNDFN, Left           );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_WMXDFN, Right          );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_ATLDFN, AttrLeft       );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_ATRDFN, AttrRight      );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_LBLDFN, VbhPor->KIND   );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_PNTDFN, (long)VexAtom  );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_SUNDFN, Signed         );
                        addtab( hshtab, Name, VbhMod->NAME, VBL_DYNDFN, Dynamic        );
                      }
                    }

                    /* BEINS */

                    if ( ScanPkgFig->BEINS != (vbins_list *)0 )
                    {
                      my_fprintf( stdout, "instance in package not supported !\n" );
                      autexit( 1 );
                    }

                    break;
                  }
                }

                if ( ScanPkgFig == (vbfig_list *)0 )
                {
                  my_vbl_error(127,(char *)ScanChain->DATA);
                }
              }

              if ( FuncArray != (char **)0 )
              {
                Index = 0;

                while ( FuncArray[ Index ] != NULL )
                {
                  Name = namealloc( FuncArray[ Index ] );
                  addtab ( hshtab, Name, VBL_MODNAM, VBL_SYMDFN, VBL_FUNDFN );
                  Index++;
                }
              }
            }

            freechain( VBL_NM2LST );
            VBL_NM2LST = NULL;

           vbtyp_pnt = VBL_BEFPNT->BETYP;
           while(vbtyp_pnt)
           {
             size++;
              vbtyp_pnt = vbtyp_pnt->NEXT;
           }

           vbtyp_pnt  = VBL_BEFPNT->BETYP;
           VBL_NUMTYP = 0;
           while(vbtyp_pnt)
           {
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_SYMDFN,VBL_TPEDFN);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_LBLDFN,vbtyp_pnt->CLASS);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_TYPDFN,vbtyp_pnt->INDEX);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_WMNDFN,vbtyp_pnt->LEFT);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_WMXDFN,vbtyp_pnt->RIGHT);
              addtab(hshtab,vbtyp_pnt->NAME,VBL_MODNAM,VBL_PNTDFN,(long)vbtyp_pnt);
              vbtyp_pnt = vbtyp_pnt->NEXT;
              VBL_NUMTYP++;
           }

         }
    break;

  case 123:
#line 2288 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
             if (((vbl_y_vsp[(8) - (9)].text) != NULL) && ((vbl_y_vsp[(8) - (9)].text) != (vbl_y_vsp[(2) - (9)].text))) my_vbl_error (1,(vbl_y_vsp[(8) - (9)].text));
          }
    break;

  case 124:
#line 2293 "../../../src/vbl/src/vbl_bcomp_y.y"
    { my_vbl_error (2,NULL); }
    break;

  case 125:
#line 2298 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
          (vbl_y_val.name).FLAG   = 'U';
          (vbl_y_val.name).LEFT   = -1;
          (vbl_y_val.name).RIGHT  = -1;
          (vbl_y_val.name).DYNAMIC = 0;
          (vbl_y_val.name).AGGREG  = 0;
        }
    break;

  case 126:
#line 2306 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
          (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name);
        }
    break;

  case 127:
#line 2313 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
           (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name);
         }
    break;

  case 128:
#line 2320 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           (vbl_y_val.name) = (vbl_y_vsp[(2) - (3)].name);
         }
    break;

  case 129:
#line 2328 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(2) - (2)].name); }
    break;

  case 130:
#line 2333 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           if ( ( (vbl_y_vsp[(1) - (1)].name).FLAG != VBL_RANGE     ) &&
                ( (vbl_y_vsp[(1) - (1)].name).FLAG != VBL_REV_RANGE ) )
           {
             my_vbl_error (32,NULL);
           }

           (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name);
         }
    break;

  case 131:
#line 2345 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           long Left;
           long Right;
           long  ErrorL;
           long  ErrorR;

           ErrorL = vbl_vextonum( (vbl_y_vsp[(1) - (3)].list).VEX, &Left  );
           ErrorR = vbl_vextonum( (vbl_y_vsp[(3) - (3)].list).VEX, &Right );

           (vbl_y_val.name).NAME   = NULL;
           (vbl_y_val.name).TYPE   = (vbl_y_vsp[(1) - (3)].list).TYPE;
           (vbl_y_val.name).SIGNED = 0;
           (vbl_y_val.name).FLAG   = 'A';

           if ( ( ! ErrorL ) && ( ! ErrorR ) )
           {
             if (((Left > Right) && ((vbl_y_vsp[(2) - (3)].valu) == VBL_UPTDFN)) ||
                  ((Left < Right) && ((vbl_y_vsp[(2) - (3)].valu) == VBL_DWTDFN)))
             {
               my_vbl_error (32,NULL);
             }

             (vbl_y_val.name).LEFT   = Left;
             (vbl_y_val.name).RIGHT  = Right;
             (vbl_y_val.name).DYNAMIC = 0;
             (vbl_y_val.name).AGGREG  = 0;
           }
           else
           {
             (vbl_y_val.name).LEFT    = (long)(vbl_y_vsp[(1) - (3)].list).VEX;
             (vbl_y_val.name).RIGHT   = (long)(vbl_y_vsp[(3) - (3)].list).VEX;
             (vbl_y_val.name).DYNAMIC = (vbl_y_vsp[(2) - (3)].valu);
             (vbl_y_val.name).AGGREG  = 0;
           }
         }
    break;

  case 132:
#line 2384 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_UPTDFN; }
    break;

  case 133:
#line 2386 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_DWTDFN; }
    break;

  case 135:
#line 2392 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 136:
#line 2401 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 139:
#line 2414 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 140:
#line 2418 "../../../src/vbl/src/vbl_bcomp_y.y"
    { my_vbl_error (3,NULL); }
    break;

  case 141:
#line 2424 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 143:
#line 2432 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 144:
#line 2444 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char       *signame;
            vbpor_list *VbPort;
            vbtyp_list *VbType;
            vexexpr    *VexInit;
            char        buffer[ 40 ];
            short       Signed;
            long        Left;
            long        Right;
            long        AttrLeft;
            long        AttrRight;
            struct vbl_expr expr1;

            /* ###----------------------------------------------### */
            /*    First, check the validity of the declaration.     */
            /* Then, for each port, create the apropriate set of    */
            /* structures (vbrin, vbpor, vbout, vbbus)              */
            /* ###----------------------------------------------### */

            VbType = val_type( (vbl_y_vsp[(5) - (8)].name).NAME );

            if ( (vbl_y_vsp[(6) - (8)].name).DYNAMIC ) /* LUDO_DYNAMIC */
            {
              AttrLeft  = (vbl_y_vsp[(6) - (8)].name).LEFT;
              AttrRight = (vbl_y_vsp[(6) - (8)].name).RIGHT;
              Left      = AttrLeft;
              Right     = AttrRight;
            }
            else
            if ( ( (vbl_y_vsp[(6) - (8)].name).LEFT  == -1 ) &&
                 ( (vbl_y_vsp[(6) - (8)].name).RIGHT == -1 ) )
            {
              AttrLeft  = VbType->LEFT;
              AttrRight = VbType->RIGHT;
            }
            else
            {
              AttrLeft  = (vbl_y_vsp[(6) - (8)].name).LEFT;
              AttrRight = (vbl_y_vsp[(6) - (8)].name).RIGHT;
            }

            VBL_NM1LST = reverse (VBL_NM1LST);

            if ( ! (vbl_y_vsp[(6) - (8)].name).DYNAMIC ) /* LUDO_DYNAMIC */
            {
              if ( (vbl_y_vsp[(8) - (8)].list).VEX == (vexexpr *)0 )
              {
                if ( VbType->CLASS == 'I' )
                {
                  sprintf( buffer, "%ld", AttrLeft );
                  expr1.IDENT = buffer;
                  expr1.TYPE  = -1;
                  expr1.VEX   = (vexexpr *)0;
                  expr1 = vbl_crtvex( NOPS, expr1,VBL_EMPSTR,-1,-1,0);

                  (vbl_y_vsp[(8) - (8)].list).VEX = expr1.VEX;
                }
              }
            }

            while (VBL_NM1LST != NULL)
            {
              VexInit = (vbl_y_vsp[(8) - (8)].list).VEX;

              if ( ( VexInit          != (vexexpr    *)0 ) &&
                   ( VBL_NM1LST->NEXT != (chain_list *)0 ) )
              {
                VexInit = dupvexexpr( (vbl_y_vsp[(8) - (8)].list).VEX );
              }

              signame = (char *)VBL_NM1LST->DATA;
              if (chktab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN) != 0)
                my_vbl_error (4,signame);

              VbPort = (vbpor_list *)vbl_addstr( 'P',(vbl_y_vsp[(4) - (8)].valu), VbType,
                                                 (vbl_y_vsp[(5) - (8)].name).TYPE,(vbl_y_vsp[(5) - (8)].name).FLAG,signame,
                                                 AttrLeft, AttrRight,VexInit,(vbl_y_vsp[(7) - (8)].valu), (vbl_y_vsp[(6) - (8)].name).DYNAMIC);

              addtab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN,(vbl_y_vsp[(4) - (8)].valu));

              Signed = ( IsVexNodeSigned( VbPort->TARGET ) != 0 );

              if ( ! (vbl_y_vsp[(6) - (8)].name).DYNAMIC ) /* LUDO_DYNAMIC */
              {
                if ( IsVexAtomBit( VbPort->TARGET ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VbPort->TARGET->LEFT;
                  Right = VbPort->TARGET->RIGHT;
                }
              }

              addtab( hshtab,signame,VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(5) - (8)].name).TYPE);
              addtab( hshtab,signame,VBL_MODNAM,VBL_WMNDFN,Left  );
              addtab( hshtab,signame,VBL_MODNAM,VBL_WMXDFN,Right );
              addtab( hshtab,signame,VBL_MODNAM,VBL_ATLDFN,AttrLeft  );
              addtab( hshtab,signame,VBL_MODNAM,VBL_ATRDFN,AttrRight );
              addtab( hshtab,signame,VBL_MODNAM,VBL_LBLDFN,(vbl_y_vsp[(7) - (8)].valu));
              addtab( hshtab,signame,VBL_MODNAM,VBL_PNTDFN,(long)VbPort->TARGET);
              addtab( hshtab,signame,VBL_MODNAM,VBL_SUNDFN,Signed);
              addtab( hshtab,signame,VBL_MODNAM,VBL_DYNDFN,(vbl_y_vsp[(6) - (8)].name).DYNAMIC);

              VBL_NM1LST = delchain (VBL_NM1LST, VBL_NM1LST);
            }
         }
    break;

  case 145:
#line 2554 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           my_vbl_error (6,NULL);
         }
    break;

  case 146:
#line 2563 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 147:
#line 2565 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 149:
#line 2574 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
          }
    break;

  case 150:
#line 2586 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char       *signame;
            char       *Value;
            vbgen_list *VbGen;
            vbmap_list *VbMap;
            vbtyp_list *VbType;
            vexexpr    *VexInit;
            char        buffer[ 40 ];
            short       Signed;
            long        Left;
            long        Right;
            long        AttrLeft;
            long        AttrRight;
            struct vbl_expr expr1;

            /* ###----------------------------------------------### */
            /*    First, check the validity of the declaration.     */
            /* Then, for each port, create the apropriate set of    */
            /* structures (vbrin, vbgen, vbout, vbbus)              */
            /* ###----------------------------------------------### */

            if ( (vbl_y_vsp[(6) - (7)].name).DYNAMIC )
            {
              my_vbl_error (126,NULL);
            }

            VbType = val_type( (vbl_y_vsp[(5) - (7)].name).NAME );

            if ( ( (vbl_y_vsp[(6) - (7)].name).LEFT  == -1 ) &&
                 ( (vbl_y_vsp[(6) - (7)].name).RIGHT == -1 ) )
            {
              AttrLeft  = VbType->LEFT;
              AttrRight = VbType->RIGHT;
            }
            else
            {
              AttrLeft  = (vbl_y_vsp[(6) - (7)].name).LEFT;
              AttrRight = (vbl_y_vsp[(6) - (7)].name).RIGHT;
            }

            VBL_NM1LST = reverse (VBL_NM1LST);

            if ( (vbl_y_vsp[(7) - (7)].list).VEX == (vexexpr *)0 )
            {
              if ( VbType->CLASS == 'I' )
              {
                sprintf( buffer, "%ld", AttrLeft );
                expr1.IDENT = buffer;
                expr1.TYPE  = -1;
                expr1.VEX   = (vexexpr *)0;
                expr1 = vbl_crtvex( NOPS, expr1,VBL_EMPSTR,-1,-1,0);

                (vbl_y_vsp[(7) - (7)].list).VEX = expr1.VEX;
              }
            }

            while (VBL_NM1LST != NULL)
            {
              VexInit = (vbl_y_vsp[(7) - (7)].list).VEX;

              if ( ( VexInit          != (vexexpr    *)0 ) &&
                   ( VBL_NM1LST->NEXT != (chain_list *)0 ) )
              {
                VexInit = dupvexexpr( (vbl_y_vsp[(7) - (7)].list).VEX );
              }

              signame = (char *)VBL_NM1LST->DATA;
              if (chktab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN) != 0)
                my_vbl_error (4,signame);

              for ( VbMap  = VBL_GENMAP;
                    VbMap != (vbmap_list *)0;
                    VbMap  = VbMap->NEXT )
              {
                Value = GetVexAtomValue( VbMap->FORMAL );

                if ( Value == signame )
                {
                  VexInit = dupvexexpr( VbMap->ACTUAL );

                  break;
                }
              }

              VbGen = (vbgen_list *)vbl_addstr( 'G',0, VbType,
                                                 (vbl_y_vsp[(5) - (7)].name).TYPE,(vbl_y_vsp[(5) - (7)].name).FLAG,signame,
                                                 AttrLeft,
                                                 AttrRight,VexInit,VBH_KIND_NONE, 0);

              addtab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN,VBL_GENDFN);

              Signed = ( IsVexNodeSigned( VbGen->TARGET ) != 0 );

              if ( IsVexAtomBit( VbGen->TARGET ) )
              {
                Left  = -1;
                Right = -1;
              }
              else
              {
                Left  = VbGen->TARGET->LEFT;
                Right = VbGen->TARGET->RIGHT;
              }

              addtab( hshtab,signame,VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(5) - (7)].name).TYPE);
              addtab( hshtab,signame,VBL_MODNAM,VBL_WMNDFN,Left  );
              addtab( hshtab,signame,VBL_MODNAM,VBL_WMXDFN,Right );
              addtab( hshtab,signame,VBL_MODNAM,VBL_ATLDFN,AttrLeft  );
              addtab( hshtab,signame,VBL_MODNAM,VBL_LBLDFN,VBH_KIND_NONE);
              addtab( hshtab,signame,VBL_MODNAM,VBL_ATRDFN,AttrRight );
              addtab( hshtab,signame,VBL_MODNAM,VBL_PNTDFN,(long)VbGen->TARGET);
              addtab( hshtab,signame,VBL_MODNAM,VBL_SUNDFN,Signed);

              VBL_NM1LST = delchain (VBL_NM1LST, VBL_NM1LST);
            }
         }
    break;

  case 152:
#line 2708 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 154:
#line 2714 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 156:
#line 2720 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 157:
#line 2725 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_ICNDFN; }
    break;

  case 158:
#line 2727 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_ICNDFN; }
    break;

  case 159:
#line 2729 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_OCNDFN; }
    break;

  case 160:
#line 2731 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_BCNDFN; }
    break;

  case 161:
#line 2740 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ((vbl_y_vsp[(4) - (5)].text) != VBL_MODNAM) my_vbl_error (1,(vbl_y_vsp[(4) - (5)].text));
          }
    break;

  case 162:
#line 2749 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
              if (((vbl_y_vsp[(11) - (12)].text) != NULL) && ((vbl_y_vsp[(11) - (12)].text) != (vbl_y_vsp[(2) - (12)].text))) my_vbl_error (7,(vbl_y_vsp[(11) - (12)].text));
          }
    break;

  case 163:
#line 2754 "../../../src/vbl/src/vbl_bcomp_y.y"
    { my_vbl_error (8,NULL); }
    break;

  case 177:
#line 2780 "../../../src/vbl/src/vbl_bcomp_y.y"
    { my_vbl_error (9,NULL); }
    break;

  case 178:
#line 2785 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 180:
#line 2794 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 181:
#line 2798 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 184:
#line 2816 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char         *signame;
            char         *codedsigname;
            char          buffer[ 128 ];
            vbtyp_list   *TypeEnum;
            long           EnumSize;
            vbarg_list   *VbPar;
            short         Signed;
            long          Left;
            long          Right;
            long          AttrLeft;
            long          AttrRight;

            if ( (vbl_y_vsp[(6) - (6)].name).DYNAMIC )
            {
              my_vbl_error(86,0);
            }

            if ( (vbl_y_vsp[(1) - (6)].valu) == VBH_CLASS_NONE )
            {
              if ( (vbl_y_vsp[(4) - (6)].valu) == VBL_ICNDFN ) (vbl_y_vsp[(1) - (6)].valu) = VBH_CLASS_CONSTANT;
              else                    (vbl_y_vsp[(1) - (6)].valu) = VBH_CLASS_VARIABLE;
            }

            TypeEnum = val_type( (vbl_y_vsp[(5) - (6)].name).NAME );
            EnumSize = vbl_codeSize( TypeEnum->SIZE - 1 );

            if ( ( (vbl_y_vsp[(6) - (6)].name).LEFT  == -1 ) &&
                 ( (vbl_y_vsp[(6) - (6)].name).RIGHT == -1 ) )
            {
              AttrLeft  = TypeEnum->LEFT;
              AttrRight = TypeEnum->RIGHT;
            }
            else
            {
              AttrLeft  = (vbl_y_vsp[(6) - (6)].name).LEFT;
              AttrRight = (vbl_y_vsp[(6) - (6)].name).RIGHT;
            }

            if (chktab( hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_SYMDFN ) == 0)
            {
              VBL_NM1LST = reverse( VBL_NM1LST );
              while (VBL_NM1LST != NULL)
              {
                if ( ( TypeEnum->CLASS == 'E'          ) &&
                     ( TypeEnum->INDEX >= VBH_MAX_TYPE ) )
                {
                  signame = (char *)VBL_NM1LST->DATA;
  
                  if (chktab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN) != 0)
                        my_vbl_error (80,signame);
  
                  sprintf (buffer, "%s.cod.%s", VBL_FUNCNAM, signame);
                  codedsigname = namealloc ( buffer );
  
                  if (chktab (hshtab,codedsigname,VBL_FUNCNAM,VBL_SYMDFN) != 0)
                        my_vbl_error (80,codedsigname);
/*\
                  VbPar = (vbarg_list *)vbl_addstr( 'p',$4,val_type($5.NAME),$5.TYPE,
                          $5.FLAG,codedsigname, AttrLeft,AttrRight,NULL,$1, 0);
  
                  Signed = ( IsVexNodeSigned( VbPar->TARGET ) != 0 );
  
                  if ( IsVexAtomBit( VbPar->TARGET ) )
                  {
                    Left  = -1;
                    Right = -1;
                  }
                  else
                  {
                    Left  = VbPar->TARGET->LEFT;
                    Right = VbPar->TARGET->RIGHT;
                  }
\*/
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_SYMDFN,VBL_PARDFN);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_TYPDFN,(vbl_y_vsp[(5) - (6)].name).TYPE);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_WMNDFN,-1);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_WMXDFN,-1);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_LBLDFN,0);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_PNTDFN,0);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_SUNDFN,0 );
  
                  if ( EnumSize > 1 )
                  {
                    VbPar = (vbarg_list *)vbl_addstr( 'p',(vbl_y_vsp[(4) - (6)].valu),
                            get_type(VBH_TYPE_BIT_VECTOR), VBH_TYPE_BIT_VECTOR,
                            'U',signame, 0,EnumSize-1,NULL,(vbl_y_vsp[(1) - (6)].valu), 0);
  
                    Signed = ( IsVexNodeSigned( VbPar->TARGET ) != 0 );
  
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN,VBL_PARDFN);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_TYPDFN,VBH_TYPE_BIT_VECTOR);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMNDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMXDFN,EnumSize-1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATLDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATRDFN,EnumSize-1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_LBLDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_PNTDFN,(long)VbPar->TARGET);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_SUNDFN,Signed);
                  }
                  else
                  {
                    VbPar = (vbarg_list *)vbl_addstr( 'p',(vbl_y_vsp[(4) - (6)].valu),
                            get_type(VBH_TYPE_BIT),VBH_TYPE_BIT,
                            'S',signame, -1,-1 ,NULL,(vbl_y_vsp[(1) - (6)].valu), 0);
  
                    Signed = ( IsVexNodeSigned( VbPar->TARGET ) != 0 );
  
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN,VBL_PARDFN);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_TYPDFN,VBH_TYPE_BIT);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMNDFN,-1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMXDFN,-1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATLDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATRDFN,1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_LBLDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_PNTDFN,(long)VbPar->TARGET);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_SUNDFN,Signed);
                  }
                }
                else
                {
                  signame = (char *)VBL_NM1LST->DATA;
  
                  if (chktab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN) != 0)
                      my_vbl_error (80,signame);
  
                  VbPar = (vbarg_list *)vbl_addstr( 'p',(vbl_y_vsp[(4) - (6)].valu),
                          val_type((vbl_y_vsp[(5) - (6)].name).NAME),(vbl_y_vsp[(5) - (6)].name).TYPE, (vbl_y_vsp[(5) - (6)].name).FLAG,signame,
                          AttrLeft,AttrRight,NULL,(vbl_y_vsp[(1) - (6)].valu), 0);

                  Signed = ( IsVexNodeSigned( VbPar->TARGET ) != 0 );

                  if ( IsVexAtomVarWidth( VbPar->TARGET ) )
                  {
                    Left  = -2;
                    Right = -2;
                  }
                  else
                  if ( IsVexAtomBit( VbPar->TARGET ) )
                  {
                    Left  = -1;
                    Right = -1;
                  }
                  else
                  {
                    Left  = VbPar->TARGET->LEFT;
                    Right = VbPar->TARGET->RIGHT;
                  }
  
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN,VBL_PARDFN);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_TYPDFN,(vbl_y_vsp[(5) - (6)].name).TYPE);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMNDFN,Left);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMXDFN,Right);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATLDFN,AttrLeft);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATRDFN,AttrRight);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_LBLDFN,0);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_PNTDFN,(long)VbPar->TARGET);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_SUNDFN,Signed);
                }
  
                VBL_NM1LST = delchain (VBL_NM1LST,VBL_NM1LST);
              }
            }
            else
            {
              freechain( VBL_NM1LST );
              VBL_NM1LST = (chain_list *)0;
            }
          }
    break;

  case 185:
#line 2989 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_CLASS_NONE; }
    break;

  case 186:
#line 2991 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_CLASS_VARIABLE; }
    break;

  case 187:
#line 2993 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_CLASS_CONSTANT; }
    break;

  case 188:
#line 2995 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_CLASS_SIGNAL; }
    break;

  case 189:
#line 3000 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_ICNDFN; }
    break;

  case 190:
#line 3002 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_ICNDFN; }
    break;

  case 191:
#line 3004 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_OCNDFN; }
    break;

  case 192:
#line 3006 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_BCNDFN; }
    break;

  case 194:
#line 3015 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 195:
#line 3019 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 198:
#line 3037 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char         *signame;
            char         *codedsigname;
            char          buffer[ 128 ];
            vbtyp_list   *TypeEnum;
            long           EnumSize;
            vbarg_list   *VbPar;
            short         Signed;
            long          Left;
            long          Right;
            long          AttrLeft;
            long          AttrRight;

            if ( (vbl_y_vsp[(6) - (6)].name).DYNAMIC )
            {
              my_vbl_error(86,0);
            }

            if ( (vbl_y_vsp[(1) - (6)].valu) == VBH_CLASS_NONE ) (vbl_y_vsp[(1) - (6)].valu) = VBH_CLASS_CONSTANT;

            TypeEnum = val_type( (vbl_y_vsp[(5) - (6)].name).NAME );
            EnumSize = vbl_codeSize( TypeEnum->SIZE - 1 );

            if ( ( (vbl_y_vsp[(6) - (6)].name).LEFT  == -1 ) &&
                 ( (vbl_y_vsp[(6) - (6)].name).RIGHT == -1 ) )
            {
              AttrLeft  = TypeEnum->LEFT;
              AttrRight = TypeEnum->RIGHT;
            }
            else
            {
              AttrLeft  = (vbl_y_vsp[(6) - (6)].name).LEFT;
              AttrRight = (vbl_y_vsp[(6) - (6)].name).RIGHT;
            }

            if (chktab( hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_SYMDFN ) == 0)
            {
              VBL_NM1LST = reverse( VBL_NM1LST );
              while (VBL_NM1LST != NULL)
              {
                if ( ( TypeEnum->CLASS == 'E'          ) &&
                     ( TypeEnum->INDEX >= VBH_MAX_TYPE ) )
                {
                  signame = (char *)VBL_NM1LST->DATA;
  
                  if (chktab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN) != 0)
                        my_vbl_error (80,signame);
  
                  sprintf (buffer, "%s.cod.%s", VBL_FUNCNAM, signame);
                  codedsigname = namealloc ( buffer );
  
                  if (chktab (hshtab,codedsigname,VBL_FUNCNAM,VBL_SYMDFN) != 0)
                        my_vbl_error (80,codedsigname);
/*\
                  VbPar = (vbarg_list *)vbl_addstr('p',$4,
                          val_type($5.NAME),$5.TYPE, 
                          $5.FLAG,codedsigname, AttrLeft,AttrRight, NULL,$1, 0);
  
                  Signed = ( IsVexNodeSigned( VbPar->TARGET ) != 0 );
  
                  if ( IsVexAtomBit( VbPar->TARGET ) )
                  {
                    Left  = -1;
                    Right = -1;
                  }
                  else
                  {
                    Left  = VbPar->TARGET->LEFT;
                    Right = VbPar->TARGET->RIGHT;
                  }
\*/
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_SYMDFN,VBL_PARDFN);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_TYPDFN,(vbl_y_vsp[(5) - (6)].name).TYPE);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_WMNDFN,-1);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_WMXDFN,-1);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_LBLDFN,0);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_PNTDFN,0);
                  addtab(hshtab,codedsigname,VBL_FUNCNAM,VBL_SUNDFN,0);
  
                  if ( EnumSize > 1 )
                  {
                    VbPar = (vbarg_list *)vbl_addstr( 'p',(vbl_y_vsp[(4) - (6)].valu),
                            get_type(VBH_TYPE_BIT_VECTOR), VBH_TYPE_BIT_VECTOR,
                            'U',signame, 0,EnumSize-1,NULL,(vbl_y_vsp[(1) - (6)].valu), 0);
  
                    Signed = ( IsVexNodeSigned( VbPar->TARGET ) != 0 );
  
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN,VBL_PARDFN);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_TYPDFN,VBH_TYPE_BIT_VECTOR);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMNDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMXDFN,EnumSize-1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATLDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATRDFN,EnumSize-1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_LBLDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_PNTDFN,(long)VbPar->TARGET);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_SUNDFN,Signed);
                  }
                  else
                  {
                    VbPar = (vbarg_list *)vbl_addstr( 'p',(vbl_y_vsp[(4) - (6)].valu),
                            get_type(VBH_TYPE_BIT),VBH_TYPE_BIT, 
                            'S',signame, -1,-1 ,NULL,(vbl_y_vsp[(1) - (6)].valu), 0);
  
                    Signed = ( IsVexNodeSigned( VbPar->TARGET ) != 0 );
  
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN,VBL_PARDFN);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_TYPDFN,VBH_TYPE_BIT);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMNDFN,-1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMXDFN,-1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATLDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATRDFN,1);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_LBLDFN,0);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_PNTDFN,(long)VbPar->TARGET);
                    addtab (hshtab,signame,VBL_FUNCNAM,VBL_SUNDFN,Signed);
                  }
                }
                else
                {
                  signame = (char *)VBL_NM1LST->DATA;
                  if (chktab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN) != 0)
                      my_vbl_error (80,signame);
  
                  VbPar = (vbarg_list *)vbl_addstr ('p',(vbl_y_vsp[(4) - (6)].valu),
                          val_type((vbl_y_vsp[(5) - (6)].name).NAME),(vbl_y_vsp[(5) - (6)].name).TYPE, (vbl_y_vsp[(5) - (6)].name).FLAG,
                          signame, AttrLeft,AttrRight,NULL,(vbl_y_vsp[(1) - (6)].valu), 0);
  
                  Signed = ( IsVexNodeSigned( VbPar->TARGET ) != 0 );
  
                  if ( IsVexAtomBit( VbPar->TARGET ) )
                  {
                    Left  = -1;
                    Right = -1;
                  }
                  else
                  {
                    Left  = VbPar->TARGET->LEFT;
                    Right = VbPar->TARGET->RIGHT;
                  }
  
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_SYMDFN,VBL_PARDFN);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_TYPDFN,(vbl_y_vsp[(5) - (6)].name).TYPE);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMNDFN,Left);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_WMXDFN,Right);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATLDFN,AttrLeft);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_ATRDFN,AttrRight);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_LBLDFN,0);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_PNTDFN,(long)VbPar->TARGET);
                  addtab (hshtab,signame,VBL_FUNCNAM,VBL_SUNDFN,Signed);
                }
  
                VBL_NM1LST = delchain (VBL_NM1LST,VBL_NM1LST);
              }
            }
            else
            {
              freechain( VBL_NM1LST );
              VBL_NM1LST = (chain_list *)0;
            }
          }
    break;

  case 199:
#line 3200 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_CLASS_NONE; }
    break;

  case 200:
#line 3202 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_CLASS_CONSTANT; }
    break;

  case 201:
#line 3204 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_CLASS_SIGNAL; }
    break;

  case 202:
#line 3209 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_ICNDFN; }
    break;

  case 203:
#line 3211 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_ICNDFN; }
    break;

  case 212:
#line 3232 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            VBL_FUNCNAM = (char *)0;
          }
    break;

  case 214:
#line 3241 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            long Mode;

            VBL_FUNCNAM = (vbl_y_vsp[(2) - (2)].text);

            Mode = chktab(hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_SYMDFN);

            if ( Mode == 0 )
            {
              VBL_BEFPNT->BEFUN = vbh_addvbfun( VBL_BEFPNT->BEFUN,
                                                VBL_FUNCNAM, NULL, NULL, NULL, VBL_LINNUM );
              VBL_BEFUN = VBL_BEFPNT->BEFUN;
            }
            else
            if ( Mode != VBL_PRODFN )
            {
              my_vbl_error (117,VBL_FUNCNAM);
            }
            else
            {
              VBL_BEFUN = (vbfun_list *)chktab( hshtab, VBL_FUNCNAM, VBL_MODNAM, VBL_PNTDFN );
            }
          }
    break;

  case 215:
#line 3265 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ( chktab(hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_SYMDFN) == 0 )
            {
              VBL_BEFUN->ARGUMENT = 
                 (vbarg_list *)reverse( (chain_list *)VBL_BEFUN->ARGUMENT );

              addtab (hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_SYMDFN,VBL_PRODFN);
              addtab (hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_PNTDFN,(long)VBL_BEFUN);
            }
          }
    break;

  case 216:
#line 3277 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            long Mode;

            VBL_FUNCNAM = (vbl_y_vsp[(2) - (2)].text);

            Mode = chktab(hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_SYMDFN);

            if ( Mode == 0 )
            {
              VBL_BEFPNT->BEFUN = vbh_addvbfun( VBL_BEFPNT->BEFUN,
                                                VBL_FUNCNAM, NULL, NULL, NULL, VBL_LINNUM );
              VBL_BEFUN = VBL_BEFPNT->BEFUN;
            }
            else
            if ( Mode != VBL_FUNDFN )
            {
              my_vbl_error (116,VBL_FUNCNAM);
            }
            else
            {
              VBL_BEFUN = (vbfun_list *)chktab(hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_PNTDFN);
            }
          }
    break;

  case 217:
#line 3303 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char         *signame;
            char          buffer[ 128 ];
            char         *codedsigname;
            vbtyp_list   *TypeEnum;
            short         Signed;
            long          Left;
            long          Right;
            long          AttrLeft;
            long          AttrRight;
            long           EnumSize;
            vbtyp_list   *VbType;
            vexexpr      *VexRet;

            if ( (vbl_y_vsp[(6) - (6)].name).DYNAMIC )
            {
              my_vbl_error(115,0);
            }

            signame = VBL_FUNCNAM;

            TypeEnum = val_type( (vbl_y_vsp[(6) - (6)].name).NAME );
            EnumSize = vbl_codeSize( TypeEnum->SIZE - 1 );

            AttrLeft  = TypeEnum->LEFT;
            AttrRight = TypeEnum->RIGHT;

            if ( chktab(hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_SYMDFN) == 0 )
            {
              if ( ( TypeEnum->CLASS == 'E'          ) &&
                   ( TypeEnum->INDEX >= VBH_MAX_TYPE ) )
              {
                sprintf (buffer, "%s.cod.%s", VBL_MODNAM, signame);
                codedsigname = namealloc ( buffer );
  
                if (chktab (hshtab,codedsigname,VBL_MODNAM,VBL_SYMDFN) != 0)
                    my_vbl_error (116,codedsigname);
/*\
                VexRet = (vexexpr *)vbl_addstr( 'F',0,val_type($6.NAME),$6.TYPE,
                         $6.FLAG,codedsigname,AttrLeft,AttrRight,NULL,0, 0);
  
                Signed = ( IsVexNodeSigned( VexRet ) != 0 );
  
                if ( IsVexAtomBit( VexRet ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VexRet->LEFT;
                  Right = VexRet->RIGHT;
                }
\*/
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_SYMDFN,VBL_FUNDFN);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(6) - (6)].name).TYPE);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_WMNDFN,-1);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_WMXDFN,-1);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_SUNDFN,0);
  
                if ( EnumSize > 1 )
                {
                  VbType = get_type( VBH_TYPE_BIT_VECTOR );
                  VexRet = (vexexpr *)vbl_addstr('F',0,
                           VbType,VBH_TYPE_BIT_VECTOR,'U',signame, 0,EnumSize-1,NULL,0, 0);
  
                  Signed = ( IsVexNodeSigned( VexRet ) != 0 );
  
                  addtab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN,VBL_FUNDFN);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_TYPDFN,VBH_TYPE_BIT_VECTOR);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_WMNDFN,0);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_WMXDFN,EnumSize-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_ATLDFN,0);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_ATRDFN,TypeEnum->SIZE-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_SUNDFN,Signed);
                }
                else
                {
                  VbType = get_type(VBH_TYPE_BIT);
                  VexRet = (vexexpr *)vbl_addstr ('F',0,
                           VbType,VBH_TYPE_BIT,'S',signame, -1,-1 ,NULL,0, 0);
  
                  Signed = ( IsVexNodeSigned( VexRet ) != 0 );
  
                  addtab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN,VBL_FUNDFN);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_TYPDFN,VBH_TYPE_BIT);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_WMNDFN,-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_WMXDFN,-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_ATLDFN,0);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_ATRDFN,TypeEnum->SIZE-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_SUNDFN,Signed);
                }
              }
              else
              {
                VbType = val_type((vbl_y_vsp[(6) - (6)].name).NAME);
                VexRet = (vexexpr *)vbl_addstr( 'F',0,VbType,(vbl_y_vsp[(6) - (6)].name).TYPE,
                                                (vbl_y_vsp[(6) - (6)].name).FLAG,signame,-1,-1,NULL,0, 0);
  
                Signed = ( IsVexNodeSigned( VexRet ) != 0 );
  
                if ( IsVexAtomBit( VexRet ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VexRet->LEFT;
                  Right = VexRet->RIGHT;
                }
  
                addtab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN,VBL_FUNDFN);
                addtab (hshtab,signame,VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(6) - (6)].name).TYPE);
                addtab (hshtab,signame,VBL_MODNAM,VBL_WMNDFN,Left);
                addtab (hshtab,signame,VBL_MODNAM,VBL_WMXDFN,Right);
                addtab (hshtab,signame,VBL_MODNAM,VBL_ATLDFN,AttrLeft);
                addtab (hshtab,signame,VBL_MODNAM,VBL_ATRDFN,AttrRight);
                addtab (hshtab,signame,VBL_MODNAM,VBL_SUNDFN,Signed);
              }

              VBL_BEFUN->RETURN = vbh_addvbarg( (vbarg_list *)0, VexRet, 'O', 
                                                VBH_CLASS_NONE, VbType, VBL_LINNUM );
              VBL_BEFUN->ARGUMENT = 
                 (vbarg_list *)reverse( (chain_list *)VBL_BEFUN->ARGUMENT );

              addtab (hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_SYMDFN,VBL_FUNDFN);
              addtab (hshtab,VBL_FUNCNAM,VBL_MODNAM,VBL_PNTDFN,(long)VBL_BEFUN);
            }
          }
    break;

  case 218:
#line 3440 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            void *pnt;
            pnt = &(VBL_BEFUN->INSTRUCTION);
            VBL_INSLST = addchain(NULL,pnt);
          }
    break;

  case 219:
#line 3446 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            struct ptype **pnt;
            struct ptype *ptype;
            pnt = (struct ptype**)VBL_INSLST->DATA;
            ptype = reversetype(*pnt);
            *pnt = ptype;
            VBL_INSLST = delchain (VBL_INSLST, VBL_INSLST);
          }
    break;

  case 220:
#line 3456 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            VBL_FUNCNAM = (char *)0;
          }
    break;

  case 223:
#line 3465 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 224:
#line 3476 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
          vbtyp_list    *Type;
          vbcst_list    *VbCst;
          vexexpr       *VexValue;
          chain_list    *HeadChain;
          chain_list    *ScanChain;
          vbl_vexstr    *VexStr;
          short          Signed;
          long           Left;
          long           Right;
          short          Width;
          long           AttrLeft;
          long           AttrRight;

          if ( (vbl_y_vsp[(6) - (7)].list).AGGREG )
          {
            HeadChain = reverse( (chain_list *)(vbl_y_vsp[(6) - (7)].list).IDENT );
            ScanChain = HeadChain;

            if ( HeadChain->NEXT != (chain_list *)0 )
            {
              Width    = 0;
              VexValue = createvexoper( VEX_ARRAY, 1 );

              while ( ScanChain != (chain_list *)0 )
              {
                VexStr = (vbl_vexstr *)ScanChain->DATA;
                Width += VexStr->VEX->WIDTH;
                addvexhexpr( VexValue, VexStr->VEX );

                autfreeheap( VexStr, sizeof( vbl_vexstr ) );

                ScanChain = ScanChain->NEXT;
              }

              VexValue->WIDTH = Width;
            }
            else
            {
              VexStr   = (vbl_vexstr *)HeadChain->DATA;
              VexValue = VexStr->VEX;

              autfreeheap( VexStr, sizeof( vbl_vexstr ) );
            }

            freechain( HeadChain );
          }
          else
          {
            VexValue = simpvexexpr( (vbl_y_vsp[(6) - (7)].list).VEX );
          }

          Type = val_type( (vbl_y_vsp[(4) - (7)].name).NAME );


          if ( (vbl_y_vsp[(5) - (7)].name).DYNAMIC )
          {
            AttrLeft  = (vbl_y_vsp[(5) - (7)].name).LEFT;
            AttrRight = (vbl_y_vsp[(5) - (7)].name).RIGHT;
            Left  = AttrLeft;
            Right = AttrRight;
          }
          else
          if ( ( (vbl_y_vsp[(5) - (7)].name).LEFT  == -1 ) &&
               ( (vbl_y_vsp[(5) - (7)].name).RIGHT == -1 ) )
          {
            AttrLeft  = Type->LEFT;
            AttrRight = Type->RIGHT;
          }
          else
          {
            AttrLeft  = (vbl_y_vsp[(5) - (7)].name).LEFT;
            AttrRight = (vbl_y_vsp[(5) - (7)].name).RIGHT;
          }

          VbCst  = (vbcst_list *)vbl_addstr( 'C',0,val_type((vbl_y_vsp[(4) - (7)].name).NAME),
                 (vbl_y_vsp[(4) - (7)].name).TYPE,(vbl_y_vsp[(4) - (7)].name).FLAG,(vbl_y_vsp[(2) - (7)].text),AttrLeft,AttrRight,VexValue,0, (vbl_y_vsp[(5) - (7)].name).DYNAMIC);

          Signed = ( IsVexNodeSigned( VbCst->TARGET ) != 0 );

          if ( ! (vbl_y_vsp[(5) - (7)].name).DYNAMIC )
          {
            if ( IsVexAtomBit( VbCst->TARGET ) )
            {
              Left  = -1;
              Right = -1;
            }
            else
            {
              Left  = VbCst->TARGET->LEFT;
              Right = VbCst->TARGET->RIGHT;
            }
          }

          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_SYMDFN,VBL_CSTDFN);
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(4) - (7)].name).TYPE);
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_WMNDFN,Left);
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_WMXDFN,Right);
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_ATLDFN,AttrLeft);
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_ATRDFN,AttrRight);
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_LBLDFN,0);
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_PNTDFN,(long)VbCst->VEX);
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_SUNDFN,Signed );
          addtab(hshtab,(vbl_y_vsp[(2) - (7)].text),VBL_MODNAM,VBL_DYNDFN,(vbl_y_vsp[(5) - (7)].name).DYNAMIC );
        }
    break;

  case 225:
#line 3586 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list); }
    break;

  case 226:
#line 3591 "../../../src/vbl/src/vbl_bcomp_y.y"
    {  (vbl_y_val.list).VEX = NULL ;}
    break;

  case 227:
#line 3594 "../../../src/vbl/src/vbl_bcomp_y.y"
    {  (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list) ;}
    break;

  case 228:
#line 3605 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char         *LocalName;
            char         *signame;
            char         *codedsigname;
            char          buffer[ 128 ];
            vbtyp_list   *TypeEnum;
            long           EnumSize;
            vbvar_list   *VbVar;
            short         Signed;
            long          Left;
            long          Right;
            long          AttrLeft;
            long          AttrRight;
            char          StrFlag;
            vexexpr      *VexInit;
            struct vbl_expr expr1;

            if ( VBL_FUNCNAM != (char *)0 )
            {
              LocalName = VBL_FUNCNAM;
              StrFlag   = 'v';
            }
            else
            {
              LocalName = VBL_PROCNAM;
              StrFlag   = 'V';
            }

            TypeEnum = val_type( (vbl_y_vsp[(4) - (7)].name).NAME );
            EnumSize = vbl_codeSize( TypeEnum->SIZE - 1 );

            if ( (vbl_y_vsp[(5) - (7)].name).DYNAMIC ) /* LUDO_DYNAMIC */
            {
              AttrLeft  = (vbl_y_vsp[(5) - (7)].name).LEFT;
              AttrRight = (vbl_y_vsp[(5) - (7)].name).RIGHT;
              Left  = AttrLeft;
              Right = AttrRight;
            }
            else
            if ( ( (vbl_y_vsp[(5) - (7)].name).LEFT  == -1 ) &&
                 ( (vbl_y_vsp[(5) - (7)].name).RIGHT == -1 ) )
            {
              AttrLeft  = TypeEnum->LEFT;
              AttrRight = TypeEnum->RIGHT;
            }
            else
            {
              AttrLeft  = (vbl_y_vsp[(5) - (7)].name).LEFT;
              AttrRight = (vbl_y_vsp[(5) - (7)].name).RIGHT;
            }

            VBL_NM1LST = reverse (VBL_NM1LST);

            if ( ! (vbl_y_vsp[(5) - (7)].name).DYNAMIC ) /* LUDO_DYNAMIC */
            {
              if ( (vbl_y_vsp[(6) - (7)].list).VEX == (vexexpr *)0 )
              {
                if ( TypeEnum->CLASS == 'I' )
                {
                  sprintf( buffer, "%ld", AttrLeft );
                  expr1.IDENT = buffer;
                  expr1.TYPE  = -1;
                  expr1.VEX   = (vexexpr *)0;
                  expr1 = vbl_crtvex( NOPS, expr1,VBL_EMPSTR,-1,-1,0);

                  (vbl_y_vsp[(6) - (7)].list).VEX = expr1.VEX;
                }
              }
            }

            while (VBL_NM1LST != NULL)
            {
              VexInit = (vbl_y_vsp[(6) - (7)].list).VEX;

              if ( ( VexInit          != (vexexpr    *)0 ) &&
                   ( VBL_NM1LST->NEXT != (chain_list *)0 ) )
              {
                VexInit = dupvexexpr( (vbl_y_vsp[(6) - (7)].list).VEX );
              }

              if ( ( TypeEnum->CLASS == 'E'          ) &&
                   ( TypeEnum->INDEX >= VBH_MAX_TYPE ) )
              {
                signame = (char *)VBL_NM1LST->DATA;

                if (chktab (hshtab,signame,LocalName,VBL_SYMDFN) != 0)
                      my_vbl_error (80,signame);

                sprintf (buffer, "%s.cod.%s", LocalName, signame);
                codedsigname = namealloc ( buffer );

                if (chktab (hshtab,codedsigname,LocalName,VBL_SYMDFN) != 0)
                      my_vbl_error (80,codedsigname);
/*\
                VbVar = (vbvar_list *)vbl_addstr(StrFlag,0,val_type($4.NAME),$4.TYPE,
                        $4.FLAG,codedsigname, AttrLeft,AttrRight, VexInit, 0 , 0);

                Signed = ( IsVexNodeSigned( VbVar->TARGET ) != 0 );

                if ( IsVexAtomBit( VbVar->TARGET ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VbVar->TARGET->LEFT;
                  Right = VbVar->TARGET->RIGHT;
                }
\*/
                addtab(hshtab,codedsigname,LocalName,VBL_SYMDFN,VBL_VARDFN);
                addtab(hshtab,codedsigname,LocalName,VBL_TYPDFN,(vbl_y_vsp[(4) - (7)].name).TYPE);
                addtab(hshtab,codedsigname,LocalName,VBL_WMNDFN,-1);
                addtab(hshtab,codedsigname,LocalName,VBL_WMXDFN,-1);
                addtab(hshtab,codedsigname,LocalName,VBL_LBLDFN,0);
                addtab(hshtab,codedsigname,LocalName,VBL_PNTDFN,0);
                addtab(hshtab,codedsigname,LocalName,VBL_SUNDFN,0);
                addtab(hshtab,codedsigname,LocalName,VBL_DYNDFN,0);

                if ( VexInit != (vexexpr *)0 ) VexInit = dupvexexpr( VexInit );

                if ( EnumSize > 1 )
                {
                  VbVar = (vbvar_list *)vbl_addstr( StrFlag,0,
                          get_type(VBH_TYPE_BIT_VECTOR),VBH_TYPE_BIT_VECTOR,
                          'U',signame, 0,EnumSize-1 , VexInit, 0, 0 );

                  Signed = ( IsVexNodeSigned( VbVar->TARGET ) != 0 );

                  addtab (hshtab,signame,LocalName,VBL_SYMDFN,VBL_VARDFN);
                  addtab (hshtab,signame,LocalName,VBL_TYPDFN,VBH_TYPE_BIT_VECTOR);
                  addtab (hshtab,signame,LocalName,VBL_WMNDFN,0);
                  addtab (hshtab,signame,LocalName,VBL_WMXDFN,EnumSize-1);
                  addtab (hshtab,signame,LocalName,VBL_ATLDFN,0);
                  addtab (hshtab,signame,LocalName,VBL_ATRDFN,EnumSize-1);
                  addtab (hshtab,signame,LocalName,VBL_LBLDFN,0);
                  addtab (hshtab,signame,LocalName,VBL_PNTDFN,(long)VbVar->TARGET);
                  addtab (hshtab,signame,LocalName,VBL_SUNDFN,Signed);
                  addtab (hshtab,signame,LocalName,VBL_DYNDFN,0);
                }
                else
                {
                  VbVar = (vbvar_list *)vbl_addstr( StrFlag,0,
                          get_type(VBH_TYPE_BIT),VBH_TYPE_BIT,
                          'S',signame, -1,-1 , VexInit, 0, 0 );

                  Signed = ( IsVexNodeSigned( VbVar->TARGET ) != 0 );

                  addtab (hshtab,signame,LocalName,VBL_SYMDFN,VBL_VARDFN);
                  addtab (hshtab,signame,LocalName,VBL_TYPDFN,VBH_TYPE_BIT);
                  addtab (hshtab,signame,LocalName,VBL_WMNDFN,-1);
                  addtab (hshtab,signame,LocalName,VBL_WMXDFN,-1);
                  addtab (hshtab,signame,LocalName,VBL_ATLDFN,0);
                  addtab (hshtab,signame,LocalName,VBL_ATRDFN,1);
                  addtab (hshtab,signame,LocalName,VBL_LBLDFN,0);
                  addtab (hshtab,signame,LocalName,VBL_PNTDFN,(long)VbVar->TARGET);
                  addtab (hshtab,signame,LocalName,VBL_SUNDFN,Signed);
                  addtab (hshtab,signame,LocalName,VBL_DYNDFN,0);
                }
              }
              else
              {
                signame = (char *)VBL_NM1LST->DATA;
                if (chktab (hshtab,signame,LocalName,VBL_SYMDFN) != 0)
                    my_vbl_error (80,signame);

                VbVar = (vbvar_list *)vbl_addstr( StrFlag,0,
                        val_type((vbl_y_vsp[(4) - (7)].name).NAME),(vbl_y_vsp[(4) - (7)].name).TYPE,
                        (vbl_y_vsp[(4) - (7)].name).FLAG,signame, AttrLeft, AttrRight, VexInit, 0, (vbl_y_vsp[(5) - (7)].name).DYNAMIC);

                Signed = ( IsVexNodeSigned( VbVar->TARGET ) != 0 );

              if ( ( (vbl_y_vsp[(4) - (7)].name).FLAG == 'I' ) && ( (vbl_y_vsp[(5) - (7)].name).DYNAMIC ) )
              {
                (vbl_y_vsp[(5) - (7)].name).DYNAMIC = VBL_DWTDFN;
              }


              if ( ! (vbl_y_vsp[(5) - (7)].name).DYNAMIC ) /* LUDO_DYNAMIC */
              {
                if ( IsVexAtomBit( VbVar->TARGET ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VbVar->TARGET->LEFT;
                  Right = VbVar->TARGET->RIGHT;
                }
              }

                addtab (hshtab,signame,LocalName,VBL_SYMDFN,VBL_VARDFN);
                addtab (hshtab,signame,LocalName,VBL_TYPDFN,(vbl_y_vsp[(4) - (7)].name).TYPE);
                addtab (hshtab,signame,LocalName,VBL_WMNDFN,Left);
                addtab (hshtab,signame,LocalName,VBL_WMXDFN,Right);
                addtab (hshtab,signame,LocalName,VBL_ATLDFN,AttrLeft);
                addtab (hshtab,signame,LocalName,VBL_ATRDFN,AttrRight);
                addtab (hshtab,signame,LocalName,VBL_LBLDFN,0);
                addtab (hshtab,signame,LocalName,VBL_PNTDFN,(long)VbVar->TARGET);
                addtab (hshtab,signame,LocalName,VBL_SUNDFN,Signed);
                addtab (hshtab,signame,LocalName,VBL_DYNDFN,(vbl_y_vsp[(5) - (7)].name).DYNAMIC);
              }

              VBL_NM1LST = delchain (VBL_NM1LST,VBL_NM1LST);
            }
          }
    break;

  case 229:
#line 3823 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char         *signame;
            char          buffer[ 128 ];
            char         *codedsigname;
            vbtyp_list   *TypeEnum;
            short         Signed;
            long          Left;
            long          Right;
            long          AttrLeft;
            long          AttrRight;
            long           EnumSize;
            vbaux_list   *VbAux;
            vexexpr      *VexInit;
            struct vbl_expr expr1;

            TypeEnum = val_type( (vbl_y_vsp[(4) - (8)].name).NAME );
            EnumSize = vbl_codeSize( TypeEnum->SIZE - 1 );

            if ( (   (vbl_y_vsp[(4) - (8)].name).DYNAMIC ) &&
                 ( ! (vbl_y_vsp[(5) - (8)].name).DYNAMIC ) )
            {
              (vbl_y_vsp[(5) - (8)].name).DYNAMIC = (vbl_y_vsp[(4) - (8)].name).DYNAMIC;
              (vbl_y_vsp[(5) - (8)].name).LEFT    = (vbl_y_vsp[(4) - (8)].name).LEFT;
              (vbl_y_vsp[(5) - (8)].name).RIGHT   = (vbl_y_vsp[(4) - (8)].name).RIGHT;
            }

            if ( (vbl_y_vsp[(5) - (8)].name).DYNAMIC ) /* LUDO_DYNAMIC */
            {
              AttrLeft  = (vbl_y_vsp[(5) - (8)].name).LEFT;
              AttrRight = (vbl_y_vsp[(5) - (8)].name).RIGHT;
              Left = AttrLeft;
              Right = AttrRight;
            }
            else
            if ( ( (vbl_y_vsp[(5) - (8)].name).LEFT  == -1 ) &&
                 ( (vbl_y_vsp[(5) - (8)].name).RIGHT == -1 ) )
            {
              AttrLeft  = TypeEnum->LEFT;
              AttrRight = TypeEnum->RIGHT;
            }
            else
            {
              AttrLeft  = (vbl_y_vsp[(5) - (8)].name).LEFT;
              AttrRight = (vbl_y_vsp[(5) - (8)].name).RIGHT;
            }

            VBL_NM1LST = reverse (VBL_NM1LST);

            if ( ! (vbl_y_vsp[(5) - (8)].name).DYNAMIC ) /* LUDO_DYNAMIC */
            {
              if ( (vbl_y_vsp[(7) - (8)].list).VEX == (vexexpr *)0 )
              {
                if ( TypeEnum->CLASS == 'I' )
                {
                  sprintf( buffer, "%ld", AttrLeft );
                  expr1.IDENT = buffer;
                  expr1.TYPE  = -1;
                  expr1.VEX   = (vexexpr *)0;
                  expr1 = vbl_crtvex( NOPS, expr1,VBL_EMPSTR,-1,-1,0);

                  (vbl_y_vsp[(7) - (8)].list).VEX = expr1.VEX;
                }
              }
            }

            while (VBL_NM1LST != NULL)
            {
              VexInit = (vbl_y_vsp[(7) - (8)].list).VEX;

              if ( ( VexInit          != (vexexpr    *)0 ) &&
                   ( VBL_NM1LST->NEXT != (chain_list *)0 ) )
              {
                VexInit = dupvexexpr( (vbl_y_vsp[(7) - (8)].list).VEX );
              }

              if ( ( TypeEnum->CLASS == 'E'          ) &&
                   ( TypeEnum->INDEX >= VBH_MAX_TYPE ) )
              {
                signame = (char *)VBL_NM1LST->DATA;

                if (chktab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN) != 0)
                    my_vbl_error (10,signame);

                sprintf (buffer, "%s.cod.%s", VBL_MODNAM, signame);
                codedsigname = namealloc ( buffer );

                if (chktab (hshtab,codedsigname,VBL_MODNAM,VBL_SYMDFN) != 0)
                    my_vbl_error (10,codedsigname);
/*\
                VbAux = (vbaux_list *)vbl_addstr( 'S',0,
                        val_type($4.NAME),$4.TYPE,
                        $4.FLAG,codedsigname, AttrLeft, AttrRight,VexInit, $6, 0);

                Signed = ( IsVexNodeSigned( VbAux->TARGET ) != 0 );

                if ( IsVexAtomBit( VbAux->TARGET ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VbAux->TARGET->LEFT;
                  Right = VbAux->TARGET->RIGHT;
                }
\*/
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_SYMDFN,VBL_SGNDFN);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(4) - (8)].name).TYPE);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_WMNDFN,-1);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_WMXDFN,-1);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_LBLDFN,(vbl_y_vsp[(6) - (8)].valu));
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_PNTDFN,0);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_PNTDFN,0);
                addtab (hshtab,codedsigname,VBL_MODNAM,VBL_DYNDFN,0);

                if ( VexInit != (vexexpr *)0 ) VexInit = dupvexexpr( VexInit );

                if ( EnumSize > 1 )
                {
                  VbAux = (vbaux_list *)vbl_addstr ('S',0,
                          get_type(VBH_TYPE_BIT_VECTOR), VBH_TYPE_BIT_VECTOR,
                          'U',signame, 0,EnumSize-1 , VexInit, (vbl_y_vsp[(6) - (8)].valu), 0);

                  Signed = ( IsVexNodeSigned( VbAux->TARGET ) != 0 );

                  addtab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN,VBL_SGNDFN);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_TYPDFN,VBH_TYPE_BIT_VECTOR);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_WMNDFN,0);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_WMXDFN,EnumSize-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_ATLDFN,0);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_ATRDFN,EnumSize-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_LBLDFN,(vbl_y_vsp[(6) - (8)].valu));
                  addtab (hshtab,signame,VBL_MODNAM,VBL_PNTDFN,(long)VbAux->TARGET);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_SUNDFN,Signed);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_DYNDFN,0);
                }
                else
                {
                  VbAux = (vbaux_list *)vbl_addstr ('S',0,
                          get_type(VBH_TYPE_BIT),VBH_TYPE_BIT,
                          'S',signame, -1,-1 , VexInit, (vbl_y_vsp[(6) - (8)].valu), 0);

                  Signed = ( IsVexNodeSigned( VbAux->TARGET ) != 0 );

                  addtab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN,VBL_SGNDFN);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_TYPDFN,VBH_TYPE_BIT);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_WMNDFN,-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_WMXDFN,-1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_ATLDFN,0);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_ATRDFN,1);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_LBLDFN,(vbl_y_vsp[(6) - (8)].valu));
                  addtab (hshtab,signame,VBL_MODNAM,VBL_PNTDFN,(long)VbAux->TARGET);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_SUNDFN,Signed);
                  addtab (hshtab,signame,VBL_MODNAM,VBL_DYNDFN,0);
                }
              }
              else
              {
                signame = (char *)VBL_NM1LST->DATA;
                if (chktab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN) != 0)
                   my_vbl_error (10,signame);

                VbAux = (vbaux_list *)vbl_addstr( 'S',0,
                        val_type((vbl_y_vsp[(4) - (8)].name).NAME),(vbl_y_vsp[(4) - (8)].name).TYPE,
                        (vbl_y_vsp[(4) - (8)].name).FLAG,signame, AttrLeft,AttrRight,VexInit, (vbl_y_vsp[(6) - (8)].valu),
                        (vbl_y_vsp[(5) - (8)].name).DYNAMIC);

                if ( ( (vbl_y_vsp[(4) - (8)].name).FLAG == 'I' ) && ( (vbl_y_vsp[(5) - (8)].name).DYNAMIC ) )
                {
                  (vbl_y_vsp[(5) - (8)].name).DYNAMIC = VBL_DWTDFN;
                }

                Signed = ( IsVexNodeSigned( VbAux->TARGET ) != 0 );

              if ( ! (vbl_y_vsp[(5) - (8)].name).DYNAMIC ) /* LUDO_DYNAMIC */
              {
                if ( IsVexAtomBit( VbAux->TARGET ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VbAux->TARGET->LEFT;
                  Right = VbAux->TARGET->RIGHT;
                }
              }

                addtab (hshtab,signame,VBL_MODNAM,VBL_SYMDFN,VBL_SGNDFN);
                addtab (hshtab,signame,VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(4) - (8)].name).TYPE);
                addtab (hshtab,signame,VBL_MODNAM,VBL_WMNDFN,Left);
                addtab (hshtab,signame,VBL_MODNAM,VBL_WMXDFN,Right);
                addtab (hshtab,signame,VBL_MODNAM,VBL_ATLDFN,AttrLeft);
                addtab (hshtab,signame,VBL_MODNAM,VBL_ATRDFN,AttrRight);
                addtab (hshtab,signame,VBL_MODNAM,VBL_LBLDFN,(vbl_y_vsp[(6) - (8)].valu));
                addtab (hshtab,signame,VBL_MODNAM,VBL_PNTDFN,(long)VbAux->TARGET);
                addtab (hshtab,signame,VBL_MODNAM,VBL_SUNDFN,Signed);
                addtab (hshtab,signame,VBL_MODNAM,VBL_DYNDFN,(vbl_y_vsp[(5) - (8)].name).DYNAMIC);
              }

              VBL_NM1LST = delchain (VBL_NM1LST,VBL_NM1LST);
            }
          }
    break;

  case 231:
#line 4038 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           vbtyp_list *VbType;
              VbType = vbh_addvbtyp(VBL_BEFPNT,(vbl_y_vsp[(2) - (5)].text),(vbl_y_vsp[(4) - (5)].type).LEFT,
               (vbl_y_vsp[(4) - (5)].type).RIGHT,(vbl_y_vsp[(4) - (5)].type).VALUE,(vbl_y_vsp[(4) - (5)].type).SIZE,(vbl_y_vsp[(4) - (5)].type).BYTE,(vbl_y_vsp[(4) - (5)].type).BASE,VBL_NUMTYP,(vbl_y_vsp[(4) - (5)].type).RESOLV,(vbl_y_vsp[(4) - (5)].type).CLASS,
               VBL_LINNUM);
              if ( (vbl_y_vsp[(4) - (5)].type).DYNAMIC )
              {
                VbType->DYNAMIC       = (vbl_y_vsp[(4) - (5)].type).DYNAMIC;
                VbType->DYNAMIC_LEFT  = (vbl_y_vsp[(4) - (5)].type).DYNAMIC_LEFT;
                VbType->DYNAMIC_RIGHT = (vbl_y_vsp[(4) - (5)].type).DYNAMIC_RIGHT;
              }
              addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_SYMDFN,VBL_TPEDFN);
              addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_LBLDFN,(vbl_y_vsp[(4) - (5)].type).CLASS);
              addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_TYPDFN,VBL_NUMTYP);
              addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_WMNDFN,(vbl_y_vsp[(4) - (5)].type).LEFT);
              addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_WMXDFN,(vbl_y_vsp[(4) - (5)].type).RIGHT);
              addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_DYNDFN,(vbl_y_vsp[(4) - (5)].type).DYNAMIC);
              addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_PNTDFN,(long)VBL_BEFPNT->BETYP);
              VBL_NUMTYP++;
         }
    break;

  case 232:
#line 4062 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.type) = (vbl_y_vsp[(1) - (1)].type); }
    break;

  case 233:
#line 4064 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.type) = (vbl_y_vsp[(1) - (1)].type); }
    break;

  case 234:
#line 4066 "../../../src/vbl/src/vbl_bcomp_y.y"
    { vbl_y_errok; }
    break;

  case 235:
#line 4075 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           vbtyp_list *VbType;
            VbType = vbh_addvbtyp(VBL_BEFPNT,(vbl_y_vsp[(2) - (5)].text),(vbl_y_vsp[(4) - (5)].type).LEFT,
                   (vbl_y_vsp[(4) - (5)].type).RIGHT,(vbl_y_vsp[(4) - (5)].type).VALUE,(vbl_y_vsp[(4) - (5)].type).SIZE,(vbl_y_vsp[(4) - (5)].type).BYTE,(vbl_y_vsp[(4) - (5)].type).BASE,(vbl_y_vsp[(4) - (5)].type).INDEX,(vbl_y_vsp[(4) - (5)].type).RESOLV,(vbl_y_vsp[(4) - (5)].type).CLASS,
                   VBL_LINNUM);
              if ( (vbl_y_vsp[(4) - (5)].type).DYNAMIC )
              {
                VbType->DYNAMIC       = (vbl_y_vsp[(4) - (5)].type).DYNAMIC;
                VbType->DYNAMIC_LEFT  = (vbl_y_vsp[(4) - (5)].type).DYNAMIC_LEFT;
                VbType->DYNAMIC_RIGHT = (vbl_y_vsp[(4) - (5)].type).DYNAMIC_RIGHT;
              }
            addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_SYMDFN,VBL_TPEDFN);
            addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_LBLDFN,(vbl_y_vsp[(4) - (5)].type).CLASS);
            addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(4) - (5)].type).INDEX);
            addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_WMNDFN,(vbl_y_vsp[(4) - (5)].type).LEFT);
            addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_WMXDFN,(vbl_y_vsp[(4) - (5)].type).RIGHT);
            addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_DYNDFN,(vbl_y_vsp[(4) - (5)].type).DYNAMIC);
            addtab(hshtab,(vbl_y_vsp[(2) - (5)].text),VBL_MODNAM,VBL_PNTDFN,(long)VBL_BEFPNT->BETYP);
              VBL_NUMTYP++;
          }
    break;

  case 236:
#line 4101 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct vbtyp *vbtyp_pnt;
           struct vbfun *vbfun_pnt;
           long           mode;
  
           mode = chktab(hshtab,(vbl_y_vsp[(1) - (3)].text),VBL_MODNAM,VBL_SYMDFN);

           vbfun_pnt = (vbfun_list *)chktab(hshtab,(vbl_y_vsp[(1) - (3)].text),VBL_MODNAM,VBL_PNTDFN);
           vbtyp_pnt = (vbtyp_list *)chktab(hshtab,(vbl_y_vsp[(2) - (3)].name).NAME,VBL_MODNAM,VBL_PNTDFN);
  
           if ( ( mode != VBL_FUNDFN ) || ( (vbl_y_vsp[(3) - (3)].name).DYNAMIC ) )
           {
             my_vbl_error(87,0);
           }
  
           (vbl_y_val.type).NAME = NULL;
           (vbl_y_val.type).BASE = vbtyp_pnt;
           (vbl_y_val.type).VALUE = NULL ;
           (vbl_y_val.type).SIZE = 0 ;
           (vbl_y_val.type).INDEX = VBL_NUMTYP;
           (vbl_y_val.type).BYTE = vbtyp_pnt->BYTE;
           (vbl_y_val.type).LEFT  = (vbl_y_vsp[(3) - (3)].name).LEFT ;
           (vbl_y_val.type).RIGHT = (vbl_y_vsp[(3) - (3)].name).RIGHT ;
           (vbl_y_val.type).CLASS = (vbl_y_vsp[(3) - (3)].name).FLAG ;
           (vbl_y_val.type).RESOLV = vbfun_pnt;
           (vbl_y_val.type).DYNAMIC = 0;
           (vbl_y_val.type).DYNAMIC_LEFT  = (vexexpr *)0;
           (vbl_y_val.type).DYNAMIC_RIGHT = (vexexpr *)0;
         }
    break;

  case 237:
#line 4132 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct vbtyp *vbtyp_pnt;
  
           vbtyp_pnt = (vbtyp_list *)chktab(hshtab,(vbl_y_vsp[(1) - (2)].name).NAME,VBL_MODNAM,VBL_PNTDFN);
  
           (vbl_y_val.type).NAME = NULL;
           (vbl_y_val.type).BASE = vbtyp_pnt;
           (vbl_y_val.type).VALUE = NULL ;
           (vbl_y_val.type).SIZE = 0 ;
           (vbl_y_val.type).INDEX = VBL_NUMTYP;
           (vbl_y_val.type).BYTE = vbtyp_pnt->BYTE;
           (vbl_y_val.type).RESOLV = NULL ;
           (vbl_y_val.type).CLASS = (vbl_y_vsp[(2) - (2)].name).FLAG;

           if ( ! (vbl_y_vsp[(2) - (2)].name).DYNAMIC )
           {
             (vbl_y_val.type).LEFT    = (vbl_y_vsp[(2) - (2)].name).LEFT ;
             (vbl_y_val.type).RIGHT   = (vbl_y_vsp[(2) - (2)].name).RIGHT ;
             (vbl_y_val.type).DYNAMIC = 0;
             (vbl_y_val.type).DYNAMIC_LEFT  = (vexexpr *)0;
             (vbl_y_val.type).DYNAMIC_RIGHT = (vexexpr *)0;
           }
           else
           {
             (vbl_y_val.type).LEFT  = -2;
             (vbl_y_val.type).RIGHT = -2;
             (vbl_y_val.type).DYNAMIC = (vbl_y_vsp[(2) - (2)].name).DYNAMIC;
             (vbl_y_val.type).DYNAMIC_LEFT  = (vexexpr *)(vbl_y_vsp[(2) - (2)].name).LEFT;
             (vbl_y_val.type).DYNAMIC_RIGHT = (vexexpr *)(vbl_y_vsp[(2) - (2)].name).RIGHT;
           }
        }
    break;

  case 238:
#line 4167 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 239:
#line 4173 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.type) = (vbl_y_vsp[(1) - (1)].type);
          }
    break;

  case 240:
#line 4182 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
                char  buffer[ 128 ];
                char *enumname;
                char *enumval;
              long size;
              long indice;
                long numbit;
                char **pnt;
              chain_list *nm1lst;

                VBL_NM1LST = reverse (VBL_NM1LST);

              nm1lst = VBL_NM1LST;
                size   = 0;

                while (nm1lst != NULL)
              {
                     size++;
                     nm1lst = nm1lst->NEXT;
                }

              if( size != 0)
                pnt = (char **) autallocblock(size * sizeof(char*));

                numbit = vbl_codeSize( size - 1 );
                indice = 0;

                while (VBL_NM1LST != NULL)
                {
                  sprintf ( buffer, "%s.cod.%s", VBL_MODNAM, (char *)VBL_NM1LST->DATA);
                  enumname = namealloc ( buffer );

                  if (chktab (hshtab,enumname,VBL_MODNAM,VBL_SYMDFN) != 0)
                    my_vbl_error (82,enumname);

                  enumval = vbl_enumbitstring(indice,size,numbit);
                 
                  addtab (hshtab,enumname,VBL_MODNAM,VBL_SYMDFN,VBL_CSTDFN);
                  addtab (hshtab,enumname,VBL_MODNAM,VBL_TYPDFN,VBL_NUMTYP);
                  addtab (hshtab,enumname,VBL_MODNAM,VBL_WMNDFN,-1);
                  addtab (hshtab,enumname,VBL_MODNAM,VBL_WMXDFN,-1);
                  addtab (hshtab,enumname,VBL_MODNAM,VBL_LBLDFN,indice);
                  addtab (hshtab,enumname,VBL_MODNAM,VBL_PNTDFN,(long)pnt);
                  addauthelem(VBL_ENUMVAL, enumname, (long)enumval );
                 
                  pnt[indice++] = enumname;
                  VBL_NM1LST = delchain (VBL_NM1LST, VBL_NM1LST);
                }
              (vbl_y_val.type).VALUE = pnt ;
              (vbl_y_val.type).SIZE = size ;
              (vbl_y_val.type).LEFT = 0 ;
              (vbl_y_val.type).RIGHT = 0 ;
              (vbl_y_val.type).BYTE = size/256 +1;
              (vbl_y_val.type).INDEX = VBL_NUMTYP;
              (vbl_y_val.type).CLASS = 'E' ;
              (vbl_y_val.type).BASE = 0 ;
              (vbl_y_val.type).RESOLV = NULL ;
              (vbl_y_val.type).DYNAMIC = 0;
              (vbl_y_val.type).DYNAMIC_LEFT = NULL;
              (vbl_y_val.type).DYNAMIC_RIGHT = NULL;
       }
    break;

  case 242:
#line 4251 "../../../src/vbl/src/vbl_bcomp_y.y"
    { vbl_y_errok; }
    break;

  case 243:
#line 4256 "../../../src/vbl/src/vbl_bcomp_y.y"
    { VBL_NM1LST = addchain (VBL_NM1LST,(vbl_y_vsp[(1) - (1)].text)); }
    break;

  case 244:
#line 4258 "../../../src/vbl/src/vbl_bcomp_y.y"
    { VBL_NM1LST = addchain (VBL_NM1LST,(vbl_y_vsp[(1) - (1)].text)); }
    break;

  case 245:
#line 4263 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
               (vbl_y_val.type) = (vbl_y_vsp[(1) - (1)].type);
              }
    break;

  case 246:
#line 4270 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
                my_vbl_error(123,NULL);
                (vbl_y_val.type) = (vbl_y_vsp[(1) - (1)].type);
              }
    break;

  case 247:
#line 4275 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.type) = (vbl_y_vsp[(1) - (1)].type); }
    break;

  case 248:
#line 4285 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.type) = (vbl_y_vsp[(6) - (6)].type);
            (vbl_y_val.type).CLASS = 'U';
            (vbl_y_val.type).INDEX = (vbl_y_vsp[(3) - (6)].name).TYPE;
          }
    break;

  case 249:
#line 4297 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbtyp_list *NewType;
            char       *name;
            char        buffer[ 32 ];

            (vbl_y_val.type) = (vbl_y_vsp[(4) - (4)].type);

            if ( (vbl_y_vsp[(4) - (4)].type).CLASS == 'U' )
            {
              if ( (vbl_y_vsp[(4) - (4)].type).BASE->CLASS != 'A' )
              {
                my_vbl_error(123,NULL);
              }
            }
            else
            if ( (vbl_y_vsp[(4) - (4)].type).CLASS == 'A' )
            {
              if ( (vbl_y_vsp[(4) - (4)].type).BASE->CLASS != 'U' )
              {
                my_vbl_error(123,NULL);
              }

              sprintf( buffer, "_subtype_%d", VBL_NUMTYP );
              name = namealloc( buffer );

              NewType = vbh_addvbtyp(VBL_BEFPNT,name,(vbl_y_vsp[(4) - (4)].type).LEFT,
                   (vbl_y_vsp[(4) - (4)].type).RIGHT,(vbl_y_vsp[(4) - (4)].type).VALUE,(vbl_y_vsp[(4) - (4)].type).SIZE,(vbl_y_vsp[(4) - (4)].type).BYTE,(vbl_y_vsp[(4) - (4)].type).BASE,(vbl_y_vsp[(4) - (4)].type).INDEX,(vbl_y_vsp[(4) - (4)].type).RESOLV,(vbl_y_vsp[(4) - (4)].type).CLASS,
                   VBL_LINNUM);
              addtab(hshtab,name,VBL_MODNAM,VBL_SYMDFN,VBL_TPEDFN);
              addtab(hshtab,name,VBL_MODNAM,VBL_LBLDFN,(vbl_y_vsp[(4) - (4)].type).CLASS);
              addtab(hshtab,name,VBL_MODNAM,VBL_TYPDFN,(vbl_y_vsp[(4) - (4)].type).INDEX);
              addtab(hshtab,name,VBL_MODNAM,VBL_WMNDFN,(vbl_y_vsp[(4) - (4)].type).LEFT);
              addtab(hshtab,name,VBL_MODNAM,VBL_WMXDFN,(vbl_y_vsp[(4) - (4)].type).RIGHT);
              addtab(hshtab,name,VBL_MODNAM,VBL_PNTDFN,(long)VBL_BEFPNT->BETYP);
              VBL_NUMTYP++;

              (vbl_y_val.type).BASE = NewType;
            }
            else
            {
              my_vbl_error(123,NULL);
            }

            (vbl_y_val.type).CLASS = 'A';
            (vbl_y_val.type).INDEX = (vbl_y_vsp[(2) - (4)].name).TYPE;
            (vbl_y_val.type).DYNAMIC = (vbl_y_vsp[(2) - (4)].name).DYNAMIC;

            if ( ! (vbl_y_vsp[(2) - (4)].name).DYNAMIC )
            {
              (vbl_y_val.type).LEFT  = (vbl_y_vsp[(2) - (4)].name).LEFT;
              (vbl_y_val.type).RIGHT = (vbl_y_vsp[(2) - (4)].name).RIGHT;

              (vbl_y_val.type).DYNAMIC_LEFT  = (vexexpr *)0;
              (vbl_y_val.type).DYNAMIC_RIGHT = (vexexpr *)0;
            }
            else
            {
              (vbl_y_val.type).LEFT  = -2;
              (vbl_y_val.type).RIGHT = -2;

              (vbl_y_val.type).DYNAMIC_LEFT  = (vexexpr *)(vbl_y_vsp[(2) - (4)].name).LEFT;
              (vbl_y_val.type).DYNAMIC_RIGHT = (vexexpr *)(vbl_y_vsp[(2) - (4)].name).RIGHT;
            }

          }
    break;

  case 250:
#line 4368 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
              (vbl_y_val.name).NAME = (vbl_y_vsp[(1) - (3)].name).NAME;
              (vbl_y_val.name).LEFT = (vbl_y_vsp[(1) - (3)].name).LEFT;
              (vbl_y_val.name).RIGHT = (vbl_y_vsp[(1) - (3)].name).RIGHT;
              (vbl_y_val.name).DYNAMIC = (vbl_y_vsp[(1) - (3)].name).DYNAMIC;
              (vbl_y_val.name).AGGREG  = 0;
              (vbl_y_val.name).TYPE = chktab(hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,VBL_MODNAM,VBL_TYPDFN);
              (vbl_y_val.name).FLAG = chktab(hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,VBL_MODNAM,VBL_LBLDFN);

              if ( ( (vbl_y_val.name).TYPE == 0 ) || ( (vbl_y_val.name).FLAG == 0 ) )
              {
                my_vbl_error(83,(vbl_y_vsp[(1) - (3)].name).NAME);
              }
          }
    break;

  case 251:
#line 4388 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(2) - (3)].name);}
    break;

  case 252:
#line 4393 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name);}
    break;

  case 253:
#line 4396 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(2) - (2)].name);
           (vbl_y_val.name).NAME = (vbl_y_vsp[(1) - (2)].name).NAME;
         }
    break;

  case 254:
#line 4401 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name);}
    break;

  case 255:
#line 4407 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
             vbtyp_list *VbType;
              long type;
              (vbl_y_val.name).NAME = (vbl_y_vsp[(1) - (1)].text);
              (vbl_y_val.name).LEFT = -1;
              (vbl_y_val.name).RIGHT = -1;
              (vbl_y_val.name).DYNAMIC = 0;
              (vbl_y_val.name).AGGREG  = 0;
              (vbl_y_val.name).TYPE = chktab(hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_TYPDFN);
              (vbl_y_val.name).FLAG = chktab(hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_LBLDFN);
              type = chktab(hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_SYMDFN);

              if (type != VBL_TPEDFN || (vbl_y_val.name).TYPE ==0)
              {
                my_vbl_error(84,(vbl_y_vsp[(1) - (1)].text));
              }

              VbType = (vbtyp_list *)chktab( hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_PNTDFN);
              if ( ( VbType != (vbtyp_list *)0 ) &&
                   ( VbType->DYNAMIC           ) )
              {
                (vbl_y_val.name).DYNAMIC = VbType->DYNAMIC;
                (vbl_y_val.name).LEFT    = (long)VbType->DYNAMIC_LEFT;
                (vbl_y_val.name).RIGHT   = (long)VbType->DYNAMIC_RIGHT;
              }
          }
    break;

  case 256:
#line 4437 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_KIND_NONE; }
    break;

  case 257:
#line 4439 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_KIND_BUS; }
    break;

  case 258:
#line 4441 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBH_KIND_REGISTER; }
    break;

  case 268:
#line 4463 "../../../src/vbl/src/vbl_bcomp_y.y"
    { my_vbl_error (18,NULL); }
    break;

  case 269:
#line 4469 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if (chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_MODNAM,VBL_SYMDFN) != 0)
              my_vbl_error (19,(vbl_y_vsp[(1) - (2)].text));

            addtab (hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_MODNAM,VBL_SYMDFN,VBL_LABDFN);
          }
    break;

  case 272:
#line 4487 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if (chktab( hshtab, (vbl_y_vsp[(1) - (4)].text),VBL_MODNAM,VBL_SYMDFN) != 0)
              my_vbl_error (19,(vbl_y_vsp[(1) - (4)].text));

            addtab( hshtab,(vbl_y_vsp[(1) - (4)].text),VBL_MODNAM,VBL_SYMDFN,VBL_LABDFN);

            if ((vbl_y_vsp[(3) - (4)].list).VEX != (vexexpr *)0)
            {
              VBL_GRDLST = addchain( VBL_GRDLST, (char *)(vbl_y_vsp[(3) - (4)].list).VEX );
            }

          }
    break;

  case 273:
#line 4504 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ( (vbl_y_vsp[(3) - (10)].list).VEX != (vexexpr *)0 )
            {
              VBL_GRDLST = delchain( VBL_GRDLST,VBL_GRDLST );
            }

            if ( ((vbl_y_vsp[(9) - (10)].text) != NULL) &&
                 ((vbl_y_vsp[(9) - (10)].text) != (vbl_y_vsp[(1) - (10)].text)  ) ) my_vbl_error (20,(vbl_y_vsp[(9) - (10)].text));
          }
    break;

  case 275:
#line 4522 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if (chktab( hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_MODNAM,VBL_SYMDFN) != 0)
              my_vbl_error (19,(vbl_y_vsp[(1) - (2)].text));
            addtab( hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_MODNAM,VBL_SYMDFN, VBL_LABDFN );
          }
    break;

  case 277:
#line 4530 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if (chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_MODNAM,VBL_SYMDFN) != 0)
                my_vbl_error (19,(vbl_y_vsp[(1) - (2)].text));
            addtab( hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_MODNAM,VBL_SYMDFN,VBL_LABDFN);
          }
    break;

  case 279:
#line 4545 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
	    vbl_vexstr  *VexStr;
            char         Buffer[ 128 ];
            char        *CodedSigName;
            char        *Name;
            long         Index;
            vbl_vexstr  *ExprCnd;
            vbl_vexstr  *ExprVal;
            long          ProcessType;
            long          Type;
            long          Mode;
	    long          Width;
            long         Left;
            long         Right;
            long         Left_bnd;
            long         Right_bnd;
            chain_list  *SensList;
            chain_list  *HeadChain;
            chain_list  *ScanChain;
            chain_list  *DelChain;
            chain_list **PrevChain;
            ptype_list **PrevInst;
            ptype_list  *Inst;
            ptype_list  *InstIfs;
            ptype_list  *InstAsg;
            vbtyp_list  *TypeTarget;
            vexexpr     *VexTarget;
            vexexpr     *VexValue;
            vexexpr     *VexGuard;
            long         Line;
            unsigned char Dynamic;

           if ( (vbl_y_vsp[(1) - (6)].name).AGGREG )
           {
             my_vbl_error(114,NULL);
           }

          if ( (vbl_y_vsp[(5) - (6)].list).AGGREG )
          {
            HeadChain = reverse( (chain_list *)(vbl_y_vsp[(5) - (6)].list).IDENT );
            ScanChain = HeadChain;

            if ( HeadChain->NEXT != (chain_list *)0 )
            {
              Width    = 0;
              VexValue = createvexoper( VEX_CONCAT, 1 );

              while ( ScanChain != (chain_list *)0 )
              {
                VexStr = (vbl_vexstr *)ScanChain->DATA;
                Width += VexStr->VEX->WIDTH;
                addvexhexpr( VexValue, VexStr->VEX );

                autfreeheap( VexStr, sizeof( vbl_vexstr ) );

                ScanChain = ScanChain->NEXT;
              }

              VexValue->WIDTH = Width;
            }
            else
            {
              VexStr   = (vbl_vexstr *)HeadChain->DATA;
              VexValue = VexStr->VEX;

              autfreeheap( VexStr, sizeof( vbl_vexstr ) );
            }

            freechain( HeadChain );

	    (vbl_y_vsp[(5) - (6)].list).AGGREG = 0;
	    (vbl_y_vsp[(5) - (6)].list).VEX    = VexValue;
          }

            sprintf( Buffer, "%s.cod.%s", VBL_MODNAM, (vbl_y_vsp[(1) - (6)].name).NAME );
            CodedSigName = namealloc( Buffer );

            Type = chktab( hshtab, CodedSigName, VBL_MODNAM, VBL_TYPDFN );
            ProcessType = 0;

            if ( Type >= VBH_MAX_TYPE )
            {
              Mode    = chktab( hshtab, (vbl_y_vsp[(1) - (6)].name).NAME, VBL_MODNAM, VBL_SYMDFN );
              Dynamic = chktab( hshtab, (vbl_y_vsp[(1) - (6)].name).NAME, VBL_MODNAM, VBL_DYNDFN );

              Left  = (vbl_y_vsp[(1) - (6)].name).LEFT;
              Right = (vbl_y_vsp[(1) - (6)].name).RIGHT;
            }
            else
            {
              Type    = chktab( hshtab, (vbl_y_vsp[(1) - (6)].name).NAME, VBL_MODNAM, VBL_TYPDFN );
              Mode    = chktab( hshtab, (vbl_y_vsp[(1) - (6)].name).NAME, VBL_MODNAM, VBL_SYMDFN );
              Dynamic = chktab( hshtab, (vbl_y_vsp[(1) - (6)].name).NAME, VBL_MODNAM, VBL_DYNDFN );

              Left  = (vbl_y_vsp[(1) - (6)].name).LEFT;
              Right = (vbl_y_vsp[(1) - (6)].name).RIGHT;
            }

            if( Mode == VBL_ICNDFN ) my_vbl_error( 21, (vbl_y_vsp[(1) - (6)].name).NAME );
            if( Mode == 0          ) my_vbl_error( 17, (vbl_y_vsp[(1) - (6)].name).NAME );

            if ( ! (vbl_y_vsp[(1) - (6)].name).DYNAMIC )
            {
              VexTarget = vbl_dynamicvexatom( (vbl_y_vsp[(1) - (6)].name).NAME, (vbl_y_vsp[(1) - (6)].name).LEFT, (vbl_y_vsp[(1) - (6)].name).RIGHT, 0 );
            }
            else
            {
              Left_bnd  = chktab (hshtab,(vbl_y_vsp[(1) - (6)].name).NAME,VBL_MODNAM,VBL_WMNDFN);
              Right_bnd = chktab (hshtab,(vbl_y_vsp[(1) - (6)].name).NAME,VBL_MODNAM,VBL_WMXDFN);

              VexTarget = vbl_dynamicvexatom( (vbl_y_vsp[(1) - (6)].name).NAME, Left_bnd, Right_bnd, Dynamic );

              if ( Right == 0 )
              {
                VexTarget = createvexbinexpr( VEX_INDEX, 1, VexTarget, (vexexpr *)Left );
              }
              else
              {
                if ( ( Mode == VBL_FUNDFN ) ||
                     ( Mode == VBL_PRODFN ) ||
                     ( Mode == VBL_TPEDFN ) )
                {
                  freevexexpr( VexTarget );
                  VexTarget = (vexexpr *)Left;
                }
                else
                if ( (vbl_y_vsp[(1) - (6)].name).DYNAMIC == VBL_UPTDFN )
                {
                   if ( ( ! Dynamic                                                  ) ||
                        ( ! isvexequalexpr( (vexexpr *)Left_bnd, (vexexpr *)Left   ) ) ||
                        ( ! isvexequalexpr( (vexexpr *)Right_bnd, (vexexpr *)Right ) ) )
                   {
                     VexTarget = createvexternaryexpr( VEX_TO, 1, VexTarget, 
                                                       (vexexpr *)Left, (vexexpr *)Right );
                   }
                }
                else
                if ( (vbl_y_vsp[(1) - (6)].name).DYNAMIC == VBL_DWTDFN )
                {
                   if ( ( ! Dynamic                                                  ) ||
                        ( ! isvexequalexpr( (vexexpr *)Left_bnd, (vexexpr *)Left   ) ) ||
                        ( ! isvexequalexpr( (vexexpr *)Right_bnd, (vexexpr *)Right ) ) )
                   {
                     VexTarget = createvexternaryexpr( VEX_DOWNTO, 1, VexTarget,
                                                    (vexexpr *)Left, (vexexpr *)Right );
                   }
                }
                else 
                {
                  VexTarget = createvexbinexpr( VEX_INDEX_N, 1, VexTarget, (vexexpr *)Left );
                  VexTarget = createvexbinexpr( VEX_INDEX_N, 1, VexTarget, (vexexpr *)Right );
                }
              }
            }

            if ( (vbl_y_vsp[(1) - (6)].name).SIGNED )
            {
              SetVexNodeSigned( VexTarget );
            }

            TypeTarget = get_type( Type );

            Inst     = (ptype_list *)0;
            PrevInst = &Inst;
            SensList = (chain_list *)0;

            if ( VBL_CNDLST != (chain_list *)0 )
            {
              VBL_CNDLST = reverse( VBL_CNDLST );
              VBL_VALLST = reverse( VBL_VALLST );
              VBL_LINLST = reverse( VBL_LINLST );
            }

            while ( VBL_CNDLST != (chain_list *)0 )
            {
              ProcessType |= VBH_PROCESS_CONDITIONNAL_MASK;

              ExprVal = (vbl_vexstr *)VBL_VALLST->DATA;
              ExprCnd = (vbl_vexstr *)VBL_CNDLST->DATA;
              Line    = (long        )VBL_LINLST->DATA;

              SensList = unionvexexprsupport( SensList, ExprCnd->VEX );
              SensList = unionvexexprsupport( SensList, ExprVal->VEX );

              InstAsg = vbh_addvbasg( (ptype_list *)0, dupvexexpr( VexTarget ), 
                                      simpvexexprothers( ExprVal->VEX, VexTarget->WIDTH ),
                                      TypeTarget, Line );

              InstIfs = vbh_addvbifs( (ptype_list *)0, ExprCnd->VEX, Line );
              ((vbifs_list *)InstIfs->DATA)->CNDTRUE = InstAsg;

              *PrevInst = InstIfs;
              PrevInst  = &((vbifs_list *)InstIfs->DATA)->CNDFALSE;

              autfreeheap( ExprCnd, sizeof( vbl_vexstr ) );
              autfreeheap( ExprVal, sizeof( vbl_vexstr ) );

              VBL_CNDLST = delchain( VBL_CNDLST, VBL_CNDLST );
              VBL_VALLST = delchain( VBL_VALLST, VBL_VALLST );
              VBL_LINLST = delchain( VBL_LINLST, VBL_LINLST );
            }

            SensList  = unionvexexprsupport( SensList, (vbl_y_vsp[(5) - (6)].list).VEX );
            *PrevInst = vbh_addvbasg( (ptype_list *)0, VexTarget,
                                      simpvexexprothers( (vbl_y_vsp[(5) - (6)].list).VEX, VexTarget->WIDTH ),
                                      TypeTarget, VBL_LINNUM );
            if ( (vbl_y_vsp[(3) - (6)].valu) == VBL_GRDDFN )
            {
              ProcessType |= VBH_PROCESS_GUARDED_MASK;

              VexGuard = dupvexexpr( (vexexpr *)VBL_GRDLST->DATA );
              SensList = unionvexexprsupport( SensList, VexGuard );

              InstIfs  = vbh_addvbifs( (ptype_list *)0, VexGuard, VBL_LINNUM );
              ((vbifs_list *)InstIfs->DATA)->CNDTRUE = Inst;

              Inst = InstIfs;
            }

            PrevChain = &SensList;
            ScanChain =  SensList;

            while ( ScanChain != (chain_list *)0 )
            {
              Name = getvexvectorname( ScanChain->DATA, &Index );
              Mode = chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN );

              if ( ( Mode == VBL_CSTDFN  ) ||
                   ( Mode == VBL_GENDFN  ) ||
                   ( Mode == VBL_VARDFN  ) )
              {
                DelChain   = ScanChain;
                *PrevChain = DelChain->NEXT;
                ScanChain  = ScanChain->NEXT;

                DelChain->NEXT = (chain_list *)0;
                freechain( DelChain );
              }
              else
              {
                PrevChain = &ScanChain->NEXT;
                ScanChain = ScanChain->NEXT;
              }
            }
                
            Inst = addptype( Inst, VBH_BEWAS,
                             vbh_addvbwas( SensList, NULL, 0, NULL, VBL_LINNUM ) );
            Inst = reversetype( Inst );

            VBL_PROCNUM++;
            sprintf( Buffer, "p%ld_%ld", VBL_LINNUM, VBL_PROCNUM );
            VBL_PROCNAM = namealloc( Buffer );
            VBL_BEPCS = vbh_addvbpcs( VBL_BEPCS, VBL_PROCNAM, NULL, Inst, VBL_LINNUM );
            VBL_BEPCS->TYPE = ProcessType;
            VBL_PROCNAM = (char *)0;
          }
    break;

  case 281:
#line 4810 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbl_vexstr *Expr;

            Expr = (vbl_vexstr *)autallocheap( sizeof( vbl_vexstr ) );
            Expr->WIDTH = (vbl_y_vsp[(4) - (5)].list).WIDTH;
            Expr->VEX   = (vbl_y_vsp[(4) - (5)].list).VEX;
            VBL_CNDLST  = addchain( VBL_CNDLST, (char *)Expr );

            Expr = (vbl_vexstr *)autallocheap( sizeof( vbl_vexstr ) );
            Expr->WIDTH = (vbl_y_vsp[(2) - (5)].list).WIDTH;
            Expr->VEX   = (vbl_y_vsp[(2) - (5)].list).VEX;
            VBL_VALLST  = addchain( VBL_VALLST, (char *)Expr );

            VBL_LINLST = addchain( VBL_LINLST, (char *)VBL_LINNUM );
          }
    break;

  case 282:
#line 4830 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            VBL_CASSIZE = (vbl_y_vsp[(2) - (2)].list).WIDTH - 1;
          }
    break;

  case 283:
#line 4840 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char        *CodedSigName;
            char        *Name;
            long         Index;
            char         Buffer[ 128 ];
            ptype_list  *InstCase;
            ptype_list  *InstAsg;
            ptype_list  *InstIfs;
            ptype_list  *Inst;
            chain_list  *SensList;
            vbl_vexstr  *ExprVal;
            vbcho_list  *VbChoice;
            vbcas_list  *VbCase;
            chain_list  *ScanCond;
            chain_list  *ScanChain;
            chain_list **PrevChain;
            chain_list  *DelChain;
            vbtyp_list  *TypeTarget;
            vexexpr     *VexTarget;
            vexexpr     *VexGuard;
            char        *Value;
            long          SizeValue;
            long          NumberChoice;
            long          Type;
            long          Mode;
            long         Left;
            long         Right;
            long         Left_bnd;
            long         Right_bnd;
            long         Line;
            long          ProcessType;
            unsigned char Dynamic;

           if ( (vbl_y_vsp[(5) - (10)].name).AGGREG )
           {
             my_vbl_error(114,NULL);
           }

            sprintf( Buffer, "%s.cod.%s", VBL_MODNAM, (vbl_y_vsp[(5) - (10)].name).NAME );
            CodedSigName = namealloc( Buffer );
            ProcessType = VBH_PROCESS_WITHSELECT_MASK;

            Type = chktab( hshtab, CodedSigName, VBL_MODNAM, VBL_TYPDFN );

            if ( Type >= VBH_MAX_TYPE )
            {
              Mode    = chktab( hshtab, (vbl_y_vsp[(5) - (10)].name).NAME, VBL_MODNAM, VBL_SYMDFN );
              Dynamic = chktab( hshtab, (vbl_y_vsp[(5) - (10)].name).NAME, VBL_MODNAM, VBL_DYNDFN );
              Left  = (vbl_y_vsp[(5) - (10)].name).LEFT;
              Right = (vbl_y_vsp[(5) - (10)].name).RIGHT;
            }
            else
            {
              Type = chktab( hshtab, (vbl_y_vsp[(5) - (10)].name).NAME, VBL_MODNAM, VBL_TYPDFN );
              Mode = chktab( hshtab, (vbl_y_vsp[(5) - (10)].name).NAME, VBL_MODNAM, VBL_SYMDFN );
              Dynamic = chktab( hshtab, (vbl_y_vsp[(5) - (10)].name).NAME, VBL_MODNAM, VBL_DYNDFN );

              Left  = (vbl_y_vsp[(5) - (10)].name).LEFT;
              Right = (vbl_y_vsp[(5) - (10)].name).RIGHT;
            }

            if( Mode == VBL_ICNDFN ) my_vbl_error( 21, (vbl_y_vsp[(5) - (10)].name).NAME );
            if( Mode == 0          ) my_vbl_error( 17, (vbl_y_vsp[(5) - (10)].name).NAME );

            if ( ! (vbl_y_vsp[(5) - (10)].name).DYNAMIC )
            {
              VexTarget = vbl_dynamicvexatom( (vbl_y_vsp[(5) - (10)].name).NAME, (vbl_y_vsp[(5) - (10)].name).LEFT, (vbl_y_vsp[(5) - (10)].name).RIGHT, 0 );
            }
            else
            {
              Left_bnd  = chktab (hshtab,(vbl_y_vsp[(5) - (10)].name).NAME,VBL_MODNAM,VBL_WMNDFN);
              Right_bnd = chktab (hshtab,(vbl_y_vsp[(5) - (10)].name).NAME,VBL_MODNAM,VBL_WMXDFN);

              VexTarget = vbl_dynamicvexatom( (vbl_y_vsp[(5) - (10)].name).NAME, Left_bnd, Right_bnd, Dynamic );

              if ( Right == 0 )
              {
                VexTarget = createvexbinexpr( VEX_INDEX, 1, VexTarget,
                                              (vexexpr *)Left );
              }
              else
              {
                if ( ( Mode == VBL_FUNDFN ) ||
                     ( Mode == VBL_TPEDFN ) ||
                     ( Mode == VBL_PRODFN ) )
                {
                  VexTarget = (vexexpr *)Left;
                }
                else
                if ( (vbl_y_vsp[(5) - (10)].name).DYNAMIC == VBL_UPTDFN )
                {
                   if ( ( ! Dynamic                                                  ) ||
                        ( ! isvexequalexpr( (vexexpr *)Left_bnd, (vexexpr *)Left   ) ) ||
                        ( ! isvexequalexpr( (vexexpr *)Right_bnd, (vexexpr *)Right ) ) )
                   {
                      VexTarget = createvexternaryexpr( VEX_TO, 1, VexTarget,
                                                    (vexexpr *)Left, (vexexpr *)Right );
                   }
                }
                else
                if ( (vbl_y_vsp[(5) - (10)].name).DYNAMIC == VBL_DWTDFN )
                {
                   if ( ( ! Dynamic                                                  ) ||
                        ( ! isvexequalexpr( (vexexpr *)Left_bnd, (vexexpr *)Left   ) ) ||
                        ( ! isvexequalexpr( (vexexpr *)Right_bnd, (vexexpr *)Right ) ) )
                   {
                     VexTarget = createvexternaryexpr( VEX_DOWNTO, 1, VexTarget,
                                                    (vexexpr *)Left, (vexexpr *)Right );
                   }
                }
                else
                {
                 VexTarget = createvexbinexpr( VEX_INDEX_N, 1, VexTarget, (vexexpr *)Left );
                 VexTarget = createvexbinexpr( VEX_INDEX_N, 1, VexTarget, (vexexpr *)Right );
                }
              }
            }

            if ( (vbl_y_vsp[(5) - (10)].name).SIGNED )
            {
              SetVexNodeSigned( VexTarget );
            }

            TypeTarget = get_type( Type );
            SensList   = getvexexprsupport( (vbl_y_vsp[(2) - (10)].list).VEX );

            InstCase = vbh_addvbcas( (ptype_list *)0, (vbl_y_vsp[(2) - (10)].list).VEX, get_type( (vbl_y_vsp[(2) - (10)].list).TYPE ), VBL_LINNUM );
            VbCase   = (vbcas_list *)InstCase->DATA;

            SizeValue    = (vbl_y_vsp[(2) - (10)].list).WIDTH + 1;
            NumberChoice = 0;

            for ( ScanCond  = VBL_CNDLST;
                  ScanCond != (chain_list *)0;
                  ScanCond  = ScanCond->NEXT )
            {
              NumberChoice++;
            }

            VbChoice = (vbcho_list *)autallocblock( sizeof( vbcho_list ) * NumberChoice );

            VbCase->CHOICE = VbChoice;
            VbCase->SIZE   = NumberChoice;

            while ( VBL_CNDLST != (chain_list *)0 )
            {
              NumberChoice = NumberChoice - 1;

              ExprVal = (vbl_vexstr *)VBL_VALLST->DATA;
              Line    = (long        )VBL_LINLST->DATA;

              ExprVal->VEX = simpvexexprothers( ExprVal->VEX, VexTarget->WIDTH ),
              
              InstAsg = vbh_addvbasg( (ptype_list *)0, dupvexexpr( VexTarget ), 
                                      ExprVal->VEX, TypeTarget, Line );

              SensList = unionvexexprsupport( SensList, ExprVal->VEX );

              Value = (char *)VBL_CNDLST->DATA;
              if ( Value == (char *)0 ) Value = namealloc( "others" );

              VbChoice[ NumberChoice ].INSTRUCTION = InstAsg;
              VbChoice[ NumberChoice ].SIZE        = SizeValue;
              VbChoice[ NumberChoice ].VALUES      = addchain( NULL, Value );

              autfreeheap( ExprVal, sizeof( vbl_vexstr ) );

              VBL_CNDLST = delchain( VBL_CNDLST, VBL_CNDLST );
              VBL_VALLST = delchain( VBL_VALLST, VBL_VALLST );
              VBL_LINLST = delchain( VBL_LINLST, VBL_LINLST );
            }

            if ( (vbl_y_vsp[(7) - (10)].valu) == VBL_GRDDFN )
            {
              ProcessType |= VBH_PROCESS_GUARDED_MASK;

              VexGuard = dupvexexpr( (vexexpr *)VBL_GRDLST->DATA );
              SensList = unionvexexprsupport( SensList, VexGuard );

              InstIfs  = vbh_addvbifs( (ptype_list *)0, VexGuard, VBL_LINNUM );
              ((vbifs_list *)InstIfs->DATA)->CNDTRUE = InstCase;

              Inst = InstIfs;
            }
            else
            {
              Inst = InstCase;
            }

            PrevChain = &SensList;
            ScanChain =  SensList;

            while ( ScanChain != (chain_list *)0 )
            {
              Name = getvexvectorname( ScanChain->DATA, &Index );
              Mode = chktab( hshtab, Name, VBL_MODNAM, VBL_SYMDFN );

              if ( ( Mode == VBL_CSTDFN  ) ||
                   ( Mode == VBL_GENDFN  ) ||
                   ( Mode == VBL_VARDFN  ) )
              {
                DelChain   = ScanChain;
                *PrevChain = DelChain->NEXT;
                ScanChain  = ScanChain->NEXT;

                DelChain->NEXT = (chain_list *)0;
                freechain( DelChain );
              }
              else
              {
                PrevChain = &ScanChain->NEXT;
                ScanChain = ScanChain->NEXT;
              }
            }

            Inst->NEXT = addptype( (ptype_list *)0, VBH_BEWAS,
                                   vbh_addvbwas( SensList, NULL, 0, NULL, VBL_LINNUM ) );

            VBL_PROCNUM++;
            sprintf( Buffer, "p%ld_%ld", VBL_LINNUM, VBL_PROCNUM );
            VBL_PROCNAM = namealloc( Buffer );
            VBL_BEPCS = vbh_addvbpcs( VBL_BEPCS, VBL_PROCNAM, NULL, Inst, VBL_LINNUM );
            VBL_BEPCS->TYPE = ProcessType;
            VBL_PROCNAM = (char *)0;
          }
    break;

  case 286:
#line 5078 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbl_vexstr *Expr;

            while ( VBL_NUMCHOICE > 0 )
            {
              Expr = (vbl_vexstr *)autallocheap( sizeof( vbl_vexstr ) );
              Expr->WIDTH = (vbl_y_vsp[(1) - (3)].list).WIDTH;
              Expr->VEX   = dupvexexpr( (vbl_y_vsp[(1) - (3)].list).VEX );

              VBL_VALLST  = addchain( VBL_VALLST, (char *)Expr );
              VBL_NUMCHOICE--;
            }

            freevexexpr( (vbl_y_vsp[(1) - (3)].list).VEX );
          }
    break;

  case 287:
#line 5097 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           if ( chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_SYMDFN) != 0)
             my_vbl_error (19,(vbl_y_vsp[(1) - (1)].text));

           addtab( hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_SYMDFN, VBL_LABDFN);

           VBL_PROCNAM = (vbl_y_vsp[(1) - (1)].text);
         }
    break;

  case 289:
#line 5106 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           char buffer[ 128 ];
           VBL_PROCNUM++;
           sprintf( buffer, "p%ld_%ld", VBL_LINNUM, VBL_PROCNUM );
           VBL_PROCNAM = namealloc( buffer );
         }
    break;

  case 291:
#line 5117 "../../../src/vbl/src/vbl_bcomp_y.y"
    { VBL_NM1LST = NULL;}
    break;

  case 292:
#line 5119 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
         VBL_BEPCS = vbh_addvbpcs( VBL_BEPCS, VBL_PROCNAM,VBL_NM1LST,NULL,VBL_LINNUM );
         VBL_BEPCS->TYPE = VBH_PROCESS_SEQUENTIAL_MASK;
         VBL_NM1LST = NULL; 
       }
    break;

  case 293:
#line 5126 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
         void *pnt;
         pnt = &(VBL_BEPCS->INSTRUCTION);
         VBL_INSLST = addchain(NULL,pnt);
       }
    break;

  case 294:
#line 5132 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
                  struct ptype **pnt;
                  struct ptype *ptype;
                  pnt = (struct ptype**)VBL_INSLST->DATA;
                  ptype = reversetype(*pnt);
                  *pnt = ptype;
                  VBL_INSLST = delchain (VBL_INSLST, VBL_INSLST);
       }
    break;

  case 295:
#line 5144 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
           VBL_PROCNAM = (char *)0;
           vbl_y_errok;
         }
    break;

  case 298:
#line 5159 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
                vbl_y_errok;
                }
    break;

  case 309:
#line 5183 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 310:
#line 5189 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           vexexpr    *Vex;
           chain_list *Chain;
           char       *LocalName;

           if ( chktab(hshtab,(vbl_y_vsp[(1) - (2)].name).NAME,VBL_FUNCNAM,VBL_SYMDFN ) )
           {
             LocalName = VBL_FUNCNAM;
           }
           else
           if ( chktab(hshtab,(vbl_y_vsp[(1) - (2)].name).NAME,VBL_MODNAM,VBL_SYMDFN ) )
           {
             LocalName = VBL_MODNAM;
           }
           else
           {
             my_vbl_error(17,(vbl_y_vsp[(1) - (2)].name).NAME);
           }

           if ( ! (vbl_y_vsp[(1) - (2)].name).DYNAMIC )
           {
             if ( ( (vbl_y_vsp[(1) - (2)].name).LEFT  == -1 ) &&
                  ( (vbl_y_vsp[(1) - (2)].name).RIGHT == -1 ) )
             {
               Vex = createvexatombit( (vbl_y_vsp[(1) - (2)].name).NAME );
             }
             else
             {
               Vex = createvexatomvec( (vbl_y_vsp[(1) - (2)].name).NAME, (vbl_y_vsp[(1) - (2)].name).LEFT, (vbl_y_vsp[(1) - (2)].name).RIGHT );
             }
           }
           else
           {
             Vex = createvexatomvec( (vbl_y_vsp[(1) - (2)].name).NAME, -1, -1 );
           }

           Chain = getvexatombitname( Vex );
           VBL_NM1LST = append( VBL_NM1LST, Chain );
           freevexexpr( Vex );
       }
    break;

  case 312:
#line 5236 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           vexexpr    *Vex;
           chain_list *Chain;
           char       *LocalName;

           if ( chktab(hshtab,(vbl_y_vsp[(2) - (3)].name).NAME,VBL_FUNCNAM,VBL_SYMDFN ) )
           {
             LocalName = VBL_FUNCNAM;
           }
           else
           if ( chktab(hshtab,(vbl_y_vsp[(2) - (3)].name).NAME,VBL_MODNAM,VBL_SYMDFN ) )
           {
             LocalName = VBL_MODNAM;
           }
           else
           {
             my_vbl_error(17,(vbl_y_vsp[(2) - (3)].name).NAME);
           }

           if ( ! (vbl_y_vsp[(2) - (3)].name).DYNAMIC )
           {
             if ( ( (vbl_y_vsp[(2) - (3)].name).LEFT  == -1 ) &&
                  ( (vbl_y_vsp[(2) - (3)].name).RIGHT == -1 ) )
             {
               Vex = createvexatombit( (vbl_y_vsp[(2) - (3)].name).NAME );
             }
             else
             {
               Vex = createvexatomvec( (vbl_y_vsp[(2) - (3)].name).NAME, (vbl_y_vsp[(2) - (3)].name).LEFT, (vbl_y_vsp[(2) - (3)].name).RIGHT );
             }
           }
           else
           {
             Vex = createvexatomvec( (vbl_y_vsp[(2) - (3)].name).NAME, -1, -1 );
           }

           Chain = getvexatombitname( Vex );
           VBL_NM1LST = append( VBL_NM1LST, Chain );
           freevexexpr( Vex );
       }
    break;

  case 327:
#line 5301 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           if ( chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_MODNAM,VBL_SYMDFN) != 0)
             my_vbl_error (19,(vbl_y_vsp[(1) - (1)].text));

            VBL_LOOPLBLLST = addchain(VBL_LOOPLBLLST,(vbl_y_vsp[(1) - (1)].text) );
          }
    break;

  case 329:
#line 5310 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
             char buffer[ 128 ];

             VBL_LOOPNUM++;
             sprintf( buffer, "loop_%ld_%ld", VBL_LINNUM, VBL_LOOPNUM );
             VBL_LOOPLBLLST = addchain ( VBL_LOOPLBLLST, namealloc( buffer ) );
          }
    break;

  case 331:
#line 5323 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            struct ptype **pnt;
            vbl_name      *Range;
            vbvar_list    *VbVar;
            char          *LocalName;
            vexexpr       *Target;
            short          Signed;
            long           Left;
            long           Right;
            long           AttrLeft;
            long           AttrRight;
            char           StrFlag;
            char           ForUp;

            pnt = (struct ptype**)VBL_INSLST->DATA;
            VBL_LOOPLBL = (char *)VBL_LOOPLBLLST->DATA;

            if ( (vbl_y_vsp[(1) - (2)].list).IDENT != (char *)0 )
            {
              if ( VBL_FUNCNAM != (char *)0 )
              {
                LocalName = VBL_FUNCNAM;
                StrFlag   = 'v';
              }
              else
              {
                LocalName = VBL_PROCNAM;
                StrFlag   = 'V';
              }

              Range = (vbl_name *)(vbl_y_vsp[(1) - (2)].list).VEX;

              if ( Range->DYNAMIC )
              {
                if ( Range->DYNAMIC == VBL_UPTDFN ) ForUp = 1;
                else                                ForUp = 0;

                AttrLeft  = -1;
                AttrRight = -1;
              }
              else
              {
                AttrLeft  = Range->LEFT;
                AttrRight = Range->RIGHT;

                if ( AttrLeft <= AttrRight ) ForUp = 1;
                else                         ForUp = 0;
              }

              if ( chktab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_SYMDFN ) != 0 )
              {
                Target = (vexexpr *)chktab( hshtab, (vbl_y_vsp[(1) - (2)].list).IDENT, LocalName, VBL_PNTDFN );
                Signed = ( IsVexNodeSigned( Target ) != 0 );
              }
              else
              {
                VbVar = (vbvar_list *)vbl_addstr( StrFlag,0,
                                                 get_type(VBH_TYPE_INTEGER),VBH_TYPE_INTEGER,
                                                'I',(vbl_y_vsp[(1) - (2)].list).IDENT, -1, -1, NULL, 0 ,0);
                Target = VbVar->TARGET; 
                Signed = ( IsVexNodeSigned( VbVar->TARGET ) != 0 );

                if ( IsVexAtomBit( VbVar->TARGET ) )
                {
                  Left  = -1;
                  Right = -1;
                }
                else
                {
                  Left  = VbVar->TARGET->LEFT;
                  Right = VbVar->TARGET->RIGHT;
                }

                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_SYMDFN,VBL_VARDFN);
                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_TYPDFN,VBH_TYPE_INTEGER);
                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_WMNDFN,Left);
                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_WMXDFN,Right);
                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_ATLDFN,AttrLeft);
                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_ATRDFN,AttrRight);
                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_LBLDFN,0);
                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_PNTDFN,(long)VbVar->TARGET);
                addtab( hshtab,(vbl_y_vsp[(1) - (2)].list).IDENT,LocalName,VBL_SUNDFN,Signed);
              }

              if ( ! Range->DYNAMIC )
              {
                Range->LEFT  = (long)createvexatomlong( AttrLeft , 0, Signed );
                Range->RIGHT = (long)createvexatomlong( AttrRight, 0, Signed );
              }

              *pnt = vbh_addvbfor(*pnt,VBL_LOOPLBL,dupvexexpr(Target),
                                  Range->LEFT,Range->RIGHT,ForUp, VBL_LINNUM );

              VBL_INSLST = addchain( VBL_INSLST, 
                                     &(((struct vbfor*)(*pnt)->DATA)->INSTRUCTION));

              autfreeheap( Range, sizeof( vbl_name ) );
            }
            else
            if ( (vbl_y_vsp[(1) - (2)].list).VEX != (vexexpr *)0 )
            {
              *pnt = vbh_addvbwhi(*pnt,VBL_LOOPLBL,(vbl_y_vsp[(1) - (2)].list).VEX, VBL_LINNUM );
              VBL_INSLST = addchain( VBL_INSLST, 
                                    &(((struct vbwhi*)(*pnt)->DATA)->INSTRUCTION));
            }
            else
            {
              *pnt = vbh_addvblop(*pnt,VBL_LOOPLBL, VBL_LINNUM );
              VBL_INSLST = addchain( VBL_INSLST, 
                                    &(((struct vblop *)(*pnt)->DATA)->INSTRUCTION));
            }
          }
    break;

  case 332:
#line 5440 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            struct ptype **pnt;
            struct ptype *ptype;

            pnt = (struct ptype**)VBL_INSLST->DATA;
            ptype = reversetype(*pnt);
            *pnt = ptype;

            if ( (vbl_y_vsp[(7) - (8)].text) != NULL )
            {
              if ( VBL_LOOPLBLLST->DATA != (vbl_y_vsp[(7) - (8)].text) )
              {
                my_vbl_error( 95, (vbl_y_vsp[(7) - (8)].text) );
              }
            }

            VBL_INSLST = delchain( VBL_INSLST, VBL_INSLST);
            VBL_LOOPLBLLST = delchain( VBL_LOOPLBLLST, VBL_LOOPLBLLST );
            VBL_LOOPLBL = (char *)NULL;
          }
    break;

  case 333:
#line 5464 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.list) = vbl_crtvex( EMPTYOP,VBL_EMPSTR ,VBL_EMPSTR ,-1,-1,0);
          }
    break;

  case 334:
#line 5468 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list);
          }
    break;

  case 335:
#line 5476 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list);
          }
    break;

  case 336:
#line 5481 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list);
          }
    break;

  case 337:
#line 5490 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbl_name *Range;

            Range  = (vbl_name *)autallocheap( sizeof( vbl_name ) );
            *Range = (vbl_y_vsp[(3) - (3)].name);

            (vbl_y_val.list).IDENT = (vbl_y_vsp[(1) - (3)].text);
            (vbl_y_val.list).VEX   = (vexexpr *)Range;
          }
    break;

  case 338:
#line 5503 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           if ( ( VBL_BEPCS              != NULL ) &&
                ( VBL_BEPCS->SENSITIVITY != NULL ) )
           {
             my_vbl_error(96,NULL);
           }
         }
    break;

  case 339:
#line 5514 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct ptype **pnt;
           struct ptype  *ptptyp;
           struct vbwas  *ptvbwas;

           ptvbwas = vbh_addvbwas( VBL_NM1LST, (vbl_y_vsp[(4) - (6)].list).VEX, (vbl_y_vsp[(5) - (6)].name).TYPE, 
                                   (vexexpr *)(vbl_y_vsp[(5) - (6)].name).NAME, VBL_LINNUM );

           pnt = (struct ptype **) VBL_INSLST->DATA;
           ptptyp = addptype(*pnt, VBH_BEWAS, ptvbwas);
           *pnt = ptptyp;
           VBL_NM1LST = NULL;
         }
    break;

  case 340:
#line 5531 "../../../src/vbl/src/vbl_bcomp_y.y"
    { VBL_NM1LST = NULL;}
    break;

  case 342:
#line 5537 "../../../src/vbl/src/vbl_bcomp_y.y"
    { VBL_NM1LST = NULL;}
    break;

  case 344:
#line 5543 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (EMPTYOP ,VBL_EMPSTR ,VBL_EMPSTR ,-1,-1,0); }
    break;

  case 345:
#line 5545 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
              (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list);
              }
    break;

  case 346:
#line 5553 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list);
         }
    break;

  case 347:
#line 5560 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           (vbl_y_val.name).NAME  = NULL;
           (vbl_y_val.name).LEFT  = 0;
           (vbl_y_val.name).RIGHT = 0;
           (vbl_y_val.name).FLAG  = 0;
           (vbl_y_val.name).TYPE  = 0;
           (vbl_y_val.name).DYNAMIC = 0;
           (vbl_y_val.name).AGGREG  = 0;
         }
    break;

  case 348:
#line 5570 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name);
         }
    break;

  case 349:
#line 5579 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           (vbl_y_val.name).NAME   = (char *)(vbl_y_vsp[(2) - (3)].list).VEX;
           (vbl_y_val.name).TYPE   = (vbl_y_vsp[(3) - (3)].valu);
           (vbl_y_val.name).FLAG   = 0;
           (vbl_y_val.name).SIGNED = 0;
           (vbl_y_val.name).LEFT   = 0;
           (vbl_y_val.name).RIGHT  = 0;
           (vbl_y_val.name).AGGREG  = 0;
           (vbl_y_val.name).DYNAMIC = 1;

           viewvexexprboundln( (vbl_y_vsp[(2) - (3)].list).VEX );
           fprintf( stdout, " %d\n", (vbl_y_vsp[(3) - (3)].valu) );
         }
    break;

  case 350:
#line 5596 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
              (vbl_y_val.valu) = VBH_TIME_UNIT_FS;
         }
    break;

  case 351:
#line 5600 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
              (vbl_y_val.valu) = VBH_TIME_UNIT_PS;
         }
    break;

  case 352:
#line 5604 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
              (vbl_y_val.valu) = VBH_TIME_UNIT_NS;
         }
    break;

  case 353:
#line 5608 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
              (vbl_y_val.valu) = VBH_TIME_UNIT_MS;
         }
    break;

  case 354:
#line 5618 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct vbnxt  *ptvbnxt;
           struct ptype **pnt;

           pnt = (struct ptype**)VBL_INSLST->DATA;
           ptvbnxt = vbh_addvbnxt((vbl_y_vsp[(2) - (4)].text), (vbl_y_vsp[(3) - (4)].list).VEX,VBL_LINNUM);
           *pnt = addptype( *pnt, VBH_BENXT, ptvbnxt );
         }
    break;

  case 355:
#line 5633 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct vbext  *ptvbext;
           struct ptype **pnt;

           pnt = (struct ptype**)VBL_INSLST->DATA;
           ptvbext = vbh_addvbext((vbl_y_vsp[(2) - (4)].text), (vbl_y_vsp[(3) - (4)].list).VEX,VBL_LINNUM);
           *pnt = addptype( *pnt, VBH_BEEXT, ptvbext );
         }
    break;

  case 356:
#line 5645 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list).VEX = (vexexpr *)0; }
    break;

  case 357:
#line 5648 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list); }
    break;

  case 358:
#line 5655 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            struct vbret  *ptvbret;
            struct ptype **pnt;

            if ( VBL_FUNCNAM == (char *)0 )
            {
              my_vbl_error(120,NULL);
            }

            pnt = (struct ptype**)VBL_INSLST->DATA;
            ptvbret = vbh_addvbret((vbl_y_vsp[(2) - (3)].list).VEX,VBL_LINNUM);
            *pnt = addptype( *pnt, VBH_BERET, ptvbret );
          }
    break;

  case 359:
#line 5672 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list).VEX = (vexexpr *)0; }
    break;

  case 360:
#line 5674 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 361:
#line 5683 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 362:
#line 5691 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           unsigned long  type;
           char         *codedsigname;
           long           mode;
           long          left ,right;
           long          left_bnd ,right_bnd;
           char          buffer[128];
           struct ptype **pnt;
           vexexpr       *vex;
           char          *LocalName;
           vbl_vexstr    *VexStr;
           vbl_vexstr    *VexStr2;
           chain_list    *ScanChain;
           chain_list    *ScanChain2;
           ptype_list    *AsgList;
           unsigned char  dynamic;

           if ( (vbl_y_vsp[(1) - (4)].name).AGGREG )
           {
             if ( ! (vbl_y_vsp[(3) - (4)].list).AGGREG )
             {
               my_vbl_error(114,NULL);
             }

             ScanChain  = (chain_list *)(vbl_y_vsp[(1) - (4)].name).NAME;
             ScanChain2 = (chain_list *)(vbl_y_vsp[(3) - (4)].list).IDENT;
             AsgList    = (ptype_list *)0;

             while ( ( ScanChain  != (chain_list *)0 ) &&
                     ( ScanChain2 != (chain_list *)0 ) )
             {
               VexStr  = (vbl_vexstr *)ScanChain->DATA;
               VexStr2 = (vbl_vexstr *)ScanChain2->DATA;

               AsgList = vbh_addvbvar( AsgList, VexStr->VEX,
               simpvexexprothers( VexStr2->VEX, VexStr->VEX->WIDTH ),
                                       get_type(VexStr->TYPE), VBL_LINNUM );

               autfreeheap( VexStr , sizeof( vbl_vexstr ) );
               autfreeheap( VexStr2, sizeof( vbl_vexstr ) );

               ScanChain  = ScanChain ->NEXT;
               ScanChain2 = ScanChain2->NEXT;
             }

             if ( ( ScanChain  != (chain_list *)0 ) ||
                  ( ScanChain2 != (chain_list *)0 ) )
             {
               my_vbl_error(114,NULL);
             }

             freechain( (chain_list *)(vbl_y_vsp[(1) - (4)].name).NAME );
             freechain( (chain_list *)(vbl_y_vsp[(3) - (4)].list).IDENT );

             pnt = (struct ptype**)(VBL_INSLST->DATA);
             *pnt = (struct ptype *)vbh_addvbagr(*pnt, AsgList, VBL_LINNUM );
           }
           else
           {
             if ( chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,VBL_FUNCNAM,VBL_SYMDFN ) )
             {
               LocalName = VBL_FUNCNAM;
             }
             else
             if ( chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,VBL_PROCNAM,VBL_SYMDFN ) )
             {
               LocalName = VBL_PROCNAM;
             }
             else
             {
               my_vbl_error(27,(vbl_y_vsp[(1) - (4)].name).NAME);
             }
  
             sprintf (buffer, "%s.cod.%s", LocalName, (vbl_y_vsp[(1) - (4)].name).NAME);
             codedsigname = namealloc( buffer );
  
             type = chktab(hshtab,codedsigname,LocalName,VBL_TYPDFN);
  
              if ( type >= VBH_MAX_TYPE )
             {
                 mode  = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_SYMDFN);
                 dynamic = chktab( hshtab, (vbl_y_vsp[(1) - (4)].name).NAME, LocalName, VBL_DYNDFN );
                 left  = (vbl_y_vsp[(1) - (4)].name).LEFT;
                 right = (vbl_y_vsp[(1) - (4)].name).RIGHT;
             }
             else
             {
                type = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_TYPDFN);
                mode = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_SYMDFN);
                dynamic = chktab( hshtab, (vbl_y_vsp[(1) - (4)].name).NAME, LocalName, VBL_DYNDFN );
  
                left  = (vbl_y_vsp[(1) - (4)].name).LEFT;
                right = (vbl_y_vsp[(1) - (4)].name).RIGHT;
             }
  
             if ( ! (vbl_y_vsp[(1) - (4)].name).DYNAMIC )
             {
               if ( ( (vbl_y_vsp[(1) - (4)].name).LEFT  == -1 ) &&
                    ( (vbl_y_vsp[(1) - (4)].name).RIGHT == -1 ) )
               {
                 vex = createvexatombit( (vbl_y_vsp[(1) - (4)].name).NAME );
               }
               else
               {
                 vex = createvexatomvec( (vbl_y_vsp[(1) - (4)].name).NAME, (vbl_y_vsp[(1) - (4)].name).LEFT, (vbl_y_vsp[(1) - (4)].name).RIGHT );
               }
             }
             else
             {
               left_bnd  = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_WMNDFN);
               right_bnd = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_WMXDFN);
  
               vex = vbl_dynamicvexatom( (vbl_y_vsp[(1) - (4)].name).NAME, left_bnd, right_bnd, dynamic );
  
               if ( right == 0 )
               {
                 vex = createvexbinexpr( VEX_INDEX, 1, vex, (vexexpr *)left );
               }
               else
               {
                 if ( ( mode == VBL_FUNDFN ) ||
                      ( mode == VBL_TPEDFN ) ||
                      ( mode == VBL_PRODFN ) )
                 {
                   vex = (vexexpr *)left;
                 }
                 else
                 if ( (vbl_y_vsp[(1) - (4)].name).DYNAMIC == VBL_UPTDFN )
                 {
                   if ( ( ! dynamic                                                  ) ||
                        ( ! isvexequalexpr( (vexexpr *)left_bnd, (vexexpr *)left   ) ) ||
                        ( ! isvexequalexpr( (vexexpr *)right_bnd, (vexexpr *)right ) ) )
                   {
                     vex = createvexternaryexpr( VEX_TO, 1, vex,
                                               (vexexpr *)left, (vexexpr *)right );
                   }
                 }
                 else
                 if ( (vbl_y_vsp[(1) - (4)].name).DYNAMIC == VBL_DWTDFN )
                 {
                   if ( ( ! dynamic                                                  ) ||
                        ( ! isvexequalexpr( (vexexpr *)left_bnd, (vexexpr *)left   ) ) ||
                        ( ! isvexequalexpr( (vexexpr *)right_bnd, (vexexpr *)right ) ) )
                   {
                     vex = createvexternaryexpr( VEX_DOWNTO, 1, vex,
                                               (vexexpr *)left, (vexexpr *)right );
                   }
                 }
                 else
                 {
                   vex = createvexbinexpr( VEX_INDEX_N, 1, vex, (vexexpr *)left );
                   vex = createvexbinexpr( VEX_INDEX_N, 1, vex, (vexexpr *)right );
                 }
               }
             }
  
             pnt = (struct ptype**)(VBL_INSLST->DATA);
             *pnt = (struct ptype *)vbh_addvbvar(*pnt,vex,
             simpvexexprothers( (vbl_y_vsp[(3) - (4)].list).VEX, vex->WIDTH ),get_type(type),VBL_LINNUM);
           }
         }
    break;

  case 363:
#line 5857 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
            struct vbcal  *ptvbcal;
            struct ptype **pnt;
            vexexpr       *VexFunc;

            pnt = (struct ptype**)VBL_INSLST->DATA;

            if ( chktab( hshtab,(vbl_y_vsp[(1) - (2)].name).NAME,VBL_MODNAM,VBL_SYMDFN) != VBL_PRODFN )
            {
              my_vbl_error(119,(vbl_y_vsp[(1) - (2)].name).NAME);
            }

            if ( ! (vbl_y_vsp[(1) - (2)].name).DYNAMIC ) VexFunc = createvexfunc( (vbl_y_vsp[(1) - (2)].name).NAME, 0 );
            else                VexFunc = (vexexpr *)(vbl_y_vsp[(1) - (2)].name).LEFT;

            ptvbcal = vbh_addvbcal( VexFunc, VBL_LINNUM );
            *pnt = addptype( *pnt, VBH_BECAL, ptvbcal );
          }
    break;

  case 364:
#line 5882 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           unsigned long   type;
           long            mode;
           char           buffer[128];
           char          *codedsigname;
           char          *LocalName;
           long           left ,right;
           long           left_bnd ,right_bnd;
           struct ptype **pnt;
           vexexpr       *vex;
           vbl_vexstr    *VexStr;
           vbl_vexstr    *VexStr2;
           chain_list    *ScanChain;
           chain_list    *ScanChain2;
           ptype_list    *AsgList;
           unsigned char  dynamic;

           if ( (vbl_y_vsp[(1) - (4)].name).AGGREG )
           {
             if ( ! (vbl_y_vsp[(3) - (4)].list).AGGREG )
             {
               my_vbl_error(114,NULL);
             }

             ScanChain  = (chain_list *)(vbl_y_vsp[(1) - (4)].name).NAME;
             ScanChain2 = (chain_list *)(vbl_y_vsp[(3) - (4)].list).IDENT;
             AsgList    = (ptype_list *)0;

             while ( ( ScanChain  != (chain_list *)0 ) &&
                     ( ScanChain2 != (chain_list *)0 ) )
             {
               VexStr  = (vbl_vexstr *)ScanChain->DATA;
               VexStr2 = (vbl_vexstr *)ScanChain2->DATA;

               AsgList = vbh_addvbasg( AsgList, VexStr->VEX,
                                       simpvexexprothers( VexStr2->VEX, VexStr->VEX->WIDTH ),
                                       get_type(VexStr->TYPE), VBL_LINNUM );

               autfreeheap( VexStr , sizeof( vbl_vexstr ) );
               autfreeheap( VexStr2, sizeof( vbl_vexstr ) );

               ScanChain  = ScanChain ->NEXT;
               ScanChain2 = ScanChain2->NEXT;
             }

             if ( ( ScanChain  != (chain_list *)0 ) ||
                  ( ScanChain2 != (chain_list *)0 ) )
             {
               my_vbl_error(114,NULL);
             }

             freechain( (chain_list *)(vbl_y_vsp[(1) - (4)].name).NAME );
             freechain( (chain_list *)(vbl_y_vsp[(3) - (4)].list).IDENT );

             pnt = (struct ptype**)(VBL_INSLST->DATA);
             *pnt = (struct ptype *)vbh_addvbagr(*pnt, AsgList, VBL_LINNUM );
           }
           else
           {
             if ( chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,VBL_FUNCNAM,VBL_SYMDFN ) )
             {
               LocalName = VBL_FUNCNAM;
             }
             else
             if ( chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,VBL_MODNAM,VBL_SYMDFN ) )
             {
               LocalName = VBL_MODNAM;
             }
             else
             {
               my_vbl_error(17,(vbl_y_vsp[(1) - (4)].name).NAME);
             }
  
             sprintf (buffer, "%s.cod.%s", LocalName, (vbl_y_vsp[(1) - (4)].name).NAME);
             codedsigname = namealloc( buffer );
  
             type = chktab(hshtab,codedsigname,LocalName,VBL_TYPDFN);
  
             if ( type >= VBH_MAX_TYPE )
             {
               mode  = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_SYMDFN);
               dynamic = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_DYNDFN);
               left  = (vbl_y_vsp[(1) - (4)].name).LEFT;
               right = (vbl_y_vsp[(1) - (4)].name).RIGHT;
             }
             else
             {
               type = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_TYPDFN);
               mode = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_SYMDFN);
               dynamic = chktab(hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_DYNDFN);
  
               left  = (vbl_y_vsp[(1) - (4)].name).LEFT;
               right = (vbl_y_vsp[(1) - (4)].name).RIGHT;
             }
  
             if( mode == VBL_ICNDFN) my_vbl_error(21,(vbl_y_vsp[(1) - (4)].name).NAME);
             if( mode == 0         ) my_vbl_error(17,(vbl_y_vsp[(1) - (4)].name).NAME);
  
             if ( ! (vbl_y_vsp[(1) - (4)].name).DYNAMIC )
             {
               if ( ( (vbl_y_vsp[(1) - (4)].name).LEFT  == -1 ) &&
                    ( (vbl_y_vsp[(1) - (4)].name).RIGHT == -1 ) )
               {
                 vex = createvexatombit( (vbl_y_vsp[(1) - (4)].name).NAME );
               }
               else
               {
                 vex = createvexatomvec( (vbl_y_vsp[(1) - (4)].name).NAME, (vbl_y_vsp[(1) - (4)].name).LEFT, (vbl_y_vsp[(1) - (4)].name).RIGHT );
               }
             }
             else
             {
               left_bnd  = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_WMNDFN);
               right_bnd = chktab (hshtab,(vbl_y_vsp[(1) - (4)].name).NAME,LocalName,VBL_WMXDFN);
  
               vex = vbl_dynamicvexatom( (vbl_y_vsp[(1) - (4)].name).NAME, left_bnd, right_bnd, dynamic );
  
               if ( right == 0 )
               {
                 vex = createvexbinexpr( VEX_INDEX, 1, vex, (vexexpr *)left );
               }
               else
               {
                 if ( ( mode == VBL_FUNDFN ) ||
                      ( mode == VBL_TPEDFN ) ||
                      ( mode == VBL_PRODFN ) )
                 {
                   vex = (vexexpr *)left;
                 }
                 else
                 if ( (vbl_y_vsp[(1) - (4)].name).DYNAMIC == VBL_UPTDFN )
                 {
                   if ( ( ! dynamic                                                  ) ||
                        ( ! isvexequalexpr( (vexexpr *)left_bnd, (vexexpr *)left   ) ) ||
                        ( ! isvexequalexpr( (vexexpr *)right_bnd, (vexexpr *)right ) ) )
                   {
                      vex = createvexternaryexpr( VEX_TO, 1, vex,
                                                  (vexexpr *)left, (vexexpr *)right );
                   }
                 }
                 else
                 if ( (vbl_y_vsp[(1) - (4)].name).DYNAMIC == VBL_DWTDFN )
                 {
                   if ( ( ! dynamic                                                  ) ||
                        ( ! isvexequalexpr( (vexexpr *)left_bnd, (vexexpr *)left   ) ) ||
                        ( ! isvexequalexpr( (vexexpr *)right_bnd, (vexexpr *)right ) ) )
                   {
                     vex = createvexternaryexpr( VEX_DOWNTO, 1, vex,
                                               (vexexpr *)left, (vexexpr *)right );
                   }
                 }
                 else
                 {
                   vex = createvexbinexpr( VEX_INDEX_N, 1, vex, (vexexpr *)left );
                   vex = createvexbinexpr( VEX_INDEX_N, 1, vex, (vexexpr *)right );
                 }
               }
             }
  
             pnt = (struct ptype**)(VBL_INSLST->DATA);
             *pnt = (struct ptype *)vbh_addvbasg(*pnt,vex,
             simpvexexprothers((vbl_y_vsp[(3) - (4)].list).VEX, vex->WIDTH ),get_type(type), VBL_LINNUM );
           }
       }
    break;

  case 365:
#line 6051 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
		(vbl_y_val.list) = (vbl_y_vsp[(1) - (2)].list);
		}
    break;

  case 366:
#line 6058 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 367:
#line 6061 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
                  my_vbl_warning( 0, "after clauses ignored !" );
                }
    break;

  case 368:
#line 6069 "../../../src/vbl/src/vbl_bcomp_y.y"
    { }
    break;

  case 369:
#line 6076 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct ptype **pnt;

           pnt = (struct ptype**)VBL_INSLST->DATA;
           *pnt = vbh_addvbifs( *pnt,(vbl_y_vsp[(2) - (3)].list).VEX, VBL_LINNUM  );
           VBL_INSLST = addchain(VBL_INSLST,&(((struct vbifs*)(*pnt)->DATA)->CNDTRUE));
         }
    break;

  case 370:
#line 6084 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct ptype **pnt;
           struct ptype *ptype;

           pnt = (struct ptype**)VBL_INSLST->DATA;
           ptype = reversetype(*pnt);
           *pnt = ptype;
           VBL_INSLST = delchain (VBL_INSLST, VBL_INSLST);
           pnt = (struct ptype**)VBL_INSLST->DATA;
           VBL_INSLST = addchain(VBL_INSLST,&(((struct vbifs*)(*pnt)->DATA)->CNDFALSE));
         }
    break;

  case 373:
#line 6108 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct ptype **pnt;

           pnt = (struct ptype**)VBL_INSLST->DATA;
           *pnt = vbh_addvbifs(*pnt,(vbl_y_vsp[(3) - (4)].list).VEX, VBL_LINNUM );
           VBL_INSLST = addchain(VBL_INSLST,(void*)&((struct vbifs*)(*pnt)->DATA)->CNDTRUE);
         }
    break;

  case 374:
#line 6116 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct ptype **pnt;
           struct ptype *ptype;

           pnt = (struct ptype**)VBL_INSLST->DATA;
           ptype = reversetype(*pnt);
           *pnt = ptype;
           VBL_INSLST = delchain (VBL_INSLST, VBL_INSLST);
           pnt = (struct ptype**)VBL_INSLST->DATA;
           VBL_INSLST = delchain (VBL_INSLST, VBL_INSLST);
           VBL_INSLST = addchain(VBL_INSLST,&((struct vbifs*)(*pnt)->DATA)->CNDFALSE);
         }
    break;

  case 375:
#line 6132 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
                  VBL_INSLST = delchain (VBL_INSLST, VBL_INSLST);
                vbl_y_errok;
              }
    break;

  case 376:
#line 6138 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
                  struct ptype *ptype;
                  struct ptype **pnt;
                  pnt = (struct ptype**)VBL_INSLST->DATA;
                  ptype = reversetype(*pnt);
                  *pnt = ptype;
                  VBL_INSLST = delchain (VBL_INSLST, VBL_INSLST);
                vbl_y_errok;
              }
    break;

  case 377:
#line 6152 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct ptype **pnt;

           pnt = (struct ptype**)VBL_INSLST->DATA;

           VBL_OTHPNT  = NULL;
           VBL_CASPNT  = NULL;
           VBL_CASSIZE = (vbl_y_vsp[(2) - (2)].list).WIDTH - 1;

           *pnt = vbh_addvbcas(*pnt,(vbl_y_vsp[(2) - (2)].list).VEX,get_type((vbl_y_vsp[(2) - (2)].list).TYPE), VBL_LINNUM );

           VBL_INSLST = addchain( VBL_INSLST,(void*)&(((struct vbcas*)((*pnt)->DATA))->SIZE));
           VBL_INSLST = addchain( VBL_INSLST,(void*)&(((struct vbcas*)(*pnt)->DATA)->CHOICE));
         }
    break;

  case 378:
#line 6172 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           unsigned long size=0;
           unsigned long *size1;
           long indice=0;
           struct choice_chain *ch;
           struct vbcho **pnt;
           struct vbcho *tab;
           struct choice_chain *nm1lst;


           nm1lst = VBL_CASPNT;
           while (nm1lst != NULL)
           {
             size++;
             nm1lst = nm1lst->NEXT;
           }
           if ( VBL_OTHPNT != NULL ) size++;

           pnt = (struct vbcho**)VBL_INSLST->DATA;
           VBL_INSLST = delchain(VBL_INSLST,VBL_INSLST);

           if( size != 0)
             tab  = (struct vbcho*)autallocblock(size*sizeof(struct vbcho));

           while(VBL_CASPNT)
           {
             tab[indice].INSTRUCTION = reversetype(VBL_CASPNT->INSTRUCTION);
             tab[indice].SIZE = VBL_CASPNT->SIZE;
             tab[indice++].VALUES = VBL_CASPNT->VALUES;
             ch = VBL_CASPNT;
             VBL_CASPNT =VBL_CASPNT->NEXT;
             autfreeblock( ch );
             /*free(ch);*/
           }
           if ( VBL_OTHPNT != NULL )
           {
             tab[indice].INSTRUCTION = reversetype(VBL_OTHPNT);
             tab[indice].SIZE = -1;
             tab[indice++].VALUES = addchain( NULL, namealloc("others") );
           }
           (*pnt) = tab;
           size1 = (unsigned long*) VBL_INSLST->DATA;
           *size1 = size;
           VBL_INSLST = delchain(VBL_INSLST,VBL_INSLST);
         }
    break;

  case 380:
#line 6223 "../../../src/vbl/src/vbl_bcomp_y.y"
    { vbl_y_errok; }
    break;

  case 381:
#line 6230 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           VBL_PTYPE  = NULL;
           VBL_INSLST = addchain(VBL_INSLST,(void*)&VBL_PTYPE);
         }
    break;

  case 382:
#line 6235 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           if( VBL_CNDLST == NULL)
             my_vbl_error(85,"case");
           else
           if ( VBL_CNDLST->DATA == NULL)
           {
             VBL_OTHPNT = VBL_PTYPE ;
             VBL_CNDLST = delchain(VBL_CNDLST,VBL_CNDLST);
           }
           else
           {
             struct choice_chain *NewChoice;
             char                *Value;
             long                  Length;

             NewChoice = (struct choice_chain*)autallocblock(sizeof(struct choice_chain));
             NewChoice->VALUES      = (chain_list *)0;
             NewChoice->SIZE        = 0;
             NewChoice->INSTRUCTION = VBL_PTYPE;

             NewChoice->NEXT = VBL_CASPNT;
             VBL_CASPNT      = NewChoice;

             while(VBL_CNDLST)
             {
               Value = (char *)VBL_CNDLST->DATA;
               Length = strlen( Value );

               NewChoice->VALUES = addchain( NewChoice->VALUES, (void *)Value );
               if ( NewChoice->SIZE < Length ) NewChoice->SIZE = Length;

               VBL_CNDLST = delchain(VBL_CNDLST,VBL_CNDLST);
             }
           }
           VBL_INSLST = delchain(VBL_INSLST,VBL_INSLST);
         }
    break;

  case 383:
#line 6275 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 384:
#line 6280 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           VBL_LINLST = addchain (VBL_LINLST, (void *)VBL_LINNUM );

           if ( ! strcmp((vbl_y_vsp[(1) - (1)].name).NAME , "others"))
           {
             VBL_CNDLST = addchain (VBL_CNDLST,NULL);
           }
           else
           {
             VBL_CNDLST = addchain (VBL_CNDLST,(void*)(vbl_y_vsp[(1) - (1)].name).NAME);
           }

           VBL_NUMCHOICE = 1;
         }
    break;

  case 385:
#line 6295 "../../../src/vbl/src/vbl_bcomp_y.y"
    { vbl_y_errok; }
    break;

  case 386:
#line 6300 "../../../src/vbl/src/vbl_bcomp_y.y"
    {}
    break;

  case 388:
#line 6308 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           VBL_NUMCHOICE++;

           if ((!strcmp((vbl_y_vsp[(3) - (3)].name).NAME , "others"))  || (VBL_CNDLST->DATA == NULL))
              my_vbl_error (31,NULL);

           VBL_CNDLST = addchain (VBL_CNDLST ,(void*)(vbl_y_vsp[(3) - (3)].name).NAME);
           VBL_LINLST = addchain (VBL_LINLST ,(void *)VBL_LINNUM );
         }
    break;

  case 389:
#line 6321 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           char Buffer[ 512 ];

           /* hack */
           char  delim = '"';
           char* scan = strchr((vbl_y_vsp[(1) - (1)].text), '\'');
           if (scan) delim = '\'';
           Buffer[ 0 ] = delim;
           vbl_tobin( &Buffer[1],(vbl_y_vsp[(1) - (1)].text),0,VBL_CASSIZE );
           Buffer[ VBL_CASSIZE + 2 ] = delim;
           Buffer[ VBL_CASSIZE + 3 ] = '\0';

           (vbl_y_val.name).NAME  = namealloc( Buffer );
           (vbl_y_val.name).RIGHT = -1;
           (vbl_y_val.name).TYPE  = -1;
           (vbl_y_val.name).LEFT  = -1;
           (vbl_y_val.name).DYNAMIC = 0;
           (vbl_y_val.name).AGGREG  = 0;
         }
    break;

  case 390:
#line 6342 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           (vbl_y_val.name).RIGHT = -1;
           (vbl_y_val.name).TYPE  = -1;
           (vbl_y_val.name).LEFT  = -1;
           (vbl_y_val.name).DYNAMIC = 0;
           (vbl_y_val.name).AGGREG  = 0;
           (vbl_y_val.name).NAME  = namealloc("others");
         }
    break;

  case 391:
#line 6351 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           vexexpr        *VexCst;
           long             left;
           long             right;
           long             in_bound;
           long             out_bound;
           long             left_bnd;
           long             right_bnd;
           long             sig_conf;

           if ( ( (vbl_y_vsp[(1) - (1)].name).NAME[0] == '"' ) || ( (vbl_y_vsp[(1) - (1)].name).NAME[0] == '\'') )
           {
             (vbl_y_val.name).NAME  = (vbl_y_vsp[(1) - (1)].name).NAME;
             (vbl_y_val.name).LEFT  = -1;
             (vbl_y_val.name).RIGHT = -1;
             (vbl_y_val.name).TYPE  = -1;
             (vbl_y_val.name).DYNAMIC = 0;
             (vbl_y_val.name).AGGREG  = 0;
           }
           else
           {
             sig_conf = chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,VBL_MODNAM,VBL_SYMDFN);
             VexCst   = (vexexpr *)chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,VBL_MODNAM,VBL_PNTDFN);

             if (sig_conf == 0)
             {
               my_vbl_error (17,(vbl_y_vsp[(1) - (1)].name).NAME);
             }
             else
             if (sig_conf != VBL_CSTDFN)
             {
               my_vbl_error (76,(vbl_y_vsp[(1) - (1)].name).NAME);
             }

             left_bnd  = chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,VBL_MODNAM,VBL_WMNDFN);
             right_bnd = chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,VBL_MODNAM,VBL_WMXDFN);

             left  = (vbl_y_vsp[(1) - (1)].name).LEFT;
             right = (vbl_y_vsp[(1) - (1)].name).RIGHT;

             if (left_bnd <= right_bnd)
             {
               if (left <= right)
               {
                 in_bound = left - left_bnd;
                 out_bound = right - left_bnd;
                 if ((left < left_bnd) || (right > right_bnd))
                 {
                   my_vbl_error (36,(vbl_y_vsp[(1) - (1)].name).NAME);
                 }
               }
               else
               {
                 in_bound = left - right_bnd;
                 out_bound = right - right_bnd;
                 if ((left > right_bnd) || (right < left_bnd))
                 {
                   my_vbl_error (36,(vbl_y_vsp[(1) - (1)].name).NAME);
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
                   my_vbl_error (36,(vbl_y_vsp[(1) - (1)].name).NAME);
                 }
               }
               else
               {
                 in_bound = right - right_bnd;
                 out_bound = left - right_bnd;
                 if ((left > left_bnd) || (right < right_bnd))
                 {
                   my_vbl_error (36,(vbl_y_vsp[(1) - (1)].name).NAME);
                 }
               }
             }

             (vbl_y_val.name).NAME = GetVexAtomValue( VexCst );
             (vbl_y_val.name).LEFT = -1;
             (vbl_y_val.name).RIGHT = -1;
             (vbl_y_val.name).TYPE = -1;
             (vbl_y_val.name).DYNAMIC = 0;
             (vbl_y_val.name).AGGREG  = 0;
           }
         }
    break;

  case 392:
#line 6446 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 393:
#line 6451 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = NULL;}
    break;

  case 394:
#line 6454 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(2) - (2)].text);}
    break;

  case 395:
#line 6459 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = 'E';}
    break;

  case 396:
#line 6462 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = (vbl_y_vsp[(1) - (2)].valu);}
    break;

  case 397:
#line 6467 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 398:
#line 6472 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = 'E';}
    break;

  case 399:
#line 6474 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = 'W';}
    break;

  case 400:
#line 6479 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 401:
#line 6481 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 402:
#line 6483 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 403:
#line 6485 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 404:
#line 6492 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_AND ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 405:
#line 6496 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_AND ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0);}
    break;

  case 406:
#line 6503 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_OR ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 407:
#line 6507 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_OR ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 408:
#line 6512 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 409:
#line 6516 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_NAND ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 410:
#line 6520 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_NOR ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 411:
#line 6524 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_NXOR ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 412:
#line 6528 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_IFT,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 413:
#line 6535 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_XOR ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 414:
#line 6539 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex (VEX_XOR ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 415:
#line 6544 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 416:
#line 6548 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex ((vbl_y_vsp[(2) - (3)].valu) ,(vbl_y_vsp[(1) - (3)].list) ,(vbl_y_vsp[(3) - (3)].list) ,-1,-1,0); }
    break;

  case 417:
#line 6553 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 418:
#line 6558 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 419:
#line 6561 "../../../src/vbl/src/vbl_bcomp_y.y"
    { if ( (vbl_y_vsp[(1) - (2)].valu) == VEX_NEG )
                  {
                    (vbl_y_val.list) = vbl_crtvex( VEX_NEG,(vbl_y_vsp[(2) - (2)].list),VBL_EMPSTR,-1,-1,0);
                  }
                  else
                  {
                    (vbl_y_val.list) = (vbl_y_vsp[(2) - (2)].list);
                  }
                }
    break;

  case 420:
#line 6573 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex((vbl_y_vsp[(2) - (3)].valu),(vbl_y_vsp[(1) - (3)].list),(vbl_y_vsp[(3) - (3)].list),-1,-1,0); }
    break;

  case 421:
#line 6578 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_ADD; }
    break;

  case 422:
#line 6580 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_SUB; }
    break;

  case 423:
#line 6582 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_CONCAT; }
    break;

  case 424:
#line 6586 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = 0; }
    break;

  case 425:
#line 6588 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_NEG; }
    break;

  case 426:
#line 6593 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_MUL; }
    break;

  case 427:
#line 6595 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_DIV; }
    break;

  case 428:
#line 6597 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_MOD; }
    break;

  case 429:
#line 6599 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_REM; }
    break;

  case 430:
#line 6604 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 431:
#line 6608 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex( (vbl_y_vsp[(2) - (3)].valu), (vbl_y_vsp[(1) - (3)].list), (vbl_y_vsp[(3) - (3)].list),-1,-1,0); }
    break;

  case 432:
#line 6613 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 433:
#line 6617 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex( VEX_EXP,(vbl_y_vsp[(1) - (3)].list),(vbl_y_vsp[(3) - (3)].list),-1,-1,0); }
    break;

  case 434:
#line 6620 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
                 (vbl_y_val.list) = vbl_crtvex( VEX_ABS,(vbl_y_vsp[(2) - (2)].list),VBL_EMPSTR,-1,-1,0); 
              }
    break;

  case 435:
#line 6625 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = vbl_crtvex( VEX_NOT,(vbl_y_vsp[(2) - (2)].list),VBL_EMPSTR,-1,-1,0); }
    break;

  case 436:
#line 6630 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           struct vbl_expr expr1;

           expr1.IDENT = (vbl_y_vsp[(1) - (1)].text);
           expr1.TYPE  = -1;
           expr1.VEX   = (vexexpr *)0;

           (vbl_y_val.list) = vbl_crtvex( NOPS,expr1,VBL_EMPSTR,-1,-1,0);
        }
    break;

  case 437:
#line 6640 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbl_vexstr *VexStr;
            chain_list *ScanChain;

            ScanChain = (vbl_y_vsp[(1) - (1)].pcha);

            if ( ScanChain == (chain_list *)0 )
            {
              my_vbl_error(114,NULL);
            }

            if ( ScanChain->NEXT == (chain_list *)0 )
            {
              VexStr = (vbl_vexstr *)ScanChain->DATA;

              (vbl_y_val.list) = *VexStr;

              autfreeheap( VexStr, sizeof( vbl_vexstr ) );
              freechain( ScanChain );
            }
            else
            {
              (vbl_y_val.list).IDENT  = (char *)(vbl_y_vsp[(1) - (1)].pcha);
              (vbl_y_val.list).AGGREG = 1;
            }
        }
    break;

  case 438:
#line 6667 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
          struct vbl_expr expr1;
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
          unsigned char   dynamic;

          flag = (vbl_y_vsp[(1) - (1)].name).FLAG;

          if ( ( flag != 0          ) &&
               ( flag != VBL_EVENT  ) &&
               ( flag != VBL_STABLE ) )
          {
            if ( ( flag != VBL_RANGE     ) &&
                 ( flag != VBL_REV_RANGE ) )
            {
              if ( ! (vbl_y_vsp[(1) - (1)].name).DYNAMIC )
              {
                sprintf( Buffer, "%ld", (vbl_y_vsp[(1) - (1)].name).LEFT );

                expr1.IDENT = Buffer;
                expr1.VEX   = (vexexpr *)0;
                expr1.TYPE  = -1;

                (vbl_y_val.list) = vbl_crtvex( NOPS, expr1, VBL_EMPSTR, -1, -1,0);
              }
              else
              {
                (vbl_y_val.list).IDENT = (char *)0;
                (vbl_y_val.list).VEX   = (vexexpr *)(vbl_y_vsp[(1) - (1)].name).LEFT;
                (vbl_y_val.list).TYPE  = -1;
                (vbl_y_val.list).SIGNED = 0;
              }
            }
            else
            {
              autexit( 1 );
            }
          }
          else
          if ( ( (vbl_y_vsp[(1) - (1)].name).NAME[0] == '"' ) ||
               ( (vbl_y_vsp[(1) - (1)].name).NAME[0] == '\'') )
          {
            expr1.IDENT = (vbl_y_vsp[(1) - (1)].name).NAME;
            expr1.VEX   = (vexexpr *)0;
            expr1.TYPE  = -1;

            (vbl_y_val.list) = vbl_crtvex( NOPS ,expr1, VBL_EMPSTR, -1, -1,0); /* as for literal */
          }
          else
          {
            if  ( ( mode = chktab(hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,VBL_FUNCNAM,VBL_SYMDFN ) ) != 0 )
            {
              LocalName = VBL_FUNCNAM;
            }
            else
            if  ( ( mode = chktab(hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,VBL_PROCNAM,VBL_SYMDFN ) ) != 0 )
            {
              LocalName = VBL_PROCNAM;
            }
            else
            if ( ( VBL_COMPNAM != (char *)0 )  &&
                 ( ( mode = chktab(hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,VBL_COMPNAM,VBL_SYMDFN ) ) != 0 ) )
            {
              LocalName = VBL_COMPNAM;
            }
            else
            {
              LocalName = VBL_MODNAM;
              mode = chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,LocalName,VBL_SYMDFN);
            }

            /*\  Skipped for out argument parameter
            if ( mode == VBL_OCNDFN )
            {
              my_vbl_error (26,$1.NAME);
            }
            \*/

            /* LUDO ICI
            if( mode == 0 || mode == VBL_TPEDFN || mode == VBL_PRODFN )
            */
            if( mode == 0 || mode == VBL_PRODFN )
            {
              my_vbl_error (17,(vbl_y_vsp[(1) - (1)].name).NAME);
            }

            left_bnd  = chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,LocalName,VBL_WMNDFN);
            right_bnd = chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,LocalName,VBL_WMXDFN);
            dynamic   = chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,LocalName,VBL_DYNDFN);
              
            if ( ( ! (vbl_y_vsp[(1) - (1)].name).DYNAMIC ) &&
                 ( ! dynamic    ) )
            {
              left  = (vbl_y_vsp[(1) - (1)].name).LEFT;
              right = (vbl_y_vsp[(1) - (1)].name).RIGHT;

              if ( ! dynamic )
              {
                if ( VBL_COMPNAM == (char *)0 )
                {
                  if ( left_bnd <= right_bnd )
                  {
                    if (left <= right)
                    {
                      in_bound  = left  - left_bnd;
                      out_bound = right - left_bnd;
                      if ((left < left_bnd) || (right > right_bnd))
                      {
                        my_vbl_error (36,(vbl_y_vsp[(1) - (1)].name).NAME);
                      }
                    }
                    else
                    {
                      in_bound  = right - left_bnd;
                      out_bound = left  - left_bnd;
                      if ((left > right_bnd) || (right < left_bnd))
                      {
                        my_vbl_error (36,(vbl_y_vsp[(1) - (1)].name).NAME);
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
                        my_vbl_error (36,(vbl_y_vsp[(1) - (1)].name).NAME);
                      }
                    }
                    else
                    {
                      in_bound  = right - right_bnd;
                      out_bound = left  - right_bnd;
                      if ((left > left_bnd) || (right < right_bnd))
                      {
                        my_vbl_error (36,(vbl_y_vsp[(1) - (1)].name).NAME);
                      }
                    }
                  }
                }
              }
            }
            else
            {
              left  = (vbl_y_vsp[(1) - (1)].name).LEFT;
              right = (vbl_y_vsp[(1) - (1)].name).RIGHT;
            }

/*\
            if (mode == VBL_CSTDFN)
            {
              expr1.VEX   = (vexexpr *)chktab(hshtab,$1.NAME,LocalName,VBL_PNTDFN);
              expr1.IDENT = (char *)expr1.VEX->VALUE;
              expr1.TYPE  = chktab(hshtab,$1.NAME,LocalName,VBL_TYPDFN);
              expr1.SIGNED = chktab (hshtab,$1.NAME,LocalName,VBL_SUNDFN);

              $$ = vbl_crtvex (NOPS,expr1,VBL_EMPSTR,in_bound,out_bound,0);
            }
            else
\*/
            {
              long  type;

              expr1.IDENT = (vbl_y_vsp[(1) - (1)].name).NAME;
              type = chktab(hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,LocalName,VBL_TYPDFN);
              expr1.TYPE = type;
              expr1.SIGNED = chktab (hshtab,(vbl_y_vsp[(1) - (1)].name).NAME,LocalName,VBL_SUNDFN);

              if ( (vbl_y_vsp[(1) - (1)].name).DYNAMIC )
              {
                if ( ( mode == VBL_FUNDFN ) ||
                     ( mode == VBL_TPEDFN ) ||
                     ( mode == VBL_PRODFN ) )
                {
                  expr1.VEX = (vexexpr *)left;
                  expr1 = vbl_crtvex(SUBVAR,expr1,VBL_EMPSTR,expr1.VEX->LEFT,expr1.VEX->RIGHT,0);
                }
                else
                {
                  expr1 = vbl_crtvex (NOPI,expr1,VBL_EMPSTR,left_bnd,right_bnd,dynamic);

                  if ( (vbl_y_vsp[(1) - (1)].name).DYNAMIC == VBL_UPTDFN ) 
                  {
                    if ( ( ! dynamic                                                  ) ||
                         ( ! isvexequalexpr( (vexexpr *)left_bnd, (vexexpr *)left   ) ) ||
                         ( ! isvexequalexpr( (vexexpr *)right_bnd, (vexexpr *)right ) ) )
                    {
                      expr1 = vbl_crtvex( VEX_TO, expr1,VBL_EMPSTR,left,right,0);
                    }
                  }
                  else
                  if ( (vbl_y_vsp[(1) - (1)].name).DYNAMIC == VBL_DWTDFN )
                  {
                    if ( ( ! dynamic                                                  ) ||
                         ( ! isvexequalexpr( (vexexpr *)left_bnd, (vexexpr *)left   ) ) ||
                         ( ! isvexequalexpr( (vexexpr *)right_bnd, (vexexpr *)right ) ) )
                    {
                      expr1 = vbl_crtvex( VEX_DOWNTO, expr1,VBL_EMPSTR,left,right,0);
                    }
                  }
                  else
                  {
                    expr1.VEX = 
                      createvexbinexpr( VEX_INDEX_N, 1, expr1.VEX, (vexexpr *)left );
                    expr1.VEX = 
                      createvexbinexpr( VEX_INDEX_N, 1, expr1.VEX, (vexexpr *)right );
                  }
                }
              }
              else
              {
                expr1 = vbl_crtvex (NOPI,expr1,VBL_EMPSTR,left,right,0);
              }

              if( flag == VBL_EVENT )
              {
                (vbl_y_val.list) = vbl_crtvex (VEX_EVENT,expr1,VBL_EMPSTR,left,right,0);
              }
              else
              if( flag == VBL_STABLE )
              {
                expr1 = vbl_crtvex(VEX_EVENT,expr1,VBL_EMPSTR,left,right,0);
                (vbl_y_val.list)    = vbl_crtvex (VEX_NOT,expr1,VBL_EMPSTR,-1,-1,0);
              }
              else
              {
                (vbl_y_val.list) = expr1;
              }
            }
          }
        }
    break;

  case 439:
#line 6910 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
          struct vbl_expr expr1;

          expr1.IDENT  = (vbl_y_vsp[(1) - (1)].name).NAME;
          expr1.TYPE   = (vbl_y_vsp[(1) - (1)].name).TYPE;
          expr1.SIGNED = (vbl_y_vsp[(1) - (1)].name).SIGNED;
          expr1.VEX    = (vexexpr *)(vbl_y_vsp[(1) - (1)].name).LEFT;

          expr1 = vbl_crtvex(SUBVAR,expr1,VBL_EMPSTR,expr1.VEX->LEFT,expr1.VEX->RIGHT,0);

          (vbl_y_val.list) = expr1;
        }
    break;

  case 440:
#line 6928 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char       *LocalName;
            vbl_vexstr *VexStr;
            chain_list *ScanChain;
            vexexpr    *VexExpr;
            long        Def;

            ScanChain = (vbl_y_vsp[(3) - (3)].pcha);

            if ( ( ScanChain       == (chain_list *)0 ) ||
                 ( ScanChain->NEXT != (chain_list *)0 ) )
            {
              my_vbl_error(122,NULL);
            }

            if  ( ( Def = chktab(hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,VBL_FUNCNAM,VBL_SYMDFN ) ) != 0 )
            {
              LocalName = VBL_FUNCNAM;
            }
            else
            if  ( ( Def = chktab(hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,VBL_PROCNAM,VBL_SYMDFN ) ) != 0 )
            {
              LocalName = VBL_PROCNAM;
            }
            else
            {
              LocalName = VBL_MODNAM;
              Def = chktab (hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_SYMDFN);
            }

            if ( Def == VBL_TPEDFN )
            {
              VexStr = (vbl_vexstr *)ScanChain->DATA;

              VexExpr = createvexfunc( (vbl_y_vsp[(1) - (3)].name).NAME, VexStr->VEX->WIDTH );
              addvexhexpr( VexExpr, VexStr->VEX );

              autfreeheap( VexStr, sizeof( vbl_vexstr ) );

              (vbl_y_val.name).NAME    = (vbl_y_vsp[(1) - (3)].name).NAME;
              (vbl_y_val.name).TYPE    = chktab (hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_TYPDFN);
              (vbl_y_val.name).SIGNED  = chktab (hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_SUNDFN);
              (vbl_y_val.name).FLAG    = 0;
              (vbl_y_val.name).LEFT    = (long)VexExpr;
              (vbl_y_val.name).RIGHT   = 0;
              (vbl_y_val.name).DYNAMIC = 1;
              (vbl_y_val.name).AGGREG  = 0;

              freechain( (vbl_y_vsp[(3) - (3)].pcha) );
            }
            else
            {
              my_vbl_error(122, (vbl_y_vsp[(1) - (3)].name).NAME);
            }
          }
    break;

  case 441:
#line 6987 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_EQ; }
    break;

  case 442:
#line 6989 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_NE; }
    break;

  case 443:
#line 6991 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_GE; }
    break;

  case 444:
#line 6993 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_GT; }
    break;

  case 445:
#line 6995 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_LE; }
    break;

  case 446:
#line 6997 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VEX_LT; }
    break;

  case 447:
#line 7002 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 448:
#line 7004 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
                (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 449:
#line 7007 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 450:
#line 7009 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 451:
#line 7011 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = namealloc( "'1'" ); }
    break;

  case 452:
#line 7013 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = namealloc( "'0'" ); }
    break;

  case 453:
#line 7021 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ( (vbl_y_vsp[(3) - (4)].pcha) != (chain_list *)0 )
            {
              (vbl_y_vsp[(2) - (4)].pcha)->NEXT = reverse( (vbl_y_vsp[(3) - (4)].pcha) );
            }

            (vbl_y_val.pcha) = (vbl_y_vsp[(2) - (4)].pcha);
          }
    break;

  case 454:
#line 7033 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
            (vbl_y_val.pcha) = (chain_list *)0;
          }
    break;

  case 455:
#line 7039 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            if ( (vbl_y_vsp[(1) - (3)].pcha) != (chain_list *)0 )
            {
              (vbl_y_vsp[(3) - (3)].pcha)->NEXT = (vbl_y_vsp[(1) - (3)].pcha);
            }

            (vbl_y_val.pcha) = (vbl_y_vsp[(3) - (3)].pcha);
          }
    break;

  case 456:
#line 7051 "../../../src/vbl/src/vbl_bcomp_y.y"
    { 
            vbl_vexstr *VexStr;

            VexStr  = (vbl_vexstr *)autallocheap( sizeof( vbl_vexstr ) );
            *VexStr = (vbl_y_vsp[(1) - (1)].list);

            (vbl_y_val.pcha) = addchain( (chain_list *)0, VexStr );
          }
    break;

  case 457:
#line 7062 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            vbl_vexstr *VexStr;

            VexStr  = (vbl_vexstr *)autallocheap( sizeof( vbl_vexstr ) );
            *VexStr = vbl_crtvex( VEX_OTHERS, (vbl_y_vsp[(3) - (3)].list),VBL_EMPSTR,-1,-1,0);

            (vbl_y_val.pcha) = addchain( (chain_list *)0, VexStr );
          }
    break;

  case 458:
#line 7074 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           authelem *valbitstr;
           char     *codedsigname;
           char     *LocalName;
           char      buffer[128];

           if ( chktab(hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_FUNCNAM,VBL_SYMDFN ) )
           {
             LocalName = VBL_FUNCNAM;
           }
           else
           if ( chktab(hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_PROCNAM,VBL_SYMDFN ) )
           {
             LocalName = VBL_PROCNAM;
           }
           else
           if ( ( VBL_COMPNAM != (char *)0 ) &&
                ( chktab(hshtab,(vbl_y_vsp[(1) - (1)].text),VBL_COMPNAM,VBL_SYMDFN ) ) )
           {
             LocalName = VBL_COMPNAM;
           }
           else
           {
             LocalName = VBL_MODNAM;
           }

           (vbl_y_val.name).NAME = (vbl_y_vsp[(1) - (1)].text);
           (vbl_y_val.name).FLAG = 0;

           sprintf ( buffer, "%s.cod.%s", LocalName, (vbl_y_vsp[(1) - (1)].text));
           codedsigname = namealloc( buffer );
           (vbl_y_val.name).TYPE = chktab (hshtab,codedsigname,LocalName,VBL_TYPDFN);

           if ( (vbl_y_val.name).TYPE >= VBH_MAX_TYPE )
           {
             if ((valbitstr = searchauthelem(VBL_ENUMVAL, codedsigname )) != NULL)
             {
               (vbl_y_val.name).NAME   = namealloc((char *)valbitstr->VALUE);
               (vbl_y_val.name).TYPE   = VBH_TYPE_BIT_VECTOR ; /* BIT_VECTOR intentionnel */
               (vbl_y_val.name).LEFT   = -1;
               (vbl_y_val.name).RIGHT  = -1;
               (vbl_y_val.name).DYNAMIC = 0;
               (vbl_y_val.name).AGGREG  = 0;
               (vbl_y_val.name).SIGNED  = 0;
             }
             else
             {
               (vbl_y_val.name).TYPE   = VBH_TYPE_BIT_VECTOR ; /* BIT_VECTOR intentionnel */
               (vbl_y_val.name).LEFT   = chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),LocalName,VBL_WMNDFN);
               (vbl_y_val.name).RIGHT  = chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),LocalName,VBL_WMXDFN);
               (vbl_y_val.name).DYNAMIC = chktab(hshtab,(vbl_y_vsp[(1) - (1)].text),LocalName,VBL_DYNDFN);
               (vbl_y_val.name).AGGREG  = 0;
               (vbl_y_val.name).SIGNED = 0;
             }
           }
           else
           {
             (vbl_y_val.name).TYPE   = chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),LocalName,VBL_TYPDFN);
             (vbl_y_val.name).LEFT   = chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),LocalName,VBL_WMNDFN);
             (vbl_y_val.name).RIGHT  = chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),LocalName,VBL_WMXDFN);
             (vbl_y_val.name).SIGNED = chktab (hshtab,(vbl_y_vsp[(1) - (1)].text),LocalName,VBL_SUNDFN);
             (vbl_y_val.name).DYNAMIC = chktab(hshtab,(vbl_y_vsp[(1) - (1)].text),LocalName,VBL_DYNDFN);
             (vbl_y_val.name).AGGREG  = 0;

           }
         }
    break;

  case 459:
#line 7141 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name); }
    break;

  case 460:
#line 7143 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name); }
    break;

  case 461:
#line 7145 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name); }
    break;

  case 462:
#line 7151 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char       *LocalName;
            vbl_vexstr *VexStr;
            vbfun_list *VbFunc;
            chain_list *ScanChain;
            vexexpr    *VexExpr;
            vexexpr    *VexRet;
            long        Index;
            long         Error;
            long        Def;

            ScanChain = (vbl_y_vsp[(2) - (2)].pcha);

            if ( ScanChain == (chain_list *)0 )
            {
              my_vbl_error(114,NULL);
            }

            if  ( ( Def = chktab(hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_FUNCNAM,VBL_SYMDFN ) ) != 0 )
            {
              LocalName = VBL_FUNCNAM;
            }
            else
            if  ( ( Def = chktab(hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_PROCNAM,VBL_SYMDFN ) ) != 0 )
            {
              LocalName = VBL_PROCNAM;
            }
            else
            if ( ( VBL_COMPNAM != (char *)0 ) &&
                 ( ( Def = chktab(hshtab,(vbl_y_vsp[(1) - (2)].text),VBL_COMPNAM,VBL_SYMDFN ) ) != 0 ) )
            {
              LocalName = VBL_COMPNAM;
            }
            else
            {
              LocalName = VBL_MODNAM;
              Def = chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),LocalName,VBL_SYMDFN);
            }

            if ( ( Def == VBL_FUNDFN ) ||
                 ( Def == VBL_TPEDFN ) ||
                 ( Def == VBL_PRODFN ) )
            {
              if ( Def != VBL_TPEDFN )
              {
                VexExpr = createvexfunc( (vbl_y_vsp[(1) - (2)].text), 0 );
              }

              if ( Def == VBL_FUNDFN )
              {
                VbFunc = (vbfun_list *)chktab( hshtab,(vbl_y_vsp[(1) - (2)].text),LocalName,VBL_PNTDFN);

                if ( VbFunc != (vbfun_list *)0 )
                {
                  VexRet = VbFunc->RETURN->TARGET;

                  VexExpr->LEFT  = VexRet->LEFT;
                  VexExpr->RIGHT = VexRet->RIGHT;
                  VexExpr->WIDTH = VexRet->WIDTH;

                  if ( ! IsVexNodeVarWidth( VexRet ) )
                  {
                    ClearVexNodeVarWidth( VexExpr );
                  }
                }
              }

              if ( Def == VBL_TPEDFN )
              {
                if ( ScanChain->NEXT != (chain_list *)0 )
                {
                  my_vbl_error(114,NULL);
                }

                VexStr = (vbl_vexstr *)ScanChain->DATA;

                VexExpr = createvexfunc( (vbl_y_vsp[(1) - (2)].text), VexStr->VEX->WIDTH );
                addvexhexpr( VexExpr, VexStr->VEX );

                autfreeheap( VexStr, sizeof( vbl_vexstr ) );
              }
              else
              {
                while ( ScanChain != (chain_list *)0 )
                {
                  VexStr = (vbl_vexstr *)ScanChain->DATA;
                  addvexqexpr( VexExpr, VexStr->VEX );
  
                  autfreeheap( VexStr, sizeof( vbl_vexstr ) );
                  ScanChain = ScanChain->NEXT;
                }
              }
  
              (vbl_y_val.name).NAME    = (vbl_y_vsp[(1) - (2)].text);
              (vbl_y_val.name).TYPE    = chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),LocalName,VBL_TYPDFN);
              (vbl_y_val.name).SIGNED  = chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),LocalName,VBL_SUNDFN);
              (vbl_y_val.name).FLAG    = 0;
              (vbl_y_val.name).LEFT    = (long)VexExpr;
              (vbl_y_val.name).RIGHT   = -1;
              (vbl_y_val.name).DYNAMIC = 1;
              (vbl_y_val.name).AGGREG  = 0;

              freechain( (vbl_y_vsp[(2) - (2)].pcha) );
            }
            else
            if ( ScanChain->NEXT != (chain_list *)0 )
            {
              if ( ( ! Def                                    ) || 
                   ( ScanChain->NEXT->NEXT != (chain_list *)0 ) )
              {
                my_vbl_error(118,(vbl_y_vsp[(1) - (2)].text));
              }

              /* ICI */

              (vbl_y_val.name).NAME   = (vbl_y_vsp[(1) - (2)].text);
              (vbl_y_val.name).TYPE   = chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),LocalName,VBL_TYPDFN);
              (vbl_y_val.name).SIGNED = chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),LocalName,VBL_SUNDFN);
              (vbl_y_val.name).FLAG   = 0;

              (vbl_y_val.name).DYNAMIC = VBL_IDXDFN;
              (vbl_y_val.name).AGGREG  = 0;

              VexStr  = (vbl_vexstr *)ScanChain->DATA;
              (vbl_y_val.name).LEFT = (long)VexStr->VEX;
              autfreeheap( VexStr, sizeof( vbl_vexstr ) );

              ScanChain = ScanChain->NEXT;
              VexStr   = (vbl_vexstr *)ScanChain->DATA;
              (vbl_y_val.name).RIGHT = (long)VexStr->VEX;
              autfreeheap( VexStr, sizeof( vbl_vexstr ) );

              freechain( (vbl_y_vsp[(2) - (2)].pcha) );
            }
            else
            {
              VexStr = (vbl_vexstr *)ScanChain->DATA;
              Error  = vbl_vextonum( VexStr->VEX, &Index );

              (vbl_y_val.name).NAME   = (vbl_y_vsp[(1) - (2)].text);
              (vbl_y_val.name).TYPE   = chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),LocalName,VBL_TYPDFN);
              (vbl_y_val.name).SIGNED = chktab (hshtab,(vbl_y_vsp[(1) - (2)].text),LocalName,VBL_SUNDFN);
              (vbl_y_val.name).FLAG   = 0;
              (vbl_y_val.name).AGGREG  = 0;

              if ( Error )
              {
                (vbl_y_val.name).LEFT    = (long)VexStr->VEX;
                (vbl_y_val.name).RIGHT   = 0;
                (vbl_y_val.name).DYNAMIC = VBL_UPTDFN;
              }
              else
              {
                (vbl_y_val.name).LEFT   = Index;
                (vbl_y_val.name).RIGHT  = Index;
                (vbl_y_val.name).DYNAMIC = 0;
              }

              autfreeheap( VexStr, sizeof( vbl_vexstr ) );
              freechain( ScanChain );
            }
          }
    break;

  case 463:
#line 7322 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
           char *LocalName;
           long  Left;
           long  Right;
           long   ErrorL;
           long   ErrorR;

           if ( chktab(hshtab,(vbl_y_vsp[(1) - (6)].text),VBL_FUNCNAM,VBL_SYMDFN ) )
           {
             LocalName = VBL_FUNCNAM;
           }
           else
           if ( chktab(hshtab,(vbl_y_vsp[(1) - (6)].text),VBL_PROCNAM,VBL_SYMDFN ) )
           {
             LocalName = VBL_PROCNAM;
           }
           else
           if ( ( VBL_COMPNAM != (char *)0 ) &&
                ( chktab(hshtab,(vbl_y_vsp[(1) - (6)].text),VBL_COMPNAM,VBL_SYMDFN ) ) )
           {
             LocalName = VBL_COMPNAM;
           }
           else
           {
             LocalName = VBL_MODNAM;
           }

           ErrorL = vbl_vextonum( (vbl_y_vsp[(3) - (6)].list).VEX, &Left  );
           ErrorR = vbl_vextonum( (vbl_y_vsp[(5) - (6)].list).VEX, &Right );

           (vbl_y_val.name).NAME   = (vbl_y_vsp[(1) - (6)].text);
           (vbl_y_val.name).TYPE   = chktab (hshtab,(vbl_y_vsp[(1) - (6)].text),LocalName,VBL_TYPDFN);
           (vbl_y_val.name).SIGNED = chktab (hshtab,(vbl_y_vsp[(1) - (6)].text),LocalName,VBL_SUNDFN);
           (vbl_y_val.name).FLAG   = 0;
           (vbl_y_val.name).AGGREG = 0;

           if ( ( ! ErrorL ) && ( ! ErrorR ) )
           {
             if (((Left > Right) && ((vbl_y_vsp[(4) - (6)].valu) == VBL_UPTDFN)) ||
                  ((Left < Right) && ((vbl_y_vsp[(4) - (6)].valu) == VBL_DWTDFN)))
               my_vbl_error (32,(vbl_y_vsp[(1) - (6)].text));

             (vbl_y_val.name).LEFT   = Left;
             (vbl_y_val.name).RIGHT  = Right;
             (vbl_y_val.name).DYNAMIC = 0;
           }
           else
           {
             (vbl_y_val.name).LEFT    = (long)(vbl_y_vsp[(3) - (6)].list).VEX;
             (vbl_y_val.name).RIGHT   = (long)(vbl_y_vsp[(5) - (6)].list).VEX;
             (vbl_y_val.name).DYNAMIC = (vbl_y_vsp[(4) - (6)].valu);
           }
         }
    break;

  case 464:
#line 7381 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            char *LocalName;
            long   type;
            long   flag;
            long   mode;
            long  AttrLeft;
            long  AttrRight;
            long  AttrLow;
            long  AttrHigh;
            unsigned char Dynamic;

            if  ( ( mode = chktab(hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,VBL_FUNCNAM,VBL_SYMDFN ) ) != 0 )
            {
              LocalName = VBL_FUNCNAM;
            }
            else
            if  ( ( mode = chktab(hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,VBL_PROCNAM,VBL_SYMDFN ) ) != 0 )
            {
              LocalName = VBL_PROCNAM;
            }
            else
            {
              LocalName = VBL_MODNAM;
              mode = chktab (hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_SYMDFN);
            }

            type = chktab (hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_TYPDFN);
            flag = (vbl_y_vsp[(3) - (3)].valu);

            Dynamic = chktab(hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_DYNDFN);

            (vbl_y_val.name).NAME   = (vbl_y_vsp[(1) - (3)].name).NAME;
            (vbl_y_val.name).TYPE   = type;
            (vbl_y_val.name).LEFT   = -1;
            (vbl_y_val.name).RIGHT  = -1;
            (vbl_y_val.name).SIGNED = chktab (hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_SUNDFN);
            (vbl_y_val.name).FLAG   = (vbl_y_vsp[(3) - (3)].valu);
            (vbl_y_val.name).DYNAMIC = Dynamic;

            if ( ( flag == VBL_STABLE ) ||
                 ( flag == VBL_EVENT  ) )
            {
              if ( LocalName != VBL_MODNAM )
                my_vbl_error (79,(vbl_y_vsp[(1) - (3)].name).NAME);
            }
            else
            {
              AttrLeft  = chktab( hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_ATLDFN);
              AttrRight = chktab( hshtab,(vbl_y_vsp[(1) - (3)].name).NAME,LocalName,VBL_ATRDFN);

              if ( ! Dynamic )
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
              else
              {
                if ( Dynamic == VBL_UPTDFN )
                {
                  AttrLow  = AttrLeft;
                  AttrHigh = AttrRight;
                }
                else
                {
                  AttrHigh = AttrLeft;
                  AttrLow  = AttrRight;
                }
              }

              switch ( flag )
              {
                case VBL_LEFT   : (vbl_y_val.name).LEFT = AttrLeft;
                break;

                case VBL_RIGHT  : (vbl_y_val.name).LEFT = AttrRight;
                break;

                case VBL_LOW    : (vbl_y_val.name).LEFT = AttrLow;
                break;

                case VBL_HIGH   : (vbl_y_val.name).LEFT = AttrHigh;
                break;

                case VBL_LENGTH : (vbl_y_val.name).LEFT = 1 + (AttrHigh - AttrLow);
                break;

                case VBL_RANGE  : (vbl_y_val.name).LEFT  = AttrLeft;
                                  (vbl_y_val.name).RIGHT = AttrRight;
                break;

                case VBL_REV_RANGE : (vbl_y_val.name).LEFT  = AttrRight;
                                     (vbl_y_val.name).RIGHT = AttrLeft;
                break;
              }
            }
          }
    break;

  case 465:
#line 7488 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_STABLE; }
    break;

  case 466:
#line 7489 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_EVENT; }
    break;

  case 467:
#line 7490 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_LEFT; }
    break;

  case 468:
#line 7491 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_RIGHT; }
    break;

  case 469:
#line 7492 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_LOW; }
    break;

  case 470:
#line 7493 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_HIGH; }
    break;

  case 471:
#line 7494 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_LENGTH; }
    break;

  case 472:
#line 7495 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_RANGE; }
    break;

  case 473:
#line 7496 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.valu) = VBL_REV_RANGE; }
    break;

  case 474:
#line 7501 "../../../src/vbl/src/vbl_bcomp_y.y"
    { VBL_NM1LST = addchain (VBL_NM1LST,(vbl_y_vsp[(1) - (1)].text)); }
    break;

  case 477:
#line 7510 "../../../src/vbl/src/vbl_bcomp_y.y"
    { VBL_NM1LST = addchain (VBL_NM1LST,(vbl_y_vsp[(3) - (3)].text)); }
    break;

  case 478:
#line 7515 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = NULL; }
    break;

  case 479:
#line 7517 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 480:
#line 7522 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list).VEX = (vexexpr *)0; }
    break;

  case 481:
#line 7524 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(1) - (1)].list); }
    break;

  case 482:
#line 7531 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.list) = (vbl_y_vsp[(2) - (3)].list); }
    break;

  case 483:
#line 7536 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.valu) = VBL_UNGDFN;
          }
    break;

  case 484:
#line 7540 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.valu) = VBL_GRDDFN;

            if ( VBL_GRDLST == (chain_list *)0 )
              my_vbl_error(41,0 );
          }
    break;

  case 485:
#line 7550 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = NULL; }
    break;

  case 486:
#line 7552 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 487:
#line 7557 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 488:
#line 7562 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.name) = (vbl_y_vsp[(1) - (1)].name); }
    break;

  case 489:
#line 7564 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
            (vbl_y_val.name).NAME    = (char *)(vbl_y_vsp[(1) - (1)].pcha);
            (vbl_y_val.name).LEFT    = 0;
            (vbl_y_val.name).RIGHT   = 0;
            (vbl_y_val.name).FLAG    = 0;
            (vbl_y_val.name).TYPE    = 0;
            (vbl_y_val.name).DYNAMIC = 0;
            (vbl_y_val.name).SIGNED  = 0;
            (vbl_y_val.name).AGGREG  = 1;
          }
    break;

  case 490:
#line 7579 "../../../src/vbl/src/vbl_bcomp_y.y"
    {
                (vbl_y_val.text) = (vbl_y_vsp[(1) - (2)].text);
                }
    break;

  case 491:
#line 7586 "../../../src/vbl/src/vbl_bcomp_y.y"
    { (vbl_y_val.text) = (vbl_y_vsp[(1) - (1)].text); }
    break;

  case 492:
#line 7591 "../../../src/vbl/src/vbl_bcomp_y.y"
    { vbl_y_errok; }
    break;

  case 493:
#line 7596 "../../../src/vbl/src/vbl_bcomp_y.y"
    { vbl_y_errok; }
    break;

  case 494:
#line 7601 "../../../src/vbl/src/vbl_bcomp_y.y"
    { vbl_y_errok; }
    break;


/* Line 1267 of yacc.c.  */
#line 9743 "y.tab.c"
      default: break;
    }
  VBL_Y__SYMBOL_PRINT ("-> $$ =", vbl_y_r1[vbl_y_n], &vbl_y_val, &vbl_y_loc);

  VBL_Y_POPSTACK (vbl_y_len);
  vbl_y_len = 0;
  VBL_Y__STACK_PRINT (vbl_y_ss, vbl_y_ssp);

  *++vbl_y_vsp = vbl_y_val;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  vbl_y_n = vbl_y_r1[vbl_y_n];

  vbl_y_state = vbl_y_pgoto[vbl_y_n - VBL_Y_NTOKENS] + *vbl_y_ssp;
  if (0 <= vbl_y_state && vbl_y_state <= VBL_Y_LAST && vbl_y_check[vbl_y_state] == *vbl_y_ssp)
    vbl_y_state = vbl_y_table[vbl_y_state];
  else
    vbl_y_state = vbl_y_defgoto[vbl_y_n - VBL_Y_NTOKENS];

  goto vbl_y_newstate;


/*------------------------------------.
| vbl_y_errlab -- here on detecting error |
`------------------------------------*/
vbl_y_errlab:
  /* If not already recovering from an error, report this error.  */
  if (!vbl_y_errstatus)
    {
      ++vbl_y_nerrs;
#if ! VBL_Y_ERROR_VERBOSE
      vbl_y_error (VBL_Y__("syntax error"));
#else
      {
	VBL_Y_SIZE_T vbl_y_size = vbl_y_syntax_error (0, vbl_y_state, vbl_y_char);
	if (vbl_y_msg_alloc < vbl_y_size && vbl_y_msg_alloc < VBL_Y_STACK_ALLOC_MAXIMUM)
	  {
	    VBL_Y_SIZE_T vbl_y_alloc = 2 * vbl_y_size;
	    if (! (vbl_y_size <= vbl_y_alloc && vbl_y_alloc <= VBL_Y_STACK_ALLOC_MAXIMUM))
	      vbl_y_alloc = VBL_Y_STACK_ALLOC_MAXIMUM;
	    if (vbl_y_msg != vbl_y_msgbuf)
	      VBL_Y_STACK_FREE (vbl_y_msg);
	    vbl_y_msg = (char *) VBL_Y_STACK_ALLOC (vbl_y_alloc);
	    if (vbl_y_msg)
	      vbl_y_msg_alloc = vbl_y_alloc;
	    else
	      {
		vbl_y_msg = vbl_y_msgbuf;
		vbl_y_msg_alloc = sizeof vbl_y_msgbuf;
	      }
	  }

	if (0 < vbl_y_size && vbl_y_size <= vbl_y_msg_alloc)
	  {
	    (void) vbl_y_syntax_error (vbl_y_msg, vbl_y_state, vbl_y_char);
	    vbl_y_error (vbl_y_msg);
	  }
	else
	  {
	    vbl_y_error (VBL_Y__("syntax error"));
	    if (vbl_y_size != 0)
	      goto vbl_y_exhaustedlab;
	  }
      }
#endif
    }



  if (vbl_y_errstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (vbl_y_char <= VBL_Y_EOF)
	{
	  /* Return failure if at end of input.  */
	  if (vbl_y_char == VBL_Y_EOF)
	    VBL_Y_ABORT;
	}
      else
	{
	  vbl_y_destruct ("Error: discarding",
		      vbl_y_token, &vbl_y_lval);
	  vbl_y_char = VBL_Y_EMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto vbl_y_errlab1;


/*---------------------------------------------------.
| vbl_y_errorlab -- error raised explicitly by VBL_Y_ERROR.  |
`---------------------------------------------------*/
vbl_y_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     VBL_Y_ERROR and the label vbl_y_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto vbl_y_errorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this VBL_Y_ERROR.  */
  VBL_Y_POPSTACK (vbl_y_len);
  vbl_y_len = 0;
  VBL_Y__STACK_PRINT (vbl_y_ss, vbl_y_ssp);
  vbl_y_state = *vbl_y_ssp;
  goto vbl_y_errlab1;


/*-------------------------------------------------------------.
| vbl_y_errlab1 -- common code for both syntax error and VBL_Y_ERROR.  |
`-------------------------------------------------------------*/
vbl_y_errlab1:
  vbl_y_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      vbl_y_n = vbl_y_pact[vbl_y_state];
      if (vbl_y_n != VBL_Y_PACT_NINF)
	{
	  vbl_y_n += VBL_Y_TERROR;
	  if (0 <= vbl_y_n && vbl_y_n <= VBL_Y_LAST && vbl_y_check[vbl_y_n] == VBL_Y_TERROR)
	    {
	      vbl_y_n = vbl_y_table[vbl_y_n];
	      if (0 < vbl_y_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (vbl_y_ssp == vbl_y_ss)
	VBL_Y_ABORT;


      vbl_y_destruct ("Error: popping",
		  vbl_y_stos[vbl_y_state], vbl_y_vsp);
      VBL_Y_POPSTACK (1);
      vbl_y_state = *vbl_y_ssp;
      VBL_Y__STACK_PRINT (vbl_y_ss, vbl_y_ssp);
    }

  if (vbl_y_n == VBL_Y_FINAL)
    VBL_Y_ACCEPT;

  *++vbl_y_vsp = vbl_y_lval;


  /* Shift the error token.  */
  VBL_Y__SYMBOL_PRINT ("Shifting", vbl_y_stos[vbl_y_n], vbl_y_vsp, vbl_y_lsp);

  vbl_y_state = vbl_y_n;
  goto vbl_y_newstate;


/*-------------------------------------.
| vbl_y_acceptlab -- VBL_Y_ACCEPT comes here.  |
`-------------------------------------*/
vbl_y_acceptlab:
  vbl_y_result = 0;
  goto vbl_y_return;

/*-----------------------------------.
| vbl_y_abortlab -- VBL_Y_ABORT comes here.  |
`-----------------------------------*/
vbl_y_abortlab:
  vbl_y_result = 1;
  goto vbl_y_return;

#ifndef vbl_y_overflow
/*-------------------------------------------------.
| vbl_y_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
vbl_y_exhaustedlab:
  vbl_y_error (VBL_Y__("memory exhausted"));
  vbl_y_result = 2;
  /* Fall through.  */
#endif

vbl_y_return:
  if (vbl_y_char != VBL_Y_EOF && vbl_y_char != VBL_Y_EMPTY)
     vbl_y_destruct ("Cleanup: discarding lookahead",
		 vbl_y_token, &vbl_y_lval);
  /* Do not reclaim the symbols of the rule which action triggered
     this VBL_Y_ABORT or VBL_Y_ACCEPT.  */
  VBL_Y_POPSTACK (vbl_y_len);
  VBL_Y__STACK_PRINT (vbl_y_ss, vbl_y_ssp);
  while (vbl_y_ssp != vbl_y_ss)
    {
      vbl_y_destruct ("Cleanup: popping",
		  vbl_y_stos[*vbl_y_ssp], vbl_y_vsp);
      VBL_Y_POPSTACK (1);
    }
#ifndef vbl_y_overflow
  if (vbl_y_ss != vbl_y_ssa)
    VBL_Y_STACK_FREE (vbl_y_ss);
#endif
#if VBL_Y_ERROR_VERBOSE
  if (vbl_y_msg != vbl_y_msgbuf)
    VBL_Y_STACK_FREE (vbl_y_msg);
#endif
  /* Make sure VBL_Y_ID is used.  */
  return VBL_Y_ID (vbl_y_result);
}


#line 7604 "../../../src/vbl/src/vbl_bcomp_y.y"


static struct dct_entry *addent (head , key)
struct dct_entry *head;
char             *key;

{
  struct dct_entry *entry;
  long              i;

  if (VBL_DCEHED == NULL)
    {
    VBL_DCEHED = (struct dct_entry *)
                 autallocblock (sizeof(struct dct_entry) * VBL_ALODFN);

    entry = VBL_DCEHED;
    for (i=1 ; i<VBL_ALODFN ; i++)
      {
      entry->next = entry + 1;
      entry++;
      }
    entry->next = NULL;
    }

  entry       = VBL_DCEHED;
  VBL_DCEHED  = VBL_DCEHED->next;

  entry->next = head;
  entry->data = NULL;
  entry->key  = key;

  return (entry);
}

static struct dct_recrd *addrcd (head , key)

struct dct_recrd *head;
char             *key;

{
  struct dct_recrd *recrd;
  long               i;

  if (VBL_DCRHED == NULL)
    {
    VBL_DCRHED = (struct dct_recrd *)
                 autallocblock (sizeof(struct dct_recrd) * VBL_ALODFN);

    recrd = VBL_DCRHED;
    for (i=1 ; i<VBL_ALODFN ; i++)
      {
      recrd->next = recrd + 1;
      recrd++;
      }
    recrd->next = NULL;
    }

  recrd           = VBL_DCRHED;
  VBL_DCRHED      = VBL_DCRHED->next;

  recrd->next     = head;
  recrd->fd0_val  = 0;
  recrd->fd1_val  = 0;
  recrd->fd2_val  = 0;
  recrd->fd3_val  = 0;
  recrd->fd4_val  = 0;
  recrd->fd5_val  = 0;
  recrd->fd6_val  = 0;
  recrd->fd7_val  = 0;
  recrd->fd8_val  = 0;
  recrd->pnt_val  = 0;
  recrd->dyn_val  = 0;
  recrd->key      = key;

  return (recrd);
}

static struct dct_entry **initab ()

{
  struct dct_entry **head;
  long                i;

  head = (struct dct_entry **)
         autallocblock (sizeof(struct dct_entry *) * VBL_HSZDFN);

  for (i=0 ; i<VBL_HSZDFN ; i++)
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

  index     = ((unsigned long) key_str) % VBL_HSZDFN;
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
      case VBL_MODDFN :
        recrd_pnt->fd0_val = valu;
        break;
      case VBL_SYMDFN :
        recrd_pnt->fd1_val = valu;
        break;
      case VBL_TYPDFN :
        recrd_pnt->fd2_val = valu;
        break;
      case VBL_SUNDFN :
        recrd_pnt->fd3_val = valu;
        break;
      case VBL_LBLDFN :
        recrd_pnt->fd4_val = valu;
        break;
      case VBL_WMXDFN :
        recrd_pnt->fd5_val = valu;
        break;
      case VBL_WMNDFN :
        recrd_pnt->fd6_val = valu;
        break;
      case VBL_ATLDFN :
        recrd_pnt->fd7_val = valu;
        break;
      case VBL_ATRDFN :
        recrd_pnt->fd8_val = valu;
        break;
      case VBL_PNTDFN :
        recrd_pnt->pnt_val = valu;
        break;
      case VBL_DYNDFN :
        recrd_pnt->dyn_val = valu;
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

  entry_pnt = head [((unsigned long)key_str) % VBL_HSZDFN];

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
        case VBL_MODDFN :
          valu = recrd_pnt->fd0_val;
          break;
        case VBL_SYMDFN :
          valu = recrd_pnt->fd1_val;
          break;
        case VBL_TYPDFN :
          valu = recrd_pnt->fd2_val;
          break;
        case VBL_SUNDFN :
          valu = recrd_pnt->fd3_val;
          break;
        case VBL_LBLDFN :
          valu = recrd_pnt->fd4_val;
          break;
        case VBL_WMXDFN :
          valu = recrd_pnt->fd5_val;
          break;
        case VBL_WMNDFN :
          valu = recrd_pnt->fd6_val;
          break;
        case VBL_ATLDFN :
          valu = recrd_pnt->fd7_val;
          break;
        case VBL_ATRDFN :
          valu = recrd_pnt->fd8_val;
          break;
        case VBL_PNTDFN :
          valu = recrd_pnt->pnt_val;
          break;
        case VBL_DYNDFN :
          valu = recrd_pnt->dyn_val;
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
    for (i=0 ; i<VBL_HSZDFN ; i++)
      {
      if ((pt_entry = pt_hash[i]) != NULL)
        {
        while (pt_entry != NULL)
          {
          pt_record = pt_entry->data;

          while (pt_record->next != NULL)
            pt_record = pt_record->next;

          pt_record->next = VBL_DCRHED;
          VBL_DCRHED      = pt_entry->data;

          pt_nxtentry     = pt_entry->next;
          pt_entry->next  = VBL_DCEHED;
          VBL_DCEHED      = pt_entry;
          pt_entry        = pt_nxtentry;
          }
        }
      }
    autfreeblock(pt_hash);
    }
}

static void *vbl_addstr(object,mode,prtype,type,flag,name,left,right,exp,kind,dynamic)

char          object;
long           mode;
vbtyp_list   *prtype;
unsigned char type;
char          flag;
char         *name;
long          left;
long          right;
vexexpr      *exp;
unsigned char kind;
unsigned char dynamic;

{
  ptype_list *GenVar;
  void  *pnt    = NULL;
  char   porflg = 0;
  char   modflg = 0;
  char   auxflg = 0;
  char   cstflg = 0;
  char   varflg = 0;
  char   funflg = 0;
  char   conflg = 0;
  char   parflg = 0;
  char   genflg = 0;
  char   gnrflg = 0;
  char genmodflg = 0;
  char   lclmod = 'X';
  vexexpr *vex_pnt;
  long      bitsize;

  switch (object)
  {
    case 'M':

       /* ###------------------------------------------------------### */
       /*   if object is a model port ...                                   */
       /* ###------------------------------------------------------### */

      modflg = 1;
      switch (mode)
      {
        case VBL_ICNDFN:
          lclmod = 'I'; break;
        case VBL_OCNDFN:
          lclmod = 'O'; break;
        case VBL_BCNDFN:
          lclmod = 'B'; break;
      }
      break;

    case 'P':

       /* ###------------------------------------------------------### */
       /*   if object is a port ...                                   */
       /* ###------------------------------------------------------### */

      porflg = 1;
      switch (mode)
      {
        case VBL_ICNDFN:
          lclmod = 'I'; break;
        case VBL_OCNDFN:
          lclmod = 'O'; break;
        case VBL_BCNDFN:
          lclmod = 'B'; break;
      }
      break;

    case 'p':

       /* ###------------------------------------------------------### */
       /*   if object is a parameter of a function / procedure       */
       /* ###------------------------------------------------------### */

      parflg = 1;
      switch (mode)
      {
        case VBL_ICNDFN:
          lclmod = 'I'; break;
        case VBL_OCNDFN:
          lclmod = 'O'; break;
        case VBL_BCNDFN:
          lclmod = 'B'; break;
      }
      break;

    case 'S':

       /* ###------------------------------------------------------### */
       /*   if object is a signal ...                                   */
       /* ###------------------------------------------------------### */

        auxflg = 1;

      break;

    case 'v':

        /* ###------------------------------------------------------### */
        /*   if object is a variable in function/procedure              */
        /* ###------------------------------------------------------### */

        funflg = 1;

      break;

    case 'V':

        /* ###------------------------------------------------------### */
        /*   if object is a variable ...                                */
        /* ###------------------------------------------------------### */

        varflg = 1;

      break;

    case 'C':

        /* ###------------------------------------------------------### */
        /*   if object is a constant ...                                */
        /* ###------------------------------------------------------### */

        cstflg = 1;

      break;

    case 'G':

        /* ###------------------------------------------------------### */
        /*   if object is a generic ...                                */
        /* ###------------------------------------------------------### */

        genflg = 1;

      break;

    case 'f':

        /* ###------------------------------------------------------### */
        /*   if object is a for generate variable ...                   */
        /* ###------------------------------------------------------### */

        gnrflg = 1;

      break;

    case 'g':

        /* ###------------------------------------------------------### */
        /*   if object is a generic map ...                                */
        /* ###------------------------------------------------------### */

        genmodflg = 1;

      break;

    case 'F':

        /* ###------------------------------------------------------### */
        /*   if object is a function ...                                */
        /* ###------------------------------------------------------### */

        conflg = 1;

      break;
  }

  if ( (flag == 'A') ||
       (flag == 'U') )
  {
       /* ###------------------------------------------------------### */
       /*   if object is an array ...                                   */
       /* ###------------------------------------------------------### */

/* Original 
    vex_pnt = createvexatomvec( name, left, right );
*/

/* Correction */
    if ( ( flag == 'A' ) && ( ! dynamic ) )
    {
      vex_pnt = createvexatomvec( name, prtype->LEFT, prtype->RIGHT ); 
    }
    else
    {
      if ( dynamic )
      {
        if ( dynamic == VBL_UPTDFN ) vex_pnt = createvexoper( VEX_TO    , 0 );
        else                         vex_pnt = createvexoper( VEX_DOWNTO, 0 );

        addvexqexpr( vex_pnt, createvexatomvec( name, -1, -1 ) );
        addvexqexpr( vex_pnt, dupvexexpr( (vexexpr *)left  ) );
        addvexqexpr( vex_pnt, dupvexexpr( (vexexpr *)right ) );
      }
      else
      {
        vex_pnt = createvexatomvec( name, left, right );
      }
    }
/* Fin Correction */ 

    if ( prtype->INDEX == VBH_TYPE_SIGNED )
    {
      SetVexNodeSigned( vex_pnt );
    }

    if ( auxflg == 1 )
      VBL_BEFPNT->BEAUX = vbh_addvbaux(VBL_BEFPNT->BEAUX, vex_pnt,exp,kind,prtype,
                                       VBL_LINNUM );
    if ( cstflg == 1 )
      VBL_BEFPNT->BECST = vbh_addvbcst(VBL_BEFPNT->BECST, vex_pnt,exp,prtype,
                                       VBL_LINNUM );

    if ( genflg == 1 )
      VBL_BEFPNT->BEGEN = vbh_addvbgen(VBL_BEFPNT->BEGEN, vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (porflg == 1)
      VBL_BEFPNT->BEPOR = vbh_addvbpor(VBL_BEFPNT->BEPOR, vex_pnt,exp,lclmod,kind,prtype,
                                       VBL_LINNUM );

    if (modflg == 1)
      VBL_BEFPNT->BEMOD->BEPOR = 
         vbh_addvbpor(VBL_BEFPNT->BEMOD->BEPOR, vex_pnt,exp,lclmod,kind,prtype,
                                       VBL_LINNUM );
    if (genmodflg == 1)
      VBL_BEFPNT->BEMOD->BEGEN = 
         vbh_addvbgen(VBL_BEFPNT->BEMOD->BEGEN, vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (parflg == 1)
      VBL_BEFUN->ARGUMENT = vbh_addvbarg(VBL_BEFUN->ARGUMENT,vex_pnt,lclmod,kind,prtype,
                                         VBL_LINNUM );
    if (varflg == 1)
      VBL_BEPCS->VARIABLE = vbh_addvbvar(VBL_BEPCS->VARIABLE,vex_pnt,exp,prtype,
                                         VBL_LINNUM );
    if (funflg == 1)
      VBL_BEFUN->VARIABLE = vbh_addvbvar(VBL_BEFUN->VARIABLE,vex_pnt,exp,prtype,
                                         VBL_LINNUM );
    if (gnrflg == 1)
      GenVar = vbh_addvbvar( (vbvar_list *)0,vex_pnt,exp,prtype, VBL_LINNUM );
  }
  else
  if ( (flag == 'I') )
  {
       /* ###------------------------------------------------------### */
       /*   if object is an integer ...                            */
       /* ###------------------------------------------------------### */

      if ( dynamic )
      {
        vexexpr *new_left;
        vexexpr *new_right;

        vex_pnt = createvexoper( VEX_NUM_BIT, 0 );
        addvexqexpr( vex_pnt, dupvexexpr( (vexexpr *)left )  );
        addvexqexpr( vex_pnt, dupvexexpr( (vexexpr *)right ) );

        new_left  = (vexexpr *)vex_pnt;
        new_right = (vexexpr *)createvexatomlit( VEX_ATOM_ZERO );

        vex_pnt = createvexternaryexpr(
            VEX_DOWNTO, -1, createvexatomvec( name, -1, -1 ), 
             dupvexexpr( (vexexpr *)new_left ), dupvexexpr( (vexexpr *)new_right ) );

        /* It's not clean but ... */
        copyvexnode( (vexexpr *)left, new_left );
        copyvexnode( (vexexpr *)right, new_right );
      }
      else
      {
        if ((left == -1 ) && (right == -1))
        {
          left  = prtype->LEFT;
          right = prtype->RIGHT;
        }

        bitsize = vbl_intSize( left, right );

        vex_pnt = createvexatomvec( name, bitsize - 1, 0 );

        if ( ( left  < 0 ) ||
             ( right < 0 ) )
        {
          SetVexNodeSigned( vex_pnt );
        }
      }

    if ( auxflg == 1 )
      VBL_BEFPNT->BEAUX = vbh_addvbaux(VBL_BEFPNT->BEAUX, vex_pnt,exp,kind,prtype,
                                       VBL_LINNUM );
    if ( cstflg == 1 )
      VBL_BEFPNT->BECST = vbh_addvbcst(VBL_BEFPNT->BECST, vex_pnt,exp,prtype,
                                       VBL_LINNUM );

    if ( genflg == 1 )
      VBL_BEFPNT->BEGEN = vbh_addvbgen(VBL_BEFPNT->BEGEN, vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (porflg == 1)
      VBL_BEFPNT->BEPOR = vbh_addvbpor(VBL_BEFPNT->BEPOR, vex_pnt,exp,lclmod,kind,prtype,
                                       VBL_LINNUM );
    if (modflg == 1)
      VBL_BEFPNT->BEMOD->BEPOR = 
        vbh_addvbpor(VBL_BEFPNT->BEMOD->BEPOR, vex_pnt,exp,lclmod,kind,prtype,
                                       VBL_LINNUM );
    if (genmodflg == 1)
      VBL_BEFPNT->BEMOD->BEGEN = 
         vbh_addvbgen(VBL_BEFPNT->BEMOD->BEGEN, vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (parflg == 1)
      VBL_BEFUN->ARGUMENT = vbh_addvbarg(VBL_BEFUN->ARGUMENT, vex_pnt, lclmod,kind,prtype,
                                       VBL_LINNUM );
    if (varflg == 1)
      VBL_BEPCS->VARIABLE = vbh_addvbvar(VBL_BEPCS->VARIABLE,vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (funflg == 1)
      VBL_BEFUN->VARIABLE = vbh_addvbvar(VBL_BEFUN->VARIABLE,vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (gnrflg == 1)
      GenVar = vbh_addvbvar( (vbvar_list *)0,vex_pnt,exp,prtype, VBL_LINNUM );
  }
  else
  {
    vex_pnt = createvexatombit( name );
       /* ###------------------------------------------------------### */
       /*   if object is a scalar ...                                   */
       /* ###------------------------------------------------------### */

    if (porflg == 1)
      VBL_BEFPNT->BEPOR = vbh_addvbpor (VBL_BEFPNT->BEPOR,vex_pnt,exp,lclmod,kind,prtype,
                                       VBL_LINNUM );
    if (modflg == 1)
      VBL_BEFPNT->BEMOD->BEPOR = 
        vbh_addvbpor (VBL_BEFPNT->BEMOD->BEPOR,vex_pnt,exp,lclmod,kind,prtype,
                                       VBL_LINNUM );
    if (genmodflg == 1)
      VBL_BEFPNT->BEMOD->BEGEN = 
         vbh_addvbgen(VBL_BEFPNT->BEMOD->BEGEN, vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (parflg == 1)
      VBL_BEFUN->ARGUMENT = vbh_addvbarg(VBL_BEFUN->ARGUMENT,vex_pnt,lclmod,kind,prtype,
                                       VBL_LINNUM );
    if (auxflg == 1)
      VBL_BEFPNT->BEAUX = vbh_addvbaux (VBL_BEFPNT->BEAUX,vex_pnt,exp,kind,prtype,
                                       VBL_LINNUM );
    if (cstflg == 1)
      VBL_BEFPNT->BECST = vbh_addvbcst (VBL_BEFPNT->BECST,vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (genflg == 1)
      VBL_BEFPNT->BEGEN = vbh_addvbgen (VBL_BEFPNT->BEGEN,vex_pnt,exp,prtype,
                                       VBL_LINNUM );
    if (varflg == 1)
      VBL_BEPCS->VARIABLE = vbh_addvbvar(VBL_BEPCS->VARIABLE,vex_pnt, exp, prtype,
                                       VBL_LINNUM  );
    if (funflg == 1)
      VBL_BEFUN->VARIABLE = vbh_addvbvar(VBL_BEFUN->VARIABLE,vex_pnt, exp, prtype,
                                       VBL_LINNUM  );
    if (gnrflg == 1)
      GenVar = vbh_addvbvar( (vbvar_list *)0,vex_pnt,exp,prtype, VBL_LINNUM );
  }

  if (auxflg == 1)
    pnt = (void *) VBL_BEFPNT->BEAUX;
  if (cstflg == 1)
    pnt = (void *) VBL_BEFPNT->BECST;
  if (genflg == 1)
    pnt = (void *) VBL_BEFPNT->BEGEN;
  if (varflg == 1)
    pnt = (void *) VBL_BEPCS->VARIABLE->DATA;
  if (gnrflg == 1)
  {
    pnt = (void *) GenVar->DATA;
    freeptype( GenVar );
  }
  if (funflg == 1)
    pnt = (void *) VBL_BEFUN->VARIABLE->DATA;
  if (porflg == 1)
    pnt = (void *) VBL_BEFPNT->BEPOR;
  if (modflg == 1)
    pnt = (void *) VBL_BEFPNT->BEMOD->BEPOR;
  if (genmodflg == 1)
    pnt = (void *) VBL_BEFPNT->BEMOD->BEGEN;
  if (parflg == 1)
    pnt = (void *) VBL_BEFUN->ARGUMENT;
  if (conflg == 1)
    pnt = (void *) vex_pnt;

  return (pnt);
}

static vbtyp_list *val_type(name)

 char *name;
{
  return( vbh_getvbtyp( VBL_HEADFIG, name ) );
}

static vbtyp_list *get_type(val)

  long val;
{
  vbtyp_list *Type;

  for ( Type  = VBL_BEFPNT->BETYP;
        Type != (vbtyp_list *)0;
        Type  = Type->NEXT )
  {
    if  ( Type->INDEX == val ) break;
  }

  return( Type );
}

static struct ptype *reversetype(pnt)
 struct ptype *pnt;
{
  return( (ptype_list *)reverse( (chain_list *)pnt ) );
# if 0
    struct ptype* revtype;
    struct ptype* aux2;
    struct ptype* aux1;

    if(pnt == NULL || pnt->NEXT == NULL)
       return(pnt);
                     revtype = pnt;
                   aux1 = pnt->NEXT;
                   revtype->NEXT = NULL;
                while(aux1)
                 {
                   aux2 = revtype;
                   revtype = aux1;
                   aux1 = aux1->NEXT;
                   revtype->NEXT = aux2;
                 }
       return(revtype);
# endif
}

