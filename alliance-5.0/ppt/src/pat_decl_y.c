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

/* All symbols defined below should begin with pat_decl_y_ or PAT_DECL_Y_, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define PAT_DECL_Y_BISON 1

/* Bison version.  */
#define PAT_DECL_Y_BISON_VERSION "2.3"

/* Skeleton name.  */
#define PAT_DECL_Y_SKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define PAT_DECL_Y_PURE 0

/* Using locations.  */
#define PAT_DECL_Y_LSP_NEEDED 0



/* Tokens.  */
#ifndef PAT_DECL_Y_TOKENTYPE
# define PAT_DECL_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum pat_decl_y_tokentype {
     _GTSym = 258,
     _IN = 259,
     _INOUT = 260,
     _LESym = 261,
     _LTSym = 262,
     _OUT = 263,
     AbstractLit = 264,
     BitStringLit = 265,
     BEGIN_ = 266,
     Colon = 267,
     Comma = 268,
     Comment = 269,
     DOWNTO = 270,
     Dot = 271,
     END_ = 272,
     FS = 273,
     Format = 274,
     INSPECT = 275,
     Identifier = 276,
     LeftParen = 277,
     Literal = 278,
     NS = 279,
     MS = 280,
     PS = 281,
     Plus = 282,
     REGISTER = 283,
     RightParen = 284,
     SAVE = 285,
     SIGNAL = 286,
     Semicolons = 287,
     SPY = 288,
     TO = 289,
     TRACE = 290,
     US = 291,
     UnknownChar = 292
   };
#endif
/* Tokens.  */
#define _GTSym 258
#define _IN 259
#define _INOUT 260
#define _LESym 261
#define _LTSym 262
#define _OUT 263
#define AbstractLit 264
#define BitStringLit 265
#define BEGIN_ 266
#define Colon 267
#define Comma 268
#define Comment 269
#define DOWNTO 270
#define Dot 271
#define END_ 272
#define FS 273
#define Format 274
#define INSPECT 275
#define Identifier 276
#define LeftParen 277
#define Literal 278
#define NS 279
#define MS 280
#define PS 281
#define Plus 282
#define REGISTER 283
#define RightParen 284
#define SAVE 285
#define SIGNAL 286
#define Semicolons 287
#define SPY 288
#define TO 289
#define TRACE 290
#define US 291
#define UnknownChar 292




/* Copy the first part of user declarations.  */
#line 32 "../../../src/ppt/src/pat_decl_y.y"


#include <stdio.h>
#include <string.h>
#include "mut.h"
#include "pat.h"
#include "ppt.h"
#include "pat_defs.h"
#include "pat_type.h"
#include "pat_decl.h"

/* ###--------------------------------------------------------------### */
/* function	: pat_decl_y_error						*/
/* description	: print an error message (errors detected by yacc)	*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

void pat_decl_y_error (str)

char *str;
  {
  ERR_FLG += pat_error (99, str, ' ', PAT_LINNUM);
  }

/* ###--------------------------------------------------------------### */
/* function	: addiol						*/
/* description	: add a list of PAIOL structure at the top of the list	*/
/* called func.	: pat_addpaiol						*/
/* ###--------------------------------------------------------------### */

static struct paiol *addiol (lastiol, gname, format, mode, blank, flag)

struct paiol *lastiol;
struct array  gname  ;
char          format ;
char          mode   ;
short         blank  ;
char          flag   ;

  {
  struct paiol *ptiol         = lastiol;
  char          extname [100] ;
  short         i             ;
  short         inc           = 1;

  if (gname.left == -1)
    {
    ptiol       = pat_addpaiol (ptiol, gname.ident, format, mode, blank);
    ptiol->FLAG = flag;
    }
  else
    {
    if (gname.left >= gname.right)
      inc = -1;

    for (i=gname.left ; i!=(gname.right+inc) ; i+=inc)
      {
      sprintf (extname, "%s %d", gname.ident, i);
      ptiol       = pat_addpaiol (ptiol, extname, format, mode, blank);
      ptiol->FLAG = flag;
      }
    }

  return (ptiol);
  }

/* ###--------------------------------------------------------------### */
/* function	: pshtab						*/
/* description	: push a name on the TAB stack to build a virtual array	*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void pshtab (gname)

struct array gname;

  {
  if (TAB_IDX > 256)
    ERR_FLG += pat_error (6, NULL, ' ', PAT_LINNUM);
  else
    {
    TAB [TAB_IDX] = gname;
    TAB_IDX++;
    }
  }

/* ###--------------------------------------------------------------### */
/* function	: pshnam						*/
/* description	: push a name on the NAMTAB stack to build a		*/
/*		  hierarchical name					*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void pshnam (str)

char *str;

  {
  if (NAM_IDX > 30)
    ERR_FLG += pat_error (14, NULL, ' ', PAT_LINNUM);
  else
    {
    NAMTAB [NAM_IDX] = str;
    NAM_IDX++;
    }
  }

/* ###--------------------------------------------------------------### */
/* function	: initab						*/
/* description	: create a new dictionary				*/
/* called func.	: mbkalloc						*/
/* ###--------------------------------------------------------------### */

static struct entry **initab ()

  {
  struct entry **head;
  int            i;

  head = (struct entry **) mbkalloc (sizeof(struct entry *) * PAT_HSZDFN);

  for (i=0 ; i<PAT_HSZDFN ; i++)
    head[i] = NULL;

  return (head);
  }

/* ###--------------------------------------------------------------### */
/* function	: addent						*/
/* description	: add a new entry in a dictionary			*/
/* called func.	: mbkaloc						*/
/* ###--------------------------------------------------------------### */

static struct entry *addent (head, key)

struct entry *head;
char         *key;

  {
  struct entry *entry;
  int           i;

  if (ENTRY_HEAD == NULL)
    {
    ENTRY_HEAD = (struct entry *) mbkalloc (sizeof(struct entry) * PAT_ALODFN);

    entry = ENTRY_HEAD;
    for (i=1 ; i<PAT_ALODFN ; i++)
      {
      entry->next = entry + 1;
      entry++;
      }
    entry->next = NULL;
    }

  entry       = ENTRY_HEAD;
  ENTRY_HEAD  = ENTRY_HEAD->next;

  entry->next     = head;

  entry->fd0_val  = 0;
  entry->fd1_val  = 0;
  entry->pt0_val  = 0;
  entry->pt1_val  = 0;

  entry->key      = key;

  return (entry);
  }

/* ###--------------------------------------------------------------### */
/* function	: addtab						*/
/* description	: add a new information into a dictionary. If the key	*/
/*		  doesn't exist create a new entry			*/
/* called func.	: addent						*/
/* ###--------------------------------------------------------------### */

static void addtab (head, key_str, field, valu)

struct entry **head   ;
char          *key_str;
int            field  ;
int            valu   ;

  {
  int           found    = 0;
  int           index    ;
  struct entry *entry_pnt;

  index     = ((unsigned long) key_str) % PAT_HSZDFN;
  entry_pnt = head [index];

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
    head [index] = addent (head [index], key_str);
    entry_pnt    = head [index];
    }

  switch (field)
    {
    case 0 :
      entry_pnt->fd0_val = valu; break;
    case 1 :
      entry_pnt->fd1_val = valu; break;
    case 6 :
      entry_pnt->pt0_val = valu; break;
    case 7 :
      entry_pnt->pt1_val = valu; break;
    }
  }

/* ###--------------------------------------------------------------### */
/* function	: chktab						*/
/* description	: extract an information from a dictionary. Return	*/
/*		  0 if the information has not been found.		*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static int chktab (head, key_str, field)

struct entry **head   ;
char          *key_str;
int            field  ;

  {
  int           found = 0;
  int           valu  = 0;
  struct entry *entry_pnt;

  entry_pnt = head [((unsigned long)key_str) % PAT_HSZDFN];

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
    switch (field)
      {
      case 0 :
        valu = entry_pnt->fd0_val; break;
      case 1 :
        valu = entry_pnt->fd1_val; break;
      case 6 :
        valu = entry_pnt->pt0_val; break;
      case 7 :
        valu = entry_pnt->pt1_val; break;
      }
    }

  return (valu);
  }

/* ###--------------------------------------------------------------### */
/* function	: fretab						*/
/* description	: remove entirely a dictionary				*/
/* called func.	: mbkfree						*/
/* ###--------------------------------------------------------------### */

static void fretab (pt_hash)

struct entry **pt_hash;
  {
  struct entry *pt_entry;
  int           i       ;

  if (pt_hash != NULL)
    {
    for (i=0 ; i<PAT_HSZDFN ; i++)
      {
      if ((pt_entry = pt_hash[i]) != NULL)
        {
        while (pt_entry->next != NULL)
          pt_entry = pt_entry->next;

        pt_entry->next = ENTRY_HEAD ;
        ENTRY_HEAD     = pt_hash [i];
        }
      }
    mbkfree (pt_hash);
    }
  }

/* ###--------------------------------------------------------------### */
/* function	: pat_declpat						*/
/* description	: parse a file in pat format and return a PASEQ		*/
/* called func.	: pat_decl_y_parse			 			*/
/* ###--------------------------------------------------------------### */

struct paseq *pat_declpat (fp, ptseq)

