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

/* All symbols defined below should begin with edif or EDIF, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define EDIFBISON 1

/* Bison version.  */
#define EDIFBISON_VERSION "2.3"

/* Skeleton name.  */
#define EDIFSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define EDIFPURE 0

/* Using locations.  */
#define EDIFLSP_NEEDED 0



/* Tokens.  */
#ifndef EDIFTOKENTYPE
# define EDIFTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum ediftokentype {
     T_EDIF = 258,
     T_EDIFVERSION = 259,
     T_EDIFLEVEL = 260,
     T_TECHNOLOGY = 261,
     T_CELLTYPE = 262,
     T_CELLTYPE_GENERIC = 263,
     T_CELLTYPE_TIE = 264,
     T_CELLTYPE_RIPPER = 265,
     T_PROPERTY = 266,
     T_VIEWTYPE = 267,
     T_INTERFACE = 268,
     T_CONTENTS = 269,
     T_JOINED = 270,
     T_INSTANCE = 271,
     T_VIEWREF = 272,
     T_PORT = 273,
     T_DIRECTION = 274,
     T_INOUT = 275,
     T_PORTREF = 276,
     T_NETLIST = 277,
     T_KEYWORDMAP = 278,
     T_KEYWORDLEVEL = 279,
     T_EXTERNAL = 280,
     T_LIBRARYREF = 281,
     T_OUTPUT = 282,
     T_INSTANCEREF = 283,
     T_MEMBER = 284,
     T_RENAME = 285,
     T_NAME = 286,
     T_STRING = 287,
     T_PORTINSTANCE = 288,
     T_LIBRARY = 289,
     T_CELL = 290,
     T_VIEW = 291,
     T_NET = 292,
     T_CELLREF = 293,
     T_INPUT = 294,
     T_STATUS = 295,
     T_IDENT = 296,
     T_ARRAY = 297,
     T_RENAME_STRING = 298,
     T_PORTLIST = 299,
     T_INTEGER = 300
   };
#endif
/* Tokens.  */
#define T_EDIF 258
#define T_EDIFVERSION 259
#define T_EDIFLEVEL 260
#define T_TECHNOLOGY 261
#define T_CELLTYPE 262
#define T_CELLTYPE_GENERIC 263
#define T_CELLTYPE_TIE 264
#define T_CELLTYPE_RIPPER 265
#define T_PROPERTY 266
#define T_VIEWTYPE 267
#define T_INTERFACE 268
#define T_CONTENTS 269
#define T_JOINED 270
#define T_INSTANCE 271
#define T_VIEWREF 272
#define T_PORT 273
#define T_DIRECTION 274
#define T_INOUT 275
#define T_PORTREF 276
#define T_NETLIST 277
#define T_KEYWORDMAP 278
#define T_KEYWORDLEVEL 279
#define T_EXTERNAL 280
#define T_LIBRARYREF 281
#define T_OUTPUT 282
#define T_INSTANCEREF 283
#define T_MEMBER 284
#define T_RENAME 285
#define T_NAME 286
#define T_STRING 287
#define T_PORTINSTANCE 288
#define T_LIBRARY 289
#define T_CELL 290
#define T_VIEW 291
#define T_NET 292
#define T_CELLREF 293
#define T_INPUT 294
#define T_STATUS 295
#define T_IDENT 296
#define T_ARRAY 297
#define T_RENAME_STRING 298
#define T_PORTLIST 299
#define T_INTEGER 300




/* Copy the first part of user declarations.  */
#line 1 "../../../src/mbkedif/src/parser_y.y"


/*----------------------------------------------------------------------*/
/*                      @(#) Edif Parser For MBK.                       */
/*----------------------------------------------------------------------*/
/*                      version 1.00:   by Fred Petrot.                 */
/*                      version 4.02:   by Mokhtar Hirech (Jan. 92)     */
/*                      version 4.03:   by Olivier BEAURIN (Aou. 93)    */
/*                      version 4.04:   by Olivier BEAURIN (Sep. 93)    */
/*                      version 4.06:   by Olivier BEAURIN (Nov. 93)    */
/*----------------------------------------------------------------------*/

#include <mut.h>
#include <mlo.h>
#include <stdlib.h>
#include <string.h>

/*---------------------------------------------------------\
                     Les defines
\---------------------------------------------------------*/
#define MAXSTRLEN       100

/*---------------------------------------------------------\
                     Globals variables
\---------------------------------------------------------*/
static lofig_list     *EDIF_LOFIG                = (lofig_list *) NULL;
static lofig_list     *EDIF_PTFIG                = (lofig_list *) NULL;
static losig_list     *EDIF_PTSIG                = (losig_list *) NULL;
static chain_list     *EDIF_PORTLIST_SIG         = (chain_list *) NULL;
static chain_list     *EDIF_PORTLIST_SIG_TMP     = (chain_list *) NULL;
static loins_list     *EDIF_PTINS                = (loins_list *) NULL;
static chain_list     *EDIF_V_PORTINSTANCE       = (chain_list *) NULL;

static char           *EDIF_RIPPER_IN            = (char *)NULL;
static char           *EDIF_RIPPER_OUT           = (char *)NULL;

static char            EDIF_BLACKBOX             = 'N';  
static int             EDIF_BUS_WIDTH            = 0;
static char            EDIF_DIRECTION            = UNKNOWN;
static int             EDIF_INDEX                = 0;
static char            EDIF_SIGTYPE              = 'Z'; /* Z=not alr. defined, I=interne, E=externe */
static int             EDIF_NOLOAD_LOCON         = 0;
static int             EDIF_NOLOAD_FIG           = 0;

static int             EDIF_BASE_CELL;
static char           *EDIF_FIGNAME;
static char           *EDIF_INS_MODELNAME;
static char            EDIF_ARRAYPORTNAME[MAXSTRLEN];
static char            EDIF_PORTLIST_NUM;
static char            EDIF_PORTLIST;
static char           *EDIF_RIPPER_CELL = (char *) NULL;

/*---------------------------------------------------------\
                     Functions
\---------------------------------------------------------*/
static  void        REnamealloc         ( );
static  void        del_patch           ( );
static  void        sig_merge           ( );

static  char        bus_nameref         ( );
static  char        CheckCadenceBusError( );
static  char       *CheckCadenceNetError( );
static  lofig_list *get_figure_pt       ( );
static  char        is_portinstance     ( );
extern  char       *edif_busname        ( );

extern  int         ediflineno;



/* Enabling traces.  */
#ifndef EDIFDEBUG
# define EDIFDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef EDIFERROR_VERBOSE
# undef EDIFERROR_VERBOSE
# define EDIFERROR_VERBOSE 1
#else
# define EDIFERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef EDIFTOKEN_TABLE
# define EDIFTOKEN_TABLE 0
#endif

#if ! defined EDIFSTYPE && ! defined EDIFSTYPE_IS_DECLARED
typedef union EDIFSTYPE
#line 74 "../../../src/mbkedif/src/parser_y.y"
{
		long    lval;
		char    sval[100];
	}
/* Line 187 of yacc.c.  */
#line 261 "y.tab.c"
	EDIFSTYPE;
# define edifstype EDIFSTYPE /* obsolescent; will be withdrawn */
# define EDIFSTYPE_IS_DECLARED 1
# define EDIFSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 274 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef EDIFTYPE_UINT8
typedef EDIFTYPE_UINT8 ediftype_uint8;
#else
typedef unsigned char ediftype_uint8;
#endif

#ifdef EDIFTYPE_INT8
typedef EDIFTYPE_INT8 ediftype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char ediftype_int8;
#else
typedef short int ediftype_int8;
#endif

#ifdef EDIFTYPE_UINT16
typedef EDIFTYPE_UINT16 ediftype_uint16;
#else
typedef unsigned short int ediftype_uint16;
#endif

#ifdef EDIFTYPE_INT16
typedef EDIFTYPE_INT16 ediftype_int16;
#else
typedef short int ediftype_int16;
#endif

#ifndef EDIFSIZE_T
# ifdef __SIZE_TYPE__
#  define EDIFSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define EDIFSIZE_T size_t
# elif ! defined EDIFSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define EDIFSIZE_T size_t
# else
#  define EDIFSIZE_T unsigned int
# endif
#endif

#define EDIFSIZE_MAXIMUM ((EDIFSIZE_T) -1)

#ifndef EDIF_
# if EDIFENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define EDIF_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef EDIF_
#  define EDIF_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define EDIFUSE(e) ((void) (e))
#else
# define EDIFUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define EDIFID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
EDIFID (int i)
#else
static int
EDIFID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined edifoverflow || EDIFERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef EDIFSTACK_USE_ALLOCA
#  if EDIFSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define EDIFSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define EDIFSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define EDIFSTACK_ALLOC alloca
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

