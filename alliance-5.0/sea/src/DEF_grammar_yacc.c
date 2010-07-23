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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse DEF_grammarparse
#define yylex   DEF_grammarlex
#define yyerror DEF_grammarerror
#define yylval  DEF_grammarlval
#define yychar  DEF_grammarchar
#define yydebug DEF_grammardebug
#define yynerrs DEF_grammarnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_Number = 258,
     T_Ident = 259,
     T_String = 260,
     T_History = 261,
     T_ALIGN = 262,
     T_ARRAY = 263,
     T_ASSERTIONS = 264,
     T_BEGINEXT = 265,
     T_BOTTOMLEFT = 266,
     T_BUSBITCHARS = 267,
     T_BY = 268,
     T_CANNOTOCCUPY = 269,
     T_CANPLACE = 270,
     T_CAPACITANCE = 271,
     T_COMMONSCANPINS = 272,
     T_COMPONENT = 273,
     T_COMPONENTPIN = 274,
     T_COMPS = 275,
     T_COMP_GEN = 276,
     T_CONSTRAINTS = 277,
     T_COVER = 278,
     T_DEFAULTCAP = 279,
     T_DESIGN = 280,
     T_DIE_AREA = 281,
     T_DIFF = 282,
     T_DIRECTION = 283,
     T_DISTANCE = 284,
     T_DIVIDERCHAR = 285,
     T_DO = 286,
     T_DRIVECELL = 287,
     T_E = 288,
     T_EEQMASTER = 289,
     T_END = 290,
     T_EQUAL = 291,
     T_ESTCAP = 292,
     T_FALL = 293,
     T_FALLMAX = 294,
     T_FALLMIN = 295,
     T_FE = 296,
     T_FIXED = 297,
     T_FLOATING = 298,
     T_FLOORPLAN = 299,
     T_FN = 300,
     T_FOREIGN = 301,
     T_FPC = 302,
     T_FROMCLOCKPIN = 303,
     T_FROMCOMPPIN = 304,
     T_FROMIOPIN = 305,
     T_FROMPIN = 306,
     T_FS = 307,
     T_FW = 308,
     T_GCELLGRID = 309,
     T_GROUP = 310,
     T_GROUPS = 311,
     T_HISTORY = 312,
     T_HOLDFALL = 313,
     T_HOLDRISE = 314,
     T_HORIZONTAL = 315,
     T_INTEGER = 316,
     T_IOTIMINGS = 317,
     T_LAYER = 318,
     T_MACRO = 319,
     T_MAX = 320,
     T_MAXDIST = 321,
     T_MAXHALFPERIMETER = 322,
     T_MAXX = 323,
     T_MAXY = 324,
     T_MICRONS = 325,
     T_MIN = 326,
     T_MINPINS = 327,
     T_MUSTJOIN = 328,
     T_N = 329,
     T_NAMEMAPSTRING = 330,
     T_NAMESCASESENSITIVE = 331,
     T_NET = 332,
     T_NETS = 333,
     T_NEW = 334,
     T_NONDEFAULTRULE = 335,
     T_NOSHIELD = 336,
     T_ORDERED = 337,
     T_ORIGINAL = 338,
     T_PARALLEL = 339,
     T_PARTITIONS = 340,
     T_PATH = 341,
     T_PATTERN = 342,
     T_PATTERNNAME = 343,
     T_PIN = 344,
     T_PINPROPERTIES = 345,
     T_PINS = 346,
     T_PLACED = 347,
     T_PROPERTY = 348,
     T_PROPERTYDEFINITIONS = 349,
     T_RANGE = 350,
     T_REAL = 351,
     T_RECT = 352,
     T_REENTRANTPATHS = 353,
     T_REGION = 354,
     T_REGIONS = 355,
     T_RISE = 356,
     T_RISEMAX = 357,
     T_RISEMIN = 358,
     T_ROUTED = 359,
     T_ROW = 360,
     T_ROWS = 361,
     T_S = 362,
     T_SCANCHAINS = 363,
     T_SETUPFALL = 364,
     T_SETUPRISE = 365,
     T_SHAPE = 366,
     T_SHIELD = 367,
     T_SHIELDNET = 368,
     T_SITE = 369,
     T_SLEWRATE = 370,
     T_SNET = 371,
     T_SNETS = 372,
     T_SOFT = 373,
     T_SOURCE = 374,
     T_SPACING = 375,
     T_SPECIAL = 376,
     T_START = 377,
     T_STEP = 378,
     T_STOP = 379,
     T_STYLE = 380,
     T_SUBNET = 381,
     T_SUM = 382,
     T_SYNTHESIZED = 383,
     T_TAPER = 384,
     T_TAPERRULE = 385,
     T_TECH = 386,
     T_THRUPIN = 387,
     T_TIMINGDISABLES = 388,
     T_TOCLOCKPIN = 389,
     T_TOCOMPPIN = 390,
     T_TOIOPIN = 391,
     T_TOPIN = 392,
     T_TOPRIGHT = 393,
     T_TRACKS = 394,
     T_TURNOFF = 395,
     T_UNITS = 396,
     T_UNPLACED = 397,
     T_USE = 398,
     T_VARIABLE = 399,
     T_VERSION = 400,
     T_VERTICAL = 401,
     T_VIAS = 402,
     T_VOLTAGE = 403,
     T_VPIN = 404,
     T_W = 405,
     T_WEIGHT = 406,
     T_WIDTH = 407,
     T_WIRECAP = 408,
     T_WIREDLOGIC = 409,
     T_XTALK = 410,
     T_INPUT = 411,
     T_OUTPUT = 412,
     T_INOUT = 413,
     T_FEEDTHRU = 414
   };
#endif
/* Tokens.  */
#define T_Number 258
#define T_Ident 259
#define T_String 260
#define T_History 261
#define T_ALIGN 262
#define T_ARRAY 263
#define T_ASSERTIONS 264
#define T_BEGINEXT 265
#define T_BOTTOMLEFT 266
#define T_BUSBITCHARS 267
#define T_BY 268
#define T_CANNOTOCCUPY 269
#define T_CANPLACE 270
#define T_CAPACITANCE 271
#define T_COMMONSCANPINS 272
#define T_COMPONENT 273
#define T_COMPONENTPIN 274
#define T_COMPS 275
#define T_COMP_GEN 276
#define T_CONSTRAINTS 277
#define T_COVER 278
#define T_DEFAULTCAP 279
#define T_DESIGN 280
#define T_DIE_AREA 281
#define T_DIFF 282
#define T_DIRECTION 283
#define T_DISTANCE 284
#define T_DIVIDERCHAR 285
#define T_DO 286
#define T_DRIVECELL 287
#define T_E 288
#define T_EEQMASTER 289
#define T_END 290
#define T_EQUAL 291
#define T_ESTCAP 292
#define T_FALL 293
#define T_FALLMAX 294
#define T_FALLMIN 295
#define T_FE 296
#define T_FIXED 297
#define T_FLOATING 298
#define T_FLOORPLAN 299
#define T_FN 300
#define T_FOREIGN 301
#define T_FPC 302
#define T_FROMCLOCKPIN 303
#define T_FROMCOMPPIN 304
#define T_FROMIOPIN 305
#define T_FROMPIN 306
#define T_FS 307
#define T_FW 308
#define T_GCELLGRID 309
#define T_GROUP 310
#define T_GROUPS 311
#define T_HISTORY 312
#define T_HOLDFALL 313
#define T_HOLDRISE 314
#define T_HORIZONTAL 315
#define T_INTEGER 316
#define T_IOTIMINGS 317
#define T_LAYER 318
#define T_MACRO 319
#define T_MAX 320
#define T_MAXDIST 321
#define T_MAXHALFPERIMETER 322
#define T_MAXX 323
#define T_MAXY 324
#define T_MICRONS 325
#define T_MIN 326
#define T_MINPINS 327
#define T_MUSTJOIN 328
#define T_N 329
#define T_NAMEMAPSTRING 330
#define T_NAMESCASESENSITIVE 331
#define T_NET 332
#define T_NETS 333
#define T_NEW 334
#define T_NONDEFAULTRULE 335
#define T_NOSHIELD 336
#define T_ORDERED 337
#define T_ORIGINAL 338
#define T_PARALLEL 339
#define T_PARTITIONS 340
#define T_PATH 341
#define T_PATTERN 342
#define T_PATTERNNAME 343
#define T_PIN 344
#define T_PINPROPERTIES 345
#define T_PINS 346
#define T_PLACED 347
#define T_PROPERTY 348
#define T_PROPERTYDEFINITIONS 349
#define T_RANGE 350
#define T_REAL 351
#define T_RECT 352
#define T_REENTRANTPATHS 353
#define T_REGION 354
#define T_REGIONS 355
#define T_RISE 356
#define T_RISEMAX 357
#define T_RISEMIN 358
#define T_ROUTED 359
#define T_ROW 360
#define T_ROWS 361
#define T_S 362
#define T_SCANCHAINS 363
#define T_SETUPFALL 364
#define T_SETUPRISE 365
#define T_SHAPE 366
#define T_SHIELD 367
#define T_SHIELDNET 368
#define T_SITE 369
#define T_SLEWRATE 370
#define T_SNET 371
#define T_SNETS 372
#define T_SOFT 373
#define T_SOURCE 374
#define T_SPACING 375
#define T_SPECIAL 376
#define T_START 377
#define T_STEP 378
#define T_STOP 379
#define T_STYLE 380
#define T_SUBNET 381
#define T_SUM 382
#define T_SYNTHESIZED 383
#define T_TAPER 384
#define T_TAPERRULE 385
#define T_TECH 386
#define T_THRUPIN 387
#define T_TIMINGDISABLES 388
#define T_TOCLOCKPIN 389
#define T_TOCOMPPIN 390
#define T_TOIOPIN 391
#define T_TOPIN 392
#define T_TOPRIGHT 393
#define T_TRACKS 394
#define T_TURNOFF 395
#define T_UNITS 396
#define T_UNPLACED 397
#define T_USE 398
#define T_VARIABLE 399
#define T_VERSION 400
#define T_VERTICAL 401
#define T_VIAS 402
#define T_VOLTAGE 403
#define T_VPIN 404
#define T_W 405
#define T_WEIGHT 406
#define T_WIDTH 407
#define T_WIRECAP 408
#define T_WIREDLOGIC 409
#define T_XTALK 410
#define T_INPUT 411
#define T_OUTPUT 412
#define T_INOUT 413
#define T_FEEDTHRU 414




/* Copy the first part of user declarations.  */
#line 1 "../../../src/sea/src/DEF_grammar_yacc.y"

/*
 * $Author: jpc $
 * $Id: DEF_grammar_yacc.y,v 1.1.1.1 2002/04/25 16:16:20 jpc Exp $
 * $Date: 2002/04/25 16:16:20 $
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "util_Defs.h"
#include "DEF_actions.h"


  /* Flex substitutions. */
# define        yylex              DEF_grammarlex
# define        yyin               DEF_grammarin
# define        yylineno           DEF_grammarlineno


#define YYDEBUG             1
#define YYERROR_VERBOSE         1

extern int      yylineno;
extern char    *yytext;

