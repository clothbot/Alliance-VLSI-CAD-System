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
#line 32 "../../../src/ppt/src/pat_desc_y.y"


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "mut.h"
#include "pat.h"
#include "ppt.h"
#include "pat_type.h"
#include "pat_desc.h"

/* ###--------------------------------------------------------------### */
/* function	: lcl_addpacom						*/
/* description	: create PACOM structure if there is no more structure	*/
/*		  available in free list				*/
/* called func.	: pat_addpacom						*/
/* ###--------------------------------------------------------------### */

static struct pacom *lcl_addpacom (lastpacom, text, position)

struct pacom   *lastpacom;	/* pointer on the last pacom structure	*/
char           *text;		/* text of the comment			*/
unsigned short  position;	/* # of statement since last comment	*/

  {
  struct pacom *ptcom = NULL;

  if (FRE_COMPNT == NULL)
     ptcom = pat_addpacom (lastpacom, text, position);
  else
    {
    ptcom           = FRE_COMPNT;
    FRE_COMPNT      = ptcom->NEXT;

    ptcom->TEXT     = text;
    ptcom->POSITION = position;
    ptcom->NEXT     = lastpacom;
    }

  return (ptcom);
  }

/* ###--------------------------------------------------------------### */
/* function	: lcl_addpapat						*/
/* description	: create PAPAT structure if there is no more structure	*/
/*		  available in free list				*/
/* called func.	: pat_addpapat						*/
/* ###--------------------------------------------------------------### */

static struct papat *lcl_addpapat (lastpapat, label, line)

struct papat   *lastpapat;	/* pointer on the last papat structure	*/
char           *label;		/* pattern's label			*/
unsigned short  line;		/* pattern' line number			*/

  {
  struct papat *ptpat;

  if (FRE_PATPNT == NULL)
     ptpat = pat_addpapat (lastpapat, label, line);
  else
    {
    ptpat      = FRE_PATPNT;
    FRE_PATPNT = ptpat->NEXT;

    ptpat->LABEL   = label;
    ptpat->PAEVT   = NULL;
    ptpat->PAINI   = NULL;
    ptpat->LINE    = line;
    ptpat->BLANK   =  0 ;
    ptpat->ACTFLAG = 'U';
    ptpat->SIMFLAG = 'U';
    ptpat->NEXT    = lastpapat;
    }

  return (ptpat);
  }

/* ###--------------------------------------------------------------### */
/* function	: lcl_addpaini						*/
/* description	: create PAINI structure if there is no more structure	*/
/*		  available in free list				*/
/* called func.	: pat_addpaini						*/
/* ###--------------------------------------------------------------### */

static struct paini *lcl_addpaini (lastpaini, name, value)

struct paini *lastpaini;	/* pointer on the last paini structure	*/
char         *name;		/* register's name			*/
char          value;		/* value to be forced into the register	*/

  {
  struct paini *ptini;

  if (FRE_INIPNT == NULL)
     ptini =  pat_addpaini (lastpaini, name, value);
  else
    {
    ptini      = FRE_INIPNT;
    FRE_INIPNT = ptini->NEXT;

    ptini->NAME  = namealloc (name);
    ptini->VALUE = value;
    ptini->NEXT  = lastpaini;
    }

  return (ptini);
  }

/* ###--------------------------------------------------------------### */
/* function	: lcl_addpaevt						*/
/* description	: create PAEVT structure if there is no more structure	*/
/*		  available in free list				*/
/* called func.	: pat_addpaevt						*/
/* ###--------------------------------------------------------------### */

static struct paevt *lcl_addpaevt (lastpaevt, index, usrval)

struct paevt   *lastpaevt;	/* pointer on the last paevt structure	*/
unsigned short  index;		/* index of the input-output		*/
char            usrval;		/* user predicted value			*/

  {
  struct paevt *ptevt;


  if (FRE_EVTPNT == NULL)
     ptevt = pat_addpaevt (lastpaevt, index, usrval);
  else
    {
    ptevt      = FRE_EVTPNT;
    FRE_EVTPNT = ptevt->NEXT;

    ptevt->INDEX  = index;
    ptevt->USRVAL = usrval;
    ptevt->SIMVAL = usrval;
    ptevt->NEXT   = lastpaevt;
    }

  return (ptevt);
  }

/* ###--------------------------------------------------------------### */
/* function	: pat_decl_y_error						*/
/* description	: print an error message (errors detected by yacc)	*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

/* ###--------------------------------------------------------------### */
/* function	: tobin							*/
/* description	: change to binary					*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void tobin (value, str1, str2)

char   value;
char **str1 ;
char **str2 ;

  {
  switch (value)
    {
    case '*':
      *str1 = "****"; *str2 = "****"; break;
    case '-':
    case '0':
      *str1 = "0000"; *str2 = "----"; break;
    case '+':
    case '1':
      *str1 = "0001"; *str2 = "---+"; break;
    case '2':
      *str1 = "0010"; *str2 = "--+-"; break;
    case '3':
      *str1 = "0011"; *str2 = "--++"; break;
    case '4':
      *str1 = "0100"; *str2 = "-+--"; break;
    case '5':
      *str1 = "0101"; *str2 = "-+-+"; break;
    case '6':
      *str1 = "0110"; *str2 = "-++-"; break;
    case '7':
      *str1 = "0111"; *str2 = "-+++"; break;
    case '8':
      *str1 = "1000"; *str2 = "+---"; break;
    case '9':
      *str1 = "1001"; *str2 = "+--+"; break;
    case 'A':
    case 'a':
      *str1 = "1010"; *str2 = "+-+-"; break;
    case 'B':
    case 'b':
      *str1 = "1011"; *str2 = "+-++"; break;
    case 'C':
    case 'c':
      *str1 = "1100"; *str2 = "++--"; break;
    case 'D':
    case 'd':
      *str1 = "1101"; *str2 = "++-+"; break;
    case 'E':
    case 'e':
      *str1 = "1110"; *str2 = "+++-"; break;
    case 'F':
    case 'f':
      *str1 = "1111"; *str2 = "++++"; break;

    default : 
      *str1 = "0000"; *str2 = "----"; break;
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
    NAM_IDX ++;
    }
  }

/* ###--------------------------------------------------------------### */
/* function	: addini						*/
/* description	: add a list of PAINI structure at the top of the list	*/
/* called func.	: lcl_addpaini, tobin					*/
/* ###--------------------------------------------------------------### */

