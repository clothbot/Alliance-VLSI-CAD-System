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

/* All symbols defined below should begin with mgn or MGN, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define MGNBISON 1

/* Bison version.  */
#define MGNBISON_VERSION "2.3"

/* Skeleton name.  */
#define MGNSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define MGNPURE 0

/* Using locations.  */
#define MGNLSP_NEEDED 0



/* Tokens.  */
#ifndef MGNTOKENTYPE
# define MGNTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum mgntokentype {
     CELL = 258,
     PLACE = 259,
     TERMINAL = 260,
     RA = 261,
     STRETCH = 262,
     WIRE = 263,
     MWIDTH = 264,
     HORIZ = 265,
     VERTI = 266,
     MLEFT = 267,
     MRIGHT = 268,
     MTOP = 269,
     MBOTTOM = 270,
     AT = 271,
     MX = 272,
     MY = 273,
     R = 274,
     NTR = 275,
     PTR = 276,
     COP = 277,
     CON = 278,
     COPS = 279,
     COPW = 280,
     CONW = 281,
     PVIA = 282,
     CXN = 283,
     CXP = 284,
     STRING = 285,
     NUM = 286
   };
#endif
/* Tokens.  */
#define CELL 258
#define PLACE 259
#define TERMINAL 260
#define RA 261
#define STRETCH 262
#define WIRE 263
#define MWIDTH 264
#define HORIZ 265
#define VERTI 266
#define MLEFT 267
#define MRIGHT 268
#define MTOP 269
#define MBOTTOM 270
#define AT 271
#define MX 272
#define MY 273
#define R 274
#define NTR 275
#define PTR 276
#define COP 277
#define CON 278
#define COPS 279
#define COPW 280
#define CONW 281
#define PVIA 282
#define CXN 283
#define CXP 284
#define STRING 285
#define NUM 286




/* Copy the first part of user declarations.  */
#line 30 "../../../src/mbkmg/src/mg2mbk_y.y"

#include <stdio.h>
#include <string.h>
#include <mut.h>
#include <mph.h>
#define MAXLAYER (LAST_LAYER + 1)

static phfig_list *mgleaf; /* modgen leaf cell parsed */
static char mbk_layer();
static char *checkinsname();
static char *checkconname();
static char *checkrefname();
static chain_list *pl;
static int Extension[MAXLAYER] = {
	/*	NWELL	 */ 0,
	/*	PWELL	 */ 0,
	/*	NTIE	 */ 1,
	/*	PTIE	 */ 1,
	/*	NDIF	 */ 1,
	/*	PDIF	 */ 1,
	/*	NTRANS */ 0, /* meant for N transistor grid */
	/*	PTRANS */ 0, /* meant for P transistor grid */
	/*	POLY	 */ 1,
	/*	ALU1	 */ 1,
	/*	ALU2	 */ 2,
	/*	ALU3	 */ 2,
	/*	TPOLY	 */ 1,
	/*	TALU1	 */ 1,
	/*	TALU2	 */ 2,
	/*	TALU3	 */ 2 };

#define O_PS_AA 1.5
#define O_AA_PS 2

#ifdef GRIDDED
#define TWO 2
#else
#define TWO 1
#endif

/* note :
   All STRINGs are allocated using mbkstrdup since the pointer to mgntext
   will change when more than a STRING is used in the grammar.
   So all STRINGs are freed once used. */



/* Enabling traces.  */
#ifndef MGNDEBUG
# define MGNDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef MGNERROR_VERBOSE
# undef MGNERROR_VERBOSE
# define MGNERROR_VERBOSE 1
#else
# define MGNERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef MGNTOKEN_TABLE
# define MGNTOKEN_TABLE 0
#endif

#if ! defined MGNSTYPE && ! defined MGNSTYPE_IS_DECLARED
typedef union MGNSTYPE
#line 77 "../../../src/mbkmg/src/mg2mbk_y.y"
{
	char *s;
	long n;
	struct pxy {
		long x;
		long y;
	} *p;
}
/* Line 187 of yacc.c.  */
#line 214 "y.tab.c"
	MGNSTYPE;
# define mgnstype MGNSTYPE /* obsolescent; will be withdrawn */
# define MGNSTYPE_IS_DECLARED 1
# define MGNSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 227 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef MGNTYPE_UINT8
typedef MGNTYPE_UINT8 mgntype_uint8;
#else
typedef unsigned char mgntype_uint8;
#endif

#ifdef MGNTYPE_INT8
typedef MGNTYPE_INT8 mgntype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char mgntype_int8;
#else
typedef short int mgntype_int8;
#endif

#ifdef MGNTYPE_UINT16
typedef MGNTYPE_UINT16 mgntype_uint16;
#else
typedef unsigned short int mgntype_uint16;
#endif

#ifdef MGNTYPE_INT16
typedef MGNTYPE_INT16 mgntype_int16;
#else
typedef short int mgntype_int16;
#endif

#ifndef MGNSIZE_T
# ifdef __SIZE_TYPE__
#  define MGNSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define MGNSIZE_T size_t
# elif ! defined MGNSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define MGNSIZE_T size_t
# else
#  define MGNSIZE_T unsigned int
# endif
#endif

#define MGNSIZE_MAXIMUM ((MGNSIZE_T) -1)

#ifndef MGN_
# if MGNENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define MGN_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef MGN_
#  define MGN_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define MGNUSE(e) ((void) (e))
#else
# define MGNUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define MGNID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
MGNID (int i)
#else
static int
MGNID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined mgnoverflow || MGNERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef MGNSTACK_USE_ALLOCA
#  if MGNSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define MGNSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define MGNSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define MGNSTACK_ALLOC alloca
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

