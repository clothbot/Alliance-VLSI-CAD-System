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

/* All symbols defined below should begin with mipsyy or mipsYY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define mipsYYBISON 1

/* Bison version.  */
#define mipsYYBISON_VERSION "2.3"

/* Skeleton name.  */
#define mipsYYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define mipsYYPURE 0

/* Using locations.  */
#define mipsYYLSP_NEEDED 0



/* Tokens.  */
#ifndef mipsYYTOKENTYPE
# define mipsYYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum mipsyytokentype {
     _ALIGN = 258,
     _ASCII = 259,
     _ASCIIZ = 260,
     _BYTE = 261,
     _BYTEZ = 262,
     _DATA = 263,
     _END = 264,
     _EQU = 265,
     _GLOBAL = 266,
     _ORG = 267,
     _SPACE = 268,
     _SKIP = 269,
     _START = 270,
     _TEXT = 271,
     _WORD = 272,
     Ampersand = 273,
     Bar = 274,
     CarriageReturn = 275,
     Circomflex = 276,
     Codop_rd = 277,
     Codop_rd_rs_rt = 278,
     Codop_rd_rt_sham = 279,
     Codop_rd_rt_rs = 280,
     Codop_rd_rs_imd = 281,
     Codop_rs_rt_labl = 282,
     Codop_od_rs = 283,
     Codop_rs = 284,
     Codop_rd_mem = 285,
     Codop_rt_mem = 286,
     Codop_rt_cp0rd = 287,
     Codop_rs_labl = 288,
     Codop_rd_imd = 289,
     Codop_labl = 290,
     Codop_imd = 291,
     Codop_n = 292,
     Colon = 293,
     Comma = 294,
     CP0Register = 295,
     DoubleGreat = 296,
     DoubleLess = 297,
     Identifier = 298,
     IntegerRegister = 299,
     LeftParen = 300,
     Litteral = 301,
     Macro_n = 302,
     Macro_rd_longi = 303,
     Minus = 304,
     Plus = 305,
     Register = 306,
     RightParen = 307,
     Sharp = 308,
     Slash = 309,
     Star = 310,
     String = 311,
     Tilda = 312
   };
#endif
/* Tokens.  */
#define _ALIGN 258
#define _ASCII 259
#define _ASCIIZ 260
#define _BYTE 261
#define _BYTEZ 262
#define _DATA 263
#define _END 264
#define _EQU 265
#define _GLOBAL 266
#define _ORG 267
#define _SPACE 268
#define _SKIP 269
#define _START 270
#define _TEXT 271
#define _WORD 272
#define Ampersand 273
#define Bar 274
#define CarriageReturn 275
#define Circomflex 276
#define Codop_rd 277
#define Codop_rd_rs_rt 278
#define Codop_rd_rt_sham 279
#define Codop_rd_rt_rs 280
#define Codop_rd_rs_imd 281
#define Codop_rs_rt_labl 282
#define Codop_od_rs 283
#define Codop_rs 284
#define Codop_rd_mem 285
#define Codop_rt_mem 286
#define Codop_rt_cp0rd 287
#define Codop_rs_labl 288
#define Codop_rd_imd 289
#define Codop_labl 290
#define Codop_imd 291
#define Codop_n 292
#define Colon 293
#define Comma 294
#define CP0Register 295
#define DoubleGreat 296
#define DoubleLess 297
#define Identifier 298
#define IntegerRegister 299
#define LeftParen 300
#define Litteral 301
#define Macro_n 302
#define Macro_rd_longi 303
#define Minus 304
#define Plus 305
#define Register 306
#define RightParen 307
#define Sharp 308
#define Slash 309
#define Star 310
#define String 311
#define Tilda 312




/* Copy the first part of user declarations.  */
#line 32 "../../../src/mips_asm/src/mips_y.y"

#include <stdio.h>
#include "mut.h"
#include "log.h"
#include "beh.h"
#include "mips_type.h"
#include "mips_defs.h"
#include "mips_yacc.h"

main (argc, argv)

int   argc   ;
char *argv [];

  {
  extern FILE  *mipsyyin          ;
  extern FILE  *MPS_WRTFIL    ;
  extern FILE  *MPS_TXTFIL    ;
  extern FILE  *MPS_DATFIL    ;
  extern FILE  *MPS_SYMFIL    ;
  FILE         *fp_read       ;
  char          arg_flg [ 32] ;
  unsigned int  txt_siz       = 256;
  unsigned int  dat_siz       =  64;
  int           exit_val      =   1;
  int           asm_fil       =   0;
  int           txt_fil       =   0;
  int           dat_fil       =   0;
  int           i             ;
  char         *symbol_fil    ;
  char          arg_err       =   0;
  static int    call_nbr      =   0;

	/* ###------------------------------------------------------### */
	/*   initializations						*/
	/* ###------------------------------------------------------### */

  mbkenv ();

  alliancebanner_with_authors( "asm", "v0.3",
                  "MIPS Assembler", "1992",
                  ALLIANCE_VERSION,
                  "Pirouz Bazargan Sabet" );

  for (i=1 ; i<argc ; i++)
    arg_flg [i] = 0;

  if (MPS_HSHTAB == NULL)
    MPS_HSHTAB = beh_initab ();

	/* ###------------------------------------------------------### */
	/*   analyze the command line:					*/
	/*     - for each argument set a flag to 1 if recognized	*/
	/*     - find the last recognized option to identify the source	*/
	/*       and result files					*/
	/* ###------------------------------------------------------### */

  arg_flg [0] = 1;

  for (i=0 ; i<argc ; i++)
    {
    if (arg_flg [i] == 0)
      {
      if (!strcmp (argv[i], "-textsize"))
        {
        sscanf (argv[i+1], "%u", &txt_siz);
        arg_flg [i  ] = 1;
        arg_flg [i+1] = 1;
        }

      if (!strcmp (argv[i], "-datasize"))
        {
        sscanf (argv[i+1], "%u", &dat_siz);
        arg_flg [i  ] = 1;
        arg_flg [i+1] = 1;
        }

      if (!strcmp (argv[i], "-dump"))
        {
        MPS_DUMP      = 'y'       ;
        arg_flg [i]   = 1         ;
        }

      if (!strcmp (argv[i], "-symbol"))
        {
        MPS_SYMBOL    = 'y'       ;
        symbol_fil    = argv [i+1];
        arg_flg [i]   = 1         ;
        arg_flg [i+1] = 1         ;
        }

      }
    }

  for (i=(argc-1) ; i>0 ; i--)
    {
    if (arg_flg [i] == 1)
      break;
    }

  asm_fil       = i + 1;
  arg_flg [i+1] = 1    ;
  txt_fil       = i + 2;
  arg_flg [i+2] = 1    ;

  if ((i+3) < argc)
    {
    dat_fil       = i + 3;
    arg_flg [i+3] = 1    ;
    }


	/* ###------------------------------------------------------### */
	/*   cases of errors on the command line:			*/
	/*     - a unrecognized argument				*/
	/*     - not enough arguments					*/
	/*     - too many arguments					*/
	/* ###------------------------------------------------------### */

  if ((argc > 11) || (argc < 3))
    arg_err = 1;

  for (i=0 ; i<argc ; i++)
    {
    if (arg_flg [i] == 0)
      arg_err = 1;
    }

  if (arg_err == 1)
    {
    mips_error (101, NULL);
    exit (1);
    }

	/* ###------------------------------------------------------### */
	/*   open source file (assembly) and result files (vhdl)	*/
	/* ###------------------------------------------------------### */

  if ((fp_read = fopen (argv [asm_fil], "r")) == NULL)
    {
    mips_error (100, argv [asm_fil]);
    exit (1);
    }

  if (MPS_DUMP != 'y')
    {
    if ((MPS_TXTFIL = mbkfopen (argv[txt_fil], "vbe", WRITE_TEXT)) == NULL)
      {
      mips_error (100, argv [txt_fil]);
      exit (1);
      }

    if (dat_fil != 0)
      {
      if ((MPS_DATFIL = mbkfopen (argv[dat_fil], "vbe", WRITE_TEXT)) == NULL)
        {
        mips_error (100, argv [dat_fil]);
        exit (1);
        }
      }
    }
  else
    {
    if ((MPS_TXTFIL = fopen (argv[txt_fil], "w")) == NULL)
      {
      mips_error (100, argv [txt_fil]);
      exit (1);
      }
    if (dat_fil != 0)
      {
      if ((MPS_DATFIL = fopen (argv[txt_fil], "w")) == NULL)
        {
        mips_error (100, argv [dat_fil]);
        exit (1);
        }
      }
    }

  if (MPS_SYMBOL == 'y')
    {
    if ((MPS_SYMFIL = fopen (symbol_fil, "w")) == NULL)
      {
      mips_error (100, symbol_fil);
      exit (1);
      }
    }

	/* ###------------------------------------------------------### */
	/*   compute the length (number of bits) of the text address.	*/
	/* The address is a word (4 bytes) address			*/
	/* ###------------------------------------------------------### */

  txt_siz = (txt_siz >> 2) - 1;
  while (txt_siz != 0)
    {
    txt_siz = txt_siz >> 1;
    MPS_TXTSIZ ++;
    }

	/* ###------------------------------------------------------### */
	/*   compute the length (number of bits) of the data address	*/
	/* ###------------------------------------------------------### */

  dat_siz -= 1;
  while (dat_siz != 0)
    {
    dat_siz = dat_siz >> 1;
    MPS_DATSIZ ++;
    }

	/* ###------------------------------------------------------### */
	/*   call the assembly file parser (two passes):		*/
	/*	- set the address space (by default) to text		*/
	/*      - in the first pass identify labels			*/
	/*      - if no error has been found print the result files'	*/
	/*        header						*/
	/*      - translate insstructions in the second pass		*/
	/*      - print the result files' foot				*/
	/* ###------------------------------------------------------### */

  MPS_ADRSPC = 'T'       ;
  MPS_ADDRES = MPS_TXTADR;
  MPS_WRTFIL = MPS_TXTFIL;
  MPS_ADRSIZ = MPS_TXTSIZ;
  MPS_WRDSIZ = 4         ;

  MPS_PASNBR = 1  ;

  if (call_nbr != 0)
    mipsyyrestart (mipsyyin);

  mipsyyin = fp_read;
  mipsyyparse ();

  call_nbr++;

  if (MPS_ERRFLG == 0)
    {
    fclose (fp_read);
    fp_read = fopen (argv [asm_fil], "r");
    mipsyyin    = fp_read;

    MPS_ADRSPC = 'T';
    MPS_ADDRES = MPS_TXTADR;
    MPS_WRTFIL = MPS_TXTFIL;
    MPS_ADRSIZ = MPS_TXTSIZ;
    MPS_WRDSIZ = 4;

    MPS_PASNBR = 2  ;
    MPS_LINNUM = 1  ;

    if (MPS_DUMP != 'y')
      {
      mips_head (MPS_TXTFIL, argv [txt_fil], MPS_TXTSIZ, 4);
      if (MPS_DATFIL != NULL)
        mips_head (MPS_DATFIL, argv [dat_fil], MPS_DATSIZ, 1);
      }

    mipsyyrestart (mipsyyin);
    mipsyyparse ();

    if (MPS_DUMP != 'y')
      {
      mips_foot (MPS_TXTFIL, 4);
      if (MPS_DATFIL != NULL)
        mips_foot (MPS_DATFIL, 1);
      }

    exit_val = 0;

    }

	/* ###------------------------------------------------------### */
	/*   close source and result files				*/
	/* ###------------------------------------------------------### */

  fclose (fp_read);
  fclose (MPS_TXTFIL);

  if (MPS_DATFIL != NULL)
    fclose (MPS_DATFIL);

  if (MPS_SYMBOL == 'y')
    fclose (MPS_SYMFIL);

  exit (exit_val);
  }



/* Enabling traces.  */
#ifndef mipsYYDEBUG
# define mipsYYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef mipsYYERROR_VERBOSE
# undef mipsYYERROR_VERBOSE
# define mipsYYERROR_VERBOSE 1
#else
# define mipsYYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef mipsYYTOKEN_TABLE
# define mipsYYTOKEN_TABLE 0
#endif