static struct paini *addini (lastini, gname, value)

struct paini *lastini;
struct array  gname  ;
char         *value  ;

  {
  struct paini *ptini        = lastini;
  char         *frc          ;
  char         *cmp          ;
  long           length       ;
  long           size         = 1;
  long           index        = 1;
  long           i            ;
  long           inc          ;
  char          extname [100];
  char          format       = 'B';

  if (gname.left < gname.right)
    {
    length = gname.right - gname.left + 1;
    inc    = 1;
    }
  else
    {
    length = gname.left - gname.right + 1;
    inc    = -1;
    }

  switch (value [0])
    {
    case 'X' :
    case 'x' :
      size   = (strlen (value) - 3) * 4;
      format = 'X';
      index  = 2  ;
      break;
    case 'O' :
    case 'o' :
      size   = (strlen (value) - 3) * 3;
      format = 'O';
      index  = 2  ;
      break;
    case 'B' :
    case 'b' :
      size   = strlen (value) - 3;
      format = 'B';
      index  = 2  ;
      break;
    case '"' :
      size   = strlen (value) - 2;
      format = 'B';
      index  = 1  ;
      break;
    case '\'' :
      size   = 1  ;
      format = 'B';
      index  = 1  ;
      break;
    }

  if (length != size)
    ERR_FLG += pat_error (12, gname.ident, ' ', PAT_LINNUM);
  else
    {
    if (gname.left == -1)
      ptini = lcl_addpaini (ptini, gname.ident, value[index]);
    else
      {
      for (i=gname.left ; i!=(gname.right+inc) ;)
        {
        tobin  (value[index], &frc, &cmp);
        switch (format)
          {
          case 'X':
          case 'x':
            sprintf (extname, "%s %d", gname.ident, i);
            i += inc;
            ptini = lcl_addpaini (ptini, extname, frc[0]);
            sprintf (extname, "%s %d", gname.ident, i);
            i += inc;
            ptini = lcl_addpaini (ptini, extname, frc[1]);
            sprintf (extname, "%s %d", gname.ident, i);
            i += inc;
            ptini = lcl_addpaini (ptini, extname, frc[2]);
            sprintf (extname, "%s %d", gname.ident, i);
            i += inc;
            ptini = lcl_addpaini (ptini, extname, frc[3]);
            break;
          case 'O':
          case 'o':
            sprintf (extname, "%s %d", gname.ident, i);
            i += inc;
            ptini = lcl_addpaini (ptini, extname, frc[1]);
            sprintf (extname, "%s %d", gname.ident, i);
            i += inc;
            ptini = lcl_addpaini (ptini, extname, frc[2]);
            sprintf (extname, "%s %d", gname.ident, i);
            i += inc;
            ptini = lcl_addpaini (ptini, extname, frc[3]);
            break;
          case 'B':
          case 'b':
            sprintf (extname, "%s %d", gname.ident, i);
            i += inc;
            ptini = lcl_addpaini (ptini, extname, frc[3]);
            break;
          }
        index++;
        }
      }
    }
  return (ptini);
  }

/* ###--------------------------------------------------------------### */
/* function	: isevent						*/
/* description	: detect an event on an input-output and add if needed	*/
/*		  a PAEVT structure at the top of the list		*/
/* called func.	: tobin, lcl_addpaevt					*/
/* ###--------------------------------------------------------------### */

static struct paevt *isevent (lastevt, index, compare, value, rank)

struct paevt *lastevt;
short         index  ;
char          compare;
char          value  ;
long           rank   ;

  {
  struct paiol *ptiol  ;
  long           i      ;
  char          cmp_val;
  char          frc_val;
  char         *frc    ;
  char         *cmp    ;

  ptiol = PAT_SEQPNT->PAIOL + index;
  if ((value == '*') || (value == '-') || (value == '+'))
    compare = 'C';

  tobin (value, &frc, &cmp);
  switch (ptiol->MODE)
    {
    case 'I':
      for (i=rank ; i<4 ; i++)
        {
        frc_val = frc [i];
        if (VALUE [index] != frc_val)
          {
          lastevt       = lcl_addpaevt (lastevt, index, frc_val); 
          VALUE [index] = frc_val;
          }
        index++;
        }
      break;
    case 'O':
    case 'B':
    case 'Z':
    case 'S':
    case 'W':
    case 'X':
    case 'U':
    case 'R':
      for (i=rank ; i<4 ; i++)
        {
        cmp_val = cmp[i];
        if ((VALUE[index] != cmp_val) || (cmp_val == '*'))
          {
          lastevt = lcl_addpaevt (lastevt, index, cmp_val); 
          VALUE[index]  = cmp_val;
          }
        index++;
        }
      break;
    case 'T':
      if (compare == 'F')
        {
        for (i=rank ; i<4 ; i++)
          {
          frc_val = frc[i];
          if (VALUE[index] != frc_val)
            {
            lastevt = lcl_addpaevt (lastevt, index, frc_val); 
            VALUE[index]  = frc_val;
            }
          index++;
          }
        }
      else
        {
        for (i=rank ; i<4 ; i++)
          {
          cmp_val = cmp[i];
          if ((VALUE[index] != cmp_val) || (cmp_val == '*'))
            {
            lastevt = lcl_addpaevt (lastevt, index, cmp_val); 
            VALUE[index]  = cmp_val;
            }
          index++;
          }
        }
      break;
    }
  return (lastevt);
  }

