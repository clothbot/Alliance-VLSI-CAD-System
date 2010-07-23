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

/* All symbols defined below should begin with elpyy or elpYY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define elpYYBISON 1

/* Bison version.  */
#define elpYYBISON_VERSION "2.3"

/* Skeleton name.  */
#define elpYYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define elpYYPURE 0

/* Using locations.  */
#define elpYYLSP_NEEDED 0



/* Tokens.  */
#ifndef elpYYTOKENTYPE
# define elpYYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum elpyytokentype {
     telpTECNAME = 258,
     telpTECVER = 259,
     telpLMLT = 260,
     telpWMLT = 261,
     telpDLN = 262,
     telpDLP = 263,
     telpDWN = 264,
     telpDWP = 265,
     telpDLE = 266,
     telpDLD = 267,
     telpDWE = 268,
     telpDWD = 269,
     telpVTN = 270,
     telpAN = 271,
     telpBN = 272,
     telpRNT = 273,
     telpVTP = 274,
     telpAP = 275,
     telpBP = 276,
     telpRPT = 277,
     telp = 278,
     telpVDDmax = 279,
     telpVDDdeg = 280,
     telpVSSdeg = 281,
     telpVTHR = 282,
     telpCGSN = 283,
     telpCGPN = 284,
     telpCGSP = 285,
     telpCGPP = 286,
     telpCDSN = 287,
     telpCDPN = 288,
     telpCDWN = 289,
     telpCDSP = 290,
     telpCDPP = 291,
     telpCDWP = 292,
     telpCSSN = 293,
     telpCSPN = 294,
     telpCSWN = 295,
     telpCSSP = 296,
     telpCSPP = 297,
     telpCSWP = 298,
     telpCGDE = 299,
     telpCGSE = 300,
     telpCGDD = 301,
     telpCGSD = 302,
     telpESIM = 303,
     telpMODEL = 304,
     telpLEVEL = 305,
     telpACM = 306,
     telpTEMP = 307,
     telpSLOPE = 308,
     telpDOUBLE = 309,
     telpSTRING = 310
   };
#endif
/* Tokens.  */
#define telpTECNAME 258
#define telpTECVER 259
#define telpLMLT 260
#define telpWMLT 261
#define telpDLN 262
#define telpDLP 263
#define telpDWN 264
#define telpDWP 265
#define telpDLE 266
#define telpDLD 267
#define telpDWE 268
#define telpDWD 269
#define telpVTN 270
#define telpAN 271
#define telpBN 272
#define telpRNT 273
#define telpVTP 274
#define telpAP 275
#define telpBP 276
#define telpRPT 277
#define telp 278
#define telpVDDmax 279
#define telpVDDdeg 280
#define telpVSSdeg 281
#define telpVTHR 282
#define telpCGSN 283
#define telpCGPN 284
#define telpCGSP 285
#define telpCGPP 286
#define telpCDSN 287
#define telpCDPN 288
#define telpCDWN 289
#define telpCDSP 290
#define telpCDPP 291
#define telpCDWP 292
#define telpCSSN 293
#define telpCSPN 294
#define telpCSWN 295
#define telpCSSP 296
#define telpCSPP 297
#define telpCSWP 298
#define telpCGDE 299
#define telpCGSE 300
#define telpCGDD 301
#define telpCGSD 302
#define telpESIM 303
#define telpMODEL 304
#define telpLEVEL 305
#define telpACM 306
#define telpTEMP 307
#define telpSLOPE 308
#define telpDOUBLE 309
#define telpSTRING 310




/* Copy the first part of user declarations.  */
#line 1 "../../../src/elp/src/elp_y.y"

#include "elp.h"


/* Enabling traces.  */
#ifndef elpYYDEBUG
# define elpYYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef elpYYERROR_VERBOSE
# undef elpYYERROR_VERBOSE
# define elpYYERROR_VERBOSE 1
#else
# define elpYYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef elpYYTOKEN_TABLE
# define elpYYTOKEN_TABLE 0
#endif

#if ! defined elpYYSTYPE && ! defined elpYYSTYPE_IS_DECLARED
typedef union elpYYSTYPE
#line 5 "../../../src/elp/src/elp_y.y"
{
       double elpdbl    ;
       char   elpstr[50];
       }
/* Line 187 of yacc.c.  */
#line 215 "y.tab.c"
	elpYYSTYPE;
# define elpyystype elpYYSTYPE /* obsolescent; will be withdrawn */
# define elpYYSTYPE_IS_DECLARED 1
# define elpYYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 228 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef elpYYTYPE_UINT8
typedef elpYYTYPE_UINT8 elpyytype_uint8;
#else
typedef unsigned char elpyytype_uint8;
#endif

#ifdef elpYYTYPE_INT8
typedef elpYYTYPE_INT8 elpyytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char elpyytype_int8;
#else
typedef short int elpyytype_int8;
#endif

#ifdef elpYYTYPE_UINT16
typedef elpYYTYPE_UINT16 elpyytype_uint16;
#else
typedef unsigned short int elpyytype_uint16;
#endif

#ifdef elpYYTYPE_INT16
typedef elpYYTYPE_INT16 elpyytype_int16;
#else
typedef short int elpyytype_int16;
#endif

#ifndef elpYYSIZE_T
# ifdef __SIZE_TYPE__
#  define elpYYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define elpYYSIZE_T size_t
# elif ! defined elpYYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define elpYYSIZE_T size_t
# else
#  define elpYYSIZE_T unsigned int
# endif
#endif

#define elpYYSIZE_MAXIMUM ((elpYYSIZE_T) -1)

#ifndef elpYY_
# if elpYYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define elpYY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef elpYY_
#  define elpYY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define elpYYUSE(e) ((void) (e))
#else
# define elpYYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define elpYYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
elpYYID (int i)
#else
static int
elpYYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined elpyyoverflow || elpYYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef elpYYSTACK_USE_ALLOCA
#  if elpYYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define elpYYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define elpYYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define elpYYSTACK_ALLOC alloca
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