#if ! defined mipsYYSTYPE && ! defined mipsYYSTYPE_IS_DECLARED
typedef union mipsYYSTYPE
#line 323 "../../../src/mips_asm/src/mips_y.y"
{
  unsigned long  valu;
  struct immd    immd;
  char          *text;
  }
/* Line 187 of yacc.c.  */
#line 506 "y.tab.c"
	mipsYYSTYPE;
# define mipsyystype mipsYYSTYPE /* obsolescent; will be withdrawn */
# define mipsYYSTYPE_IS_DECLARED 1
# define mipsYYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 519 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef mipsYYTYPE_UINT8
typedef mipsYYTYPE_UINT8 mipsyytype_uint8;
#else
typedef unsigned char mipsyytype_uint8;
#endif

#ifdef mipsYYTYPE_INT8
typedef mipsYYTYPE_INT8 mipsyytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char mipsyytype_int8;
#else
typedef short int mipsyytype_int8;
#endif

#ifdef mipsYYTYPE_UINT16
typedef mipsYYTYPE_UINT16 mipsyytype_uint16;
#else
typedef unsigned short int mipsyytype_uint16;
#endif

#ifdef mipsYYTYPE_INT16
typedef mipsYYTYPE_INT16 mipsyytype_int16;
#else
typedef short int mipsyytype_int16;
#endif

#ifndef mipsYYSIZE_T
# ifdef __SIZE_TYPE__
#  define mipsYYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define mipsYYSIZE_T size_t
# elif ! defined mipsYYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define mipsYYSIZE_T size_t
# else
#  define mipsYYSIZE_T unsigned int
# endif
#endif

#define mipsYYSIZE_MAXIMUM ((mipsYYSIZE_T) -1)

#ifndef mipsYY_
# if mipsYYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define mipsYY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef mipsYY_
#  define mipsYY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define mipsYYUSE(e) ((void) (e))
#else
# define mipsYYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define mipsYYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
mipsYYID (int i)
#else
static int
mipsYYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined mipsyyoverflow || mipsYYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef mipsYYSTACK_USE_ALLOCA
#  if mipsYYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define mipsYYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define mipsYYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define mipsYYSTACK_ALLOC alloca
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