/* ###--------------------------------------------------------------### */
/* function	: islegal						*/
/* description	: check if a value is legal				*/
/* called func.	: pat_error						*/
/* ###--------------------------------------------------------------### */

static void islegal (index, value, flag, status)

long  index;				/* ptiol's index		*/
char value;				/* value (+,-,*,0,...,9,a,...,f)*/
char flag;				/* comparison flag (C,F)	*/
long  status;				/* (0,1,2) (bit,array,inside)	*/

  {
  long           code = -1;
  char          comp = flag;
  struct paiol *ptiol;

	/* ###------------------------------------------------------### */
	/*   Giving a code to each group of values			*/
	/* ###------------------------------------------------------### */

  switch (value)
    {
    case '*':
      code = 0; comp = 'C'; break;
    case '0':
    case '1':
      code = 1; break;
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
      code = 2; break;
    case '8':
    case '9':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
      code = 3; break;
    case '+':
    case '-':
      code = 4; comp = 'C'; break;
    }

	/* ###------------------------------------------------------### */
	/*   Checking parameters' consistency :				*/
	/*     '+' or '-' preceded by a '?'		-> error	*/
	/*     '+' or '-' for an array			-> error	*/
	/*	unknown value				-> error	*/
	/* ###------------------------------------------------------### */

  if ((code == 4) && (flag == 'C'))
    ERR_FLG += pat_error (2, NULL, '?', PAT_LINNUM);

  if ((code == 4) && (status != 0))
    ERR_FLG += pat_error (2, NULL, value, PAT_LINNUM);

  if (code == -1)
    ERR_FLG += pat_error (2, NULL, value, PAT_LINNUM);
  else
    {

	/* ###------------------------------------------------------### */
	/*   Checking coherence of value and input-output format :	*/
	/*     2,...,9,a,...,f and binary format	-> error	*/
	/*     a,...,f,+,-     and octal  format	-> error	*/
	/*     +,-             and hexa.  format	-> error	*/
	/* ###------------------------------------------------------### */

    flag  = comp;
    ptiol = PAT_SEQPNT->PAIOL + index;
    switch (ptiol->FORMAT)
      {
      case 'b' :
      case 'B' :
        if ((code == 2) || (code == 3))
          ERR_FLG += pat_error (10, ptiol->NAME, 'B', PAT_LINNUM);
        break;
      case 'o' :
      case 'O' :
        if (code >= 3)
          ERR_FLG += pat_error (10, ptiol->NAME, 'O', PAT_LINNUM);
        break;
      case 'x' :
      case 'X' :
        if (code == 4)
          ERR_FLG += pat_error (10, ptiol->NAME, 'X', PAT_LINNUM);
        break;
      }

	/* ###------------------------------------------------------### */
	/*   Checking coherence of value and input-output mode		*/
	/*     compare a value on an input		-> error	*/
	/*     put an undefined value on an input	-> error	*/
	/*     force a value on an output		-> error	*/
	/* ###------------------------------------------------------### */

    switch (ptiol->MODE)
      {
      case 'I' :
        if ((flag == 'C') || (code == 4) || (code == 0))
          ERR_FLG += pat_error (5, ptiol->NAME, ' ', PAT_LINNUM);
        break;
      case 'O' :
      case 'R' :
      case 'S' :
        if (flag != 'C')
          ERR_FLG += pat_error (4, ptiol->NAME, ' ', PAT_LINNUM);
        break;
      }
    }
  }

/* ###--------------------------------------------------------------### */
/* function	: pat_descpat						*/
/* description	: parse a file in pat format and return a PASEQ		*/
/* called func.	: pat_desc_y_parse, reverse, mbkalloc, mbkfree, pat_error	*/
/* ###--------------------------------------------------------------### */

struct paseq *pat_descpat (fp, ptseq, maxpat, mode)

