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

/* All symbols defined below should begin with vrd_y_ or VRD_Y_, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define VRD_Y_BISON 1

/* Bison version.  */
#define VRD_Y_BISON_VERSION "2.3"

/* Skeleton name.  */
#define VRD_Y_SKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define VRD_Y_PURE 0

/* Using locations.  */
#define VRD_Y_LSP_NEEDED 0



/* Tokens.  */
#ifndef VRD_Y_TOKENTYPE
# define VRD_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum vrd_y_tokentype {
     DRUC_REGLES = 258,
     DRUC_FIN = 259,
     DRUC_REGLE = 260,
     DRUC_DEFINE = 261,
     DRUC_UNDEFINE = 262,
     DRUC_CARACTERISE = 263,
     DRUC_RELATION = 264,
     DRUC_LAYER = 265,
     DRUC_NOM = 266,
     DRUC_UNION = 267,
     DRUC_EXCLUSION = 268,
     DRUC_RESIZE = 269,
     DRUC_ENVELOPPE = 270,
     DRUC_MARGE = 271,
     DRUC_CROIX = 272,
     DRUC_INTERSECT = 273,
     DRUC_EXTENSION = 274,
     DRUC_INCLUSION = 275,
     DRUC_DISTANCE = 276,
     DRUC_SURFACE_INTER = 277,
     DRUC_LONG_INTER = 278,
     DRUC_LARGE_INTER = 279,
     DRUC_PENET_INTER = 280,
     DRUC_PARAL_INTER = 281,
     DRUC_PERPEN_INTER = 282,
     DRUC_FRONTALE = 283,
     DRUC_LATERALE_MIN = 284,
     DRUC_LATERALE_MAX = 285,
     DRUC_LARGEUR_MIN = 286,
     DRUC_LARGEUR_MAX = 287,
     DRUC_LONGUEUR_MIN = 288,
     DRUC_LONGUEUR_MAX = 289,
     DRUC_SUP = 290,
     DRUC_INF = 291,
     DRUC_AXIALE = 292,
     DRUC_GEODESIQUE = 293,
     DRUC_SURFACE = 294,
     DRUC_LONGUEUR = 295,
     DRUC_LARGEUR = 296,
     DRUC_MIN = 297,
     DRUC_MAX = 298,
     DRUC_INFEQ = 299,
     DRUC_SUPEQ = 300,
     DRUC_DIFF = 301,
     DRUC_NOTCH = 302,
     DRUC_DESTINATION = 303,
     DRUC_ENTIER = 304,
     DRUC_FLOAT = 305,
     DRUC_NEG_FLOAT = 306
   };
#endif
/* Tokens.  */
#define DRUC_REGLES 258
#define DRUC_FIN 259
#define DRUC_REGLE 260
#define DRUC_DEFINE 261
#define DRUC_UNDEFINE 262
#define DRUC_CARACTERISE 263
#define DRUC_RELATION 264
#define DRUC_LAYER 265
#define DRUC_NOM 266
#define DRUC_UNION 267
#define DRUC_EXCLUSION 268
#define DRUC_RESIZE 269
#define DRUC_ENVELOPPE 270
#define DRUC_MARGE 271
#define DRUC_CROIX 272
#define DRUC_INTERSECT 273
#define DRUC_EXTENSION 274
#define DRUC_INCLUSION 275
#define DRUC_DISTANCE 276
#define DRUC_SURFACE_INTER 277
#define DRUC_LONG_INTER 278
#define DRUC_LARGE_INTER 279
#define DRUC_PENET_INTER 280
#define DRUC_PARAL_INTER 281
#define DRUC_PERPEN_INTER 282
#define DRUC_FRONTALE 283
#define DRUC_LATERALE_MIN 284
#define DRUC_LATERALE_MAX 285
#define DRUC_LARGEUR_MIN 286
#define DRUC_LARGEUR_MAX 287
#define DRUC_LONGUEUR_MIN 288
#define DRUC_LONGUEUR_MAX 289
#define DRUC_SUP 290
#define DRUC_INF 291
#define DRUC_AXIALE 292
#define DRUC_GEODESIQUE 293
#define DRUC_SURFACE 294
#define DRUC_LONGUEUR 295
#define DRUC_LARGEUR 296
#define DRUC_MIN 297
#define DRUC_MAX 298
#define DRUC_INFEQ 299
#define DRUC_SUPEQ 300
#define DRUC_DIFF 301
#define DRUC_NOTCH 302
#define DRUC_DESTINATION 303
#define DRUC_ENTIER 304
#define DRUC_FLOAT 305
#define DRUC_NEG_FLOAT 306




/* Copy the first part of user declarations.  */
#line 1 "../../../src/druc/src/drucompi_y.y"

#include <stdio.h>
#include "mph.h"
#include "mut.h"
#include "rds.h"
#include "rwi.h"
#include "rut.h"
#include "rtl.h"
#include "rfm.h"
#include "rpr.h"
#include "drucutil.h"
#include "drucompi.h"

/*------------------------------------------------------------\
|                                                             |
|                  Druc MODIFICATIONS                         |
|                                                             |
|  Patrick: 07/03/94                                          |
|    Ajouter DRUC_FRONTALE et DRUC_LATERALE_MIN               |
|    qui etaient oublies dans les derivations                 |
|                                                             |
\------------------------------------------------------------*/
/*------------------------------------------------------------\
|                                                             |
|                  Druc Variables LEX/YACC                    |
|                                                             |
\------------------------------------------------------------*/
extern int   vrd_y_lineno;
extern FILE *vrd_y_in;
       int   DrucIndexMesure;
       int   DrucInputEntier;
       int   DrucNegatif;
       float DrucInputFloat;
       char  DrucInputChaine[DRUC_MAX_STRING_BUFFER + 1];


/* Enabling traces.  */
#ifndef VRD_Y_DEBUG
# define VRD_Y_DEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef VRD_Y_ERROR_VERBOSE
# undef VRD_Y_ERROR_VERBOSE
# define VRD_Y_ERROR_VERBOSE 1
#else
# define VRD_Y_ERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef VRD_Y_TOKEN_TABLE
# define VRD_Y_TOKEN_TABLE 0
#endif

#if ! defined VRD_Y_STYPE && ! defined VRD_Y_STYPE_IS_DECLARED
typedef int VRD_Y_STYPE;
# define vrd_y_stype VRD_Y_STYPE /* obsolescent; will be withdrawn */
# define VRD_Y_STYPE_IS_DECLARED 1
# define VRD_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 244 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef VRD_Y_TYPE_UINT8
typedef VRD_Y_TYPE_UINT8 vrd_y_type_uint8;
#else
typedef unsigned char vrd_y_type_uint8;
#endif

#ifdef VRD_Y_TYPE_INT8
typedef VRD_Y_TYPE_INT8 vrd_y_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char vrd_y_type_int8;
#else
typedef short int vrd_y_type_int8;
#endif

#ifdef VRD_Y_TYPE_UINT16
typedef VRD_Y_TYPE_UINT16 vrd_y_type_uint16;
#else
typedef unsigned short int vrd_y_type_uint16;
#endif

#ifdef VRD_Y_TYPE_INT16
typedef VRD_Y_TYPE_INT16 vrd_y_type_int16;
#else
typedef short int vrd_y_type_int16;
#endif

#ifndef VRD_Y_SIZE_T
# ifdef __SIZE_TYPE__
#  define VRD_Y_SIZE_T __SIZE_TYPE__
# elif defined size_t
#  define VRD_Y_SIZE_T size_t
# elif ! defined VRD_Y_SIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define VRD_Y_SIZE_T size_t
# else
#  define VRD_Y_SIZE_T unsigned int
# endif
#endif

#define VRD_Y_SIZE_MAXIMUM ((VRD_Y_SIZE_T) -1)

#ifndef VRD_Y__
# if VRD_Y_ENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define VRD_Y__(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef VRD_Y__
#  define VRD_Y__(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define VRD_Y_USE(e) ((void) (e))
#else
# define VRD_Y_USE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define VRD_Y_ID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
VRD_Y_ID (int i)
#else
static int
VRD_Y_ID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined vrd_y_overflow || VRD_Y_ERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef VRD_Y_STACK_USE_ALLOCA
#  if VRD_Y_STACK_USE_ALLOCA
#   ifdef __GNUC__
#    define VRD_Y_STACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define VRD_Y_STACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define VRD_Y_STACK_ALLOC alloca
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