# ifdef mipsYYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define mipsYYSTACK_FREE(Ptr) do { /* empty */; } while (mipsYYID (0))
#  ifndef mipsYYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define mipsYYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define mipsYYSTACK_ALLOC mipsYYMALLOC
#  define mipsYYSTACK_FREE mipsYYFREE
#  ifndef mipsYYSTACK_ALLOC_MAXIMUM
#   define mipsYYSTACK_ALLOC_MAXIMUM mipsYYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined mipsYYMALLOC || defined malloc) \
	     && (defined mipsYYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef mipsYYMALLOC
#   define mipsYYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (mipsYYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef mipsYYFREE
#   define mipsYYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined mipsyyoverflow || mipsYYERROR_VERBOSE */


#if (! defined mipsyyoverflow \
     && (! defined __cplusplus \
	 || (defined mipsYYSTYPE_IS_TRIVIAL && mipsYYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union mipsyyalloc
{
  mipsyytype_int16 mipsyyss;
  mipsYYSTYPE mipsyyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define mipsYYSTACK_GAP_MAXIMUM (sizeof (union mipsyyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define mipsYYSTACK_BYTES(N) \
     ((N) * (sizeof (mipsyytype_int16) + sizeof (mipsYYSTYPE)) \
      + mipsYYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef mipsYYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define mipsYYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define mipsYYCOPY(To, From, Count)		\
      do					\
	{					\
	  mipsYYSIZE_T mipsyyi;				\
	  for (mipsyyi = 0; mipsyyi < (Count); mipsyyi++)	\
	    (To)[mipsyyi] = (From)[mipsyyi];		\
	}					\
      while (mipsYYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables mipsYYSIZE and mipsYYSTACKSIZE give the old and new number of
   elements in the stack, and mipsYYPTR gives the new location of the
   stack.  Advance mipsYYPTR to a properly aligned location for the next
   stack.  */
# define mipsYYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	mipsYYSIZE_T mipsyynewbytes;						\
	mipsYYCOPY (&mipsyyptr->Stack, Stack, mipsyysize);				\
	Stack = &mipsyyptr->Stack;						\
	mipsyynewbytes = mipsyystacksize * sizeof (*Stack) + mipsYYSTACK_GAP_MAXIMUM; \
	mipsyyptr += mipsyynewbytes / sizeof (*mipsyyptr);				\
      }									\
    while (mipsYYID (0))

#endif

/* mipsYYFINAL -- State number of the termination state.  */
#define mipsYYFINAL  4
/* mipsYYLAST -- Last index in mipsYYTABLE.  */
#define mipsYYLAST   251

/* mipsYYNTOKENS -- Number of terminals.  */
#define mipsYYNTOKENS  58
/* mipsYYNNTS -- Number of nonterminals.  */
#define mipsYYNNTS  67
/* mipsYYNRULES -- Number of rules.  */
#define mipsYYNRULES  130
/* mipsYYNRULES -- Number of states.  */
#define mipsYYNSTATES  222

/* mipsYYTRANSLATE(mipsYYLEX) -- Bison symbol number corresponding to mipsYYLEX.  */
#define mipsYYUNDEFTOK  2
#define mipsYYMAXUTOK   312

#define mipsYYTRANSLATE(mipsYYX)						\
  ((unsigned int) (mipsYYX) <= mipsYYMAXUTOK ? mipsyytranslate[mipsYYX] : mipsYYUNDEFTOK)

/* mipsYYTRANSLATE[mipsYYLEX] -- Bison symbol number corresponding to mipsYYLEX.  */
static const mipsyytype_uint8 mipsyytranslate[] =
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
      55,    56,    57
};

#if mipsYYDEBUG
/* mipsYYPRHS[mipsYYN] -- Index of the first RHS symbol of rule number mipsYYN in
   mipsYYRHS.  */
static const mipsyytype_uint16 mipsyyprhs[] =
{
       0,     0,     3,     6,     8,     9,    12,    16,    19,    22,
      23,    26,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    48,    51,    54,    57,    60,    62,    64,    66,
      68,    70,    72,    74,    77,    80,    83,    86,    87,    89,
      92,    95,    98,   101,   104,   108,   110,   112,   114,   116,
     118,   120,   122,   124,   126,   128,   130,   132,   134,   136,
     138,   140,   142,   144,   151,   158,   163,   166,   169,   174,
     177,   185,   193,   201,   209,   216,   221,   226,   230,   233,
     235,   236,   238,   240,   242,   247,   249,   251,   252,   254,
     256,   258,   260,   262,   264,   268,   272,   276,   280,   284,
     288,   290,   292,   294,   296,   300,   305,   310,   312,   314,
     316,   318,   320,   322,   324,   327,   330,   332,   335,   338,
     340,   342,   344,   346,   348,   350,   352,   354,   356,   357,
     360
};

/* mipsYYRHS -- A `-1'-separated list of the rules' RHS.  */
static const mipsyytype_int8 mipsyyrhs[] =
{
      59,     0,    -1,    60,    76,    -1,    61,    -1,    -1,    61,
      62,    -1,    63,    64,   124,    -1,    71,   124,    -1,     1,
     124,    -1,    -1,   122,    38,    -1,    -1,    65,    -1,    83,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    80,    -1,    79,    -1,    17,   107,    -1,     6,   107,
      -1,     7,   107,    -1,     4,    56,    -1,     5,    56,    -1,
      75,    -1,    72,    -1,    82,    -1,    74,    -1,    81,    -1,
      78,    -1,    73,    -1,     8,   106,    -1,    16,   106,    -1,
      11,   122,    -1,     3,    46,    -1,    -1,    77,    -1,     9,
     123,    -1,    15,   122,    -1,    13,    46,    -1,    14,    46,
      -1,    12,   107,    -1,    43,    10,   107,    -1,    84,    -1,
     102,    -1,   100,    -1,    99,    -1,    98,    -1,    97,    -1,
      96,    -1,    95,    -1,    93,    -1,    94,    -1,    91,    -1,
      92,    -1,    88,    -1,    89,    -1,    90,    -1,    85,    -1,
      86,    -1,    87,    -1,    23,   118,    39,   119,    39,   119,
      -1,    25,   118,    39,   119,    39,   119,    -1,    32,   120,
      39,   121,    -1,    22,   118,    -1,    28,   119,    -1,    28,
     118,    39,   119,    -1,    29,   119,    -1,    26,   118,    39,
     119,    39,   101,   107,    -1,    24,   118,    39,   119,    39,
     101,   107,    -1,    30,   118,    39,   105,    45,   119,    52,
      -1,    31,   119,    39,   105,    45,   119,    52,    -1,    27,
     119,    39,   119,    39,   107,    -1,    33,   119,    39,   107,
      -1,    34,   118,    39,   107,    -1,    36,   101,   107,    -1,
      35,   107,    -1,    37,    -1,    -1,    53,    -1,   103,    -1,
     104,    -1,    48,   118,    39,   107,    -1,    47,    -1,   107,
      -1,    -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,
     111,    -1,   114,    -1,   108,   116,   114,    -1,   114,   113,
     114,    -1,   109,    55,   114,    -1,   114,   115,   114,    -1,
     110,   115,   114,    -1,   114,   112,   114,    -1,    42,    -1,
      41,    -1,    55,    -1,    54,    -1,    45,   107,    52,    -1,
      57,    45,   107,    52,    -1,    49,    45,   107,    52,    -1,
     117,    -1,    19,    -1,    18,    -1,    21,    -1,    50,    -1,
      49,    -1,    46,    -1,    49,    46,    -1,    57,    46,    -1,
      43,    -1,    49,    43,    -1,    57,    43,    -1,    44,    -1,
      51,    -1,    44,    -1,    51,    -1,    44,    -1,    51,    -1,
      40,    -1,    51,    -1,    43,    -1,    -1,   123,   124,    -1,
      20,    -1
};

/* mipsYYRLINE[mipsYYN] -- source line where rule number mipsYYN was defined.  */
static const mipsyytype_uint16 mipsyyrline[] =
{
       0,   440,   440,   445,   448,   450,   455,   458,   460,   464,
     466,   490,   492,   502,   515,   517,   519,   521,   523,   525,
     530,   538,   552,   567,   585,   598,   617,   618,   619,   620,
     621,   622,   623,   627,   659,   691,   696,   722,   724,   728,
     733,   738,   746,   754,   769,   799,   801,   806,   808,   810,
     812,   814,   816,   818,   820,   822,   824,   826,   828,   830,
     832,   834,   836,   841,   862,   883,   902,   919,   933,   952,
     969,   994,  1019,  1044,  1069,  1101,  1131,  1153,  1174,  1202,
    1217,  1219,  1223,  1225,  1230,  1268,  1289,  1295,  1299,  1304,
    1306,  1308,  1310,  1315,  1317,  1339,  1358,  1377,  1400,  1426,
    1448,  1450,  1455,  1457,  1462,  1468,  1476,  1484,  1489,  1491,
    1493,  1498,  1500,  1505,  1510,  1516,  1522,  1530,  1539,  1551,
    1553,  1558,  1560,  1565,  1567,  1572,  1574,  1579,  1583,  1585,
    1590
};
#endif

#if mipsYYDEBUG || mipsYYERROR_VERBOSE || mipsYYTOKEN_TABLE
/* mipsYYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at mipsYYNTOKENS, nonterminals.  */
static const char *const mipsyytname[] =
{
  "$end", "error", "$undefined", "_ALIGN", "_ASCII", "_ASCIIZ", "_BYTE",
  "_BYTEZ", "_DATA", "_END", "_EQU", "_GLOBAL", "_ORG", "_SPACE", "_SKIP",
  "_START", "_TEXT", "_WORD", "Ampersand", "Bar", "CarriageReturn",
  "Circomflex", "Codop_rd", "Codop_rd_rs_rt", "Codop_rd_rt_sham",
  "Codop_rd_rt_rs", "Codop_rd_rs_imd", "Codop_rs_rt_labl", "Codop_od_rs",
  "Codop_rs", "Codop_rd_mem", "Codop_rt_mem", "Codop_rt_cp0rd",
  "Codop_rs_labl", "Codop_rd_imd", "Codop_labl", "Codop_imd", "Codop_n",
  "Colon", "Comma", "CP0Register", "DoubleGreat", "DoubleLess",
  "Identifier", "IntegerRegister", "LeftParen", "Litteral", "Macro_n",
  "Macro_rd_longi", "Minus", "Plus", "Register", "RightParen", "Sharp",
  "Slash", "Star", "String", "Tilda", "$accept", "mips_assembly_prog",
  "assembly_instructions", "..an_assembly_instruction..",
  "an_assembly_instruction", ".a_label.",
  ".unlabeled_assembly_instruction.", "mem_alloc_directive", "word_alloc",
  "byte_alloc", "bytez_alloc", "ascii_alloc", "asciiz_alloc",
  "unlabeled_pseudo_instruction", "data_pseudo_inst", "text_pseudo_inst",
  "global_pseudo_inst", "align_pseudo_inst", ".end_pseudo_inst.",
  "end_pseudo_inst", "start_pseudo_inst", "space_pseudo_inst",
  "skip_pseudo_inst", "org_pseudo_inst", "equ_pseudo_inst",
  "effective_instruction", "mips_instruction", "format_rd_rs_rt",
  "format_rd_rt_rs", "format_rt_cp0rd", "format_rd", "format_od_rs",
  "format_rs", "format_rd_rs_imd", "format_rd_rt_sham", "format_rd_mem",
  "format_rt_mem", "format_rs_rt_labl", "format_rs_labl", "format_rd_imd",
  "format_imd", "format_labl", "format_n", ".sharp.", "macro_instruction",
  "macro_ri", "macro_n", "offset", ".immediate.", "immediate",
  "expr..addop__expr..", "expr__mulop__expr..mulop__expr..",
  "expr__logop__expr..logop__expr..", "expr__shfop__expr",
  "shift_operator", "mul_div_operator", "expression", "logical_operator",
  "adding_operator", "term", "destination_register", "source_register",
  "integer_register", "cp0_reg", "label", "..CR..", "CarriageReturn_ERR", 0
};
#endif

# ifdef mipsYYPRINT
/* mipsYYTOKNUM[mipsYYLEX-NUM] -- Internal token number corresponding to
   token mipsYYLEX-NUM.  */
static const mipsyytype_uint16 mipsyytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* mipsYYR1[mipsYYN] -- Symbol number of symbol that rule mipsYYN derives.  */
static const mipsyytype_uint8 mipsyyr1[] =
{
       0,    58,    59,    60,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    66,    67,    68,    69,    70,    71,    71,    71,    71,
      71,    71,    71,    72,    73,    74,    75,    76,    76,    77,
      78,    79,    80,    81,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    85,    86,    87,    88,    89,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   101,   102,   102,   103,   104,   105,   106,   106,   107,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     112,   112,   113,   113,   114,   114,   114,   114,   115,   115,
     115,   116,   116,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   123,   123,
     124
};

/* mipsYYR2[mipsYYN] -- Number of symbols composing right hand side of rule mipsYYN.  */
static const mipsyytype_uint8 mipsyyr2[] =
{
       0,     2,     2,     1,     0,     2,     3,     2,     2,     0,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     0,     1,     2,
       2,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     6,     4,     2,     2,     4,     2,
       7,     7,     7,     7,     6,     4,     4,     3,     2,     1,
       0,     1,     1,     1,     4,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1
};

/* mipsYYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when mipsYYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const mipsyytype_uint8 mipsyydefact[] =
{
       4,     0,    37,     0,     1,   128,     2,    38,     0,     0,
      87,     0,     0,     0,    87,   127,     5,    11,     0,    27,
      32,    29,    26,    31,    30,    28,     0,    39,   130,     8,
      36,   116,     0,   113,     0,     0,    33,    88,    89,    90,
      91,    92,    93,   107,   127,    35,    43,    40,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    79,    85,     0,     0,    12,    14,    15,    16,
      17,    18,    20,    19,    13,    45,    60,    61,    62,    57,
      58,    59,    55,    56,    53,    54,    52,    51,    50,    49,
      48,    47,    46,    82,    83,     7,    10,   129,     0,   117,
       0,   114,   118,     0,   115,   112,   111,     0,     0,   109,
     108,   110,     0,   101,   100,   103,   102,     0,     0,     0,
      44,    24,    25,    22,    23,    41,    42,    21,   119,   120,
      66,     0,     0,     0,     0,   121,   122,     0,   119,   120,
       0,    67,    69,     0,     0,   123,   124,     0,     0,     0,
      78,    81,     0,     0,     6,   104,     0,     0,    94,    96,
      98,    99,    95,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,   106,   105,     0,
       0,     0,     0,     0,    68,     0,    86,     0,   125,   126,
      65,    75,    76,    84,     0,    80,     0,    80,     0,     0,
       0,    63,     0,    64,     0,    74,     0,     0,    71,    70,
      72,    73
};

/* mipsYYDEFGOTO[NTERM-NUM].  */
static const mipsyytype_int16 mipsyydefgoto[] =
{
      -1,     1,     2,     3,    16,    17,    75,    76,    77,    78,
      79,    80,    81,    18,    19,    20,    21,    22,     6,     7,
      23,    82,    83,    24,    25,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   162,   102,   103,   104,   195,    36,    37,
      38,    39,    40,    41,   127,   128,    42,   122,   117,    43,
     140,   147,   157,   200,    26,    27,    29
};

/* mipsYYPACT[STATE-NUM] -- Index in mipsYYTABLE of the portion describing
   STATE-NUM.  */
#define mipsYYPACT_NINF -145
static const mipsyytype_int16 mipsyypact[] =
{
    -145,     9,     5,   203,  -145,  -145,  -145,  -145,    16,    11,
     -38,   -18,   -38,   -18,   -38,    19,  -145,    42,    16,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,    12,    16,  -145,  -145,
    -145,  -145,   -38,  -145,    49,    54,  -145,  -145,     4,     7,
      24,  -145,    -3,  -145,  -145,  -145,  -145,  -145,  -145,   -38,
      32,    37,   -38,   -38,    56,    57,   -38,   -34,   -34,   -34,
     -34,   -34,   -21,   -17,   -21,   -34,   -21,   -16,   -21,   -34,
     -38,    51,  -145,  -145,   -34,    16,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,    53,  -145,
     -38,  -145,  -145,   -38,  -145,  -145,  -145,   -38,   -38,  -145,
    -145,  -145,   -38,  -145,  -145,  -145,  -145,   -38,   -38,   -38,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,    67,    68,    69,    70,  -145,  -145,    71,    91,    98,
      80,  -145,  -145,    81,    82,  -145,  -145,    83,    84,    85,
    -145,  -145,   -38,    86,  -145,  -145,    74,    75,  -145,  -145,
    -145,  -145,  -145,  -145,   -21,   -21,   -21,   -21,   -21,   -21,
     -38,   -38,   -27,   -38,   -38,  -145,   -38,  -145,  -145,    89,
      90,    92,    93,    94,  -145,    95,  -145,    96,  -145,  -145,
    -145,  -145,  -145,  -145,   -21,    51,   -21,    51,   -38,   -21,
     -21,  -145,   -38,  -145,   -38,  -145,    78,    87,  -145,  -145,
    -145,  -145
};

/* mipsYYPGOTO[NTERM-NUM].  */
static const mipsyytype_int16 mipsyypgoto[] =
{
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,  -145,
    -145,  -145,  -145,  -144,  -145,  -145,  -145,   -47,   121,   -12,
    -145,  -145,  -145,  -145,  -145,  -145,   -96,   101,  -145,  -145,
      22,   -62,  -145,  -145,    73,  -145,   -15
};

/* mipsYYTABLE[mipsYYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what mipsYYDEFACT says.
   If mipsYYTABLE_NINF, syntax error.  */
#define mipsYYTABLE_NINF -123
static const mipsyytype_int16 mipsyytable[] =
{
      46,   151,   152,   105,   154,    31,   158,    32,    33,     4,
     138,    34,   107,   198,     5,   119,   120,   139,   121,    35,
     108,   168,   169,   145,   199,    44,   170,   148,   155,    49,
     146,   171,   172,   173,   149,   156,    28,   130,   123,   124,
     133,   134,   119,   120,   137,   121,    50,    51,    52,    53,
     106,   125,   126,   115,   116,    54,    55,    30,   160,    56,
     164,   212,   118,   214,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
     141,   142,   143,   144,    45,   150,    47,   153,   131,    73,
      74,   159,   109,   132,   110,   111,   163,   112,   166,   113,
     114,   167,   135,   136,   161,   165,   174,   175,   176,   177,
     178,  -121,   189,   190,   191,   192,   193,   194,  -122,   179,
     180,   181,   182,   183,   184,   186,   187,   188,   204,   205,
     220,   206,   207,   208,   197,    48,     0,     0,     0,   221,
     209,   210,   211,   129,   213,     0,     0,   216,   217,     0,
     185,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   196,   196,
       0,   201,   202,     0,   203,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,     0,     0,     0,
     218,     0,   219,    -3,     8,     0,     9,    -9,    -9,    -9,
      -9,    10,    -3,     0,    11,    12,    -9,    -9,    13,    14,
      -9,     0,     0,    -9,     0,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,     0,     0,     0,     0,     0,    15,     0,     0,     0,
      -9,    -9
};

static const mipsyytype_int16 mipsyycheck[] =
{
      12,    63,    64,    18,    66,    43,    68,    45,    46,     0,
      44,    49,    27,    40,     9,    18,    19,    51,    21,    57,
      32,   117,   118,    44,    51,    43,   122,    44,    44,    10,
      51,   127,   128,   129,    51,    51,    20,    49,    41,    42,
      52,    53,    18,    19,    56,    21,     4,     5,     6,     7,
      38,    54,    55,    49,    50,    13,    14,    46,    70,    17,
      75,   205,    55,   207,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      58,    59,    60,    61,    11,    63,    13,    65,    56,    47,
      48,    69,    43,    56,    45,    46,    74,    43,   110,    45,
      46,   113,    46,    46,    53,    52,    39,    39,    39,    39,
      39,    20,   174,   175,   176,   177,   178,   179,    20,    39,
      39,    39,    39,    39,    39,    39,    52,    52,    39,    39,
      52,    39,    39,    39,   181,    14,    -1,    -1,    -1,    52,
      45,    45,   204,    42,   206,    -1,    -1,   209,   210,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   181,
      -1,   183,   184,    -1,   186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,
     212,    -1,   214,     0,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    48
};

/* mipsYYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const mipsyytype_uint8 mipsyystos[] =
{
       0,    59,    60,    61,     0,     9,    76,    77,     1,     3,
       8,    11,    12,    15,    16,    43,    62,    63,    71,    72,
      73,    74,    75,    78,    81,    82,   122,   123,    20,   124,
      46,    43,    45,    46,    49,    57,   106,   107,   108,   109,
     110,   111,   114,   117,    43,   122,   107,   122,   106,    10,
       4,     5,     6,     7,    13,    14,    17,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    47,    48,    64,    65,    66,    67,    68,
      69,    70,    79,    80,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   102,   103,   104,   124,    38,   124,   107,    43,
      45,    46,    43,    45,    46,    49,    50,   116,    55,    18,
      19,    21,   115,    41,    42,    54,    55,   112,   113,   115,
     107,    56,    56,   107,   107,    46,    46,   107,    44,    51,
     118,   118,   118,   118,   118,    44,    51,   119,    44,    51,
     118,   119,   119,   118,   119,    44,    51,   120,   119,   118,
     107,    53,   101,   118,   124,    52,   107,   107,   114,   114,
     114,   114,   114,   114,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,   107,    39,    52,    52,   119,
     119,   119,   119,   119,   119,   105,   107,   105,    40,    51,
     121,   107,   107,   107,    39,    39,    39,    39,    39,    45,
      45,   119,   101,   119,   101,   107,   119,   119,   107,   107,
      52,    52
};

#define mipsyyerrok		(mipsyyerrstatus = 0)
#define mipsyyclearin	(mipsyychar = mipsYYEMPTY)
#define mipsYYEMPTY		(-2)
#define mipsYYEOF		0

#define mipsYYACCEPT	goto mipsyyacceptlab
#define mipsYYABORT		goto mipsyyabortlab
#define mipsYYERROR		goto mipsyyerrorlab


/* Like mipsYYERROR except do call mipsyyerror.  This remains here temporarily
   to ease the transition to the new meaning of mipsYYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define mipsYYFAIL		goto mipsyyerrlab

#define mipsYYRECOVERING()  (!!mipsyyerrstatus)

#define mipsYYBACKUP(Token, Value)					\
do								\
  if (mipsyychar == mipsYYEMPTY && mipsyylen == 1)				\
    {								\
      mipsyychar = (Token);						\
      mipsyylval = (Value);						\
      mipsyytoken = mipsYYTRANSLATE (mipsyychar);				\
      mipsYYPOPSTACK (1);						\
      goto mipsyybackup;						\
    }								\
  else								\
    {								\
      mipsyyerror (mipsYY_("syntax error: cannot back up")); \
      mipsYYERROR;							\
    }								\
while (mipsYYID (0))


#define mipsYYTERROR	1
#define mipsYYERRCODE	256


/* mipsYYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define mipsYYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef mipsYYLLOC_DEFAULT
# define mipsYYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (mipsYYID (N))                                                    \
	{								\
	  (Current).first_line   = mipsYYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = mipsYYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = mipsYYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = mipsYYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    mipsYYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    mipsYYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (mipsYYID (0))
#endif


/* mipsYY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef mipsYY_LOCATION_PRINT
# if mipsYYLTYPE_IS_TRIVIAL
#  define mipsYY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define mipsYY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* mipsYYLEX -- calling `mipsyylex' with the right arguments.  */

#ifdef mipsYYLEX_PARAM
# define mipsYYLEX mipsyylex (mipsYYLEX_PARAM)
#else
# define mipsYYLEX mipsyylex ()
#endif

/* Enable debugging if requested.  */
#if mipsYYDEBUG

# ifndef mipsYYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define mipsYYFPRINTF fprintf
# endif

# define mipsYYDPRINTF(Args)			\
do {						\
  if (mipsyydebug)					\
    mipsYYFPRINTF Args;				\
} while (mipsYYID (0))

# define mipsYY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (mipsyydebug)								  \
    {									  \
      mipsYYFPRINTF (stderr, "%s ", Title);					  \
      mipsyy_symbol_print (stderr,						  \
		  Type, Value); \
      mipsYYFPRINTF (stderr, "\n");						  \
    }									  \
} while (mipsYYID (0))


/*--------------------------------.
| Print this symbol on mipsYYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mipsyy_symbol_value_print (FILE *mipsyyoutput, int mipsyytype, mipsYYSTYPE const * const mipsyyvaluep)
#else
static void
mipsyy_symbol_value_print (mipsyyoutput, mipsyytype, mipsyyvaluep)
    FILE *mipsyyoutput;
    int mipsyytype;
    mipsYYSTYPE const * const mipsyyvaluep;
#endif
{
  if (!mipsyyvaluep)
    return;
# ifdef mipsYYPRINT
  if (mipsyytype < mipsYYNTOKENS)
    mipsYYPRINT (mipsyyoutput, mipsyytoknum[mipsyytype], *mipsyyvaluep);
# else
  mipsYYUSE (mipsyyoutput);
# endif
  switch (mipsyytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on mipsYYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mipsyy_symbol_print (FILE *mipsyyoutput, int mipsyytype, mipsYYSTYPE const * const mipsyyvaluep)
#else
static void
mipsyy_symbol_print (mipsyyoutput, mipsyytype, mipsyyvaluep)
    FILE *mipsyyoutput;
    int mipsyytype;
    mipsYYSTYPE const * const mipsyyvaluep;
#endif
{
  if (mipsyytype < mipsYYNTOKENS)
    mipsYYFPRINTF (mipsyyoutput, "token %s (", mipsyytname[mipsyytype]);
  else
    mipsYYFPRINTF (mipsyyoutput, "nterm %s (", mipsyytname[mipsyytype]);

  mipsyy_symbol_value_print (mipsyyoutput, mipsyytype, mipsyyvaluep);
  mipsYYFPRINTF (mipsyyoutput, ")");
}

/*------------------------------------------------------------------.
| mipsyy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mipsyy_stack_print (mipsyytype_int16 *bottom, mipsyytype_int16 *top)
#else
static void
mipsyy_stack_print (bottom, top)
    mipsyytype_int16 *bottom;
    mipsyytype_int16 *top;
#endif
{
  mipsYYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    mipsYYFPRINTF (stderr, " %d", *bottom);
  mipsYYFPRINTF (stderr, "\n");
}

# define mipsYY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (mipsyydebug)							\
    mipsyy_stack_print ((Bottom), (Top));				\
} while (mipsYYID (0))


/*------------------------------------------------.
| Report that the mipsYYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mipsyy_reduce_print (mipsYYSTYPE *mipsyyvsp, int mipsyyrule)
#else
static void
mipsyy_reduce_print (mipsyyvsp, mipsyyrule)
    mipsYYSTYPE *mipsyyvsp;
    int mipsyyrule;
#endif
{
  int mipsyynrhs = mipsyyr2[mipsyyrule];
  int mipsyyi;
  unsigned long int mipsyylno = mipsyyrline[mipsyyrule];
  mipsYYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     mipsyyrule - 1, mipsyylno);
  /* The symbols being reduced.  */
  for (mipsyyi = 0; mipsyyi < mipsyynrhs; mipsyyi++)
    {
      fprintf (stderr, "   $%d = ", mipsyyi + 1);
      mipsyy_symbol_print (stderr, mipsyyrhs[mipsyyprhs[mipsyyrule] + mipsyyi],
		       &(mipsyyvsp[(mipsyyi + 1) - (mipsyynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define mipsYY_REDUCE_PRINT(Rule)		\
do {					\
  if (mipsyydebug)				\
    mipsyy_reduce_print (mipsyyvsp, Rule); \
} while (mipsYYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int mipsyydebug;
#else /* !mipsYYDEBUG */
# define mipsYYDPRINTF(Args)
# define mipsYY_SYMBOL_PRINT(Title, Type, Value, Location)
# define mipsYY_STACK_PRINT(Bottom, Top)
# define mipsYY_REDUCE_PRINT(Rule)
#endif /* !mipsYYDEBUG */


/* mipsYYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	mipsYYINITDEPTH
# define mipsYYINITDEPTH 200
#endif

/* mipsYYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   mipsYYSTACK_ALLOC_MAXIMUM < mipsYYSTACK_BYTES (mipsYYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef mipsYYMAXDEPTH
# define mipsYYMAXDEPTH 10000
#endif



#if mipsYYERROR_VERBOSE

# ifndef mipsyystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define mipsyystrlen strlen
#  else
/* Return the length of mipsYYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static mipsYYSIZE_T
mipsyystrlen (const char *mipsyystr)
#else
static mipsYYSIZE_T
mipsyystrlen (mipsyystr)
    const char *mipsyystr;
#endif
{
  mipsYYSIZE_T mipsyylen;
  for (mipsyylen = 0; mipsyystr[mipsyylen]; mipsyylen++)
    continue;
  return mipsyylen;
}
#  endif
# endif

# ifndef mipsyystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define mipsyystpcpy stpcpy
#  else
/* Copy mipsYYSRC to mipsYYDEST, returning the address of the terminating '\0' in
   mipsYYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
mipsyystpcpy (char *mipsyydest, const char *mipsyysrc)
#else
static char *
mipsyystpcpy (mipsyydest, mipsyysrc)
    char *mipsyydest;
    const char *mipsyysrc;
#endif
{
  char *mipsyyd = mipsyydest;
  const char *mipsyys = mipsyysrc;

  while ((*mipsyyd++ = *mipsyys++) != '\0')
    continue;

  return mipsyyd - 1;
}
#  endif
# endif

# ifndef mipsyytnamerr
/* Copy to mipsYYRES the contents of mipsYYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for mipsyyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  mipsYYSTR is taken from mipsyytname.  If mipsYYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static mipsYYSIZE_T
mipsyytnamerr (char *mipsyyres, const char *mipsyystr)
{
  if (*mipsyystr == '"')
    {
      mipsYYSIZE_T mipsyyn = 0;
      char const *mipsyyp = mipsyystr;

      for (;;)
	switch (*++mipsyyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++mipsyyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (mipsyyres)
	      mipsyyres[mipsyyn] = *mipsyyp;
	    mipsyyn++;
	    break;

	  case '"':
	    if (mipsyyres)
	      mipsyyres[mipsyyn] = '\0';
	    return mipsyyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! mipsyyres)
    return mipsyystrlen (mipsyystr);

  return mipsyystpcpy (mipsyyres, mipsyystr) - mipsyyres;
}
# endif

/* Copy into mipsYYRESULT an error message about the unexpected token
   mipsYYCHAR while in state mipsYYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If mipsYYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return mipsYYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static mipsYYSIZE_T
mipsyysyntax_error (char *mipsyyresult, int mipsyystate, int mipsyychar)
{
  int mipsyyn = mipsyypact[mipsyystate];

  if (! (mipsYYPACT_NINF < mipsyyn && mipsyyn <= mipsYYLAST))
    return 0;
  else
    {
      int mipsyytype = mipsYYTRANSLATE (mipsyychar);
      mipsYYSIZE_T mipsyysize0 = mipsyytnamerr (0, mipsyytname[mipsyytype]);
      mipsYYSIZE_T mipsyysize = mipsyysize0;
      mipsYYSIZE_T mipsyysize1;
      int mipsyysize_overflow = 0;
      enum { mipsYYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *mipsyyarg[mipsYYERROR_VERBOSE_ARGS_MAXIMUM];
      int mipsyyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      mipsYY_("syntax error, unexpected %s");
      mipsYY_("syntax error, unexpected %s, expecting %s");
      mipsYY_("syntax error, unexpected %s, expecting %s or %s");
      mipsYY_("syntax error, unexpected %s, expecting %s or %s or %s");
      mipsYY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *mipsyyfmt;
      char const *mipsyyf;
      static char const mipsyyunexpected[] = "syntax error, unexpected %s";
      static char const mipsyyexpecting[] = ", expecting %s";
      static char const mipsyyor[] = " or %s";
      char mipsyyformat[sizeof mipsyyunexpected
		    + sizeof mipsyyexpecting - 1
		    + ((mipsYYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof mipsyyor - 1))];
      char const *mipsyyprefix = mipsyyexpecting;

      /* Start mipsYYX at -mipsYYN if negative to avoid negative indexes in
	 mipsYYCHECK.  */
      int mipsyyxbegin = mipsyyn < 0 ? -mipsyyn : 0;

      /* Stay within bounds of both mipsyycheck and mipsyytname.  */
      int mipsyychecklim = mipsYYLAST - mipsyyn + 1;
      int mipsyyxend = mipsyychecklim < mipsYYNTOKENS ? mipsyychecklim : mipsYYNTOKENS;
      int mipsyycount = 1;

      mipsyyarg[0] = mipsyytname[mipsyytype];
      mipsyyfmt = mipsyystpcpy (mipsyyformat, mipsyyunexpected);

      for (mipsyyx = mipsyyxbegin; mipsyyx < mipsyyxend; ++mipsyyx)
	if (mipsyycheck[mipsyyx + mipsyyn] == mipsyyx && mipsyyx != mipsYYTERROR)
	  {
	    if (mipsyycount == mipsYYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		mipsyycount = 1;
		mipsyysize = mipsyysize0;
		mipsyyformat[sizeof mipsyyunexpected - 1] = '\0';
		break;
	      }
	    mipsyyarg[mipsyycount++] = mipsyytname[mipsyyx];
	    mipsyysize1 = mipsyysize + mipsyytnamerr (0, mipsyytname[mipsyyx]);
	    mipsyysize_overflow |= (mipsyysize1 < mipsyysize);
	    mipsyysize = mipsyysize1;
	    mipsyyfmt = mipsyystpcpy (mipsyyfmt, mipsyyprefix);
	    mipsyyprefix = mipsyyor;
	  }

      mipsyyf = mipsYY_(mipsyyformat);
      mipsyysize1 = mipsyysize + mipsyystrlen (mipsyyf);
      mipsyysize_overflow |= (mipsyysize1 < mipsyysize);
      mipsyysize = mipsyysize1;

      if (mipsyysize_overflow)
	return mipsYYSIZE_MAXIMUM;

      if (mipsyyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *mipsyyp = mipsyyresult;
	  int mipsyyi = 0;
	  while ((*mipsyyp = *mipsyyf) != '\0')
	    {
	      if (*mipsyyp == '%' && mipsyyf[1] == 's' && mipsyyi < mipsyycount)
		{
		  mipsyyp += mipsyytnamerr (mipsyyp, mipsyyarg[mipsyyi++]);
		  mipsyyf += 2;
		}
	      else
		{
		  mipsyyp++;
		  mipsyyf++;
		}
	    }
	}
      return mipsyysize;
    }
}
#endif /* mipsYYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
mipsyydestruct (const char *mipsyymsg, int mipsyytype, mipsYYSTYPE *mipsyyvaluep)
#else
static void
mipsyydestruct (mipsyymsg, mipsyytype, mipsyyvaluep)
    const char *mipsyymsg;
    int mipsyytype;
    mipsYYSTYPE *mipsyyvaluep;
#endif
{
  mipsYYUSE (mipsyyvaluep);

  if (!mipsyymsg)
    mipsyymsg = "Deleting";
  mipsYY_SYMBOL_PRINT (mipsyymsg, mipsyytype, mipsyyvaluep, mipsyylocationp);

  switch (mipsyytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef mipsYYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int mipsyyparse (void *mipsYYPARSE_PARAM);
#else
int mipsyyparse ();
#endif
#else /* ! mipsYYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int mipsyyparse (void);
#else
int mipsyyparse ();
#endif
#endif /* ! mipsYYPARSE_PARAM */



/* The look-ahead symbol.  */
int mipsyychar;

/* The semantic value of the look-ahead symbol.  */
mipsYYSTYPE mipsyylval;

/* Number of syntax errors so far.  */
int mipsyynerrs;



/*----------.
| mipsyyparse.  |
`----------*/

#ifdef mipsYYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
mipsyyparse (void *mipsYYPARSE_PARAM)
#else
int
mipsyyparse (mipsYYPARSE_PARAM)
    void *mipsYYPARSE_PARAM;
#endif
#else /* ! mipsYYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
mipsyyparse (void)
#else
int
mipsyyparse ()

#endif
#endif
{
  
  int mipsyystate;
  int mipsyyn;
  int mipsyyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int mipsyyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int mipsyytoken = 0;
#if mipsYYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char mipsyymsgbuf[128];
  char *mipsyymsg = mipsyymsgbuf;
  mipsYYSIZE_T mipsyymsg_alloc = sizeof mipsyymsgbuf;
#endif

  /* Three stacks and their tools:
     `mipsyyss': related to states,
     `mipsyyvs': related to semantic values,
     `mipsyyls': related to locations.

     Refer to the stacks thru separate pointers, to allow mipsyyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  mipsyytype_int16 mipsyyssa[mipsYYINITDEPTH];
  mipsyytype_int16 *mipsyyss = mipsyyssa;
  mipsyytype_int16 *mipsyyssp;

  /* The semantic value stack.  */
  mipsYYSTYPE mipsyyvsa[mipsYYINITDEPTH];
  mipsYYSTYPE *mipsyyvs = mipsyyvsa;
  mipsYYSTYPE *mipsyyvsp;



#define mipsYYPOPSTACK(N)   (mipsyyvsp -= (N), mipsyyssp -= (N))

  mipsYYSIZE_T mipsyystacksize = mipsYYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  mipsYYSTYPE mipsyyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int mipsyylen = 0;

  mipsYYDPRINTF ((stderr, "Starting parse\n"));

  mipsyystate = 0;
  mipsyyerrstatus = 0;
  mipsyynerrs = 0;
  mipsyychar = mipsYYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  mipsyyssp = mipsyyss;
  mipsyyvsp = mipsyyvs;

  goto mipsyysetstate;

/*------------------------------------------------------------.
| mipsyynewstate -- Push a new state, which is found in mipsyystate.  |
`------------------------------------------------------------*/
 mipsyynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  mipsyyssp++;

 mipsyysetstate:
  *mipsyyssp = mipsyystate;

  if (mipsyyss + mipsyystacksize - 1 <= mipsyyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      mipsYYSIZE_T mipsyysize = mipsyyssp - mipsyyss + 1;

#ifdef mipsyyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	mipsYYSTYPE *mipsyyvs1 = mipsyyvs;
	mipsyytype_int16 *mipsyyss1 = mipsyyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if mipsyyoverflow is a macro.  */
	mipsyyoverflow (mipsYY_("memory exhausted"),
		    &mipsyyss1, mipsyysize * sizeof (*mipsyyssp),
		    &mipsyyvs1, mipsyysize * sizeof (*mipsyyvsp),

		    &mipsyystacksize);

	mipsyyss = mipsyyss1;
	mipsyyvs = mipsyyvs1;
      }
#else /* no mipsyyoverflow */
# ifndef mipsYYSTACK_RELOCATE
      goto mipsyyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (mipsYYMAXDEPTH <= mipsyystacksize)
	goto mipsyyexhaustedlab;
      mipsyystacksize *= 2;
      if (mipsYYMAXDEPTH < mipsyystacksize)
	mipsyystacksize = mipsYYMAXDEPTH;

      {
	mipsyytype_int16 *mipsyyss1 = mipsyyss;
	union mipsyyalloc *mipsyyptr =
	  (union mipsyyalloc *) mipsYYSTACK_ALLOC (mipsYYSTACK_BYTES (mipsyystacksize));
	if (! mipsyyptr)
	  goto mipsyyexhaustedlab;
	mipsYYSTACK_RELOCATE (mipsyyss);
	mipsYYSTACK_RELOCATE (mipsyyvs);

#  undef mipsYYSTACK_RELOCATE
	if (mipsyyss1 != mipsyyssa)
	  mipsYYSTACK_FREE (mipsyyss1);
      }
# endif
#endif /* no mipsyyoverflow */

      mipsyyssp = mipsyyss + mipsyysize - 1;
      mipsyyvsp = mipsyyvs + mipsyysize - 1;


      mipsYYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) mipsyystacksize));

      if (mipsyyss + mipsyystacksize - 1 <= mipsyyssp)
	mipsYYABORT;
    }

  mipsYYDPRINTF ((stderr, "Entering state %d\n", mipsyystate));

  goto mipsyybackup;

/*-----------.
| mipsyybackup.  |
`-----------*/
mipsyybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  mipsyyn = mipsyypact[mipsyystate];
  if (mipsyyn == mipsYYPACT_NINF)
    goto mipsyydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* mipsYYCHAR is either mipsYYEMPTY or mipsYYEOF or a valid look-ahead symbol.  */
  if (mipsyychar == mipsYYEMPTY)
    {
      mipsYYDPRINTF ((stderr, "Reading a token: "));
      mipsyychar = mipsYYLEX;
    }

  if (mipsyychar <= mipsYYEOF)
    {
      mipsyychar = mipsyytoken = mipsYYEOF;
      mipsYYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      mipsyytoken = mipsYYTRANSLATE (mipsyychar);
      mipsYY_SYMBOL_PRINT ("Next token is", mipsyytoken, &mipsyylval, &mipsyylloc);
    }

  /* If the proper action on seeing token mipsYYTOKEN is to reduce or to
     detect an error, take that action.  */
  mipsyyn += mipsyytoken;
  if (mipsyyn < 0 || mipsYYLAST < mipsyyn || mipsyycheck[mipsyyn] != mipsyytoken)
    goto mipsyydefault;
  mipsyyn = mipsyytable[mipsyyn];
  if (mipsyyn <= 0)
    {
      if (mipsyyn == 0 || mipsyyn == mipsYYTABLE_NINF)
	goto mipsyyerrlab;
      mipsyyn = -mipsyyn;
      goto mipsyyreduce;
    }

  if (mipsyyn == mipsYYFINAL)
    mipsYYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (mipsyyerrstatus)
    mipsyyerrstatus--;

  /* Shift the look-ahead token.  */
  mipsYY_SYMBOL_PRINT ("Shifting", mipsyytoken, &mipsyylval, &mipsyylloc);

  /* Discard the shifted token unless it is eof.  */
  if (mipsyychar != mipsYYEOF)
    mipsyychar = mipsYYEMPTY;

  mipsyystate = mipsyyn;
  *++mipsyyvsp = mipsyylval;

  goto mipsyynewstate;


/*-----------------------------------------------------------.
| mipsyydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
mipsyydefault:
  mipsyyn = mipsyydefact[mipsyystate];
  if (mipsyyn == 0)
    goto mipsyyerrlab;
  goto mipsyyreduce;


/*-----------------------------.
| mipsyyreduce -- Do a reduction.  |
`-----------------------------*/
mipsyyreduce:
  /* mipsyyn is the number of a rule to reduce with.  */
  mipsyylen = mipsyyr2[mipsyyn];

  /* If mipsYYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets mipsYYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to mipsYYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that mipsYYVAL may be used uninitialized.  */
  mipsyyval = mipsyyvsp[1-mipsyylen];


  mipsYY_REDUCE_PRINT (mipsyyn);
  switch (mipsyyn)
    {
        case 10:
#line 468 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   in the first pass, check that the label is unique.	*/
		/* Save its address in the dictionary and flag it as a	*/
		/* label.						*/
		/* ###----------------------------------------------### */

		if (MPS_PASNBR == 1)
		  {
		  if (beh_chktab (MPS_HSHTAB, (mipsyyvsp[(1) - (2)].text), NULL, 0) == 0)
		    {
		    beh_addtab (MPS_HSHTAB, (mipsyyvsp[(1) - (2)].text), NULL, 0, 'l'       );
		    beh_addtab (MPS_HSHTAB, (mipsyyvsp[(1) - (2)].text), NULL, 7, MPS_ADDRES);
		    if (MPS_SYMBOL == 'y')
		      mips_symbol ((mipsyyvsp[(1) - (2)].text));
		    }
		  else
		    mips_error (3, NULL);
		  }
		}
    break;

  case 12:
#line 493 "../../../src/mips_asm/src/mips_y.y"
    {
		if ((MPS_PASNBR == 2) && ((mipsyyvsp[(1) - (1)].immd).flag == 0))
		  mips_error (4, NULL);

		if (MPS_PASNBR == 2)
		  mips_print ((mipsyyvsp[(1) - (1)].immd).valu);

		MPS_ADDRES += (mipsyyvsp[(1) - (1)].immd).valu;
		}
    break;

  case 13:
#line 503 "../../../src/mips_asm/src/mips_y.y"
    {
		if ((MPS_PASNBR == 2) && ((mipsyyvsp[(1) - (1)].immd).flag == 0))
		  mips_error (4, NULL);

		if (MPS_PASNBR == 2)
		  mips_print ((mipsyyvsp[(1) - (1)].immd).valu);

		MPS_ADDRES += (mipsyyvsp[(1) - (1)].immd).valu;
		}
    break;

  case 14:
#line 516 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 15:
#line 518 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 16:
#line 520 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 17:
#line 522 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 18:
#line 524 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 19:
#line 526 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = 0  ;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 20:
#line 531 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = 0  ;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 21:
#line 540 "../../../src/mips_asm/src/mips_y.y"
    {
		MPS_BYTTAB [3] = (mipsyyvsp[(2) - (2)].immd).valu >> 24;
		MPS_BYTTAB [2] = (mipsyyvsp[(2) - (2)].immd).valu >> 16;
		MPS_BYTTAB [1] = (mipsyyvsp[(2) - (2)].immd).valu >>  8;
		MPS_BYTTAB [0] = (mipsyyvsp[(2) - (2)].immd).valu      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(2) - (2)].immd).flag;
		}
    break;

  case 22:
#line 554 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   initialize a byte address with a value		*/
		/* ###----------------------------------------------### */

		MPS_BYTTAB [0] = (mipsyyvsp[(2) - (2)].immd).valu;

		(mipsyyval.immd).valu = 1      ;
		(mipsyyval.immd).flag = (mipsyyvsp[(2) - (2)].immd).flag;
		}
    break;

  case 23:
#line 569 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   initialize a byte table with zeros			*/
		/* ###----------------------------------------------### */

		unsigned int i;

		for (i=0; i<(mipsyyvsp[(2) - (2)].immd).valu ; i++)
		  MPS_BYTTAB [i] = 0x00;

		(mipsyyval.immd).valu = (mipsyyvsp[(2) - (2)].immd).valu;
		(mipsyyval.immd).flag = (mipsyyvsp[(2) - (2)].immd).flag;
		}
    break;

  case 24:
#line 587 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   initialize a set of addresses with a string	*/
		/* ###----------------------------------------------### */

		(mipsyyval.immd).valu = mips_strtobin ((mipsyyvsp[(2) - (2)].text), MPS_BYTTAB);
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 25:
#line 600 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   initialize a set of addresses with a string	*/
		/* followed by a null character				*/
		/* ###----------------------------------------------### */

		unsigned int size;

		size = mips_strtobin ((mipsyyvsp[(2) - (2)].text), MPS_BYTTAB);
		MPS_BYTTAB [size] = '\0';

		(mipsyyval.immd).valu = size + 1;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 33:
#line 629 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   if the current region is the 'text region', switch	*/
		/* to the 'data region'.				*/
		/*   if an address is defined, set the current data	*/
		/* address.						*/
		/* ###----------------------------------------------### */

		if (MPS_ADRSPC == 'T')
		  {
		  MPS_TXTADR = MPS_ADDRES;

		  MPS_ADDRES = MPS_DATADR;
		  MPS_WRTFIL = MPS_DATFIL;
		  MPS_ADRSIZ = MPS_DATSIZ;
		  MPS_WRDSIZ =  1 ;
		  MPS_ADRSPC = 'D';
		  }

		if ((mipsyyvsp[(2) - (2)].immd).flag == 'i')
		  MPS_ADDRES = (mipsyyvsp[(2) - (2)].immd).valu;
		else
		  {
		  if ((mipsyyvsp[(2) - (2)].immd).flag != 'n')
		    mips_error (4, NULL);
		  }
		}
    break;

  case 34:
#line 661 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   if the current region is the 'data region', switch	*/
		/* to the 'text region'.				*/
		/*   if an address is defined, set the current data	*/
		/* address.						*/
		/* ###----------------------------------------------### */

		if (MPS_ADRSPC == 'D')
		  {
		  MPS_DATADR = MPS_ADDRES;

		  MPS_ADDRES = MPS_TXTADR;
		  MPS_WRTFIL = MPS_TXTFIL;
		  MPS_ADRSIZ = MPS_TXTSIZ;
		  MPS_WRDSIZ = 4;
		  MPS_ADRSPC = 'T';
		  }

		if ((mipsyyvsp[(2) - (2)].immd).flag == 'i')
		  MPS_ADDRES = (mipsyyvsp[(2) - (2)].immd).valu;
		else
		  {
		  if ((mipsyyvsp[(2) - (2)].immd).flag != 'n')
		    mips_error (4, NULL);
		  }
		}
    break;

  case 36:
#line 698 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   align the current address				*/
		/* ###----------------------------------------------### */

		switch ((mipsyyvsp[(2) - (2)].valu))
		  {
		  case 1:
		    break;
		  case 2:
		    MPS_ADDRES = (MPS_ADDRES + 1) & 0xfffffffe;
		    break;
		  case 4:
		    MPS_ADDRES = (MPS_ADDRES + 3) & 0xfffffffc;
		    break;
		  case 8:
		    MPS_ADDRES = (MPS_ADDRES + 7) & 0xfffffff8;
		    break;
		  default:
		    mips_error (4, NULL);
		  }
		}
    break;

  case 41:
#line 740 "../../../src/mips_asm/src/mips_y.y"
    {
		MPS_ADDRES += (mipsyyvsp[(2) - (2)].valu);
		}
    break;

  case 42:
#line 748 "../../../src/mips_asm/src/mips_y.y"
    {
		MPS_ADDRES += (mipsyyvsp[(2) - (2)].valu);
		}
    break;

  case 43:
#line 756 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   define the first address (must be an immediate)	*/
		/* ###----------------------------------------------### */

		if ((mipsyyvsp[(2) - (2)].immd).flag == 'i')
		  MPS_ADDRES = (mipsyyvsp[(2) - (2)].immd).valu;
		else
		  mips_error (4, NULL);
		}
    break;

  case 44:
#line 772 "../../../src/mips_asm/src/mips_y.y"
    {
		/* ###----------------------------------------------### */
		/*   in the first pass, check that the identifier has	*/
		/* not been defined ealier.				*/
		/*   Save its value in the dictionary and flag it as	*/
		/* an immediate.					*/
		/* ###----------------------------------------------### */

		if (MPS_PASNBR == 1)
		  {
		  if ((mipsyyvsp[(3) - (3)].immd).flag == 'i')
		    {
		    if (beh_chktab (MPS_HSHTAB, (mipsyyvsp[(1) - (3)].text), NULL, 0) == 0)
		      {
		      beh_addtab (MPS_HSHTAB, (mipsyyvsp[(1) - (3)].text), NULL, 0, 'i'    );
		      beh_addtab (MPS_HSHTAB, (mipsyyvsp[(1) - (3)].text), NULL, 7, (mipsyyvsp[(3) - (3)].immd).valu);
		      }
		    else
		      mips_error (3, NULL);
		    }
		  else
		    mips_error (4, NULL);
		  }
		}
    break;

  case 45:
#line 800 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 46:
#line 802 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 47:
#line 807 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 48:
#line 809 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 49:
#line 811 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 50:
#line 813 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 51:
#line 815 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 52:
#line 817 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 53:
#line 819 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 54:
#line 821 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 55:
#line 823 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 56:
#line 825 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 57:
#line 827 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 58:
#line 829 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 59:
#line 831 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 60:
#line 833 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 61:
#line 835 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 62:
#line 837 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 63:
#line 847 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long inst = 0;

		inst           = (mipsyyvsp[(1) - (6)].valu) | ((mipsyyvsp[(4) - (6)].valu) << 21) | ((mipsyyvsp[(6) - (6)].valu) << 16) | ((mipsyyvsp[(2) - (6)].valu) << 11);
		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 64:
#line 868 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long inst = 0;

		inst           = (mipsyyvsp[(1) - (6)].valu) | ((mipsyyvsp[(6) - (6)].valu) << 21) | ((mipsyyvsp[(4) - (6)].valu) << 16) | ((mipsyyvsp[(2) - (6)].valu) << 11);
		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4  ;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 65:
#line 887 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long inst = 0;

		inst           = (mipsyyvsp[(1) - (4)].valu) | ((mipsyyvsp[(2) - (4)].valu) << 16) | ((mipsyyvsp[(4) - (4)].valu) << 11);
		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4  ;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 66:
#line 904 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long inst = 0;

		inst           = (mipsyyvsp[(1) - (2)].valu) | ((mipsyyvsp[(2) - (2)].valu) << 11);
		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 67:
#line 921 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long inst = 0x0000f800;

		inst           |= (mipsyyvsp[(1) - (2)].valu) | ((mipsyyvsp[(2) - (2)].valu) << 21);
		MPS_BYTTAB [3]  = inst >> 24;
		MPS_BYTTAB [2]  = inst >> 16;
		MPS_BYTTAB [1]  = inst >>  8;
		MPS_BYTTAB [0]  = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 68:
#line 937 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long inst = 0;

		inst           = (mipsyyvsp[(1) - (4)].valu) | ((mipsyyvsp[(4) - (4)].valu) << 21) | ((mipsyyvsp[(2) - (4)].valu) << 11);
		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 69:
#line 954 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long inst = 0;

		inst           = (mipsyyvsp[(1) - (2)].valu) | ((mipsyyvsp[(2) - (2)].valu) << 21);
		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 70:
#line 976 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		imd  = 0x0000ffff & (mipsyyvsp[(7) - (7)].immd).valu;
		inst = (mipsyyvsp[(1) - (7)].valu) | ((mipsyyvsp[(4) - (7)].valu) << 21) | ((mipsyyvsp[(2) - (7)].valu) << 16) | imd;

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(7) - (7)].immd).flag;
		}
    break;

  case 71:
#line 1001 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		imd  = 0x0000001f & (mipsyyvsp[(7) - (7)].immd).valu;
		inst = (mipsyyvsp[(1) - (7)].valu) | ((mipsyyvsp[(4) - (7)].valu) << 16) | ((mipsyyvsp[(2) - (7)].valu) << 11) | (imd << 6);

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(7) - (7)].immd).flag;
		}
    break;

  case 72:
#line 1026 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		imd  = 0x0000ffff & (mipsyyvsp[(4) - (7)].immd).valu;
		inst = (mipsyyvsp[(1) - (7)].valu) | ((mipsyyvsp[(6) - (7)].valu) << 21) | ((mipsyyvsp[(2) - (7)].valu) << 16) | imd;

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(4) - (7)].immd).flag;
		}
    break;

  case 73:
#line 1051 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		imd  = 0x0000ffff & (mipsyyvsp[(4) - (7)].immd).valu;
		inst = (mipsyyvsp[(1) - (7)].valu) | ((mipsyyvsp[(6) - (7)].valu) << 21) | ((mipsyyvsp[(2) - (7)].valu) << 16) | imd;

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(4) - (7)].immd).flag;
		}
    break;

  case 74:
#line 1075 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		if ((mipsyyvsp[(6) - (6)].immd).flag == 'l')
		  imd = (mipsyyvsp[(6) - (6)].immd).valu - MPS_ADDRES - 4;
		else
		  {
		  if (MPS_PASNBR == 2)
		    mips_error (4, NULL);
		  }

		imd  = 0x0000ffff & (imd >> 2);
		inst = (mipsyyvsp[(1) - (6)].valu) | ((mipsyyvsp[(2) - (6)].valu) << 21) | ((mipsyyvsp[(4) - (6)].valu) << 16) | imd;

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4      ;
		(mipsyyval.immd).flag = (mipsyyvsp[(6) - (6)].immd).flag;
		}
    break;

  case 75:
#line 1105 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		if ((mipsyyvsp[(4) - (4)].immd).flag == 'l')
		  imd = (mipsyyvsp[(4) - (4)].immd).valu - MPS_ADDRES - 4;
		else
		  {
		  if (MPS_PASNBR == 2)
		    mips_error (4, NULL);
		  }

		imd  = 0x0000ffff & (imd >> 2);
		inst = (mipsyyvsp[(1) - (4)].valu) | ((mipsyyvsp[(2) - (4)].valu) << 21) | imd;

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(4) - (4)].immd).flag;
		}
    break;

  case 76:
#line 1135 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		imd  = 0x0000ffff & (mipsyyvsp[(4) - (4)].immd).valu;
		inst = (mipsyyvsp[(1) - (4)].valu) | ((mipsyyvsp[(2) - (4)].valu) << 16) | imd;

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(4) - (4)].immd).flag;
		}
    break;

  case 77:
#line 1156 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		imd  = 0x0000ffff & (mipsyyvsp[(3) - (3)].immd).valu;
		inst = (mipsyyvsp[(1) - (3)].valu) | imd;

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(3) - (3)].immd).flag;
		}
    break;

  case 78:
#line 1176 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		imd = (mipsyyvsp[(2) - (2)].immd).valu;
/*--------
		if ($2.flag == 'l')
		  imd = $2.valu - MPS_ADDRES - 4;
		else
		  imd = $2.valu;
----------*/

		imd  = 0x03ffffff & (imd >> 2);
		inst = (mipsyyvsp[(1) - (2)].valu) | imd;

		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = (mipsyyvsp[(2) - (2)].immd).flag;
		}
    break;

  case 79:
#line 1203 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long inst = 0;

		inst           = (mipsyyvsp[(1) - (1)].valu);
		MPS_BYTTAB [3] = inst >> 24;
		MPS_BYTTAB [2] = inst >> 16;
		MPS_BYTTAB [1] = inst >>  8;
		MPS_BYTTAB [0] = inst      ;

		(mipsyyval.immd).valu = 4;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 82:
#line 1224 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 83:
#line 1226 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 84:
#line 1234 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd  = 0;
		unsigned long inst = 0;

		switch ((mipsyyvsp[(1) - (4)].valu))
		  {
		  case _LOADI :
		    imd  = 0x0000ffff & ((mipsyyvsp[(4) - (4)].immd).valu >> 16);
		    inst = _LUI | ((mipsyyvsp[(2) - (4)].valu) << 16) | imd;

		    MPS_BYTTAB [3] = inst >> 24;
		    MPS_BYTTAB [2] = inst >> 16;
		    MPS_BYTTAB [1] = inst >>  8;
		    MPS_BYTTAB [0] = inst      ;

		    imd  = 0x0000ffff & (mipsyyvsp[(4) - (4)].immd).valu;
		    inst = _ORI | ((mipsyyvsp[(2) - (4)].valu) << 21) | ((mipsyyvsp[(2) - (4)].valu) << 16) | imd;

		    MPS_BYTTAB [7] = inst >> 24;
		    MPS_BYTTAB [6] = inst >> 16;
		    MPS_BYTTAB [5] = inst >>  8;
		    MPS_BYTTAB [4] = inst      ;

		    (mipsyyval.immd).valu = 8;
		    (mipsyyval.immd).flag = (mipsyyvsp[(4) - (4)].immd).flag;
		    break;

		  default:
		    mips_error (5, NULL);
		  }
		}
    break;

  case 85:
#line 1269 "../../../src/mips_asm/src/mips_y.y"
    {
		switch ((mipsyyvsp[(1) - (1)].valu))
		  {
		  case _NOP :
		    MPS_BYTTAB [3] = 0x00;
		    MPS_BYTTAB [2] = 0x00;
		    MPS_BYTTAB [1] = 0x00;
		    MPS_BYTTAB [0] = 0x21;

		    (mipsyyval.immd).valu = 4;
		    (mipsyyval.immd).flag = 'n';
		    break;

		  default:
		    mips_error (5, NULL);
		  }
		}
    break;

  case 86:
#line 1290 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 87:
#line 1295 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = 0  ;
		(mipsyyval.immd).flag = 'n';
		}
    break;

  case 88:
#line 1300 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 89:
#line 1305 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 90:
#line 1307 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 91:
#line 1309 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 92:
#line 1311 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 93:
#line 1316 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 94:
#line 1320 "../../../src/mips_asm/src/mips_y.y"
    {
		if ((mipsyyvsp[(2) - (3)].valu) == MPS_PLSDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu + (mipsyyvsp[(3) - (3)].immd).valu;
		else
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu - (mipsyyvsp[(3) - (3)].immd).valu;

		if (((mipsyyvsp[(1) - (3)].immd).flag == 0) || ((mipsyyvsp[(3) - (3)].immd).flag == 0))
		  (mipsyyval.immd).flag = 0;
		else
		  {
		  if (((mipsyyvsp[(1) - (3)].immd).flag == 'l') || ((mipsyyvsp[(3) - (3)].immd).flag == 'l'))
		    (mipsyyval.immd).flag = 'l';
		  else
		    (mipsyyval.immd).flag = 'i';
		  }
		}
    break;

  case 95:
#line 1342 "../../../src/mips_asm/src/mips_y.y"
    {
		if ((mipsyyvsp[(2) - (3)].valu) == MPS_MULDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu * (mipsyyvsp[(3) - (3)].immd).valu;
		else
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu / (mipsyyvsp[(3) - (3)].immd).valu;

		if (((mipsyyvsp[(1) - (3)].immd).flag == 0) || ((mipsyyvsp[(3) - (3)].immd).flag == 0))
		  (mipsyyval.immd).flag = 0;
		else
		  {
		  if (((mipsyyvsp[(1) - (3)].immd).flag == 'l') || ((mipsyyvsp[(3) - (3)].immd).flag == 'l'))
		    (mipsyyval.immd).flag = 'l';
		  else
		    (mipsyyval.immd).flag = 'i';
		  }
		}
    break;

  case 96:
#line 1361 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu * (mipsyyvsp[(3) - (3)].immd).valu;

		if (((mipsyyvsp[(1) - (3)].immd).flag == 0) || ((mipsyyvsp[(3) - (3)].immd).flag == 0))
		  (mipsyyval.immd).flag = 0;
		else
		  {
		  if (((mipsyyvsp[(1) - (3)].immd).flag == 'l') || ((mipsyyvsp[(3) - (3)].immd).flag == 'l'))
		    (mipsyyval.immd).flag = 'l';
		  else
		    (mipsyyval.immd).flag = 'i';
		  }
		}
    break;

  case 97:
#line 1380 "../../../src/mips_asm/src/mips_y.y"
    {
		if ((mipsyyvsp[(2) - (3)].valu) == MPS_ORDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu | (mipsyyvsp[(3) - (3)].immd).valu;

		if ((mipsyyvsp[(2) - (3)].valu) == MPS_ANDDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu & (mipsyyvsp[(3) - (3)].immd).valu;

		if ((mipsyyvsp[(2) - (3)].valu) == MPS_XORDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu ^ (mipsyyvsp[(3) - (3)].immd).valu;

		if (((mipsyyvsp[(1) - (3)].immd).flag == 0) || ((mipsyyvsp[(3) - (3)].immd).flag == 0))
		  (mipsyyval.immd).flag = 0;
		else
		  {
		  if (((mipsyyvsp[(1) - (3)].immd).flag == 'l') || ((mipsyyvsp[(3) - (3)].immd).flag == 'l'))
		    (mipsyyval.immd).flag = 'l';
		  else
		    (mipsyyval.immd).flag = 'i';
		  }
		}
    break;

  case 98:
#line 1403 "../../../src/mips_asm/src/mips_y.y"
    {
		if ((mipsyyvsp[(2) - (3)].valu) == MPS_ORDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu | (mipsyyvsp[(3) - (3)].immd).valu;

		if ((mipsyyvsp[(2) - (3)].valu) == MPS_ANDDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu & (mipsyyvsp[(3) - (3)].immd).valu;

		if ((mipsyyvsp[(2) - (3)].valu) == MPS_XORDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu ^ (mipsyyvsp[(3) - (3)].immd).valu;

		if (((mipsyyvsp[(1) - (3)].immd).flag == 0) || ((mipsyyvsp[(3) - (3)].immd).flag == 0))
		  (mipsyyval.immd).flag = 0;
		else
		  {
		  if (((mipsyyvsp[(1) - (3)].immd).flag == 'l') || ((mipsyyvsp[(3) - (3)].immd).flag == 'l'))
		    (mipsyyval.immd).flag = 'l';
		  else
		    (mipsyyval.immd).flag = 'i';
		  }
		}
    break;

  case 99:
#line 1429 "../../../src/mips_asm/src/mips_y.y"
    {
		if ((mipsyyvsp[(2) - (3)].valu) == MPS_SHLDFN)
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu << (mipsyyvsp[(3) - (3)].immd).valu;
		else
		  (mipsyyval.immd).valu = (mipsyyvsp[(1) - (3)].immd).valu >> (mipsyyvsp[(3) - (3)].immd).valu;

		if (((mipsyyvsp[(1) - (3)].immd).flag == 0) || ((mipsyyvsp[(3) - (3)].immd).flag == 0))
		  (mipsyyval.immd).flag = 0;
		else
		  {
		  if (((mipsyyvsp[(1) - (3)].immd).flag == 'l') || ((mipsyyvsp[(3) - (3)].immd).flag == 'l'))
		    (mipsyyval.immd).flag = 'l';
		  else
		    (mipsyyval.immd).flag = 'i';
		  }
		}
    break;

  case 100:
#line 1449 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_SHLDFN; }
    break;

  case 101:
#line 1451 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_SHRDFN; }
    break;

  case 102:
#line 1456 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_MULDFN; }
    break;

  case 103:
#line 1458 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_DIVDFN; }
    break;

  case 104:
#line 1465 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd) = (mipsyyvsp[(2) - (3)].immd);
		}
    break;

  case 105:
#line 1472 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = ~ ((mipsyyvsp[(3) - (4)].immd).valu);
		(mipsyyval.immd).flag = (mipsyyvsp[(3) - (4)].immd).flag;
		}
    break;

  case 106:
#line 1480 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = - (mipsyyvsp[(3) - (4)].immd).valu;
		(mipsyyval.immd).flag = (mipsyyvsp[(3) - (4)].immd).flag;
		}
    break;

  case 107:
#line 1485 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.immd) = (mipsyyvsp[(1) - (1)].immd); }
    break;

  case 108:
#line 1490 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_ORDFN;  }
    break;

  case 109:
#line 1492 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_ANDDFN; }
    break;

  case 110:
#line 1494 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_XORDFN; }
    break;

  case 111:
#line 1499 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_PLSDFN; }
    break;

  case 112:
#line 1501 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = MPS_MNSDFN; }
    break;

  case 113:
#line 1506 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = (mipsyyvsp[(1) - (1)].valu);
		(mipsyyval.immd).flag = 'i';
		}
    break;

  case 114:
#line 1512 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = - (mipsyyvsp[(2) - (2)].valu);
		(mipsyyval.immd).flag = 'i';
		}
    break;

  case 115:
#line 1518 "../../../src/mips_asm/src/mips_y.y"
    {
		(mipsyyval.immd).valu = ~ (mipsyyvsp[(2) - (2)].valu);
		(mipsyyval.immd).flag = 'i';
		}
    break;

  case 116:
#line 1523 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd;

		imd     = beh_chktab (MPS_HSHTAB, (mipsyyvsp[(1) - (1)].text), NULL, 7);
		(mipsyyval.immd).valu = imd;
		(mipsyyval.immd).flag = beh_chktab (MPS_HSHTAB, (mipsyyvsp[(1) - (1)].text), NULL, 0);
		}
    break;

  case 117:
#line 1532 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd;

		imd     = beh_chktab (MPS_HSHTAB, (mipsyyvsp[(2) - (2)].text), NULL, 7);
		(mipsyyval.immd).valu = -imd;
		(mipsyyval.immd).flag = beh_chktab (MPS_HSHTAB, (mipsyyvsp[(2) - (2)].text), NULL, 0);
		}
    break;

  case 118:
#line 1541 "../../../src/mips_asm/src/mips_y.y"
    {
		unsigned long imd;

		imd     = beh_chktab (MPS_HSHTAB, (mipsyyvsp[(2) - (2)].text), NULL, 7);
		(mipsyyval.immd).valu = ~imd;
		(mipsyyval.immd).flag = beh_chktab (MPS_HSHTAB, (mipsyyvsp[(2) - (2)].text), NULL, 0);
		}
    break;

  case 119:
#line 1552 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = (mipsyyvsp[(1) - (1)].valu); }
    break;

  case 120:
#line 1554 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = (mipsyyvsp[(1) - (1)].valu); }
    break;

  case 121:
#line 1559 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = (mipsyyvsp[(1) - (1)].valu); }
    break;

  case 122:
#line 1561 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = (mipsyyvsp[(1) - (1)].valu); }
    break;

  case 123:
#line 1566 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = (mipsyyvsp[(1) - (1)].valu); }
    break;

  case 124:
#line 1568 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = (mipsyyvsp[(1) - (1)].valu); }
    break;

  case 125:
#line 1573 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = (mipsyyvsp[(1) - (1)].valu); }
    break;

  case 126:
#line 1575 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.valu) = (mipsyyvsp[(1) - (1)].valu); }
    break;

  case 127:
#line 1580 "../../../src/mips_asm/src/mips_y.y"
    { (mipsyyval.text) = (mipsyyvsp[(1) - (1)].text); }
    break;

  case 130:
#line 1591 "../../../src/mips_asm/src/mips_y.y"
    { mipsyyerrok; }
    break;


/* Line 1267 of yacc.c.  */
#line 3089 "y.tab.c"
      default: break;
    }
  mipsYY_SYMBOL_PRINT ("-> $$ =", mipsyyr1[mipsyyn], &mipsyyval, &mipsyyloc);

  mipsYYPOPSTACK (mipsyylen);
  mipsyylen = 0;
  mipsYY_STACK_PRINT (mipsyyss, mipsyyssp);

  *++mipsyyvsp = mipsyyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  mipsyyn = mipsyyr1[mipsyyn];

  mipsyystate = mipsyypgoto[mipsyyn - mipsYYNTOKENS] + *mipsyyssp;
  if (0 <= mipsyystate && mipsyystate <= mipsYYLAST && mipsyycheck[mipsyystate] == *mipsyyssp)
    mipsyystate = mipsyytable[mipsyystate];
  else
    mipsyystate = mipsyydefgoto[mipsyyn - mipsYYNTOKENS];

  goto mipsyynewstate;