FILE          *fp    ;
struct paseq  *ptseq ;
unsigned long   maxpat;
unsigned char  mode  ;			/* the description style	*/

  {
  struct papat *ptpat  ;
  struct pacom *ptcom  ;
  struct paevt *ptevt  ;
  struct paini *ptini  ;

  struct papat *lastpat;
  extern FILE  *pat_decl_y_in;
  long           i      ;

  if ((ptseq == NULL) || (ptseq->ERRFLG != 0))
    ERR_FLG += pat_error (100, NULL, ' ', 0);
  else
    {
    if (ptseq->SUBSEQ == 0)
      {
	/* ###------------------------------------------------------### */
	/*   for the first subsequence initialize:			*/
	/*     - the parsing style (strict/non strict delays - ignore	*/
	/*       delays)						*/
	/*     - the current date					*/
	/*     - the time unit conversion variables			*/
	/*     - an array for values					*/
	/* ###------------------------------------------------------### */

      PAT_MODE = mode;
      CURDATE  = 0   ;

      switch (PAT_TIMEUNIT)
        {
        case PAT_TU__FS :
          PAT_CNVFS = 1      ;
          PAT_CNVPS = 1.0E+3 ;
          PAT_CNVNS = 1.0E+6 ;
          PAT_CNVUS = 1.0E+9 ;
          PAT_CNVMS = 1.0E+12;
          break;

        case PAT_TU__PS :
          PAT_CNVFS = 1.0E-3 ;
          PAT_CNVPS = 1      ;
          PAT_CNVNS = 1.0E+3 ;
          PAT_CNVUS = 1.0E+6 ;
          PAT_CNVMS = 1.0E+9 ;
          break;

        case PAT_TU__NS :
          PAT_CNVFS = 1.0E-6 ;
          PAT_CNVPS = 1.0E-3 ;
          PAT_CNVNS = 1      ;
          PAT_CNVUS = 1.0E+3 ;
          PAT_CNVMS = 1.0E+6 ;
          break;

        case PAT_TU__US :
          PAT_CNVFS = 1.0E-9 ;
          PAT_CNVPS = 1.0E-6 ;
          PAT_CNVNS = 1.0E-3 ;
          PAT_CNVUS = 1      ;
          PAT_CNVMS = 1.0E+3 ;
          break;

        case PAT_TU__MS :
          PAT_CNVFS = 1.0E-12;
          PAT_CNVPS = 1.0E-9 ;
          PAT_CNVNS = 1.0E-6 ;
          PAT_CNVUS = 1.0E-3 ;
          PAT_CNVMS = 1      ;
          break;

        default :
          PAT_CNVFS = 1      ;
          PAT_CNVPS = 1      ;
          PAT_CNVNS = 1      ;
          PAT_CNVUS = 1      ;
          PAT_CNVMS = 1      ;
          ERR_FLG  += pat_error (200, NULL, 0, 0);
        }

      if (ERR_FLG == 0)
        {
        PAT_CNVFS = PAT_CNVFS / PAT_TIMESTEP;
        PAT_CNVPS = PAT_CNVPS / PAT_TIMESTEP;
        PAT_CNVNS = PAT_CNVNS / PAT_TIMESTEP;
        PAT_CNVUS = PAT_CNVUS / PAT_TIMESTEP;
        PAT_CNVMS = PAT_CNVMS / PAT_TIMESTEP;
        }

      VALUE = mbkalloc (sizeof (char) * (ptseq->IOLNBR));

      for (i=0 ; i<(ptseq->IOLNBR) ; i++)
         VALUE [i] = '*';
      }

    else
      {
	/* ###------------------------------------------------------### */
	/*   for other subsequences release old PAPAT, PACOM, PAINI	*/
	/* and PAEVT structures						*/
	/* ###------------------------------------------------------### */

	/* ###------------------------------------------------------### */
	/*   release PACOM of the old subsequence. Move the comments of	*/
	/* the previous subsequence to old.				*/
	/* ###------------------------------------------------------### */

      ptcom = ptseq->OLDCOM;

      if (ptcom != NULL)
        {
        while (ptcom->NEXT != NULL)
          ptcom = ptcom->NEXT;
        }

      if (ptcom != NULL)
        {
        ptcom->NEXT   = FRE_COMPNT;
        FRE_COMPNT    = ptseq->OLDCOM;
        }

      ptseq->OLDCOM = ptseq->CURCOM;
      ptseq->CURCOM = NULL;

	/* ###------------------------------------------------------### */
	/*   scan the PAPAT list of the old subsequence to release it	*/
	/* and ...							*/
	/* ###------------------------------------------------------### */

      lastpat = NULL;
      ptpat   = ptseq->OLDPAT;

      while ((ptpat != NULL) && (ptpat != ptseq->CURPAT))
        {
	/* ###------------------------------------------------------### */
	/*   release PAEVT of the current PAPAT				*/
	/* ###------------------------------------------------------### */

        ptevt = ptpat->PAEVT;

        if (ptevt != NULL)
          {
          while (ptevt->NEXT != NULL)
            ptevt = ptevt->NEXT;
          }

        if (ptevt != NULL)
          {
          ptevt->NEXT = FRE_EVTPNT  ;
          FRE_EVTPNT  = ptpat->PAEVT;
          }

	/* ###------------------------------------------------------### */
	/*   release PAINI of the current PAPAT				*/
	/* ###------------------------------------------------------### */

        ptini = ptpat->PAINI;

        if (ptini != NULL)
          {
          while (ptini->NEXT != NULL)
            ptini = ptini->NEXT;
          }

        if (ptini != NULL)
          {
          ptini->NEXT = FRE_INIPNT  ;
          FRE_INIPNT  = ptpat->PAINI;
          }

        ptpat->PAINI = NULL;
        ptpat->PAEVT = NULL;

        lastpat = ptpat      ;
        ptpat   = ptpat->NEXT;
        }

      if (lastpat != NULL)
        {
        lastpat->NEXT = FRE_PATPNT   ;
        FRE_PATPNT    = ptseq->OLDPAT;
        }

      ptseq->OLDPAT = ptseq->CURPAT;
      ptseq->CURPAT = ptseq->NXTPAT;
      }

	/* ###------------------------------------------------------### */
	/*   initialization						*/
	/* ###------------------------------------------------------### */

    if (ERR_FLG != 0)
      ptseq->ERRFLG = 1;
    else
      {
      if (maxpat == 0)
        {
        DECVAL = 0;
        MAXPAT = 1;
        }
      else
        {
        DECVAL = 1     ;
        MAXPAT = maxpat;
        }

      PAT_SEQPNT         = ptseq;
      PAT_SEQPNT->PATNBR = 0    ;

      PAT_COMPNT         = ptseq->CURCOM;
      PAT_PATPNT         = ptseq->CURPAT;
      PAT_INIPNT         = NULL         ;

      if (ptseq->NXTPAT == NULL)
        STT_NBR = 0;
      else
        STT_NBR = 1;

      if (ptseq->SUBSEQ == 0)
        MAXPAT++;

      PAT_LINNUM = ptseq->LINENO;
      NAM_IDX    = 0            ;

      pat_decl_y_in       = fp;

	/* ###------------------------------------------------------### */
	/*   call the parser and, prepare the returned structure	*/
	/* ###------------------------------------------------------### */

      pat_desc_y_parse ();

      if (ptseq->SUBSEQ == 0)
        PAT_SEQPNT->PATNBR --;

      if (PAT_SEQPNT->ENDFLG == 'Y')
        {
        PAT_SEQPNT->NXTPAT = NULL;
        PAT_SEQPNT->PATNBR ++;
        }
      else
        {
        PAT_SEQPNT->NXTPAT = PAT_PATPNT;
        }

      PAT_SEQPNT->CURPAT = (struct papat *)reverse ((struct chain *)PAT_PATPNT);
      PAT_SEQPNT->CURCOM = (struct pacom *)reverse ((struct chain *)PAT_COMPNT);
      PAT_SEQPNT->LINENO = PAT_LINNUM;

      if (ERR_FLG == 0)
        PAT_SEQPNT->ERRFLG = 0;
      else
        PAT_SEQPNT->ERRFLG = 1;

      PAT_SEQPNT->SUBSEQ++;

	/* ###------------------------------------------------------### */
	/*   if the end of file has bee reached release the value array	*/
	/* ###------------------------------------------------------### */

      if (PAT_SEQPNT->ENDFLG == 'Y')
        {
        mbkfree (VALUE);
        }

      ptseq = PAT_SEQPNT;
      }
    }

  return (ptseq);
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
#line 890 "../../../src/ppt/src/pat_desc_y.y"
{
  long           valu;
  float         fval;
  char          immd;
  char         *text;
  struct array  arra;
  struct label  labe;
  }
/* Line 187 of yacc.c.  */
#line 1036 "y.tab.c"
	PAT_DECL_Y_STYPE;
# define pat_decl_y_stype PAT_DECL_Y_STYPE /* obsolescent; will be withdrawn */
# define PAT_DECL_Y_STYPE_IS_DECLARED 1
# define PAT_DECL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1049 "y.tab.c"

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
#define PAT_DECL_Y_FINAL  4
/* PAT_DECL_Y_LAST -- Last index in PAT_DECL_Y_TABLE.  */
#define PAT_DECL_Y_LAST   42

/* PAT_DECL_Y_NTOKENS -- Number of terminals.  */
#define PAT_DECL_Y_NTOKENS  38
/* PAT_DECL_Y_NNTS -- Number of nonterminals.  */
#define PAT_DECL_Y_NNTS  25
/* PAT_DECL_Y_NRULES -- Number of rules.  */
#define PAT_DECL_Y_NRULES  41
/* PAT_DECL_Y_NRULES -- Number of states.  */
#define PAT_DECL_Y_NSTATES  62

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
       0,     0,     3,     8,    10,    11,    14,    16,    18,    21,
      23,    25,    27,    29,    31,    33,    38,    45,    48,    49,
      53,    55,    57,    62,    63,    66,    69,    73,    75,    80,
      81,    83,    85,    87,    90,    94,    96,    98,   100,   102,
     104,   106
};