# ifdef elpYYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define elpYYSTACK_FREE(Ptr) do { /* empty */; } while (elpYYID (0))
#  ifndef elpYYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define elpYYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define elpYYSTACK_ALLOC elpYYMALLOC
#  define elpYYSTACK_FREE elpYYFREE
#  ifndef elpYYSTACK_ALLOC_MAXIMUM
#   define elpYYSTACK_ALLOC_MAXIMUM elpYYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined elpYYMALLOC || defined malloc) \
	     && (defined elpYYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef elpYYMALLOC
#   define elpYYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (elpYYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef elpYYFREE
#   define elpYYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined elpyyoverflow || elpYYERROR_VERBOSE */


#if (! defined elpyyoverflow \
     && (! defined __cplusplus \
	 || (defined elpYYSTYPE_IS_TRIVIAL && elpYYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union elpyyalloc
{
  elpyytype_int16 elpyyss;
  elpYYSTYPE elpyyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define elpYYSTACK_GAP_MAXIMUM (sizeof (union elpyyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define elpYYSTACK_BYTES(N) \
     ((N) * (sizeof (elpyytype_int16) + sizeof (elpYYSTYPE)) \
      + elpYYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef elpYYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define elpYYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define elpYYCOPY(To, From, Count)		\
      do					\
	{					\
	  elpYYSIZE_T elpyyi;				\
	  for (elpyyi = 0; elpyyi < (Count); elpyyi++)	\
	    (To)[elpyyi] = (From)[elpyyi];		\
	}					\
      while (elpYYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables elpYYSIZE and elpYYSTACKSIZE give the old and new number of
   elements in the stack, and elpYYPTR gives the new location of the
   stack.  Advance elpYYPTR to a properly aligned location for the next
   stack.  */
# define elpYYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	elpYYSIZE_T elpyynewbytes;						\
	elpYYCOPY (&elpyyptr->Stack, Stack, elpyysize);				\
	Stack = &elpyyptr->Stack;						\
	elpyynewbytes = elpyystacksize * sizeof (*Stack) + elpYYSTACK_GAP_MAXIMUM; \
	elpyyptr += elpyynewbytes / sizeof (*elpyyptr);				\
      }									\
    while (elpYYID (0))

#endif

/* elpYYFINAL -- State number of the termination state.  */
#define elpYYFINAL  4
/* elpYYLAST -- Last index in elpYYTABLE.  */
#define elpYYLAST   153

/* elpYYNTOKENS -- Number of terminals.  */
#define elpYYNTOKENS  58
/* elpYYNNTS -- Number of nonterminals.  */
#define elpYYNNTS  5
/* elpYYNRULES -- Number of rules.  */
#define elpYYNRULES  53
/* elpYYNRULES -- Number of states.  */
#define elpYYNSTATES  156

/* elpYYTRANSLATE(elpYYLEX) -- Bison symbol number corresponding to elpYYLEX.  */
#define elpYYUNDEFTOK  2
#define elpYYMAXUTOK   310

#define elpYYTRANSLATE(elpYYX)						\
  ((unsigned int) (elpYYX) <= elpYYMAXUTOK ? elpyytranslate[elpYYX] : elpYYUNDEFTOK)

/* elpYYTRANSLATE[elpYYLEX] -- Bison symbol number corresponding to elpYYLEX.  */
static const elpyytype_uint8 elpyytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,     2,
       2,    57,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55
};

#if elpYYDEBUG
/* elpYYPRHS[elpYYN] -- Index of the first RHS symbol of rule number elpYYN in
   elpYYRHS.  */
static const elpyytype_uint8 elpyyprhs[] =
{
       0,     0,     3,     4,    13,    14,    17,    21,    25,    29,
      33,    37,    41,    45,    49,    53,    57,    61,    65,    69,
      73,    77,    81,    85,    89,    93,    97,   101,   105,   109,
     113,   117,   121,   125,   129,   133,   137,   141,   145,   149,
     153,   157,   161,   165,   169,   173,   177,   181,   185,   189,
     193,   197,   201,   205
};

/* elpYYRHS -- A `-1'-separated list of the rules' RHS.  */
static const elpyytype_int8 elpyyrhs[] =
{
      59,     0,    -1,    -1,     3,    56,    55,     4,    56,    54,
      60,    61,    -1,    -1,    61,    62,    -1,     5,    57,    54,
      -1,     6,    57,    54,    -1,     7,    57,    54,    -1,     9,
      57,    54,    -1,     8,    57,    54,    -1,    10,    57,    54,
      -1,    11,    57,    54,    -1,    13,    57,    54,    -1,    12,
      57,    54,    -1,    14,    57,    54,    -1,    15,    57,    54,
      -1,    16,    57,    54,    -1,    17,    57,    54,    -1,    18,
      57,    54,    -1,    19,    57,    54,    -1,    20,    57,    54,
      -1,    21,    57,    54,    -1,    22,    57,    54,    -1,    24,
      57,    54,    -1,    25,    57,    54,    -1,    26,    57,    54,
      -1,    27,    57,    54,    -1,    28,    57,    54,    -1,    29,
      57,    54,    -1,    30,    57,    54,    -1,    31,    57,    54,
      -1,    32,    57,    54,    -1,    33,    57,    54,    -1,    34,
      57,    54,    -1,    35,    57,    54,    -1,    36,    57,    54,
      -1,    37,    57,    54,    -1,    38,    57,    54,    -1,    39,
      57,    54,    -1,    40,    57,    54,    -1,    41,    57,    54,
      -1,    42,    57,    54,    -1,    43,    57,    54,    -1,    44,
      57,    54,    -1,    47,    57,    54,    -1,    46,    57,    54,
      -1,    45,    57,    54,    -1,    48,    57,    55,    -1,    49,
      57,    55,    -1,    50,    57,    54,    -1,    51,    57,    54,
      -1,    52,    57,    54,    -1,    53,    57,    54,    -1
};

/* elpYYRLINE[elpYYN] -- source line where rule number elpYYN was defined.  */
static const elpyytype_uint8 elpyyrline[] =
{
       0,    26,    26,    25,    33,    34,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    51,    52,    53,    54,
      55,    56,    57,    58,    61,    62,    63,    64,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    89,    90,
      91,    94,    95,    96
};
#endif

#if elpYYDEBUG || elpYYERROR_VERBOSE || elpYYTOKEN_TABLE
/* elpYYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at elpYYNTOKENS, nonterminals.  */
static const char *const elpyytname[] =
{
  "$end", "error", "$undefined", "telpTECNAME", "telpTECVER", "telpLMLT",
  "telpWMLT", "telpDLN", "telpDLP", "telpDWN", "telpDWP", "telpDLE",
  "telpDLD", "telpDWE", "telpDWD", "telpVTN", "telpAN", "telpBN",
  "telpRNT", "telpVTP", "telpAP", "telpBP", "telpRPT", "telp",
  "telpVDDmax", "telpVDDdeg", "telpVSSdeg", "telpVTHR", "telpCGSN",
  "telpCGPN", "telpCGSP", "telpCGPP", "telpCDSN", "telpCDPN", "telpCDWN",
  "telpCDSP", "telpCDPP", "telpCDWP", "telpCSSN", "telpCSPN", "telpCSWN",
  "telpCSSP", "telpCSPP", "telpCSWP", "telpCGDE", "telpCGSE", "telpCGDD",
  "telpCGSD", "telpESIM", "telpMODEL", "telpLEVEL", "telpACM", "telpTEMP",
  "telpSLOPE", "telpDOUBLE", "telpSTRING", "':'", "'='", "$accept", "elp",
  "@1", "variables", "elpvar", 0
};
#endif

# ifdef elpYYPRINT
/* elpYYTOKNUM[elpYYLEX-NUM] -- Internal token number corresponding to
   token elpYYLEX-NUM.  */
static const elpyytype_uint16 elpyytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    58,    61
};
# endif

/* elpYYR1[elpYYN] -- Symbol number of symbol that rule elpYYN derives.  */
static const elpyytype_uint8 elpyyr1[] =
{
       0,    58,    60,    59,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62
};

/* elpYYR2[elpYYN] -- Number of symbols composing right hand side of rule elpYYN.  */
static const elpyytype_uint8 elpyyr2[] =
{
       0,     2,     0,     8,     0,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3
};

/* elpYYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when elpYYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const elpyytype_uint8 elpyydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     2,     4,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     7,
       8,    10,     9,    11,    12,    14,    13,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    47,    46,    45,
      48,    49,    50,    51,    52,    53
};

/* elpYYDEFGOTO[NTERM-NUM].  */
static const elpyytype_int8 elpyydefgoto[] =
{
      -1,     2,     9,    10,    59
};

/* elpYYPACT[STATE-NUM] -- Index in elpYYTABLE of the portion describing
   STATE-NUM.  */
#define elpYYPACT_NINF -8
static const elpyytype_int8 elpyypact[] =
{
      15,    -7,    50,    -4,    -8,    48,    -3,     0,    -8,    -8,
      -5,    -2,    -1,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -8,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    96,    97,    98,    99,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,    -8
};

/* elpYYPGOTO[NTERM-NUM].  */
static const elpyytype_int8 elpyypgoto[] =
{
      -8,    -8,    -8,    -8,    -8
};

/* elpYYTABLE[elpYYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what elpYYDEFACT says.
   If elpYYTABLE_NINF, syntax error.  */
#define elpYYTABLE_NINF -1
static const elpyytype_uint8 elpyytable[] =
{
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,     3,
       4,     5,     6,     7,     8,    60,    61,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,     0,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
     152,   153,   154,   155
};

static const elpyytype_int8 elpyycheck[] =
{
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     3,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    56,
       0,    55,     4,    56,    54,    57,    57,    -1,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    -1,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    -1,    55,    55,
      54,    54,    54,    54
};

/* elpYYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const elpyytype_uint8 elpyystos[] =
{
       0,     3,    59,    56,     0,    55,     4,    56,    54,    60,
      61,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    62,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    54,    54,    54,    54
};

#define elpyyerrok		(elpyyerrstatus = 0)
#define elpyyclearin	(elpyychar = elpYYEMPTY)
#define elpYYEMPTY		(-2)
#define elpYYEOF		0

#define elpYYACCEPT	goto elpyyacceptlab
#define elpYYABORT		goto elpyyabortlab
#define elpYYERROR		goto elpyyerrorlab


/* Like elpYYERROR except do call elpyyerror.  This remains here temporarily
   to ease the transition to the new meaning of elpYYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define elpYYFAIL		goto elpyyerrlab

#define elpYYRECOVERING()  (!!elpyyerrstatus)

#define elpYYBACKUP(Token, Value)					\
do								\
  if (elpyychar == elpYYEMPTY && elpyylen == 1)				\
    {								\
      elpyychar = (Token);						\
      elpyylval = (Value);						\
      elpyytoken = elpYYTRANSLATE (elpyychar);				\
      elpYYPOPSTACK (1);						\
      goto elpyybackup;						\
    }								\
  else								\
    {								\
      elpyyerror (elpYY_("syntax error: cannot back up")); \
      elpYYERROR;							\
    }								\
while (elpYYID (0))


#define elpYYTERROR	1
#define elpYYERRCODE	256


/* elpYYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define elpYYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef elpYYLLOC_DEFAULT
# define elpYYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (elpYYID (N))                                                    \
	{								\
	  (Current).first_line   = elpYYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = elpYYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = elpYYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = elpYYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    elpYYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    elpYYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (elpYYID (0))
#endif


/* elpYY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef elpYY_LOCATION_PRINT
# if elpYYLTYPE_IS_TRIVIAL
#  define elpYY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define elpYY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* elpYYLEX -- calling `elpyylex' with the right arguments.  */

#ifdef elpYYLEX_PARAM
# define elpYYLEX elpyylex (elpYYLEX_PARAM)
#else
# define elpYYLEX elpyylex ()
#endif

/* Enable debugging if requested.  */
#if elpYYDEBUG

# ifndef elpYYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define elpYYFPRINTF fprintf
# endif

# define elpYYDPRINTF(Args)			\
do {						\
  if (elpyydebug)					\
    elpYYFPRINTF Args;				\
} while (elpYYID (0))

# define elpYY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (elpyydebug)								  \
    {									  \
      elpYYFPRINTF (stderr, "%s ", Title);					  \
      elpyy_symbol_print (stderr,						  \
		  Type, Value); \
      elpYYFPRINTF (stderr, "\n");						  \
    }									  \
} while (elpYYID (0))


/*--------------------------------.
| Print this symbol on elpYYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
elpyy_symbol_value_print (FILE *elpyyoutput, int elpyytype, elpYYSTYPE const * const elpyyvaluep)
#else
static void
elpyy_symbol_value_print (elpyyoutput, elpyytype, elpyyvaluep)
    FILE *elpyyoutput;
    int elpyytype;
    elpYYSTYPE const * const elpyyvaluep;
#endif
{
  if (!elpyyvaluep)
    return;
# ifdef elpYYPRINT
  if (elpyytype < elpYYNTOKENS)
    elpYYPRINT (elpyyoutput, elpyytoknum[elpyytype], *elpyyvaluep);
# else
  elpYYUSE (elpyyoutput);
# endif
  switch (elpyytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on elpYYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
elpyy_symbol_print (FILE *elpyyoutput, int elpyytype, elpYYSTYPE const * const elpyyvaluep)
#else
static void
elpyy_symbol_print (elpyyoutput, elpyytype, elpyyvaluep)
    FILE *elpyyoutput;
    int elpyytype;
    elpYYSTYPE const * const elpyyvaluep;
#endif
{
  if (elpyytype < elpYYNTOKENS)
    elpYYFPRINTF (elpyyoutput, "token %s (", elpyytname[elpyytype]);
  else
    elpYYFPRINTF (elpyyoutput, "nterm %s (", elpyytname[elpyytype]);

  elpyy_symbol_value_print (elpyyoutput, elpyytype, elpyyvaluep);
  elpYYFPRINTF (elpyyoutput, ")");
}

/*------------------------------------------------------------------.
| elpyy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
elpyy_stack_print (elpyytype_int16 *bottom, elpyytype_int16 *top)
#else
static void
elpyy_stack_print (bottom, top)
    elpyytype_int16 *bottom;
    elpyytype_int16 *top;
#endif
{
  elpYYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    elpYYFPRINTF (stderr, " %d", *bottom);
  elpYYFPRINTF (stderr, "\n");
}

# define elpYY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (elpyydebug)							\
    elpyy_stack_print ((Bottom), (Top));				\
} while (elpYYID (0))


/*------------------------------------------------.
| Report that the elpYYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
elpyy_reduce_print (elpYYSTYPE *elpyyvsp, int elpyyrule)
#else
static void
elpyy_reduce_print (elpyyvsp, elpyyrule)
    elpYYSTYPE *elpyyvsp;
    int elpyyrule;
#endif
{
  int elpyynrhs = elpyyr2[elpyyrule];
  int elpyyi;
  unsigned long int elpyylno = elpyyrline[elpyyrule];
  elpYYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     elpyyrule - 1, elpyylno);
  /* The symbols being reduced.  */
  for (elpyyi = 0; elpyyi < elpyynrhs; elpyyi++)
    {
      fprintf (stderr, "   $%d = ", elpyyi + 1);
      elpyy_symbol_print (stderr, elpyyrhs[elpyyprhs[elpyyrule] + elpyyi],
		       &(elpyyvsp[(elpyyi + 1) - (elpyynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define elpYY_REDUCE_PRINT(Rule)		\
do {					\
  if (elpyydebug)				\
    elpyy_reduce_print (elpyyvsp, Rule); \
} while (elpYYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int elpyydebug;
#else /* !elpYYDEBUG */
# define elpYYDPRINTF(Args)
# define elpYY_SYMBOL_PRINT(Title, Type, Value, Location)
# define elpYY_STACK_PRINT(Bottom, Top)
# define elpYY_REDUCE_PRINT(Rule)
#endif /* !elpYYDEBUG */


/* elpYYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	elpYYINITDEPTH
# define elpYYINITDEPTH 200
#endif

/* elpYYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   elpYYSTACK_ALLOC_MAXIMUM < elpYYSTACK_BYTES (elpYYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef elpYYMAXDEPTH
# define elpYYMAXDEPTH 10000
#endif



#if elpYYERROR_VERBOSE

# ifndef elpyystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define elpyystrlen strlen
#  else
/* Return the length of elpYYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static elpYYSIZE_T
elpyystrlen (const char *elpyystr)
#else
static elpYYSIZE_T
elpyystrlen (elpyystr)
    const char *elpyystr;
#endif
{
  elpYYSIZE_T elpyylen;
  for (elpyylen = 0; elpyystr[elpyylen]; elpyylen++)
    continue;
  return elpyylen;
}
#  endif
# endif

# ifndef elpyystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define elpyystpcpy stpcpy
#  else
/* Copy elpYYSRC to elpYYDEST, returning the address of the terminating '\0' in
   elpYYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
elpyystpcpy (char *elpyydest, const char *elpyysrc)
#else
static char *
elpyystpcpy (elpyydest, elpyysrc)
    char *elpyydest;
    const char *elpyysrc;
#endif
{
  char *elpyyd = elpyydest;
  const char *elpyys = elpyysrc;

  while ((*elpyyd++ = *elpyys++) != '\0')
    continue;

  return elpyyd - 1;
}
#  endif
# endif

# ifndef elpyytnamerr
/* Copy to elpYYRES the contents of elpYYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for elpyyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  elpYYSTR is taken from elpyytname.  If elpYYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static elpYYSIZE_T
elpyytnamerr (char *elpyyres, const char *elpyystr)
{
  if (*elpyystr == '"')
    {
      elpYYSIZE_T elpyyn = 0;
      char const *elpyyp = elpyystr;

      for (;;)
	switch (*++elpyyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++elpyyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (elpyyres)
	      elpyyres[elpyyn] = *elpyyp;
	    elpyyn++;
	    break;

	  case '"':
	    if (elpyyres)
	      elpyyres[elpyyn] = '\0';
	    return elpyyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! elpyyres)
    return elpyystrlen (elpyystr);

  return elpyystpcpy (elpyyres, elpyystr) - elpyyres;
}
# endif

/* Copy into elpYYRESULT an error message about the unexpected token
   elpYYCHAR while in state elpYYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If elpYYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return elpYYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static elpYYSIZE_T
elpyysyntax_error (char *elpyyresult, int elpyystate, int elpyychar)
{
  int elpyyn = elpyypact[elpyystate];

  if (! (elpYYPACT_NINF < elpyyn && elpyyn <= elpYYLAST))
    return 0;
  else
    {
      int elpyytype = elpYYTRANSLATE (elpyychar);
      elpYYSIZE_T elpyysize0 = elpyytnamerr (0, elpyytname[elpyytype]);
      elpYYSIZE_T elpyysize = elpyysize0;
      elpYYSIZE_T elpyysize1;
      int elpyysize_overflow = 0;
      enum { elpYYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *elpyyarg[elpYYERROR_VERBOSE_ARGS_MAXIMUM];
      int elpyyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      elpYY_("syntax error, unexpected %s");
      elpYY_("syntax error, unexpected %s, expecting %s");
      elpYY_("syntax error, unexpected %s, expecting %s or %s");
      elpYY_("syntax error, unexpected %s, expecting %s or %s or %s");
      elpYY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *elpyyfmt;
      char const *elpyyf;
      static char const elpyyunexpected[] = "syntax error, unexpected %s";
      static char const elpyyexpecting[] = ", expecting %s";
      static char const elpyyor[] = " or %s";
      char elpyyformat[sizeof elpyyunexpected
		    + sizeof elpyyexpecting - 1
		    + ((elpYYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof elpyyor - 1))];
      char const *elpyyprefix = elpyyexpecting;

      /* Start elpYYX at -elpYYN if negative to avoid negative indexes in
	 elpYYCHECK.  */
      int elpyyxbegin = elpyyn < 0 ? -elpyyn : 0;

      /* Stay within bounds of both elpyycheck and elpyytname.  */
      int elpyychecklim = elpYYLAST - elpyyn + 1;
      int elpyyxend = elpyychecklim < elpYYNTOKENS ? elpyychecklim : elpYYNTOKENS;
      int elpyycount = 1;

      elpyyarg[0] = elpyytname[elpyytype];
      elpyyfmt = elpyystpcpy (elpyyformat, elpyyunexpected);

      for (elpyyx = elpyyxbegin; elpyyx < elpyyxend; ++elpyyx)
	if (elpyycheck[elpyyx + elpyyn] == elpyyx && elpyyx != elpYYTERROR)
	  {
	    if (elpyycount == elpYYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		elpyycount = 1;
		elpyysize = elpyysize0;
		elpyyformat[sizeof elpyyunexpected - 1] = '\0';
		break;
	      }
	    elpyyarg[elpyycount++] = elpyytname[elpyyx];
	    elpyysize1 = elpyysize + elpyytnamerr (0, elpyytname[elpyyx]);
	    elpyysize_overflow |= (elpyysize1 < elpyysize);
	    elpyysize = elpyysize1;
	    elpyyfmt = elpyystpcpy (elpyyfmt, elpyyprefix);
	    elpyyprefix = elpyyor;
	  }

      elpyyf = elpYY_(elpyyformat);
      elpyysize1 = elpyysize + elpyystrlen (elpyyf);
      elpyysize_overflow |= (elpyysize1 < elpyysize);
      elpyysize = elpyysize1;

      if (elpyysize_overflow)
	return elpYYSIZE_MAXIMUM;

      if (elpyyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *elpyyp = elpyyresult;
	  int elpyyi = 0;
	  while ((*elpyyp = *elpyyf) != '\0')
	    {
	      if (*elpyyp == '%' && elpyyf[1] == 's' && elpyyi < elpyycount)
		{
		  elpyyp += elpyytnamerr (elpyyp, elpyyarg[elpyyi++]);
		  elpyyf += 2;
		}
	      else
		{
		  elpyyp++;
		  elpyyf++;
		}
	    }
	}
      return elpyysize;
    }
}
#endif /* elpYYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
elpyydestruct (const char *elpyymsg, int elpyytype, elpYYSTYPE *elpyyvaluep)
#else
static void
elpyydestruct (elpyymsg, elpyytype, elpyyvaluep)
    const char *elpyymsg;
    int elpyytype;
    elpYYSTYPE *elpyyvaluep;
#endif
{
  elpYYUSE (elpyyvaluep);

  if (!elpyymsg)
    elpyymsg = "Deleting";
  elpYY_SYMBOL_PRINT (elpyymsg, elpyytype, elpyyvaluep, elpyylocationp);

  switch (elpyytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef elpYYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int elpyyparse (void *elpYYPARSE_PARAM);
#else
int elpyyparse ();
#endif
#else /* ! elpYYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int elpyyparse (void);
#else
int elpyyparse ();
#endif
#endif /* ! elpYYPARSE_PARAM */



/* The look-ahead symbol.  */
int elpyychar;

/* The semantic value of the look-ahead symbol.  */
elpYYSTYPE elpyylval;

/* Number of syntax errors so far.  */
int elpyynerrs;



/*----------.
| elpyyparse.  |
`----------*/

#ifdef elpYYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
elpyyparse (void *elpYYPARSE_PARAM)
#else
int
elpyyparse (elpYYPARSE_PARAM)
    void *elpYYPARSE_PARAM;
#endif
#else /* ! elpYYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
elpyyparse (void)
#else
int
elpyyparse ()

#endif
#endif
{
  
  int elpyystate;
  int elpyyn;
  int elpyyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int elpyyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int elpyytoken = 0;
#if elpYYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char elpyymsgbuf[128];
  char *elpyymsg = elpyymsgbuf;
  elpYYSIZE_T elpyymsg_alloc = sizeof elpyymsgbuf;
#endif

  /* Three stacks and their tools:
     `elpyyss': related to states,
     `elpyyvs': related to semantic values,
     `elpyyls': related to locations.

     Refer to the stacks thru separate pointers, to allow elpyyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  elpyytype_int16 elpyyssa[elpYYINITDEPTH];
  elpyytype_int16 *elpyyss = elpyyssa;
  elpyytype_int16 *elpyyssp;

  /* The semantic value stack.  */
  elpYYSTYPE elpyyvsa[elpYYINITDEPTH];
  elpYYSTYPE *elpyyvs = elpyyvsa;
  elpYYSTYPE *elpyyvsp;



#define elpYYPOPSTACK(N)   (elpyyvsp -= (N), elpyyssp -= (N))

  elpYYSIZE_T elpyystacksize = elpYYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  elpYYSTYPE elpyyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int elpyylen = 0;

  elpYYDPRINTF ((stderr, "Starting parse\n"));

  elpyystate = 0;
  elpyyerrstatus = 0;
  elpyynerrs = 0;
  elpyychar = elpYYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  elpyyssp = elpyyss;
  elpyyvsp = elpyyvs;

  goto elpyysetstate;

/*------------------------------------------------------------.
| elpyynewstate -- Push a new state, which is found in elpyystate.  |
`------------------------------------------------------------*/
 elpyynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  elpyyssp++;

 elpyysetstate:
  *elpyyssp = elpyystate;

  if (elpyyss + elpyystacksize - 1 <= elpyyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      elpYYSIZE_T elpyysize = elpyyssp - elpyyss + 1;

#ifdef elpyyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	elpYYSTYPE *elpyyvs1 = elpyyvs;
	elpyytype_int16 *elpyyss1 = elpyyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if elpyyoverflow is a macro.  */
	elpyyoverflow (elpYY_("memory exhausted"),
		    &elpyyss1, elpyysize * sizeof (*elpyyssp),
		    &elpyyvs1, elpyysize * sizeof (*elpyyvsp),

		    &elpyystacksize);

	elpyyss = elpyyss1;
	elpyyvs = elpyyvs1;
      }
#else /* no elpyyoverflow */
# ifndef elpYYSTACK_RELOCATE
      goto elpyyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (elpYYMAXDEPTH <= elpyystacksize)
	goto elpyyexhaustedlab;
      elpyystacksize *= 2;
      if (elpYYMAXDEPTH < elpyystacksize)
	elpyystacksize = elpYYMAXDEPTH;

      {
	elpyytype_int16 *elpyyss1 = elpyyss;
	union elpyyalloc *elpyyptr =
	  (union elpyyalloc *) elpYYSTACK_ALLOC (elpYYSTACK_BYTES (elpyystacksize));
	if (! elpyyptr)
	  goto elpyyexhaustedlab;
	elpYYSTACK_RELOCATE (elpyyss);
	elpYYSTACK_RELOCATE (elpyyvs);

#  undef elpYYSTACK_RELOCATE
	if (elpyyss1 != elpyyssa)
	  elpYYSTACK_FREE (elpyyss1);
      }
# endif
#endif /* no elpyyoverflow */

      elpyyssp = elpyyss + elpyysize - 1;
      elpyyvsp = elpyyvs + elpyysize - 1;


      elpYYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) elpyystacksize));

      if (elpyyss + elpyystacksize - 1 <= elpyyssp)
	elpYYABORT;
    }

  elpYYDPRINTF ((stderr, "Entering state %d\n", elpyystate));

  goto elpyybackup;

/*-----------.
| elpyybackup.  |
`-----------*/
elpyybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  elpyyn = elpyypact[elpyystate];
  if (elpyyn == elpYYPACT_NINF)
    goto elpyydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* elpYYCHAR is either elpYYEMPTY or elpYYEOF or a valid look-ahead symbol.  */
  if (elpyychar == elpYYEMPTY)
    {
      elpYYDPRINTF ((stderr, "Reading a token: "));
      elpyychar = elpYYLEX;
    }

  if (elpyychar <= elpYYEOF)
    {
      elpyychar = elpyytoken = elpYYEOF;
      elpYYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      elpyytoken = elpYYTRANSLATE (elpyychar);
      elpYY_SYMBOL_PRINT ("Next token is", elpyytoken, &elpyylval, &elpyylloc);
    }

  /* If the proper action on seeing token elpYYTOKEN is to reduce or to
     detect an error, take that action.  */
  elpyyn += elpyytoken;
  if (elpyyn < 0 || elpYYLAST < elpyyn || elpyycheck[elpyyn] != elpyytoken)
    goto elpyydefault;
  elpyyn = elpyytable[elpyyn];
  if (elpyyn <= 0)
    {
      if (elpyyn == 0 || elpyyn == elpYYTABLE_NINF)
	goto elpyyerrlab;
      elpyyn = -elpyyn;
      goto elpyyreduce;
    }

  if (elpyyn == elpYYFINAL)
    elpYYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (elpyyerrstatus)
    elpyyerrstatus--;

  /* Shift the look-ahead token.  */
  elpYY_SYMBOL_PRINT ("Shifting", elpyytoken, &elpyylval, &elpyylloc);

  /* Discard the shifted token unless it is eof.  */
  if (elpyychar != elpYYEOF)
    elpyychar = elpYYEMPTY;

  elpyystate = elpyyn;
  *++elpyyvsp = elpyylval;

  goto elpyynewstate;


/*-----------------------------------------------------------.
| elpyydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
elpyydefault:
  elpyyn = elpyydefact[elpyystate];
  if (elpyyn == 0)
    goto elpyyerrlab;
  goto elpyyreduce;


/*-----------------------------.
| elpyyreduce -- Do a reduction.  |
`-----------------------------*/
elpyyreduce:
  /* elpyyn is the number of a rule to reduce with.  */
  elpyylen = elpyyr2[elpyyn];

  /* If elpYYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets elpYYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to elpYYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that elpYYVAL may be used uninitialized.  */
  elpyyval = elpyyvsp[1-elpyylen];


  elpYY_REDUCE_PRINT (elpyyn);
  switch (elpyyn)
    {
        case 2:
#line 26 "../../../src/elp/src/elp_y.y"
    {
                strcpy(elpTechnoName,(elpyyvsp[(3) - (6)].elpstr)) ;
                elpTechnoVersion = (elpyyvsp[(6) - (6)].elpdbl) ;
                }
    break;

  case 6:
#line 39 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpLMLT] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 7:
#line 40 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpWMLT] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 8:
#line 41 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpDLN]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 9:
#line 42 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpDWN]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 10:
#line 43 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpDLP]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 11:
#line 44 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpDWP]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 12:
#line 45 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpDLE]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 13:
#line 46 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpDWE]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 14:
#line 47 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpDLD]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 15:
#line 48 "../../../src/elp/src/elp_y.y"
    {elpShrink[elpDWD]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 16:
#line 51 "../../../src/elp/src/elp_y.y"
    {elpModel[elpNMOS][elpVT] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 17:
#line 52 "../../../src/elp/src/elp_y.y"
    {elpModel[elpNMOS][elpA]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 18:
#line 53 "../../../src/elp/src/elp_y.y"
    {elpModel[elpNMOS][elpB]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 19:
#line 54 "../../../src/elp/src/elp_y.y"
    {elpModel[elpNMOS][elpRT] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 20:
#line 55 "../../../src/elp/src/elp_y.y"
    {elpModel[elpPMOS][elpVT] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 21:
#line 56 "../../../src/elp/src/elp_y.y"
    {elpModel[elpPMOS][elpA]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 22:
#line 57 "../../../src/elp/src/elp_y.y"
    {elpModel[elpPMOS][elpB]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 23:
#line 58 "../../../src/elp/src/elp_y.y"
    {elpModel[elpPMOS][elpRT] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 24:
#line 61 "../../../src/elp/src/elp_y.y"
    {elpVoltage[elpVDDMAX] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 25:
#line 62 "../../../src/elp/src/elp_y.y"
    {elpVoltage[elpVDDDEG] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 26:
#line 63 "../../../src/elp/src/elp_y.y"
    {elpVoltage[elpVSSDEG] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 27:
#line 64 "../../../src/elp/src/elp_y.y"
    {elpVoltage[elpVTHR]   = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 28:
#line 67 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpNMOS][elpCGS] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 29:
#line 68 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpNMOS][elpCGP] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 30:
#line 69 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpPMOS][elpCGS] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 31:
#line 70 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpPMOS][elpCGP] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 32:
#line 71 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpNMOS][elpCDS] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 33:
#line 72 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpNMOS][elpCDP] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 34:
#line 73 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpNMOS][elpCDW] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 35:
#line 74 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpPMOS][elpCDS] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 36:
#line 75 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpPMOS][elpCDP] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 37:
#line 76 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpPMOS][elpCDW] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 38:
#line 77 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpNMOS][elpCSS] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 39:
#line 78 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpNMOS][elpCSP] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 40:
#line 79 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpNMOS][elpCSW] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 41:
#line 80 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpPMOS][elpCSS] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 42:
#line 81 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpPMOS][elpCSP] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 43:
#line 82 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpPMOS][elpCSW] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 44:
#line 83 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpEMES][elpCSGD] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 45:
#line 84 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpDMES][elpCSGS] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 46:
#line 85 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpDMES][elpCSGD] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 47:
#line 86 "../../../src/elp/src/elp_y.y"
    {elpCapa[elpEMES][elpCSGS] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 48:
#line 89 "../../../src/elp/src/elp_y.y"
    {strcpy(elpEsimName,(elpyyvsp[(3) - (3)].elpstr))       ;}
    break;

  case 49:
#line 90 "../../../src/elp/src/elp_y.y"
    {strcpy(elpModelName,(elpyyvsp[(3) - (3)].elpstr))      ;}
    break;

  case 50:
#line 91 "../../../src/elp/src/elp_y.y"
    {elpEsimLevel = (elpyyvsp[(3) - (3)].elpdbl)            ;}
    break;

  case 51:
#line 94 "../../../src/elp/src/elp_y.y"
    {elpGeneral[elpACM]   = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 52:
#line 95 "../../../src/elp/src/elp_y.y"
    {elpGeneral[elpTEMP]  = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;

  case 53:
#line 96 "../../../src/elp/src/elp_y.y"
    {elpGeneral[elpSLOPE] = (elpyyvsp[(3) - (3)].elpdbl) ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1790 "y.tab.c"
      default: break;
    }
  elpYY_SYMBOL_PRINT ("-> $$ =", elpyyr1[elpyyn], &elpyyval, &elpyyloc);

  elpYYPOPSTACK (elpyylen);
  elpyylen = 0;
  elpYY_STACK_PRINT (elpyyss, elpyyssp);

  *++elpyyvsp = elpyyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  elpyyn = elpyyr1[elpyyn];

  elpyystate = elpyypgoto[elpyyn - elpYYNTOKENS] + *elpyyssp;
  if (0 <= elpyystate && elpyystate <= elpYYLAST && elpyycheck[elpyystate] == *elpyyssp)
    elpyystate = elpyytable[elpyystate];
  else
    elpyystate = elpyydefgoto[elpyyn - elpYYNTOKENS];

  goto elpyynewstate;


/*------------------------------------.
| elpyyerrlab -- here on detecting error |
`------------------------------------*/
elpyyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!elpyyerrstatus)
    {
      ++elpyynerrs;
#if ! elpYYERROR_VERBOSE
      elpyyerror (elpYY_("syntax error"));
#else
      {
	elpYYSIZE_T elpyysize = elpyysyntax_error (0, elpyystate, elpyychar);
	if (elpyymsg_alloc < elpyysize && elpyymsg_alloc < elpYYSTACK_ALLOC_MAXIMUM)
	  {
	    elpYYSIZE_T elpyyalloc = 2 * elpyysize;
	    if (! (elpyysize <= elpyyalloc && elpyyalloc <= elpYYSTACK_ALLOC_MAXIMUM))
	      elpyyalloc = elpYYSTACK_ALLOC_MAXIMUM;
	    if (elpyymsg != elpyymsgbuf)
	      elpYYSTACK_FREE (elpyymsg);
	    elpyymsg = (char *) elpYYSTACK_ALLOC (elpyyalloc);
	    if (elpyymsg)
	      elpyymsg_alloc = elpyyalloc;
	    else
	      {
		elpyymsg = elpyymsgbuf;
		elpyymsg_alloc = sizeof elpyymsgbuf;
	      }
	  }

	if (0 < elpyysize && elpyysize <= elpyymsg_alloc)
	  {
	    (void) elpyysyntax_error (elpyymsg, elpyystate, elpyychar);
	    elpyyerror (elpyymsg);
	  }
	else
	  {
	    elpyyerror (elpYY_("syntax error"));
	    if (elpyysize != 0)
	      goto elpyyexhaustedlab;
	  }
      }
#endif
    }



  if (elpyyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (elpyychar <= elpYYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (elpyychar == elpYYEOF)
	    elpYYABORT;
	}
      else
	{
	  elpyydestruct ("Error: discarding",
		      elpyytoken, &elpyylval);
	  elpyychar = elpYYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto elpyyerrlab1;


/*---------------------------------------------------.
| elpyyerrorlab -- error raised explicitly by elpYYERROR.  |
`---------------------------------------------------*/
elpyyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     elpYYERROR and the label elpyyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto elpyyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this elpYYERROR.  */
  elpYYPOPSTACK (elpyylen);
  elpyylen = 0;
  elpYY_STACK_PRINT (elpyyss, elpyyssp);
  elpyystate = *elpyyssp;
  goto elpyyerrlab1;


/*-------------------------------------------------------------.
| elpyyerrlab1 -- common code for both syntax error and elpYYERROR.  |
`-------------------------------------------------------------*/
elpyyerrlab1:
  elpyyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      elpyyn = elpyypact[elpyystate];
      if (elpyyn != elpYYPACT_NINF)
	{
	  elpyyn += elpYYTERROR;
	  if (0 <= elpyyn && elpyyn <= elpYYLAST && elpyycheck[elpyyn] == elpYYTERROR)
	    {
	      elpyyn = elpyytable[elpyyn];
	      if (0 < elpyyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (elpyyssp == elpyyss)
	elpYYABORT;


      elpyydestruct ("Error: popping",
		  elpyystos[elpyystate], elpyyvsp);
      elpYYPOPSTACK (1);
      elpyystate = *elpyyssp;
      elpYY_STACK_PRINT (elpyyss, elpyyssp);
    }

  if (elpyyn == elpYYFINAL)
    elpYYACCEPT;

  *++elpyyvsp = elpyylval;


  /* Shift the error token.  */
  elpYY_SYMBOL_PRINT ("Shifting", elpyystos[elpyyn], elpyyvsp, elpyylsp);

  elpyystate = elpyyn;
  goto elpyynewstate;


/*-------------------------------------.
| elpyyacceptlab -- elpYYACCEPT comes here.  |
`-------------------------------------*/
elpyyacceptlab:
  elpyyresult = 0;
  goto elpyyreturn;

/*-----------------------------------.
| elpyyabortlab -- elpYYABORT comes here.  |
`-----------------------------------*/
elpyyabortlab:
  elpyyresult = 1;
  goto elpyyreturn;

#ifndef elpyyoverflow
/*-------------------------------------------------.
| elpyyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
elpyyexhaustedlab:
  elpyyerror (elpYY_("memory exhausted"));
  elpyyresult = 2;
  /* Fall through.  */
#endif

elpyyreturn:
  if (elpyychar != elpYYEOF && elpyychar != elpYYEMPTY)
     elpyydestruct ("Cleanup: discarding lookahead",
		 elpyytoken, &elpyylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this elpYYABORT or elpYYACCEPT.  */
  elpYYPOPSTACK (elpyylen);
  elpYY_STACK_PRINT (elpyyss, elpyyssp);
  while (elpyyssp != elpyyss)
    {
      elpyydestruct ("Cleanup: popping",
		  elpyystos[*elpyyssp], elpyyvsp);
      elpYYPOPSTACK (1);
    }
#ifndef elpyyoverflow
  if (elpyyss != elpyyssa)
    elpYYSTACK_FREE (elpyyss);
#endif
#if elpYYERROR_VERBOSE
  if (elpyymsg != elpyymsgbuf)
    elpYYSTACK_FREE (elpyymsg);
#endif
  /* Make sure elpYYID is used.  */
  return elpYYID (elpyyresult);
}


#line 98 "../../../src/elp/src/elp_y.y"


extern int  elpyylineno ;
extern char elpyytext[] ;

elpyyerror()

{
elpError(1001,elpyytext,elpyylineno) ; /* si erreur de syntaxe => erreur 1001 */
}


elpyywrap() {return 1 ;}