FILE          *fp    ;
struct paseq  *ptseq ;

  {
  extern FILE *pat_decl_y_in     ;
  static int   call_nbr = 0;

  PAT_SEQPNT = ptseq;
  pat_decl_y_in        = fp;

  PAT_INSPNT = NULL;
  PAT_COMPNT = NULL;
  PAT_GRPPNT = NULL;
  PAT_IOLPNT = NULL;
  PAT_LINNUM = 1;
  STT_NBR    = 0;
  DCL_NBR    = 0;
  ERR_FLG    = 0;
  TAB_IDX    = 0;
  NAM_IDX    = 0;

  HSHTAB             = initab ();

  PAT_SEQPNT         = pat_addpaseq (PAT_SEQPNT);
  PAT_SEQPNT->FLAGS |= PAT_SEQ__ZERODELAY;

  if (call_nbr != 0)
    pat_decl_y_restart (pat_decl_y_in);

  pat_decl_y_parse ();
  call_nbr++;
  
  PAT_SEQPNT->PAINS   = (struct pains *) reverse ((struct chain *)PAT_INSPNT);
  PAT_SEQPNT->DECCOM  = (struct pacom *) reverse ((struct chain *)PAT_COMPNT);
  PAT_SEQPNT->PAGRP   = (struct pagrp *) reverse ((struct chain *)PAT_GRPPNT);
  PAT_IOLPNT          = (struct paiol *) reverse ((struct chain *)PAT_IOLPNT);
  PAT_SEQPNT->PAIOL   = pat_crtpaiol (PAT_IOLPNT);
  PAT_SEQPNT->FLAGS  |= PAT_SEQ__IOLARRAY;
  PAT_SEQPNT->LINENO  = PAT_LINNUM ;
  PAT_SEQPNT->IOLNBR  = DCL_NBR;

  if (ERR_FLG == 0)
    PAT_SEQPNT->ERRFLG = 0;
  else
    PAT_SEQPNT->ERRFLG = 1;

  pat_frepaiol (PAT_IOLPNT);
  fretab (HSHTAB);

  return (PAT_SEQPNT);
  }



/* Enabling traces.  */
#ifndef PAT_DECL_Y_DEBUG
# define PAT_DECL_Y_DEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef PAT_DECL_Y_ERROR_VERBOSE
# undef PAT_DECL_Y_ERROR_VERBOSE
# define PAT_DECL_Y_ERROR_VERBOSE 1
#else
# define PAT_DECL_Y_ERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef PAT_DECL_Y_TOKEN_TABLE
# define PAT_DECL_Y_TOKEN_TABLE 0
#endif

#if ! defined PAT_DECL_Y_STYPE && ! defined PAT_DECL_Y_STYPE_IS_DECLARED
typedef union PAT_DECL_Y_STYPE
#line 394 "../../../src/ppt/src/pat_decl_y.y"
{
  int           valu;
  float         fval;
  char          immd;
  char         *text;
  struct array  arra;
  struct label  labe;
  }
/* Line 187 of yacc.c.  */
#line 540 "y.tab.c"
	PAT_DECL_Y_STYPE;
# define pat_decl_y_stype PAT_DECL_Y_STYPE /* obsolescent; will be withdrawn */
# define PAT_DECL_Y_STYPE_IS_DECLARED 1
# define PAT_DECL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 553 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef PAT_DECL_Y_TYPE_UINT8
typedef PAT_DECL_Y_TYPE_UINT8 pat_decl_y_type_uint8;
#else
typedef unsigned char pat_decl_y_type_uint8;
#endif

#ifdef PAT_DECL_Y_TYPE_INT8
typedef PAT_DECL_Y_TYPE_INT8 pat_decl_y_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char pat_decl_y_type_int8;
#else
typedef short int pat_decl_y_type_int8;
#endif

#ifdef PAT_DECL_Y_TYPE_UINT16
typedef PAT_DECL_Y_TYPE_UINT16 pat_decl_y_type_uint16;
#else
typedef unsigned short int pat_decl_y_type_uint16;
#endif

#ifdef PAT_DECL_Y_TYPE_INT16
typedef PAT_DECL_Y_TYPE_INT16 pat_decl_y_type_int16;
#else
typedef short int pat_decl_y_type_int16;
#endif

#ifndef PAT_DECL_Y_SIZE_T
# ifdef __SIZE_TYPE__
#  define PAT_DECL_Y_SIZE_T __SIZE_TYPE__
# elif defined size_t
#  define PAT_DECL_Y_SIZE_T size_t
# elif ! defined PAT_DECL_Y_SIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define PAT_DECL_Y_SIZE_T size_t
# else
#  define PAT_DECL_Y_SIZE_T unsigned int
# endif
#endif

#define PAT_DECL_Y_SIZE_MAXIMUM ((PAT_DECL_Y_SIZE_T) -1)

#ifndef PAT_DECL_Y__
# if PAT_DECL_Y_ENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define PAT_DECL_Y__(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef PAT_DECL_Y__
#  define PAT_DECL_Y__(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define PAT_DECL_Y_USE(e) ((void) (e))
#else
# define PAT_DECL_Y_USE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define PAT_DECL_Y_ID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
PAT_DECL_Y_ID (int i)
#else
static int
PAT_DECL_Y_ID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined pat_decl_y_overflow || PAT_DECL_Y_ERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef PAT_DECL_Y_STACK_USE_ALLOCA
#  if PAT_DECL_Y_STACK_USE_ALLOCA
#   ifdef __GNUC__
#    define PAT_DECL_Y_STACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define PAT_DECL_Y_STACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define PAT_DECL_Y_STACK_ALLOC alloca
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