/* PAT_DECL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const pat_decl_y_type_int8 pat_decl_y_rhs[] =
{
      39,     0,    -1,    40,    52,    61,    62,    -1,    41,    -1,
      -1,    41,    42,    -1,    53,    -1,    43,    -1,     1,    62,
      -1,    51,    -1,    14,    -1,    45,    -1,    46,    -1,    47,
      -1,    48,    -1,    48,    22,     9,    29,    -1,    48,    22,
       9,    50,     9,    29,    -1,    21,    49,    -1,    -1,    49,
      16,    21,    -1,    34,    -1,    15,    -1,    44,     6,    10,
      62,    -1,    -1,    30,    62,    -1,    55,    54,    -1,    12,
      23,    62,    -1,    56,    -1,     7,    57,     3,    56,    -1,
      -1,    21,    -1,    58,    -1,    59,    -1,     9,    60,    -1,
      27,     9,    60,    -1,    18,    -1,    26,    -1,    24,    -1,
      36,    -1,    25,    -1,    17,    -1,    32,    -1
};

/* PAT_DECL_Y_RLINE[PAT_DECL_Y_N] -- source line where rule number PAT_DECL_Y_N was defined.  */
static const pat_decl_y_type_uint16 pat_decl_y_rline[] =
{
       0,   953,   953,   961,   964,   966,   971,   972,   973,   978,
     979,   987,   989,   991,   996,  1005,  1017,  1031,  1048,  1050,
    1057,  1058,  1062,  1069,  1071,  1077,  1101,  1264,  1272,  1298,
    1299,  1304,  1317,  1333,  1339,  1346,  1348,  1350,  1352,  1354,
    1359,  1364
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
  "description_block", "..description_item..", "description_item",
  "other_statement", "name", "simple_name", "indexed_name", "slice_name",
  "Identifier...Identifier..", "...Identifier..", "direction",
  "initialization_statement", ".save_statement.", "pattern_description",
  "unlabeled_pattern", ".label.", ".Identifier.", "date", "absolute_date",
  "relative_date", "time_unit", "END_ERR", "Semicolons_ERR", 0
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
       0,    38,    39,    40,    41,    41,    42,    42,    42,    43,
      43,    44,    44,    44,    45,    46,    47,    48,    49,    49,
      50,    50,    51,    52,    52,    53,    54,    55,    55,    56,
      56,    57,    57,    58,    59,    60,    60,    60,    60,    60,
      61,    62
};

/* PAT_DECL_Y_R2[PAT_DECL_Y_N] -- Number of symbols composing right hand side of rule PAT_DECL_Y_N.  */
static const pat_decl_y_type_uint8 pat_decl_y_r2[] =
{
       0,     2,     4,     1,     0,     2,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     6,     2,     0,     3,
       1,     1,     4,     0,     2,     2,     3,     1,     4,     0,
       1,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1
};