/*------------------------------------.
| mipsyyerrlab -- here on detecting error |
`------------------------------------*/
mipsyyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!mipsyyerrstatus)
    {
      ++mipsyynerrs;
#if ! mipsYYERROR_VERBOSE
      mipsyyerror (mipsYY_("syntax error"));
#else
      {
	mipsYYSIZE_T mipsyysize = mipsyysyntax_error (0, mipsyystate, mipsyychar);
	if (mipsyymsg_alloc < mipsyysize && mipsyymsg_alloc < mipsYYSTACK_ALLOC_MAXIMUM)
	  {
	    mipsYYSIZE_T mipsyyalloc = 2 * mipsyysize;
	    if (! (mipsyysize <= mipsyyalloc && mipsyyalloc <= mipsYYSTACK_ALLOC_MAXIMUM))
	      mipsyyalloc = mipsYYSTACK_ALLOC_MAXIMUM;
	    if (mipsyymsg != mipsyymsgbuf)
	      mipsYYSTACK_FREE (mipsyymsg);
	    mipsyymsg = (char *) mipsYYSTACK_ALLOC (mipsyyalloc);
	    if (mipsyymsg)
	      mipsyymsg_alloc = mipsyyalloc;
	    else
	      {
		mipsyymsg = mipsyymsgbuf;
		mipsyymsg_alloc = sizeof mipsyymsgbuf;
	      }
	  }

	if (0 < mipsyysize && mipsyysize <= mipsyymsg_alloc)
	  {
	    (void) mipsyysyntax_error (mipsyymsg, mipsyystate, mipsyychar);
	    mipsyyerror (mipsyymsg);
	  }
	else
	  {
	    mipsyyerror (mipsYY_("syntax error"));
	    if (mipsyysize != 0)
	      goto mipsyyexhaustedlab;
	  }
      }
#endif
    }



  if (mipsyyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (mipsyychar <= mipsYYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (mipsyychar == mipsYYEOF)
	    mipsYYABORT;
	}
      else
	{
	  mipsyydestruct ("Error: discarding",
		      mipsyytoken, &mipsyylval);
	  mipsyychar = mipsYYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto mipsyyerrlab1;


/*---------------------------------------------------.
| mipsyyerrorlab -- error raised explicitly by mipsYYERROR.  |
`---------------------------------------------------*/
mipsyyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     mipsYYERROR and the label mipsyyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto mipsyyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this mipsYYERROR.  */
  mipsYYPOPSTACK (mipsyylen);
  mipsyylen = 0;
  mipsYY_STACK_PRINT (mipsyyss, mipsyyssp);
  mipsyystate = *mipsyyssp;
  goto mipsyyerrlab1;


/*-------------------------------------------------------------.
| mipsyyerrlab1 -- common code for both syntax error and mipsYYERROR.  |
`-------------------------------------------------------------*/
mipsyyerrlab1:
  mipsyyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      mipsyyn = mipsyypact[mipsyystate];
      if (mipsyyn != mipsYYPACT_NINF)
	{
	  mipsyyn += mipsYYTERROR;
	  if (0 <= mipsyyn && mipsyyn <= mipsYYLAST && mipsyycheck[mipsyyn] == mipsYYTERROR)
	    {
	      mipsyyn = mipsyytable[mipsyyn];
	      if (0 < mipsyyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (mipsyyssp == mipsyyss)
	mipsYYABORT;


      mipsyydestruct ("Error: popping",
		  mipsyystos[mipsyystate], mipsyyvsp);
      mipsYYPOPSTACK (1);
      mipsyystate = *mipsyyssp;
      mipsYY_STACK_PRINT (mipsyyss, mipsyyssp);
    }

  if (mipsyyn == mipsYYFINAL)
    mipsYYACCEPT;

  *++mipsyyvsp = mipsyylval;


  /* Shift the error token.  */
  mipsYY_SYMBOL_PRINT ("Shifting", mipsyystos[mipsyyn], mipsyyvsp, mipsyylsp);

  mipsyystate = mipsyyn;
  goto mipsyynewstate;


/*-------------------------------------.
| mipsyyacceptlab -- mipsYYACCEPT comes here.  |
`-------------------------------------*/
mipsyyacceptlab:
  mipsyyresult = 0;
  goto mipsyyreturn;

/*-----------------------------------.
| mipsyyabortlab -- mipsYYABORT comes here.  |
`-----------------------------------*/
mipsyyabortlab:
  mipsyyresult = 1;
  goto mipsyyreturn;

#ifndef mipsyyoverflow
/*-------------------------------------------------.
| mipsyyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
mipsyyexhaustedlab:
  mipsyyerror (mipsYY_("memory exhausted"));
  mipsyyresult = 2;
  /* Fall through.  */
#endif

mipsyyreturn:
  if (mipsyychar != mipsYYEOF && mipsyychar != mipsYYEMPTY)
     mipsyydestruct ("Cleanup: discarding lookahead",
		 mipsyytoken, &mipsyylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this mipsYYABORT or mipsYYACCEPT.  */
  mipsYYPOPSTACK (mipsyylen);
  mipsYY_STACK_PRINT (mipsyyss, mipsyyssp);
  while (mipsyyssp != mipsyyss)
    {
      mipsyydestruct ("Cleanup: popping",
		  mipsyystos[*mipsyyssp], mipsyyvsp);
      mipsYYPOPSTACK (1);
    }
#ifndef mipsyyoverflow
  if (mipsyyss != mipsyyssa)
    mipsYYSTACK_FREE (mipsyyss);
#endif
#if mipsYYERROR_VERBOSE
  if (mipsyymsg != mipsyymsgbuf)
    mipsYYSTACK_FREE (mipsyymsg);
#endif
  /* Make sure mipsYYID is used.  */
  return mipsYYID (mipsyyresult);
}


#line 1593 "../../../src/mips_asm/src/mips_y.y"


/* ###--------------------------------------------------------------### */
/* function	: mips_error						*/
/* description	: print an error message				*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void mips_error (code, str)

int   code;
char *str;

  {
  MPS_ERRFLG = 1;
  if (code <100)
    fprintf (stderr,"Error %d near line %d : ",code, MPS_LINNUM);

  switch (code)
    {
    case 2:
      fprintf (stderr, "missing label\n");
      break;
    case 3:
      fprintf (stderr, "redefinition of label\n");
      break;
    case 4:
      fprintf (stderr, "undifined string\n");
      break;
    case 5:
      fprintf (stderr, "parse error\n");
      break;
    case 6:
      fprintf (stderr, "no output file has been specified\n");
      break;
    case 100:
      fprintf (stderr, "cannot open file `%s`\n",str);
      break;
    case 101:
      fprintf (stderr, "usage: mips_asm [<options>] <assembly_file> <vhdl_file> <vhdl_file>\n");
      break;
    }
  }

/* ###--------------------------------------------------------------### */
/* function	: mipsyyerror						*/
/* description	: print yacc error messages				*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

mipsyyerror (str)

char *str;

  {
  MPS_ERRFLG = 1;
  fprintf (stderr, "line %d : %s\n",MPS_LINNUM, str);
  }

/* ###--------------------------------------------------------------### */
/* function	: mips_foot						*/
/* description	: print the head lines of the behavioural description	*/
/*		  of a ROM. The 'address size' defines the number of	*/
/*		  bits of the address, the 'word size' defines the size	*/
/*		  of the rom line in bytes and the 'name' specifies the	*/
/*		  name of the Entity.					*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void mips_head (fp, name, adr_siz, wrd_siz)

FILE         *fp;
char         *name;
unsigned int  adr_siz;
unsigned int  wrd_siz;

  {
  adr_siz --;
  wrd_siz = (wrd_siz * 8) - 1;

  fprintf (fp, "entity %s is\n  port (\n", name);
  fprintf (fp, "    address : in  bit_vector (%u downto 0);\n", adr_siz);
  fprintf (fp, "    e_n     : in  bit;\n");
  fprintf (fp, "    data    : out mux_vector (%u downto 0) bus;\n", wrd_siz);
  fprintf (fp, "    vdd     : in bit;\n");
  fprintf (fp, "    vss     : in bit);\nend %s;\n\n",name);
  fprintf (fp, "architecture VBE of %s is\n\n", name);
  fprintf (fp, "  signal rom_out : bit_vector (%u downto 0);\n\n", wrd_siz);
  fprintf (fp, "begin\n\n");
  fprintf (fp, "  write_out : block (e_n = '0')\n  begin\n");
  fprintf (fp, "    data <= guarded rom_out;\n  end block;\n\n");
  fprintf (fp, "  with address (%u downto 0) select\n  rom_out <=\n", adr_siz);
  }

/* ###--------------------------------------------------------------### */
/* function	: mips_foot						*/
/* description	: print the foot lines of the behavioural description	*/
/*		  of a ROM. The 'word size' defines the size of the	*/
/*		  rom line in bytes.					*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void mips_foot (fp, wrd_siz)

FILE         *fp     ;
unsigned int  wrd_siz;

  {
  unsigned int i;

  fprintf (fp, "          X\"");

  for (i=0 ; i<wrd_siz ; i++)
    fprintf (fp, "00");

  fprintf (fp, "\" when others;\n\nend;\n");
  }

/* ###--------------------------------------------------------------### */
/* function	: mips_print						*/
/* description	: print one or several lines of the rom content. the	*/
/*		  global variable 'word size' defines the size of the	*/
/*		  rom line in bytes.					*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void mips_print (byte_nbr)

int byte_nbr;

  {
  unsigned int  i    ;
  unsigned int  j    ;
  unsigned long adr  ;
  unsigned long mask ;
  char          binadr [36];

  if (MPS_WRTFIL == NULL)
    {
    mips_error (6, NULL);
    exit (1);
    }
  else
    {
    if (byte_nbr != 0)
      {
      if (MPS_DUMP == 'y')
        {
        adr = MPS_ADDRES;
        for (i=0 ; i<byte_nbr ; i++)
          fprintf (MPS_WRTFIL, "%.8x : %.2x\n", adr+i, MPS_BYTTAB [i]);
        }
      else
        {
        if (MPS_WRDSIZ == 4)
          adr = MPS_ADDRES >> 2;
        else
          adr = MPS_ADDRES;

        for (i=0 ; i<byte_nbr ; i += MPS_WRDSIZ)
          {
          fprintf (MPS_WRTFIL, "          X\"");

          for (j=0 ; j<MPS_WRDSIZ ; j++)
            fprintf (MPS_WRTFIL, "%.2x", MPS_BYTTAB [i+MPS_WRDSIZ-j-1]);

          mask = 0x00000001 << (MPS_ADRSIZ - 1);
          for (j=0 ; j<MPS_ADRSIZ ; j++)
            {
            if ((adr & mask) != 0)
              binadr [j] = '1';
            else
              binadr [j] = '0';
            mask = mask >> 1;
            }
          binadr [j] = '\0';

          fprintf (MPS_WRTFIL, "\" when B\"%s\",\n", binadr);
          adr++;
          }
        }
      }
    }
  }

/* ###--------------------------------------------------------------### */
/* function	: mips_symbol						*/
/* description	: print out the location (in text or data region) of a	*/
/*		  symbol						*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void mips_symbol (str)

char *str;
  {
  char *seg;

  if (MPS_ADRSPC == 'T')
    seg = "text";
  else
    seg = "data";

  fprintf (MPS_SYMFIL, "%s\t: location %x in %s segment\n", str,
           MPS_ADDRES, seg);
  }

/* ###--------------------------------------------------------------### */
/* function	: mips_strtobin						*/
/* description	: make a binary  ? from a string			*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static int mips_strtobin (str, tab)

char *str;
char *tab;

  {
  int  i  = 1;
  int  j  = 0;

  while (str [i] != '\0')
    {
    tab [j] = str [i];
    i++;
    if (str[i-1] == '\\')
      {
      if ((str [i] <= '7') && (str [i] >= '0'))
        {
        tab [j] = str [i] - '0';
        i++;
        if ((str [i] <= '7') && (str [i] >= '0'))
          {
          tab [j] = (tab [j] * 8) + (str [i] - '0');
          i++;
          if ((str [i] <= '7') && (str [i] >= '0'))
            tab [j] = (tab [j] * 8) + (str [i] - '0');
          }
        }
      else
        {
        if (str [i] == '"')
          {
          tab [j] = str [i];
          i++;
          }
        }
      }

    j++;
    }

  return (j-1);
  }