# ifdef MGNSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define MGNSTACK_FREE(Ptr) do { /* empty */; } while (MGNID (0))
#  ifndef MGNSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define MGNSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define MGNSTACK_ALLOC MGNMALLOC
#  define MGNSTACK_FREE MGNFREE
#  ifndef MGNSTACK_ALLOC_MAXIMUM
#   define MGNSTACK_ALLOC_MAXIMUM MGNSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined MGNMALLOC || defined malloc) \
	     && (defined MGNFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef MGNMALLOC
#   define MGNMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (MGNSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef MGNFREE
#   define MGNFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined mgnoverflow || MGNERROR_VERBOSE */


#if (! defined mgnoverflow \
     && (! defined __cplusplus \
	 || (defined MGNSTYPE_IS_TRIVIAL && MGNSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union mgnalloc
{
  mgntype_int16 mgnss;
  MGNSTYPE mgnvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define MGNSTACK_GAP_MAXIMUM (sizeof (union mgnalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define MGNSTACK_BYTES(N) \
     ((N) * (sizeof (mgntype_int16) + sizeof (MGNSTYPE)) \
      + MGNSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef MGNCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define MGNCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define MGNCOPY(To, From, Count)		\
      do					\
	{					\
	  MGNSIZE_T mgni;				\
	  for (mgni = 0; mgni < (Count); mgni++)	\
	    (To)[mgni] = (From)[mgni];		\
	}					\
      while (MGNID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables MGNSIZE and MGNSTACKSIZE give the old and new number of
   elements in the stack, and MGNPTR gives the new location of the
   stack.  Advance MGNPTR to a properly aligned location for the next
   stack.  */
# define MGNSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	MGNSIZE_T mgnnewbytes;						\
	MGNCOPY (&mgnptr->Stack, Stack, mgnsize);				\
	Stack = &mgnptr->Stack;						\
	mgnnewbytes = mgnstacksize * sizeof (*Stack) + MGNSTACK_GAP_MAXIMUM; \
	mgnptr += mgnnewbytes / sizeof (*mgnptr);				\
      }									\
    while (MGNID (0))

#endif

/* MGNFINAL -- State number of the termination state.  */
#define MGNFINAL  6
/* MGNLAST -- Last index in MGNTABLE.  */
#define MGNLAST   157

/* MGNNTOKENS -- Number of terminals.  */
#define MGNNTOKENS  39
/* MGNNNTS -- Number of nonterminals.  */
#define MGNNNTS  13
/* MGNNRULES -- Number of rules.  */
#define MGNNRULES  41
/* MGNNRULES -- Number of states.  */
#define MGNNSTATES  152

/* MGNTRANSLATE(MGNLEX) -- Bison symbol number corresponding to MGNLEX.  */
#define MGNUNDEFTOK  2
#define MGNMAXUTOK   286

#define MGNTRANSLATE(MGNX)						\
  ((unsigned int) (MGNX) <= MGNMAXUTOK ? mgntranslate[MGNX] : MGNUNDEFTOK)

/* MGNTRANSLATE[MGNLEX] -- Bison symbol number corresponding to MGNLEX.  */
static const mgntype_uint8 mgntranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      36,    37,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    35,
       2,    34,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31
};

#if MGNDEBUG
/* MGNPRHS[MGNN] -- Index of the first RHS symbol of rule number MGNN in
   MGNRHS.  */
static const mgntype_uint8 mgnprhs[] =
{
       0,     0,     3,     5,     7,    10,    16,    18,    21,    27,
      38,    41,    50,    64,    77,    78,    88,   100,   112,   118,
     124,   130,   136,   142,   148,   154,   160,   164,   166,   170,
     172,   174,   176,   178,   180,   182,   183,   185,   187,   190,
     193,   197
};

/* MGNRHS -- A `-1'-separated list of the rules' RHS.  */
static const mgntype_int8 mgnrhs[] =
{
      40,     0,    -1,    41,    -1,    42,    -1,    41,    42,    -1,
       3,    30,    32,    43,    33,    -1,    44,    -1,    44,    43,
      -1,     4,    30,    34,    45,    35,    -1,     4,    30,    34,
      30,    51,    16,    36,    47,    37,    35,    -1,    45,    35,
      -1,     6,    36,    30,    38,    47,    38,    47,    37,    -1,
       5,    30,    36,     9,    34,    31,    37,    50,    30,    16,
      36,    47,    37,    -1,     7,    36,    30,    38,    31,    38,
      49,    38,    47,    38,    47,    37,    -1,    -1,     8,    46,
      36,    30,    38,    31,    38,    48,    37,    -1,    20,    36,
      31,    38,    31,    37,    51,    16,    36,    47,    37,    -1,
      21,    36,    31,    38,    31,    37,    51,    16,    36,    47,
      37,    -1,    22,    16,    36,    47,    37,    -1,    23,    16,
      36,    47,    37,    -1,    24,    16,    36,    47,    37,    -1,
      25,    16,    36,    47,    37,    -1,    26,    16,    36,    47,
      37,    -1,    27,    16,    36,    47,    37,    -1,    28,    16,
      36,    47,    37,    -1,    29,    16,    36,    47,    37,    -1,
      31,    38,    31,    -1,    47,    -1,    47,    38,    48,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,    15,    -1,
      14,    -1,    -1,    17,    -1,    18,    -1,    17,    18,    -1,
      19,    31,    -1,    17,    19,    31,    -1,    18,    19,    31,
      -1
};

/* MGNRLINE[MGNN] -- source line where rule number MGNN was defined.  */
static const mgntype_uint16 mgnrline[] =
{
       0,   126,   126,   129,   130,   133,   139,   140,   143,   147,
     157,   160,   171,   181,   208,   208,   254,   284,   314,   319,
     324,   329,   334,   339,   344,   349,   356,   367,   371,   377,
     378,   381,   382,   383,   384,   387,   388,   390,   392,   394,
     401,   408
};
#endif

#if MGNDEBUG || MGNERROR_VERBOSE || MGNTOKEN_TABLE
/* MGNTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at MGNNTOKENS, nonterminals.  */
static const char *const mgntname[] =
{
  "$end", "error", "$undefined", "CELL", "PLACE", "TERMINAL", "RA",
  "STRETCH", "WIRE", "MWIDTH", "HORIZ", "VERTI", "MLEFT", "MRIGHT", "MTOP",
  "MBOTTOM", "AT", "MX", "MY", "R", "NTR", "PTR", "COP", "CON", "COPS",
  "COPW", "CONW", "PVIA", "CXN", "CXP", "STRING", "NUM", "'{'", "'}'",
  "'='", "';'", "'('", "')'", "','", "$accept", "design", "cells",
  "leafcell", "lines", "line", "elm", "@1", "point", "point_list", "dir",
  "face", "op", 0
};
#endif

# ifdef MGNPRINT
/* MGNTOKNUM[MGNLEX-NUM] -- Internal token number corresponding to
   token MGNLEX-NUM.  */
static const mgntype_uint16 mgntoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   123,   125,    61,    59,    40,    41,    44
};
# endif

/* MGNR1[MGNN] -- Symbol number of symbol that rule MGNN derives.  */
static const mgntype_uint8 mgnr1[] =
{
       0,    39,    40,    41,    41,    42,    43,    43,    44,    44,
      44,    45,    45,    45,    46,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    47,    48,    48,    49,
      49,    50,    50,    50,    50,    51,    51,    51,    51,    51,
      51,    51
};

/* MGNR2[MGNN] -- Number of symbols composing right hand side of rule MGNN.  */
static const mgntype_uint8 mgnr2[] =
{
       0,     2,     1,     1,     2,     5,     1,     2,     5,    10,
       2,     8,    13,    12,     0,     9,    11,    11,     5,     5,
       5,     5,     5,     5,     5,     5,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     2,
       3,     3
};

/* MGNDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when MGNTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const mgntype_uint8 mgndefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       0,     0,     0,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     7,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,     8,     0,     0,     0,     0,     0,     0,     0,    18,
      19,    20,    21,    22,    23,    24,    25,    38,     0,     0,
      39,     0,     0,     0,     0,     0,    35,    35,    26,    40,
      41,     0,     0,     0,    29,    30,     0,     0,     0,     0,
       0,    31,    32,    34,    33,     0,    11,     0,    27,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,     9,
       0,     0,    28,     0,     0,     0,     0,    16,    17,     0,
      13,    12
};

/* MGNDEFGOTO[NTERM-NUM].  */
static const mgntype_int16 mgndefgoto[] =
{
      -1,     2,     3,     4,    24,    25,    26,    31,   128,   129,
     116,   125,    80
};

/* MGNPACT[STATE-NUM] -- Index in MGNTABLE of the portion describing
   STATE-NUM.  */
#define MGNPACT_NINF -55
static const mgntype_int8 mgnpact[] =
{
      24,    25,    54,    24,   -55,    26,   -55,   -55,     8,    27,
      30,    20,    28,   -55,    29,    31,    45,    46,    47,    50,
      52,    53,    55,    56,    37,     8,    38,    40,    41,    48,
      49,    44,    51,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   -55,   -55,   -55,    18,    67,    43,    66,    72,
      68,    69,    74,    74,    74,    74,    74,    74,    74,    74,
      -9,    73,    75,    74,    79,    76,    80,    81,    77,    82,
      83,    84,    85,    86,    87,    88,    89,     3,    71,    96,
      97,   -55,    98,    78,    90,    99,    94,    95,   102,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   103,   104,
     -55,   100,   101,    74,    39,   105,    -9,    -9,   -55,   -55,
     -55,    74,     5,   107,   -55,   -55,   108,    74,   121,   123,
     110,   -55,   -55,   -55,   -55,   111,   -55,    74,   112,   114,
     106,   109,   113,   124,   115,    74,   -55,    74,    74,   -55,
     116,    74,   -55,   117,   118,    74,   119,   -55,   -55,   120,
     -55,   -55
};

/* MGNPGOTO[NTERM-NUM].  */
static const mgntype_int16 mgnpgoto[] =
{
     -55,   -55,   -55,   146,    92,   -55,    42,   -55,   -52,   -51,
     -55,   -55,   -54
};

/* MGNTABLE[MGNPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what MGNDEFACT says.
   If MGNTABLE_NINF, syntax error.  */
#define MGNTABLE_NINF -1
static const mgntype_uint8 mgntable[] =
{
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    83,     9,    10,    11,    12,    13,   121,   122,   123,
     124,    97,    98,    10,    11,    12,    13,     1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    60,   114,
     115,   113,   118,   119,     6,     5,    29,    27,     8,   120,
      28,    34,    35,    36,    30,    32,    37,    33,    38,    39,
      42,    40,    41,    44,    45,   134,    62,    46,    47,    48,
      49,    63,    50,     0,   142,   143,   144,    61,    51,   146,
      99,     0,     0,   149,    52,    53,    54,    55,    56,    57,
      58,    59,    65,     0,    64,    68,    66,    67,    81,    82,
      84,    86,    87,   101,    85,    88,   103,    43,     0,    89,
      90,    91,    92,    93,    94,    95,    96,   100,   104,   102,
     105,   106,   107,   108,   109,   110,   111,   130,   112,   131,
     140,   133,   137,   117,   126,   138,   127,   132,   139,     7,
     135,   136,   145,   141,   147,   148,   150,   151
};

static const mgntype_int16 mgncheck[] =
{
      52,    53,    54,    55,    56,    57,    58,    59,    17,    18,
      19,    63,     4,     5,     6,     7,     8,    12,    13,    14,
      15,    18,    19,     5,     6,     7,     8,     3,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,   103,   106,   107,     0,    30,    36,    30,    32,   111,
      30,    16,    16,    16,    36,    36,    16,    36,    16,    16,
      33,    16,    16,    35,    34,   127,     9,    36,    30,    30,
      36,    38,    31,    -1,   135,   137,   138,    45,    31,   141,
      19,    -1,    -1,   145,    36,    36,    36,    36,    36,    36,
      36,    36,    30,    -1,    38,    31,    38,    38,    35,    34,
      31,    31,    31,    16,    38,    38,    38,    25,    -1,    37,
      37,    37,    37,    37,    37,    37,    37,    31,    38,    31,
      31,    37,    37,    31,    31,    31,    36,    16,    37,    16,
      16,    30,    36,    38,    37,    36,    38,    37,    35,     3,
      38,    37,    36,    38,    37,    37,    37,    37
};

/* MGNSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const mgntype_uint8 mgnstos[] =
{
       0,     3,    40,    41,    42,    30,     0,    42,    32,     4,
       5,     6,     7,     8,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    43,    44,    45,    30,    30,    36,
      36,    46,    36,    36,    16,    16,    16,    16,    16,    16,
      16,    16,    33,    43,    35,    34,    36,    30,    30,    36,
      31,    31,    36,    36,    36,    36,    36,    36,    36,    36,
      30,    45,     9,    38,    38,    30,    38,    38,    31,    47,
      47,    47,    47,    47,    47,    47,    47,    17,    18,    19,
      51,    35,    34,    47,    31,    38,    31,    31,    38,    37,
      37,    37,    37,    37,    37,    37,    37,    18,    19,    19,
      31,    16,    31,    38,    38,    31,    37,    37,    31,    31,
      31,    36,    37,    47,    10,    11,    49,    38,    51,    51,
      47,    12,    13,    14,    15,    50,    37,    38,    47,    48,
      16,    16,    37,    30,    47,    38,    37,    36,    36,    35,
      16,    38,    48,    47,    47,    36,    47,    37,    37,    47,
      37,    37
};

#define mgnerrok		(mgnerrstatus = 0)
#define mgnclearin	(mgnchar = MGNEMPTY)
#define MGNEMPTY		(-2)
#define MGNEOF		0

#define MGNACCEPT	goto mgnacceptlab
#define MGNABORT		goto mgnabortlab
#define MGNERROR		goto mgnerrorlab


/* Like MGNERROR except do call mgnerror.  This remains here temporarily
   to ease the transition to the new meaning of MGNERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define MGNFAIL		goto mgnerrlab

#define MGNRECOVERING()  (!!mgnerrstatus)

#define MGNBACKUP(Token, Value)					\
do								\
  if (mgnchar == MGNEMPTY && mgnlen == 1)				\
    {								\
      mgnchar = (Token);						\
      mgnlval = (Value);						\
      mgntoken = MGNTRANSLATE (mgnchar);				\
      MGNPOPSTACK (1);						\
      goto mgnbackup;						\
    }								\
  else								\
    {								\
      mgnerror (MGN_("syntax error: cannot back up")); \
      MGNERROR;							\
    }								\
while (MGNID (0))


#define MGNTERROR	1
#define MGNERRCODE	256


/* MGNLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define MGNRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef MGNLLOC_DEFAULT
# define MGNLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (MGNID (N))                                                    \
	{								\
	  (Current).first_line   = MGNRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = MGNRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = MGNRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = MGNRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    MGNRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    MGNRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (MGNID (0))
#endif


/* MGN_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef MGN_LOCATION_PRINT
# if MGNLTYPE_IS_TRIVIAL
#  define MGN_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define MGN_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* MGNLEX -- calling `mgnlex' with the right arguments.  */

#ifdef MGNLEX_PARAM
# define MGNLEX mgnlex (MGNLEX_PARAM)
#else
# define MGNLEX mgnlex ()
#endif

/* Enable debugging if requested.  */
#if MGNDEBUG

# ifndef MGNFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define MGNFPRINTF fprintf
# endif

# define MGNDPRINTF(Args)			\
do {						\
  if (mgndebug)					\
    MGNFPRINTF Args;				\
} while (MGNID (0))

# define MGN_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (mgndebug)								  \
    {									  \
      MGNFPRINTF (stderr, "%s ", Title);					  \
      mgn_symbol_print (stderr,						  \
		  Type, Value); \
      MGNFPRINTF (stderr, "\n");						  \
    }									  \
} while (MGNID (0))


/*--------------------------------.
| Print this symbol on MGNOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mgn_symbol_value_print (FILE *mgnoutput, int mgntype, MGNSTYPE const * const mgnvaluep)
#else
static void
mgn_symbol_value_print (mgnoutput, mgntype, mgnvaluep)
    FILE *mgnoutput;
    int mgntype;
    MGNSTYPE const * const mgnvaluep;
#endif
{
  if (!mgnvaluep)
    return;
# ifdef MGNPRINT
  if (mgntype < MGNNTOKENS)
    MGNPRINT (mgnoutput, mgntoknum[mgntype], *mgnvaluep);
# else
  MGNUSE (mgnoutput);
# endif
  switch (mgntype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on MGNOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mgn_symbol_print (FILE *mgnoutput, int mgntype, MGNSTYPE const * const mgnvaluep)
#else
static void
mgn_symbol_print (mgnoutput, mgntype, mgnvaluep)
    FILE *mgnoutput;
    int mgntype;
    MGNSTYPE const * const mgnvaluep;
#endif
{
  if (mgntype < MGNNTOKENS)
    MGNFPRINTF (mgnoutput, "token %s (", mgntname[mgntype]);
  else
    MGNFPRINTF (mgnoutput, "nterm %s (", mgntname[mgntype]);

  mgn_symbol_value_print (mgnoutput, mgntype, mgnvaluep);
  MGNFPRINTF (mgnoutput, ")");
}

/*------------------------------------------------------------------.
| mgn_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mgn_stack_print (mgntype_int16 *bottom, mgntype_int16 *top)
#else
static void
mgn_stack_print (bottom, top)
    mgntype_int16 *bottom;
    mgntype_int16 *top;
#endif
{
  MGNFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    MGNFPRINTF (stderr, " %d", *bottom);
  MGNFPRINTF (stderr, "\n");
}

# define MGN_STACK_PRINT(Bottom, Top)				\
do {								\
  if (mgndebug)							\
    mgn_stack_print ((Bottom), (Top));				\
} while (MGNID (0))


/*------------------------------------------------.
| Report that the MGNRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mgn_reduce_print (MGNSTYPE *mgnvsp, int mgnrule)
#else
static void
mgn_reduce_print (mgnvsp, mgnrule)
    MGNSTYPE *mgnvsp;
    int mgnrule;
#endif
{
  int mgnnrhs = mgnr2[mgnrule];
  int mgni;
  unsigned long int mgnlno = mgnrline[mgnrule];
  MGNFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     mgnrule - 1, mgnlno);
  /* The symbols being reduced.  */
  for (mgni = 0; mgni < mgnnrhs; mgni++)
    {
      fprintf (stderr, "   $%d = ", mgni + 1);
      mgn_symbol_print (stderr, mgnrhs[mgnprhs[mgnrule] + mgni],
		       &(mgnvsp[(mgni + 1) - (mgnnrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define MGN_REDUCE_PRINT(Rule)		\
do {					\
  if (mgndebug)				\
    mgn_reduce_print (mgnvsp, Rule); \
} while (MGNID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int mgndebug;
#else /* !MGNDEBUG */
# define MGNDPRINTF(Args)
# define MGN_SYMBOL_PRINT(Title, Type, Value, Location)
# define MGN_STACK_PRINT(Bottom, Top)
# define MGN_REDUCE_PRINT(Rule)
#endif /* !MGNDEBUG */


/* MGNINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	MGNINITDEPTH
# define MGNINITDEPTH 200
#endif

/* MGNMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   MGNSTACK_ALLOC_MAXIMUM < MGNSTACK_BYTES (MGNMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef MGNMAXDEPTH
# define MGNMAXDEPTH 10000
#endif



#if MGNERROR_VERBOSE

# ifndef mgnstrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define mgnstrlen strlen
#  else
/* Return the length of MGNSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static MGNSIZE_T
mgnstrlen (const char *mgnstr)
#else
static MGNSIZE_T
mgnstrlen (mgnstr)
    const char *mgnstr;
#endif
{
  MGNSIZE_T mgnlen;
  for (mgnlen = 0; mgnstr[mgnlen]; mgnlen++)
    continue;
  return mgnlen;
}
#  endif
# endif

# ifndef mgnstpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define mgnstpcpy stpcpy
#  else
/* Copy MGNSRC to MGNDEST, returning the address of the terminating '\0' in
   MGNDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
mgnstpcpy (char *mgndest, const char *mgnsrc)
#else
static char *
mgnstpcpy (mgndest, mgnsrc)
    char *mgndest;
    const char *mgnsrc;
#endif
{
  char *mgnd = mgndest;
  const char *mgns = mgnsrc;

  while ((*mgnd++ = *mgns++) != '\0')
    continue;

  return mgnd - 1;
}
#  endif
# endif

# ifndef mgntnamerr
/* Copy to MGNRES the contents of MGNSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for mgnerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  MGNSTR is taken from mgntname.  If MGNRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static MGNSIZE_T
mgntnamerr (char *mgnres, const char *mgnstr)
{
  if (*mgnstr == '"')
    {
      MGNSIZE_T mgnn = 0;
      char const *mgnp = mgnstr;

      for (;;)
	switch (*++mgnp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++mgnp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (mgnres)
	      mgnres[mgnn] = *mgnp;
	    mgnn++;
	    break;

	  case '"':
	    if (mgnres)
	      mgnres[mgnn] = '\0';
	    return mgnn;
	  }
    do_not_strip_quotes: ;
    }

  if (! mgnres)
    return mgnstrlen (mgnstr);

  return mgnstpcpy (mgnres, mgnstr) - mgnres;
}
# endif

/* Copy into MGNRESULT an error message about the unexpected token
   MGNCHAR while in state MGNSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If MGNRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return MGNSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static MGNSIZE_T
mgnsyntax_error (char *mgnresult, int mgnstate, int mgnchar)
{
  int mgnn = mgnpact[mgnstate];

  if (! (MGNPACT_NINF < mgnn && mgnn <= MGNLAST))
    return 0;
  else
    {
      int mgntype = MGNTRANSLATE (mgnchar);
      MGNSIZE_T mgnsize0 = mgntnamerr (0, mgntname[mgntype]);
      MGNSIZE_T mgnsize = mgnsize0;
      MGNSIZE_T mgnsize1;
      int mgnsize_overflow = 0;
      enum { MGNERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *mgnarg[MGNERROR_VERBOSE_ARGS_MAXIMUM];
      int mgnx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      MGN_("syntax error, unexpected %s");
      MGN_("syntax error, unexpected %s, expecting %s");
      MGN_("syntax error, unexpected %s, expecting %s or %s");
      MGN_("syntax error, unexpected %s, expecting %s or %s or %s");
      MGN_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *mgnfmt;
      char const *mgnf;
      static char const mgnunexpected[] = "syntax error, unexpected %s";
      static char const mgnexpecting[] = ", expecting %s";
      static char const mgnor[] = " or %s";
      char mgnformat[sizeof mgnunexpected
		    + sizeof mgnexpecting - 1
		    + ((MGNERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof mgnor - 1))];
      char const *mgnprefix = mgnexpecting;

      /* Start MGNX at -MGNN if negative to avoid negative indexes in
	 MGNCHECK.  */
      int mgnxbegin = mgnn < 0 ? -mgnn : 0;

      /* Stay within bounds of both mgncheck and mgntname.  */
      int mgnchecklim = MGNLAST - mgnn + 1;
      int mgnxend = mgnchecklim < MGNNTOKENS ? mgnchecklim : MGNNTOKENS;
      int mgncount = 1;

      mgnarg[0] = mgntname[mgntype];
      mgnfmt = mgnstpcpy (mgnformat, mgnunexpected);

      for (mgnx = mgnxbegin; mgnx < mgnxend; ++mgnx)
	if (mgncheck[mgnx + mgnn] == mgnx && mgnx != MGNTERROR)
	  {
	    if (mgncount == MGNERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		mgncount = 1;
		mgnsize = mgnsize0;
		mgnformat[sizeof mgnunexpected - 1] = '\0';
		break;
	      }
	    mgnarg[mgncount++] = mgntname[mgnx];
	    mgnsize1 = mgnsize + mgntnamerr (0, mgntname[mgnx]);
	    mgnsize_overflow |= (mgnsize1 < mgnsize);
	    mgnsize = mgnsize1;
	    mgnfmt = mgnstpcpy (mgnfmt, mgnprefix);
	    mgnprefix = mgnor;
	  }

      mgnf = MGN_(mgnformat);
      mgnsize1 = mgnsize + mgnstrlen (mgnf);
      mgnsize_overflow |= (mgnsize1 < mgnsize);
      mgnsize = mgnsize1;

      if (mgnsize_overflow)
	return MGNSIZE_MAXIMUM;

      if (mgnresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *mgnp = mgnresult;
	  int mgni = 0;
	  while ((*mgnp = *mgnf) != '\0')
	    {
	      if (*mgnp == '%' && mgnf[1] == 's' && mgni < mgncount)
		{
		  mgnp += mgntnamerr (mgnp, mgnarg[mgni++]);
		  mgnf += 2;
		}
	      else
		{
		  mgnp++;
		  mgnf++;
		}
	    }
	}
      return mgnsize;
    }
}
#endif /* MGNERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mgndestruct (const char *mgnmsg, int mgntype, MGNSTYPE *mgnvaluep)
#else
static void
mgndestruct (mgnmsg, mgntype, mgnvaluep)
    const char *mgnmsg;
    int mgntype;
    MGNSTYPE *mgnvaluep;
#endif
{
  MGNUSE (mgnvaluep);

  if (!mgnmsg)
    mgnmsg = "Deleting";
  MGN_SYMBOL_PRINT (mgnmsg, mgntype, mgnvaluep, mgnlocationp);

  switch (mgntype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef MGNPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int mgnparse (void *MGNPARSE_PARAM);
#else
int mgnparse ();
#endif
#else /* ! MGNPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int mgnparse (void);
#else
int mgnparse ();
#endif
#endif /* ! MGNPARSE_PARAM */



/* The look-ahead symbol.  */
int mgnchar;

/* The semantic value of the look-ahead symbol.  */
MGNSTYPE mgnlval;

/* Number of syntax errors so far.  */
int mgnnerrs;



/*----------.
| mgnparse.  |
`----------*/

#ifdef MGNPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
mgnparse (void *MGNPARSE_PARAM)
#else
int
mgnparse (MGNPARSE_PARAM)
    void *MGNPARSE_PARAM;
#endif
#else /* ! MGNPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
mgnparse (void)
#else
int
mgnparse ()

#endif
#endif
{
  
  int mgnstate;
  int mgnn;
  int mgnresult;
  /* Number of tokens to shift before error messages enabled.  */
  int mgnerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int mgntoken = 0;
#if MGNERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char mgnmsgbuf[128];
  char *mgnmsg = mgnmsgbuf;
  MGNSIZE_T mgnmsg_alloc = sizeof mgnmsgbuf;
#endif

  /* Three stacks and their tools:
     `mgnss': related to states,
     `mgnvs': related to semantic values,
     `mgnls': related to locations.

     Refer to the stacks thru separate pointers, to allow mgnoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  mgntype_int16 mgnssa[MGNINITDEPTH];
  mgntype_int16 *mgnss = mgnssa;
  mgntype_int16 *mgnssp;

  /* The semantic value stack.  */
  MGNSTYPE mgnvsa[MGNINITDEPTH];
  MGNSTYPE *mgnvs = mgnvsa;
  MGNSTYPE *mgnvsp;



#define MGNPOPSTACK(N)   (mgnvsp -= (N), mgnssp -= (N))

  MGNSIZE_T mgnstacksize = MGNINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  MGNSTYPE mgnval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int mgnlen = 0;

  MGNDPRINTF ((stderr, "Starting parse\n"));

  mgnstate = 0;
  mgnerrstatus = 0;
  mgnnerrs = 0;
  mgnchar = MGNEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  mgnssp = mgnss;
  mgnvsp = mgnvs;

  goto mgnsetstate;

/*------------------------------------------------------------.
| mgnnewstate -- Push a new state, which is found in mgnstate.  |
`------------------------------------------------------------*/
 mgnnewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  mgnssp++;

 mgnsetstate:
  *mgnssp = mgnstate;

  if (mgnss + mgnstacksize - 1 <= mgnssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      MGNSIZE_T mgnsize = mgnssp - mgnss + 1;

#ifdef mgnoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	MGNSTYPE *mgnvs1 = mgnvs;
	mgntype_int16 *mgnss1 = mgnss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if mgnoverflow is a macro.  */
	mgnoverflow (MGN_("memory exhausted"),
		    &mgnss1, mgnsize * sizeof (*mgnssp),
		    &mgnvs1, mgnsize * sizeof (*mgnvsp),

		    &mgnstacksize);

	mgnss = mgnss1;
	mgnvs = mgnvs1;
      }
#else /* no mgnoverflow */
# ifndef MGNSTACK_RELOCATE
      goto mgnexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (MGNMAXDEPTH <= mgnstacksize)
	goto mgnexhaustedlab;
      mgnstacksize *= 2;
      if (MGNMAXDEPTH < mgnstacksize)
	mgnstacksize = MGNMAXDEPTH;

      {
	mgntype_int16 *mgnss1 = mgnss;
	union mgnalloc *mgnptr =
	  (union mgnalloc *) MGNSTACK_ALLOC (MGNSTACK_BYTES (mgnstacksize));
	if (! mgnptr)
	  goto mgnexhaustedlab;
	MGNSTACK_RELOCATE (mgnss);
	MGNSTACK_RELOCATE (mgnvs);

#  undef MGNSTACK_RELOCATE
	if (mgnss1 != mgnssa)
	  MGNSTACK_FREE (mgnss1);
      }
# endif
#endif /* no mgnoverflow */

      mgnssp = mgnss + mgnsize - 1;
      mgnvsp = mgnvs + mgnsize - 1;


      MGNDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) mgnstacksize));

      if (mgnss + mgnstacksize - 1 <= mgnssp)
	MGNABORT;
    }

  MGNDPRINTF ((stderr, "Entering state %d\n", mgnstate));

  goto mgnbackup;

/*-----------.
| mgnbackup.  |
`-----------*/
mgnbackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  mgnn = mgnpact[mgnstate];
  if (mgnn == MGNPACT_NINF)
    goto mgndefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* MGNCHAR is either MGNEMPTY or MGNEOF or a valid look-ahead symbol.  */
  if (mgnchar == MGNEMPTY)
    {
      MGNDPRINTF ((stderr, "Reading a token: "));
      mgnchar = MGNLEX;
    }

  if (mgnchar <= MGNEOF)
    {
      mgnchar = mgntoken = MGNEOF;
      MGNDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      mgntoken = MGNTRANSLATE (mgnchar);
      MGN_SYMBOL_PRINT ("Next token is", mgntoken, &mgnlval, &mgnlloc);
    }

  /* If the proper action on seeing token MGNTOKEN is to reduce or to
     detect an error, take that action.  */
  mgnn += mgntoken;
  if (mgnn < 0 || MGNLAST < mgnn || mgncheck[mgnn] != mgntoken)
    goto mgndefault;
  mgnn = mgntable[mgnn];
  if (mgnn <= 0)
    {
      if (mgnn == 0 || mgnn == MGNTABLE_NINF)
	goto mgnerrlab;
      mgnn = -mgnn;
      goto mgnreduce;
    }

  if (mgnn == MGNFINAL)
    MGNACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (mgnerrstatus)
    mgnerrstatus--;

  /* Shift the look-ahead token.  */
  MGN_SYMBOL_PRINT ("Shifting", mgntoken, &mgnlval, &mgnlloc);

  /* Discard the shifted token unless it is eof.  */
  if (mgnchar != MGNEOF)
    mgnchar = MGNEMPTY;

  mgnstate = mgnn;
  *++mgnvsp = mgnlval;

  goto mgnnewstate;


/*-----------------------------------------------------------.
| mgndefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
mgndefault:
  mgnn = mgndefact[mgnstate];
  if (mgnn == 0)
    goto mgnerrlab;
  goto mgnreduce;


/*-----------------------------.
| mgnreduce -- Do a reduction.  |
`-----------------------------*/
mgnreduce:
  /* mgnn is the number of a rule to reduce with.  */
  mgnlen = mgnr2[mgnn];

  /* If MGNLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets MGNVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to MGNVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that MGNVAL may be used uninitialized.  */
  mgnval = mgnvsp[1-mgnlen];


  MGN_REDUCE_PRINT (mgnn);
  switch (mgnn)
    {
        case 5:
#line 134 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			mbkfree((mgnvsp[(2) - (5)].s));
		}
    break;

  case 8:
#line 144 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			mbkfree((mgnvsp[(2) - (5)].s));
		}
    break;

  case 9:
#line 148 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			if (!strcmp((mgnvsp[(4) - (10)].s), "ref_ref") || !strcmp((mgnvsp[(4) - (10)].s), "ref_con"))
				addphref(mgleaf, (mgnvsp[(4) - (10)].s), checkrefname((mgnvsp[(2) - (10)].s)), (mgnvsp[(8) - (10)].p)->x, (mgnvsp[(8) - (10)].p)->y);
			else /* unknown internally! */
				addphins(mgleaf, (mgnvsp[(4) - (10)].s), checkinsname((mgnvsp[(2) - (10)].s)), (mgnvsp[(5) - (10)].n), (mgnvsp[(8) - (10)].p)->x, (mgnvsp[(8) - (10)].p)->y);
			mbkfree((mgnvsp[(2) - (10)].s));
			mbkfree((mgnvsp[(4) - (10)].s));
			mbkfree((mgnvsp[(8) - (10)].p));
		}
    break;

  case 11:
#line 161 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			if (strncmp((mgnvsp[(3) - (8)].s), "zd", 2)) {
				fprintf(stderr, "modgen parser warning : ra not for ab box\n");
				/* exit(18); */
			} else
				defab(mgleaf, (mgnvsp[(5) - (8)].p)->x, (mgnvsp[(7) - (8)].p)->x, (mgnvsp[(5) - (8)].p)->y, (mgnvsp[(7) - (8)].p)->y);
			mbkfree((mgnvsp[(3) - (8)].s));
			mbkfree((mgnvsp[(5) - (8)].p));
			mbkfree((mgnvsp[(7) - (8)].p));
		}
    break;

  case 12:
#line 172 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			if (strcmp((mgnvsp[(2) - (13)].s), "ul") && strcmp((mgnvsp[(2) - (13)].s), "ur")
					&& strcmp((mgnvsp[(2) - (13)].s), "lr") && strcmp((mgnvsp[(2) - (13)].s), "ll"))
				addphcon(mgleaf, (char)(mgnvsp[(8) - (13)].n), checkconname((mgnvsp[(2) - (13)].s)),
							(mgnvsp[(12) - (13)].p)->x, (mgnvsp[(12) - (13)].p)->y, mbk_layer((mgnvsp[(9) - (13)].s)), (mgnvsp[(6) - (13)].n)); 
			mbkfree((mgnvsp[(2) - (13)].s));
			mbkfree((mgnvsp[(9) - (13)].s));
			mbkfree((mgnvsp[(12) - (13)].p));
		}
    break;

  case 13:
#line 182 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
		char layer = mbk_layer((mgnvsp[(3) - (12)].s));
		int x1 = (mgnvsp[(9) - (12)].p)->x, y1 = (mgnvsp[(9) - (12)].p)->y, x2 = (mgnvsp[(11) - (12)].p)->x, y2 = (mgnvsp[(11) - (12)].p)->y;

			mbkfree((mgnvsp[(3) - (12)].s));
			mbkfree((mgnvsp[(9) - (12)].p));
			mbkfree((mgnvsp[(11) - (12)].p));
			if ((mgnvsp[(7) - (12)].n) == VERTI) {
				if (y2 > y1) {
					y2 -= Extension[(int)layer] * SCALE_X * TWO / 2;
					y1 += Extension[(int)layer] * SCALE_X * TWO / 2;
				} else {
					y2 += Extension[(int)layer] * SCALE_X * TWO / 2;
					y1 -= Extension[(int)layer] * SCALE_X * TWO / 2;
				}
			} else {
				if (x2 > x1) {
					x2 -= Extension[(int)layer] * SCALE_X * TWO / 2;
					x1 += Extension[(int)layer] * SCALE_X * TWO / 2;
				} else {
					x2 += Extension[(int)layer] * SCALE_X * TWO / 2;
					x1 -= Extension[(int)layer] * SCALE_X * TWO / 2;
				}
			}
			addphseg(mgleaf, layer, (mgnvsp[(5) - (12)].n), x1, y1, x2, y2, NULL);
		}
    break;

  case 14:
#line 208 "../../../src/mbkmg/src/mg2mbk_y.y"
    {pl = NULL;}
    break;

  case 15:
#line 209 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
		chain_list *l;
		int x1, y1, x2, y2;
		char layer = mbk_layer((mgnvsp[(4) - (9)].s));

			mbkfree((mgnvsp[(4) - (9)].s));
			/* points in inverted order, but doesn't matter, same algo */
			for (l = pl; l->NEXT; l = l->NEXT) {
				x1 = (int)((struct pxy *)(l->DATA))->x;
				y1 = (int)((struct pxy *)(l->DATA))->y;
				x2 = (int)((struct pxy *)(l->NEXT->DATA))->x;
				y2 = (int)((struct pxy *)(l->NEXT->DATA))->y;
				if (l == pl) { /* last point */
					if (x1 == x2) {
						if (y2 > y1) {
							y1 += Extension[(int)layer] * SCALE_X * TWO / 2;
						} else {
							y1 -= Extension[(int)layer] * SCALE_X * TWO / 2;
						}
					} else {
						if (x2 > x1) {
							x1 += Extension[(int)layer] * SCALE_X * TWO / 2;
						} else {
							x1 -= Extension[(int)layer] * SCALE_X * TWO / 2;
						}
					}
				}
				if (!l->NEXT->NEXT) { /* first point */
					if (x1 == x2) {
						if (y2 > y1) {
							y2 -= Extension[(int)layer] * SCALE_X * TWO / 2;
						} else {
							y2 += Extension[(int)layer] * SCALE_X * TWO / 2;
						}
					} else {
						if (x2 > x1) {
							x2 -= Extension[(int)layer] * SCALE_X * TWO / 2;
						} else {
							x2 += Extension[(int)layer] * SCALE_X * TWO / 2;
						}
					}
				}
				addphseg(mgleaf, layer, (mgnvsp[(6) - (9)].n), x1, y1, x2, y2, NULL);
			}
		}
    break;

  case 16:
#line 255 "../../../src/mbkmg/src/mg2mbk_y.y"
    { /* bounding box of transistors is knows for idps technology */
		float tx; /* used to compute transistor bbox */
		int x1, y1, x2, y2;

			/* +-----------+ when not placed yet */
			tx = ((float)(mgnvsp[(3) - (11)].n) / 2 + (float)O_PS_AA * SCALE_X * TWO);

			switch ((char)(mgnvsp[(7) - (11)].n)) {
				case NOSYM:
				case SYM_X:
				case SYM_Y:
				case SYMXY:
					y2 = y1 = (mgnvsp[(10) - (11)].p)->y;
					x1 = (mgnvsp[(10) - (11)].p)->x + tx;
					x2 = (mgnvsp[(10) - (11)].p)->x - tx;
					addphseg(mgleaf, NTRANS, (mgnvsp[(5) - (11)].n), x1, y1, x2, y2, NULL);
					break;
				case ROT_P:
				case ROT_M:
				case SY_RP:
				case SY_RM:
					x2 = x1 = (mgnvsp[(10) - (11)].p)->x;
					y1 = (mgnvsp[(10) - (11)].p)->y + tx;
					y2 = (mgnvsp[(10) - (11)].p)->y - tx;
					addphseg(mgleaf, NTRANS, (mgnvsp[(5) - (11)].n), x1, y1, x2, y2, NULL);
					break;
			}
			mbkfree((mgnvsp[(10) - (11)].p));
		}
    break;

  case 17:
#line 285 "../../../src/mbkmg/src/mg2mbk_y.y"
    { /* bounding box of transistors is knows for idps technology */
		float tx; /* used to compute transistor bbox */
		int x1, y1, x2, y2;

			/* +-----------+ when not placed yet */
			tx = ((float)(mgnvsp[(3) - (11)].n) / 2 + (float)O_PS_AA * SCALE_X * TWO);

			switch ((char)(mgnvsp[(7) - (11)].n)) {
				case NOSYM:
				case SYM_X:
				case SYM_Y:
				case SYMXY:
					y2 = y1 = (mgnvsp[(10) - (11)].p)->y;
					x1 = (mgnvsp[(10) - (11)].p)->x + tx;
					x2 = (mgnvsp[(10) - (11)].p)->x - tx;
					addphseg(mgleaf, PTRANS, (mgnvsp[(5) - (11)].n), x1, y1, x2, y2, NULL);
					break;
				case ROT_P:
				case ROT_M:
				case SY_RP:
				case SY_RM:
					x2 = x1 = (mgnvsp[(10) - (11)].p)->x;
					y1 = (mgnvsp[(10) - (11)].p)->y + tx;
					y2 = (mgnvsp[(10) - (11)].p)->y - tx;
					addphseg(mgleaf, PTRANS, (mgnvsp[(5) - (11)].n), x1, y1, x2, y2, NULL);
					break;
			}
			mbkfree((mgnvsp[(10) - (11)].p));
		}
    break;

  case 18:
#line 315 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			addphvia(mgleaf, CONT_DIF_P, (mgnvsp[(4) - (5)].p)->x, (mgnvsp[(4) - (5)].p)->y, 0, 0,NULL);
			mbkfree((mgnvsp[(4) - (5)].p));
		}
    break;

  case 19:
#line 320 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			addphvia(mgleaf, CONT_DIF_N, (mgnvsp[(4) - (5)].p)->x, (mgnvsp[(4) - (5)].p)->y, 0, 0,NULL);
			mbkfree((mgnvsp[(4) - (5)].p));
		}
    break;

  case 20:
#line 325 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			addphvia(mgleaf, CONT_POLY, (mgnvsp[(4) - (5)].p)->x, (mgnvsp[(4) - (5)].p)->y, 0, 0,NULL);
			mbkfree((mgnvsp[(4) - (5)].p));
		}
    break;

  case 21:
#line 330 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			addphvia(mgleaf, CONT_BODY_P, (mgnvsp[(4) - (5)].p)->x, (mgnvsp[(4) - (5)].p)->y, 0, 0,NULL);
			mbkfree((mgnvsp[(4) - (5)].p));
		}
    break;

  case 22:
#line 335 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			addphvia(mgleaf, CONT_BODY_N, (mgnvsp[(4) - (5)].p)->x, (mgnvsp[(4) - (5)].p)->y, 0, 0,NULL);
			mbkfree((mgnvsp[(4) - (5)].p));
		}
    break;

  case 23:
#line 340 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			addphvia(mgleaf, CONT_VIA, (mgnvsp[(4) - (5)].p)->x, (mgnvsp[(4) - (5)].p)->y, 0, 0,NULL);
			mbkfree((mgnvsp[(4) - (5)].p));
		}
    break;

  case 24:
#line 345 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			addphvia(mgleaf, C_X_N, (mgnvsp[(4) - (5)].p)->x, (mgnvsp[(4) - (5)].p)->y, 0, 0,NULL);
			mbkfree((mgnvsp[(4) - (5)].p));
		}
    break;

  case 25:
#line 350 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			addphvia(mgleaf, C_X_P, (mgnvsp[(4) - (5)].p)->x, (mgnvsp[(4) - (5)].p)->y, 0, 0,NULL);
			mbkfree((mgnvsp[(4) - (5)].p));
		}
    break;

  case 26:
#line 357 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
		struct pxy *pp;

			pp = (struct pxy *)mbkalloc(sizeof(struct pxy));
			pp->x = (mgnvsp[(1) - (3)].n);
			pp->y = (mgnvsp[(3) - (3)].n);
			(mgnval.p) = pp;
		}
    break;

  case 27:
#line 368 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			pl = addchain(pl, (void *)(mgnvsp[(1) - (1)].p));
		}
    break;

  case 28:
#line 372 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			pl = addchain(pl, (void *)(mgnvsp[(1) - (3)].p));
		}
    break;

  case 29:
#line 377 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)HORIZ;}
    break;

  case 30:
#line 378 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)VERTI;}
    break;

  case 31:
#line 381 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)WEST;}
    break;

  case 32:
#line 382 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)EAST;}
    break;

  case 33:
#line 383 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)SOUTH;}
    break;

  case 34:
#line 384 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)NORTH;}
    break;

  case 35:
#line 387 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)NOSYM;}
    break;

  case 36:
#line 389 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)SYM_Y;}
    break;

  case 37:
#line 391 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)SYM_X;}
    break;

  case 38:
#line 393 "../../../src/mbkmg/src/mg2mbk_y.y"
    {(mgnval.n) = (long)SYMXY;}
    break;

  case 39:
#line 395 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			if ((mgnvsp[(2) - (2)].n) / SCALE_X / TWO == 90)
				(mgnval.n) = (long)ROT_P;
			if ((mgnvsp[(2) - (2)].n) / SCALE_X / TWO == 270)
				(mgnval.n) = (long)ROT_M;
		}
    break;

  case 40:
#line 402 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			if ((mgnvsp[(3) - (3)].n) / SCALE_X / TWO == 90)
				(mgnval.n) = (long)SY_RM;
			if ((mgnvsp[(3) - (3)].n) / SCALE_X / TWO == 270)
				(mgnval.n) = (long)SY_RP;
		}
    break;

  case 41:
#line 409 "../../../src/mbkmg/src/mg2mbk_y.y"
    {
			if ((mgnvsp[(3) - (3)].n) / SCALE_X / TWO == 90)
				(mgnval.n) = (long)SY_RP;
			if ((mgnvsp[(3) - (3)].n) / SCALE_X / TWO == 270)
				(mgnval.n) = (long)SY_RM;
		}
    break;


/* Line 1267 of yacc.c.  */
#line 1904 "y.tab.c"
      default: break;
    }
  MGN_SYMBOL_PRINT ("-> $$ =", mgnr1[mgnn], &mgnval, &mgnloc);

  MGNPOPSTACK (mgnlen);
  mgnlen = 0;
  MGN_STACK_PRINT (mgnss, mgnssp);

  *++mgnvsp = mgnval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  mgnn = mgnr1[mgnn];

  mgnstate = mgnpgoto[mgnn - MGNNTOKENS] + *mgnssp;
  if (0 <= mgnstate && mgnstate <= MGNLAST && mgncheck[mgnstate] == *mgnssp)
    mgnstate = mgntable[mgnstate];
  else
    mgnstate = mgndefgoto[mgnn - MGNNTOKENS];

  goto mgnnewstate;