/* PAT_DECL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when PAT_DECL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const pat_decl_y_type_uint8 pat_decl_y_defact[] =
{
       4,     0,    23,     0,     1,     0,     0,     0,     0,    10,
      18,     5,     7,     0,    11,    12,    13,    14,     9,     6,
       0,    27,    41,    24,    40,     0,     8,     0,     0,     0,
      31,    32,    17,     0,     0,     0,    25,     2,    35,    37,
      39,    36,    38,    33,     0,    29,     0,     0,     0,     0,
      34,    30,    28,    19,    22,    21,    15,    20,     0,    26,
       0,    16
};

/* PAT_DECL_Y_DEFGOTO[NTERM-NUM].  */
static const pat_decl_y_type_int8 pat_decl_y_defgoto[] =
{
      -1,     1,     2,     3,    11,    12,    13,    14,    15,    16,
      17,    32,    58,    18,     6,    19,    36,    20,    21,    29,
      30,    31,    43,    25,    23
};

/* PAT_DECL_Y_PACT[STATE-NUM] -- Index in PAT_DECL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define PAT_DECL_Y_PACT_NINF -25
static const pat_decl_y_type_int8 pat_decl_y_pact[] =
{
     -25,     3,   -24,     0,   -25,   -21,    -4,   -21,    -5,   -25,
       4,   -25,   -25,     9,   -25,   -25,   -25,     1,   -25,   -25,
      13,   -25,   -25,   -25,   -25,   -21,   -25,   -16,    17,    24,
     -25,   -25,    12,    19,    22,    10,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -16,    11,    14,   -21,   -10,   -21,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,    25,   -25,
       7,   -25
};

/* PAT_DECL_Y_PGOTO[NTERM-NUM].  */
static const pat_decl_y_type_int8 pat_decl_y_pgoto[] =
{
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,    -8,   -25,
     -25,   -25,    -6,   -25,    -7
};

/* PAT_DECL_Y_TABLE[PAT_DECL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what PAT_DECL_Y_DEFACT says.
   If PAT_DECL_Y_TABLE_NINF, syntax error.  */
#define PAT_DECL_Y_TABLE_NINF -31
static const pat_decl_y_type_int8 pat_decl_y_table[] =
{
      26,     7,    38,     4,    27,    55,     5,     8,    39,    40,
      41,    22,   -29,    24,     9,    33,   -30,    -3,    37,    56,
      42,    10,    28,    34,    57,    35,    44,    45,    46,    47,
      -3,    48,    51,    49,    60,    53,    61,    52,    50,     0,
      54,     0,    59
};

static const pat_decl_y_type_int8 pat_decl_y_check[] =
{
       7,     1,    18,     0,     9,    15,    30,     7,    24,    25,
      26,    32,    12,    17,    14,     6,    12,    17,    25,    29,
      36,    21,    27,    22,    34,    12,     9,     3,    16,    10,
      30,     9,    21,    23,     9,    21,    29,    45,    44,    -1,
      47,    -1,    49
};

/* PAT_DECL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const pat_decl_y_type_uint8 pat_decl_y_stos[] =
{
       0,    39,    40,    41,     0,    30,    52,     1,     7,    14,
      21,    42,    43,    44,    45,    46,    47,    48,    51,    53,
      55,    56,    32,    62,    17,    61,    62,     9,    27,    57,
      58,    59,    49,     6,    22,    12,    54,    62,    18,    24,
      25,    26,    36,    60,     9,     3,    16,    10,     9,    23,
      60,    21,    56,    21,    62,    15,    29,    34,    50,    62,
       9,    29
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
int pat_desc_y_parse (void *PAT_DECL_Y_PARSE_PARAM);
#else
int pat_desc_y_parse ();
#endif
#else /* ! PAT_DECL_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int pat_desc_y_parse (void);
#else
int pat_desc_y_parse ();
#endif
#endif /* ! PAT_DECL_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
int pat_decl_y_char;

/* The semantic value of the look-ahead symbol.  */
PAT_DECL_Y_STYPE pat_decl_y_lval;

/* Number of syntax errors so far.  */
int pat_decl_y_nerrs;



/*----------.
| pat_desc_y_parse.  |
`----------*/

#ifdef PAT_DECL_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
pat_desc_y_parse (void *PAT_DECL_Y_PARSE_PARAM)
#else
int
pat_desc_y_parse (PAT_DECL_Y_PARSE_PARAM)
    void *PAT_DECL_Y_PARSE_PARAM;
#endif
#else /* ! PAT_DECL_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
pat_desc_y_parse (void)
#else
int
pat_desc_y_parse ()

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
#line 957 "../../../src/ppt/src/pat_desc_y.y"
    { PAT_SEQPNT->ENDFLG = 'Y'; }
    break;

  case 10:
#line 980 "../../../src/ppt/src/pat_desc_y.y"
    {
		PAT_COMPNT = lcl_addpacom (PAT_COMPNT, (pat_decl_y_vsp[(1) - (1)].text), STT_NBR);
		STT_NBR    = 0;
		}
    break;

  case 11:
#line 988 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.arra) = (pat_decl_y_vsp[(1) - (1)].arra); }
    break;

  case 12:
#line 990 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.arra) = (pat_decl_y_vsp[(1) - (1)].arra); }
    break;

  case 13:
#line 992 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.arra) = (pat_decl_y_vsp[(1) - (1)].arra); }
    break;

  case 14:
#line 997 "../../../src/ppt/src/pat_desc_y.y"
    {
		(pat_decl_y_val.arra).ident = (pat_decl_y_vsp[(1) - (1)].text);
		(pat_decl_y_val.arra).left  = -1;
		(pat_decl_y_val.arra).right = -1;
		}
    break;

  case 15:
#line 1009 "../../../src/ppt/src/pat_desc_y.y"
    {
		(pat_decl_y_val.arra).ident = (pat_decl_y_vsp[(1) - (4)].text);
		(pat_decl_y_val.arra).left  = (pat_decl_y_vsp[(3) - (4)].valu);
		(pat_decl_y_val.arra).right = (pat_decl_y_vsp[(3) - (4)].valu);
		}
    break;

  case 16:
#line 1023 "../../../src/ppt/src/pat_desc_y.y"
    {
		(pat_decl_y_val.arra).ident = (pat_decl_y_vsp[(1) - (6)].text);
		(pat_decl_y_val.arra).left  = (pat_decl_y_vsp[(3) - (6)].valu);
		(pat_decl_y_val.arra).right = (pat_decl_y_vsp[(5) - (6)].valu);
		}
    break;

  case 17:
#line 1033 "../../../src/ppt/src/pat_desc_y.y"
    {
		char name[256];
		long  i;

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

  case 19:
#line 1053 "../../../src/ppt/src/pat_desc_y.y"
    { pshnam ((pat_decl_y_vsp[(3) - (3)].text)); }
    break;

  case 22:
#line 1066 "../../../src/ppt/src/pat_desc_y.y"
    { PAT_INIPNT = addini (PAT_INIPNT, (pat_decl_y_vsp[(1) - (4)].arra), (pat_decl_y_vsp[(3) - (4)].text)); }
    break;

  case 24:
#line 1073 "../../../src/ppt/src/pat_desc_y.y"
    { PAT_SEQPNT->SAVFLG = 'Y'; }
    break;

  case 25:
#line 1079 "../../../src/ppt/src/pat_desc_y.y"
    {
		if (PAT_INIPNT == NULL)
		  PAT_PATPNT->ACTFLAG = 'U';
		else
		  PAT_PATPNT->ACTFLAG = 'I';

		PAT_PATPNT->TIME  = (pat_decl_y_vsp[(1) - (2)].labe).date ;
		PAT_PATPNT->LABEL = (pat_decl_y_vsp[(1) - (2)].labe).label;

		PAT_PATPNT->PAINI = (struct paini *)
		                    reverse ((struct chain *) PAT_INIPNT);
		PAT_INIPNT        = NULL;

		MAXPAT -= DECVAL;
		PAT_SEQPNT->PATNBR++;

		if (MAXPAT == 0)
		  PAT_DECL_Y_ACCEPT;
		}
    break;

  case 26:
#line 1104 "../../../src/ppt/src/pat_desc_y.y"
    {
		char            c     = '\0';
		long             i     = 0   ;
		unsigned short  idx   = 0   ;
		char            endfl = 'Y' ;
		char            cmpfl = 'F' ;
		struct pagrp   *ptgrp = PAT_SEQPNT->PAGRP;
		struct paiol   *ptiol = PAT_SEQPNT->PAIOL;
		struct paevt   *ptevt = NULL;

		while (idx < PAT_SEQPNT->IOLNBR)
		  {
		  if (((ptiol + idx)->FLAG & PAT_IOL__TRACE) != 0)
		    c = '*';
		  else
		    c = (pat_decl_y_vsp[(2) - (3)].text) [i++];

		  if (c == '\0')
		    break;

		/* ###----------------------------------------------### */
		/*   if the end of the current array is reached go to	*/
		/* the next group					*/
		/* ###----------------------------------------------### */

		  if ((ptgrp !=  NULL                          ) &&
		      (idx   == (ptgrp->LENGTH + ptgrp->FINDEX))   )
		    {
		    ptgrp = ptgrp->NEXT;
		    endfl = 'Y';
		    }

		/* ###----------------------------------------------### */
		/*   otherwise, continue scanning the group		*/
		/* ###----------------------------------------------### */

		  if (endfl == 'N')
		    {
		    islegal (idx, c, cmpfl, 2);
		    switch  ((ptiol + idx)->FORMAT)
		      {
		      case 'X':
		        ptevt  = isevent (ptevt, idx, cmpfl, c, 0);
		        idx   += 4;
		        break;
		      case 'O':
		        ptevt  = isevent (ptevt, idx, cmpfl, c, 1);
		        idx   += 3;
		        break;
		      case 'B':
		        ptevt = isevent (ptevt, idx, cmpfl, c, 3);
		        idx++;
		        break;
		      }
		    }

		  else
		    {
		/* ###----------------------------------------------### */
		/*   begining a new array or a new single bit		*/
		/* ###----------------------------------------------### */

		    if (c == '?')
		      {
		      cmpfl = 'C';
		      endfl = 'n';
		      }
		    else
		      {
		      if (endfl == 'Y')
		        cmpfl = 'F';

		/* ###----------------------------------------------### */
		/*   if begining a new array				*/
		/* ###----------------------------------------------### */

		      if ((ptgrp != NULL) && (idx == ptgrp->FINDEX))
		        {
		        islegal (idx, c, cmpfl, 1);
		        endfl = 'N';
		        switch ((ptiol + idx)->FORMAT)
		          {
		          case 'X':
		            switch (ptgrp->LENGTH % 4)
		              {
		              case 1:
		                ptevt = isevent (ptevt, idx, cmpfl, c, 3);
		                idx++;
		                break;
		              case 2:
		                ptevt  = isevent (ptevt, idx, cmpfl, c, 2);
		                idx   += 2;
		                break;
		              case 3:
		                ptevt  = isevent (ptevt, idx, cmpfl, c, 1);
		                idx   += 3;
		                break;
		              case 0:
		                ptevt  = isevent (ptevt, idx, cmpfl, c, 0);
		                idx   += 4;
		                break;
		              }
		            break;
		          case 'O':
		            switch (ptgrp->LENGTH % 3)
		              {
		              case 1:
		                ptevt = isevent (ptevt, idx, cmpfl, c, 3);
		                idx++;
		                break;
		              case 2:
		                ptevt  = isevent (ptevt, idx, cmpfl, c, 2);
		                idx   += 2;
		                break;
		              case 0:
		                ptevt  = isevent (ptevt, idx, cmpfl, c, 1);
		                idx   += 3;
		                break;
		              }
		            break;
		          case 'B':
		            ptevt = isevent (ptevt, idx, cmpfl, c, 3);
		            idx++;
		            break;
		          }
		        }

		      else
		        {
		/* ###----------------------------------------------### */
		/*    Begining a new single bit				*/
		/* ###----------------------------------------------### */

		        islegal (idx, c, cmpfl, 0);
		        ptevt = isevent (ptevt, idx, cmpfl, c, 3);
		        cmpfl = 'F';
		        idx++;
		        }
		      }
		    }
		  }

		if ((c != '\0') && ((pat_decl_y_vsp[(2) - (3)].text) [i] != '\0'))
{
printf ("pat : %s < i : %d < index : %d\n", (pat_decl_y_vsp[(2) - (3)].text), i, idx);
		  ERR_FLG += pat_error (3, NULL, ' ', PAT_LINNUM);
}

		if (idx < PAT_SEQPNT->IOLNBR)
		  ERR_FLG += pat_error (15, NULL, ' ', PAT_LINNUM);

		PAT_PATPNT = lcl_addpapat (PAT_PATPNT, NULL, PAT_LINNUM);

		PAT_PATPNT->PAEVT = ptevt;
		PAT_PATPNT->BLANK = (pat_decl_y_vsp[(3) - (3)].valu);
		STT_NBR++;
		}
    break;

  case 27:
#line 1265 "../../../src/ppt/src/pat_desc_y.y"
    {
		if ((PAT_MODE & PAT_DLY__STRICT) != 0)
		  ERR_FLG += pat_error (16, NULL, ' ', PAT_LINNUM);

		(pat_decl_y_val.labe).label = (pat_decl_y_vsp[(1) - (1)].text)     ;
		(pat_decl_y_val.labe).date  = CURDATE;
		}
    break;

  case 28:
#line 1276 "../../../src/ppt/src/pat_desc_y.y"
    {
		if ((PAT_MODE & PAT_DLY__IGNORE) != 0)
		  {
		  (pat_decl_y_val.labe).label = (pat_decl_y_vsp[(4) - (4)].text);
		  (pat_decl_y_val.labe).date  = 0 ;
		  }
		else
		  {
		  if ((pat_decl_y_vsp[(2) - (4)].valu) < 0)
		    ERR_FLG += pat_error (17, NULL, ' ', PAT_LINNUM);

		  if ((pat_decl_y_vsp[(2) - (4)].valu) != 0)
		    PAT_SEQPNT->FLAGS &= ~PAT_SEQ__ZERODELAY;

		  (pat_decl_y_val.labe).label = (pat_decl_y_vsp[(4) - (4)].text);
		  (pat_decl_y_val.labe).date  = (pat_decl_y_vsp[(2) - (4)].valu);
		  }
		}
    break;

  case 29:
#line 1298 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.text) = NULL; }
    break;

  case 30:
#line 1300 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.text) = (pat_decl_y_vsp[(1) - (1)].text)  ; }
    break;

  case 31:
#line 1305 "../../../src/ppt/src/pat_desc_y.y"
    {
		if ((PAT_MODE & PAT_DLY__STRICT) != 0)
		  {
		  if (((pat_decl_y_vsp[(1) - (1)].valu)                 <= CURDATE) &&
		      (PAT_SEQPNT->SUBSEQ == 0      ) &&
		      (PAT_SEQPNT->CURPAT == NULL   )   )
		    ERR_FLG += pat_error (16, NULL, ' ', PAT_LINNUM);
		  }

		CURDATE = (pat_decl_y_vsp[(1) - (1)].valu);
		(pat_decl_y_val.valu)      = (pat_decl_y_vsp[(1) - (1)].valu);
		}
    break;

  case 32:
#line 1318 "../../../src/ppt/src/pat_desc_y.y"
    {
		if ((PAT_MODE & PAT_DLY__STRICT) != 0)
		  {
		  if (((pat_decl_y_vsp[(1) - (1)].valu)                 <= CURDATE) &&
		      (PAT_SEQPNT->SUBSEQ == 0      ) &&
		      (PAT_SEQPNT->CURPAT == NULL   )   )
		    ERR_FLG += pat_error (16, NULL, ' ', PAT_LINNUM);
		  }

		CURDATE += (pat_decl_y_vsp[(1) - (1)].valu)     ;
		(pat_decl_y_val.valu)       = CURDATE;
		}
    break;

  case 33:
#line 1335 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.valu) = (pat_decl_y_vsp[(1) - (2)].valu) * (pat_decl_y_vsp[(2) - (2)].fval); }
    break;

  case 34:
#line 1342 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.valu) = (pat_decl_y_vsp[(2) - (3)].valu) * (pat_decl_y_vsp[(3) - (3)].fval); }
    break;

  case 35:
#line 1347 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.fval) = PAT_CNVFS; }
    break;

  case 36:
#line 1349 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.fval) = PAT_CNVPS; }
    break;

  case 37:
#line 1351 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.fval) = PAT_CNVNS; }
    break;

  case 38:
#line 1353 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.fval) = PAT_CNVUS; }
    break;

  case 39:
#line 1355 "../../../src/ppt/src/pat_desc_y.y"
    { (pat_decl_y_val.fval) = PAT_CNVMS; }
    break;

  case 40:
#line 1360 "../../../src/ppt/src/pat_desc_y.y"
    { pat_decl_y_errok; }
    break;

  case 41:
#line 1365 "../../../src/ppt/src/pat_desc_y.y"
    {
		if (ERR_FLG > 30)
		  PAT_DECL_Y_ABORT;
		else
		   pat_decl_y_errok;
		}
    break;


/* Line 1267 of yacc.c.  */
#line 2697 "y.tab.c"
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


#line 1372 "../../../src/ppt/src/pat_desc_y.y"