# ifdef PAT_DECL_Y_STACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define PAT_DECL_Y_STACK_FREE(Ptr) do { /* empty */; } while (PAT_DECL_Y_ID (0))
#  ifndef PAT_DECL_Y_STACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define PAT_DECL_Y_STACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define PAT_DECL_Y_STACK_ALLOC PAT_DECL_Y_MALLOC
#  define PAT_DECL_Y_STACK_FREE PAT_DECL_Y_FREE
#  ifndef PAT_DECL_Y_STACK_ALLOC_MAXIMUM
#   define PAT_DECL_Y_STACK_ALLOC_MAXIMUM PAT_DECL_Y_SIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined PAT_DECL_Y_MALLOC || defined malloc) \
	     && (defined PAT_DECL_Y_FREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef PAT_DECL_Y_MALLOC
#   define PAT_DECL_Y_MALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (PAT_DECL_Y_SIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef PAT_DECL_Y_FREE
#   define PAT_DECL_Y_FREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined pat_decl_y_overflow || PAT_DECL_Y_ERROR_VERBOSE */


#if (! defined pat_decl_y_overflow \
     && (! defined __cplusplus \
	 || (defined PAT_DECL_Y_STYPE_IS_TRIVIAL && PAT_DECL_Y_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union pat_decl_y_alloc
{
  pat_decl_y_type_int16 pat_decl_y_ss;
  PAT_DECL_Y_STYPE pat_decl_y_vs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define PAT_DECL_Y_STACK_GAP_MAXIMUM (sizeof (union pat_decl_y_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define PAT_DECL_Y_STACK_BYTES(N) \
     ((N) * (sizeof (pat_decl_y_type_int16) + sizeof (PAT_DECL_Y_STYPE)) \
      + PAT_DECL_Y_STACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef PAT_DECL_Y_COPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define PAT_DECL_Y_COPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define PAT_DECL_Y_COPY(To, From, Count)		\
      do					\
	{					\
	  PAT_DECL_Y_SIZE_T pat_decl_y_i;				\
	  for (pat_decl_y_i = 0; pat_decl_y_i < (Count); pat_decl_y_i++)	\
	    (To)[pat_decl_y_i] = (From)[pat_decl_y_i];		\
	}					\
      while (PAT_DECL_Y_ID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables PAT_DECL_Y_SIZE and PAT_DECL_Y_STACKSIZE give the old and new number of
   elements in the stack, and PAT_DECL_Y_PTR gives the new location of the
   stack.  Advance PAT_DECL_Y_PTR to a properly aligned location for the next
   stack.  */
# define PAT_DECL_Y_STACK_RELOCATE(Stack)					\
    do									\
      {									\
	PAT_DECL_Y_SIZE_T pat_decl_y_newbytes;						\
	PAT_DECL_Y_COPY (&pat_decl_y_ptr->Stack, Stack, pat_decl_y_size);				\
	Stack = &pat_decl_y_ptr->Stack;						\
	pat_decl_y_newbytes = pat_decl_y_stacksize * sizeof (*Stack) + PAT_DECL_Y_STACK_GAP_MAXIMUM; \
	pat_decl_y_ptr += pat_decl_y_newbytes / sizeof (*pat_decl_y_ptr);				\
      }									\
    while (PAT_DECL_Y_ID (0))

#endif

/* PAT_DECL_Y_FINAL -- State number of the termination state.  */
#define PAT_DECL_Y_FINAL  24
/* PAT_DECL_Y_LAST -- Last index in PAT_DECL_Y_TABLE.  */
#define PAT_DECL_Y_LAST   51

/* PAT_DECL_Y_NTOKENS -- Number of terminals.  */
#define PAT_DECL_Y_NTOKENS  38
/* PAT_DECL_Y_NNTS -- Number of nonterminals.  */
#define PAT_DECL_Y_NNTS  25
/* PAT_DECL_Y_NRULES -- Number of rules.  */
#define PAT_DECL_Y_NRULES  42
/* PAT_DECL_Y_NRULES -- Number of states.  */
#define PAT_DECL_Y_NSTATES  64

/* PAT_DECL_Y_TRANSLATE(PAT_DECL_Y_LEX) -- Bison symbol number corresponding to PAT_DECL_Y_LEX.  */
#define PAT_DECL_Y_UNDEFTOK  2
#define PAT_DECL_Y_MAXUTOK   292

#define PAT_DECL_Y_TRANSLATE(PAT_DECL_Y_X)						\
  ((unsigned int) (PAT_DECL_Y_X) <= PAT_DECL_Y_MAXUTOK ? pat_decl_y_translate[PAT_DECL_Y_X] : PAT_DECL_Y_UNDEFTOK)

/* PAT_DECL_Y_TRANSLATE[PAT_DECL_Y_LEX] -- Bison symbol number corresponding to PAT_DECL_Y_LEX.  */
static const pat_decl_y_type_uint8 pat_decl_y_translate[] =
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
      35,    36,    37
};

#if PAT_DECL_Y_DEBUG
/* PAT_DECL_Y_PRHS[PAT_DECL_Y_N] -- Index of the first RHS symbol of rule number PAT_DECL_Y_N in
   PAT_DECL_Y_RHS.  */
static const pat_decl_y_type_uint8 pat_decl_y_prhs[] =
{
       0,     0,     3,     6,     8,    10,    13,    15,    17,    19,
      22,    27,    29,    31,    33,    35,    37,    44,    54,    55,
      57,    59,    63,    65,    67,    69,    71,    76,    83,    86,
      87,    91,    93,    95,    97,    99,   101,   103,   105,   107,
     108,   110,   111
};

/* PAT_DECL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const pat_decl_y_type_int8 pat_decl_y_rhs[] =
{
      39,     0,    -1,    40,    11,    -1,    41,    -1,    42,    -1,
      41,    42,    -1,    47,    -1,    43,    -1,    46,    -1,     1,
      60,    -1,    20,    44,    45,    60,    -1,    56,    -1,    56,
      -1,    14,    -1,    48,    -1,    49,    -1,    59,    52,    50,
      61,    62,    60,    -1,    59,    56,    22,    51,    29,    50,
      61,    62,    60,    -1,    -1,    19,    -1,    52,    -1,    51,
      13,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    56,    22,     9,    29,    -1,    56,    22,     9,    58,
       9,    29,    -1,    21,    57,    -1,    -1,    57,    16,    21,
      -1,    34,    -1,    15,    -1,     4,    -1,     8,    -1,     5,
      -1,    31,    -1,    28,    -1,    32,    -1,    -1,    33,    -1,
      -1,    35,    -1
};

/* PAT_DECL_Y_RLINE[PAT_DECL_Y_N] -- source line where rule number PAT_DECL_Y_N was defined.  */
static const pat_decl_y_type_uint16 pat_decl_y_rline[] =
{
       0,   457,   457,   465,   469,   470,   475,   476,   477,   478,
     483,   491,   496,   501,   509,   510,   514,   558,   606,   607,
     612,   614,   621,   623,   625,   630,   639,   651,   665,   682,
     684,   691,   692,   696,   698,   700,   702,   704,   709,   720,
     721,   727,   728
};
#endif

#if PAT_DECL_Y_DEBUG || PAT_DECL_Y_ERROR_VERBOSE || PAT_DECL_Y_TOKEN_TABLE
/* PAT_DECL_Y_TNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at PAT_DECL_Y_NTOKENS, nonterminals.  */
static const char *const pat_decl_y_tname[] =
{
  "$end", "error", "$undefined", "_GTSym", "_IN", "_INOUT", "_LESym",
  "_LTSym", "_OUT", "AbstractLit", "BitStringLit", "BEGIN_", "Colon",
  "Comma", "Comment", "DOWNTO", "Dot", "END_", "FS", "Format", "INSPECT",
  "Identifier", "LeftParen", "Literal", "NS", "MS", "PS", "Plus",
  "REGISTER", "RightParen", "SAVE", "SIGNAL", "Semicolons", "SPY", "TO",
  "TRACE", "US", "UnknownChar", "$accept", "pat_format_file",
  "declarative_block", "..declaration_item..", "declaration_item",
  "instance_inspection", "instance_name", "file_name", "other_statement",
  "input_output_declaration", "signal_declaration", "group_declaration",
  ".Format.", "...name..", "name", "simple_name", "indexed_name",
  "slice_name", "Identifier...Identifier..", "...Identifier..",
  "direction", "mode", "Semicolons_ERR", ".SPY.", ".TRACE.", 0
};
#endif

# ifdef PAT_DECL_Y_PRINT
/* PAT_DECL_Y_TOKNUM[PAT_DECL_Y_LEX-NUM] -- Internal token number corresponding to
   token PAT_DECL_Y_LEX-NUM.  */
static const pat_decl_y_type_uint16 pat_decl_y_toknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

/* PAT_DECL_Y_R1[PAT_DECL_Y_N] -- Symbol number of symbol that rule PAT_DECL_Y_N derives.  */
static const pat_decl_y_type_uint8 pat_decl_y_r1[] =
{
       0,    38,    39,    40,    41,    41,    42,    42,    42,    42,
      43,    44,    45,    46,    47,    47,    48,    49,    50,    50,
      51,    51,    52,    52,    52,    53,    54,    55,    56,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    60,    61,
      61,    62,    62
};

/* PAT_DECL_Y_R2[PAT_DECL_Y_N] -- Number of symbols composing right hand side of rule PAT_DECL_Y_N.  */
static const pat_decl_y_type_uint8 pat_decl_y_r2[] =
{
       0,     2,     2,     1,     1,     2,     1,     1,     1,     2,
       4,     1,     1,     1,     1,     1,     6,     9,     0,     1,
       1,     3,     1,     1,     1,     1,     4,     6,     2,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1
};

/* PAT_DECL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when PAT_DECL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const pat_decl_y_type_uint8 pat_decl_y_defact[] =
{
       0,     0,    33,    35,    34,    13,     0,    37,    36,     0,
       0,     0,     4,     7,     8,     6,    14,    15,     0,    38,
       9,    29,     0,    11,     1,     2,     5,    18,    22,    23,
      24,    25,    28,     0,    12,    19,    39,     0,     0,    10,
      40,    41,     0,     0,    20,    25,    30,    42,     0,    32,
      26,    31,     0,     0,    18,     0,    16,     0,    21,    39,
      27,    41,     0,    17
};

/* PAT_DECL_Y_DEFGOTO[NTERM-NUM].  */
static const pat_decl_y_type_int8 pat_decl_y_defgoto[] =
{
      -1,     9,    10,    11,    12,    13,    22,    33,    14,    15,
      16,    17,    36,    43,    27,    28,    29,    30,    45,    32,
      52,    18,    20,    41,    48
};

/* PAT_DECL_Y_PACT[STATE-NUM] -- Index in PAT_DECL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define PAT_DECL_Y_PACT_NINF -26
static const pat_decl_y_type_int8 pat_decl_y_pact[] =
{
       1,   -21,   -26,   -26,   -26,   -26,    -7,   -26,   -26,    18,
      13,    -1,   -26,   -26,   -26,   -26,   -26,   -26,    -7,   -26,
     -26,   -26,    -7,   -26,   -26,   -26,   -26,     6,   -26,   -26,
     -26,    11,    19,   -21,   -26,   -26,     8,     7,    21,   -26,
     -26,     4,    -3,   -12,   -26,    22,   -26,   -26,   -21,   -26,
     -26,   -26,    31,    -7,     6,    34,   -26,    17,   -26,     8,
     -26,     4,   -21,   -26
};

/* PAT_DECL_Y_PGOTO[NTERM-NUM].  */
static const pat_decl_y_type_int8 pat_decl_y_pgoto[] =
{
     -26,   -26,   -26,   -26,    36,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,    -9,   -26,   -17,   -26,   -26,   -26,    16,   -26,
     -26,   -26,   -25,   -11,   -10
};

/* PAT_DECL_Y_TABLE[PAT_DECL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what PAT_DECL_Y_DEFACT says.
   If PAT_DECL_Y_TABLE_NINF, syntax error.  */
#define PAT_DECL_Y_TABLE_NINF -4
static const pat_decl_y_type_int8 pat_decl_y_table[] =
{
       1,    53,     1,     2,     3,     2,     3,     4,    39,     4,
      -3,    19,    49,     5,    21,     5,    42,    54,    24,     6,
      44,     6,    23,    56,    25,    35,    50,     7,    21,     7,
       8,    51,     8,    37,    31,    38,    58,    63,    34,    47,
      57,    40,    46,    42,    55,    59,    60,    26,    61,     0,
       0,    62
};

static const pat_decl_y_type_int8 pat_decl_y_check[] =
{
       1,    13,     1,     4,     5,     4,     5,     8,    33,     8,
      11,    32,    15,    14,    21,    14,     9,    29,     0,    20,
      37,    20,     6,    48,    11,    19,    29,    28,    21,    28,
      31,    34,    31,    22,    18,    16,    53,    62,    22,    35,
       9,    33,    21,     9,    22,    54,    29,    11,    59,    -1,
      -1,    61
};

/* PAT_DECL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const pat_decl_y_type_uint8 pat_decl_y_stos[] =
{
       0,     1,     4,     5,     8,    14,    20,    28,    31,    39,
      40,    41,    42,    43,    46,    47,    48,    49,    59,    32,
      60,    21,    44,    56,     0,    11,    42,    52,    53,    54,
      55,    56,    57,    45,    56,    19,    50,    22,    16,    60,
      33,    61,     9,    51,    52,    56,    21,    35,    62,    15,
      29,    34,    58,    13,    29,    22,    60,     9,    52,    50,
      29,    61,    62,    60
};

#define pat_decl_y_errok		(pat_decl_y_errstatus = 0)
#define pat_decl_y_clearin	(pat_decl_y_char = PAT_DECL_Y_EMPTY)
#define PAT_DECL_Y_EMPTY		(-2)
#define PAT_DECL_Y_EOF		0

#define PAT_DECL_Y_ACCEPT	goto pat_decl_y_acceptlab
#define PAT_DECL_Y_ABORT		goto pat_decl_y_abortlab
#define PAT_DECL_Y_ERROR		goto pat_decl_y_errorlab


/* Like PAT_DECL_Y_ERROR except do call pat_decl_y_error.  This remains here temporarily
   to ease the transition to the new meaning of PAT_DECL_Y_ERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define PAT_DECL_Y_FAIL		goto pat_decl_y_errlab

#define PAT_DECL_Y_RECOVERING()  (!!pat_decl_y_errstatus)

#define PAT_DECL_Y_BACKUP(Token, Value)					\
do								\
  if (pat_decl_y_char == PAT_DECL_Y_EMPTY && pat_decl_y_len == 1)				\
    {								\
      pat_decl_y_char = (Token);						\
      pat_decl_y_lval = (Value);						\
      pat_decl_y_token = PAT_DECL_Y_TRANSLATE (pat_decl_y_char);				\
      PAT_DECL_Y_POPSTACK (1);						\
      goto pat_decl_y_backup;						\
    }								\
  else								\
    {								\
      pat_decl_y_error (PAT_DECL_Y__("syntax error: cannot back up")); \
      PAT_DECL_Y_ERROR;							\
    }								\
while (PAT_DECL_Y_ID (0))


#define PAT_DECL_Y_TERROR	1
#define PAT_DECL_Y_ERRCODE	256


/* PAT_DECL_Y_LLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define PAT_DECL_Y_RHSLOC(Rhs, K) ((Rhs)[K])
#ifndef PAT_DECL_Y_LLOC_DEFAULT
# define PAT_DECL_Y_LLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (PAT_DECL_Y_ID (N))                                                    \
	{								\
	  (Current).first_line   = PAT_DECL_Y_RHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = PAT_DECL_Y_RHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = PAT_DECL_Y_RHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = PAT_DECL_Y_RHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    PAT_DECL_Y_RHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    PAT_DECL_Y_RHSLOC (Rhs, 0).last_column;				\
	}								\
    while (PAT_DECL_Y_ID (0))
#endif


/* PAT_DECL_Y__LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef PAT_DECL_Y__LOCATION_PRINT
# if PAT_DECL_Y_LTYPE_IS_TRIVIAL
#  define PAT_DECL_Y__LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define PAT_DECL_Y__LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* PAT_DECL_Y_LEX -- calling `pat_decl_y_lex' with the right arguments.  */

#ifdef PAT_DECL_Y_LEX_PARAM
# define PAT_DECL_Y_LEX pat_decl_y_lex (PAT_DECL_Y_LEX_PARAM)
#else
# define PAT_DECL_Y_LEX pat_decl_y_lex ()
#endif

/* Enable debugging if requested.  */
#if PAT_DECL_Y_DEBUG

# ifndef PAT_DECL_Y_FPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define PAT_DECL_Y_FPRINTF fprintf
# endif

# define PAT_DECL_Y_DPRINTF(Args)			\
do {						\
  if (pat_decl_y_debug)					\
    PAT_DECL_Y_FPRINTF Args;				\
} while (PAT_DECL_Y_ID (0))

# define PAT_DECL_Y__SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (pat_decl_y_debug)								  \
    {									  \
      PAT_DECL_Y_FPRINTF (stderr, "%s ", Title);					  \
      pat_decl_y__symbol_print (stderr,						  \
		  Type, Value); \
      PAT_DECL_Y_FPRINTF (stderr, "\n");						  \
    }									  \
} while (PAT_DECL_Y_ID (0))


/*--------------------------------.
| Print this symbol on PAT_DECL_Y_OUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
pat_decl_y__symbol_value_print (FILE *pat_decl_y_output, int pat_decl_y_type, PAT_DECL_Y_STYPE const * const pat_decl_y_valuep)
#else
static void
pat_decl_y__symbol_value_print (pat_decl_y_output, pat_decl_y_type, pat_decl_y_valuep)
    FILE *pat_decl_y_output;
    int pat_decl_y_type;
    PAT_DECL_Y_STYPE const * const pat_decl_y_valuep;
#endif
{
  if (!pat_decl_y_valuep)
    return;
# ifdef PAT_DECL_Y_PRINT
  if (pat_decl_y_type < PAT_DECL_Y_NTOKENS)
    PAT_DECL_Y_PRINT (pat_decl_y_output, pat_decl_y_toknum[pat_decl_y_type], *pat_decl_y_valuep);
# else
  PAT_DECL_Y_USE (pat_decl_y_output);
# endif
  switch (pat_decl_y_type)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on PAT_DECL_Y_OUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
pat_decl_y__symbol_print (FILE *pat_decl_y_output, int pat_decl_y_type, PAT_DECL_Y_STYPE const * const pat_decl_y_valuep)
#else
static void
pat_decl_y__symbol_print (pat_decl_y_output, pat_decl_y_type, pat_decl_y_valuep)
    FILE *pat_decl_y_output;
    int pat_decl_y_type;
    PAT_DECL_Y_STYPE const * const pat_decl_y_valuep;
#endif
{
  if (pat_decl_y_type < PAT_DECL_Y_NTOKENS)
    PAT_DECL_Y_FPRINTF (pat_decl_y_output, "token %s (", pat_decl_y_tname[pat_decl_y_type]);
  else
    PAT_DECL_Y_FPRINTF (pat_decl_y_output, "nterm %s (", pat_decl_y_tname[pat_decl_y_type]);

  pat_decl_y__symbol_value_print (pat_decl_y_output, pat_decl_y_type, pat_decl_y_valuep);
  PAT_DECL_Y_FPRINTF (pat_decl_y_output, ")");
}

/*------------------------------------------------------------------.
| pat_decl_y__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
pat_decl_y__stack_print (pat_decl_y_type_int16 *bottom, pat_decl_y_type_int16 *top)
#else
static void
pat_decl_y__stack_print (bottom, top)
    pat_decl_y_type_int16 *bottom;
    pat_decl_y_type_int16 *top;
#endif
{
  PAT_DECL_Y_FPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    PAT_DECL_Y_FPRINTF (stderr, " %d", *bottom);
  PAT_DECL_Y_FPRINTF (stderr, "\n");
}

# define PAT_DECL_Y__STACK_PRINT(Bottom, Top)				\
do {								\
  if (pat_decl_y_debug)							\
    pat_decl_y__stack_print ((Bottom), (Top));				\
} while (PAT_DECL_Y_ID (0))


/*------------------------------------------------.
| Report that the PAT_DECL_Y_RULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
pat_decl_y__reduce_print (PAT_DECL_Y_STYPE *pat_decl_y_vsp, int pat_decl_y_rule)
#else
static void
pat_decl_y__reduce_print (pat_decl_y_vsp, pat_decl_y_rule)
    PAT_DECL_Y_STYPE *pat_decl_y_vsp;
    int pat_decl_y_rule;
#endif
{
  int pat_decl_y_nrhs = pat_decl_y_r2[pat_decl_y_rule];
  int pat_decl_y_i;
  unsigned long int pat_decl_y_lno = pat_decl_y_rline[pat_decl_y_rule];
  PAT_DECL_Y_FPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     pat_decl_y_rule - 1, pat_decl_y_lno);
  /* The symbols being reduced.  */
  for (pat_decl_y_i = 0; pat_decl_y_i < pat_decl_y_nrhs; pat_decl_y_i++)
    {
      fprintf (stderr, "   $%d = ", pat_decl_y_i + 1);
      pat_decl_y__symbol_print (stderr, pat_decl_y_rhs[pat_decl_y_prhs[pat_decl_y_rule] + pat_decl_y_i],
		       &(pat_decl_y_vsp[(pat_decl_y_i + 1) - (pat_decl_y_nrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define PAT_DECL_Y__REDUCE_PRINT(Rule)		\
do {					\
  if (pat_decl_y_debug)				\
    pat_decl_y__reduce_print (pat_decl_y_vsp, Rule); \
} while (PAT_DECL_Y_ID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int pat_decl_y_debug;
#else /* !PAT_DECL_Y_DEBUG */
# define PAT_DECL_Y_DPRINTF(Args)
# define PAT_DECL_Y__SYMBOL_PRINT(Title, Type, Value, Location)
# define PAT_DECL_Y__STACK_PRINT(Bottom, Top)
# define PAT_DECL_Y__REDUCE_PRINT(Rule)
#endif /* !PAT_DECL_Y_DEBUG */


/* PAT_DECL_Y_INITDEPTH -- initial size of the parser's stacks.  */
#ifndef	PAT_DECL_Y_INITDEPTH
# define PAT_DECL_Y_INITDEPTH 200
#endif

/* PAT_DECL_Y_MAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   PAT_DECL_Y_STACK_ALLOC_MAXIMUM < PAT_DECL_Y_STACK_BYTES (PAT_DECL_Y_MAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef PAT_DECL_Y_MAXDEPTH
# define PAT_DECL_Y_MAXDEPTH 10000
#endif



#if PAT_DECL_Y_ERROR_VERBOSE

# ifndef pat_decl_y_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define pat_decl_y_strlen strlen
#  else
/* Return the length of PAT_DECL_Y_STR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static PAT_DECL_Y_SIZE_T
pat_decl_y_strlen (const char *pat_decl_y_str)
#else
static PAT_DECL_Y_SIZE_T
pat_decl_y_strlen (pat_decl_y_str)
    const char *pat_decl_y_str;
#endif
{
  PAT_DECL_Y_SIZE_T pat_decl_y_len;
  for (pat_decl_y_len = 0; pat_decl_y_str[pat_decl_y_len]; pat_decl_y_len++)
    continue;
  return pat_decl_y_len;
}
#  endif
# endif

# ifndef pat_decl_y_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define pat_decl_y_stpcpy stpcpy
#  else
/* Copy PAT_DECL_Y_SRC to PAT_DECL_Y_DEST, returning the address of the terminating '\0' in
   PAT_DECL_Y_DEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
pat_decl_y_stpcpy (char *pat_decl_y_dest, const char *pat_decl_y_src)
#else
static char *
pat_decl_y_stpcpy (pat_decl_y_dest, pat_decl_y_src)
    char *pat_decl_y_dest;
    const char *pat_decl_y_src;
#endif
{
  char *pat_decl_y_d = pat_decl_y_dest;
  const char *pat_decl_y_s = pat_decl_y_src;

  while ((*pat_decl_y_d++ = *pat_decl_y_s++) != '\0')
    continue;

  return pat_decl_y_d - 1;
}
#  endif
# endif

# ifndef pat_decl_y_tnamerr
/* Copy to PAT_DECL_Y_RES the contents of PAT_DECL_Y_STR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for pat_decl_y_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  PAT_DECL_Y_STR is taken from pat_decl_y_tname.  If PAT_DECL_Y_RES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static PAT_DECL_Y_SIZE_T
pat_decl_y_tnamerr (char *pat_decl_y_res, const char *pat_decl_y_str)
{
  if (*pat_decl_y_str == '"')
    {
      PAT_DECL_Y_SIZE_T pat_decl_y_n = 0;
      char const *pat_decl_y_p = pat_decl_y_str;

      for (;;)
	switch (*++pat_decl_y_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++pat_decl_y_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (pat_decl_y_res)
	      pat_decl_y_res[pat_decl_y_n] = *pat_decl_y_p;
	    pat_decl_y_n++;
	    break;

	  case '"':
	    if (pat_decl_y_res)
	      pat_decl_y_res[pat_decl_y_n] = '\0';
	    return pat_decl_y_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! pat_decl_y_res)
    return pat_decl_y_strlen (pat_decl_y_str);

  return pat_decl_y_stpcpy (pat_decl_y_res, pat_decl_y_str) - pat_decl_y_res;
}
# endif

/* Copy into PAT_DECL_Y_RESULT an error message about the unexpected token
   PAT_DECL_Y_CHAR while in state PAT_DECL_Y_STATE.  Return the number of bytes copied,
   including the terminating null byte.  If PAT_DECL_Y_RESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return PAT_DECL_Y_SIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static PAT_DECL_Y_SIZE_T
pat_decl_y_syntax_error (char *pat_decl_y_result, int pat_decl_y_state, int pat_decl_y_char)
{
  int pat_decl_y_n = pat_decl_y_pact[pat_decl_y_state];

  if (! (PAT_DECL_Y_PACT_NINF < pat_decl_y_n && pat_decl_y_n <= PAT_DECL_Y_LAST))
    return 0;
  else
    {
      int pat_decl_y_type = PAT_DECL_Y_TRANSLATE (pat_decl_y_char);
      PAT_DECL_Y_SIZE_T pat_decl_y_size0 = pat_decl_y_tnamerr (0, pat_decl_y_tname[pat_decl_y_type]);
      PAT_DECL_Y_SIZE_T pat_decl_y_size = pat_decl_y_size0;
      PAT_DECL_Y_SIZE_T pat_decl_y_size1;
      int pat_decl_y_size_overflow = 0;
      enum { PAT_DECL_Y_ERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *pat_decl_y_arg[PAT_DECL_Y_ERROR_VERBOSE_ARGS_MAXIMUM];
      int pat_decl_y_x;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      PAT_DECL_Y__("syntax error, unexpected %s");
      PAT_DECL_Y__("syntax error, unexpected %s, expecting %s");
      PAT_DECL_Y__("syntax error, unexpected %s, expecting %s or %s");
      PAT_DECL_Y__("syntax error, unexpected %s, expecting %s or %s or %s");
      PAT_DECL_Y__("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *pat_decl_y_fmt;
      char const *pat_decl_y_f;
      static char const pat_decl_y_unexpected[] = "syntax error, unexpected %s";
      static char const pat_decl_y_expecting[] = ", expecting %s";
      static char const pat_decl_y_or[] = " or %s";
      char pat_decl_y_format[sizeof pat_decl_y_unexpected
		    + sizeof pat_decl_y_expecting - 1
		    + ((PAT_DECL_Y_ERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof pat_decl_y_or - 1))];
      char const *pat_decl_y_prefix = pat_decl_y_expecting;

      /* Start PAT_DECL_Y_X at -PAT_DECL_Y_N if negative to avoid negative indexes in
	 PAT_DECL_Y_CHECK.  */
      int pat_decl_y_xbegin = pat_decl_y_n < 0 ? -pat_decl_y_n : 0;

      /* Stay within bounds of both pat_decl_y_check and pat_decl_y_tname.  */
      int pat_decl_y_checklim = PAT_DECL_Y_LAST - pat_decl_y_n + 1;
      int pat_decl_y_xend = pat_decl_y_checklim < PAT_DECL_Y_NTOKENS ? pat_decl_y_checklim : PAT_DECL_Y_NTOKENS;
      int pat_decl_y_count = 1;

      pat_decl_y_arg[0] = pat_decl_y_tname[pat_decl_y_type];
      pat_decl_y_fmt = pat_decl_y_stpcpy (pat_decl_y_format, pat_decl_y_unexpected);

      for (pat_decl_y_x = pat_decl_y_xbegin; pat_decl_y_x < pat_decl_y_xend; ++pat_decl_y_x)
	if (pat_decl_y_check[pat_decl_y_x + pat_decl_y_n] == pat_decl_y_x && pat_decl_y_x != PAT_DECL_Y_TERROR)
	  {
	    if (pat_decl_y_count == PAT_DECL_Y_ERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		pat_decl_y_count = 1;
		pat_decl_y_size = pat_decl_y_size0;
		pat_decl_y_format[sizeof pat_decl_y_unexpected - 1] = '\0';
		break;
	      }
	    pat_decl_y_arg[pat_decl_y_count++] = pat_decl_y_tname[pat_decl_y_x];
	    pat_decl_y_size1 = pat_decl_y_size + pat_decl_y_tnamerr (0, pat_decl_y_tname[pat_decl_y_x]);
	    pat_decl_y_size_overflow |= (pat_decl_y_size1 < pat_decl_y_size);
	    pat_decl_y_size = pat_decl_y_size1;
	    pat_decl_y_fmt = pat_decl_y_stpcpy (pat_decl_y_fmt, pat_decl_y_prefix);
	    pat_decl_y_prefix = pat_decl_y_or;
	  }

      pat_decl_y_f = PAT_DECL_Y__(pat_decl_y_format);
      pat_decl_y_size1 = pat_decl_y_size + pat_decl_y_strlen (pat_decl_y_f);
      pat_decl_y_size_overflow |= (pat_decl_y_size1 < pat_decl_y_size);
      pat_decl_y_size = pat_decl_y_size1;

      if (pat_decl_y_size_overflow)
	return PAT_DECL_Y_SIZE_MAXIMUM;

      if (pat_decl_y_result)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *pat_decl_y_p = pat_decl_y_result;
	  int pat_decl_y_i = 0;
	  while ((*pat_decl_y_p = *pat_decl_y_f) != '\0')
	    {
	      if (*pat_decl_y_p == '%' && pat_decl_y_f[1] == 's' && pat_decl_y_i < pat_decl_y_count)
		{
		  pat_decl_y_p += pat_decl_y_tnamerr (pat_decl_y_p, pat_decl_y_arg[pat_decl_y_i++]);
		  pat_decl_y_f += 2;
		}
	      else
		{
		  pat_decl_y_p++;
		  pat_decl_y_f++;
		}
	    }
	}
      return pat_decl_y_size;
    }
}
#endif /* PAT_DECL_Y_ERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
pat_decl_y_destruct (const char *pat_decl_y_msg, int pat_decl_y_type, PAT_DECL_Y_STYPE *pat_decl_y_valuep)
#else
static void
pat_decl_y_destruct (pat_decl_y_msg, pat_decl_y_type, pat_decl_y_valuep)
    const char *pat_decl_y_msg;
    int pat_decl_y_type;
    PAT_DECL_Y_STYPE *pat_decl_y_valuep;
#endif
{
  PAT_DECL_Y_USE (pat_decl_y_valuep);

  if (!pat_decl_y_msg)
    pat_decl_y_msg = "Deleting";
  PAT_DECL_Y__SYMBOL_PRINT (pat_decl_y_msg, pat_decl_y_type, pat_decl_y_valuep, pat_decl_y_locationp);

  switch (pat_decl_y_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef PAT_DECL_Y_PARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int pat_decl_y_parse (void *PAT_DECL_Y_PARSE_PARAM);
#else
int pat_decl_y_parse ();
#endif
#else /* ! PAT_DECL_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int pat_decl_y_parse (void);
#else
int pat_decl_y_parse ();
#endif
#endif /* ! PAT_DECL_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
extern int pat_decl_y_char;

/* The semantic value of the look-ahead symbol.  */
extern PAT_DECL_Y_STYPE pat_decl_y_lval;

/* Number of syntax errors so far.  */
extern int pat_decl_y_nerrs;



/*----------.
| pat_decl_y_parse.  |
`----------*/

#ifdef PAT_DECL_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
pat_decl_y_parse (void *PAT_DECL_Y_PARSE_PARAM)
#else
int
pat_decl_y_parse (PAT_DECL_Y_PARSE_PARAM)
    void *PAT_DECL_Y_PARSE_PARAM;
#endif
#else /* ! PAT_DECL_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
pat_decl_y_parse (void)
#else
int
pat_decl_y_parse ()

#endif
#endif
{
  
  int pat_decl_y_state;
  int pat_decl_y_n;
  int pat_decl_y_result;
  /* Number of tokens to shift before error messages enabled.  */
  int pat_decl_y_errstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int pat_decl_y_token = 0;
#if PAT_DECL_Y_ERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char pat_decl_y_msgbuf[128];
  char *pat_decl_y_msg = pat_decl_y_msgbuf;
  PAT_DECL_Y_SIZE_T pat_decl_y_msg_alloc = sizeof pat_decl_y_msgbuf;
#endif

  /* Three stacks and their tools:
     `pat_decl_y_ss': related to states,
     `pat_decl_y_vs': related to semantic values,
     `pat_decl_y_ls': related to locations.

     Refer to the stacks thru separate pointers, to allow pat_decl_y_overflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  pat_decl_y_type_int16 pat_decl_y_ssa[PAT_DECL_Y_INITDEPTH];
  pat_decl_y_type_int16 *pat_decl_y_ss = pat_decl_y_ssa;
  pat_decl_y_type_int16 *pat_decl_y_ssp;

  /* The semantic value stack.  */
  PAT_DECL_Y_STYPE pat_decl_y_vsa[PAT_DECL_Y_INITDEPTH];
  PAT_DECL_Y_STYPE *pat_decl_y_vs = pat_decl_y_vsa;
  PAT_DECL_Y_STYPE *pat_decl_y_vsp;



#define PAT_DECL_Y_POPSTACK(N)   (pat_decl_y_vsp -= (N), pat_decl_y_ssp -= (N))

  PAT_DECL_Y_SIZE_T pat_decl_y_stacksize = PAT_DECL_Y_INITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  PAT_DECL_Y_STYPE pat_decl_y_val;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int pat_decl_y_len = 0;

  PAT_DECL_Y_DPRINTF ((stderr, "Starting parse\n"));

  pat_decl_y_state = 0;
  pat_decl_y_errstatus = 0;
  pat_decl_y_nerrs = 0;
  pat_decl_y_char = PAT_DECL_Y_EMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  pat_decl_y_ssp = pat_decl_y_ss;
  pat_decl_y_vsp = pat_decl_y_vs;

  goto pat_decl_y_setstate;

/*------------------------------------------------------------.
| pat_decl_y_newstate -- Push a new state, which is found in pat_decl_y_state.  |
`------------------------------------------------------------*/
 pat_decl_y_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  pat_decl_y_ssp++;

 pat_decl_y_setstate:
  *pat_decl_y_ssp = pat_decl_y_state;

  if (pat_decl_y_ss + pat_decl_y_stacksize - 1 <= pat_decl_y_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      PAT_DECL_Y_SIZE_T pat_decl_y_size = pat_decl_y_ssp - pat_decl_y_ss + 1;

#ifdef pat_decl_y_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	PAT_DECL_Y_STYPE *pat_decl_y_vs1 = pat_decl_y_vs;
	pat_decl_y_type_int16 *pat_decl_y_ss1 = pat_decl_y_ss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if pat_decl_y_overflow is a macro.  */
	pat_decl_y_overflow (PAT_DECL_Y__("memory exhausted"),
		    &pat_decl_y_ss1, pat_decl_y_size * sizeof (*pat_decl_y_ssp),
		    &pat_decl_y_vs1, pat_decl_y_size * sizeof (*pat_decl_y_vsp),

		    &pat_decl_y_stacksize);

	pat_decl_y_ss = pat_decl_y_ss1;
	pat_decl_y_vs = pat_decl_y_vs1;
      }
#else /* no pat_decl_y_overflow */
# ifndef PAT_DECL_Y_STACK_RELOCATE
      goto pat_decl_y_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (PAT_DECL_Y_MAXDEPTH <= pat_decl_y_stacksize)
	goto pat_decl_y_exhaustedlab;
      pat_decl_y_stacksize *= 2;
      if (PAT_DECL_Y_MAXDEPTH < pat_decl_y_stacksize)
	pat_decl_y_stacksize = PAT_DECL_Y_MAXDEPTH;

      {
	pat_decl_y_type_int16 *pat_decl_y_ss1 = pat_decl_y_ss;
	union pat_decl_y_alloc *pat_decl_y_ptr =
	  (union pat_decl_y_alloc *) PAT_DECL_Y_STACK_ALLOC (PAT_DECL_Y_STACK_BYTES (pat_decl_y_stacksize));
	if (! pat_decl_y_ptr)
	  goto pat_decl_y_exhaustedlab;
	PAT_DECL_Y_STACK_RELOCATE (pat_decl_y_ss);
	PAT_DECL_Y_STACK_RELOCATE (pat_decl_y_vs);

#  undef PAT_DECL_Y_STACK_RELOCATE
	if (pat_decl_y_ss1 != pat_decl_y_ssa)
	  PAT_DECL_Y_STACK_FREE (pat_decl_y_ss1);
      }
# endif
#endif /* no pat_decl_y_overflow */

      pat_decl_y_ssp = pat_decl_y_ss + pat_decl_y_size - 1;
      pat_decl_y_vsp = pat_decl_y_vs + pat_decl_y_size - 1;


      PAT_DECL_Y_DPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) pat_decl_y_stacksize));

      if (pat_decl_y_ss + pat_decl_y_stacksize - 1 <= pat_decl_y_ssp)
	PAT_DECL_Y_ABORT;
    }

  PAT_DECL_Y_DPRINTF ((stderr, "Entering state %d\n", pat_decl_y_state));

  goto pat_decl_y_backup;

/*-----------.
| pat_decl_y_backup.  |
`-----------*/
pat_decl_y_backup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  pat_decl_y_n = pat_decl_y_pact[pat_decl_y_state];
  if (pat_decl_y_n == PAT_DECL_Y_PACT_NINF)
    goto pat_decl_y_default;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* PAT_DECL_Y_CHAR is either PAT_DECL_Y_EMPTY or PAT_DECL_Y_EOF or a valid look-ahead symbol.  */
  if (pat_decl_y_char == PAT_DECL_Y_EMPTY)
    {
      PAT_DECL_Y_DPRINTF ((stderr, "Reading a token: "));
      pat_decl_y_char = PAT_DECL_Y_LEX;
    }

  if (pat_decl_y_char <= PAT_DECL_Y_EOF)
    {
      pat_decl_y_char = pat_decl_y_token = PAT_DECL_Y_EOF;
      PAT_DECL_Y_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      pat_decl_y_token = PAT_DECL_Y_TRANSLATE (pat_decl_y_char);
      PAT_DECL_Y__SYMBOL_PRINT ("Next token is", pat_decl_y_token, &pat_decl_y_lval, &pat_decl_y_lloc);
    }

  /* If the proper action on seeing token PAT_DECL_Y_TOKEN is to reduce or to
     detect an error, take that action.  */
  pat_decl_y_n += pat_decl_y_token;
  if (pat_decl_y_n < 0 || PAT_DECL_Y_LAST < pat_decl_y_n || pat_decl_y_check[pat_decl_y_n] != pat_decl_y_token)
    goto pat_decl_y_default;
  pat_decl_y_n = pat_decl_y_table[pat_decl_y_n];
  if (pat_decl_y_n <= 0)
    {
      if (pat_decl_y_n == 0 || pat_decl_y_n == PAT_DECL_Y_TABLE_NINF)
	goto pat_decl_y_errlab;
      pat_decl_y_n = -pat_decl_y_n;
      goto pat_decl_y_reduce;
    }

  if (pat_decl_y_n == PAT_DECL_Y_FINAL)
    PAT_DECL_Y_ACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (pat_decl_y_errstatus)
    pat_decl_y_errstatus--;

  /* Shift the look-ahead token.  */
  PAT_DECL_Y__SYMBOL_PRINT ("Shifting", pat_decl_y_token, &pat_decl_y_lval, &pat_decl_y_lloc);

  /* Discard the shifted token unless it is eof.  */
  if (pat_decl_y_char != PAT_DECL_Y_EOF)
    pat_decl_y_char = PAT_DECL_Y_EMPTY;

  pat_decl_y_state = pat_decl_y_n;
  *++pat_decl_y_vsp = pat_decl_y_lval;

  goto pat_decl_y_newstate;


/*-----------------------------------------------------------.
| pat_decl_y_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
pat_decl_y_default:
  pat_decl_y_n = pat_decl_y_defact[pat_decl_y_state];
  if (pat_decl_y_n == 0)
    goto pat_decl_y_errlab;
  goto pat_decl_y_reduce;


/*-----------------------------.
| pat_decl_y_reduce -- Do a reduction.  |
`-----------------------------*/
pat_decl_y_reduce:
  /* pat_decl_y_n is the number of a rule to reduce with.  */
  pat_decl_y_len = pat_decl_y_r2[pat_decl_y_n];

  /* If PAT_DECL_Y_LEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets PAT_DECL_Y_VAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to PAT_DECL_Y_VAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that PAT_DECL_Y_VAL may be used uninitialized.  */
  pat_decl_y_val = pat_decl_y_vsp[1-pat_decl_y_len];


  PAT_DECL_Y__REDUCE_PRINT (pat_decl_y_n);
  switch (pat_decl_y_n)
    {
        case 2:
#line 459 "../../../src/ppt/src/pat_decl_y.y"
    {
		PAT_DECL_Y_ACCEPT;
		}
    break;

  case 10:
#line 487 "../../../src/ppt/src/pat_decl_y.y"
    { PAT_INSPNT = pat_addpains (PAT_INSPNT, (pat_decl_y_vsp[(2) - (4)].text), (pat_decl_y_vsp[(3) - (4)].text)); }
    break;

  case 11:
#line 492 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.text) = (pat_decl_y_vsp[(1) - (1)].text); }
    break;

  case 12:
#line 497 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.text) = (pat_decl_y_vsp[(1) - (1)].text); }
    break;

  case 13:
#line 502 "../../../src/ppt/src/pat_decl_y.y"
    {
		PAT_COMPNT = pat_addpacom (PAT_COMPNT, (pat_decl_y_vsp[(1) - (1)].text), STT_NBR);
		STT_NBR    = 0;
		}
    break;

  case 16:
#line 520 "../../../src/ppt/src/pat_decl_y.y"
    {
		int           length;
		int           lclmod;
		unsigned char flag  ;

		if ((lclmod = chktab (HSHTAB, (pat_decl_y_vsp[(2) - (6)].arra).ident, PAT_MODDFN)) != 0)
		  {
		  if (lclmod == 'I')
		    ERR_FLG += pat_error (13, (pat_decl_y_vsp[(2) - (6)].arra).ident, ' ', PAT_LINNUM);
		  if (lclmod != (pat_decl_y_vsp[(1) - (6)].immd))
		    ERR_FLG += pat_error (7, (pat_decl_y_vsp[(2) - (6)].arra).ident, ' ', PAT_LINNUM);
		  }
		else
		  addtab (HSHTAB, (pat_decl_y_vsp[(2) - (6)].arra).ident, PAT_MODDFN, (pat_decl_y_vsp[(1) - (6)].immd));

		if ((pat_decl_y_vsp[(2) - (6)].arra).left < (pat_decl_y_vsp[(2) - (6)].arra).right)
		  length = (pat_decl_y_vsp[(2) - (6)].arra).right - (pat_decl_y_vsp[(2) - (6)].arra).left + 1;
		else
		  length = (pat_decl_y_vsp[(2) - (6)].arra).left - (pat_decl_y_vsp[(2) - (6)].arra).right + 1;

		STT_NBR ++;
		flag       = (pat_decl_y_vsp[(4) - (6)].valu) | (pat_decl_y_vsp[(5) - (6)].valu);
		PAT_IOLPNT = addiol (PAT_IOLPNT, (pat_decl_y_vsp[(2) - (6)].arra), (pat_decl_y_vsp[(3) - (6)].immd), (pat_decl_y_vsp[(1) - (6)].immd), (pat_decl_y_vsp[(6) - (6)].valu), flag);

		if (length != 1)
		  PAT_GRPPNT = pat_addpagrp (PAT_GRPPNT, (pat_decl_y_vsp[(2) - (6)].arra).ident, length,
		                             DCL_NBR   , 0);
		else
		  {
		  if ((pat_decl_y_vsp[(3) - (6)].immd) != 'B')
		    ERR_FLG += pat_error (1, NULL, ' ', PAT_LINNUM);
		  }

		DCL_NBR += length;
		}
    break;

  case 17:
#line 567 "../../../src/ppt/src/pat_decl_y.y"
    {
		int           i      ;
		int           lclmod ;
		int           length = 0;
		unsigned char flag   ;

		if (chktab (HSHTAB, (pat_decl_y_vsp[(2) - (9)].text), PAT_MODDFN) != 0)
		  ERR_FLG += pat_error (8, (pat_decl_y_vsp[(2) - (9)].text), ' ', PAT_LINNUM);
		else
		  addtab (HSHTAB, (pat_decl_y_vsp[(2) - (9)].text), PAT_MODDFN, (pat_decl_y_vsp[(1) - (9)].immd));

		STT_NBR++;

		for (i=0 ; i<TAB_IDX ; i++)
                  {
		  if ((lclmod = chktab(HSHTAB,TAB[i].ident,PAT_MODDFN)) != 0)
		    {
		    if (lclmod != (pat_decl_y_vsp[(1) - (9)].immd))
		      ERR_FLG += pat_error (7, TAB[i].ident, ' ', PAT_LINNUM);
		    }
		  else
		    addtab (HSHTAB, TAB[i].ident, PAT_MODDFN, (pat_decl_y_vsp[(1) - (9)].immd));

		  flag       = (pat_decl_y_vsp[(7) - (9)].valu) | (pat_decl_y_vsp[(8) - (9)].valu);
		  PAT_IOLPNT = addiol (PAT_IOLPNT, TAB[i], (pat_decl_y_vsp[(6) - (9)].immd), (pat_decl_y_vsp[(1) - (9)].immd), (pat_decl_y_vsp[(9) - (9)].valu), flag);
		  if (TAB[i].left < TAB[i].right)
		    length += TAB[i].right - TAB[i].left + 1;
		  else
		    length += TAB[i].left - TAB[i].right + 1;
                  }

		PAT_GRPPNT = pat_addpagrp (PAT_GRPPNT, (pat_decl_y_vsp[(2) - (9)].text), length, DCL_NBR, 1);
		TAB_IDX    = 0;
		DCL_NBR   += length;
		}
    break;

  case 18:
#line 606 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.immd) = 'B'; }
    break;

  case 19:
#line 608 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.immd) = (pat_decl_y_vsp[(1) - (1)].immd); }
    break;

  case 20:
#line 613 "../../../src/ppt/src/pat_decl_y.y"
    { pshtab ((pat_decl_y_vsp[(1) - (1)].arra)); }
    break;

  case 21:
#line 617 "../../../src/ppt/src/pat_decl_y.y"
    { pshtab ((pat_decl_y_vsp[(3) - (3)].arra)); }
    break;

  case 22:
#line 622 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.arra) = (pat_decl_y_vsp[(1) - (1)].arra); }
    break;

  case 23:
#line 624 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.arra) = (pat_decl_y_vsp[(1) - (1)].arra); }
    break;

  case 24:
#line 626 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.arra) = (pat_decl_y_vsp[(1) - (1)].arra); }
    break;

  case 25:
#line 631 "../../../src/ppt/src/pat_decl_y.y"
    {
		(pat_decl_y_val.arra).ident = (pat_decl_y_vsp[(1) - (1)].text);
		(pat_decl_y_val.arra).left  = -1;
		(pat_decl_y_val.arra).right = -1;
		}
    break;

  case 26:
#line 643 "../../../src/ppt/src/pat_decl_y.y"
    {
		(pat_decl_y_val.arra).ident = (pat_decl_y_vsp[(1) - (4)].text);
		(pat_decl_y_val.arra).left  = (pat_decl_y_vsp[(3) - (4)].valu);
		(pat_decl_y_val.arra).right = (pat_decl_y_vsp[(3) - (4)].valu);
		}
    break;

  case 27:
#line 657 "../../../src/ppt/src/pat_decl_y.y"
    {
		(pat_decl_y_val.arra).ident = (pat_decl_y_vsp[(1) - (6)].text);
		(pat_decl_y_val.arra).left  = (pat_decl_y_vsp[(3) - (6)].valu);
		(pat_decl_y_val.arra).right = (pat_decl_y_vsp[(5) - (6)].valu);
		}
    break;

  case 28:
#line 667 "../../../src/ppt/src/pat_decl_y.y"
    {
		char name [256];
		int  i         ;

		strcpy (name, (pat_decl_y_vsp[(1) - (2)].text));
		for (i=0; i<NAM_IDX ; i++)
		 {
		 strcat (name, ".");
		 strcat (name, NAMTAB [i]);
		 }
		NAM_IDX = 0;
		(pat_decl_y_val.text) = namealloc (name);
		}
    break;

  case 30:
#line 687 "../../../src/ppt/src/pat_decl_y.y"
    { pshnam ((pat_decl_y_vsp[(3) - (3)].text)); }
    break;

  case 33:
#line 697 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.immd) = 'I'; }
    break;

  case 34:
#line 699 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.immd) = 'O'; }
    break;

  case 35:
#line 701 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.immd) = 'T'; }
    break;

  case 36:
#line 703 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.immd) = 'S'; }
    break;

  case 37:
#line 705 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.immd) = 'R'; }
    break;

  case 38:
#line 710 "../../../src/ppt/src/pat_decl_y.y"
    {
		if (ERR_FLG > 30)
		  PAT_DECL_Y_ABORT;
		else
		   pat_decl_y_errok;
		}
    break;

  case 39:
#line 720 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.valu) = 0 ;           }
    break;

  case 40:
#line 722 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.valu) = PAT_IOL__SPY; }
    break;

  case 41:
#line 727 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.valu) = 0 ;             }
    break;

  case 42:
#line 729 "../../../src/ppt/src/pat_decl_y.y"
    { (pat_decl_y_val.valu) = PAT_IOL__TRACE; }
    break;


/* Line 1267 of yacc.c.  */
#line 2055 "y.tab.c"
      default: break;
    }
  PAT_DECL_Y__SYMBOL_PRINT ("-> $$ =", pat_decl_y_r1[pat_decl_y_n], &pat_decl_y_val, &pat_decl_y_loc);

  PAT_DECL_Y_POPSTACK (pat_decl_y_len);
  pat_decl_y_len = 0;
  PAT_DECL_Y__STACK_PRINT (pat_decl_y_ss, pat_decl_y_ssp);

  *++pat_decl_y_vsp = pat_decl_y_val;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  pat_decl_y_n = pat_decl_y_r1[pat_decl_y_n];

  pat_decl_y_state = pat_decl_y_pgoto[pat_decl_y_n - PAT_DECL_Y_NTOKENS] + *pat_decl_y_ssp;
  if (0 <= pat_decl_y_state && pat_decl_y_state <= PAT_DECL_Y_LAST && pat_decl_y_check[pat_decl_y_state] == *pat_decl_y_ssp)
    pat_decl_y_state = pat_decl_y_table[pat_decl_y_state];
  else
    pat_decl_y_state = pat_decl_y_defgoto[pat_decl_y_n - PAT_DECL_Y_NTOKENS];

  goto pat_decl_y_newstate;


/*------------------------------------.
| pat_decl_y_errlab -- here on detecting error |
`------------------------------------*/
pat_decl_y_errlab:
  /* If not already recovering from an error, report this error.  */
  if (!pat_decl_y_errstatus)
    {
      ++pat_decl_y_nerrs;
#if ! PAT_DECL_Y_ERROR_VERBOSE
      pat_decl_y_error (PAT_DECL_Y__("syntax error"));
#else
      {
	PAT_DECL_Y_SIZE_T pat_decl_y_size = pat_decl_y_syntax_error (0, pat_decl_y_state, pat_decl_y_char);
	if (pat_decl_y_msg_alloc < pat_decl_y_size && pat_decl_y_msg_alloc < PAT_DECL_Y_STACK_ALLOC_MAXIMUM)
	  {
	    PAT_DECL_Y_SIZE_T pat_decl_y_alloc = 2 * pat_decl_y_size;
	    if (! (pat_decl_y_size <= pat_decl_y_alloc && pat_decl_y_alloc <= PAT_DECL_Y_STACK_ALLOC_MAXIMUM))
	      pat_decl_y_alloc = PAT_DECL_Y_STACK_ALLOC_MAXIMUM;
	    if (pat_decl_y_msg != pat_decl_y_msgbuf)
	      PAT_DECL_Y_STACK_FREE (pat_decl_y_msg);
	    pat_decl_y_msg = (char *) PAT_DECL_Y_STACK_ALLOC (pat_decl_y_alloc);
	    if (pat_decl_y_msg)
	      pat_decl_y_msg_alloc = pat_decl_y_alloc;
	    else
	      {
		pat_decl_y_msg = pat_decl_y_msgbuf;
		pat_decl_y_msg_alloc = sizeof pat_decl_y_msgbuf;
	      }
	  }

	if (0 < pat_decl_y_size && pat_decl_y_size <= pat_decl_y_msg_alloc)
	  {
	    (void) pat_decl_y_syntax_error (pat_decl_y_msg, pat_decl_y_state, pat_decl_y_char);
	    pat_decl_y_error (pat_decl_y_msg);
	  }
	else
	  {
	    pat_decl_y_error (PAT_DECL_Y__("syntax error"));
	    if (pat_decl_y_size != 0)
	      goto pat_decl_y_exhaustedlab;
	  }
      }
#endif
    }



  if (pat_decl_y_errstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (pat_decl_y_char <= PAT_DECL_Y_EOF)
	{
	  /* Return failure if at end of input.  */
	  if (pat_decl_y_char == PAT_DECL_Y_EOF)
	    PAT_DECL_Y_ABORT;
	}
      else
	{
	  pat_decl_y_destruct ("Error: discarding",
		      pat_decl_y_token, &pat_decl_y_lval);
	  pat_decl_y_char = PAT_DECL_Y_EMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto pat_decl_y_errlab1;


/*---------------------------------------------------.
| pat_decl_y_errorlab -- error raised explicitly by PAT_DECL_Y_ERROR.  |
`---------------------------------------------------*/
pat_decl_y_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     PAT_DECL_Y_ERROR and the label pat_decl_y_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto pat_decl_y_errorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this PAT_DECL_Y_ERROR.  */
  PAT_DECL_Y_POPSTACK (pat_decl_y_len);
  pat_decl_y_len = 0;
  PAT_DECL_Y__STACK_PRINT (pat_decl_y_ss, pat_decl_y_ssp);
  pat_decl_y_state = *pat_decl_y_ssp;
  goto pat_decl_y_errlab1;


/*-------------------------------------------------------------.
| pat_decl_y_errlab1 -- common code for both syntax error and PAT_DECL_Y_ERROR.  |
`-------------------------------------------------------------*/
pat_decl_y_errlab1:
  pat_decl_y_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      pat_decl_y_n = pat_decl_y_pact[pat_decl_y_state];
      if (pat_decl_y_n != PAT_DECL_Y_PACT_NINF)
	{
	  pat_decl_y_n += PAT_DECL_Y_TERROR;
	  if (0 <= pat_decl_y_n && pat_decl_y_n <= PAT_DECL_Y_LAST && pat_decl_y_check[pat_decl_y_n] == PAT_DECL_Y_TERROR)
	    {
	      pat_decl_y_n = pat_decl_y_table[pat_decl_y_n];
	      if (0 < pat_decl_y_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (pat_decl_y_ssp == pat_decl_y_ss)
	PAT_DECL_Y_ABORT;


      pat_decl_y_destruct ("Error: popping",
		  pat_decl_y_stos[pat_decl_y_state], pat_decl_y_vsp);
      PAT_DECL_Y_POPSTACK (1);
      pat_decl_y_state = *pat_decl_y_ssp;
      PAT_DECL_Y__STACK_PRINT (pat_decl_y_ss, pat_decl_y_ssp);
    }

  if (pat_decl_y_n == PAT_DECL_Y_FINAL)
    PAT_DECL_Y_ACCEPT;

  *++pat_decl_y_vsp = pat_decl_y_lval;


  /* Shift the error token.  */
  PAT_DECL_Y__SYMBOL_PRINT ("Shifting", pat_decl_y_stos[pat_decl_y_n], pat_decl_y_vsp, pat_decl_y_lsp);

  pat_decl_y_state = pat_decl_y_n;
  goto pat_decl_y_newstate;


/*-------------------------------------.
| pat_decl_y_acceptlab -- PAT_DECL_Y_ACCEPT comes here.  |
`-------------------------------------*/
pat_decl_y_acceptlab:
  pat_decl_y_result = 0;
  goto pat_decl_y_return;

/*-----------------------------------.
| pat_decl_y_abortlab -- PAT_DECL_Y_ABORT comes here.  |
`-----------------------------------*/
pat_decl_y_abortlab:
  pat_decl_y_result = 1;
  goto pat_decl_y_return;

#ifndef pat_decl_y_overflow
/*-------------------------------------------------.
| pat_decl_y_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
pat_decl_y_exhaustedlab:
  pat_decl_y_error (PAT_DECL_Y__("memory exhausted"));
  pat_decl_y_result = 2;
  /* Fall through.  */
#endif

pat_decl_y_return:
  if (pat_decl_y_char != PAT_DECL_Y_EOF && pat_decl_y_char != PAT_DECL_Y_EMPTY)
     pat_decl_y_destruct ("Cleanup: discarding lookahead",
		 pat_decl_y_token, &pat_decl_y_lval);
  /* Do not reclaim the symbols of the rule which action triggered
     this PAT_DECL_Y_ABORT or PAT_DECL_Y_ACCEPT.  */
  PAT_DECL_Y_POPSTACK (pat_decl_y_len);
  PAT_DECL_Y__STACK_PRINT (pat_decl_y_ss, pat_decl_y_ssp);
  while (pat_decl_y_ssp != pat_decl_y_ss)
    {
      pat_decl_y_destruct ("Cleanup: popping",
		  pat_decl_y_stos[*pat_decl_y_ssp], pat_decl_y_vsp);
      PAT_DECL_Y_POPSTACK (1);
    }
#ifndef pat_decl_y_overflow
  if (pat_decl_y_ss != pat_decl_y_ssa)
    PAT_DECL_Y_STACK_FREE (pat_decl_y_ss);
#endif
#if PAT_DECL_Y_ERROR_VERBOSE
  if (pat_decl_y_msg != pat_decl_y_msgbuf)
    PAT_DECL_Y_STACK_FREE (pat_decl_y_msg);
#endif
  /* Make sure PAT_DECL_Y_ID is used.  */
  return PAT_DECL_Y_ID (pat_decl_y_result);
}


#line 731 "../../../src/ppt/src/pat_decl_y.y"