# ifdef EDIFSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define EDIFSTACK_FREE(Ptr) do { /* empty */; } while (EDIFID (0))
#  ifndef EDIFSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define EDIFSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define EDIFSTACK_ALLOC EDIFMALLOC
#  define EDIFSTACK_FREE EDIFFREE
#  ifndef EDIFSTACK_ALLOC_MAXIMUM
#   define EDIFSTACK_ALLOC_MAXIMUM EDIFSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined EDIFMALLOC || defined malloc) \
	     && (defined EDIFFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef EDIFMALLOC
#   define EDIFMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (EDIFSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef EDIFFREE
#   define EDIFFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined edifoverflow || EDIFERROR_VERBOSE */


#if (! defined edifoverflow \
     && (! defined __cplusplus \
	 || (defined EDIFSTYPE_IS_TRIVIAL && EDIFSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union edifalloc
{
  ediftype_int16 edifss;
  EDIFSTYPE edifvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define EDIFSTACK_GAP_MAXIMUM (sizeof (union edifalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define EDIFSTACK_BYTES(N) \
     ((N) * (sizeof (ediftype_int16) + sizeof (EDIFSTYPE)) \
      + EDIFSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef EDIFCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define EDIFCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define EDIFCOPY(To, From, Count)		\
      do					\
	{					\
	  EDIFSIZE_T edifi;				\
	  for (edifi = 0; edifi < (Count); edifi++)	\
	    (To)[edifi] = (From)[edifi];		\
	}					\
      while (EDIFID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables EDIFSIZE and EDIFSTACKSIZE give the old and new number of
   elements in the stack, and EDIFPTR gives the new location of the
   stack.  Advance EDIFPTR to a properly aligned location for the next
   stack.  */
# define EDIFSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	EDIFSIZE_T edifnewbytes;						\
	EDIFCOPY (&edifptr->Stack, Stack, edifsize);				\
	Stack = &edifptr->Stack;						\
	edifnewbytes = edifstacksize * sizeof (*Stack) + EDIFSTACK_GAP_MAXIMUM; \
	edifptr += edifnewbytes / sizeof (*edifptr);				\
      }									\
    while (EDIFID (0))

#endif

/* EDIFFINAL -- State number of the termination state.  */
#define EDIFFINAL  7
/* EDIFLAST -- Last index in EDIFTABLE.  */
#define EDIFLAST   217

/* EDIFNTOKENS -- Number of terminals.  */
#define EDIFNTOKENS  47
/* EDIFNNTS -- Number of nonterminals.  */
#define EDIFNNTS  70
/* EDIFNRULES -- Number of rules.  */
#define EDIFNRULES  115
/* EDIFNRULES -- Number of states.  */
#define EDIFNSTATES  225

/* EDIFTRANSLATE(EDIFLEX) -- Bison symbol number corresponding to EDIFLEX.  */
#define EDIFUNDEFTOK  2
#define EDIFMAXUTOK   300

#define EDIFTRANSLATE(EDIFX)						\
  ((unsigned int) (EDIFX) <= EDIFMAXUTOK ? ediftranslate[EDIFX] : EDIFUNDEFTOK)

/* EDIFTRANSLATE[EDIFLEX] -- Bison symbol number corresponding to EDIFLEX.  */
static const ediftype_uint8 ediftranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45
};

#if EDIFDEBUG
/* EDIFPRHS[EDIFN] -- Index of the first RHS symbol of rule number EDIFN in
   EDIFRHS.  */
static const ediftype_uint16 edifprhs[] =
{
       0,     0,     3,    11,    17,    21,    22,    25,    31,    32,
      35,    37,    38,    45,    46,    49,    51,    53,    61,    65,
      66,    69,    71,    73,    74,    77,    83,    84,    87,    89,
      90,    97,   101,   105,   109,   110,   113,   115,   117,   121,
     122,   124,   133,   134,   137,   139,   141,   145,   146,   149,
     151,   153,   154,   163,   167,   172,   173,   176,   181,   185,
     190,   194,   195,   202,   203,   213,   214,   217,   219,   223,
     224,   227,   229,   231,   232,   237,   238,   241,   245,   252,
     256,   257,   260,   262,   266,   273,   280,   290,   294,   295,
     298,   300,   302,   304,   309,   317,   318,   321,   323,   325,
     329,   333,   337,   338,   341,   344,   346,   348,   350,   355,
     360,   364,   368,   369,   372,   374
};

/* EDIFRHS -- A `-1'-separated list of the rules' RHS.  */
static const ediftype_int8 edifrhs[] =
{
      48,     0,    -1,     3,   111,    49,    50,    51,    63,    46,
      -1,     4,    45,    45,    45,    46,    -1,     5,    45,    46,
      -1,    -1,    51,    52,    -1,    25,   111,    50,    53,    46,
      -1,    -1,    53,    54,    -1,    55,    -1,    -1,    35,   111,
      56,    69,    57,    46,    -1,    -1,    57,    58,    -1,    59,
      -1,    72,    -1,    36,   111,    12,    22,    46,    60,    46,
      -1,    13,    61,    46,    -1,    -1,    61,    62,    -1,   105,
      -1,    72,    -1,    -1,    63,    64,    -1,    34,   111,    50,
      65,    46,    -1,    -1,    65,    66,    -1,    67,    -1,    -1,
      35,   111,    68,    69,    70,    46,    -1,     7,     8,    46,
      -1,     7,     9,    46,    -1,     7,    10,    46,    -1,    -1,
      70,    71,    -1,    74,    -1,    72,    -1,    11,   109,    46,
      -1,    -1,    72,    -1,    36,   111,    12,    22,    46,   102,
      75,    46,    -1,    -1,    75,    76,    -1,    77,    -1,    72,
      -1,    14,    78,    46,    -1,    -1,    78,    79,    -1,    80,
      -1,    87,    -1,    -1,    16,   111,    82,    73,    81,    83,
     109,    46,    -1,    17,   111,    46,    -1,    17,   111,    85,
      46,    -1,    -1,    83,    84,    -1,    33,   111,   109,    46,
      -1,    38,   111,    46,    -1,    38,   111,    86,    46,    -1,
      26,   111,    46,    -1,    -1,    37,   111,    88,    98,    90,
      46,    -1,    -1,    37,    42,   111,    45,    46,    89,    92,
      90,    46,    -1,    -1,    90,    91,    -1,    72,    -1,    15,
      93,    46,    -1,    -1,    93,    92,    -1,    97,    -1,    94,
      -1,    -1,    44,    95,    96,    46,    -1,    -1,    96,   101,
      -1,    21,   111,    46,    -1,    21,   111,    28,   111,    46,
      46,    -1,    15,    99,    46,    -1,    -1,    99,   100,    -1,
     101,    -1,    21,   111,    46,    -1,    21,   111,    28,   111,
      46,    46,    -1,    21,    29,   111,    45,    46,    46,    -1,
      21,    29,   111,    45,    46,    28,   111,    46,    46,    -1,
      13,   103,    46,    -1,    -1,   103,   104,    -1,   105,    -1,
     113,    -1,    72,    -1,    18,   111,   106,    46,    -1,    18,
      42,   111,    45,    46,   106,    46,    -1,    -1,   106,   107,
      -1,   108,    -1,    72,    -1,    19,    20,    46,    -1,    19,
      39,    46,    -1,    19,    27,    46,    -1,    -1,   109,   110,
      -1,   109,    46,    -1,   111,    -1,    41,    -1,    45,    -1,
      30,    41,    43,    46,    -1,    30,   112,    43,    46,    -1,
      31,    41,    46,    -1,    15,   114,    46,    -1,    -1,   114,
     115,    -1,   116,    -1,    21,   111,    46,    -1
};

/* EDIFRLINE[EDIFN] -- source line where rule number EDIFN was defined.  */
static const ediftype_uint16 edifrline[] =
{
       0,   122,   122,   126,   137,   150,   152,   156,   159,   161,
     165,   170,   169,   208,   210,   214,   215,   219,   227,   230,
     232,   236,   237,   243,   245,   249,   252,   254,   258,   263,
     262,   409,   410,   411,   417,   419,   423,   424,   428,   432,
     434,   440,   447,   449,   453,   454,   458,   464,   466,   470,
     471,   476,   475,   503,   504,   507,   509,   513,   520,   524,
     531,   536,   535,   552,   551,   609,   611,   615,   619,   622,
     624,   628,   629,   634,   633,   653,   655,   659,   695,   768,
     771,   773,   777,   781,   810,   855,   890,   947,   950,   952,
     956,   957,   958,   962,   969,  1004,  1006,  1010,  1011,  1015,
    1019,  1023,  1031,  1032,  1037,  1038,  1042,  1046,  1053,  1057,
    1064,  1071,  1074,  1076,  1080,  1084
};
#endif

#if EDIFDEBUG || EDIFERROR_VERBOSE || EDIFTOKEN_TABLE
/* EDIFTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at EDIFNTOKENS, nonterminals.  */
static const char *const ediftname[] =
{
  "$end", "error", "$undefined", "T_EDIF", "T_EDIFVERSION", "T_EDIFLEVEL",
  "T_TECHNOLOGY", "T_CELLTYPE", "T_CELLTYPE_GENERIC", "T_CELLTYPE_TIE",
  "T_CELLTYPE_RIPPER", "T_PROPERTY", "T_VIEWTYPE", "T_INTERFACE",
  "T_CONTENTS", "T_JOINED", "T_INSTANCE", "T_VIEWREF", "T_PORT",
  "T_DIRECTION", "T_INOUT", "T_PORTREF", "T_NETLIST", "T_KEYWORDMAP",
  "T_KEYWORDLEVEL", "T_EXTERNAL", "T_LIBRARYREF", "T_OUTPUT",
  "T_INSTANCEREF", "T_MEMBER", "T_RENAME", "T_NAME", "T_STRING",
  "T_PORTINSTANCE", "T_LIBRARY", "T_CELL", "T_VIEW", "T_NET", "T_CELLREF",
  "T_INPUT", "T_STATUS", "T_IDENT", "T_ARRAY", "T_RENAME_STRING",
  "T_PORTLIST", "T_INTEGER", "')'", "$accept", "r_edif", "r_edifversion",
  "r_ediflevel", "l_externals", "r_external", "l_finexternal",
  "r_finexternal", "r_extcell", "@1", "l_finextcell", "r_finextcell",
  "r_extview", "r_extinterface", "l_finextinterf", "r_finextinterf",
  "l_finedif", "r_library", "l_finlibrary", "r_finlibrary", "r_cell", "@2",
  "r_celltype", "l_fincell", "r_fincell", "r_property", "r_opt_property",
  "r_view", "l_finview", "r_finview", "r_contents", "l_fincontents",
  "r_fincontents", "r_instance", "@3", "r_viewref", "l_portinstance",
  "r_portinstance", "r_cellref", "r_libraryref", "r_net", "@4", "@5",
  "l_finnet", "r_finnet", "r_array_joined", "l_array_joined", "r_portlist",
  "@6", "l_list_portref", "r_array_portref", "r_joined", "l_finjoined",
  "r_finjoined", "r_portref", "r_interface", "l_fininterface",
  "r_fininterface", "r_port", "l_finport", "r_finport", "r_direction",
  "l_anything", "r_anything", "r_namedef", "r_name", "r_port_joined",
  "l_finport_joined", "r_finport_joined", "r_shorted_portref", 0
};
#endif

# ifdef EDIFPRINT
/* EDIFTOKNUM[EDIFLEX-NUM] -- Internal token number corresponding to
   token EDIFLEX-NUM.  */
static const ediftype_uint16 ediftoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    41
};
# endif

/* EDIFR1[EDIFN] -- Symbol number of symbol that rule EDIFN derives.  */
static const ediftype_uint8 edifr1[] =
{
       0,    47,    48,    49,    50,    51,    51,    52,    53,    53,
      54,    56,    55,    57,    57,    58,    58,    59,    60,    61,
      61,    62,    62,    63,    63,    64,    65,    65,    66,    68,
      67,    69,    69,    69,    70,    70,    71,    71,    72,    73,
      73,    74,    75,    75,    76,    76,    77,    78,    78,    79,
      79,    81,    80,    82,    82,    83,    83,    84,    85,    85,
      86,    88,    87,    89,    87,    90,    90,    91,    92,    93,
      93,    92,    92,    95,    94,    96,    96,    97,    97,    98,
      99,    99,   100,   101,   101,   101,   101,   102,   103,   103,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     112,   113,   114,   114,   115,   116
};

/* EDIFR2[EDIFN] -- Number of symbols composing right hand side of rule EDIFN.  */
static const ediftype_uint8 edifr2[] =
{
       0,     2,     7,     5,     3,     0,     2,     5,     0,     2,
       1,     0,     6,     0,     2,     1,     1,     7,     3,     0,
       2,     1,     1,     0,     2,     5,     0,     2,     1,     0,
       6,     3,     3,     3,     0,     2,     1,     1,     3,     0,
       1,     8,     0,     2,     1,     1,     3,     0,     2,     1,
       1,     0,     8,     3,     4,     0,     2,     4,     3,     4,
       3,     0,     6,     0,     9,     0,     2,     1,     3,     0,
       2,     1,     1,     0,     4,     0,     2,     3,     6,     3,
       0,     2,     1,     3,     6,     6,     9,     3,     0,     2,
       1,     1,     1,     4,     7,     0,     2,     1,     1,     3,
       3,     3,     0,     2,     2,     1,     1,     1,     4,     4,
       3,     3,     0,     2,     1,     3
};

/* EDIFDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when EDIFTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const ediftype_uint8 edifdefact[] =
{
       0,     0,     0,     0,   106,   107,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,   110,
     108,   109,     0,     0,    23,     0,     4,     0,     6,     0,
       3,     0,     0,     2,    24,     8,     0,     0,    26,     0,
       7,     9,    10,     0,    11,     0,    25,    27,    28,     0,
      29,     0,    13,     0,     0,     0,     0,     0,    34,    31,
      32,    33,   102,     0,    12,    14,    15,    16,     0,     0,
       0,     0,    30,    35,    37,    36,    38,     0,   103,   105,
       0,     0,   104,     0,     0,     0,     0,    19,     0,     0,
       0,    17,    88,    42,     0,    18,    20,    22,    21,     0,
       0,     0,    95,   112,    87,    92,    89,    90,    91,    47,
      41,    45,    43,    44,     0,     0,     0,     0,     0,     0,
      93,    98,    96,    97,     0,   111,   113,   114,     0,     0,
      46,    48,    49,    50,    95,     0,     0,     0,     0,     0,
       0,    61,     0,    99,   101,   100,   115,     0,    39,     0,
       0,    94,     0,    40,    51,     0,    80,    65,     0,    53,
       0,    55,    63,     0,     0,     0,    54,   102,     0,     0,
      79,    81,    82,    62,    67,    66,     0,    58,     0,     0,
      56,     0,    69,     0,    73,    65,    72,    71,     0,     0,
       0,    59,   102,    52,     0,     0,    75,     0,     0,     0,
      83,    60,     0,    68,    70,     0,    77,     0,    64,     0,
       0,    57,     0,    74,    76,     0,     0,     0,     0,    85,
      84,    78,     0,     0,    86
};

/* EDIFDEFGOTO[NTERM-NUM].  */
static const ediftype_int16 edifdefgoto[] =
{
      -1,     2,    12,    18,    24,    28,    37,    41,    42,    49,
      57,    65,    66,    88,    90,    96,    29,    34,    43,    47,
      48,    53,    52,    68,    73,   121,   154,    75,   100,   112,
     113,   117,   131,   132,   161,   148,   167,   180,   160,   178,
     133,   150,   168,   164,   175,   185,   194,   186,   196,   207,
     187,   157,   163,   171,   172,    93,    99,   106,    98,   115,
     122,   123,    77,    78,    79,    10,   108,   116,   126,   127
};

/* EDIFPACT[STATE-NUM] -- Index in EDIFTABLE of the portion describing
   STATE-NUM.  */
#define EDIFPACT_NINF -62
static const ediftype_int16 edifpact[] =
{
      16,    81,    22,    88,   -62,   -62,    64,   -62,    24,    40,
      58,    57,    79,    23,    78,    84,    59,    76,   -62,   -62,
     -62,   -62,    80,    89,   111,    91,   -62,    81,   -62,    21,
     -62,    79,    81,   -62,   -62,   -62,    79,    29,   -62,    81,
     -62,   -62,   -62,    63,   -62,    81,   -62,   -62,   -62,   131,
     -62,   124,   -62,   131,    94,    95,    96,    -7,   -62,   -62,
     -62,   -62,   -62,    81,   -62,   -62,   -62,   -62,    -6,    41,
     132,    81,   -62,   -62,   -62,   -62,   -62,    44,   -62,   -62,
     123,   135,   -62,   102,   127,   137,   105,   -62,   106,   140,
      -3,   -62,   -62,   -62,    73,   -62,   -62,   -62,   -62,    -9,
      -4,    81,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   109,     1,     3,    -5,   110,    39,
     -62,   -62,   -62,   -62,    81,   -62,   -62,   -62,    81,    75,
     -62,   -62,   -62,   -62,   -62,   112,   113,   114,   115,   138,
      81,   -62,     2,   -62,   -62,   -62,   -62,    81,   151,   118,
     149,   -62,    61,   -62,   -62,   119,   -62,   -62,    81,   -62,
     120,   -62,   -62,     4,     5,    27,   -62,   134,    13,    47,
     -62,   -62,   -62,   -62,   -62,   -62,    81,   -62,   125,    81,
     -62,    50,   -62,    81,   -62,   -62,   -62,   -62,    81,    26,
     126,   -62,   -62,   -62,    12,    33,   -62,     6,   128,    81,
     -62,   -62,    67,   -62,   -62,    81,   -62,    14,   -62,   130,
     133,   -62,   139,   -62,   -62,    35,   142,   143,    81,   -62,
     -62,   -62,   144,   145,   -62
};

/* EDIFPGOTO[NTERM-NUM].  */
static const ediftype_int8 edifpgoto[] =
{
     -62,   -62,   -62,   -13,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   116,   -62,   -62,   -54,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -15,   -62,   -20,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -30,   -62,   -62,   -62,    82,    46,
     -62,   -62,   -61,   -62,    -1,   -62,   -62,   -62,   -62,   -62
};

/* EDIFTABLE[EDIFPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what EDIFDEFACT says.
   If EDIFTABLE_NINF, syntax error.  */
#define EDIFTABLE_NINF -1
static const ediftype_uint8 ediftable[] =
{
       6,    69,    62,    67,    62,    62,   103,    62,    62,    94,
     109,   128,    62,    62,    74,    94,    62,    62,    35,     1,
     119,   119,     7,    38,   124,   169,    31,   182,   182,    63,
      71,    36,   129,   183,   183,   169,    97,   104,    44,    64,
      72,   130,   110,    95,    50,   105,   111,   120,   151,   125,
     170,   173,   208,   176,   199,    32,   184,   184,   203,   135,
     213,   205,    70,   218,    39,    13,   136,    33,    11,    19,
      81,     3,   200,   177,     3,    40,   188,     3,   137,   206,
       3,   219,     4,    14,    17,     4,     5,    76,     4,     5,
      82,     4,     5,   102,   153,     5,   193,     3,    45,   158,
     114,    15,    16,     3,    22,     3,   181,   159,     4,    46,
     174,     3,     5,   211,     4,   101,     4,   140,     5,     8,
       5,    23,     4,   138,    20,    25,     5,   139,   141,     9,
      21,   202,    54,    55,    56,    26,    27,    30,    51,   149,
      59,    60,    61,   174,    80,    83,   152,    84,    85,    86,
      87,    89,    91,    92,   118,   147,   134,   165,   143,   144,
     145,   146,    62,   155,   156,   162,   166,   179,   189,    58,
     197,   191,   201,   209,   204,   190,   215,   214,   192,   216,
     142,   107,   195,     0,     0,   217,     0,   198,   220,   221,
     223,   224,     0,     0,     0,     0,     0,     0,   210,     0,
       0,     0,     0,     0,   212,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   222
};

static const ediftype_int16 edifcheck[] =
{
       1,    62,    11,    57,    11,    11,    15,    11,    11,    18,
      14,    16,    11,    11,    68,    18,    11,    11,    31,     3,
      19,    19,     0,    36,    21,    21,    27,    15,    15,    36,
      36,    32,    37,    21,    21,    21,    90,    46,    39,    46,
      46,    46,    46,    46,    45,    99,   100,    46,    46,    46,
      46,    46,    46,    26,    28,    34,    44,    44,    46,    20,
      46,    28,    63,    28,    35,    41,    27,    46,     4,    46,
      71,    30,    46,    46,    30,    46,    29,    30,    39,    46,
      30,    46,    41,    43,     5,    41,    45,    46,    41,    45,
      46,    41,    45,    94,   148,    45,    46,    30,    35,    38,
     101,    43,    45,    30,    45,    30,   167,    46,    41,    46,
     164,    30,    45,    46,    41,    42,    41,    42,    45,    31,
      45,    45,    41,   124,    46,    45,    45,   128,   129,    41,
      46,   192,     8,     9,    10,    46,    25,    46,     7,   140,
      46,    46,    46,   197,    12,    22,   147,    12,    46,    22,
      13,    46,    46,    13,    45,    17,    46,   158,    46,    46,
      46,    46,    11,    45,    15,    46,    46,    33,   169,    53,
     185,    46,    46,    45,   194,   176,    46,   207,   179,    46,
     134,    99,   183,    -1,    -1,    46,    -1,   188,    46,    46,
      46,    46,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,
      -1,    -1,    -1,    -1,   205,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   218
};

/* EDIFSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const ediftype_uint8 edifstos[] =
{
       0,     3,    48,    30,    41,    45,   111,     0,    31,    41,
     112,     4,    49,    41,    43,    43,    45,     5,    50,    46,
      46,    46,    45,    45,    51,    45,    46,    25,    52,    63,
      46,   111,    34,    46,    64,    50,   111,    53,    50,    35,
      46,    54,    55,    65,   111,    35,    46,    66,    67,    56,
     111,     7,    69,    68,     8,     9,    10,    57,    69,    46,
      46,    46,    11,    36,    46,    58,    59,    72,    70,   109,
     111,    36,    46,    71,    72,    74,    46,   109,   110,   111,
      12,   111,    46,    22,    12,    46,    22,    13,    60,    46,
      61,    46,    13,   102,    18,    46,    62,    72,   105,   103,
      75,    42,   111,    15,    46,    72,   104,   105,   113,    14,
      46,    72,    76,    77,   111,   106,   114,    78,    45,    19,
      46,    72,   107,   108,    21,    46,   115,   116,    16,    37,
      46,    79,    80,    87,    46,    20,    27,    39,   111,   111,
      42,   111,   106,    46,    46,    46,    46,    17,    82,   111,
      88,    46,   111,    72,    73,    45,    15,    98,    38,    46,
      85,    81,    46,    99,    90,   111,    46,    83,    89,    21,
      46,   100,   101,    46,    72,    91,    26,    46,    86,    33,
      84,   109,    15,    21,    44,    92,    94,    97,    29,   111,
     111,    46,   111,    46,    93,   111,    95,    90,   111,    28,
      46,    46,   109,    46,    92,    28,    46,    96,    46,    45,
     111,    46,   111,    46,   101,    46,    46,    46,    28,    46,
      46,    46,   111,    46,    46
};

#define ediferrok		(ediferrstatus = 0)
#define edifclearin	(edifchar = EDIFEMPTY)
#define EDIFEMPTY		(-2)
#define EDIFEOF		0

#define EDIFACCEPT	goto edifacceptlab
#define EDIFABORT		goto edifabortlab
#define EDIFERROR		goto ediferrorlab


/* Like EDIFERROR except do call ediferror.  This remains here temporarily
   to ease the transition to the new meaning of EDIFERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define EDIFFAIL		goto ediferrlab

#define EDIFRECOVERING()  (!!ediferrstatus)

#define EDIFBACKUP(Token, Value)					\
do								\
  if (edifchar == EDIFEMPTY && ediflen == 1)				\
    {								\
      edifchar = (Token);						\
      ediflval = (Value);						\
      ediftoken = EDIFTRANSLATE (edifchar);				\
      EDIFPOPSTACK (1);						\
      goto edifbackup;						\
    }								\
  else								\
    {								\
      ediferror (EDIF_("syntax error: cannot back up")); \
      EDIFERROR;							\
    }								\
while (EDIFID (0))


#define EDIFTERROR	1
#define EDIFERRCODE	256


/* EDIFLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define EDIFRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef EDIFLLOC_DEFAULT
# define EDIFLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (EDIFID (N))                                                    \
	{								\
	  (Current).first_line   = EDIFRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = EDIFRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = EDIFRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = EDIFRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    EDIFRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    EDIFRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (EDIFID (0))
#endif


/* EDIF_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef EDIF_LOCATION_PRINT
# if EDIFLTYPE_IS_TRIVIAL
#  define EDIF_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define EDIF_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* EDIFLEX -- calling `ediflex' with the right arguments.  */

#ifdef EDIFLEX_PARAM
# define EDIFLEX ediflex (EDIFLEX_PARAM)
#else
# define EDIFLEX ediflex ()
#endif

/* Enable debugging if requested.  */
#if EDIFDEBUG

# ifndef EDIFFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define EDIFFPRINTF fprintf
# endif

# define EDIFDPRINTF(Args)			\
do {						\
  if (edifdebug)					\
    EDIFFPRINTF Args;				\
} while (EDIFID (0))

# define EDIF_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (edifdebug)								  \
    {									  \
      EDIFFPRINTF (stderr, "%s ", Title);					  \
      edif_symbol_print (stderr,						  \
		  Type, Value); \
      EDIFFPRINTF (stderr, "\n");						  \
    }									  \
} while (EDIFID (0))


/*--------------------------------.
| Print this symbol on EDIFOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
edif_symbol_value_print (FILE *edifoutput, int ediftype, EDIFSTYPE const * const edifvaluep)
#else
static void
edif_symbol_value_print (edifoutput, ediftype, edifvaluep)
    FILE *edifoutput;
    int ediftype;
    EDIFSTYPE const * const edifvaluep;
#endif
{
  if (!edifvaluep)
    return;
# ifdef EDIFPRINT
  if (ediftype < EDIFNTOKENS)
    EDIFPRINT (edifoutput, ediftoknum[ediftype], *edifvaluep);
# else
  EDIFUSE (edifoutput);
# endif
  switch (ediftype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on EDIFOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
edif_symbol_print (FILE *edifoutput, int ediftype, EDIFSTYPE const * const edifvaluep)
#else
static void
edif_symbol_print (edifoutput, ediftype, edifvaluep)
    FILE *edifoutput;
    int ediftype;
    EDIFSTYPE const * const edifvaluep;
#endif
{
  if (ediftype < EDIFNTOKENS)
    EDIFFPRINTF (edifoutput, "token %s (", ediftname[ediftype]);
  else
    EDIFFPRINTF (edifoutput, "nterm %s (", ediftname[ediftype]);

  edif_symbol_value_print (edifoutput, ediftype, edifvaluep);
  EDIFFPRINTF (edifoutput, ")");
}

/*------------------------------------------------------------------.
| edif_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
edif_stack_print (ediftype_int16 *bottom, ediftype_int16 *top)
#else
static void
edif_stack_print (bottom, top)
    ediftype_int16 *bottom;
    ediftype_int16 *top;
#endif
{
  EDIFFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    EDIFFPRINTF (stderr, " %d", *bottom);
  EDIFFPRINTF (stderr, "\n");
}

# define EDIF_STACK_PRINT(Bottom, Top)				\
do {								\
  if (edifdebug)							\
    edif_stack_print ((Bottom), (Top));				\
} while (EDIFID (0))


/*------------------------------------------------.
| Report that the EDIFRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
edif_reduce_print (EDIFSTYPE *edifvsp, int edifrule)
#else
static void
edif_reduce_print (edifvsp, edifrule)
    EDIFSTYPE *edifvsp;
    int edifrule;
#endif
{
  int edifnrhs = edifr2[edifrule];
  int edifi;
  unsigned long int ediflno = edifrline[edifrule];
  EDIFFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     edifrule - 1, ediflno);
  /* The symbols being reduced.  */
  for (edifi = 0; edifi < edifnrhs; edifi++)
    {
      fprintf (stderr, "   $%d = ", edifi + 1);
      edif_symbol_print (stderr, edifrhs[edifprhs[edifrule] + edifi],
		       &(edifvsp[(edifi + 1) - (edifnrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define EDIF_REDUCE_PRINT(Rule)		\
do {					\
  if (edifdebug)				\
    edif_reduce_print (edifvsp, Rule); \
} while (EDIFID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int edifdebug;
#else /* !EDIFDEBUG */
# define EDIFDPRINTF(Args)
# define EDIF_SYMBOL_PRINT(Title, Type, Value, Location)
# define EDIF_STACK_PRINT(Bottom, Top)
# define EDIF_REDUCE_PRINT(Rule)
#endif /* !EDIFDEBUG */


/* EDIFINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	EDIFINITDEPTH
# define EDIFINITDEPTH 200
#endif

/* EDIFMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   EDIFSTACK_ALLOC_MAXIMUM < EDIFSTACK_BYTES (EDIFMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef EDIFMAXDEPTH
# define EDIFMAXDEPTH 10000
#endif



#if EDIFERROR_VERBOSE

# ifndef edifstrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define edifstrlen strlen
#  else
/* Return the length of EDIFSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static EDIFSIZE_T
edifstrlen (const char *edifstr)
#else
static EDIFSIZE_T
edifstrlen (edifstr)
    const char *edifstr;
#endif
{
  EDIFSIZE_T ediflen;
  for (ediflen = 0; edifstr[ediflen]; ediflen++)
    continue;
  return ediflen;
}
#  endif
# endif

# ifndef edifstpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define edifstpcpy stpcpy
#  else
/* Copy EDIFSRC to EDIFDEST, returning the address of the terminating '\0' in
   EDIFDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
edifstpcpy (char *edifdest, const char *edifsrc)
#else
static char *
edifstpcpy (edifdest, edifsrc)
    char *edifdest;
    const char *edifsrc;
#endif
{
  char *edifd = edifdest;
  const char *edifs = edifsrc;

  while ((*edifd++ = *edifs++) != '\0')
    continue;

  return edifd - 1;
}
#  endif
# endif

# ifndef ediftnamerr
/* Copy to EDIFRES the contents of EDIFSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for ediferror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  EDIFSTR is taken from ediftname.  If EDIFRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static EDIFSIZE_T
ediftnamerr (char *edifres, const char *edifstr)
{
  if (*edifstr == '"')
    {
      EDIFSIZE_T edifn = 0;
      char const *edifp = edifstr;

      for (;;)
	switch (*++edifp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++edifp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (edifres)
	      edifres[edifn] = *edifp;
	    edifn++;
	    break;

	  case '"':
	    if (edifres)
	      edifres[edifn] = '\0';
	    return edifn;
	  }
    do_not_strip_quotes: ;
    }

  if (! edifres)
    return edifstrlen (edifstr);

  return edifstpcpy (edifres, edifstr) - edifres;
}
# endif

/* Copy into EDIFRESULT an error message about the unexpected token
   EDIFCHAR while in state EDIFSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If EDIFRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return EDIFSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static EDIFSIZE_T
edifsyntax_error (char *edifresult, int edifstate, int edifchar)
{
  int edifn = edifpact[edifstate];

  if (! (EDIFPACT_NINF < edifn && edifn <= EDIFLAST))
    return 0;
  else
    {
      int ediftype = EDIFTRANSLATE (edifchar);
      EDIFSIZE_T edifsize0 = ediftnamerr (0, ediftname[ediftype]);
      EDIFSIZE_T edifsize = edifsize0;
      EDIFSIZE_T edifsize1;
      int edifsize_overflow = 0;
      enum { EDIFERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *edifarg[EDIFERROR_VERBOSE_ARGS_MAXIMUM];
      int edifx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      EDIF_("syntax error, unexpected %s");
      EDIF_("syntax error, unexpected %s, expecting %s");
      EDIF_("syntax error, unexpected %s, expecting %s or %s");
      EDIF_("syntax error, unexpected %s, expecting %s or %s or %s");
      EDIF_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *ediffmt;
      char const *ediff;
      static char const edifunexpected[] = "syntax error, unexpected %s";
      static char const edifexpecting[] = ", expecting %s";
      static char const edifor[] = " or %s";
      char edifformat[sizeof edifunexpected
		    + sizeof edifexpecting - 1
		    + ((EDIFERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof edifor - 1))];
      char const *edifprefix = edifexpecting;

      /* Start EDIFX at -EDIFN if negative to avoid negative indexes in
	 EDIFCHECK.  */
      int edifxbegin = edifn < 0 ? -edifn : 0;

      /* Stay within bounds of both edifcheck and ediftname.  */
      int edifchecklim = EDIFLAST - edifn + 1;
      int edifxend = edifchecklim < EDIFNTOKENS ? edifchecklim : EDIFNTOKENS;
      int edifcount = 1;

      edifarg[0] = ediftname[ediftype];
      ediffmt = edifstpcpy (edifformat, edifunexpected);

      for (edifx = edifxbegin; edifx < edifxend; ++edifx)
	if (edifcheck[edifx + edifn] == edifx && edifx != EDIFTERROR)
	  {
	    if (edifcount == EDIFERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		edifcount = 1;
		edifsize = edifsize0;
		edifformat[sizeof edifunexpected - 1] = '\0';
		break;
	      }
	    edifarg[edifcount++] = ediftname[edifx];
	    edifsize1 = edifsize + ediftnamerr (0, ediftname[edifx]);
	    edifsize_overflow |= (edifsize1 < edifsize);
	    edifsize = edifsize1;
	    ediffmt = edifstpcpy (ediffmt, edifprefix);
	    edifprefix = edifor;
	  }

      ediff = EDIF_(edifformat);
      edifsize1 = edifsize + edifstrlen (ediff);
      edifsize_overflow |= (edifsize1 < edifsize);
      edifsize = edifsize1;

      if (edifsize_overflow)
	return EDIFSIZE_MAXIMUM;

      if (edifresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *edifp = edifresult;
	  int edifi = 0;
	  while ((*edifp = *ediff) != '\0')
	    {
	      if (*edifp == '%' && ediff[1] == 's' && edifi < edifcount)
		{
		  edifp += ediftnamerr (edifp, edifarg[edifi++]);
		  ediff += 2;
		}
	      else
		{
		  edifp++;
		  ediff++;
		}
	    }
	}
      return edifsize;
    }
}
#endif /* EDIFERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
edifdestruct (const char *edifmsg, int ediftype, EDIFSTYPE *edifvaluep)
#else
static void
edifdestruct (edifmsg, ediftype, edifvaluep)
    const char *edifmsg;
    int ediftype;
    EDIFSTYPE *edifvaluep;
#endif
{
  EDIFUSE (edifvaluep);

  if (!edifmsg)
    edifmsg = "Deleting";
  EDIF_SYMBOL_PRINT (edifmsg, ediftype, edifvaluep, ediflocationp);

  switch (ediftype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef EDIFPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int edifparse (void *EDIFPARSE_PARAM);
#else
int edifparse ();
#endif
#else /* ! EDIFPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int edifparse (void);
#else
int edifparse ();
#endif
#endif /* ! EDIFPARSE_PARAM */



/* The look-ahead symbol.  */
int edifchar;

/* The semantic value of the look-ahead symbol.  */
EDIFSTYPE ediflval;

/* Number of syntax errors so far.  */
int edifnerrs;



/*----------.
| edifparse.  |
`----------*/

#ifdef EDIFPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
edifparse (void *EDIFPARSE_PARAM)
#else
int
edifparse (EDIFPARSE_PARAM)
    void *EDIFPARSE_PARAM;
#endif
#else /* ! EDIFPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
edifparse (void)
#else
int
edifparse ()

#endif
#endif
{
  
  int edifstate;
  int edifn;
  int edifresult;
  /* Number of tokens to shift before error messages enabled.  */
  int ediferrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int ediftoken = 0;
#if EDIFERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char edifmsgbuf[128];
  char *edifmsg = edifmsgbuf;
  EDIFSIZE_T edifmsg_alloc = sizeof edifmsgbuf;
#endif

  /* Three stacks and their tools:
     `edifss': related to states,
     `edifvs': related to semantic values,
     `edifls': related to locations.

     Refer to the stacks thru separate pointers, to allow edifoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  ediftype_int16 edifssa[EDIFINITDEPTH];
  ediftype_int16 *edifss = edifssa;
  ediftype_int16 *edifssp;

  /* The semantic value stack.  */
  EDIFSTYPE edifvsa[EDIFINITDEPTH];
  EDIFSTYPE *edifvs = edifvsa;
  EDIFSTYPE *edifvsp;



#define EDIFPOPSTACK(N)   (edifvsp -= (N), edifssp -= (N))

  EDIFSIZE_T edifstacksize = EDIFINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  EDIFSTYPE edifval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int ediflen = 0;

  EDIFDPRINTF ((stderr, "Starting parse\n"));

  edifstate = 0;
  ediferrstatus = 0;
  edifnerrs = 0;
  edifchar = EDIFEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  edifssp = edifss;
  edifvsp = edifvs;

  goto edifsetstate;

/*------------------------------------------------------------.
| edifnewstate -- Push a new state, which is found in edifstate.  |
`------------------------------------------------------------*/
 edifnewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  edifssp++;

 edifsetstate:
  *edifssp = edifstate;

  if (edifss + edifstacksize - 1 <= edifssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      EDIFSIZE_T edifsize = edifssp - edifss + 1;

#ifdef edifoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	EDIFSTYPE *edifvs1 = edifvs;
	ediftype_int16 *edifss1 = edifss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if edifoverflow is a macro.  */
	edifoverflow (EDIF_("memory exhausted"),
		    &edifss1, edifsize * sizeof (*edifssp),
		    &edifvs1, edifsize * sizeof (*edifvsp),

		    &edifstacksize);

	edifss = edifss1;
	edifvs = edifvs1;
      }
#else /* no edifoverflow */
# ifndef EDIFSTACK_RELOCATE
      goto edifexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (EDIFMAXDEPTH <= edifstacksize)
	goto edifexhaustedlab;
      edifstacksize *= 2;
      if (EDIFMAXDEPTH < edifstacksize)
	edifstacksize = EDIFMAXDEPTH;

      {
	ediftype_int16 *edifss1 = edifss;
	union edifalloc *edifptr =
	  (union edifalloc *) EDIFSTACK_ALLOC (EDIFSTACK_BYTES (edifstacksize));
	if (! edifptr)
	  goto edifexhaustedlab;
	EDIFSTACK_RELOCATE (edifss);
	EDIFSTACK_RELOCATE (edifvs);

#  undef EDIFSTACK_RELOCATE
	if (edifss1 != edifssa)
	  EDIFSTACK_FREE (edifss1);
      }
# endif
#endif /* no edifoverflow */

      edifssp = edifss + edifsize - 1;
      edifvsp = edifvs + edifsize - 1;


      EDIFDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) edifstacksize));

      if (edifss + edifstacksize - 1 <= edifssp)
	EDIFABORT;
    }

  EDIFDPRINTF ((stderr, "Entering state %d\n", edifstate));

  goto edifbackup;

/*-----------.
| edifbackup.  |
`-----------*/
edifbackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  edifn = edifpact[edifstate];
  if (edifn == EDIFPACT_NINF)
    goto edifdefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* EDIFCHAR is either EDIFEMPTY or EDIFEOF or a valid look-ahead symbol.  */
  if (edifchar == EDIFEMPTY)
    {
      EDIFDPRINTF ((stderr, "Reading a token: "));
      edifchar = EDIFLEX;
    }

  if (edifchar <= EDIFEOF)
    {
      edifchar = ediftoken = EDIFEOF;
      EDIFDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      ediftoken = EDIFTRANSLATE (edifchar);
      EDIF_SYMBOL_PRINT ("Next token is", ediftoken, &ediflval, &ediflloc);
    }

  /* If the proper action on seeing token EDIFTOKEN is to reduce or to
     detect an error, take that action.  */
  edifn += ediftoken;
  if (edifn < 0 || EDIFLAST < edifn || edifcheck[edifn] != ediftoken)
    goto edifdefault;
  edifn = ediftable[edifn];
  if (edifn <= 0)
    {
      if (edifn == 0 || edifn == EDIFTABLE_NINF)
	goto ediferrlab;
      edifn = -edifn;
      goto edifreduce;
    }

  if (edifn == EDIFFINAL)
    EDIFACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (ediferrstatus)
    ediferrstatus--;

  /* Shift the look-ahead token.  */
  EDIF_SYMBOL_PRINT ("Shifting", ediftoken, &ediflval, &ediflloc);

  /* Discard the shifted token unless it is eof.  */
  if (edifchar != EDIFEOF)
    edifchar = EDIFEMPTY;

  edifstate = edifn;
  *++edifvsp = ediflval;

  goto edifnewstate;


/*-----------------------------------------------------------.
| edifdefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
edifdefault:
  edifn = edifdefact[edifstate];
  if (edifn == 0)
    goto ediferrlab;
  goto edifreduce;


/*-----------------------------.
| edifreduce -- Do a reduction.  |
`-----------------------------*/
edifreduce:
  /* edifn is the number of a rule to reduce with.  */
  ediflen = edifr2[edifn];

  /* If EDIFLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets EDIFVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to EDIFVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that EDIFVAL may be used uninitialized.  */
  edifval = edifvsp[1-ediflen];


  EDIF_REDUCE_PRINT (edifn);
  switch (edifn)
    {
        case 3:
#line 127 "../../../src/mbkedif/src/parser_y.y"
    { 
			if (((edifvsp[(2) - (5)].lval) != 2) || ((edifvsp[(3) - (5)].lval) != 0) || ((edifvsp[(4) - (5)].lval) != 0))
			{
				fprintf (stderr, "*** mbk error *** edifloadlofig : unable to read this version of edif.\n");
				exit (1);
			}
		}
    break;

  case 4:
#line 138 "../../../src/mbkedif/src/parser_y.y"
    { 
			if ((edifvsp[(2) - (3)].lval) != 0)
			{
				fprintf (stderr, "*** mbk error *** edifloadlofig : EdifLevel incorrect ( must be 0 ).\n");
				exit (1);
			}
		}
    break;

  case 11:
#line 170 "../../../src/mbkedif/src/parser_y.y"
    {
			lofig_list *ptf;
			char       *cell_name;
                        
        
			cell_name = namealloc((edifvsp[(2) - (2)].sval));
                        
			if( !( ptf = get_figure_pt( cell_name ) ) )  
			{
				EDIF_PTFIG = addlofig( cell_name );
				EDIF_NOLOAD_FIG = 0; 
				EDIF_NOLOAD_LOCON = 0;
			}
			else
			{
				if( cell_name == EDIF_FIGNAME )
					EDIF_PTFIG = EDIF_LOFIG;
				else
					EDIF_PTFIG = ptf;

				EDIF_BASE_CELL = incatalog( cell_name );

				if( ptf->LOCON && EDIF_BASE_CELL || ptf->LOSIG )
					EDIF_NOLOAD_FIG = 1; 
				else
					EDIF_NOLOAD_FIG = 0; 

				EDIF_NOLOAD_LOCON = ( ptf->LOCON ) ? 1 : 0;

			}
			EDIF_INDEX = 0;
		}
    break;

  case 12:
#line 203 "../../../src/mbkedif/src/parser_y.y"
    {
			EDIF_PTFIG->MODE = 'A';
		}
    break;

  case 17:
#line 220 "../../../src/mbkedif/src/parser_y.y"
    {
			if( EDIF_BASE_CELL && EDIF_PTFIG == EDIF_LOFIG )
				EDIF_BLACKBOX = 'Y';
		}
    break;

  case 29:
#line 263 "../../../src/mbkedif/src/parser_y.y"
    { 
			lofig_list      *ptf;
			char            *cell_name;
                        
			cell_name = namealloc((edifvsp[(2) - (2)].sval));

			EDIF_BASE_CELL = 0;

			if (!(ptf = get_figure_pt(cell_name)))
			{
				EDIF_PTFIG = addlofig ((edifvsp[(2) - (2)].sval));
				EDIF_NOLOAD_FIG = 0;
				EDIF_NOLOAD_LOCON = 0;
			}
			else
			{
				if( cell_name == EDIF_FIGNAME )
					EDIF_PTFIG = EDIF_LOFIG;
				else
					EDIF_PTFIG = ptf;

				EDIF_BASE_CELL = incatalog( cell_name );

				if( ptf->LOCON && EDIF_BASE_CELL || ptf->LOSIG )
					EDIF_NOLOAD_FIG = 1; 
				else
					EDIF_NOLOAD_FIG = 0; 

				EDIF_NOLOAD_LOCON = (ptf->LOCON) ? 1 : 0;
			}
			EDIF_INDEX = 0;
		}
    break;

  case 30:
#line 296 "../../../src/mbkedif/src/parser_y.y"
    {
			loins_list *inst_pt;

			if (EDIF_NOLOAD_FIG == 0)
			{
				char       *array_cname;
				char       *array_sname;
				locon_list *ptcon;
				char        new_sig_name[MAXSTRLEN];
				char        end;
				locon_list *EDIF_INS_PTCON  = (locon_list *) NULL;
				locon_list *EDIF_PTCON      = (locon_list *) NULL;
                losig_list *sigvss;
                losig_list *sigvdd;
                locon_list *ptlocon;

                for( ptlocon = EDIF_PTFIG->LOCON; ptlocon; ptlocon = ptlocon->NEXT )
                {
                    if( isvss( ptlocon->NAME ) || isvdd( ptlocon->NAME ) )
                    {
                        break;
                    }
                }

                if( !ptlocon )
                {
                    sigvss = addlosig (EDIF_PTFIG,
                                       ++EDIF_INDEX,
                                       addchain( NULL, namealloc( VSS ) ),
                                       EXTERNAL );
                    sigvdd = addlosig (EDIF_PTFIG,
                                       ++EDIF_INDEX,
                                       addchain( NULL, namealloc( VDD ) ),
                                       EXTERNAL );
                    addlocon( EDIF_PTFIG, namealloc( VDD ), sigvdd, IN );
                    addlocon( EDIF_PTFIG, namealloc( VSS ), sigvss, IN );
                }
				/* scan all instances */
				for( EDIF_PTINS = EDIF_PTFIG->LOINS; EDIF_PTINS; EDIF_PTINS=EDIF_PTINS->NEXT ) 
				{
					if( EDIF_PTINS->FIGNAME != EDIF_RIPPER_CELL )
					{
						for (EDIF_INS_PTCON  = EDIF_PTINS->LOCON; 
						     EDIF_INS_PTCON != (locon_list *) NULL;
						     EDIF_INS_PTCON  = EDIF_INS_PTCON->NEXT)
						{
                            if( isvss( EDIF_INS_PTCON->NAME ) )
                            {
                                EDIF_INS_PTCON->SIG = sigvss;
                            }
                            if( isvdd( EDIF_INS_PTCON->NAME ) )
                            {
                                EDIF_INS_PTCON->SIG = sigvdd;
                            }
							if (EDIF_INS_PTCON->SIG == NULL)
							{
								sprintf(new_sig_name,"unused_%d",++EDIF_INDEX);
								if ( EDIF_PTINS->USER == (struct ptype *) NULL ||
								    !is_portinstance( EDIF_PTINS, EDIF_INS_PTCON->NAME ) )
								{
									fprintf (stderr, "*** mbk warning *** edifloadlofig :\n");
									fprintf (stderr, "Connector '%s' ",EDIF_INS_PTCON->NAME);
									fprintf (stderr, "of instance '%s' ",EDIF_PTINS->INSNAME);
									fprintf (stderr, "has no signal in figure ");
									fprintf (stderr, "'%s'.\n",EDIF_PTFIG->NAME);
									fprintf(stderr, "==> Creation of signal '%s'\n", new_sig_name); 
								}
	
								EDIF_INS_PTCON->SIG = addlosig (EDIF_PTFIG, EDIF_INDEX,
								                              addchain( NULL, namealloc( new_sig_name ) ),
									                              INTERNAL );
							}
						}
					}


					/* scan all figure's connectors */
					for  (EDIF_PTCON  = EDIF_PTFIG->LOCON; 
					      EDIF_PTCON != (locon_list *) NULL;
					      EDIF_PTCON  = EDIF_PTCON->NEXT)
					{
						if (EDIF_PTCON->SIG == NULL) 
						{
							sprintf(new_sig_name,"unused_%d",++EDIF_INDEX);

							fprintf (stderr, "*** mbk warning *** ");
							fprintf (stderr, "edifloadlofig : \n");
							fprintf (stderr, "connector '%s' ",EDIF_PTCON->NAME);
							fprintf (stderr, "of figure '%s' ",EDIF_PTFIG->NAME);
							fprintf (stderr, "has no signal\n");
							fprintf(stderr, "==> Creation of signal '%s'\n", new_sig_name); 

							EDIF_PTCON->SIG = addlosig (EDIF_PTFIG, EDIF_INDEX,
							                          addchain( NULL, namealloc( new_sig_name ) ),
							                          EXTERNAL );

						}
					}
				}
			}
			/* free all instance->USER that are filled with chain_list data */
			for( inst_pt = EDIF_PTFIG->LOINS; inst_pt; inst_pt=inst_pt->NEXT )
			{
				if( inst_pt->USER != (struct ptype *)NULL )
				{
					freechain( (chain_list *)inst_pt->USER );
					inst_pt->USER = (struct ptype *)NULL;
				}
			}
		}
    break;

  case 33:
#line 412 "../../../src/mbkedif/src/parser_y.y"
    {
			EDIF_RIPPER_CELL = EDIF_PTFIG->NAME;
		}
    break;

  case 39:
#line 432 "../../../src/mbkedif/src/parser_y.y"
    {
          }
    break;

  case 40:
#line 435 "../../../src/mbkedif/src/parser_y.y"
    {
          }
    break;

  case 41:
#line 441 "../../../src/mbkedif/src/parser_y.y"
    {
			if( EDIF_BASE_CELL && EDIF_PTFIG == EDIF_LOFIG )
				EDIF_BLACKBOX = 'Y';
		}
    break;

  case 46:
#line 459 "../../../src/mbkedif/src/parser_y.y"
    { 
			EDIF_PTFIG->MODE = 'A';
		}
    break;

  case 51:
#line 476 "../../../src/mbkedif/src/parser_y.y"
    {
			if( EDIF_NOLOAD_FIG == 0 )
			{
				lofig_list *EDIF_INS_PTMODEL  = (lofig_list *) NULL;
				chain_list *EDIF_INS_SIGCHAIN = (chain_list *) NULL;
				locon_list *EDIF_INS_PTCON    = (locon_list *) NULL;

				EDIF_INS_PTMODEL = getlofig( EDIF_INS_MODELNAME, 'P' );
				EDIF_INS_SIGCHAIN = NULL;

				for( EDIF_INS_PTCON = EDIF_INS_PTMODEL->LOCON;
				     EDIF_INS_PTCON != NULL; 
				     EDIF_INS_PTCON = EDIF_INS_PTCON->NEXT) 
					EDIF_INS_SIGCHAIN = addchain( EDIF_INS_SIGCHAIN, NULL );

				EDIF_PTINS = addloins( EDIF_PTFIG, (edifvsp[(2) - (4)].sval), EDIF_INS_PTMODEL, EDIF_INS_SIGCHAIN );

				EDIF_V_PORTINSTANCE = addchain(EDIF_V_PORTINSTANCE, NULL);
			}
		}
    break;

  case 52:
#line 497 "../../../src/mbkedif/src/parser_y.y"
    {
			EDIF_PTINS->USER = (struct ptype *)EDIF_V_PORTINSTANCE->DATA; 
		}
    break;

  case 57:
#line 514 "../../../src/mbkedif/src/parser_y.y"
    {
			EDIF_V_PORTINSTANCE->DATA = addchain( EDIF_V_PORTINSTANCE->DATA, (void *)namealloc( (edifvsp[(2) - (4)].sval) ) );
		}
    break;

  case 58:
#line 521 "../../../src/mbkedif/src/parser_y.y"
    { 
			EDIF_INS_MODELNAME = namealloc( (edifvsp[(2) - (3)].sval) ); 
		}
    break;

  case 59:
#line 525 "../../../src/mbkedif/src/parser_y.y"
    { 
			EDIF_INS_MODELNAME = namealloc( (edifvsp[(2) - (4)].sval) ); 
		}
    break;

  case 61:
#line 536 "../../../src/mbkedif/src/parser_y.y"
    {
			if (EDIF_NOLOAD_FIG == 0)
			{
				EDIF_PTSIG = addlosig (EDIF_PTFIG, ++EDIF_INDEX, addchain (NULL, CheckCadenceNetError( (edifvsp[(2) - (2)].sval) ) ), 'Z');
				EDIF_SIGTYPE = INTERNAL;
			}
			EDIF_BUS_WIDTH = 1;
		}
    break;

  case 62:
#line 545 "../../../src/mbkedif/src/parser_y.y"
    { 
			if (EDIF_NOLOAD_FIG == 0)
			{
				EDIF_PTSIG->TYPE = EDIF_SIGTYPE; 
			}
		}
    break;

  case 63:
#line 552 "../../../src/mbkedif/src/parser_y.y"
    {
			if (EDIF_NOLOAD_FIG == 0)
			{
				int         i;
				int         begin;
				int         end;
				char        net_name[MAXSTRLEN];
				losig_list *EDIF_SIG_TMP = (losig_list *) NULL;

				if( (edifvsp[(4) - (5)].lval) <= 0 )
				{ 
					fprintf(stderr, "*** mbk error *** edifloadlofig : Array width must be > 0\n");
					exit( 1 ); 
				}

				for (i=0; i < (edifvsp[(4) - (5)].lval); i++)
				{
					if( (CheckCadenceBusError ((edifvsp[(3) - (5)].sval), &begin, &end)) && (i <= abs( end - begin) ) )
						sprintf(&net_name[0], "%s %d", EDIF_ARRAYPORTNAME, ( begin <= end ) ? begin + i : begin - i); 
					else
						sprintf(&net_name[0], "%s %d", (edifvsp[(3) - (5)].sval), i); 

					EDIF_PTSIG = addlosig (EDIF_PTFIG, ++EDIF_INDEX, addchain (NULL, namealloc (net_name)), 'Z');
					EDIF_SIGTYPE = INTERNAL;
					EDIF_BUS_WIDTH = (edifvsp[(4) - (5)].lval);
				}

				EDIF_SIG_TMP = EDIF_PTSIG;
				for (i=0; i<EDIF_BUS_WIDTH; i++)
				{
        			EDIF_PORTLIST_SIG = addchain(EDIF_PORTLIST_SIG, (void *)EDIF_PTSIG);
        			EDIF_PTSIG = EDIF_PTSIG->NEXT;
				}
				EDIF_PTSIG = EDIF_SIG_TMP;
				EDIF_PORTLIST_SIG_TMP = EDIF_PORTLIST_SIG;
			}
		}
    break;

  case 64:
#line 590 "../../../src/mbkedif/src/parser_y.y"
    {
			if (EDIF_NOLOAD_FIG == 0)
			{
				int         i;
				losig_list *ptsig;

				freechain( (chain_list *)EDIF_PORTLIST_SIG );
				EDIF_PORTLIST_SIG = (chain_list *)NULL;

				ptsig = EDIF_PTSIG;
				for (i = EDIF_BUS_WIDTH - 1; i >= 0; i--)
				{
					ptsig->TYPE = EDIF_SIGTYPE;
					ptsig = ptsig->NEXT;
				}
			}
		}
    break;

  case 73:
#line 634 "../../../src/mbkedif/src/parser_y.y"
    {
			EDIF_PORTLIST = 1;
			EDIF_PORTLIST_NUM = 0;
			EDIF_PORTLIST_SIG = EDIF_PORTLIST_SIG_TMP;
		}
    break;

  case 74:
#line 640 "../../../src/mbkedif/src/parser_y.y"
    {
			EDIF_PORTLIST = 0;

			if (EDIF_PORTLIST_NUM < EDIF_BUS_WIDTH)
			{
				fprintf (stderr, "*** mbk error *** edifloadlofig : ");
				fprintf (stderr, "PortList width < signal bus '%s' width ( line %d ).\n", 
				                  edif_busname( getsigname(EDIF_PTSIG)), ediflineno );
				exit (1);
			}
		}
    break;

  case 77:
#line 660 "../../../src/mbkedif/src/parser_y.y"
    { 
			if (EDIF_NOLOAD_FIG == 0)
			{
				int         i;
				losig_list  *ptsig;
				char         port_name[MAXSTRLEN];
				int          begin, end;
				locon_list  *EDIF_PTCON = (locon_list *) NULL;

				ptsig = EDIF_PTSIG;
				if (bus_nameref(EDIF_PTFIG->LOCON, (edifvsp[(2) - (3)].sval), EDIF_BUS_WIDTH))
				{
					for (i = EDIF_BUS_WIDTH - 1; i >= 0; i--)
					{
						if ( (CheckCadenceBusError ((edifvsp[(2) - (3)].sval), &begin, &end)) && (i <= abs( end - begin) ) )
							sprintf(&port_name[0], "%s %d", EDIF_ARRAYPORTNAME, (begin <= end) ? begin + i : begin - i); 
						else
							sprintf(&port_name[0], "%s %d", (edifvsp[(2) - (3)].sval), i); 

						EDIF_PTCON = getlocon (EDIF_PTFIG, &port_name[0]);
						EDIF_PTCON->SIG = ptsig;
						ptsig = ptsig->NEXT;
					}
					EDIF_SIGTYPE = EXTERNAL;
				}
				else
				{
					fprintf (stderr, "*** mbk error *** edifloadlofig :\n"); 
					fprintf (stderr, "Connector '%s' in figure '%s' do not refer to an ARRAY construct",
					                 (edifvsp[(2) - (3)].sval), EDIF_PTFIG->NAME); 
					fprintf (stderr, "\n    or it is a bus with incompatible width than Signal Bus\n");
					exit (1);
				}
			}
		}
    break;

  case 78:
#line 696 "../../../src/mbkedif/src/parser_y.y"
    { 
			if (EDIF_NOLOAD_FIG == 0)
			{
				int         i;
				char        port_name[MAXSTRLEN];
				char       *port_name_alloc;
				losig_list *ptsig; 
				int         begin, end;
				locon_list *EDIF_PTCON = (locon_list *) NULL;

				ptsig = EDIF_PTSIG;
				EDIF_PTINS = getloins (EDIF_PTFIG, (edifvsp[(4) - (6)].sval));

				if( bus_nameref(EDIF_PTINS->LOCON, (edifvsp[(2) - (6)].sval), EDIF_BUS_WIDTH))
				{
					if(  ( CheckCadenceBusError ((edifvsp[(2) - (6)].sval), &begin, &end))
					   &&( (EDIF_BUS_WIDTH - 1) == abs(end - begin) ) )
						sprintf(&port_name[0], "%s %d", EDIF_ARRAYPORTNAME, ( begin <= end ) ? end : begin ); 
					else
						sprintf(&port_name[0], "%s %d", (edifvsp[(2) - (6)].sval), EDIF_BUS_WIDTH - 1); 

					port_name_alloc = namealloc( port_name );

					for (EDIF_PTCON = EDIF_PTINS->LOCON; EDIF_PTCON; EDIF_PTCON = EDIF_PTCON->NEXT)
						if( port_name_alloc == EDIF_PTCON->NAME)
							break;

					if (EDIF_PTCON == (locon_list *) NULL)
					{
						fprintf (stderr, "*** mbk error *** edifloadlofig :");
						fprintf (stderr, " bus connector %s not found", (edifvsp[(2) - (6)].sval));
						fprintf (stderr, " in instance %s", (edifvsp[(4) - (6)].sval));
						fprintf (stderr, " of figure %s\n", EDIF_PTINS->FIGNAME);
						exit( 1 );
					}
					else
					{
						for (i = EDIF_BUS_WIDTH - 1; (i >= 0) && EDIF_PTCON; i--)
						{
							EDIF_PTCON->SIG = ptsig;
							ptsig         = ptsig->NEXT;
							EDIF_PTCON      = EDIF_PTCON->NEXT;
						}
					}
				}
				else
				{
					port_name_alloc = namealloc( CheckCadenceNetError( (edifvsp[(2) - (6)].sval) ) );

					for (EDIF_PTCON = EDIF_PTINS->LOCON; EDIF_PTCON; EDIF_PTCON = EDIF_PTCON->NEXT)
						if( EDIF_PTCON->NAME == port_name_alloc )
							break;
					fprintf (stderr, "*** mbk error *** edifloadlofig : ");  
					if (EDIF_PTCON)
					{
						fprintf (stderr, "Connector '%s' in instance '%s' of figure '%s' do not refer", 
						                  port_name_alloc, (edifvsp[(4) - (6)].sval), EDIF_PTFIG->NAME); 
						fprintf (stderr, "\n    to an ARRAY construct or it is a bus with" );
						fprintf (stderr, "incompatible width than Signal Bus/n");
						exit( 1 );
					}
					else
					{
						fprintf (stderr, "Connector '%s' not found on instance '%s'\n", port_name_alloc, (edifvsp[(4) - (6)].sval));   
						exit( 1 );
					} 
				}
			}
		}
    break;

  case 83:
#line 782 "../../../src/mbkedif/src/parser_y.y"
    { 
			if (EDIF_NOLOAD_FIG == 0)
			{
				locon_list *EDIF_PTCON = (locon_list *) NULL;

				EDIF_PTCON = getlocon( EDIF_PTFIG, CheckCadenceNetError( (edifvsp[(2) - (3)].sval) ) );

				if (!EDIF_PORTLIST)
					EDIF_PTCON->SIG = EDIF_PTSIG;
				else
					EDIF_PTCON->SIG = (losig_list *)EDIF_PORTLIST_SIG->DATA;

				EDIF_SIGTYPE = EXTERNAL;
				if (EDIF_PORTLIST) 
				{
					if (++EDIF_PORTLIST_NUM < EDIF_BUS_WIDTH) 
						EDIF_PORTLIST_SIG = EDIF_PORTLIST_SIG->NEXT;
					else
						if (EDIF_PORTLIST_NUM > EDIF_BUS_WIDTH)
						{
							fprintf (stderr, "*** mbk error *** edifloadlofig : ");
							fprintf (stderr, "PortList width > signal bus '%s' width ( line %d ).\n", 
							         edif_busname(getsigname(EDIF_PTCON->SIG)), ediflineno );
							exit( 1 );
						}
				}
			}
		}
    break;

  case 84:
#line 811 "../../../src/mbkedif/src/parser_y.y"
    { 
			if (EDIF_NOLOAD_FIG == 0)
			{
				char       *port_name_ref;
				locon_list *EDIF_PTCON = (locon_list *) NULL;

				port_name_ref = namealloc( CheckCadenceNetError( (edifvsp[(2) - (6)].sval) ) );

				EDIF_PTINS = getloins (EDIF_PTFIG, (edifvsp[(4) - (6)].sval));
				for (EDIF_PTCON = EDIF_PTINS->LOCON; EDIF_PTCON; EDIF_PTCON = EDIF_PTCON->NEXT)
				{
					if ( port_name_ref == EDIF_PTCON->NAME)
					{
						if( !EDIF_PORTLIST )
							EDIF_PTCON->SIG = EDIF_PTSIG;
						else 
							EDIF_PTCON->SIG = (losig_list *)EDIF_PORTLIST_SIG->DATA;
						break;
					}
				}

			if (EDIF_PTCON == NULL)
			{
				fprintf (stderr, "*** mbk error *** edifloadlofig :");
				fprintf (stderr, " connector %s not found", (edifvsp[(2) - (6)].sval));
				fprintf (stderr, " in instance %s", (edifvsp[(4) - (6)].sval));
				fprintf (stderr, " of figure %s\n", EDIF_PTINS->FIGNAME);
				exit( 1 );
			}

			if (EDIF_PORTLIST) 
				if (++EDIF_PORTLIST_NUM < EDIF_BUS_WIDTH) 
				EDIF_PORTLIST_SIG = EDIF_PORTLIST_SIG->NEXT;
				else
					if (EDIF_PORTLIST_NUM > EDIF_BUS_WIDTH)
					{
						fprintf (stderr, "*** mbk error *** edifloadlofig : ");
						fprintf (stderr, "PortList width > signal bus '%s' width ( line %d ).\n", 
						                  edif_busname(getsigname(EDIF_PTCON->SIG)),
						                  ediflineno );
						exit (1);
					}
			}
		}
    break;

  case 85:
#line 856 "../../../src/mbkedif/src/parser_y.y"
    {
			if (EDIF_NOLOAD_FIG == 0)
			{
				char        port_name[MAXSTRLEN];
				int         begin, end;
				locon_list *EDIF_PTCON = (locon_list *) NULL;

				if ( (CheckCadenceBusError ((edifvsp[(3) - (6)].sval), &begin, &end))
				  && ((edifvsp[(4) - (6)].lval) <= abs( begin - end ) ) )
					sprintf(&port_name[0], "%s %d", EDIF_ARRAYPORTNAME, ( begin <= end ) ? begin + (edifvsp[(4) - (6)].lval) : begin - (edifvsp[(4) - (6)].lval) ); 
				else
					sprintf(&port_name[0], "%s %d", (edifvsp[(3) - (6)].sval), (edifvsp[(4) - (6)].lval)); 

				EDIF_PTCON = getlocon (EDIF_PTFIG, port_name);
				if (!EDIF_PORTLIST)
					EDIF_PTCON->SIG = EDIF_PTSIG;
				else
					EDIF_PTCON->SIG = (losig_list *)EDIF_PORTLIST_SIG->DATA;

				EDIF_SIGTYPE = EXTERNAL;
				if (EDIF_PORTLIST) 
					if (++EDIF_PORTLIST_NUM < EDIF_BUS_WIDTH) 
						EDIF_PORTLIST_SIG = EDIF_PORTLIST_SIG->NEXT;
					else
						if (EDIF_PORTLIST_NUM > EDIF_BUS_WIDTH)
						{
							fprintf (stderr, "*** mbk error *** edifloadlofig : ");
							fprintf (stderr, "PortList width > signal bus '%s' width ( line %d ).\n", 
							                  edif_busname(getsigname(EDIF_PTCON->SIG)),
							                  ediflineno );
							exit (1);
						}
			}
		}
    break;

  case 86:
#line 891 "../../../src/mbkedif/src/parser_y.y"
    {

			if (EDIF_NOLOAD_FIG == 0)
			{
				char        port_name[MAXSTRLEN];
				int         begin, end;
				locon_list *EDIF_PTCON    = (locon_list *) NULL;
				char       *EDIF_PORTNAME = (char *) NULL;

				EDIF_PTINS = getloins (EDIF_PTFIG, (edifvsp[(7) - (9)].sval));

				if ( (CheckCadenceBusError ((edifvsp[(3) - (9)].sval), &begin, &end) )
				  && ((edifvsp[(4) - (9)].lval) <= abs( begin - end ) ) )
					sprintf(&port_name[0], "%s %d", EDIF_ARRAYPORTNAME, ( begin <= end ) ? begin + (edifvsp[(4) - (9)].lval) : begin - (edifvsp[(4) - (9)].lval) ); 
				else
					sprintf(&port_name[0], "%s %d", (edifvsp[(3) - (9)].sval), (edifvsp[(4) - (9)].lval)); 

				EDIF_PORTNAME = namealloc (&port_name[0]);
				for (EDIF_PTCON = EDIF_PTINS->LOCON; EDIF_PTCON; EDIF_PTCON = EDIF_PTCON->NEXT)
				{
					if (EDIF_PORTNAME == EDIF_PTCON->NAME)
					{
						if (!EDIF_PORTLIST)
							EDIF_PTCON->SIG = EDIF_PTSIG;
						else 
							EDIF_PTCON->SIG = (losig_list *)EDIF_PORTLIST_SIG->DATA;
						break;
					}
				}

				if (EDIF_PTCON == NULL)
				{
					fprintf (stderr, "*** mbk error *** edifloadlofig : ");
					fprintf (stderr, "connector %s not found ", port_name);
					fprintf (stderr, " in instance %s", (edifvsp[(7) - (9)].sval));
					fprintf (stderr, " of figure %s\n", EDIF_PTINS->FIGNAME);
					exit (1);
				}

				if (EDIF_PORTLIST) 
					if (++EDIF_PORTLIST_NUM < EDIF_BUS_WIDTH) 
						EDIF_PORTLIST_SIG = EDIF_PORTLIST_SIG->NEXT;
					else
						if (EDIF_PORTLIST_NUM > EDIF_BUS_WIDTH)
						{
							fprintf (stderr, "*** mbk error *** edifloadlofig : ");
							fprintf (stderr, "PortList width > signal bus '%s' width ( line %d ).\n", 
							                 edif_busname(getsigname(EDIF_PTCON->SIG)),
							                 ediflineno );
							exit (1);
						}
			}
		}
    break;

  case 93:
#line 963 "../../../src/mbkedif/src/parser_y.y"
    { 
			if (EDIF_NOLOAD_LOCON == 0)
			{
				addlocon( EDIF_PTFIG, CheckCadenceNetError( (edifvsp[(2) - (4)].sval) ), NULL ,EDIF_DIRECTION );
			}
		}
    break;

  case 94:
#line 970 "../../../src/mbkedif/src/parser_y.y"
    {
			if (EDIF_NOLOAD_LOCON == 0)
			{
				char port_name    [MAXSTRLEN];
				int i;
				int begin;
				int end;

				if( (edifvsp[(4) - (7)].lval) <= 0 )
				{ 
					fprintf(stderr, "*** mbk error *** edifloadlofig : Array width must be > 0\n"); 
					exit( 1 ); 
				}

				if ( (CheckCadenceBusError ((edifvsp[(3) - (7)].sval), &begin, &end)) && ( (abs (end - begin) + 1) == (edifvsp[(4) - (7)].lval)) )
				{
					for (i=0; i < (edifvsp[(4) - (7)].lval); i++)
					{
						sprintf(&port_name[0], "%s %d", EDIF_ARRAYPORTNAME, ( begin <= end ) ? begin + i : begin - i ); 
						addlocon (EDIF_PTFIG, &port_name[0], NULL ,EDIF_DIRECTION);
					}
				}
				else
				{
					for (i=0; i < (edifvsp[(4) - (7)].lval); i++)
					{
						sprintf(&port_name[0], "%s %d", (edifvsp[(3) - (7)].sval), i); 
						addlocon (EDIF_PTFIG, &port_name[0], NULL ,EDIF_DIRECTION);
					}
				}
			}
		}
    break;

  case 99:
#line 1016 "../../../src/mbkedif/src/parser_y.y"
    { 
			EDIF_DIRECTION = UNKNOWN; 
		}
    break;

  case 100:
#line 1020 "../../../src/mbkedif/src/parser_y.y"
    { 
			EDIF_DIRECTION = IN; 
		}
    break;

  case 101:
#line 1024 "../../../src/mbkedif/src/parser_y.y"
    { 
			EDIF_DIRECTION = OUT; 
		}
    break;

  case 102:
#line 1031 "../../../src/mbkedif/src/parser_y.y"
    { }
    break;

  case 103:
#line 1033 "../../../src/mbkedif/src/parser_y.y"
    { }
    break;

  case 106:
#line 1043 "../../../src/mbkedif/src/parser_y.y"
    { 
			strcpy((edifval.sval), (edifvsp[(1) - (1)].sval)); 
		}
    break;

  case 107:
#line 1047 "../../../src/mbkedif/src/parser_y.y"
    { 
			char EDIF_TMP [MAXSTRLEN];

			sprintf(EDIF_TMP, "%ld", (edifvsp[(1) - (1)].lval)); 
			strcpy((edifval.sval), EDIF_TMP); 
		}
    break;

  case 108:
#line 1054 "../../../src/mbkedif/src/parser_y.y"
    {
			strcpy((edifval.sval), (edifvsp[(2) - (4)].sval)); 
		}
    break;

  case 109:
#line 1058 "../../../src/mbkedif/src/parser_y.y"
    {
			strcpy((edifval.sval), (edifvsp[(2) - (4)].sval));
		}
    break;

  case 110:
#line 1065 "../../../src/mbkedif/src/parser_y.y"
    {
			strcpy((edifval.sval), (edifvsp[(2) - (3)].sval)); 
		}
    break;


/* Line 1267 of yacc.c.  */
#line 2504 "y.tab.c"
      default: break;
    }
  EDIF_SYMBOL_PRINT ("-> $$ =", edifr1[edifn], &edifval, &edifloc);

  EDIFPOPSTACK (ediflen);
  ediflen = 0;
  EDIF_STACK_PRINT (edifss, edifssp);

  *++edifvsp = edifval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  edifn = edifr1[edifn];

  edifstate = edifpgoto[edifn - EDIFNTOKENS] + *edifssp;
  if (0 <= edifstate && edifstate <= EDIFLAST && edifcheck[edifstate] == *edifssp)
    edifstate = ediftable[edifstate];
  else
    edifstate = edifdefgoto[edifn - EDIFNTOKENS];

  goto edifnewstate;


/*------------------------------------.
| ediferrlab -- here on detecting error |
`------------------------------------*/
ediferrlab:
  /* If not already recovering from an error, report this error.  */
  if (!ediferrstatus)
    {
      ++edifnerrs;
#if ! EDIFERROR_VERBOSE
      ediferror (EDIF_("syntax error"));
#else
      {
	EDIFSIZE_T edifsize = edifsyntax_error (0, edifstate, edifchar);
	if (edifmsg_alloc < edifsize && edifmsg_alloc < EDIFSTACK_ALLOC_MAXIMUM)
	  {
	    EDIFSIZE_T edifalloc = 2 * edifsize;
	    if (! (edifsize <= edifalloc && edifalloc <= EDIFSTACK_ALLOC_MAXIMUM))
	      edifalloc = EDIFSTACK_ALLOC_MAXIMUM;
	    if (edifmsg != edifmsgbuf)
	      EDIFSTACK_FREE (edifmsg);
	    edifmsg = (char *) EDIFSTACK_ALLOC (edifalloc);
	    if (edifmsg)
	      edifmsg_alloc = edifalloc;
	    else
	      {
		edifmsg = edifmsgbuf;
		edifmsg_alloc = sizeof edifmsgbuf;
	      }
	  }

	if (0 < edifsize && edifsize <= edifmsg_alloc)
	  {
	    (void) edifsyntax_error (edifmsg, edifstate, edifchar);
	    ediferror (edifmsg);
	  }
	else
	  {
	    ediferror (EDIF_("syntax error"));
	    if (edifsize != 0)
	      goto edifexhaustedlab;
	  }
      }
#endif
    }



  if (ediferrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (edifchar <= EDIFEOF)
	{
	  /* Return failure if at end of input.  */
	  if (edifchar == EDIFEOF)
	    EDIFABORT;
	}
      else
	{
	  edifdestruct ("Error: discarding",
		      ediftoken, &ediflval);
	  edifchar = EDIFEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto ediferrlab1;


/*---------------------------------------------------.
| ediferrorlab -- error raised explicitly by EDIFERROR.  |
`---------------------------------------------------*/
ediferrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     EDIFERROR and the label ediferrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto ediferrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this EDIFERROR.  */
  EDIFPOPSTACK (ediflen);
  ediflen = 0;
  EDIF_STACK_PRINT (edifss, edifssp);
  edifstate = *edifssp;
  goto ediferrlab1;


/*-------------------------------------------------------------.
| ediferrlab1 -- common code for both syntax error and EDIFERROR.  |
`-------------------------------------------------------------*/
ediferrlab1:
  ediferrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      edifn = edifpact[edifstate];
      if (edifn != EDIFPACT_NINF)
	{
	  edifn += EDIFTERROR;
	  if (0 <= edifn && edifn <= EDIFLAST && edifcheck[edifn] == EDIFTERROR)
	    {
	      edifn = ediftable[edifn];
	      if (0 < edifn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (edifssp == edifss)
	EDIFABORT;


      edifdestruct ("Error: popping",
		  edifstos[edifstate], edifvsp);
      EDIFPOPSTACK (1);
      edifstate = *edifssp;
      EDIF_STACK_PRINT (edifss, edifssp);
    }

  if (edifn == EDIFFINAL)
    EDIFACCEPT;

  *++edifvsp = ediflval;


  /* Shift the error token.  */
  EDIF_SYMBOL_PRINT ("Shifting", edifstos[edifn], edifvsp, ediflsp);

  edifstate = edifn;
  goto edifnewstate;


/*-------------------------------------.
| edifacceptlab -- EDIFACCEPT comes here.  |
`-------------------------------------*/
edifacceptlab:
  edifresult = 0;
  goto edifreturn;

/*-----------------------------------.
| edifabortlab -- EDIFABORT comes here.  |
`-----------------------------------*/
edifabortlab:
  edifresult = 1;
  goto edifreturn;

#ifndef edifoverflow
/*-------------------------------------------------.
| edifexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
edifexhaustedlab:
  ediferror (EDIF_("memory exhausted"));
  edifresult = 2;
  /* Fall through.  */
#endif

edifreturn:
  if (edifchar != EDIFEOF && edifchar != EDIFEMPTY)
     edifdestruct ("Cleanup: discarding lookahead",
		 ediftoken, &ediflval);
  /* Do not reclaim the symbols of the rule which action triggered
     this EDIFABORT or EDIFACCEPT.  */
  EDIFPOPSTACK (ediflen);
  EDIF_STACK_PRINT (edifss, edifssp);
  while (edifssp != edifss)
    {
      edifdestruct ("Cleanup: popping",
		  edifstos[*edifssp], edifvsp);
      EDIFPOPSTACK (1);
    }
#ifndef edifoverflow
  if (edifss != edifssa)
    EDIFSTACK_FREE (edifss);
#endif
#if EDIFERROR_VERBOSE
  if (edifmsg != edifmsgbuf)
    EDIFSTACK_FREE (edifmsg);
#endif
  /* Make sure EDIFID is used.  */
  return EDIFID (edifresult);
}


#line 1087 "../../../src/mbkedif/src/parser_y.y"


extern  char            ediftext[];
extern  FILE            *edifin;


/*----------------------------------------------------------------------*/
/*      bus_nameref: checks that name ref is bus name ref and with      */
/*      the same width. It returns 1 if ok.                             */
/*      Do not forget that locon list is in reverse order.              */
/*----------------------------------------------------------------------*/

/*---------------------------------------------------------\
                     bus_nameref
\---------------------------------------------------------*/
static char bus_nameref( ptlocon, bnameref, bus_width )
locon_list *ptlocon;
char       *bnameref;
int         bus_width;
{
	int         i, n;
	char        port_name[MAXSTRLEN];
	char       *pname;
	locon_list *loconp;
	int         begin, end;

	bus_width --;
	if ( (!CheckCadenceBusError( bnameref, &begin, &end ) ) || (bus_width != abs( end - begin ) ) )
	{
		strcpy( EDIF_ARRAYPORTNAME, bnameref );
		end = bus_width;
	}

	sprintf(&port_name[0], "%s %d", EDIF_ARRAYPORTNAME, end ); 

	pname = namealloc( &port_name[0] );

	for (loconp = ptlocon; loconp != (locon_list *) NULL; loconp = loconp->NEXT)
		if (loconp->NAME == pname)
			break;

	if (loconp == (locon_list *) NULL)
		return 0;

	for( loconp = loconp->NEXT; loconp != (locon_list *) NULL; loconp = loconp->NEXT )
	{
		sprintf( &port_name[0], "%s %d", EDIF_ARRAYPORTNAME, ( begin <= end ) ? --end : ++end );
		if ( ( loconp->NAME == namealloc( port_name ) ) && bus_width >= 0)
			bus_width--;
		else
			break;
	}

	return( bus_width == 0 );

} /* end of bus_nameref */

/*---------------------------------------------------------\
                     edifloadlofig
\---------------------------------------------------------*/
void edifloadlofig( ptfig, figname, mode )
lofig_list *ptfig;
char       *figname;
char        mode;
{
	char        filename[120];
	lofig_list *pt;
	losig_list *ptsig;
	losig_list *ptsignext;
	loins_list *ptins;
	loins_list *ptinsnext;

	static char Vierge = 1; /* first time */

	ediflineno = 0;

    EDIF_RIPPER_IN  = (char *)NULL;
    EDIF_RIPPER_OUT = (char *)NULL;

    EDIF_LOFIG                = (lofig_list *) NULL;
    EDIF_PTFIG                = (lofig_list *) NULL;
    EDIF_PTSIG                = (losig_list *) NULL;
    EDIF_PORTLIST_SIG         = (chain_list *) NULL;
    EDIF_PORTLIST_SIG_TMP     = (chain_list *) NULL;
    EDIF_PTINS                = (loins_list *) NULL;
    EDIF_V_PORTINSTANCE       = (chain_list *) NULL;
    EDIF_BLACKBOX             = 'N';  
    EDIF_BUS_WIDTH            = 0;
    EDIF_DIRECTION            = UNKNOWN;
    EDIF_INDEX                = 0;
    EDIF_SIGTYPE              = 'Z';
    EDIF_NOLOAD_LOCON         = 0;
    EDIF_NOLOAD_FIG           = 0;
    EDIF_RIPPER_CELL = (char *) NULL;

	sprintf( filename, "%s/%s.%s", WORK_LIB, figname, IN_LO );
	if( ( edifin = mbkfopen( figname, IN_LO, READ_TEXT ) ) == NULL )
	{
		fprintf( stderr, "*** mbk error *** edifloadlofig : can't open file %s\n", filename );
		exit( 1 );
	}

	if( Vierge == 0 )
		edifrestart( edifin );
	Vierge = 0;

	EDIF_LOFIG = ptfig;
	EDIF_FIGNAME = figname;
	EDIF_V_PORTINSTANCE = (chain_list *) NULL;

	if( edifparse() != 0 )
	{
		fprintf( stderr, "*** mbk error *** edifloadlofig : abnormal parsing for %s\n", filename );
		exit( 1 );
	}

	if( fclose( edifin ) != 0 )
	{
		fprintf(stderr, "*** mbk error *** edifloadlofig : can't close file %s\n", filename);
		exit(1);
	}

	if (EDIF_BLACKBOX == 'Y')
	{
		ptfig->MODE = 'A';
		for (pt = HEAD_LOFIG; pt != NULL; pt = pt->NEXT)
		{
			if (pt == ptfig)
				break;
			for (ptins = ptfig->LOINS; ptins != NULL; ptins = ptins->NEXT)
			{
				if( pt->NAME ==  ptins->FIGNAME )
					break;
			}
			if (ptins == NULL)
				dellofig( pt->NAME );
		}

		for( pt = HEAD_LOFIG; pt != (lofig_list *) NULL; pt = pt->NEXT )
		{
			if( pt != ptfig )
			{
				for( ptsig = pt->LOSIG; ptsig != (losig_list *) NULL; ptsig = ptsig->NEXT )
					free( ptsig );
				pt->LOSIG = (losig_list *) NULL;

				for( ptins = pt->LOINS; ptins != (loins_list *) NULL; ptins = ptins->NEXT )
					delloins( pt , ptins->INSNAME );
				pt->MODE = 'P';
			}
		}
	}

	for (pt = HEAD_LOFIG; pt != NULL; pt = pt->NEXT) 
		if( pt != ptfig ) 
			pt->MODE = (pt->LOSIG == NULL) ? 'P' : 'A';
        else
			pt->MODE = 'A';

	REnamealloc( );

	del_patch( ptfig, 1 );


} /* end of edifloadlofig */

/*---------------------------------------------------------\
                     ediferror
\---------------------------------------------------------*/
int ediferror( String )
char *String;
{
        fprintf( stderr,
                 "*** mbk error *** edifloadlofig : %s at ligne %d on '%s'\n",
                 String, ediflineno + 1, ediftext );
        exit( 1 );
} /* end of ediferror */

/*---------------------------------------------------------\
                     edifwrap
\---------------------------------------------------------*/
int edifwrap()
{
    return 1;
} /* end of edifwrap */

/*---------------------------------------------------------\
                     get_figure_pt
\---------------------------------------------------------*/
static lofig_list *get_figure_pt( Name )
char *Name;
{
	lofig_list *pt;

	for( pt = HEAD_LOFIG; pt; pt = pt->NEXT )
		if( pt->NAME == Name )
			return pt;

	return (lofig_list *)NULL;

} /* end of get_figure_pt */

/*---------------------------------------------------------\
                     is_portinstance
\---------------------------------------------------------*/
static char is_portinstance(inst_pt, Name)
loins_list *inst_pt;
char       *Name;
{
	chain_list      *chain_pt;

	chain_pt = (chain_list *)EDIF_PTINS->USER;

	while( chain_pt )
	{
		if( Name == (char *)chain_pt->DATA )
			return 1;
		chain_pt = chain_pt->NEXT;
	}

	return 0;
} /* end of is_portinstance */

/*---------------------------------------------------------\
                     CheckCadenceNetError
\---------------------------------------------------------*/
static char *CheckCadenceNetError( Name )
char *Name;
{
	char  net_name[MAXSTRLEN];
	char *first;
	char *second;

	strcpy (net_name, Name);

	first = net_name;

	while( first )
	{
		if ( ( first = strchr( first, '_' ) ) != NULL )
		{
            if( strncmp( first, "_60_", 4 ) != 0 )
            {
                first++;
                continue;
            }
			second = first + 4;
			while( isdigit( *second ) ) second ++;

			if( strcmp( second, "_62" ) != 0 )
			{
				*first = ' ';
                first ++;
                second = first + 3;
                while( isdigit( *second ) )
                {
                    *first = *second;
                    second ++;
                    first ++;
                }
				first[ 0 ] = '\0';
				return namealloc( net_name );
			}
			first ++;
		}
		else
		{
			return namealloc( Name );
		}
	}

	return namealloc( Name );

} /* fin de CheckCadenceNetError */

/*---------------------------------------------------------\
                     CheckCadenceBusError
\---------------------------------------------------------*/
static char CheckCadenceBusError(PortName, Min, Max)
char *PortName;
int  *Min;
int  *Max;
{
	char *array;
	char *first;
	char *middle;
	char  save;

	strcpy (EDIF_ARRAYPORTNAME, PortName);

	first = EDIF_ARRAYPORTNAME;

	while (first)
	{
		if ( (first = strchr (first, '_') ) != NULL )
		{
            if( strncmp( first, "_60_", 4 ) != 0 )
            {
                first++;
                continue;
            }
			first[0] = '\0';
			array = first + 4;
			while ( isdigit (*array) ) array ++;

			if ( ( *array != 0 ) && ( strncasecmp (array, "TO", 2) == 0 ) )
			{
				middle = array;
				save = middle [0];
				middle [0] = '\0';
				array += 2;
				while ( isdigit (*array) ) array ++;

				if ( strcmp( first, "_62" ) != 0 )
				{
					array [0] = '\0';
					sscanf (first  + 4, "%d", Min);
					sscanf (middle + 2, "%d", Max);
					return 1;
				}
				middle [0] = save;
			}
			first[0] = '_';
			first ++;
		}
	}
	*Min = 0;
	*Max = 0;
	return 0;

} /* end of CheckCadenceBusError */

/*---------------------------------------------------------\
                     sig_merge
\---------------------------------------------------------*/
static void sig_merge(pt_lofig, sig1, sig2)
lofig_list *pt_lofig;
long        sig1;
long        sig2;
{
	losig_list *ls1, *ls2;
	locon_list *c;
	loins_list *i;
	lotrs_list *t;

    for (ls1 = pt_lofig->LOSIG; ls1; ls1 = ls1->NEXT) {
        if (ls1->INDEX == sig1)
            break;
    }

    for (ls2 = pt_lofig->LOSIG; ls2; ls2 = ls2->NEXT) {
        if (ls2->INDEX == sig2)
            break;
    }

    if (ls1 == NULL || ls2 == NULL) /* one of them not exists ! */
	{
        return;
    }

    if (ls1 == ls2) /* already joined!, just return */
        return;

    for (c = pt_lofig->LOCON; c; c = c->NEXT)
        if (c->SIG == ls2)
            c->SIG = ls1;

    for (i = pt_lofig->LOINS; i; i = i->NEXT)
        for (c = i->LOCON; c; c = c->NEXT)
            if (c->SIG == ls2)
                c->SIG = ls1;

    for (t = pt_lofig->LOTRS; t; t = t->NEXT) {
        if (t->GRID->SIG == ls2)
            t->GRID->SIG = ls1;
        if (t->DRAIN->SIG == ls2)
            t->DRAIN->SIG = ls1;
        if (t->SOURCE->SIG == ls2)
            t->SOURCE->SIG = ls1;
    }

     if(!ls1->PRCN)
       addlorcnet( ls1 );
    (void)addcapa(ls1, getcapa(ls2));
    (void)dellosig(pt_lofig, ls2->INDEX);
}

/*---------------------------------------------------------\
                     find_ripper_con_name
\---------------------------------------------------------*/
void find_ripper_con_name( lofig )
lofig_list *lofig;
{
    locon_list *c1;
    char save;
    char *pt;

    for( c1 = lofig->LOCON; c1; c1 = c1->NEXT )
    {
        if( isvss( c1->NAME ) || isvdd( c1->NAME ) )
        {
            continue;
        }
        if( !EDIF_RIPPER_IN )
        {
            if( ( pt = strrchr( c1->NAME, ' ' ) ) == NULL )
            {
                fprintf( stderr, "*** mbk warning *** edifloadlofig : ripper connectors not valid (2)!!\n" );
                exit(1);
            }
            save = *pt;
            *pt = '\0';
            EDIF_RIPPER_IN = namealloc ( c1->NAME );
            *pt = save;
        }
        else if( strncmp( EDIF_RIPPER_IN, c1->NAME, strlen( EDIF_RIPPER_IN ) ) != 0 )
        {
            if( EDIF_RIPPER_OUT )
            {
                if( strncmp( EDIF_RIPPER_OUT, c1->NAME, strlen( EDIF_RIPPER_OUT ) ) != 0 )
                {
                    fprintf( stderr, "*** mbk warning *** edifloadlofig : ripper connectors not valid (3)!!\n" );
                    exit(1);
                }
            }
            else
            {
                if( ( pt = strrchr( c1->NAME, ' ' ) ) == NULL )
                {
                    fprintf( stderr, "*** mbk warning *** edifloadlofig : ripper connectors not valid (4)!!\n" );
                    exit(1);
                }
                save = *pt;
                *pt = '\0';
                EDIF_RIPPER_OUT = namealloc ( c1->NAME );
                *pt = save;
            }
        }
    }

} /* end of find_ripper_con_name */
/*---------------------------------------------------------\
                     del_patch
\---------------------------------------------------------*/
static void del_patch(pt_lofig, master)
lofig_list *pt_lofig;
char        master;
{
	loins_list *i;
	loins_list *k;
	locon_list *c1, *c2;
	chain_list *ptchain;
	char *b;
	long j;
	long i1, i2;
	char buf[MAXSTRLEN];

	if( EDIF_RIPPER_CELL == (char *) NULL)
		return;

    if( master == 1 )
    {
        find_ripper_con_name( getlofig( EDIF_RIPPER_CELL, 'P' ) );
    }

    for (ptchain = pt_lofig->MODELCHAIN; ptchain != NULL; ptchain = ptchain->NEXT)
    {
		if ( EDIF_RIPPER_CELL != ptchain->DATA )
        	del_patch( getlofig( ptchain->DATA, 'P'), 0 );
    }

    for (i = pt_lofig->LOINS; i; )
	{
        if (EDIF_RIPPER_CELL == i->FIGNAME)
		{
			j = 0;
            do
			{
				sprintf (buf, "%s %d", EDIF_RIPPER_IN, j);
   				b = namealloc (buf);

        		for (c1 = i->LOCON; c1; c1 = c1->NEXT)
                {
					if ( (c1->NAME == b) && ( c1->SIG ) )
					{
						i1 = c1->SIG->INDEX;

						sprintf (buf, "%s %d", EDIF_RIPPER_OUT, j);
   						b = namealloc (buf);

        				for (c2 = i->LOCON; c2; c2 = c2->NEXT)
						{
							if ( (c2->NAME == b) && ( c2->SIG ) )
							{
								i2 = c2->SIG->INDEX;
								sig_merge(pt_lofig, i1, i2);
  								break;
							}
						}

                     break;
					}
				}

                j++;
			} while ( c1 );

			k = i->NEXT;
			delloins (pt_lofig, i->INSNAME);
			i = k;
		}
		else
		{
			i = i->NEXT;
		}
	}

	if( master == 1 )
		dellofig( EDIF_RIPPER_CELL );
}

/*---------------------------------------------------------\
                     REnamealloc
\---------------------------------------------------------*/
static void REnamealloc( )
{
	lofig_list *t;
	char       *te;

	for (t = EDIF_LOFIG; t; t = t->NEXT)
	{
		te = namealloc (t->NAME);
		if( te != t->NAME )
		{
			fprintf( stderr, "*** mbk warning *** edifloadlofig : instance name not namealloced !!!\n" );
			t->NAME = te;
		}
	}
}