# ifdef VRD_Y_STACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define VRD_Y_STACK_FREE(Ptr) do { /* empty */; } while (VRD_Y_ID (0))
#  ifndef VRD_Y_STACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define VRD_Y_STACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define VRD_Y_STACK_ALLOC VRD_Y_MALLOC
#  define VRD_Y_STACK_FREE VRD_Y_FREE
#  ifndef VRD_Y_STACK_ALLOC_MAXIMUM
#   define VRD_Y_STACK_ALLOC_MAXIMUM VRD_Y_SIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined VRD_Y_MALLOC || defined malloc) \
	     && (defined VRD_Y_FREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef VRD_Y_MALLOC
#   define VRD_Y_MALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (VRD_Y_SIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef VRD_Y_FREE
#   define VRD_Y_FREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined vrd_y_overflow || VRD_Y_ERROR_VERBOSE */


#if (! defined vrd_y_overflow \
     && (! defined __cplusplus \
	 || (defined VRD_Y_STYPE_IS_TRIVIAL && VRD_Y_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union vrd_y_alloc
{
  vrd_y_type_int16 vrd_y_ss;
  VRD_Y_STYPE vrd_y_vs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define VRD_Y_STACK_GAP_MAXIMUM (sizeof (union vrd_y_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define VRD_Y_STACK_BYTES(N) \
     ((N) * (sizeof (vrd_y_type_int16) + sizeof (VRD_Y_STYPE)) \
      + VRD_Y_STACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef VRD_Y_COPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define VRD_Y_COPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define VRD_Y_COPY(To, From, Count)		\
      do					\
	{					\
	  VRD_Y_SIZE_T vrd_y_i;				\
	  for (vrd_y_i = 0; vrd_y_i < (Count); vrd_y_i++)	\
	    (To)[vrd_y_i] = (From)[vrd_y_i];		\
	}					\
      while (VRD_Y_ID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables VRD_Y_SIZE and VRD_Y_STACKSIZE give the old and new number of
   elements in the stack, and VRD_Y_PTR gives the new location of the
   stack.  Advance VRD_Y_PTR to a properly aligned location for the next
   stack.  */
# define VRD_Y_STACK_RELOCATE(Stack)					\
    do									\
      {									\
	VRD_Y_SIZE_T vrd_y_newbytes;						\
	VRD_Y_COPY (&vrd_y_ptr->Stack, Stack, vrd_y_size);				\
	Stack = &vrd_y_ptr->Stack;						\
	vrd_y_newbytes = vrd_y_stacksize * sizeof (*Stack) + VRD_Y_STACK_GAP_MAXIMUM; \
	vrd_y_ptr += vrd_y_newbytes / sizeof (*vrd_y_ptr);				\
      }									\
    while (VRD_Y_ID (0))

#endif

/* VRD_Y_FINAL -- State number of the termination state.  */
#define VRD_Y_FINAL  3
/* VRD_Y_LAST -- Last index in VRD_Y_TABLE.  */
#define VRD_Y_LAST   101

/* VRD_Y_NTOKENS -- Number of terminals.  */
#define VRD_Y_NTOKENS  60
/* VRD_Y_NNTS -- Number of nonterminals.  */
#define VRD_Y_NNTS  42
/* VRD_Y_NRULES -- Number of rules.  */
#define VRD_Y_NRULES  90
/* VRD_Y_NRULES -- Number of states.  */
#define VRD_Y_NSTATES  136

/* VRD_Y_TRANSLATE(VRD_Y_LEX) -- Bison symbol number corresponding to VRD_Y_LEX.  */
#define VRD_Y_UNDEFTOK  2
#define VRD_Y_MAXUTOK   306

#define VRD_Y_TRANSLATE(VRD_Y_X)						\
  ((unsigned int) (VRD_Y_X) <= VRD_Y_MAXUTOK ? vrd_y_translate[VRD_Y_X] : VRD_Y_UNDEFTOK)

/* VRD_Y_TRANSLATE[VRD_Y_LEX] -- Bison symbol number corresponding to VRD_Y_LEX.  */
static const vrd_y_type_uint8 vrd_y_translate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,     2,     2,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    52,
      57,    59,    58,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if VRD_Y_DEBUG
/* VRD_Y_PRHS[VRD_Y_N] -- Index of the first RHS symbol of rule number VRD_Y_N in
   VRD_Y_RHS.  */
static const vrd_y_type_uint8 vrd_y_prhs[] =
{
       0,     0,     3,     4,    11,    14,    16,    17,    18,    25,
      28,    30,    32,    34,    36,    38,    39,    40,    50,    54,
      55,    59,    61,    63,    64,    65,    71,    72,    74,    76,
      78,    80,    82,    83,    88,    89,    97,   100,   102,   103,
     104,   105,   116,   117,   118,   119,   131,   134,   136,   137,
     138,   139,   151,   153,   155,   157,   159,   161,   163,   165,
     167,   169,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   189,   191,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   217,   219,   221,   223,   225,
     227
};

/* VRD_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const vrd_y_type_int8 vrd_y_rhs[] =
{
      61,     0,    -1,    -1,    62,    63,     3,    67,     4,     3,
      -1,    63,    64,    -1,    64,    -1,    -1,    -1,    10,    11,
      65,    50,    66,    52,    -1,    67,    68,    -1,    68,    -1,
      69,    -1,    80,    -1,    82,    -1,    89,    -1,    -1,    -1,
       6,    11,    70,    53,    72,    48,    11,    71,    52,    -1,
      74,    79,    75,    -1,    -1,    11,    73,    78,    -1,    50,
      -1,    51,    -1,    -1,    -1,    53,    76,    11,    77,    78,
      -1,    -1,    12,    -1,    18,    -1,    13,    -1,    20,    -1,
      14,    -1,    -1,     7,    11,    81,    52,    -1,    -1,     8,
      11,    83,    54,    84,    55,    52,    -1,    84,    85,    -1,
      85,    -1,    -1,    -1,    -1,     5,    86,    49,    87,    56,
     100,   101,    50,    88,    52,    -1,    -1,    -1,    -1,     9,
      90,    11,    91,    53,    11,    92,    54,    93,    55,    52,
      -1,    93,    94,    -1,    94,    -1,    -1,    -1,    -1,     5,
      95,    49,    96,    56,    98,    99,   101,    50,    97,    52,
      -1,    21,    -1,    18,    -1,    19,    -1,    20,    -1,    15,
      -1,    16,    -1,    17,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    33,    -1,    34,
      -1,    31,    -1,    32,    -1,    28,    -1,    29,    -1,    30,
      -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,    39,
      -1,    40,    -1,    41,    -1,    47,    -1,    22,    -1,    23,
      -1,    24,    -1,    42,    -1,    43,    -1,    44,    -1,    45,
      -1,    57,    -1,    58,    -1,    59,    -1,    46,    -1
};

/* VRD_Y_RLINE[VRD_Y_N] -- source line where rule number VRD_Y_N was defined.  */
static const vrd_y_type_uint16 vrd_y_rline[] =
{
       0,    93,    93,    93,   102,   103,   107,   108,   106,   112,
     114,   117,   118,   119,   120,   124,   128,   123,   132,   135,
     135,   139,   140,   145,   146,   145,   148,   151,   152,   153,
     154,   157,   161,   160,   166,   165,   175,   177,   180,   181,
     186,   180,   191,   192,   194,   191,   202,   204,   207,   208,
     214,   207,   219,   221,   223,   225,   227,   229,   231,   235,
     237,   239,   241,   243,   245,   247,   249,   251,   253,   255,
     257,   259,   261,   263,   265,   267,   271,   273,   275,   277,
     279,   281,   283,   287,   289,   291,   293,   295,   297,   299,
     301
};
#endif

#if VRD_Y_DEBUG || VRD_Y_ERROR_VERBOSE || VRD_Y_TOKEN_TABLE
/* VRD_Y_TNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at VRD_Y_NTOKENS, nonterminals.  */
static const char *const vrd_y_tname[] =
{
  "$end", "error", "$undefined", "DRUC_REGLES", "DRUC_FIN", "DRUC_REGLE",
  "DRUC_DEFINE", "DRUC_UNDEFINE", "DRUC_CARACTERISE", "DRUC_RELATION",
  "DRUC_LAYER", "DRUC_NOM", "DRUC_UNION", "DRUC_EXCLUSION", "DRUC_RESIZE",
  "DRUC_ENVELOPPE", "DRUC_MARGE", "DRUC_CROIX", "DRUC_INTERSECT",
  "DRUC_EXTENSION", "DRUC_INCLUSION", "DRUC_DISTANCE",
  "DRUC_SURFACE_INTER", "DRUC_LONG_INTER", "DRUC_LARGE_INTER",
  "DRUC_PENET_INTER", "DRUC_PARAL_INTER", "DRUC_PERPEN_INTER",
  "DRUC_FRONTALE", "DRUC_LATERALE_MIN", "DRUC_LATERALE_MAX",
  "DRUC_LARGEUR_MIN", "DRUC_LARGEUR_MAX", "DRUC_LONGUEUR_MIN",
  "DRUC_LONGUEUR_MAX", "DRUC_SUP", "DRUC_INF", "DRUC_AXIALE",
  "DRUC_GEODESIQUE", "DRUC_SURFACE", "DRUC_LONGUEUR", "DRUC_LARGEUR",
  "DRUC_MIN", "DRUC_MAX", "DRUC_INFEQ", "DRUC_SUPEQ", "DRUC_DIFF",
  "DRUC_NOTCH", "DRUC_DESTINATION", "DRUC_ENTIER", "DRUC_FLOAT",
  "DRUC_NEG_FLOAT", "';'", "','", "'('", "')'", "':'", "'<'", "'>'", "'='",
  "$accept", "drc", "@1", "list_layer", "layer", "@2", "@3", "list_bloc",
  "bloc", "define", "@4", "@5", "resiz", "@6", "valresiz", "defoper", "@7",
  "@8", "compose", "defmodif", "undefine", "@9", "caracter", "@10",
  "lst_rgl_1", "regle_1", "@11", "@12", "@13", "relation", "@14", "@15",
  "@16", "lst_rgl_2", "regle_2", "@17", "@18", "@19", "config",
  "mesure_rel", "mesure", "compar", 0
};
#endif

# ifdef VRD_Y_PRINT
/* VRD_Y_TOKNUM[VRD_Y_LEX-NUM] -- Internal token number corresponding to
   token VRD_Y_LEX-NUM.  */
static const vrd_y_type_uint16 vrd_y_toknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,    59,    44,    40,    41,    58,    60,    62,    61
};
# endif

/* VRD_Y_R1[VRD_Y_N] -- Symbol number of symbol that rule VRD_Y_N derives.  */
static const vrd_y_type_uint8 vrd_y_r1[] =
{
       0,    60,    62,    61,    63,    63,    65,    66,    64,    67,
      67,    68,    68,    68,    68,    70,    71,    69,    72,    73,
      72,    74,    74,    76,    77,    75,    75,    78,    78,    78,
      78,    79,    81,    80,    83,    82,    84,    84,    86,    87,
      88,    85,    90,    91,    92,    89,    93,    93,    95,    96,
      97,    94,    98,    98,    98,    98,    98,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101
};

/* VRD_Y_R2[VRD_Y_N] -- Number of symbols composing right hand side of rule VRD_Y_N.  */
static const vrd_y_type_uint8 vrd_y_r2[] =
{
       0,     2,     0,     6,     2,     1,     0,     0,     6,     2,
       1,     1,     1,     1,     1,     0,     0,     9,     3,     0,
       3,     1,     1,     0,     0,     5,     0,     1,     1,     1,
       1,     1,     0,     4,     0,     7,     2,     1,     0,     0,
       0,    10,     0,     0,     0,    11,     2,     1,     0,     0,
       0,    11,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* VRD_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when VRD_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const vrd_y_type_uint8 vrd_y_defact[] =
{
       2,     0,     0,     1,     0,     0,     5,     6,     0,     4,
       0,     0,     0,     0,    42,     0,    10,    11,    12,    13,
      14,     7,    15,    32,    34,     0,     0,     9,     0,     0,
       0,     0,    43,     3,     8,     0,    33,     0,     0,    19,
      21,    22,     0,     0,    38,     0,    37,     0,     0,     0,
      31,    26,     0,     0,    36,    44,    27,    29,    28,    30,
      20,    16,    23,    18,    39,    35,     0,     0,     0,     0,
       0,    17,    24,     0,    48,     0,    47,     0,    80,    81,
      82,    76,    77,    78,    79,     0,     0,     0,    46,    25,
      83,    84,    85,    86,    90,    87,    88,    89,     0,    49,
      45,    40,     0,     0,     0,    41,    56,    57,    58,    53,
      54,    55,    52,     0,    59,    60,    61,    62,    63,    64,
      69,    70,    71,    67,    68,    65,    66,    72,    73,    74,
      75,     0,     0,    50,     0,    51
};

/* VRD_Y_DEFGOTO[NTERM-NUM].  */
static const vrd_y_type_int16 vrd_y_defgoto[] =
{
      -1,     1,     2,     5,     6,    10,    28,    15,    16,    17,
      29,    67,    42,    48,    43,    63,    68,    77,    60,    51,
      18,    30,    19,    31,    45,    46,    52,    69,   103,    20,
      25,    38,    66,    75,    76,    86,   102,   134,   113,   131,
      85,    98
};

/* VRD_Y_PACT[STATE-NUM] -- Index in VRD_Y_TABLE of the portion describing
   STATE-NUM.  */
#define VRD_Y_PACT_NINF -35
static const vrd_y_type_int8 vrd_y_pact[] =
{
     -35,     7,     5,   -35,    18,     3,   -35,   -35,    29,   -35,
     -20,    20,    22,    58,   -35,    10,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,    59,    36,   -35,   -12,    19,
      21,    17,   -35,   -35,   -35,    -9,   -35,    69,    23,   -35,
     -35,   -35,    27,    63,   -35,    -5,   -35,    67,    14,    68,
     -35,    31,    32,    33,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,    26,    34,    71,    35,
      78,   -35,   -35,   -19,   -35,    -4,   -35,    14,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -34,    38,    37,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,    40,   -35,
     -35,   -35,    39,    41,    28,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,    30,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -34,    42,   -35,    44,   -35
};

/* VRD_Y_PGOTO[NTERM-NUM].  */
static const vrd_y_type_int8 vrd_y_pgoto[] =
{
     -35,   -35,   -35,   -35,    83,   -35,   -35,   -35,    79,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,    24,   -35,
     -35,   -35,   -35,   -35,   -35,    52,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,    25,   -35,   -35,   -35,   -35,   -35,
     -35,   -33
};

/* VRD_Y_TABLE[VRD_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what VRD_Y_DEFACT says.
   If VRD_Y_TABLE_NINF, syntax error.  */
#define VRD_Y_TABLE_NINF -1
static const vrd_y_type_uint8 vrd_y_table[] =
{
      44,    74,    39,    78,    79,    80,     8,     3,    90,    91,
      92,    93,    94,     4,    26,     4,    11,    12,    13,    14,
      81,    82,    83,    95,    96,    97,    56,    57,    84,     7,
      21,    22,    58,    23,    59,    11,    12,    13,    14,    33,
      34,    40,    41,   106,   107,   108,   109,   110,   111,   112,
      53,    87,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    24,
      32,    37,    35,    36,    44,    49,    47,    50,    55,    61,
      70,    64,    72,    74,    62,    65,    71,    99,     9,   100,
     101,    73,   133,   105,    27,   104,   135,    54,   132,     0,
      88,    89
};

static const vrd_y_type_int16 vrd_y_check[] =
{
       5,     5,    11,    22,    23,    24,     3,     0,    42,    43,
      44,    45,    46,    10,     4,    10,     6,     7,     8,     9,
      39,    40,    41,    57,    58,    59,    12,    13,    47,    11,
      50,    11,    18,    11,    20,     6,     7,     8,     9,     3,
      52,    50,    51,    15,    16,    17,    18,    19,    20,    21,
      55,    55,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    11,
      11,    54,    53,    52,     5,    48,    53,    14,    11,    11,
      54,    49,    11,     5,    53,    52,    52,    49,     5,    52,
      50,    56,    50,    52,    15,    56,    52,    45,   131,    -1,
      75,    77
};

/* VRD_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const vrd_y_type_uint8 vrd_y_stos[] =
{
       0,    61,    62,     0,    10,    63,    64,    11,     3,    64,
      65,     6,     7,     8,     9,    67,    68,    69,    80,    82,
      89,    50,    11,    11,    11,    90,     4,    68,    66,    70,
      81,    83,    11,     3,    52,    53,    52,    54,    91,    11,
      50,    51,    72,    74,     5,    84,    85,    53,    73,    48,
      14,    79,    86,    55,    85,    11,    12,    13,    18,    20,
      78,    11,    53,    75,    49,    52,    92,    71,    76,    87,
      54,    52,    11,    56,     5,    93,    94,    77,    22,    23,
      24,    39,    40,    41,    47,   100,    95,    55,    94,    78,
      42,    43,    44,    45,    46,    57,    58,    59,   101,    49,
      52,    50,    96,    88,    56,    52,    15,    16,    17,    18,
      19,    20,    21,    98,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    99,   101,    50,    97,    52
};

#define vrd_y_errok		(vrd_y_errstatus = 0)
#define vrd_y_clearin	(vrd_y_char = VRD_Y_EMPTY)
#define VRD_Y_EMPTY		(-2)
#define VRD_Y_EOF		0

#define VRD_Y_ACCEPT	goto vrd_y_acceptlab
#define VRD_Y_ABORT		goto vrd_y_abortlab
#define VRD_Y_ERROR		goto vrd_y_errorlab


/* Like VRD_Y_ERROR except do call vrd_y_error.  This remains here temporarily
   to ease the transition to the new meaning of VRD_Y_ERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define VRD_Y_FAIL		goto vrd_y_errlab

#define VRD_Y_RECOVERING()  (!!vrd_y_errstatus)

#define VRD_Y_BACKUP(Token, Value)					\
do								\
  if (vrd_y_char == VRD_Y_EMPTY && vrd_y_len == 1)				\
    {								\
      vrd_y_char = (Token);						\
      vrd_y_lval = (Value);						\
      vrd_y_token = VRD_Y_TRANSLATE (vrd_y_char);				\
      VRD_Y_POPSTACK (1);						\
      goto vrd_y_backup;						\
    }								\
  else								\
    {								\
      vrd_y_error (VRD_Y__("syntax error: cannot back up")); \
      VRD_Y_ERROR;							\
    }								\
while (VRD_Y_ID (0))


#define VRD_Y_TERROR	1
#define VRD_Y_ERRCODE	256


/* VRD_Y_LLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define VRD_Y_RHSLOC(Rhs, K) ((Rhs)[K])
#ifndef VRD_Y_LLOC_DEFAULT
# define VRD_Y_LLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (VRD_Y_ID (N))                                                    \
	{								\
	  (Current).first_line   = VRD_Y_RHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = VRD_Y_RHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = VRD_Y_RHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = VRD_Y_RHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    VRD_Y_RHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    VRD_Y_RHSLOC (Rhs, 0).last_column;				\
	}								\
    while (VRD_Y_ID (0))
#endif


/* VRD_Y__LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef VRD_Y__LOCATION_PRINT
# if VRD_Y_LTYPE_IS_TRIVIAL
#  define VRD_Y__LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define VRD_Y__LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* VRD_Y_LEX -- calling `vrd_y_lex' with the right arguments.  */

#ifdef VRD_Y_LEX_PARAM
# define VRD_Y_LEX vrd_y_lex (VRD_Y_LEX_PARAM)
#else
# define VRD_Y_LEX vrd_y_lex ()
#endif

/* Enable debugging if requested.  */
#if VRD_Y_DEBUG

# ifndef VRD_Y_FPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define VRD_Y_FPRINTF fprintf
# endif

# define VRD_Y_DPRINTF(Args)			\
do {						\
  if (vrd_y_debug)					\
    VRD_Y_FPRINTF Args;				\
} while (VRD_Y_ID (0))

# define VRD_Y__SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (vrd_y_debug)								  \
    {									  \
      VRD_Y_FPRINTF (stderr, "%s ", Title);					  \
      vrd_y__symbol_print (stderr,						  \
		  Type, Value); \
      VRD_Y_FPRINTF (stderr, "\n");						  \
    }									  \
} while (VRD_Y_ID (0))


/*--------------------------------.
| Print this symbol on VRD_Y_OUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vrd_y__symbol_value_print (FILE *vrd_y_output, int vrd_y_type, VRD_Y_STYPE const * const vrd_y_valuep)
#else
static void
vrd_y__symbol_value_print (vrd_y_output, vrd_y_type, vrd_y_valuep)
    FILE *vrd_y_output;
    int vrd_y_type;
    VRD_Y_STYPE const * const vrd_y_valuep;
#endif
{
  if (!vrd_y_valuep)
    return;
# ifdef VRD_Y_PRINT
  if (vrd_y_type < VRD_Y_NTOKENS)
    VRD_Y_PRINT (vrd_y_output, vrd_y_toknum[vrd_y_type], *vrd_y_valuep);
# else
  VRD_Y_USE (vrd_y_output);
# endif
  switch (vrd_y_type)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on VRD_Y_OUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vrd_y__symbol_print (FILE *vrd_y_output, int vrd_y_type, VRD_Y_STYPE const * const vrd_y_valuep)
#else
static void
vrd_y__symbol_print (vrd_y_output, vrd_y_type, vrd_y_valuep)
    FILE *vrd_y_output;
    int vrd_y_type;
    VRD_Y_STYPE const * const vrd_y_valuep;
#endif
{
  if (vrd_y_type < VRD_Y_NTOKENS)
    VRD_Y_FPRINTF (vrd_y_output, "token %s (", vrd_y_tname[vrd_y_type]);
  else
    VRD_Y_FPRINTF (vrd_y_output, "nterm %s (", vrd_y_tname[vrd_y_type]);

  vrd_y__symbol_value_print (vrd_y_output, vrd_y_type, vrd_y_valuep);
  VRD_Y_FPRINTF (vrd_y_output, ")");
}

/*------------------------------------------------------------------.
| vrd_y__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vrd_y__stack_print (vrd_y_type_int16 *bottom, vrd_y_type_int16 *top)
#else
static void
vrd_y__stack_print (bottom, top)
    vrd_y_type_int16 *bottom;
    vrd_y_type_int16 *top;
#endif
{
  VRD_Y_FPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    VRD_Y_FPRINTF (stderr, " %d", *bottom);
  VRD_Y_FPRINTF (stderr, "\n");
}

# define VRD_Y__STACK_PRINT(Bottom, Top)				\
do {								\
  if (vrd_y_debug)							\
    vrd_y__stack_print ((Bottom), (Top));				\
} while (VRD_Y_ID (0))


/*------------------------------------------------.
| Report that the VRD_Y_RULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vrd_y__reduce_print (VRD_Y_STYPE *vrd_y_vsp, int vrd_y_rule)
#else
static void
vrd_y__reduce_print (vrd_y_vsp, vrd_y_rule)
    VRD_Y_STYPE *vrd_y_vsp;
    int vrd_y_rule;
#endif
{
  int vrd_y_nrhs = vrd_y_r2[vrd_y_rule];
  int vrd_y_i;
  unsigned long int vrd_y_lno = vrd_y_rline[vrd_y_rule];
  VRD_Y_FPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     vrd_y_rule - 1, vrd_y_lno);
  /* The symbols being reduced.  */
  for (vrd_y_i = 0; vrd_y_i < vrd_y_nrhs; vrd_y_i++)
    {
      fprintf (stderr, "   $%d = ", vrd_y_i + 1);
      vrd_y__symbol_print (stderr, vrd_y_rhs[vrd_y_prhs[vrd_y_rule] + vrd_y_i],
		       &(vrd_y_vsp[(vrd_y_i + 1) - (vrd_y_nrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define VRD_Y__REDUCE_PRINT(Rule)		\
do {					\
  if (vrd_y_debug)				\
    vrd_y__reduce_print (vrd_y_vsp, Rule); \
} while (VRD_Y_ID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int vrd_y_debug;
#else /* !VRD_Y_DEBUG */
# define VRD_Y_DPRINTF(Args)
# define VRD_Y__SYMBOL_PRINT(Title, Type, Value, Location)
# define VRD_Y__STACK_PRINT(Bottom, Top)
# define VRD_Y__REDUCE_PRINT(Rule)
#endif /* !VRD_Y_DEBUG */


/* VRD_Y_INITDEPTH -- initial size of the parser's stacks.  */
#ifndef	VRD_Y_INITDEPTH
# define VRD_Y_INITDEPTH 200
#endif

/* VRD_Y_MAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   VRD_Y_STACK_ALLOC_MAXIMUM < VRD_Y_STACK_BYTES (VRD_Y_MAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef VRD_Y_MAXDEPTH
# define VRD_Y_MAXDEPTH 10000
#endif



#if VRD_Y_ERROR_VERBOSE

# ifndef vrd_y_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define vrd_y_strlen strlen
#  else
/* Return the length of VRD_Y_STR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static VRD_Y_SIZE_T
vrd_y_strlen (const char *vrd_y_str)
#else
static VRD_Y_SIZE_T
vrd_y_strlen (vrd_y_str)
    const char *vrd_y_str;
#endif
{
  VRD_Y_SIZE_T vrd_y_len;
  for (vrd_y_len = 0; vrd_y_str[vrd_y_len]; vrd_y_len++)
    continue;
  return vrd_y_len;
}
#  endif
# endif

# ifndef vrd_y_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define vrd_y_stpcpy stpcpy
#  else
/* Copy VRD_Y_SRC to VRD_Y_DEST, returning the address of the terminating '\0' in
   VRD_Y_DEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
vrd_y_stpcpy (char *vrd_y_dest, const char *vrd_y_src)
#else
static char *
vrd_y_stpcpy (vrd_y_dest, vrd_y_src)
    char *vrd_y_dest;
    const char *vrd_y_src;
#endif
{
  char *vrd_y_d = vrd_y_dest;
  const char *vrd_y_s = vrd_y_src;

  while ((*vrd_y_d++ = *vrd_y_s++) != '\0')
    continue;

  return vrd_y_d - 1;
}
#  endif
# endif

# ifndef vrd_y_tnamerr
/* Copy to VRD_Y_RES the contents of VRD_Y_STR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for vrd_y_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  VRD_Y_STR is taken from vrd_y_tname.  If VRD_Y_RES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static VRD_Y_SIZE_T
vrd_y_tnamerr (char *vrd_y_res, const char *vrd_y_str)
{
  if (*vrd_y_str == '"')
    {
      VRD_Y_SIZE_T vrd_y_n = 0;
      char const *vrd_y_p = vrd_y_str;

      for (;;)
	switch (*++vrd_y_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++vrd_y_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (vrd_y_res)
	      vrd_y_res[vrd_y_n] = *vrd_y_p;
	    vrd_y_n++;
	    break;

	  case '"':
	    if (vrd_y_res)
	      vrd_y_res[vrd_y_n] = '\0';
	    return vrd_y_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! vrd_y_res)
    return vrd_y_strlen (vrd_y_str);

  return vrd_y_stpcpy (vrd_y_res, vrd_y_str) - vrd_y_res;
}
# endif

/* Copy into VRD_Y_RESULT an error message about the unexpected token
   VRD_Y_CHAR while in state VRD_Y_STATE.  Return the number of bytes copied,
   including the terminating null byte.  If VRD_Y_RESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return VRD_Y_SIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static VRD_Y_SIZE_T
vrd_y_syntax_error (char *vrd_y_result, int vrd_y_state, int vrd_y_char)
{
  int vrd_y_n = vrd_y_pact[vrd_y_state];

  if (! (VRD_Y_PACT_NINF < vrd_y_n && vrd_y_n <= VRD_Y_LAST))
    return 0;
  else
    {
      int vrd_y_type = VRD_Y_TRANSLATE (vrd_y_char);
      VRD_Y_SIZE_T vrd_y_size0 = vrd_y_tnamerr (0, vrd_y_tname[vrd_y_type]);
      VRD_Y_SIZE_T vrd_y_size = vrd_y_size0;
      VRD_Y_SIZE_T vrd_y_size1;
      int vrd_y_size_overflow = 0;
      enum { VRD_Y_ERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *vrd_y_arg[VRD_Y_ERROR_VERBOSE_ARGS_MAXIMUM];
      int vrd_y_x;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      VRD_Y__("syntax error, unexpected %s");
      VRD_Y__("syntax error, unexpected %s, expecting %s");
      VRD_Y__("syntax error, unexpected %s, expecting %s or %s");
      VRD_Y__("syntax error, unexpected %s, expecting %s or %s or %s");
      VRD_Y__("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *vrd_y_fmt;
      char const *vrd_y_f;
      static char const vrd_y_unexpected[] = "syntax error, unexpected %s";
      static char const vrd_y_expecting[] = ", expecting %s";
      static char const vrd_y_or[] = " or %s";
      char vrd_y_format[sizeof vrd_y_unexpected
		    + sizeof vrd_y_expecting - 1
		    + ((VRD_Y_ERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof vrd_y_or - 1))];
      char const *vrd_y_prefix = vrd_y_expecting;

      /* Start VRD_Y_X at -VRD_Y_N if negative to avoid negative indexes in
	 VRD_Y_CHECK.  */
      int vrd_y_xbegin = vrd_y_n < 0 ? -vrd_y_n : 0;

      /* Stay within bounds of both vrd_y_check and vrd_y_tname.  */
      int vrd_y_checklim = VRD_Y_LAST - vrd_y_n + 1;
      int vrd_y_xend = vrd_y_checklim < VRD_Y_NTOKENS ? vrd_y_checklim : VRD_Y_NTOKENS;
      int vrd_y_count = 1;

      vrd_y_arg[0] = vrd_y_tname[vrd_y_type];
      vrd_y_fmt = vrd_y_stpcpy (vrd_y_format, vrd_y_unexpected);

      for (vrd_y_x = vrd_y_xbegin; vrd_y_x < vrd_y_xend; ++vrd_y_x)
	if (vrd_y_check[vrd_y_x + vrd_y_n] == vrd_y_x && vrd_y_x != VRD_Y_TERROR)
	  {
	    if (vrd_y_count == VRD_Y_ERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		vrd_y_count = 1;
		vrd_y_size = vrd_y_size0;
		vrd_y_format[sizeof vrd_y_unexpected - 1] = '\0';
		break;
	      }
	    vrd_y_arg[vrd_y_count++] = vrd_y_tname[vrd_y_x];
	    vrd_y_size1 = vrd_y_size + vrd_y_tnamerr (0, vrd_y_tname[vrd_y_x]);
	    vrd_y_size_overflow |= (vrd_y_size1 < vrd_y_size);
	    vrd_y_size = vrd_y_size1;
	    vrd_y_fmt = vrd_y_stpcpy (vrd_y_fmt, vrd_y_prefix);
	    vrd_y_prefix = vrd_y_or;
	  }

      vrd_y_f = VRD_Y__(vrd_y_format);
      vrd_y_size1 = vrd_y_size + vrd_y_strlen (vrd_y_f);
      vrd_y_size_overflow |= (vrd_y_size1 < vrd_y_size);
      vrd_y_size = vrd_y_size1;

      if (vrd_y_size_overflow)
	return VRD_Y_SIZE_MAXIMUM;

      if (vrd_y_result)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *vrd_y_p = vrd_y_result;
	  int vrd_y_i = 0;
	  while ((*vrd_y_p = *vrd_y_f) != '\0')
	    {
	      if (*vrd_y_p == '%' && vrd_y_f[1] == 's' && vrd_y_i < vrd_y_count)
		{
		  vrd_y_p += vrd_y_tnamerr (vrd_y_p, vrd_y_arg[vrd_y_i++]);
		  vrd_y_f += 2;
		}
	      else
		{
		  vrd_y_p++;
		  vrd_y_f++;
		}
	    }
	}
      return vrd_y_size;
    }
}
#endif /* VRD_Y_ERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
vrd_y_destruct (const char *vrd_y_msg, int vrd_y_type, VRD_Y_STYPE *vrd_y_valuep)
#else
static void
vrd_y_destruct (vrd_y_msg, vrd_y_type, vrd_y_valuep)
    const char *vrd_y_msg;
    int vrd_y_type;
    VRD_Y_STYPE *vrd_y_valuep;
#endif
{
  VRD_Y_USE (vrd_y_valuep);

  if (!vrd_y_msg)
    vrd_y_msg = "Deleting";
  VRD_Y__SYMBOL_PRINT (vrd_y_msg, vrd_y_type, vrd_y_valuep, vrd_y_locationp);

  switch (vrd_y_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef VRD_Y_PARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int vrd_y_parse (void *VRD_Y_PARSE_PARAM);
#else
int vrd_y_parse ();
#endif
#else /* ! VRD_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int vrd_y_parse (void);
#else
int vrd_y_parse ();
#endif
#endif /* ! VRD_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
int vrd_y_char;

/* The semantic value of the look-ahead symbol.  */
VRD_Y_STYPE vrd_y_lval;

/* Number of syntax errors so far.  */
int vrd_y_nerrs;



/*----------.
| vrd_y_parse.  |
`----------*/

#ifdef VRD_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
vrd_y_parse (void *VRD_Y_PARSE_PARAM)
#else
int
vrd_y_parse (VRD_Y_PARSE_PARAM)
    void *VRD_Y_PARSE_PARAM;
#endif
#else /* ! VRD_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
vrd_y_parse (void)
#else
int
vrd_y_parse ()

#endif
#endif
{
  
  int vrd_y_state;
  int vrd_y_n;
  int vrd_y_result;
  /* Number of tokens to shift before error messages enabled.  */
  int vrd_y_errstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int vrd_y_token = 0;
#if VRD_Y_ERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char vrd_y_msgbuf[128];
  char *vrd_y_msg = vrd_y_msgbuf;
  VRD_Y_SIZE_T vrd_y_msg_alloc = sizeof vrd_y_msgbuf;
#endif

  /* Three stacks and their tools:
     `vrd_y_ss': related to states,
     `vrd_y_vs': related to semantic values,
     `vrd_y_ls': related to locations.

     Refer to the stacks thru separate pointers, to allow vrd_y_overflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  vrd_y_type_int16 vrd_y_ssa[VRD_Y_INITDEPTH];
  vrd_y_type_int16 *vrd_y_ss = vrd_y_ssa;
  vrd_y_type_int16 *vrd_y_ssp;

  /* The semantic value stack.  */
  VRD_Y_STYPE vrd_y_vsa[VRD_Y_INITDEPTH];
  VRD_Y_STYPE *vrd_y_vs = vrd_y_vsa;
  VRD_Y_STYPE *vrd_y_vsp;



#define VRD_Y_POPSTACK(N)   (vrd_y_vsp -= (N), vrd_y_ssp -= (N))

  VRD_Y_SIZE_T vrd_y_stacksize = VRD_Y_INITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  VRD_Y_STYPE vrd_y_val;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int vrd_y_len = 0;

  VRD_Y_DPRINTF ((stderr, "Starting parse\n"));

  vrd_y_state = 0;
  vrd_y_errstatus = 0;
  vrd_y_nerrs = 0;
  vrd_y_char = VRD_Y_EMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  vrd_y_ssp = vrd_y_ss;
  vrd_y_vsp = vrd_y_vs;

  goto vrd_y_setstate;

/*------------------------------------------------------------.
| vrd_y_newstate -- Push a new state, which is found in vrd_y_state.  |
`------------------------------------------------------------*/
 vrd_y_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  vrd_y_ssp++;

 vrd_y_setstate:
  *vrd_y_ssp = vrd_y_state;

  if (vrd_y_ss + vrd_y_stacksize - 1 <= vrd_y_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      VRD_Y_SIZE_T vrd_y_size = vrd_y_ssp - vrd_y_ss + 1;

#ifdef vrd_y_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	VRD_Y_STYPE *vrd_y_vs1 = vrd_y_vs;
	vrd_y_type_int16 *vrd_y_ss1 = vrd_y_ss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if vrd_y_overflow is a macro.  */
	vrd_y_overflow (VRD_Y__("memory exhausted"),
		    &vrd_y_ss1, vrd_y_size * sizeof (*vrd_y_ssp),
		    &vrd_y_vs1, vrd_y_size * sizeof (*vrd_y_vsp),

		    &vrd_y_stacksize);

	vrd_y_ss = vrd_y_ss1;
	vrd_y_vs = vrd_y_vs1;
      }
#else /* no vrd_y_overflow */
# ifndef VRD_Y_STACK_RELOCATE
      goto vrd_y_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (VRD_Y_MAXDEPTH <= vrd_y_stacksize)
	goto vrd_y_exhaustedlab;
      vrd_y_stacksize *= 2;
      if (VRD_Y_MAXDEPTH < vrd_y_stacksize)
	vrd_y_stacksize = VRD_Y_MAXDEPTH;

      {
	vrd_y_type_int16 *vrd_y_ss1 = vrd_y_ss;
	union vrd_y_alloc *vrd_y_ptr =
	  (union vrd_y_alloc *) VRD_Y_STACK_ALLOC (VRD_Y_STACK_BYTES (vrd_y_stacksize));
	if (! vrd_y_ptr)
	  goto vrd_y_exhaustedlab;
	VRD_Y_STACK_RELOCATE (vrd_y_ss);
	VRD_Y_STACK_RELOCATE (vrd_y_vs);

#  undef VRD_Y_STACK_RELOCATE
	if (vrd_y_ss1 != vrd_y_ssa)
	  VRD_Y_STACK_FREE (vrd_y_ss1);
      }
# endif
#endif /* no vrd_y_overflow */

      vrd_y_ssp = vrd_y_ss + vrd_y_size - 1;
      vrd_y_vsp = vrd_y_vs + vrd_y_size - 1;


      VRD_Y_DPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) vrd_y_stacksize));

      if (vrd_y_ss + vrd_y_stacksize - 1 <= vrd_y_ssp)
	VRD_Y_ABORT;
    }

  VRD_Y_DPRINTF ((stderr, "Entering state %d\n", vrd_y_state));

  goto vrd_y_backup;

/*-----------.
| vrd_y_backup.  |
`-----------*/
vrd_y_backup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  vrd_y_n = vrd_y_pact[vrd_y_state];
  if (vrd_y_n == VRD_Y_PACT_NINF)
    goto vrd_y_default;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* VRD_Y_CHAR is either VRD_Y_EMPTY or VRD_Y_EOF or a valid look-ahead symbol.  */
  if (vrd_y_char == VRD_Y_EMPTY)
    {
      VRD_Y_DPRINTF ((stderr, "Reading a token: "));
      vrd_y_char = VRD_Y_LEX;
    }

  if (vrd_y_char <= VRD_Y_EOF)
    {
      vrd_y_char = vrd_y_token = VRD_Y_EOF;
      VRD_Y_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      vrd_y_token = VRD_Y_TRANSLATE (vrd_y_char);
      VRD_Y__SYMBOL_PRINT ("Next token is", vrd_y_token, &vrd_y_lval, &vrd_y_lloc);
    }

  /* If the proper action on seeing token VRD_Y_TOKEN is to reduce or to
     detect an error, take that action.  */
  vrd_y_n += vrd_y_token;
  if (vrd_y_n < 0 || VRD_Y_LAST < vrd_y_n || vrd_y_check[vrd_y_n] != vrd_y_token)
    goto vrd_y_default;
  vrd_y_n = vrd_y_table[vrd_y_n];
  if (vrd_y_n <= 0)
    {
      if (vrd_y_n == 0 || vrd_y_n == VRD_Y_TABLE_NINF)
	goto vrd_y_errlab;
      vrd_y_n = -vrd_y_n;
      goto vrd_y_reduce;
    }

  if (vrd_y_n == VRD_Y_FINAL)
    VRD_Y_ACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (vrd_y_errstatus)
    vrd_y_errstatus--;

  /* Shift the look-ahead token.  */
  VRD_Y__SYMBOL_PRINT ("Shifting", vrd_y_token, &vrd_y_lval, &vrd_y_lloc);

  /* Discard the shifted token unless it is eof.  */
  if (vrd_y_char != VRD_Y_EOF)
    vrd_y_char = VRD_Y_EMPTY;

  vrd_y_state = vrd_y_n;
  *++vrd_y_vsp = vrd_y_lval;

  goto vrd_y_newstate;


/*-----------------------------------------------------------.
| vrd_y_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
vrd_y_default:
  vrd_y_n = vrd_y_defact[vrd_y_state];
  if (vrd_y_n == 0)
    goto vrd_y_errlab;
  goto vrd_y_reduce;


/*-----------------------------.
| vrd_y_reduce -- Do a reduction.  |
`-----------------------------*/
vrd_y_reduce:
  /* vrd_y_n is the number of a rule to reduce with.  */
  vrd_y_len = vrd_y_r2[vrd_y_n];

  /* If VRD_Y_LEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets VRD_Y_VAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to VRD_Y_VAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that VRD_Y_VAL may be used uninitialized.  */
  vrd_y_val = vrd_y_vsp[1-vrd_y_len];


  VRD_Y__REDUCE_PRINT (vrd_y_n);
  switch (vrd_y_n)
    {
        case 2:
#line 93 "../../../src/druc/src/drucompi_y.y"
    { DrucNombreInstructions = 0;
                               DrucInitCompiler () ;}
    break;

  case 3:
#line 99 "../../../src/druc/src/drucompi_y.y"
    { return ;}
    break;

  case 6:
#line 107 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRdsLayerName ( DrucInputChaine ) ;}
    break;

  case 7:
#line 108 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRdsLayerDef ( RprTranslateParam ( DrucInputFloat ) );}
    break;

  case 11:
#line 117 "../../../src/druc/src/drucompi_y.y"
    { DrucLoadInstructionDefine () ;}
    break;

  case 12:
#line 118 "../../../src/druc/src/drucompi_y.y"
    { DrucLoadInstructionUndefine () ;}
    break;

  case 13:
#line 119 "../../../src/druc/src/drucompi_y.y"
    { DrucLoadInstructionRegle () ;}
    break;

  case 14:
#line 120 "../../../src/druc/src/drucompi_y.y"
    { DrucLoadInstructionRegle () ;}
    break;

  case 15:
#line 124 "../../../src/druc/src/drucompi_y.y"
    { DrucInitDefineLayerA ( DrucInputChaine ) ;}
    break;

  case 16:
#line 128 "../../../src/druc/src/drucompi_y.y"
    { DrucInitDefineLayerDest ( DrucInputChaine ) ;}
    break;

  case 19:
#line 135 "../../../src/druc/src/drucompi_y.y"
    { DrucInitDefineLayerB ( DrucInputChaine ) ;}
    break;

  case 21:
#line 139 "../../../src/druc/src/drucompi_y.y"
    { DrucInitDefineValeur ( RprTranslateParam ( DrucInputFloat)) ;}
    break;

  case 22:
#line 140 "../../../src/druc/src/drucompi_y.y"
    { long i ; 
                               i =  RprTranslateParam ( DrucInputFloat ); 
                               DrucInitDefineValeur ( i );}
    break;

  case 23:
#line 145 "../../../src/druc/src/drucompi_y.y"
    { DrucInitOpUnaire   ( ) ;}
    break;

  case 24:
#line 146 "../../../src/druc/src/drucompi_y.y"
    { DrucInitDefineLayerB ( DrucInputChaine ) ;}
    break;

  case 27:
#line 151 "../../../src/druc/src/drucompi_y.y"
    { DrucStructDefineOpCompose( DRUC_COMPOSE_UNION );}
    break;

  case 28:
#line 152 "../../../src/druc/src/drucompi_y.y"
    { DrucStructDefineOpCompose( DRUC_COMPOSE_INTERSECT );}
    break;

  case 29:
#line 153 "../../../src/druc/src/drucompi_y.y"
    { DrucStructDefineOpCompose( DRUC_COMPOSE_EXCLUSION );}
    break;

  case 30:
#line 154 "../../../src/druc/src/drucompi_y.y"
    { DrucStructDefineOpCompose( DRUC_COMPOSE_INCLUSION );}
    break;

  case 31:
#line 157 "../../../src/druc/src/drucompi_y.y"
    { DrucStructDefineOpCompose( DRUC_COMPOSE_RESIZE    );}
    break;

  case 32:
#line 161 "../../../src/druc/src/drucompi_y.y"
    { DrucInitUndefineUserLayer ( DrucInputChaine ) ;}
    break;

  case 34:
#line 166 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleLayerA ( DrucInputChaine ) ;
                               DrucInitRegleInstruction ( DRUC_INSTR_CARACTERISE ) ;
                               DrucIndexMesure = -1 ;}
    break;

  case 38:
#line 180 "../../../src/druc/src/drucompi_y.y"
    { DrucIndexMesure ++ ;}
    break;

  case 39:
#line 181 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleNumero ( DrucInputEntier,
                                                     DrucIndexMesure) ;}
    break;

  case 40:
#line 186 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleValeur ( RprTranslateParam ( DrucInputFloat ),
                                                     DrucIndexMesure );}
    break;

  case 42:
#line 191 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleInstruction ( DRUC_INSTR_RELATION ) ;}
    break;

  case 43:
#line 192 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleLayerA ( DrucInputChaine ) ;}
    break;

  case 44:
#line 194 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleLayerB ( DrucInputChaine ) ;
                               DrucIndexMesure = -1 ; }
    break;

  case 48:
#line 207 "../../../src/druc/src/drucompi_y.y"
    { DrucIndexMesure ++ ;}
    break;

  case 49:
#line 208 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleNumero ( DrucInputEntier,
                                                     DrucIndexMesure ) ;}
    break;

  case 50:
#line 214 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleValeur ( RprTranslateParam ( DrucInputFloat ),
                                                     DrucIndexMesure );}
    break;

  case 52:
#line 219 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleRelation( DRUC_RELATION_DISTANCE,
                                                      DrucIndexMesure );}
    break;

  case 53:
#line 221 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleRelation( DRUC_RELATION_INTERSECTION,
                                                      DrucIndexMesure );}
    break;

  case 54:
#line 223 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleRelation( DRUC_RELATION_EXTENSION,
                                                      DrucIndexMesure );}
    break;

  case 55:
#line 225 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleRelation( DRUC_RELATION_INCLUSION,
                                                      DrucIndexMesure );}
    break;

  case 56:
#line 227 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleRelation( DRUC_RELATION_ENVELOPPE,
                                                      DrucIndexMesure );}
    break;

  case 57:
#line 229 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleRelation( DRUC_RELATION_MARGE,
                                                      DrucIndexMesure );}
    break;

  case 58:
#line 231 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleRelation( DRUC_RELATION_CROIX,
                                                      DrucIndexMesure );}
    break;

  case 59:
#line 235 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_SURFACE_INTER,
                                                    DrucIndexMesure );}
    break;

  case 60:
#line 237 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LONGUEUR_INTER,
                                                    DrucIndexMesure );}
    break;

  case 61:
#line 239 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LARGEUR_INTER,
                                                    DrucIndexMesure );}
    break;

  case 62:
#line 241 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_PENETRE_INTER,
                                                    DrucIndexMesure );}
    break;

  case 63:
#line 243 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_PARALEL_INTER,
                                                    DrucIndexMesure );}
    break;

  case 64:
#line 245 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_PERPEND_INTER,
                                                    DrucIndexMesure );}
    break;

  case 65:
#line 247 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LONGUEUR_MIN,
                                                    DrucIndexMesure );}
    break;

  case 66:
#line 249 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LONGUEUR_MAX,
                                                    DrucIndexMesure );}
    break;

  case 67:
#line 251 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LARGEUR_MIN,
                                                    DrucIndexMesure );}
    break;

  case 68:
#line 253 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LARGEUR_MAX,
                                                    DrucIndexMesure );}
    break;

  case 69:
#line 255 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_FRONTALE,
                                                    DrucIndexMesure );}
    break;

  case 70:
#line 257 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LATERALE_MIN,
                                                    DrucIndexMesure );}
    break;

  case 71:
#line 259 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LATERALE_MAX,
                                                    DrucIndexMesure );}
    break;

  case 72:
#line 261 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_SUP,
                                                    DrucIndexMesure );}
    break;

  case 73:
#line 263 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_INF,
                                                    DrucIndexMesure );}
    break;

  case 74:
#line 265 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_AXIALE,
                                                    DrucIndexMesure );}
    break;

  case 75:
#line 267 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_GEODESIQUE,
                                                    DrucIndexMesure );}
    break;

  case 76:
#line 271 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_SURFACE,
                                                    DrucIndexMesure );}
    break;

  case 77:
#line 273 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LONGUEUR,
                                                    DrucIndexMesure );}
    break;

  case 78:
#line 275 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LARGEUR,
                                                    DrucIndexMesure );}
    break;

  case 79:
#line 277 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_NOTCH,
                                                    DrucIndexMesure );}
    break;

  case 80:
#line 279 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_SURFACE_INTER,
                                                    DrucIndexMesure );}
    break;

  case 81:
#line 281 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LONGUEUR_INTER,
                                                    DrucIndexMesure );}
    break;

  case 82:
#line 283 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleMesure( DRUC_MESURE_LARGEUR_INTER,
                                                    DrucIndexMesure );}
    break;

  case 83:
#line 287 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleOpCompare ( DRUC_OPERATION_MIN,
                                                        DrucIndexMesure );}
    break;

  case 84:
#line 289 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleOpCompare ( DRUC_OPERATION_MAX,
                                                        DrucIndexMesure );}
    break;

  case 85:
#line 291 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleOpCompare ( DRUC_OPERATION_INFEQ,
                                                        DrucIndexMesure );}
    break;

  case 86:
#line 293 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleOpCompare ( DRUC_OPERATION_SUPEQ,
                                                        DrucIndexMesure );}
    break;

  case 87:
#line 295 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleOpCompare ( DRUC_OPERATION_INF,
                                                        DrucIndexMesure );}
    break;

  case 88:
#line 297 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleOpCompare ( DRUC_OPERATION_SUP,
                                                        DrucIndexMesure );}
    break;

  case 89:
#line 299 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleOpCompare ( DRUC_OPERATION_EQUAL,
                                                        DrucIndexMesure );}
    break;

  case 90:
#line 301 "../../../src/druc/src/drucompi_y.y"
    { DrucInitRegleOpCompare ( DRUC_OPERATION_DIFF,
                                                        DrucIndexMesure );}
    break;


/* Line 1267 of yacc.c.  */
#line 1975 "y.tab.c"
      default: break;
    }
  VRD_Y__SYMBOL_PRINT ("-> $$ =", vrd_y_r1[vrd_y_n], &vrd_y_val, &vrd_y_loc);

  VRD_Y_POPSTACK (vrd_y_len);
  vrd_y_len = 0;
  VRD_Y__STACK_PRINT (vrd_y_ss, vrd_y_ssp);

  *++vrd_y_vsp = vrd_y_val;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  vrd_y_n = vrd_y_r1[vrd_y_n];

  vrd_y_state = vrd_y_pgoto[vrd_y_n - VRD_Y_NTOKENS] + *vrd_y_ssp;
  if (0 <= vrd_y_state && vrd_y_state <= VRD_Y_LAST && vrd_y_check[vrd_y_state] == *vrd_y_ssp)
    vrd_y_state = vrd_y_table[vrd_y_state];
  else
    vrd_y_state = vrd_y_defgoto[vrd_y_n - VRD_Y_NTOKENS];

  goto vrd_y_newstate;