extern void     yyerror(char *str);
extern int      yylex(void);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 33 "../../../src/sea/src/DEF_grammar_yacc.y"
{
    double       n;
    char        *s;
    struct pt   *pt;
}
/* Line 187 of yacc.c.  */
#line 460 "DEF_grammar_yacc.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 473 "DEF_grammar_yacc.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
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

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   855

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  167
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  250
/* YYNRULES -- Number of rules.  */
#define YYNRULES  514
/* YYNRULES -- Number of states.  */
#define YYNSTATES  986

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   414

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     163,   164,   165,   162,   166,   161,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   160,
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
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    12,    13,    17,    18,    22,    23,
      26,    28,    30,    32,    34,    36,    38,    40,    42,    44,
      46,    48,    50,    52,    54,    56,    58,    60,    62,    64,
      66,    68,    70,    72,    74,    76,    78,    80,    82,    84,
      86,    88,    90,    92,    94,    96,   100,   103,   107,   111,
     115,   119,   124,   125,   128,   133,   138,   143,   148,   153,
     158,   163,   168,   173,   177,   181,   183,   186,   189,   190,
     192,   198,   202,   206,   220,   234,   248,   250,   252,   254,
     256,   258,   260,   262,   264,   266,   268,   270,   272,   277,
     281,   284,   285,   288,   294,   297,   301,   305,   306,   309,
     313,   319,   320,   323,   326,   328,   332,   336,   342,   346,
     349,   365,   366,   369,   373,   374,   377,   380,   389,   392,
     393,   396,   397,   400,   402,   411,   413,   416,   420,   424,
     425,   428,   432,   435,   436,   439,   445,   449,   451,   456,
     461,   466,   471,   474,   479,   483,   484,   487,   493,   496,
     500,   501,   504,   508,   509,   512,   515,   519,   523,   524,
     527,   532,   536,   537,   540,   543,   544,   547,   549,   551,
     553,   555,   557,   559,   561,   563,   565,   567,   571,   576,
     577,   579,   583,   586,   589,   592,   596,   600,   601,   604,
     607,   610,   616,   618,   621,   625,   628,   631,   634,   637,
     641,   644,   648,   652,   653,   656,   661,   664,   665,   668,
     673,   679,   682,   685,   686,   688,   691,   692,   695,   699,
     703,   707,   711,   715,   719,   723,   727,   731,   735,   737,
     741,   745,   751,   755,   757,   758,   761,   764,   770,   774,
     775,   778,   780,   782,   783,   787,   789,   791,   793,   795,
     797,   799,   801,   804,   807,   814,   816,   817,   820,   822,
     824,   829,   834,   839,   844,   850,   856,   862,   868,   869,
     871,   874,   875,   879,   880,   882,   885,   889,   890,   893,
     898,   901,   902,   905,   910,   913,   916,   919,   920,   922,
     925,   926,   929,   931,   933,   935,   937,   941,   946,   950,
     954,   958,   962,   966,   970,   974,   978,   980,   985,   989,
     995,   996,  1000,  1001,  1005,  1009,  1012,  1016,  1020,  1021,
    1024,  1029,  1032,  1033,  1036,  1038,  1039,  1042,  1046,  1050,
    1054,  1056,  1059,  1061,  1062,  1065,  1068,  1069,  1072,  1075,
    1078,  1081,  1084,  1088,  1092,  1096,  1100,  1101,  1104,  1106,
    1108,  1113,  1116,  1122,  1127,  1132,  1134,  1138,  1146,  1147,
    1149,  1150,  1153,  1157,  1161,  1165,  1169,  1172,  1175,  1179,
    1183,  1184,  1187,  1191,  1194,  1195,  1198,  1199,  1201,  1206,
    1210,  1214,  1219,  1223,  1225,  1226,  1231,  1240,  1241,  1244,
    1247,  1248,  1253,  1262,  1263,  1266,  1269,  1270,  1275,  1284,
    1287,  1291,  1295,  1296,  1299,  1303,  1309,  1310,  1313,  1319,
    1325,  1329,  1333,  1336,  1339,  1342,  1344,  1346,  1348,  1351,
    1356,  1360,  1361,  1364,  1371,  1373,  1375,  1377,  1380,  1383,
    1386,  1387,  1390,  1394,  1398,  1399,  1402,  1407,  1412,  1416,
    1420,  1421,  1424,  1433,  1439,  1445,  1449,  1454,  1457,  1460,
    1464,  1468,  1469,  1472,  1476,  1480,  1481,  1485,  1486,  1488,
    1490,  1491,  1493,  1495,  1496,  1499,  1506,  1512,  1517,  1524,
    1530,  1535,  1537,  1541,  1542,  1545,  1549,  1553,  1554,  1557,
    1558,  1561,  1564,  1567,  1570,  1573,  1575,  1578,  1582,  1586,
    1590,  1594,  1597,  1598,  1601,  1607,  1608,  1611,  1612,  1615,
    1618,  1621,  1625,  1629,  1630,  1632,  1635,  1636,  1639,  1645,
    1646,  1649,  1653,  1654,  1657
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     168,     0,    -1,   169,   170,   171,    -1,   169,   170,   171,
     175,    -1,    -1,   145,     3,   160,    -1,    -1,    76,     4,
     160,    -1,    -1,   171,   172,    -1,     1,    -1,   173,    -1,
     220,    -1,   218,    -1,   238,    -1,   263,    -1,   294,    -1,
     312,    -1,   342,    -1,   328,    -1,   327,    -1,   358,    -1,
     229,    -1,   367,    -1,   377,    -1,   383,    -1,   407,    -1,
     174,    -1,   176,    -1,   179,    -1,   185,    -1,   186,    -1,
     187,    -1,   188,    -1,   189,    -1,   190,    -1,   193,    -1,
     194,    -1,   199,    -1,   212,    -1,   217,    -1,   177,    -1,
     178,    -1,   207,    -1,   180,    -1,    25,     4,   160,    -1,
      35,    25,    -1,   131,     4,   160,    -1,     8,     4,   160,
      -1,    44,     4,   160,    -1,    57,     6,   160,    -1,    94,
     181,    35,    94,    -1,    -1,   181,   182,    -1,    25,     4,
     183,   160,    -1,    77,     4,   183,   160,    -1,   116,     4,
     183,   160,    -1,    99,     4,   183,   160,    -1,    55,     4,
     183,   160,    -1,    18,     4,   183,   160,    -1,   105,     4,
     183,   160,    -1,    89,     4,   183,   160,    -1,    19,     4,
     183,   160,    -1,    61,   309,   184,    -1,    96,   309,   184,
      -1,     4,    -1,     4,     5,    -1,    75,     4,    -1,    -1,
       3,    -1,   141,    29,    70,     3,   160,    -1,    30,     5,
     160,    -1,    12,     5,   160,    -1,   114,     4,     3,     3,
     191,    31,     3,    13,     3,   123,     3,     3,   160,    -1,
      15,     4,     3,     3,   191,    31,     3,    13,     3,   123,
       3,     3,   160,    -1,    14,     4,     3,     3,   191,    31,
       3,    13,     3,   123,     3,     3,   160,    -1,    74,    -1,
      33,    -1,   107,    -1,   150,    -1,    45,    -1,    41,    -1,
      52,    -1,    53,    -1,   156,    -1,   157,    -1,   158,    -1,
     159,    -1,    26,   227,   227,   160,    -1,   195,   196,   198,
      -1,    24,     3,    -1,    -1,   196,   197,    -1,    72,     3,
     153,     3,   160,    -1,    35,    24,    -1,   200,   201,   206,
      -1,    91,     3,   160,    -1,    -1,   201,   202,    -1,   203,
     204,   160,    -1,   161,     4,   162,    77,     4,    -1,    -1,
     204,   205,    -1,   162,   121,    -1,   219,    -1,   162,    28,
     192,    -1,   162,   143,     4,    -1,   162,    63,     4,   227,
     227,    -1,   260,   227,   191,    -1,    35,    91,    -1,   105,
       4,     4,     3,     3,   191,    31,     3,    13,     3,   123,
       3,     3,   208,   160,    -1,    -1,   208,   209,    -1,   162,
      93,   210,    -1,    -1,   210,   211,    -1,     4,   279,    -1,
     213,     3,    31,     3,   123,     3,   214,   160,    -1,   139,
       4,    -1,    -1,    63,   215,    -1,    -1,   216,   215,    -1,
       4,    -1,    54,     4,     3,    31,     3,   123,     3,   160,
      -1,    10,    -1,   162,    10,    -1,   221,   222,   228,    -1,
     147,     3,   160,    -1,    -1,   222,   223,    -1,   224,   225,
     160,    -1,   161,     4,    -1,    -1,   225,   226,    -1,   162,
      97,     4,   227,   227,    -1,   162,    88,     4,    -1,   219,
      -1,   163,     3,     3,   164,    -1,   163,   165,     3,   164,
      -1,   163,     3,   165,   164,    -1,   163,   165,   165,   164,
      -1,    35,   147,    -1,   230,   231,    35,   100,    -1,   100,
       3,   160,    -1,    -1,   231,   232,    -1,   161,     4,   233,
     234,   160,    -1,   227,   227,    -1,   233,   227,   227,    -1,
      -1,   234,   235,    -1,   162,    93,   236,    -1,    -1,   236,
     237,    -1,     4,   279,    -1,   239,   240,   262,    -1,    20,
       3,   160,    -1,    -1,   240,   241,    -1,   242,   243,   244,
     160,    -1,   161,     4,     4,    -1,    -1,   243,   165,    -1,
     243,     4,    -1,    -1,   244,   245,    -1,   248,    -1,   250,
      -1,   259,    -1,   261,    -1,   257,    -1,   251,    -1,   247,
      -1,   253,    -1,   246,    -1,   219,    -1,   162,    34,     4,
      -1,   162,    21,     4,   249,    -1,    -1,     4,    -1,   162,
     119,     4,    -1,   256,   252,    -1,   256,     4,    -1,   227,
     227,    -1,   252,   227,   227,    -1,   162,    93,   254,    -1,
      -1,   254,   255,    -1,     4,   279,    -1,   162,    99,    -1,
     162,    46,     4,   258,     4,    -1,   227,    -1,     3,     3,
      -1,   260,   227,   191,    -1,   162,    42,    -1,   162,    23,
      -1,   162,    92,    -1,   162,   142,    -1,   162,   151,     3,
      -1,    35,    20,    -1,   264,   265,   293,    -1,    78,     3,
     160,    -1,    -1,   265,   266,    -1,   267,   268,   272,   160,
      -1,   161,     4,    -1,    -1,   268,   269,    -1,   163,   270,
     271,   164,    -1,    73,   163,   270,   271,   164,    -1,     4,
       4,    -1,    89,     4,    -1,    -1,   219,    -1,   162,   128,
      -1,    -1,   272,   273,    -1,   162,   282,   283,    -1,   162,
     119,     4,    -1,   162,    83,     4,    -1,   162,    87,     4,
      -1,   162,   151,     3,    -1,   162,   155,     3,    -1,   162,
      37,     3,    -1,   162,   143,     4,    -1,   162,   125,     4,
      -1,   162,    80,     4,    -1,   276,    -1,   162,   113,     4,
      -1,   162,    81,   283,    -1,   162,   126,     4,   402,   405,
      -1,   162,    93,   274,    -1,   219,    -1,    -1,   274,   275,
      -1,     4,   279,    -1,   277,   278,   227,   227,   280,    -1,
     162,   149,     4,    -1,    -1,    63,     4,    -1,     3,    -1,
       5,    -1,    -1,   281,   227,   191,    -1,    92,    -1,    42,
      -1,    23,    -1,    42,    -1,    23,    -1,   104,    -1,   285,
      -1,   283,   284,    -1,    79,   285,    -1,   286,   292,   291,
     290,   289,   287,    -1,     4,    -1,    -1,   287,   288,    -1,
       4,    -1,   289,    -1,   163,     3,     3,   164,    -1,   163,
     165,     3,   164,    -1,   163,     3,   165,   164,    -1,   163,
     165,   165,   164,    -1,   163,     3,     3,     3,   164,    -1,
     163,   165,     3,     3,   164,    -1,   163,     3,   165,     3,
     164,    -1,   163,   165,   165,     3,   164,    -1,    -1,   129,
      -1,   130,     4,    -1,    -1,   162,   111,     4,    -1,    -1,
       3,    -1,    35,    78,    -1,   310,   295,   311,    -1,    -1,
     295,   296,    -1,   297,   298,   302,   160,    -1,   161,     4,
      -1,    -1,   298,   299,    -1,   163,   300,   301,   164,    -1,
       4,     4,    -1,    89,     4,    -1,   165,     4,    -1,    -1,
     219,    -1,   162,   128,    -1,    -1,   302,   303,    -1,   305,
      -1,   306,    -1,   307,    -1,   304,    -1,   162,   282,   283,
      -1,   162,   112,     4,   283,    -1,   162,   119,     4,    -1,
     162,    83,     4,    -1,   162,    87,     4,    -1,   162,   151,
       3,    -1,   162,    37,     3,    -1,   162,   143,     4,    -1,
     162,   125,     4,    -1,   162,    93,   274,    -1,   219,    -1,
     162,   152,     4,     3,    -1,   162,   148,     3,    -1,   162,
     120,     4,     3,   308,    -1,    -1,    95,     3,     3,    -1,
      -1,    95,     3,     3,    -1,   117,     3,   160,    -1,    35,
     117,    -1,   313,   314,   326,    -1,    56,     3,   160,    -1,
      -1,   314,   315,    -1,   316,   317,   319,   160,    -1,   161,
       4,    -1,    -1,   317,   318,    -1,     4,    -1,    -1,   319,
     320,    -1,   162,   118,   324,    -1,   162,    93,   322,    -1,
     162,    99,   321,    -1,   219,    -1,   227,   227,    -1,     4,
      -1,    -1,   322,   323,    -1,     4,   279,    -1,    -1,   324,
     325,    -1,    68,     3,    -1,    69,     3,    -1,    67,     3,
      -1,    35,    56,    -1,   329,   331,   341,    -1,   330,   331,
     340,    -1,     9,     3,   160,    -1,    22,     3,   160,    -1,
      -1,   331,   332,    -1,   333,    -1,   336,    -1,   161,   334,
     338,   160,    -1,    77,     4,    -1,    86,     4,     4,     4,
       4,    -1,   127,   163,   335,   164,    -1,    27,   163,   335,
     164,    -1,   334,    -1,   335,   166,   334,    -1,   161,   154,
       4,   337,    66,     3,   160,    -1,    -1,   162,    -1,    -1,
     338,   339,    -1,   162,   103,     3,    -1,   162,   102,     3,
      -1,   162,    40,     3,    -1,   162,    39,     3,    -1,    35,
      22,    -1,    35,     9,    -1,   343,   344,   357,    -1,   108,
       3,   160,    -1,    -1,   344,   345,    -1,   346,   347,   160,
      -1,   161,     4,    -1,    -1,   347,   349,    -1,    -1,     4,
      -1,   162,   122,     4,   348,    -1,   162,    43,   351,    -1,
     162,    82,   354,    -1,   162,   124,     4,   348,    -1,   162,
      17,   350,    -1,   219,    -1,    -1,   163,     4,     4,   164,
      -1,   163,     4,     4,   164,   163,     4,     4,   164,    -1,
      -1,   351,   352,    -1,     4,   353,    -1,    -1,   163,     4,
       4,   164,    -1,   163,     4,     4,   164,   163,     4,     4,
     164,    -1,    -1,   354,   355,    -1,     4,   356,    -1,    -1,
     163,     4,     4,   164,    -1,   163,     4,     4,   164,   163,
       4,     4,   164,    -1,    35,   108,    -1,   359,   360,   366,
      -1,    62,     3,   160,    -1,    -1,   360,   361,    -1,   362,
     363,   160,    -1,   161,   163,     4,     4,   164,    -1,    -1,
     363,   364,    -1,   162,   365,   144,     3,     3,    -1,   162,
     365,   115,     3,     3,    -1,   162,    16,     3,    -1,   162,
      32,     4,    -1,    51,     4,    -1,   137,     4,    -1,    84,
       3,    -1,   219,    -1,   101,    -1,    38,    -1,    35,    62,
      -1,   368,   369,    35,    47,    -1,    47,     3,   160,    -1,
      -1,   369,   370,    -1,   161,     4,   371,   372,   373,   160,
      -1,    60,    -1,   146,    -1,     7,    -1,    65,     3,    -1,
      71,     3,    -1,    36,     3,    -1,    -1,   373,   374,    -1,
     162,    11,   375,    -1,   162,   138,   375,    -1,    -1,   375,
     376,    -1,   163,   106,     4,   164,    -1,   163,    20,     4,
     164,    -1,   378,   379,   382,    -1,   133,     3,   160,    -1,
      -1,   379,   380,    -1,   161,    51,     4,     4,   137,     4,
       4,   160,    -1,   161,   132,     4,     4,   160,    -1,   161,
      64,     4,   381,   160,    -1,   161,    98,   160,    -1,    51,
       4,   137,     4,    -1,   132,     4,    -1,    35,   133,    -1,
     384,   385,   401,    -1,    85,     3,   160,    -1,    -1,   385,
     386,    -1,   387,   391,   160,    -1,   161,     4,   388,    -1,
      -1,   140,   389,   390,    -1,    -1,   110,    -1,   109,    -1,
      -1,    59,    -1,    58,    -1,    -1,   391,   392,    -1,   162,
      48,     4,     4,   365,   393,    -1,   162,    49,     4,     4,
     399,    -1,   162,    50,     4,   397,    -1,   162,   134,     4,
       4,   365,   393,    -1,   162,   135,     4,     4,   399,    -1,
     162,   136,     4,   397,    -1,   219,    -1,   394,    91,   396,
      -1,    -1,   394,   395,    -1,    71,     3,     3,    -1,    65,
       3,     3,    -1,    -1,   396,     4,    -1,    -1,   397,   398,
      -1,   103,     3,    -1,    40,     3,    -1,   102,     3,    -1,
      39,     3,    -1,   400,    -1,   399,   400,    -1,   103,     3,
       3,    -1,    40,     3,     3,    -1,   102,     3,     3,    -1,
      39,     3,     3,    -1,    35,    85,    -1,    -1,   402,   403,
      -1,   163,     4,     4,   404,   164,    -1,    -1,   162,   128,
      -1,    -1,   405,   406,    -1,   282,   283,    -1,    80,     4,
      -1,   408,   411,   410,    -1,    90,     3,   409,    -1,    -1,
     160,    -1,    35,    90,    -1,    -1,   411,   412,    -1,   161,
       4,     4,   413,   160,    -1,    -1,   413,   414,    -1,   162,
      93,   415,    -1,    -1,   415,   416,    -1,     4,   279,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    84,    87,    89,    92,    94,    97,    99,
     100,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   144,   148,   152,   156,   160,
     164,   168,   171,   173,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   189,   190,   191,   192,   193,   197,   198,
     202,   206,   210,   214,   218,   222,   226,   227,   228,   229,
     230,   231,   232,   233,   237,   238,   239,   240,   244,   248,
     252,   255,   257,   261,   265,   269,   273,   276,   278,   282,
     286,   289,   291,   295,   296,   297,   298,   299,   300,   304,
     308,   312,   314,   318,   321,   323,   327,   331,   336,   340,
     341,   345,   346,   350,   354,   358,   362,   366,   370,   373,
     375,   379,   383,   386,   388,   392,   393,   394,   398,   399,
     400,   401,   405,   409,   413,   416,   418,   422,   426,   427,
     430,   432,   436,   439,   441,   445,   449,   453,   456,   458,
     462,   466,   470,   471,   472,   475,   477,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   493,   497,   501,   505,
     506,   510,   514,   515,   519,   520,   524,   527,   529,   533,
     537,   541,   545,   546,   550,   554,   555,   556,   557,   561,
     565,   569,   573,   576,   578,   582,   586,   589,   591,   595,
     596,   600,   601,   604,   606,   607,   610,   612,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   634,   636,   640,   644,   648,   651,
     653,   657,   658,   661,   663,   667,   668,   669,   673,   674,
     675,   679,   680,   684,   688,   692,   695,   697,   701,   702,
     706,   707,   708,   709,   710,   711,   712,   713,   716,   718,
     719,   722,   724,   728,   729,   733,   737,   740,   742,   746,
     750,   753,   755,   759,   763,   764,   765,   768,   770,   771,
     774,   776,   780,   781,   782,   783,   787,   788,   789,   790,
     791,   792,   793,   794,   795,   796,   797,   801,   805,   809,
     812,   814,   817,   819,   823,   827,   831,   835,   838,   840,
     844,   848,   851,   853,   857,   860,   862,   866,   867,   868,
     869,   873,   874,   877,   879,   883,   886,   888,   892,   893,
     894,   898,   902,   906,   910,   914,   917,   919,   923,   924,
     928,   932,   933,   934,   935,   939,   940,   944,   947,   949,
     952,   954,   958,   959,   960,   961,   965,   969,   973,   977,
     980,   982,   986,   990,   993,   995,   999,  1000,  1004,  1005,
    1006,  1007,  1008,  1009,  1012,  1014,  1015,  1018,  1020,  1024,
    1027,  1029,  1030,  1033,  1035,  1039,  1042,  1044,  1045,  1049,
    1053,  1057,  1060,  1062,  1066,  1070,  1073,  1075,  1079,  1080,
    1081,  1082,  1083,  1084,  1085,  1086,  1090,  1091,  1095,  1099,
    1103,  1106,  1108,  1112,  1116,  1117,  1121,  1122,  1123,  1124,
    1127,  1129,  1133,  1134,  1137,  1139,  1143,  1144,  1148,  1152,
    1155,  1157,  1161,  1162,  1163,  1164,  1168,  1169,  1173,  1177,
    1181,  1184,  1186,  1190,  1194,  1197,  1199,  1202,  1204,  1205,
    1208,  1210,  1211,  1214,  1216,  1220,  1221,  1222,  1223,  1224,
    1225,  1226,  1230,  1233,  1235,  1239,  1240,  1243,  1245,  1248,
    1250,  1254,  1255,  1256,  1257,  1261,  1262,  1266,  1267,  1268,
    1269,  1273,  1276,  1278,  1282,  1285,  1287,  1290,  1292,  1296,
    1297,  1301,  1305,  1308,  1310,  1314,  1317,  1319,  1323,  1326,
    1328,  1332,  1335,  1337,  1341
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Number", "T_Ident", "T_String",
  "T_History", "T_ALIGN", "T_ARRAY", "T_ASSERTIONS", "T_BEGINEXT",
  "T_BOTTOMLEFT", "T_BUSBITCHARS", "T_BY", "T_CANNOTOCCUPY", "T_CANPLACE",
  "T_CAPACITANCE", "T_COMMONSCANPINS", "T_COMPONENT", "T_COMPONENTPIN",
  "T_COMPS", "T_COMP_GEN", "T_CONSTRAINTS", "T_COVER", "T_DEFAULTCAP",
  "T_DESIGN", "T_DIE_AREA", "T_DIFF", "T_DIRECTION", "T_DISTANCE",
  "T_DIVIDERCHAR", "T_DO", "T_DRIVECELL", "T_E", "T_EEQMASTER", "T_END",
  "T_EQUAL", "T_ESTCAP", "T_FALL", "T_FALLMAX", "T_FALLMIN", "T_FE",
  "T_FIXED", "T_FLOATING", "T_FLOORPLAN", "T_FN", "T_FOREIGN", "T_FPC",
  "T_FROMCLOCKPIN", "T_FROMCOMPPIN", "T_FROMIOPIN", "T_FROMPIN", "T_FS",
  "T_FW", "T_GCELLGRID", "T_GROUP", "T_GROUPS", "T_HISTORY", "T_HOLDFALL",
  "T_HOLDRISE", "T_HORIZONTAL", "T_INTEGER", "T_IOTIMINGS", "T_LAYER",
  "T_MACRO", "T_MAX", "T_MAXDIST", "T_MAXHALFPERIMETER", "T_MAXX",
  "T_MAXY", "T_MICRONS", "T_MIN", "T_MINPINS", "T_MUSTJOIN", "T_N",
  "T_NAMEMAPSTRING", "T_NAMESCASESENSITIVE", "T_NET", "T_NETS", "T_NEW",
  "T_NONDEFAULTRULE", "T_NOSHIELD", "T_ORDERED", "T_ORIGINAL",
  "T_PARALLEL", "T_PARTITIONS", "T_PATH", "T_PATTERN", "T_PATTERNNAME",
  "T_PIN", "T_PINPROPERTIES", "T_PINS", "T_PLACED", "T_PROPERTY",
  "T_PROPERTYDEFINITIONS", "T_RANGE", "T_REAL", "T_RECT",
  "T_REENTRANTPATHS", "T_REGION", "T_REGIONS", "T_RISE", "T_RISEMAX",
  "T_RISEMIN", "T_ROUTED", "T_ROW", "T_ROWS", "T_S", "T_SCANCHAINS",
  "T_SETUPFALL", "T_SETUPRISE", "T_SHAPE", "T_SHIELD", "T_SHIELDNET",
  "T_SITE", "T_SLEWRATE", "T_SNET", "T_SNETS", "T_SOFT", "T_SOURCE",
  "T_SPACING", "T_SPECIAL", "T_START", "T_STEP", "T_STOP", "T_STYLE",
  "T_SUBNET", "T_SUM", "T_SYNTHESIZED", "T_TAPER", "T_TAPERRULE", "T_TECH",
  "T_THRUPIN", "T_TIMINGDISABLES", "T_TOCLOCKPIN", "T_TOCOMPPIN",
  "T_TOIOPIN", "T_TOPIN", "T_TOPRIGHT", "T_TRACKS", "T_TURNOFF", "T_UNITS",
  "T_UNPLACED", "T_USE", "T_VARIABLE", "T_VERSION", "T_VERTICAL", "T_VIAS",
  "T_VOLTAGE", "T_VPIN", "T_W", "T_WEIGHT", "T_WIDTH", "T_WIRECAP",
  "T_WIREDLOGIC", "T_XTALK", "T_INPUT", "T_OUTPUT", "T_INOUT",
  "T_FEEDTHRU", "';'", "'-'", "'+'", "'('", "')'", "'*'", "','", "$accept",
  "def_file", "version_stmt", "case_sens_stmt", "rules", "rule",
  "design_section", "design_name", "end_design", "tech_name", "array_name",
  "floorplan_name", "history", "prop_def_section", "property_defs",
  "property_def", "property_type_and_val", "opt_num_val", "units",
  "divider_char", "bus_bit_chars", "site", "canplace", "cannotoccupy",
  "orient", "direction", "die_area", "pin_cap_rule", "start_def_cap",
  "pin_caps", "pin_cap", "end_def_cap", "pin_rule", "start_pins", "pins",
  "pin", "pin_start", "pin_options", "pin_option", "end_pins", "row_rule",
  "row_options", "row_option", "row_prop_list", "row_prop", "tracks_rule",
  "track_start", "track_layer_statement", "track_layers", "track_layer",
  "gcellgrid", "extension_section", "extension_stmt", "via_section", "via",
  "via_declarations", "via_declaration", "via_start", "layer_stmts",
  "layer_stmt", "pt", "via_end", "regions_section", "regions_start",
  "regions_stmts", "regions_stmt", "rect_list", "region_options",
  "region_option", "region_prop_list", "region_prop", "comps_section",
  "start_comps", "comps_rule", "comp", "comp_start", "comp_net_list",
  "comp_options", "comp_option", "comp_extension_stmt", "comp_eeq",
  "comp_generate", "opt_pattern", "comp_source", "comp_region",
  "comp_pnt_list", "comp_property", "comp_prop_list", "comp_prop",
  "comp_region_start", "comp_foreign", "opt_paren", "comp_type",
  "placement_status", "weight", "end_comps", "nets_section", "start_nets",
  "net_rules", "one_net", "net_start", "net_connections", "net_connection",
  "net_conn_start", "net_conn_opt", "net_options", "net_option",
  "net_prop_list", "net_prop", "vpin_stmt", "vpin_begin", "vpin_layer_opt",
  "property_val", "vpin_options", "vpin_status", "net_type", "paths",
  "new_path", "path", "path_start", "path_item_list", "path_item",
  "path_pt", "opt_taper", "opt_shape", "opt_width", "end_nets",
  "snets_section", "snet_rules", "snet_rule", "snet_start",
  "snet_connections", "snet_connection", "snet_conn_start",
  "snet_conn_opt", "snet_options", "snet_option", "snet_other_option",
  "snet_width", "snet_voltage", "snet_spacing", "opt_snet_range",
  "opt_range", "start_snets", "end_snets", "groups_section",
  "groups_start", "group_rules", "group_rule", "start_group",
  "group_members", "group_member", "group_options", "group_option",
  "group_region", "group_prop_list", "group_prop", "group_soft_options",
  "group_soft_option", "groups_end", "assertions_section",
  "constraint_section", "assertions_start", "constraints_start",
  "constraint_rules", "constraint_rule", "operand_rule", "operand",
  "operand_list", "wiredlogic_rule", "opt_plus", "delay_specs",
  "delay_spec", "constraints_end", "assertions_end", "scanchains_section",
  "scanchain_start", "scanchain_rules", "scan_rule", "start_scan",
  "scan_members", "opt_pin", "scan_member", "opt_common_pins",
  "floating_inst_list", "one_floating_inst", "floating_pins",
  "ordered_inst_list", "one_ordered_inst", "ordered_pins", "scanchain_end",
  "iotiming_section", "iotiming_start", "iotiming_rules", "iotiming_rule",
  "start_iotiming", "iotiming_members", "iotiming_member", "risefall",
  "iotiming_end", "floorplan_contraints_section", "fp_start", "fp_stmts",
  "fp_stmt", "h_or_v", "constraint_type", "constrain_what_list",
  "constrain_what", "row_or_comp_list", "row_or_comp",
  "timingdisables_section", "timingdisables_start", "timingdisables_rules",
  "timingdisables_rule", "td_macro_option", "timingdisables_end",
  "partitions_section", "partitions_start", "partition_rules",
  "partition_rule", "start_partition", "turnoff", "turnoff_setup",
  "turnoff_hold", "partition_members", "partition_member", "minmaxpins",
  "min_or_max_list", "min_or_max_member", "pin_list",
  "risefallminmax1_list", "risefallminmax1", "risefallminmax2_list",
  "risefallminmax2", "partitions_end", "comp_names", "comp_name",
  "subnet_opt_syn", "subnet_options", "subnet_option", "pin_props_section",
  "begin_pin_props", "opt_semi", "end_pin_props", "pin_prop_list",
  "pin_prop_terminal", "pin_prop_options", "pin_prop",
  "pin_prop_name_value_list", "pin_prop_name_value", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
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
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
      59,    45,    43,    40,    41,    42,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   181,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   183,   183,   183,   183,   183,   184,   184,
     185,   186,   187,   188,   189,   190,   191,   191,   191,   191,
     191,   191,   191,   191,   192,   192,   192,   192,   193,   194,
     195,   196,   196,   197,   198,   199,   200,   201,   201,   202,
     203,   204,   204,   205,   205,   205,   205,   205,   205,   206,
     207,   208,   208,   209,   210,   210,   211,   212,   213,   214,
     214,   215,   215,   216,   217,   218,   219,   220,   221,   222,
     222,   223,   224,   225,   225,   226,   226,   226,   227,   227,
     227,   227,   228,   229,   230,   231,   231,   232,   233,   233,
     234,   234,   235,   236,   236,   237,   238,   239,   240,   240,
     241,   242,   243,   243,   243,   244,   244,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   246,   247,   248,   249,
     249,   250,   251,   251,   252,   252,   253,   254,   254,   255,
     256,   257,   258,   258,   259,   260,   260,   260,   260,   261,
     262,   263,   264,   265,   265,   266,   267,   268,   268,   269,
     269,   270,   270,   271,   271,   271,   272,   272,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   274,   274,   275,   276,   277,   278,
     278,   279,   279,   280,   280,   281,   281,   281,   282,   282,
     282,   283,   283,   284,   285,   286,   287,   287,   288,   288,
     289,   289,   289,   289,   289,   289,   289,   289,   290,   290,
     290,   291,   291,   292,   292,   293,   294,   295,   295,   296,
     297,   298,   298,   299,   300,   300,   300,   301,   301,   301,
     302,   302,   303,   303,   303,   303,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   305,   306,   307,
     308,   308,   309,   309,   310,   311,   312,   313,   314,   314,
     315,   316,   317,   317,   318,   319,   319,   320,   320,   320,
     320,   321,   321,   322,   322,   323,   324,   324,   325,   325,
     325,   326,   327,   328,   329,   330,   331,   331,   332,   332,
     333,   334,   334,   334,   334,   335,   335,   336,   337,   337,
     338,   338,   339,   339,   339,   339,   340,   341,   342,   343,
     344,   344,   345,   346,   347,   347,   348,   348,   349,   349,
     349,   349,   349,   349,   350,   350,   350,   351,   351,   352,
     353,   353,   353,   354,   354,   355,   356,   356,   356,   357,
     358,   359,   360,   360,   361,   362,   363,   363,   364,   364,
     364,   364,   364,   364,   364,   364,   365,   365,   366,   367,
     368,   369,   369,   370,   371,   371,   372,   372,   372,   372,
     373,   373,   374,   374,   375,   375,   376,   376,   377,   378,
     379,   379,   380,   380,   380,   380,   381,   381,   382,   383,
     384,   385,   385,   386,   387,   388,   388,   389,   389,   389,
     390,   390,   390,   391,   391,   392,   392,   392,   392,   392,
     392,   392,   393,   394,   394,   395,   395,   396,   396,   397,
     397,   398,   398,   398,   398,   399,   399,   400,   400,   400,
     400,   401,   402,   402,   403,   404,   404,   405,   405,   406,
     406,   407,   408,   409,   409,   410,   411,   411,   412,   413,
     413,   414,   415,   415,   416
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     4,     0,     3,     0,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     3,     3,     3,
       3,     4,     0,     2,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     3,     1,     2,     2,     0,     1,
       5,     3,     3,    13,    13,    13,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       2,     0,     2,     5,     2,     3,     3,     0,     2,     3,
       5,     0,     2,     2,     1,     3,     3,     5,     3,     2,
      15,     0,     2,     3,     0,     2,     2,     8,     2,     0,
       2,     0,     2,     1,     8,     1,     2,     3,     3,     0,
       2,     3,     2,     0,     2,     5,     3,     1,     4,     4,
       4,     4,     2,     4,     3,     0,     2,     5,     2,     3,
       0,     2,     3,     0,     2,     2,     3,     3,     0,     2,
       4,     3,     0,     2,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     0,
       1,     3,     2,     2,     2,     3,     3,     0,     2,     2,
       2,     5,     1,     2,     3,     2,     2,     2,     2,     3,
       2,     3,     3,     0,     2,     4,     2,     0,     2,     4,
       5,     2,     2,     0,     1,     2,     0,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     5,     3,     1,     0,     2,     2,     5,     3,     0,
       2,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     6,     1,     0,     2,     1,     1,
       4,     4,     4,     4,     5,     5,     5,     5,     0,     1,
       2,     0,     3,     0,     1,     2,     3,     0,     2,     4,
       2,     0,     2,     4,     2,     2,     2,     0,     1,     2,
       0,     2,     1,     1,     1,     1,     3,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     4,     3,     5,
       0,     3,     0,     3,     3,     2,     3,     3,     0,     2,
       4,     2,     0,     2,     1,     0,     2,     3,     3,     3,
       1,     2,     1,     0,     2,     2,     0,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     0,     2,     1,     1,
       4,     2,     5,     4,     4,     1,     3,     7,     0,     1,
       0,     2,     3,     3,     3,     3,     2,     2,     3,     3,
       0,     2,     3,     2,     0,     2,     0,     1,     4,     3,
       3,     4,     3,     1,     0,     4,     8,     0,     2,     2,
       0,     4,     8,     0,     2,     2,     0,     4,     8,     2,
       3,     3,     0,     2,     3,     5,     0,     2,     5,     5,
       3,     3,     2,     2,     2,     1,     1,     1,     2,     4,
       3,     0,     2,     6,     1,     1,     1,     2,     2,     2,
       0,     2,     3,     3,     0,     2,     4,     4,     3,     3,
       0,     2,     8,     5,     5,     3,     4,     2,     2,     3,
       3,     0,     2,     3,     3,     0,     3,     0,     1,     1,
       0,     1,     1,     0,     2,     6,     5,     4,     6,     5,
       4,     1,     3,     0,     2,     3,     3,     0,     2,     0,
       2,     2,     2,     2,     2,     1,     2,     3,     3,     3,
       3,     2,     0,     2,     5,     0,     2,     0,     2,     2,
       2,     3,     3,     0,     1,     2,     0,     2,     5,     0,
       2,     3,     0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,     6,     0,     1,     0,     0,     5,     0,
      10,     2,     7,     0,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    11,    27,
       3,    28,    41,    42,    29,    44,    30,    31,    32,    33,
      34,    35,    36,    37,    91,    38,    97,    43,    39,     0,
      40,    13,    12,   129,    22,   145,    14,   158,    15,   203,
      16,   277,    17,   318,    20,    19,   346,   346,    18,   370,
      21,   402,    23,   421,    24,   440,    25,   451,    26,   506,
       0,     0,     0,     0,     0,     0,     0,    90,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,   503,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,   344,    72,     0,     0,   157,   345,    45,     0,
       0,     0,    71,    49,   420,     0,   317,    50,   401,   202,
     450,   504,   502,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,   144,     0,   369,     0,   314,
      47,   439,     0,   128,     0,     0,    92,    89,     0,     0,
      98,   101,    95,     0,     0,     0,   130,   133,   127,     0,
       0,   146,     0,     0,   159,   162,   156,     0,     0,   204,
     207,   201,     0,     0,   278,   281,   276,     0,     0,   319,
     322,   316,     0,     0,   347,   348,   349,   342,     0,   343,
       0,     0,   371,   374,   368,     0,     0,   403,   406,   400,
       0,     0,   422,     0,     0,   441,   438,     0,     0,   452,
     463,   449,     0,     0,   501,   507,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,   109,
       0,     0,     0,   142,   132,     0,   143,     0,   200,     0,
     165,   275,   206,   216,   315,   280,   290,   341,   321,   325,
     367,     0,     0,     0,     0,     0,   360,   366,   399,   373,
       0,   418,     0,     0,   419,     0,   448,     0,     0,     0,
       0,   491,   455,     0,   505,     0,    77,    81,    80,    82,
      83,    76,    78,    79,     0,     0,   138,   140,   139,   141,
       0,    65,   312,     0,   312,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    70,     0,     0,    99,
       0,   102,   104,     0,     0,   131,     0,   137,   134,     0,
     150,   161,   164,   163,     0,     0,     0,   208,     0,     0,
     282,     0,   324,   323,     0,     0,   351,     0,     0,   358,
       0,   372,     0,   383,   375,     0,     0,     0,     0,   404,
       0,   415,   407,   424,   425,     0,     0,     0,   445,     0,
     457,   454,   453,     0,   471,   464,   509,     0,     0,     0,
      66,     0,    68,    67,    68,    59,    62,    54,    58,    55,
      61,    57,    60,    56,     0,     0,     0,     0,   126,   196,
       0,   195,     0,   197,   103,   198,     0,     0,   119,     0,
       0,   148,     0,     0,   160,     0,   176,   166,   175,   173,
     167,   168,   172,   174,     0,   171,   169,     0,   170,     0,
       0,     0,   213,   205,     0,   233,   217,   228,   239,     0,
       0,     0,   287,   279,     0,   306,   291,   295,   292,   293,
     294,   320,     0,   330,   326,   355,     0,     0,     0,   359,
       0,   350,     0,   361,   384,   387,   393,     0,     0,     0,
     412,   414,   413,     0,     0,   417,   416,     0,   426,     0,
       0,     0,   430,     0,     0,     0,     0,     0,   459,   458,
     460,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    63,    64,     0,     0,    93,   100,    84,
      85,    86,    87,   105,     0,   106,   108,   121,     0,   136,
       0,   149,   147,     0,   151,     0,     0,     0,   187,   190,
       0,     0,   183,     0,   182,     0,   213,   211,   212,     0,
     214,     0,   249,     0,   248,     0,     0,     0,     0,   234,
     250,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   284,   285,   286,     0,   288,     0,     0,     0,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   333,     0,   336,   354,     0,     0,   353,     0,     0,
       0,     0,     0,     0,   382,   379,   380,   376,   376,   405,
     410,   411,     0,     0,   429,   427,   428,     0,     0,     0,
     447,   444,   443,   462,   461,   456,     0,     0,   479,     0,
       0,   479,   508,     0,   510,     0,     0,   124,   313,     0,
       0,     0,   123,   120,   121,   117,     0,   153,   179,   177,
       0,   186,   181,   199,   184,     0,   194,     0,   215,   209,
     224,   227,   255,   230,   251,   273,   220,   221,   232,   229,
     219,   226,   492,   225,   238,   222,   223,   218,   240,     0,
     289,   283,   302,   299,   300,   305,     0,   298,     0,   304,
     303,   308,   301,     0,   296,   328,   332,     0,   329,   327,
     356,   352,     0,   365,   364,   363,   362,     0,   390,   388,
     396,   394,   377,   378,   381,     0,     0,   423,     0,   431,
       0,     0,     0,     0,   467,     0,     0,   470,   512,     0,
       0,     0,     0,   107,   122,   135,   152,   180,   178,     0,
     192,     0,     0,   188,   185,   210,     0,   252,   274,   271,
       0,   235,   497,   243,   297,   310,   307,     0,   334,   331,
       0,     0,     0,   337,   357,     0,     0,   389,     0,   395,
     409,   408,   434,   434,     0,   446,   473,     0,     0,     0,
       0,   466,   485,     0,     0,     0,     0,   480,   473,   469,
     511,     0,     0,     0,     0,     0,   154,   193,   191,   241,
     242,   189,   253,     0,   268,   236,     0,   493,   231,   247,
     246,   245,   237,     0,     0,   309,   335,   340,   338,   339,
     385,     0,     0,   432,   433,   442,   465,     0,     0,     0,
       0,     0,   486,   484,   482,   483,   481,   468,     0,   513,
       0,     0,     0,     0,   155,     0,   269,     0,     0,     0,
       0,     0,   498,     0,     0,     0,     0,     0,     0,   435,
       0,     0,   477,   474,   490,   488,   489,   487,   514,     0,
       0,     0,     0,   272,   270,     0,   256,   495,   500,   499,
     244,   311,     0,   391,   397,     0,     0,     0,     0,   472,
      75,    74,   111,    73,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,   476,   475,   478,     0,     0,     0,
       0,     0,   258,   257,   259,   496,   494,   386,     0,     0,
     437,   436,   110,     0,   112,     0,   260,     0,   262,     0,
     261,     0,   263,     0,     0,   114,   264,   266,   265,   267,
     392,   398,   113,     0,   115,   116
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,    11,    47,    48,    49,    50,    51,
      52,    53,    54,    55,   123,   184,   355,   553,    56,    57,
      58,    59,    60,    61,   344,   563,    62,    63,    64,   134,
     196,   197,    65,    66,   135,   200,   201,   291,   371,   202,
      67,   947,   964,   982,   984,    68,    69,   568,   683,   684,
      70,    71,   590,    72,    73,   137,   206,   207,   295,   378,
     110,   208,    74,    75,   138,   211,   380,   463,   574,   776,
     836,    76,    77,   139,   214,   215,   300,   384,   467,   468,
     469,   470,   778,   471,   472,   584,   473,   691,   783,   474,
     475,   781,   476,   373,   478,   216,    78,    79,   140,   219,
     220,   303,   387,   482,   591,   388,   486,   708,   791,   487,
     488,   611,   841,   852,   853,   609,   703,   787,   704,   705,
     936,   953,   916,   888,   844,   789,   221,    80,   141,   224,
     225,   306,   390,   492,   617,   391,   496,   497,   498,   499,
     500,   855,   432,    81,   226,    82,    83,   142,   229,   230,
     309,   393,   394,   504,   738,   735,   798,   739,   803,   231,
      84,    85,    86,    87,   143,   234,   235,   505,   506,   236,
     510,   400,   513,   239,   237,    88,    89,   145,   242,   243,
     320,   753,   404,   644,   645,   749,   807,   646,   751,   809,
     244,    90,    91,   146,   247,   248,   323,   412,   527,   249,
      92,    93,   147,   252,   415,   532,   657,   759,   863,   899,
      94,    95,   148,   255,   536,   256,    96,    97,   149,   259,
     260,   421,   540,   665,   333,   425,   866,   867,   903,   929,
     764,   827,   821,   822,   261,   792,   847,   938,   848,   892,
      98,    99,   172,   264,   150,   265,   547,   674,   830,   879
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -785
static const yytype_int16 yypact[] =
{
     -87,    83,    64,    62,   -67,  -785,    93,   193,  -785,   -54,
    -785,   351,  -785,   112,   122,  -785,   115,   137,   142,   153,
     165,   178,   146,    75,   215,   206,   241,   238,   244,   248,
     256,   253,   262,   270,   278,   279,  -785,   285,   288,   296,
     304,   297,   305,   309,   326,   284,   333,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,   338,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
     188,   208,   209,   376,   377,   224,   227,  -785,   228,     4,
      75,   236,  -785,   249,   267,   397,   272,   274,   275,   277,
     283,   286,   287,   239,   289,   402,   290,   398,   292,   293,
     295,  -785,   346,   298,    56,    -4,   407,    -3,     0,    14,
      28,    34,    35,    48,    50,    55,    61,    65,    68,    72,
      74,  -785,  -785,  -785,   436,   437,  -785,  -785,  -785,     5,
       7,   301,  -785,  -785,  -785,   417,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,   453,   458,   459,   370,   462,   463,
     465,   466,   467,   468,  -785,  -785,   472,  -785,   473,  -785,
    -785,  -785,   474,  -785,   454,   476,  -785,  -785,   389,   477,
    -785,  -785,  -785,   480,   339,   481,  -785,  -785,  -785,   388,
     485,  -785,   471,   489,  -785,  -785,  -785,   416,   491,  -785,
    -785,  -785,   379,   493,  -785,  -785,  -785,   443,   496,  -785,
    -785,  -785,   494,   -12,  -785,  -785,  -785,  -785,   482,  -785,
     394,   501,  -785,  -785,  -785,   444,   344,  -785,  -785,  -785,
     461,   505,  -785,   378,   -18,  -785,  -785,   427,   506,  -785,
    -785,  -785,   423,   510,  -785,  -785,   337,   337,   352,   353,
     354,   355,  -785,   512,    57,    57,    57,  -785,    57,    57,
      57,    57,    57,    57,   517,   337,   361,  -785,   371,  -785,
     363,    92,   400,  -785,  -785,    99,  -785,    75,  -785,   522,
      13,  -785,  -785,   -29,  -785,  -785,   364,  -785,  -785,   524,
    -785,   366,   526,   527,   369,   529,  -785,  -785,  -785,  -785,
     143,  -785,   530,   -13,  -785,   -24,  -785,   531,   532,   380,
     533,  -785,   399,   169,  -785,   534,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,   511,   513,  -785,  -785,  -785,  -785,
     418,   538,   450,   542,   450,   387,   390,   391,   392,   393,
     395,   396,   401,   403,   337,   518,  -785,   545,   483,  -785,
     204,  -785,  -785,    75,   551,  -785,   214,  -785,  -785,    75,
      75,  -785,  -785,  -785,   175,   404,    41,  -785,   189,    12,
    -785,   196,  -785,  -785,   212,    40,  -785,   553,    40,   406,
     223,  -785,   280,  -785,  -785,   554,   555,   559,   560,  -785,
      43,  -785,  -785,  -785,  -785,   268,   561,   -28,  -785,   562,
       1,  -785,  -785,    29,  -785,  -785,  -785,   566,   567,   569,
    -785,   570,   571,  -785,   571,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,   544,   574,   419,   577,  -785,  -785,
     235,  -785,   578,  -785,  -785,  -785,   579,   337,   515,   580,
     582,  -785,    75,   237,  -785,    20,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,    22,  -785,  -785,    75,  -785,    41,
     583,   584,   428,  -785,   117,  -785,  -785,  -785,   528,   585,
     588,   589,   432,  -785,   202,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,    30,  -785,  -785,  -785,   -33,   591,   246,  -785,
     535,  -785,    33,  -785,   433,  -785,  -785,   593,   594,   435,
    -785,  -785,  -785,   597,   598,  -785,  -785,   -60,  -785,   600,
     601,   602,  -785,   469,   603,   604,   451,   452,  -785,  -785,
     132,   606,   609,   610,   611,   612,   613,   263,   605,   607,
     464,   616,  -785,  -785,  -785,   618,   617,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,    75,  -785,  -785,   619,   475,  -785,
      75,  -785,  -785,   536,  -785,   621,   622,   627,  -785,  -785,
     628,   630,  -785,    75,    75,   337,   428,  -785,  -785,    32,
    -785,   470,  -785,   633,  -785,   634,   635,   636,   637,  -785,
    -785,   638,   639,   640,   641,   642,   643,   645,   646,   635,
     647,    75,  -785,  -785,  -785,    38,  -785,   486,   649,   650,
     651,  -785,   652,   653,   654,   655,   656,   658,   659,   660,
     635,  -785,    23,  -785,  -785,    40,   661,  -785,   663,   664,
     665,   666,   667,   668,  -785,   669,   670,   671,   671,  -785,
    -785,  -785,   673,   674,  -785,  -785,  -785,   264,   675,   500,
    -785,  -785,  -785,  -785,  -785,  -785,   676,   677,  -785,   678,
     679,  -785,  -785,   592,  -785,   681,   683,  -785,  -785,   680,
     684,    75,  -785,  -785,   619,  -785,    75,  -785,   685,  -785,
      21,   686,  -785,  -785,  -785,    75,  -785,   499,  -785,  -785,
    -785,  -785,  -785,   543,  -785,   688,  -785,  -785,   690,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,   543,  -785,    75,
    -785,  -785,  -785,  -785,  -785,   690,   635,  -785,   689,  -785,
    -785,  -785,  -785,   692,   543,   693,  -785,    75,  -785,   250,
    -785,  -785,   539,  -785,  -785,  -785,  -785,   694,   490,  -785,
     508,  -785,  -785,  -785,  -785,   697,   698,  -785,    17,  -785,
     699,   700,    44,    49,   240,    44,    49,   240,  -785,   565,
     573,   702,   586,  -785,  -785,  -785,   703,  -785,  -785,   705,
    -785,   706,   425,  -785,  -785,  -785,   635,  -785,  -785,   516,
     425,  -785,   548,    45,   543,   620,  -785,   425,  -785,  -785,
     709,   710,   711,  -785,  -785,   552,   713,  -785,   714,  -785,
    -785,  -785,  -785,  -785,   546,  -785,  -785,   716,   717,   718,
     719,    49,  -785,   720,   721,   722,   723,  -785,  -785,    49,
     724,   726,   727,   608,   729,   425,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,   623,   147,  -785,   731,  -785,   211,  -785,
    -785,  -785,  -785,    75,   730,  -785,  -785,  -785,  -785,  -785,
     564,   732,   733,   575,   575,  -785,  -785,   -15,   736,   737,
     738,   739,  -785,  -785,  -785,  -785,  -785,  -785,   425,  -785,
     741,   742,   743,   744,  -785,   745,  -785,   746,   590,   747,
     748,   635,  -785,   337,   751,   752,   595,   596,    37,  -785,
     754,   755,  -785,  -785,  -785,  -785,  -785,  -785,  -785,   614,
     615,   758,   624,  -785,  -785,     8,  -785,   540,  -785,   543,
    -785,  -785,   759,   599,   625,   760,   761,   763,   764,   765,
    -785,  -785,  -785,  -785,     9,    11,    25,   644,   626,   629,
     766,   767,   631,   632,  -785,  -785,  -785,   271,    15,    16,
      18,    19,  -785,  -785,  -785,  -785,  -785,  -785,   769,   772,
    -785,  -785,  -785,   662,  -785,   648,  -785,   657,  -785,   672,
    -785,   682,  -785,   687,   691,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,   773,   425,  -785,  -785
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,   139,   314,  -785,  -785,
    -785,  -785,  -785,  -785,  -265,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,    84,  -785,
    -785,  -785,  -286,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -110,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,   405,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,   299,   194,  -785,  -785,   158,  -785,  -785,
    -785,  -785,  -784,  -785,  -785,  -491,  -605,  -785,    -5,  -785,
    -785,  -785,  -154,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,   429,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,   704,  -785,  -785,  -232,   408,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,   138,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -670,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,   -26,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,   -43,  -785,  -785,  -785,
     121,  -785,    31,  -769,  -785,  -785,  -785,  -785,  -785,  -785,
    -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785,  -785
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -9
static const yytype_int16 yytable[] =
{
     161,   316,   345,   630,   717,   372,   845,   159,   268,   377,
     270,   934,   948,   856,   950,   311,   489,   382,   965,   967,
     365,   969,   971,   534,   779,   734,   582,   736,   812,   952,
     448,   198,   204,   327,   403,   209,   413,   411,   406,   448,
     448,   575,   448,   449,   385,   480,   328,   424,   448,   212,
     900,   884,   872,   448,   576,   652,   901,   925,     1,   523,
     872,   351,   451,   217,     5,   312,   577,   311,   849,   222,
     227,   407,   639,   640,   313,   524,   902,   541,   542,   543,
     329,   525,   525,   232,   653,   238,     4,   850,   817,   818,
     240,   194,   816,     8,   908,   828,   245,     9,   466,   444,
     250,   490,   485,   253,   535,   495,    12,   257,   503,   262,
     538,   539,   453,   578,   330,   314,   100,   312,   352,   579,
     102,   794,   414,   631,   408,   101,   313,   448,   195,   632,
     481,   634,   353,   635,   386,   641,   642,   851,     6,   580,
     592,   103,   315,   926,   526,   526,   104,   409,   633,   410,
     108,   819,   820,   354,   593,   813,   105,   199,   205,   594,
     698,   210,   455,   544,   545,   546,   720,   314,   106,   160,
     269,   581,   271,   935,   949,   213,   951,   491,   383,   966,
     968,   107,   970,   972,   109,   109,   109,   379,   915,   218,
     663,   664,   566,    -8,    10,   223,   228,   595,   596,   985,
     597,    -8,    -8,    -8,   598,    -8,   616,    -8,    -8,   233,
     599,   233,   448,    -8,   448,    -8,   241,    -8,    -8,    -8,
     111,   600,   246,    -8,   448,   592,   251,   449,    -8,   254,
     601,   112,   450,   258,   592,   263,   602,    -8,   109,   618,
      -8,   114,   603,   604,   594,   113,   451,    -8,   115,    -8,
      -8,   116,   369,   594,   370,    -8,   118,   174,   175,   375,
     605,   376,   117,   457,   176,   119,   606,   452,   607,   461,
     462,    -8,   608,   120,   177,   528,   886,   887,    -8,   823,
     824,   121,   122,    -8,    -8,   619,   919,    -8,   124,   620,
     448,   890,   125,    -8,   178,   621,   453,   514,    -8,   126,
     128,    -8,   459,   401,   529,   402,   600,    -8,   127,   129,
      -8,   460,   130,   132,   622,   600,   179,   800,   801,   802,
     696,   623,   624,   515,    -8,   454,    -8,   625,   180,   422,
     131,   423,    -8,   530,    -8,   464,   133,   465,   181,   531,
      -8,   136,   825,   826,   182,   626,   455,   456,   151,   483,
     627,   484,   571,   628,   629,   183,   493,   891,   494,    13,
      14,    15,   516,    16,   583,    17,    18,   585,   152,   153,
     336,    19,   501,    20,   502,    21,    22,    23,   337,   154,
     155,    24,   338,   511,   156,   512,    25,   157,   158,   339,
     340,   559,   560,   561,   562,    26,   162,   572,    27,   573,
     165,   188,   517,   740,   518,    28,   186,    29,    30,   163,
     637,   341,   635,    31,   356,   357,   192,   358,   359,   360,
     361,   362,   363,   672,   757,   673,   758,   164,   839,    32,
     840,   962,   166,   963,   167,   168,    33,   169,   203,   266,
     267,    34,    35,   170,   342,    36,   171,   173,   273,   185,
     187,    37,   189,   190,   681,   191,    38,   274,   193,    39,
     686,   272,   275,   276,   277,    40,   278,   279,    41,   280,
     281,   282,   283,   694,   695,   284,   285,   286,   287,   288,
     289,   290,    42,   292,    43,   294,   293,   343,   296,   297,
      44,   298,    45,   299,   301,   302,   304,   305,    46,   307,
     308,   719,   318,   310,   317,   319,   321,   322,   324,   325,
     332,   326,   331,   334,   335,   350,   346,   347,   348,   349,
     364,   366,   737,   374,   367,   368,   381,   389,   392,   395,
     396,   397,   398,   399,   405,   416,   417,   419,   426,   420,
     418,   429,   427,   430,   428,   431,   433,   435,   446,   445,
     436,   437,   438,   439,   458,   440,   441,   507,   519,   520,
     447,   442,   521,   443,   522,   533,   537,   479,   509,   548,
     549,   773,   550,   551,   552,   555,   775,   556,   567,   557,
     780,   558,   564,   565,   569,   784,   570,   587,   588,   612,
     589,   610,   613,   614,   615,   636,   643,   647,   648,   649,
     650,   638,   651,   654,   655,   656,   658,   659,   660,   793,
     666,   661,   662,   667,   668,   669,   670,   671,   675,   678,
     676,   679,   786,   682,   677,   688,   689,   799,   920,   687,
     680,   690,   692,   693,   699,   685,   700,   761,   701,   702,
     706,   707,   709,   710,   711,   712,   713,   714,   715,   716,
     721,   718,   722,   806,   723,   724,   726,   727,   728,   729,
     730,   731,   732,   785,   733,   741,   742,   743,   744,   745,
     746,   808,   747,   748,   750,   752,   755,   756,   843,   760,
     762,   763,   765,   766,   769,   768,   770,   772,   831,   777,
     782,   788,   795,   771,   790,   796,   832,   797,   805,   804,
     810,   811,   937,   814,   815,   833,   865,   835,   837,   834,
     838,   846,   857,   858,   859,   854,   860,   861,   862,   868,
     869,   870,   871,   873,   874,   875,   876,   895,   878,   880,
     881,   882,   883,   894,   885,   889,   896,   897,   898,   904,
     905,   906,   907,   893,   909,   910,   911,   912,   554,   913,
     914,   917,   918,   915,   921,   975,   922,   927,   928,   923,
     924,   932,   940,   939,   942,   943,   944,   945,   774,   946,
     958,   959,   955,   973,   930,   931,   974,   983,   586,   725,
     697,   842,   954,   434,   933,   877,   754,   864,   941,   477,
     956,   144,   767,   957,     0,   960,   961,   829,     0,     0,
       0,     0,     0,     0,     0,     0,   508,     0,     0,     0,
       0,     0,   976,     0,     0,     0,     0,     0,     0,     0,
       0,   977,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   978,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,     0,     0,     0,
       0,   980,     0,     0,     0,   981
};

static const yytype_int16 yycheck[] =
{
     110,   233,   267,   494,   609,   291,   790,     3,     3,   295,
       3,     3,     3,   797,     3,    27,     4,     4,     3,     3,
     285,     3,     3,    51,     3,   630,     4,     4,    11,     4,
      10,    35,    35,    51,   320,    35,    60,   323,    51,    10,
      10,    21,    10,    23,    73,     4,    64,   333,    10,    35,
      65,   835,   821,    10,    34,   115,    71,    20,   145,    16,
     829,     4,    42,    35,     0,    77,    46,    27,    23,    35,
      35,    84,    39,    40,    86,    32,    91,    48,    49,    50,
      98,    38,    38,    35,   144,    35,     3,    42,    39,    40,
      35,    35,   762,   160,   878,   765,    35,     4,   384,   364,
      35,    89,   388,    35,   132,   391,   160,    35,   394,    35,
     109,   110,    92,    93,   132,   127,     4,    77,    61,    99,
       5,   726,   146,    93,   137,     3,    86,    10,    72,    99,
      89,   164,    75,   166,   163,   102,   103,    92,    76,   119,
      23,     4,   154,   106,   101,   101,     4,   160,   118,   162,
       4,   102,   103,    96,    37,   138,     3,   161,   161,    42,
     128,   161,   142,   134,   135,   136,   128,   127,     3,   165,
     165,   151,   165,   165,   165,   161,   165,   165,   165,   164,
     164,     3,   164,   164,   163,   163,   163,   297,   163,   161,
      58,    59,   457,     0,     1,   161,   161,    80,    81,   983,
      83,     8,     9,    10,    87,    12,   492,    14,    15,   161,
      93,   161,    10,    20,    10,    22,   161,    24,    25,    26,
       5,   104,   161,    30,    10,    23,   161,    23,    35,   161,
     113,    25,    28,   161,    23,   161,   119,    44,   163,    37,
      47,     3,   125,   126,    42,     4,    42,    54,     4,    56,
      57,     3,   160,    42,   162,    62,     3,    18,    19,   160,
     143,   162,     6,   373,    25,     3,   149,    63,   151,   379,
     380,    78,   155,     3,    35,     7,   129,   130,    85,    39,
      40,     3,     3,    90,    91,    83,   891,    94,     3,    87,
      10,    80,     4,   100,    55,    93,    92,    17,   105,     3,
       3,   108,    88,   160,    36,   162,   104,   114,     4,     4,
     117,    97,     3,    29,   112,   104,    77,    67,    68,    69,
     585,   119,   120,    43,   131,   121,   133,   125,    89,   160,
       4,   162,   139,    65,   141,   160,     3,   162,    99,    71,
     147,     3,   102,   103,   105,   143,   142,   143,   160,   160,
     148,   162,   462,   151,   152,   116,   160,   848,   162,     8,
       9,    10,    82,    12,   474,    14,    15,   477,   160,   160,
      33,    20,   160,    22,   162,    24,    25,    26,    41,     3,
       3,    30,    45,   160,   160,   162,    35,   160,   160,    52,
      53,   156,   157,   158,   159,    44,   160,   160,    47,   162,
       3,     3,   122,   635,   124,    54,     4,    56,    57,   160,
     164,    74,   166,    62,   275,   276,    70,   278,   279,   280,
     281,   282,   283,   160,   160,   162,   162,   160,     3,    78,
       5,   160,   160,   162,   160,   160,    85,   160,    31,     3,
       3,    90,    91,   160,   107,    94,   160,   160,    31,   160,
     160,   100,   160,   160,   564,   160,   105,     4,   160,   108,
     570,   160,     4,     4,    94,   114,     4,     4,   117,     4,
       4,     4,     4,   583,   584,     3,     3,     3,    24,     3,
      91,     4,   131,     3,   133,     4,   147,   150,   100,     4,
     139,    20,   141,     4,    78,     4,   117,     4,   147,    56,
       4,   611,   108,     9,    22,     4,    62,   163,    47,     4,
       4,   133,    85,    90,     4,     3,   164,   164,   164,   164,
       3,   160,   632,   123,   153,   162,     4,   163,     4,   163,
       4,     4,   163,     4,     4,     4,     4,     4,     4,   140,
     160,   123,    31,     5,    31,    95,     4,   160,     3,    31,
     160,   160,   160,   160,     3,   160,   160,     4,     4,     4,
      77,   160,     3,   160,     4,     4,     4,   163,   162,     3,
       3,   681,     3,     3,     3,    31,   686,     3,    63,   160,
     690,     4,     4,     4,     4,   695,     4,     4,     4,     4,
     162,    63,     4,     4,   162,     4,   163,     4,     4,   164,
       3,    66,     4,     3,     3,     3,   137,     4,     4,   719,
       4,   160,   160,     4,     4,     4,     4,     4,    13,     3,
      13,     3,    79,     4,   160,     4,     4,   737,   893,    93,
      13,     4,     4,     3,   164,   160,     3,   137,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     3,     3,
     164,     4,     3,   163,     4,     4,     4,     4,     4,     4,
       4,     3,     3,   164,     4,     4,     3,     3,     3,     3,
       3,   163,     4,     4,     4,     4,     3,     3,   162,     4,
       4,     4,     4,     4,     3,    93,     3,     3,   123,     4,
       4,     3,     3,    13,     4,     3,   123,     4,     4,   160,
       3,     3,   162,     4,     4,     3,   160,     4,     3,   123,
       4,   163,     3,     3,     3,    95,   164,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     3,   163,     4,     3,
       3,   123,     3,     3,   111,     4,     4,     4,   163,     3,
       3,     3,     3,   853,     3,     3,     3,     3,   434,     4,
       4,     4,     4,   163,     3,    93,     4,     3,     3,   164,
     164,     3,   163,     4,     4,     4,     3,     3,   684,     4,
       4,     4,   128,     4,   160,   160,     4,     4,   479,   621,
     586,   786,   936,   354,   160,   828,   648,   813,   163,   384,
     164,    87,   671,   164,    -1,   164,   164,   766,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,   164
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   145,   168,   169,     3,     0,    76,   170,   160,     4,
       1,   171,   160,     8,     9,    10,    12,    14,    15,    20,
      22,    24,    25,    26,    30,    35,    44,    47,    54,    56,
      57,    62,    78,    85,    90,    91,    94,   100,   105,   108,
     114,   117,   131,   133,   139,   141,   147,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   185,   186,   187,   188,
     189,   190,   193,   194,   195,   199,   200,   207,   212,   213,
     217,   218,   220,   221,   229,   230,   238,   239,   263,   264,
     294,   310,   312,   313,   327,   328,   329,   330,   342,   343,
     358,   359,   367,   368,   377,   378,   383,   384,   407,   408,
       4,     3,     5,     4,     4,     3,     3,     3,     4,   163,
     227,     5,    25,     4,     3,     4,     3,     6,     3,     3,
       3,     3,     3,   181,     3,     4,     3,     4,     3,     4,
       3,     4,    29,     3,   196,   201,     3,   222,   231,   240,
     265,   295,   314,   331,   331,   344,   360,   369,   379,   385,
     411,   160,   160,   160,     3,     3,   160,   160,   160,     3,
     165,   227,   160,   160,   160,     3,   160,   160,   160,   160,
     160,   160,   409,   160,    18,    19,    25,    35,    55,    77,
      89,    99,   105,   116,   182,   160,     4,   160,     3,   160,
     160,   160,    70,   160,    35,    72,   197,   198,    35,   161,
     202,   203,   206,    31,    35,   161,   223,   224,   228,    35,
     161,   232,    35,   161,   241,   242,   262,    35,   161,   266,
     267,   293,    35,   161,   296,   297,   311,    35,   161,   315,
     316,   326,    35,   161,   332,   333,   336,   341,    35,   340,
      35,   161,   345,   346,   357,    35,   161,   361,   362,   366,
      35,   161,   370,    35,   161,   380,   382,    35,   161,   386,
     387,   401,    35,   161,   410,   412,     3,     3,     3,   165,
       3,   165,   160,    31,     4,     4,     4,    94,     4,     4,
       4,     4,     4,     4,     3,     3,     3,    24,     3,    91,
       4,   204,     3,   147,     4,   225,   100,     4,    20,     4,
     243,    78,     4,   268,   117,     4,   298,    56,     4,   317,
       9,    27,    77,    86,   127,   154,   334,    22,   108,     4,
     347,    62,   163,   363,    47,     4,   133,    51,    64,    98,
     132,    85,     4,   391,    90,     4,    33,    41,    45,    52,
      53,    74,   107,   150,   191,   191,   164,   164,   164,   164,
       3,     4,    61,    75,    96,   183,   183,   183,   183,   183,
     183,   183,   183,   183,     3,   191,   160,   153,   162,   160,
     162,   205,   219,   260,   123,   160,   162,   219,   226,   227,
     233,     4,     4,   165,   244,    73,   163,   269,   272,   163,
     299,   302,     4,   318,   319,   163,     4,     4,   163,     4,
     338,   160,   162,   219,   349,     4,    51,    84,   137,   160,
     162,   219,   364,    60,   146,   371,     4,     4,   160,     4,
     140,   388,   160,   162,   219,   392,     4,    31,    31,   123,
       5,    95,   309,     4,   309,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   191,    31,     3,    77,    10,    23,
      28,    42,    63,    92,   121,   142,   143,   227,     3,    88,
      97,   227,   227,   234,   160,   162,   219,   245,   246,   247,
     248,   250,   251,   253,   256,   257,   259,   260,   261,   163,
       4,    89,   270,   160,   162,   219,   273,   276,   277,     4,
      89,   165,   300,   160,   162,   219,   303,   304,   305,   306,
     307,   160,   162,   219,   320,   334,   335,     4,   335,   162,
     337,   160,   162,   339,    17,    43,    82,   122,   124,     4,
       4,     3,     4,    16,    32,    38,   101,   365,     7,    36,
      65,    71,   372,     4,    51,   132,   381,     4,   109,   110,
     389,    48,    49,    50,   134,   135,   136,   413,     3,     3,
       3,     3,     3,   184,   184,    31,     3,   160,     4,   156,
     157,   158,   159,   192,     4,     4,   191,    63,   214,     4,
       4,   227,   160,   162,   235,    21,    34,    46,    93,    99,
     119,   151,     4,   227,   252,   227,   270,     4,     4,   162,
     219,   271,    23,    37,    42,    80,    81,    83,    87,    93,
     104,   113,   119,   125,   126,   143,   149,   151,   155,   282,
      63,   278,     4,     4,     4,   162,   219,   301,    37,    83,
      87,    93,   112,   119,   120,   125,   143,   148,   151,   152,
     282,    93,    99,   118,   164,   166,     4,   164,    66,    39,
      40,   102,   103,   163,   350,   351,   354,     4,     4,   164,
       3,     4,   115,   144,     3,     3,     3,   373,   137,     4,
       4,   160,   160,    58,    59,   390,     4,     4,     4,     4,
       4,     4,   160,   162,   414,    13,    13,   160,     3,     3,
      13,   227,     4,   215,   216,   160,   227,    93,     4,     4,
       4,   254,     4,     3,   227,   227,   191,   271,   128,   164,
       3,     4,     4,   283,   285,   286,     4,     4,   274,     4,
       4,     4,     4,     4,     4,     3,     3,   283,     4,   227,
     128,   164,     3,     4,     4,   274,     4,     4,     4,     4,
       4,     3,     3,     4,   283,   322,     4,   227,   321,   324,
     334,     4,     3,     3,     3,     3,     3,     4,     4,   352,
       4,   355,     4,   348,   348,     3,     3,   160,   162,   374,
       4,   137,     4,     4,   397,     4,     4,   397,    93,     3,
       3,    13,     3,   227,   215,   227,   236,     4,   249,     3,
     227,   258,     4,   255,   227,   164,    79,   284,     3,   292,
       4,   275,   402,   227,   283,     3,     3,     4,   323,   227,
      67,    68,    69,   325,   160,     4,   163,   353,   163,   356,
       3,     3,    11,   138,     4,     4,   365,    39,    40,   102,
     103,   399,   400,    39,    40,   102,   103,   398,   365,   399,
     415,   123,   123,     3,   123,     4,   237,     3,     4,     3,
       5,   279,   285,   162,   291,   279,   163,   403,   405,    23,
      42,    92,   280,   281,    95,   308,   279,     3,     3,     3,
     164,     4,     4,   375,   375,   160,   393,   394,     3,     3,
       3,     3,   400,     3,     3,     3,     3,   393,     4,   416,
       3,     3,   123,     3,   279,   111,   129,   130,   290,     4,
      80,   282,   406,   227,     3,   163,     4,     4,   163,   376,
      65,    71,    91,   395,     3,     3,     3,     3,   279,     3,
       3,     3,     3,     4,     4,   163,   289,     4,     4,   283,
     191,     3,     4,   164,   164,    20,   106,     3,     3,   396,
     160,   160,     3,   160,     3,   165,   287,   162,   404,     4,
     163,   163,     4,     4,     3,     3,     4,   208,     3,   165,
       3,   165,     4,   288,   289,   128,   164,   164,     4,     4,
     164,   164,   160,   162,   209,     3,   164,     3,   164,     3,
     164,     3,   164,     4,     4,    93,   164,   164,   164,   164,
     164,   164,   210,     4,   211,   279
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 45:
#line 144 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_design_name((yyvsp[(2) - (3)].s)); }
    break;

  case 46:
#line 148 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_end_design(); }
    break;

  case 47:
#line 152 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_tech_name((yyvsp[(2) - (3)].s)); }
    break;

  case 63:
#line 189 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 64:
#line 190 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 65:
#line 191 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 66:
#line 192 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 67:
#line 193 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 68:
#line 197 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 69:
#line 198 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 70:
#line 202 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_units ((yyvsp[(4) - (5)].n)); }
    break;

  case 76:
#line 226 "../../../src/sea/src/DEF_grammar_yacc.y"
    {  (yyval.n) = DEF_N; }
    break;

  case 77:
#line 227 "../../../src/sea/src/DEF_grammar_yacc.y"
    {  (yyval.n) = DEF_E; }
    break;

  case 78:
#line 228 "../../../src/sea/src/DEF_grammar_yacc.y"
    {  (yyval.n) = DEF_S; }
    break;

  case 79:
#line 229 "../../../src/sea/src/DEF_grammar_yacc.y"
    {  (yyval.n) = DEF_W; }
    break;

  case 80:
#line 230 "../../../src/sea/src/DEF_grammar_yacc.y"
    {  (yyval.n) = DEF_FN; }
    break;

  case 81:
#line 231 "../../../src/sea/src/DEF_grammar_yacc.y"
    {  (yyval.n) = DEF_FE; }
    break;

  case 82:
#line 232 "../../../src/sea/src/DEF_grammar_yacc.y"
    {  (yyval.n) = DEF_FS; }
    break;

  case 83:
#line 233 "../../../src/sea/src/DEF_grammar_yacc.y"
    {  (yyval.n) = DEF_FW; }
    break;

  case 84:
#line 237 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.n) = DEF_INPUT; }
    break;

  case 85:
#line 238 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.n) = DEF_OUTPUT; }
    break;

  case 86:
#line 239 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.n) = DEF_INOUT; }
    break;

  case 87:
#line 240 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.n) = DEF_FEEDTHRU; }
    break;

  case 88:
#line 244 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_die_area ((yyvsp[(2) - (4)].pt), (yyvsp[(3) - (4)].pt)); }
    break;

  case 96:
#line 273 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_start_pins((yyvsp[(2) - (3)].n)); }
    break;

  case 99:
#line 282 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_pin_options (); }
    break;

  case 100:
#line 286 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_pin_start((yyvsp[(2) - (5)].s), (yyvsp[(5) - (5)].s)); }
    break;

  case 105:
#line 297 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_pin_option_direction ((yyvsp[(3) - (3)].n)); }
    break;

  case 107:
#line 299 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_pin_option_layer ((yyvsp[(3) - (5)].s), (yyvsp[(4) - (5)].pt), (yyvsp[(5) - (5)].pt)); }
    break;

  case 108:
#line 300 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_pin_option_place ((yyvsp[(2) - (3)].pt), (yyvsp[(3) - (3)].n)); }
    break;

  case 109:
#line 304 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_end_pins(); }
    break;

  case 110:
#line 309 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_row_rule ((yyvsp[(2) - (15)].s), (yyvsp[(3) - (15)].s), (yyvsp[(4) - (15)].n), (yyvsp[(5) - (15)].n), (yyvsp[(6) - (15)].n), (yyvsp[(8) - (15)].n), (yyvsp[(10) - (15)].n), (yyvsp[(12) - (15)].n), (yyvsp[(13) - (15)].n)); }
    break;

  case 116:
#line 327 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 117:
#line 332 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_track_rule ((yyvsp[(1) - (8)].s), (yyvsp[(2) - (8)].n), (yyvsp[(4) - (8)].n), (yyvsp[(6) - (8)].n), (yyvsp[(7) - (8)].s)); }
    break;

  case 118:
#line 336 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.s) = (yyvsp[(2) - (2)].s); }
    break;

  case 119:
#line 340 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.s) = ""; }
    break;

  case 120:
#line 341 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.s) = (yyvsp[(2) - (2)].s); }
    break;

  case 121:
#line 345 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.s) = ""; }
    break;

  case 122:
#line 346 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.s) = def_track_layers ((yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s)); }
    break;

  case 123:
#line 350 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.s) = (yyvsp[(1) - (1)].s); }
    break;

  case 128:
#line 370 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_start_vias ((yyvsp[(2) - (3)].n)); }
    break;

  case 131:
#line 379 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_via_end (); }
    break;

  case 132:
#line 383 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_via_start ((yyvsp[(2) - (2)].s)); }
    break;

  case 135:
#line 392 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_via_stmt_rect ((yyvsp[(3) - (5)].s), (yyvsp[(4) - (5)].pt), (yyvsp[(5) - (5)].pt)); }
    break;

  case 136:
#line 393 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_via_stmt_pattern ((yyvsp[(3) - (3)].s)); }
    break;

  case 138:
#line 398 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.pt) = def_alloc_pt (   (yyvsp[(2) - (4)].n)   ,    (yyvsp[(3) - (4)].n)   ); }
    break;

  case 139:
#line 399 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.pt) = def_alloc_pt (HUGE_VAL,    (yyvsp[(3) - (4)].n)   ); }
    break;

  case 140:
#line 400 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.pt) = def_alloc_pt  (  (yyvsp[(2) - (4)].n)   , HUGE_VAL); }
    break;

  case 141:
#line 401 "../../../src/sea/src/DEF_grammar_yacc.y"
    { (yyval.pt) = def_alloc_pt (HUGE_VAL, HUGE_VAL); }
    break;

  case 142:
#line 405 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_end_vias (); }
    break;

  case 148:
#line 426 "../../../src/sea/src/DEF_grammar_yacc.y"
    { }
    break;

  case 149:
#line 427 "../../../src/sea/src/DEF_grammar_yacc.y"
    { }
    break;

  case 155:
#line 445 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 157:
#line 453 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_start_comps((yyvsp[(2) - (3)].n)); }
    break;

  case 161:
#line 466 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_comp_start((yyvsp[(2) - (3)].s), (yyvsp[(3) - (3)].s)); }
    break;

  case 162:
#line 470 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 163:
#line 471 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_comp_net_list("*"); }
    break;

  case 164:
#line 472 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_comp_net_list((yyvsp[(2) - (2)].s)); }
    break;

  case 179:
#line 505 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 180:
#line 506 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 184:
#line 519 "../../../src/sea/src/DEF_grammar_yacc.y"
    { }
    break;

  case 185:
#line 520 "../../../src/sea/src/DEF_grammar_yacc.y"
    { }
    break;

  case 189:
#line 533 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 192:
#line 545 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 193:
#line 546 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 194:
#line 550 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_comp_type ((yyvsp[(2) - (3)].pt), (yyvsp[(3) - (3)].n)); }
    break;

  case 200:
#line 565 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_end_comps(); }
    break;

  case 202:
#line 573 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_start_nets((yyvsp[(2) - (3)].n)); }
    break;

  case 206:
#line 586 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_net_start((yyvsp[(2) - (2)].s)); }
    break;

  case 211:
#line 600 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_net_conn_start((yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s)); }
    break;

  case 212:
#line 601 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_net_conn_start("PIN", (yyvsp[(2) - (2)].s)); }
    break;

  case 215:
#line 607 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_net_conn_opt_synthesized(); }
    break;

  case 236:
#line 640 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 241:
#line 657 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 242:
#line 658 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 255:
#line 692 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_start ((yyvsp[(1) - (1)].s)); }
    break;

  case 258:
#line 701 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_via ((yyvsp[(1) - (1)].s)); }
    break;

  case 260:
#line 706 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_pt (def_alloc_pt (   (yyvsp[(2) - (4)].n)   ,    (yyvsp[(3) - (4)].n)   )); }
    break;

  case 261:
#line 707 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_pt (def_alloc_pt (HUGE_VAL,    (yyvsp[(3) - (4)].n)   )); }
    break;

  case 262:
#line 708 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_pt (def_alloc_pt (   (yyvsp[(2) - (4)].n)   , HUGE_VAL)); }
    break;

  case 263:
#line 709 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_pt (def_alloc_pt (HUGE_VAL, HUGE_VAL)); }
    break;

  case 264:
#line 710 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_pt (def_alloc_pt (   (yyvsp[(2) - (5)].n)   ,    (yyvsp[(3) - (5)].n)   )); }
    break;

  case 265:
#line 711 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_pt (def_alloc_pt (HUGE_VAL,    (yyvsp[(3) - (5)].n)   )); }
    break;

  case 266:
#line 712 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_pt (def_alloc_pt (   (yyvsp[(2) - (5)].n)   , HUGE_VAL)); }
    break;

  case 267:
#line 713 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_path_item_pt (def_alloc_pt (HUGE_VAL, HUGE_VAL)); }
    break;

  case 273:
#line 728 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 274:
#line 729 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_opt_width ((yyvsp[(1) - (1)].n)); }
    break;

  case 275:
#line 733 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_end_nets(); }
    break;

  case 280:
#line 750 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_snet_start((yyvsp[(2) - (2)].s)); }
    break;

  case 284:
#line 763 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_snet_conn_start((yyvsp[(1) - (2)].s), (yyvsp[(2) - (2)].s)); }
    break;

  case 285:
#line 764 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_snet_conn_start("PIN", (yyvsp[(2) - (2)].s)); }
    break;

  case 286:
#line 765 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_snet_conn_start("PIN", (yyvsp[(2) - (2)].s)); }
    break;

  case 289:
#line 771 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_snet_conn_opt_synthesized(); }
    break;

  case 314:
#line 823 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_start_snets((yyvsp[(2) - (3)].n)); }
    break;

  case 315:
#line 827 "../../../src/sea/src/DEF_grammar_yacc.y"
    { def_end_snets(); }
    break;

  case 324:
#line 857 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 331:
#line 873 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 332:
#line 874 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 335:
#line 883 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 376:
#line 999 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 377:
#line 1000 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 389:
#line 1024 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 395:
#line 1039 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;

  case 514:
#line 1341 "../../../src/sea/src/DEF_grammar_yacc.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 3175 "DEF_grammar_yacc.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1344 "../../../src/sea/src/DEF_grammar_yacc.y"


void
yyerror(char *str)
{
  def_parse_error(str);
}