/*------------------------------------.
| mgnerrlab -- here on detecting error |
`------------------------------------*/
mgnerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!mgnerrstatus)
    {
      ++mgnnerrs;
#if ! MGNERROR_VERBOSE
      mgnerror (MGN_("syntax error"));
#else
      {
	MGNSIZE_T mgnsize = mgnsyntax_error (0, mgnstate, mgnchar);
	if (mgnmsg_alloc < mgnsize && mgnmsg_alloc < MGNSTACK_ALLOC_MAXIMUM)
	  {
	    MGNSIZE_T mgnalloc = 2 * mgnsize;
	    if (! (mgnsize <= mgnalloc && mgnalloc <= MGNSTACK_ALLOC_MAXIMUM))
	      mgnalloc = MGNSTACK_ALLOC_MAXIMUM;
	    if (mgnmsg != mgnmsgbuf)
	      MGNSTACK_FREE (mgnmsg);
	    mgnmsg = (char *) MGNSTACK_ALLOC (mgnalloc);
	    if (mgnmsg)
	      mgnmsg_alloc = mgnalloc;
	    else
	      {
		mgnmsg = mgnmsgbuf;
		mgnmsg_alloc = sizeof mgnmsgbuf;
	      }
	  }

	if (0 < mgnsize && mgnsize <= mgnmsg_alloc)
	  {
	    (void) mgnsyntax_error (mgnmsg, mgnstate, mgnchar);
	    mgnerror (mgnmsg);
	  }
	else
	  {
	    mgnerror (MGN_("syntax error"));
	    if (mgnsize != 0)
	      goto mgnexhaustedlab;
	  }
      }
#endif
    }



  if (mgnerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (mgnchar <= MGNEOF)
	{
	  /* Return failure if at end of input.  */
	  if (mgnchar == MGNEOF)
	    MGNABORT;
	}
      else
	{
	  mgndestruct ("Error: discarding",
		      mgntoken, &mgnlval);
	  mgnchar = MGNEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto mgnerrlab1;


/*---------------------------------------------------.
| mgnerrorlab -- error raised explicitly by MGNERROR.  |
`---------------------------------------------------*/
mgnerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     MGNERROR and the label mgnerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto mgnerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this MGNERROR.  */
  MGNPOPSTACK (mgnlen);
  mgnlen = 0;
  MGN_STACK_PRINT (mgnss, mgnssp);
  mgnstate = *mgnssp;
  goto mgnerrlab1;


/*-------------------------------------------------------------.
| mgnerrlab1 -- common code for both syntax error and MGNERROR.  |
`-------------------------------------------------------------*/
mgnerrlab1:
  mgnerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      mgnn = mgnpact[mgnstate];
      if (mgnn != MGNPACT_NINF)
	{
	  mgnn += MGNTERROR;
	  if (0 <= mgnn && mgnn <= MGNLAST && mgncheck[mgnn] == MGNTERROR)
	    {
	      mgnn = mgntable[mgnn];
	      if (0 < mgnn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (mgnssp == mgnss)
	MGNABORT;


      mgndestruct ("Error: popping",
		  mgnstos[mgnstate], mgnvsp);
      MGNPOPSTACK (1);
      mgnstate = *mgnssp;
      MGN_STACK_PRINT (mgnss, mgnssp);
    }

  if (mgnn == MGNFINAL)
    MGNACCEPT;

  *++mgnvsp = mgnlval;


  /* Shift the error token.  */
  MGN_SYMBOL_PRINT ("Shifting", mgnstos[mgnn], mgnvsp, mgnlsp);

  mgnstate = mgnn;
  goto mgnnewstate;


/*-------------------------------------.
| mgnacceptlab -- MGNACCEPT comes here.  |
`-------------------------------------*/
mgnacceptlab:
  mgnresult = 0;
  goto mgnreturn;

/*-----------------------------------.
| mgnabortlab -- MGNABORT comes here.  |
`-----------------------------------*/
mgnabortlab:
  mgnresult = 1;
  goto mgnreturn;

#ifndef mgnoverflow
/*-------------------------------------------------.
| mgnexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
mgnexhaustedlab:
  mgnerror (MGN_("memory exhausted"));
  mgnresult = 2;
  /* Fall through.  */
#endif

mgnreturn:
  if (mgnchar != MGNEOF && mgnchar != MGNEMPTY)
     mgndestruct ("Cleanup: discarding lookahead",
		 mgntoken, &mgnlval);
  /* Do not reclaim the symbols of the rule which action triggered
     this MGNABORT or MGNACCEPT.  */
  MGNPOPSTACK (mgnlen);
  MGN_STACK_PRINT (mgnss, mgnssp);
  while (mgnssp != mgnss)
    {
      mgndestruct ("Cleanup: popping",
		  mgnstos[*mgnssp], mgnvsp);
      MGNPOPSTACK (1);
    }
#ifndef mgnoverflow
  if (mgnss != mgnssa)
    MGNSTACK_FREE (mgnss);
#endif
#if MGNERROR_VERBOSE
  if (mgnmsg != mgnmsgbuf)
    MGNSTACK_FREE (mgnmsg);
#endif
  /* Make sure MGNID is used.  */
  return MGNID (mgnresult);
}


#line 417 "../../../src/mbkmg/src/mg2mbk_y.y"

char *
	filenameforlex()
{
	return mgleaf->NAME;
}

void
	mgnloadphfig(fig, name, mode)
phfig_list *fig;
char *name;
char mode;
{
extern FILE *mgnin; /* declared in the lex.mgn.c by default */
extern int mgnlineno;
chain_list *c;

	mgleaf = fig;
	if ((mgnin = mbkfopen(name, IN_PH, READ_TEXT)) == NULL) {
		fflush(stdout);
		fprintf(stderr,
			"*** mbk error *** modgen parser failed opening file %s.%s\n",
			name, IN_PH);
		EXIT(1);
	}
	mgnlineno = 0;
	if (mgnparse()) {
		fflush(stdout);
		fprintf(stderr,
			"*** mbk error *** modgen parser failed while reading file %s\n",
			filepath(name, IN_PH));
		EXIT(1);
	}
	(void)fclose(mgnin);
	/* free :
	   temporary space for point list must be freed. */
	for (c = pl; c; c = c->NEXT)
		mbkfree(c->DATA);
	freechain(pl);
	/* not so nice :
	   It would be nice if I'd parse only the necessary stuff when reading
	   the file, but it's a little painful, and would need some checks
	   I can't afford right now. */
	if (mode == 'P') {
	void **ppobj;
	void *next;

		/* delete instances */
		for (ppobj = (void**)&HEAD_PHFIG->PHINS; *ppobj != NULL;) {
			next = (void *)((phins_list *)*ppobj)->NEXT;
			mbkfree((phins_list *)*ppobj);
			*ppobj = next;
		}

		/* delete vias */
		for (ppobj = (void**)&HEAD_PHFIG->PHVIA; *ppobj != NULL;) {
			next = (void *)((phvia_list *)*ppobj)->NEXT;
			mbkfree((phvia_list *)*ppobj);
			*ppobj = next;
		}

		/* delete segments */
		for (ppobj = (void**)&HEAD_PHFIG->PHSEG; *ppobj != NULL;) {
			if (((phseg_list *)*ppobj)->LAYER != TPOLY
					&& ((phseg_list *)*ppobj)->LAYER != TALU1
					&& ((phseg_list *)*ppobj)->LAYER != TALU2
					&& ((phseg_list *)*ppobj)->LAYER != TALU3) {
				next = (void *)((phseg_list *)*ppobj)->NEXT;
				mbkfree((phseg_list *)*ppobj);
				*ppobj = next;
			} else
				ppobj = (void **)&((phseg_list *)*ppobj)->NEXT;
		}
	}
	/* mbk strategy :
	   only one cell per modgen file. */
	fig = HEAD_PHFIG;
}

static char
	mbk_layer(mg_layer)
char *mg_layer;
{
	if (!strcmp(mg_layer, "nw"))
		return NWELL;
	if (!strcmp(mg_layer, "pw"))
		return PWELL;
	if (!strcmp(mg_layer, "xn"))
		return NTIE;
	if (!strcmp(mg_layer, "xp"))
		return PTIE;
	if (!strcmp(mg_layer, "nn"))
		return NDIF;
	if (!strcmp(mg_layer, "pp"))
		return PDIF;
	if (!strcmp(mg_layer, "ps"))
		return POLY;
	if (!strcmp(mg_layer, "m1"))
		return ALU1;
	if (!strcmp(mg_layer, "m2"))
		return ALU2;
	if (!strcmp(mg_layer, "m3"))
		return ALU3;
	if (!strcmp(mg_layer, "am1"))
		return TALU1;
	if (!strcmp(mg_layer, "am2"))
		return TALU2;
	if (!strcmp(mg_layer, "am3"))
		return TALU3;
}

/* decode a reference name :
   xxx[?]          -> xxx
   xxx[?][??]      -> xxx ?,
   xxx[?][??][???] -> xxx ?_??.
   I always have added an index since here also two instances can't have
   the same name. */

static char
	*checkrefname(name)
char *name;
{
char *s, *t, *u = NULL;
char one = 0;

   s = t = name;

   while (*t) {
      if (*t == '[')
			if (!one) {
         	*t = ' ';
				u = s;
				one = 1;
			} else if (one == 1) {
         	*t = '_';
				u = s;
				one++;
			} else {
         	*t = ' ';
				u = s;
			}
      else if (*t == ']')
         if (*(++t) == '\0') /* ok, it's finished */
            goto end;
         else if (*t == '[') /* multiple array */
            continue;
      *s++ = *t++;
   }
end:
   *s = '\0';
	/* last vectorized value :
	   it shall be skipped since I introduced it while driving the file. */
	if (u)
   	*u = '\0';
   return name;
}

/* decode a connector name :
   in modgen, 'cause we haven't the same conventions, a by me driven
   connector has the forms :
   xxx[?] -> xxx, where ? is a number, because I suffix all connectors that
                  way.
   xxx[??][?] -> xxx[??], because this was previously a vector. */

static char
	*checkconname(name)
char *name;
{
char *s, *t, *u = NULL;

   s = t = name;
   while (*t) {
      if (*t == '[') {
        	*t = ' ';
			u = s; /* last vector at that time */
      } else if (*t == ']') {
         if (*(++t) == '\0') /* ok, it's finished */
            goto end;
         else if (*t == '[') /* multiple array */
            continue;
		}
      *s++ = *t++;
   }
end:
   *s = '\0';
	/* last vectorized value :
	   it shall be skipped since I introduced it while driving the file. */
	if (u)
   	*u = '\0';
   return name;
}

/* decode an instance name :
   in modgen, 'cause we haven't the same conventions, a by me driven
   instance has the forms :
   xxx.corner
	since I arranged to put the corner in such a place that it makes it
   automatically good for mbk, I just forgot about the corner. */

static char
	*checkinsname(name)
char *name;
{
char *s = name;

	s = strrchr(name, '.');
   *s = '\0';
   return name;
}