/*------------------------------------.
| vrd_y_errlab -- here on detecting error |
`------------------------------------*/
vrd_y_errlab:
  /* If not already recovering from an error, report this error.  */
  if (!vrd_y_errstatus)
    {
      ++vrd_y_nerrs;
#if ! VRD_Y_ERROR_VERBOSE
      vrd_y_error (VRD_Y__("syntax error"));
#else
      {
	VRD_Y_SIZE_T vrd_y_size = vrd_y_syntax_error (0, vrd_y_state, vrd_y_char);
	if (vrd_y_msg_alloc < vrd_y_size && vrd_y_msg_alloc < VRD_Y_STACK_ALLOC_MAXIMUM)
	  {
	    VRD_Y_SIZE_T vrd_y_alloc = 2 * vrd_y_size;
	    if (! (vrd_y_size <= vrd_y_alloc && vrd_y_alloc <= VRD_Y_STACK_ALLOC_MAXIMUM))
	      vrd_y_alloc = VRD_Y_STACK_ALLOC_MAXIMUM;
	    if (vrd_y_msg != vrd_y_msgbuf)
	      VRD_Y_STACK_FREE (vrd_y_msg);
	    vrd_y_msg = (char *) VRD_Y_STACK_ALLOC (vrd_y_alloc);
	    if (vrd_y_msg)
	      vrd_y_msg_alloc = vrd_y_alloc;
	    else
	      {
		vrd_y_msg = vrd_y_msgbuf;
		vrd_y_msg_alloc = sizeof vrd_y_msgbuf;
	      }
	  }

	if (0 < vrd_y_size && vrd_y_size <= vrd_y_msg_alloc)
	  {
	    (void) vrd_y_syntax_error (vrd_y_msg, vrd_y_state, vrd_y_char);
	    vrd_y_error (vrd_y_msg);
	  }
	else
	  {
	    vrd_y_error (VRD_Y__("syntax error"));
	    if (vrd_y_size != 0)
	      goto vrd_y_exhaustedlab;
	  }
      }
#endif
    }



  if (vrd_y_errstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (vrd_y_char <= VRD_Y_EOF)
	{
	  /* Return failure if at end of input.  */
	  if (vrd_y_char == VRD_Y_EOF)
	    VRD_Y_ABORT;
	}
      else
	{
	  vrd_y_destruct ("Error: discarding",
		      vrd_y_token, &vrd_y_lval);
	  vrd_y_char = VRD_Y_EMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto vrd_y_errlab1;


/*---------------------------------------------------.
| vrd_y_errorlab -- error raised explicitly by VRD_Y_ERROR.  |
`---------------------------------------------------*/
vrd_y_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     VRD_Y_ERROR and the label vrd_y_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto vrd_y_errorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this VRD_Y_ERROR.  */
  VRD_Y_POPSTACK (vrd_y_len);
  vrd_y_len = 0;
  VRD_Y__STACK_PRINT (vrd_y_ss, vrd_y_ssp);
  vrd_y_state = *vrd_y_ssp;
  goto vrd_y_errlab1;


/*-------------------------------------------------------------.
| vrd_y_errlab1 -- common code for both syntax error and VRD_Y_ERROR.  |
`-------------------------------------------------------------*/
vrd_y_errlab1:
  vrd_y_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      vrd_y_n = vrd_y_pact[vrd_y_state];
      if (vrd_y_n != VRD_Y_PACT_NINF)
	{
	  vrd_y_n += VRD_Y_TERROR;
	  if (0 <= vrd_y_n && vrd_y_n <= VRD_Y_LAST && vrd_y_check[vrd_y_n] == VRD_Y_TERROR)
	    {
	      vrd_y_n = vrd_y_table[vrd_y_n];
	      if (0 < vrd_y_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (vrd_y_ssp == vrd_y_ss)
	VRD_Y_ABORT;


      vrd_y_destruct ("Error: popping",
		  vrd_y_stos[vrd_y_state], vrd_y_vsp);
      VRD_Y_POPSTACK (1);
      vrd_y_state = *vrd_y_ssp;
      VRD_Y__STACK_PRINT (vrd_y_ss, vrd_y_ssp);
    }

  if (vrd_y_n == VRD_Y_FINAL)
    VRD_Y_ACCEPT;

  *++vrd_y_vsp = vrd_y_lval;


  /* Shift the error token.  */
  VRD_Y__SYMBOL_PRINT ("Shifting", vrd_y_stos[vrd_y_n], vrd_y_vsp, vrd_y_lsp);

  vrd_y_state = vrd_y_n;
  goto vrd_y_newstate;


/*-------------------------------------.
| vrd_y_acceptlab -- VRD_Y_ACCEPT comes here.  |
`-------------------------------------*/
vrd_y_acceptlab:
  vrd_y_result = 0;
  goto vrd_y_return;

/*-----------------------------------.
| vrd_y_abortlab -- VRD_Y_ABORT comes here.  |
`-----------------------------------*/
vrd_y_abortlab:
  vrd_y_result = 1;
  goto vrd_y_return;

#ifndef vrd_y_overflow
/*-------------------------------------------------.
| vrd_y_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
vrd_y_exhaustedlab:
  vrd_y_error (VRD_Y__("memory exhausted"));
  vrd_y_result = 2;
  /* Fall through.  */
#endif

vrd_y_return:
  if (vrd_y_char != VRD_Y_EOF && vrd_y_char != VRD_Y_EMPTY)
     vrd_y_destruct ("Cleanup: discarding lookahead",
		 vrd_y_token, &vrd_y_lval);
  /* Do not reclaim the symbols of the rule which action triggered
     this VRD_Y_ABORT or VRD_Y_ACCEPT.  */
  VRD_Y_POPSTACK (vrd_y_len);
  VRD_Y__STACK_PRINT (vrd_y_ss, vrd_y_ssp);
  while (vrd_y_ssp != vrd_y_ss)
    {
      vrd_y_destruct ("Cleanup: popping",
		  vrd_y_stos[*vrd_y_ssp], vrd_y_vsp);
      VRD_Y_POPSTACK (1);
    }
#ifndef vrd_y_overflow
  if (vrd_y_ss != vrd_y_ssa)
    VRD_Y_STACK_FREE (vrd_y_ss);
#endif
#if VRD_Y_ERROR_VERBOSE
  if (vrd_y_msg != vrd_y_msgbuf)
    VRD_Y_STACK_FREE (vrd_y_msg);
#endif
  /* Make sure VRD_Y_ID is used.  */
  return VRD_Y_ID (vrd_y_result);
}


#line 306 "../../../src/druc/src/drucompi_y.y"


