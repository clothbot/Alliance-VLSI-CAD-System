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

/* All symbols defined below should begin with bvl_y_ or BVL_Y_, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define BVL_Y_BISON 1

/* Bison version.  */
#define BVL_Y_BISON_VERSION "2.3"

/* Skeleton name.  */
#define BVL_Y_SKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define BVL_Y_PURE 0

/* Using locations.  */
#define BVL_Y_LSP_NEEDED 0



/* Tokens.  */
#ifndef BVL_Y_TOKENTYPE
# define BVL_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum bvl_y_tokentype {
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
     _NESym = 273,
     _NEXT = 274,
     _NOR = 275,
     _NOT = 276,
     tok_NULL = 277,
     _OR = 278,
     _OUT = 279,
     _XOR = 280,
     ABS = 281,
     ACCESS = 282,
     AFTER = 283,
     ALIAS = 284,
     ALL = 285,
     ARCHITECTURE = 286,
     ARRAY = 287,
     ASSERT = 288,
     ATTRIBUTE = 289,
     AbstractLit = 290,
     Ampersand = 291,
     Apostrophe = 292,
     Arrow = 293,
     BIT = 294,
     BIT_VECTOR = 295,
     BLOCK = 296,
     BODY = 297,
     BUFFER = 298,
     BUS = 299,
     Bar = 300,
     BasedInt = 301,
     BasedReal = 302,
     BitStringLit = 303,
     Box = 304,
     CASE = 305,
     COMPONENT = 306,
     CONFIGURATION = 307,
     CONSTANT = 308,
     CharacterLit = 309,
     Colon = 310,
     Comma = 311,
     DISCONNECT = 312,
     DOWNTO = 313,
     DecimalInt = 314,
     DecimalReal = 315,
     Dot = 316,
     DoubleStar = 317,
     ELSE = 318,
     ELSIF = 319,
     ENTITY = 320,
     ERROR = 321,
     FOR = 322,
     FS = 323,
     FUNCTION = 324,
     GENERATE = 325,
     GENERIC = 326,
     GUARDED = 327,
     IF = 328,
     IS = 329,
     Identifier = 330,
     LIBRARY = 331,
     LOOP = 332,
     LeftParen = 333,
     MAP = 334,
     MOD = 335,
     MS = 336,
     MUX_BIT = 337,
     MUX_VECTOR = 338,
     Minus = 339,
     NATURAL = 340,
     NATURAL_VECTOR = 341,
     NEW = 342,
     NS = 343,
     OF = 344,
     ON = 345,
     OPEN = 346,
     OTHERS = 347,
     _PACKAGE = 348,
     PORT = 349,
     PROCEDURE = 350,
     PROCESS = 351,
     PS = 352,
     Plus = 353,
     RANGE = 354,
     RECORD = 355,
     REG_BIT = 356,
     REG_VECTOR = 357,
     REGISTER = 358,
     REM = 359,
     REPORT = 360,
     RETURN = 361,
     RightParen = 362,
     SELECT = 363,
     SEVERITY = 364,
     SIGNAL = 365,
     _STABLE = 366,
     SUBTYPE = 367,
     Semicolon = 368,
     Slash = 369,
     Star = 370,
     StringLit = 371,
     THEN = 372,
     TO = 373,
     TRANSPORT = 374,
     _TYPE = 375,
     UNITS = 376,
     UNTIL = 377,
     US = 378,
     USE = 379,
     VARIABLE = 380,
     VarAsgn = 381,
     WAIT = 382,
     WARNING = 383,
     WHEN = 384,
     WHILE = 385,
     WITH = 386,
     WOR_BIT = 387,
     WOR_VECTOR = 388
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
#define _NESym 273
#define _NEXT 274
#define _NOR 275
#define _NOT 276
#define tok_NULL 277
#define _OR 278
#define _OUT 279
#define _XOR 280
#define ABS 281
#define ACCESS 282
#define AFTER 283
#define ALIAS 284
#define ALL 285
#define ARCHITECTURE 286
#define ARRAY 287
#define ASSERT 288
#define ATTRIBUTE 289
#define AbstractLit 290
#define Ampersand 291
#define Apostrophe 292
#define Arrow 293
#define BIT 294
#define BIT_VECTOR 295
#define BLOCK 296
#define BODY 297
#define BUFFER 298
#define BUS 299
#define Bar 300
#define BasedInt 301
#define BasedReal 302
#define BitStringLit 303
#define Box 304
#define CASE 305
#define COMPONENT 306
#define CONFIGURATION 307
#define CONSTANT 308
#define CharacterLit 309
#define Colon 310
#define Comma 311
#define DISCONNECT 312
#define DOWNTO 313
#define DecimalInt 314
#define DecimalReal 315
#define Dot 316
#define DoubleStar 317
#define ELSE 318
#define ELSIF 319
#define ENTITY 320
#define ERROR 321
#define FOR 322
#define FS 323
#define FUNCTION 324
#define GENERATE 325
#define GENERIC 326
#define GUARDED 327
#define IF 328
#define IS 329
#define Identifier 330
#define LIBRARY 331
#define LOOP 332
#define LeftParen 333
#define MAP 334
#define MOD 335
#define MS 336
#define MUX_BIT 337
#define MUX_VECTOR 338
#define Minus 339
#define NATURAL 340
#define NATURAL_VECTOR 341
#define NEW 342
#define NS 343
#define OF 344
#define ON 345
#define OPEN 346
#define OTHERS 347
#define _PACKAGE 348
#define PORT 349
#define PROCEDURE 350
#define PROCESS 351
#define PS 352
#define Plus 353
#define RANGE 354
#define RECORD 355
#define REG_BIT 356
#define REG_VECTOR 357
#define REGISTER 358
#define REM 359
#define REPORT 360
#define RETURN 361
#define RightParen 362
#define SELECT 363
#define SEVERITY 364
#define SIGNAL 365
#define _STABLE 366
#define SUBTYPE 367
#define Semicolon 368
#define Slash 369
#define Star 370
#define StringLit 371
#define THEN 372
#define TO 373
#define TRANSPORT 374
#define _TYPE 375
#define UNITS 376
#define UNTIL 377
#define US 378
#define USE 379
#define VARIABLE 380
#define VarAsgn 381
#define WAIT 382
#define WARNING 383
#define WHEN 384
#define WHILE 385
#define WITH 386
#define WOR_BIT 387
#define WOR_VECTOR 388




/* Copy the first part of user declarations.  */
#line 10 "../../../src/bvl/src/bvl_bcomp_y.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mut.h"
#include "log.h"
#include "beh.h"
#include "bvl.h"
#include "bvl_byacc.h"
#include "bvl_bedef.h"

/* ###--------------------------------------------------------------### */
/* function	: bvl_y_error						*/
/* description	: print an error message				*/
/* called func.	: none							*/
/* ###--------------------------------------------------------------### */

static void bvl_y_error (str)

char *str;
  {
  BVL_ERRFLG++;
  fprintf (stderr, "`%s` Error line %d : %s\n", BVL_CURFIL, BEH_LINNUM, str);
  }

/* ###--------------------------------------------------------------### */
/* function	: tobin							*/
/* description	: translate a StringLit, BitStringLit or CharacterLit	*/
/*		  in a string of '0' and '1's				*/
/* ###--------------------------------------------------------------### */

static long tobin (

char *trg  ,
char *src  ,
long   left ,
long   right )

{
  char base         ;
  long  indx         ;
  long  j            = 0;
  long  errflg       = 0;
  char lcl_trg [256];

  lcl_trg [0] = '\0';

  if (src == NULL)
    {
    strcpy (trg,"0");
    }
  else
    {
    if (!strcmp (src,"others"))
      {
      strcpy (trg, src);
      }
    else
      {
      if ((src [0] != '\'') && (src [0] != '"') && (src [0] != '%'))
        {
        base = src [0];
        indx = 2;
        }
      else
        {
        base = 'B';
        indx = 1;
        }

      switch (base)
        {
        case 'B' :
        case 'b' :
          while ((lcl_trg[j] = src[indx]) != '\0')
            {
            switch (src[indx])
              {
              case '0':
              case '1':
              case 'd':				/* Beware Not VHDL	*/
                j++; break;

              case '%' :
              case '"' :
              case '\'':
              case '_' :
                break;

	    default :
	      errflg = 1; bvl_error (73,src);
              }
            indx++;
            }
          break;

        case 'O' :
        case 'o' :
          while (src[indx] != '\0')
            {
            j += 3;
            switch (src[indx])
              {
              case '0' :
                strcat (lcl_trg,"000"); break;
              case '1' :
                strcat (lcl_trg,"001"); break;
              case '2' :
                strcat (lcl_trg,"010"); break;
              case '3' :
                strcat (lcl_trg,"011"); break;
              case '4' :
                strcat (lcl_trg,"100"); break;
              case '5' :
                strcat (lcl_trg,"101"); break;
              case '6' :
                strcat (lcl_trg,"110"); break;
              case '7' :
                strcat (lcl_trg,"111"); break;
              case '"' :
              case '%' :
              case '_' :
                j -= 3; break;
	      default :
	        j -= 3; errflg = 1; bvl_error (73, src);
              }
            indx++;
            }
          break;

        case 'X' :
        case 'x' :
          while (src[indx] != '\0')
            {
            j += 4;
            switch (src[indx])
              {
              case '0' :
                strcat (lcl_trg,"0000"); break;
              case '1' :
                strcat (lcl_trg,"0001"); break;
              case '2' :
                strcat (lcl_trg,"0010"); break;
              case '3' :
                strcat (lcl_trg,"0011"); break;
              case '4' :
                strcat (lcl_trg,"0100"); break;
              case '5' :
                strcat (lcl_trg,"0101"); break;
              case '6' :
                strcat (lcl_trg,"0110"); break;
              case '7' :
                strcat (lcl_trg,"0111"); break;
              case '8' :
                strcat (lcl_trg,"1000"); break;
              case '9' :
                strcat (lcl_trg,"1001"); break;
              case 'a' :
              case 'A' :
                strcat (lcl_trg,"1010"); break;
              case 'b' :
              case 'B' :
                strcat (lcl_trg,"1011"); break;
              case 'c' :
              case 'C' :
                strcat (lcl_trg,"1100"); break;
              case 'd' :
              case 'D' :
                strcat (lcl_trg,"1101"); break;
              case 'e' :
              case 'E' :
                strcat (lcl_trg,"1110"); break;
              case 'f' :
              case 'F' :
                strcat (lcl_trg,"1111"); break;
              case '%' :
              case '"' :
              case '_' :
                j -= 4; break;
	      default :
	        j -= 4; errflg = 1; bvl_error(73,src);
              }
            indx++;
            }
          break;

        default :
          beh_toolbug (17, "tobin", NULL, base);
        }

      if ((j == 0) || (j <= right))
        {
        trg[0] = '0';
        trg[1] = '\0';
        }
      else
        {
        if (left != -1)
          {
          strcpy (trg, &lcl_trg[left]);
          trg[right - left + 1] = '\0';
          }
        else
          strcpy (trg, lcl_trg);
        }
      }
    }

  return (errflg);
}

/* ###--------------------------------------------------------------### */
/* function	: chkdcl						*/
/* ###--------------------------------------------------------------### */

static long chkdcl (object, mode, type, flag, kind, constraint, conf)

char object    ;
long  mode      ;
long  type      ;
char flag      ;
long  kind      ;
char constraint;
long  *conf     ;

  {
  long errflg = 0;
  long lclcnf = 0;

  if (flag != constraint)
    {
    errflg = 1;
    bvl_error (33, NULL);
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
          case BIT:

            lclcnf += BVL_BITDFN + BVL_NORDFN;
            switch (mode)
              {
              case _IN :
                lclcnf += BVL_ICNDFN; break;
              case _OUT:
                lclcnf += BVL_OCNDFN; break;
              case _INOUT :
                lclcnf += BVL_BCNDFN; break;
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != 0)
              errflg = 1;
            break;

          case MUX_BIT:

            lclcnf += BVL_MUXDFN + BVL_BUSDFN;
            switch (mode)
              {
              case _OUT :
                lclcnf += BVL_OCNDFN; break;
              case _INOUT :
                lclcnf += BVL_BCNDFN; break;
              case _IN :
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != BUS)
              errflg = 1;
            break;

          case WOR_BIT:

            lclcnf += BVL_WORDFN + BVL_BUSDFN;
            switch (mode)
              {
              case _OUT :
                lclcnf += BVL_OCNDFN; break;
              case _INOUT :
                lclcnf += BVL_BCNDFN; break;
              case _IN :
              case _LINKAGE :
              case 0 :
                errflg = 1; break;
              }
            if (kind != BUS)
              errflg = 1;
            break;

          case REG_BIT:
          case NATURAL:

            errflg = 1;
            break;
          }
        if (errflg == 1)
          bvl_error (5, NULL);
        break;

      case 'G':
	/* ###------------------------------------------------------### */
	/*    If object is a generic :					*/
	/*       - only natural type is allowed				*/
	/* ###------------------------------------------------------### */

        if ((type != NATURAL) || (mode != 0) || (kind != 0))
          {
          errflg = 1;
          bvl_error (77, NULL);
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
            lclcnf += BVL_BITDFN + BVL_NORDFN;
            if ((mode != 0) || (kind != 0))
              errflg = 1;
            break;
          case MUX_BIT:
            lclcnf += BVL_MUXDFN + BVL_BUSDFN;
            if ((mode != 0) || (kind != BUS))
              errflg = 1;
            break;
          case WOR_BIT:
            lclcnf += BVL_WORDFN + BVL_BUSDFN;
            if ((mode != 0) || (kind != BUS))
              errflg = 1;
            break;
          case REG_BIT:
            lclcnf += BVL_RBIDFN + BVL_REGDFN;
            if ((mode != 0) || (kind != REGISTER))
              errflg = 1;
            break;
          case NATURAL:
            errflg = 1; break;
          }

        if (mode != 0)
          errflg = 1;

        if (errflg == 1)
          bvl_error (11, NULL);
        break;

      case 'C':
	/* ###------------------------------------------------------### */
	/*    If object is a constant :					*/
	/*       - only bit type without any other indication is legal	*/
	/* ###------------------------------------------------------### */

        lclcnf += BVL_CSTDFN;
        if ((type != BIT) || (mode != 0) || (kind != 0))
          {
          errflg = 1;
          bvl_error (78, NULL);
          }
        break;
      }
    }

  *conf = lclcnf ;
  return (errflg);
  }

/* ###--------------------------------------------------------------### */
/* function	: addstr						*/
/* ###--------------------------------------------------------------### */

static void *addstr (ptfig, object, mode, type, flag, name, left, right)

struct befig *ptfig ;
char          object;
long           mode  ;
long           type  ;
char          flag  ;
char         *name  ;
short         left  ;
short         right ;

  {
  void  *pnt          = NULL;
  char   porflg       = 0;
  char   rinflg       = 0;
  char   outflg       = 0;
  char   busflg       = 0;
  char   auxflg       = 0;
  char   buxflg       = 0;
  char   regflg       = 0;
  char   lclmod       = 'I';
  char   lcltyp       = 'B';
  char   extname [100];
  short  i            ;
  short  inc          = 1;

  switch (object)
    {
    case 'P':

	/* ###------------------------------------------------------### */
	/*   if object is a port ...					*/
	/* ###------------------------------------------------------### */

      porflg = 1;
      switch (mode)
        {
        case _IN:
          lclmod = 'I'; lcltyp = 'B'; rinflg = 1; break;
        case _OUT:
          switch (type)
            {
            case BIT:
              lclmod = 'O'; lcltyp = 'B'; outflg = 1; break;
            case MUX_BIT:
              lclmod = 'Z'; lcltyp = 'M'; busflg = 1; break;
            case WOR_BIT:
              lclmod = 'Z'; lcltyp = 'W'; busflg = 1; break;
            }
          break;
        case _INOUT:
          rinflg = 1;
          switch (type)
            {
            case BIT:
              lclmod = 'B'; lcltyp = 'B'; outflg = 1; break;
            case MUX_BIT:
              lclmod = 'T'; lcltyp = 'M'; busflg = 1; break;
            case WOR_BIT:
              lclmod = 'T'; lcltyp = 'W'; busflg = 1; break;
            }
          break;
        }
      break;

    case 'S':

	/* ###------------------------------------------------------### */
	/*   if object is a signal ...					*/
	/* ###------------------------------------------------------### */

      switch (type)
        {
        case BIT:
          lcltyp = 'B'; rinflg = BVL_AUXMOD; auxflg = 1; break;
        case REG_BIT:
          rinflg = 1; regflg = 1; break;
        case MUX_BIT:
          lcltyp = 'M'; rinflg = 1; buxflg = 1; break;
        case WOR_BIT:
          lcltyp = 'W'; rinflg = 1; buxflg = 1; break;
        }
      break;
    }

  if (flag == 'S')
    {
	/* ###------------------------------------------------------### */
	/*   if object is a scalar ...					*/
	/* ###------------------------------------------------------### */

    if (porflg == 1)
      ptfig->BEPOR = beh_addbepor (ptfig->BEPOR, name, lclmod, lcltyp);
    if (rinflg == 1)
      ptfig->BERIN = beh_addberin (ptfig->BERIN, name);
    if (outflg == 1)
      ptfig->BEOUT = beh_addbeout (ptfig->BEOUT, name, NULL, NULL);
    if (busflg == 1)
      ptfig->BEBUS = beh_addbebus (ptfig->BEBUS, name, NULL, NULL, lcltyp);
    if (auxflg == 1)
      ptfig->BEAUX = beh_addbeaux (ptfig->BEAUX, name, NULL, NULL);
    if (buxflg == 1)
      ptfig->BEBUX = beh_addbebux (ptfig->BEBUX, name, NULL, NULL, lcltyp);
    if (regflg == 1)
      ptfig->BEREG = beh_addbereg (ptfig->BEREG, name, NULL, NULL);

    }
  else
    {
	/* ###------------------------------------------------------### */
	/*   if object is an array ...					*/
	/* ###------------------------------------------------------### */

    if (left >= right)
      inc = -1;

    for (i=left ; i!=(right+inc) ; i+=inc)
      {
      sprintf (extname, "%s %d", name, i);

      if (porflg == 1)
        ptfig->BEPOR = beh_addbepor (ptfig->BEPOR, extname, lclmod, lcltyp);
      if (rinflg == 1)
        ptfig->BERIN = beh_addberin (ptfig->BERIN, extname);
      if (outflg == 1)
        ptfig->BEOUT = beh_addbeout (ptfig->BEOUT, extname, NULL, NULL);
      if (busflg == 1)
        ptfig->BEBUS = beh_addbebus (ptfig->BEBUS, extname, NULL, NULL, lcltyp);
      if (auxflg == 1)
        ptfig->BEAUX = beh_addbeaux (ptfig->BEAUX, extname, NULL, NULL);
      if (buxflg == 1)
        ptfig->BEBUX = beh_addbebux (ptfig->BEBUX, extname, NULL, NULL, lcltyp);
      if (regflg == 1)
        ptfig->BEREG = beh_addbereg (ptfig->BEREG, extname, NULL, NULL);
      }
    }

  if (outflg == 1)
    pnt = (void *) ptfig->BEOUT;
  if (busflg == 1)
    pnt = (void *) ptfig->BEBUS;
  if (auxflg == 1)
    pnt = (void *) ptfig->BEAUX;
  if (buxflg == 1)
    pnt = (void *) ptfig->BEBUX;
  if (regflg == 1)
    pnt = (void *) ptfig->BEREG;

  return (pnt);
  }

/* ###--------------------------------------------------------------### */
/* function	: addgen						*/
/* description	: create one or more BEGEN structures			*/
/*		  For a scalar a BEGEN is created at the head of	*/
/*		  existing BEGEN list.					*/
/*		  For an array (including arraies of one element) a set	*/
/*		  of BEGENs are created in a sorted list. BEGEN related	*/
/*		  to the index i of the array is named `name(i)`. The	*/
/*		  head of the list represents the right bound of the	*/
/*		  array. This list is then chained to the head of	*/
/*		  existing BEGEN list.					*/
/* called func.	: beh_addbegen, namealloc				*/
/* ###--------------------------------------------------------------### */

static struct begen *addgen (last_gen, nat_lst, nam_lst, type, left, right)

struct begen *last_gen; 	/* pointer on the last begen structure	*/
struct chain *nam_lst ;		/* generic's name list			*/
struct chain *nat_lst ;		/* generic's value list			*/
char         *type    ;		/* generic's type			*/
short         left    ;		/* array's left bound (= -1 if scalar)	*/
short         right   ;		/* array's right bound (= -1 if scalar)	*/

  {
  char          extname [128];
  char         *name         ;
  struct begen *ptgen        ;
  struct chain *ptauxnam     ;
  struct chain *ptauxnat     ;
  long           i            ;
  long           inc          = 1;

  ptgen    = last_gen;
  ptauxnam = nam_lst ;
  ptauxnat = nat_lst ;

  if ((left == -1) && (right == -1))
    {
    if ((ptauxnat != NULL) && (ptauxnat->NEXT == NULL))
      {
      while (ptauxnam != NULL)
        {
        name     = namealloc    ((char *) ptauxnam->DATA);
        ptgen    = beh_addbegen (ptgen, name, type, (void *) ptauxnat->DATA);
        ptauxnam = ptauxnam->NEXT;
        }
      }
    else
      bvl_error (75, NULL);
    }
  else
    {
    if (left >= right)
      inc = -1;

    while (ptauxnam != NULL)
      {
      for (i=left ; i!=(right+inc) ; i+=inc)
        {
        sprintf (extname, "%s %d", (char *)ptauxnam->DATA, i);
        name = namealloc (extname);

        if (ptauxnat != NULL)
          {
          ptgen    = beh_addbegen (ptgen, name, type, (void *)ptauxnat->DATA);
	  ptauxnat = ptauxnat->NEXT;
          }
        else
          bvl_error (75, NULL);
        }

      if (ptauxnat != NULL)
        bvl_error (75, NULL);

      ptauxnat = nat_lst;
      ptauxnam = ptauxnam->NEXT;
      }
    }
  return (ptgen);
  }

/* ###--------------------------------------------------------------### */
/* function	: cpyabllst						*/
/* description	: duplicate bvl_abllst structure 			*/
/* called func.	: addchain, reverse, copyExpr				*/
/* ###--------------------------------------------------------------### */

static struct chain *cpyabllst (abllst)

struct chain *abllst;
  {
  struct chain *pt_abllst = NULL;

  while (abllst != NULL)
    {
    pt_abllst = addchain (pt_abllst, copyExpr ((struct chain *)abllst->DATA));
    abllst    = abllst->NEXT;
    }

  pt_abllst = reverse (pt_abllst);
  return (pt_abllst);
  }

/* ###--------------------------------------------------------------### */
/* function	: cpyablstr						*/
/* description	: duplicate bvl_ablstr structure 			*/
/* called func.	: mbkalloc, cpyabllst					*/
/* ###--------------------------------------------------------------### */

static bvl_ablstr cpyablstr (ablstr)

bvl_ablstr ablstr;
  {
  bvl_ablstr pt_ablstr;

  pt_ablstr.IDENT    = NULL;
  pt_ablstr.WIDTH    = ablstr.WIDTH;
  pt_ablstr.LIST_ABL = cpyabllst (ablstr.LIST_ABL);

  return (pt_ablstr);
  }

/* ###--------------------------------------------------------------### */
/* function     : crtabl						*/
/* description  : combine at most two ABLs and build a new one          */
/*    		  The following operations can be performed :		*/
/*		    CONC    perform concatenation			*/
/*		    NOPI    initialize a structure for a signal (scalar	*/
/*		            or array)					*/
/*		    NOPS    initialize a structure for a literal	*/
/*		    NE      create a structure with an ABL representing	*/
/*		            the 'non equality' of two expressions	*/
/*		    EQ      create a structure with an ABL representing	*/
/*		            the 'equality' of two expressions		*/
/*		    NOT     perform logical not of an expression	*/
/*		    AND     perform logical and  between two expressions*/
/*		    OR      perform logical or   between two expressions*/
/*		    NAND    perform logical nand between two expressions*/
/*		    NOR     perform logical nor  between two expressions*/
/*		    XOR     perform logical xor  between two expressions*/
/*		    ANDM    perform logical and  between two expressions*/
/*		            (the second expression is a scalar)		*/
/* called func. : createAtom , createExpr, addQExpr , beh_toolbug,	*/
/*		  bvl_error , addchain   , freechain			*/
/* ###--------------------------------------------------------------### */

static bvl_ablstr crtabl (

short      oper ,
bvl_ablstr expr1,
bvl_ablstr expr2,
long        left ,
long        right )

  {
  char            name [256]      ;
  char           *name2           ;
  struct chain   *pt_abl1         = NULL;
  struct chain   *pt_abl2         = NULL;
  struct chain   *pt_aux1         = NULL;
  struct chain   *pt_aux2         = NULL;
  bvl_ablstr      result          ;
  char            lcl_buffer [256];
  short           inc             ;
  short           i               ;
  char            true_flag_un    = 0;
  char            true_flag_zero  = 0;
  struct chain   *abl_un          = createAtom ("'1'");
  struct chain   *abl_zero        = createAtom ("'0'");

  result.IDENT    = NULL;
  result.TIME     = 0   ;
  result.LIST_ABL = NULL;
  result.WIDTH    = 0   ;

  switch (oper)
    {
    case CONC :
      if ((expr1.LIST_ABL == NULL) || (expr2.LIST_ABL == NULL))
        beh_toolbug (4, "crtabl", NULL, 0);
      else
        {
        if (expr1.LIST_ABL == expr2.LIST_ABL)
          beh_toolbug (16, "crtabl", NULL, 0);
        else
          {
          pt_aux2 = expr2.LIST_ABL;
          while (pt_aux2->NEXT != NULL)
            pt_aux2 = pt_aux2->NEXT;

          pt_aux2->NEXT = expr1.LIST_ABL;

          result.LIST_ABL = expr2.LIST_ABL;
          result.WIDTH    = expr1.WIDTH + expr2.WIDTH;

          expr1.LIST_ABL  = NULL;
          expr2.LIST_ABL  = NULL;
          }
        }
      break;

      case NOPI :
        if (expr1.IDENT == NULL)
          beh_toolbug (2, "crtabl", NULL, 0);
        else
          {
          if ((left == -1) && (right == -1))
            {
            result.LIST_ABL = addchain(result.LIST_ABL,createAtom(expr1.IDENT));
            result.WIDTH    = 1;
            }
          else
            {
            if (left <= right)
              {
              inc = 1;
              result.WIDTH = right - left + 1;
              }
            else
              {
              inc = -1;
              result.WIDTH = left - right + 1;
              }

            for (i=left ; i!=(right+inc) ; i+=inc)
              {
              sprintf (name,"%s %i",expr1.IDENT,i);
              name2           = namealloc (name);
              result.LIST_ABL = addchain (result.LIST_ABL,createAtom(name2));
              }
            }
          expr1.IDENT = NULL;
          }
        break;

      case NOPS :
        if (expr1.IDENT == NULL)
          beh_toolbug (2, "crtabl", NULL, 0);
        else
          {
          tobin (lcl_buffer, expr1.IDENT, -1, -1);
          if ((left == -1) && (right == -1))
            {
            left  = 0;
            right = strlen (lcl_buffer) - 1;
            }

          for (i=left ; i<=right ; i++)
            {
            switch ( lcl_buffer[i] )
              {
              case '0' :
                result.LIST_ABL = addchain (result.LIST_ABL,createAtom("'0'"));
                break;
              case '1' :
                result.LIST_ABL = addchain (result.LIST_ABL,createAtom("'1'"));
                break;
/*-----------        Beware Not VHDL        -------------*/
              case 'd' :
                result.LIST_ABL = addchain (result.LIST_ABL,createAtom("'D'"));
                break;
              default  :
                beh_toolbug (15, "crtabl", NULL, expr1.IDENT[i]);
              }
            }
          result.WIDTH = right - left + 1;
          }
        break;

      case STABLE :
        if (expr1.LIST_ABL == NULL)
	  beh_toolbug (3, "crtabl", NULL, 0);
        else
          {
	  pt_aux1 = expr1.LIST_ABL;
          while (pt_aux1 != NULL)
            {
            pt_abl1  = createExpr (STABLE);
            addQExpr (pt_abl1, (struct chain *)pt_aux1->DATA);
            pt_aux1->DATA = pt_abl1;
            pt_aux1  = pt_aux1->NEXT;
            }

          result.LIST_ABL = expr1.LIST_ABL;
          result.WIDTH    = expr1.WIDTH;

          expr1.LIST_ABL  = NULL;
          }
        break;

      case NOT :
        if (expr1.LIST_ABL == NULL)
	  beh_toolbug (3, "crtabl", NULL, 0);
        else
          {
	  pt_aux1  = expr1.LIST_ABL;
          while (pt_aux1 != NULL)
            {
            pt_abl1  = createExpr (NOT);
            addQExpr (pt_abl1, (struct chain *)pt_aux1->DATA);
            pt_aux1->DATA = pt_abl1;
            pt_aux1  = pt_aux1->NEXT;
            }

          result.LIST_ABL = expr1.LIST_ABL;
          result.WIDTH    = expr1.WIDTH;

          expr1.LIST_ABL  = NULL;
          }
        break;

      case EQ :
        if ((expr1.LIST_ABL == NULL) || (expr2.LIST_ABL == NULL))
	  beh_toolbug (4, "crtabl", NULL, 0);
        else
          {
          if (expr1.WIDTH != expr2.WIDTH)
            {
            bvl_error (38,NULL);
            pt_abl2 = createAtom ("'1'");

	    pt_aux1 = expr1.LIST_ABL;
            while (pt_aux1 != NULL)
              {
              freeExpr (pt_aux1->DATA);
              pt_aux1 = pt_aux1->NEXT;
              }
	    pt_aux2 = expr2.LIST_ABL;
            while (pt_aux2 != NULL)
              {
              freeExpr (pt_aux2->DATA);
              pt_aux2 = pt_aux2->NEXT;
              }
            }
          else
            {
	    pt_aux1 = expr1.LIST_ABL;
	    pt_aux2 = expr2.LIST_ABL;
            /* If expr2 = '1' then return expr1 */
            while(pt_aux2 != NULL)
              {
              true_flag_un = 1;
              if(!equalExpr(pt_aux2->DATA,abl_un))
                {
                /* One abl not abl_un */
                true_flag_un = 0;
                break;
                }
              pt_aux2 = pt_aux2->NEXT;  
              }
            if(true_flag_un == 1)
              {
              pt_abl1 = (struct chain *)pt_aux1->DATA;
              pt_aux1 = pt_aux1->NEXT;
              if(pt_aux1 != NULL)
                {
                pt_abl2 = createExpr(AND);
                addQExpr(pt_abl2,pt_abl1);
                pt_abl1 = pt_abl2;
                }
              while(pt_aux1 != NULL)
                {
                addQExpr(pt_abl1,(struct chain *)pt_aux1->DATA);
                pt_aux1 = pt_aux1->NEXT;
                }
              result.LIST_ABL = addchain(result.LIST_ABL,pt_abl1);
              result.WIDTH    = 1;
              expr1.LIST_ABL  = NULL;
              expr2.LIST_ABL  = NULL;
              }
            /* If expr2 = '0' then return NOT(expr1) */
	    pt_aux2 = expr2.LIST_ABL;
            true_flag_zero = 0;
            while(pt_aux2 != NULL)
              {
              true_flag_zero = 1;
              if(!equalExpr(pt_aux2->DATA,abl_zero))
                {
                /* One abl not abl_zero */
                true_flag_zero = 0;
                break;
                }
              pt_aux2 = pt_aux2->NEXT;  
              }
            if(true_flag_zero == 1)
              {
              while(pt_aux1 != NULL)
                {
                pt_abl1 = createExpr(NOT);
                addQExpr(pt_abl1,(struct chain *)pt_aux1->DATA);
                pt_aux1 = pt_aux1->NEXT;
                if(pt_aux1 != NULL)
                  {
                  pt_abl2 = createExpr(AND);
                  addQExpr(pt_abl2,pt_abl1);
                  pt_abl1 = pt_abl2;
                  }
                while(pt_aux1 != NULL)
                  {
                  pt_abl2 = createExpr(NOT);
                  addQExpr(pt_abl2,(struct chain *)pt_aux1->DATA);
                  addQExpr(pt_abl1,pt_abl2);
                  pt_aux1 = pt_aux1->NEXT;
                  }
                /* --pt_abl1 = createExpr(NOT);
                addQExpr(pt_abl1,(struct chain *)pt_aux1->DATA);
                pt_aux1->DATA = pt_abl1;
                pt_aux1       = pt_aux1->NEXT;
                --- */
                }
              result.LIST_ABL = addchain(result.LIST_ABL,pt_abl1);
              result.WIDTH    = 1;
              expr1.LIST_ABL  = NULL;
              expr2.LIST_ABL  = NULL;
              }
               
              
	    pt_aux2 = expr2.LIST_ABL;
            if((true_flag_zero == 0) && (true_flag_un == 0))
              {
              pt_abl1 = createExpr (XOR);
              addQExpr (pt_abl1, (struct chain *)pt_aux1->DATA);
              addQExpr (pt_abl1, (struct chain *)pt_aux2->DATA);

              pt_aux1 = pt_aux1->NEXT;
              pt_aux2 = pt_aux2->NEXT;

	      while (pt_aux1 != NULL)
	        {
                pt_abl2 = createExpr (OR);
                addQExpr (pt_abl2,pt_abl1);

                pt_abl1 = createExpr (XOR);
                addQExpr (pt_abl1, (struct chain *)pt_aux1->DATA);
                addQExpr (pt_abl1, (struct chain *)pt_aux2->DATA);

                addQExpr (pt_abl2, pt_abl1);
                pt_abl1 = pt_abl2;

	        pt_aux1 = pt_aux1->NEXT;
	        pt_aux2 = pt_aux2->NEXT;
	        }
              pt_abl2 = createExpr (NOT);
              addQExpr (pt_abl2, pt_abl1);

              result.LIST_ABL = addchain (result.LIST_ABL,pt_abl2);
              result.WIDTH    = 1;
              freechain (expr1.LIST_ABL);
              freechain (expr2.LIST_ABL);
              expr1.LIST_ABL = NULL;
              expr2.LIST_ABL = NULL;
              }
            }
          }
        break;

      case NE :

        if ((expr1.LIST_ABL == NULL) || (expr2.LIST_ABL == NULL))
	  beh_toolbug (4, "crtabl", NULL, 0);
        else
          {
          if (expr1.WIDTH != expr2.WIDTH)
            {
            bvl_error(38,NULL);
            pt_abl1 = createAtom ("'1'");

	    pt_aux1 = expr1.LIST_ABL;
            while (pt_aux1 != NULL)
              {
              freeExpr (pt_aux1->DATA);
              pt_aux1 = pt_aux1->NEXT;
              }
	    pt_aux2 = expr2.LIST_ABL;
            while (pt_aux2 != NULL)
              {
              freeExpr (pt_aux2->DATA);
              pt_aux2 = pt_aux2->NEXT;
              }
            }
          else
            {
	    pt_aux1 = expr1.LIST_ABL;
	    pt_aux2 = expr2.LIST_ABL;

            /* If expr2 = '0' then return expr1 */
            while(pt_aux2 != NULL)
              {
              true_flag_zero = 1;
              if(!equalExpr(pt_aux2->DATA,abl_zero))
                {
                /* One abl not abl_zero */
                true_flag_zero = 0;
                break;
                }
              pt_aux2 = pt_aux2->NEXT;  
              }
            if(true_flag_zero == 1)
              {
              result.LIST_ABL = expr1.LIST_ABL;
              result.WIDTH    = 1;
              expr1.LIST_ABL  = NULL;
              expr2.LIST_ABL  = NULL;
              }
            /* If expr2 = '1' then return NOT(expr1) */
	    pt_aux2 = expr2.LIST_ABL;
            true_flag_un = 0;
            while(pt_aux2 != NULL)
              {
              true_flag_un = 1;
              if(!equalExpr(pt_aux2->DATA,abl_un))
                {
                /* One abl not abl_un */
                true_flag_un = 0;
                break;
                }
              pt_aux2 = pt_aux2->NEXT;  
              }
            if(true_flag_un == 1)
              {
              while(pt_aux1 != NULL)
                {
                pt_abl1 = createExpr(NOT);
                addQExpr(pt_abl1,(struct chain *)pt_aux1->DATA);
                pt_aux1->DATA = pt_abl1;
                pt_aux1       = pt_aux1->NEXT;
                }
              result.LIST_ABL = expr1.LIST_ABL;
              result.WIDTH    = 1;
              expr1.LIST_ABL  = NULL;
              expr2.LIST_ABL  = NULL;
              }
               
              
	    pt_aux2 = expr2.LIST_ABL;
            if((true_flag_zero == 0) && (true_flag_un == 0))
              {
              pt_abl1 = createExpr (XOR);
              addQExpr (pt_abl1, (struct chain *)pt_aux1->DATA);
              addQExpr (pt_abl1, (struct chain *)pt_aux2->DATA);
  
              pt_aux1 = pt_aux1->NEXT;
              pt_aux2 = pt_aux2->NEXT;

  	      for (i=2 ; i<=expr1.WIDTH ; i++)
	        {
                pt_abl2 = createExpr (OR);
                addQExpr (pt_abl2, pt_abl1);

                pt_abl1 = createExpr (XOR);
                addQExpr (pt_abl1, (struct chain *)pt_aux1->DATA);
                addQExpr (pt_abl1, (struct chain *)pt_aux2->DATA);

                addQExpr (pt_abl2, pt_abl1);
                pt_abl1 = pt_abl2;

	        pt_aux1 = pt_aux1->NEXT;
	        pt_aux2 = pt_aux2->NEXT;
	        }
              result.LIST_ABL = addchain(result.LIST_ABL,pt_abl1);
              result.WIDTH    = 1;
              freechain (expr1.LIST_ABL);
              freechain (expr2.LIST_ABL);
              expr1.LIST_ABL = NULL;
              expr2.LIST_ABL = NULL;
              }
            }
          }
        break;

      case AND  :
      case NAND :
      case OR   :
      case NOR  :
      case XOR  :

        if (expr1.LIST_ABL == NULL)
          {
          if (expr2.LIST_ABL == NULL)
	    beh_toolbug (4, "crtabl", NULL, 0);
          else
            {
            result.LIST_ABL = expr2.LIST_ABL;
            result.WIDTH    = expr2.WIDTH;
            expr2.LIST_ABL  = NULL;
            }
          }
        else
          {
          if (expr2.LIST_ABL == NULL)
            {
            result.LIST_ABL = expr1.LIST_ABL;
            result.WIDTH    = expr1.WIDTH;
            expr1.LIST_ABL  = NULL;
            }
          else
            {
            if (expr1.LIST_ABL == expr2.LIST_ABL)
              beh_toolbug (16, "crtabl", NULL, 0);
            else
              {
              if (expr1.WIDTH != expr2.WIDTH)
                {
                bvl_error(38,NULL);
                }
              else
                {
	        pt_aux1 = expr1.LIST_ABL;
	        pt_aux2 = expr2.LIST_ABL;

	        for (i=1 ; i<=expr1.WIDTH ; i++)
	          {
                  pt_abl1 = createExpr (oper);
                  addQExpr (pt_abl1, (struct chain *)pt_aux1->DATA);
                  addQExpr (pt_abl1, (struct chain *)pt_aux2->DATA);

                  pt_aux1->DATA = (void *)pt_abl1;

	          pt_aux1       = pt_aux1->NEXT;
	          pt_aux2       = pt_aux2->NEXT;
		  }
                }
              result.LIST_ABL = expr1.LIST_ABL;
              result.WIDTH    = expr1.WIDTH;
              freechain (expr2.LIST_ABL);
              expr1.LIST_ABL  = NULL;
              expr2.LIST_ABL  = NULL;
              }
            }
          }
        break;

      case ANDM :
        if ((expr1.LIST_ABL == NULL) || (expr2.LIST_ABL == NULL))
	    beh_toolbug (4, "crtabl", NULL, 0);
        else
          {
          if (expr2.WIDTH != 1)
            {
            bvl_error( 38,NULL);
            }
          else
            {
            pt_aux1 = expr1.LIST_ABL;
            pt_aux2 = expr2.LIST_ABL;
            while (pt_aux1 != NULL)
              {
              pt_abl1 = createExpr (AND);
              addQExpr (pt_abl1,          (struct chain *)pt_aux1->DATA);
              addQExpr (pt_abl1, copyExpr((struct chain *)pt_aux2->DATA));
              pt_aux1->DATA = (void *)pt_abl1;

              pt_aux1       = pt_aux1->NEXT;
              }
            }
          result.LIST_ABL = expr1.LIST_ABL;
          result.WIDTH    = expr1.WIDTH;
	  pt_aux2 = expr2.LIST_ABL;
          while (pt_aux2 != NULL)
            {
            freeExpr (pt_aux2->DATA);
            pt_aux2 = pt_aux2->NEXT;
            }
          freechain (expr2.LIST_ABL);
          expr2.LIST_ABL  = NULL;
          expr1.LIST_ABL  = NULL;
          }
        break;

      default :
	beh_toolbug (1, "crtabl", NULL, 0);
      }

    return (result);
    }

/* ###--------------------------------------------------------------### */
/* function	: bvl_select						*/
/* description	: create an abl representing the choice in a selected	*/
/*		  signal assignment and perform unicity verification	*/
/*		  using BDDs.						*/
/* called func.	: tobin       , bddToAbl     , addInputCct      ,	*/
/*		  substPhyExpr, initializeCct, createNodeTermBdd,	*/
/*		  bvl_error   , notBdd       , applyBinBdd      ,	*/
/*		  addchain    , namealloc				*/
/* ###--------------------------------------------------------------### */

static void bvl_select (result, pt_str, pt_bdd, pt_ablstr)

bvl_ablstr   *result;
struct chain *pt_str;		/* pointer on a list of choices		*/
pNode        *pt_bdd;		/* used to check if a choice is legal	*/
bvl_ablstr    pt_ablstr;	/* tested expression			*/

  {
  char             binstr[256];
  long              i;
  struct chain    *pt_auxabl;
  pNode            pt_bddres;
  pNode            pt_bddnew;
  pNode            pt_bddtmp;
  pNode            pt_bddaux;
  char             nomvar[10];
  struct chain    *pt_newabl;
  struct chain    *pt_newabl2;
  static long       oth_flg=0;
  static long       last_width=0;
  static pCircuit  pC = NULL;

  result->LIST_ABL = NULL;
  result->IDENT    = NULL;

  pt_bddtmp = zero;

  if (pC == NULL)
    pC = initializeCct ("-select-",200,0);

  if (*pt_bdd == NULL)
    {
    if (last_width < pt_ablstr.WIDTH)
      {
      for (; last_width<pt_ablstr.WIDTH ; last_width++)
        {
        sprintf (nomvar,"(%d)",last_width);
        createNodeTermBdd (addInputCct(pC,nomvar));
        }
      }
    *pt_bdd = zero;
    oth_flg = 0;
    }

  while (pt_str != NULL)
    {
    tobin (binstr, (char *)pt_str->DATA, -1, -1);
    if (oth_flg != 0)
      {
      bvl_error(30,NULL);
      }

    if (strcmp("others", (char *)pt_str->DATA))
      {
      pt_bddres = one;

      if (strlen (binstr) != pt_ablstr.WIDTH)
        {
        bvl_error(38,NULL);
        }
      for (i=0 ; binstr[i]!='\0' ; i++)
        {
        pt_bddaux = createNodeTermBdd (i+2);
        if (binstr[i] == '0')
          pt_bddaux = notBdd (pt_bddaux);
        pt_bddres = applyBinBdd (AND, pt_bddaux, pt_bddres);
        }
      pt_bddnew = applyBinBdd (OR,*pt_bdd,pt_bddres);

      if (*pt_bdd == pt_bddnew)
         {
         bvl_error(28,NULL);
         }

      *pt_bdd = pt_bddnew;
      }
    else
      {
      oth_flg   = 1;
      pt_bddres = notBdd (*pt_bdd);
      *pt_bdd   = one;
      }
    pt_bddtmp = applyBinBdd (OR,pt_bddtmp,pt_bddres);
    pt_str = pt_str->NEXT;
    }

  pt_newabl = bddToAbl (pt_bddtmp, pC->pNameI);

  pt_auxabl = pt_ablstr.LIST_ABL;
  i         = pt_ablstr.WIDTH - 1;
  while (pt_auxabl != NULL)
    {
    sprintf (nomvar,"(%i)",i);
/*--------
    substPhyExpr (pt_newabl,namealloc(nomvar),(struct chain *)pt_auxabl->DATA);
---------*/
    pt_newabl2 = substExpr (pt_newabl,namealloc(nomvar),
                            (struct chain *)pt_auxabl->DATA);
    freeExpr (pt_newabl);
    pt_newabl = pt_newabl2;

    i--;
    pt_auxabl = pt_auxabl->NEXT;
    }
  result->LIST_ABL = addchain (NULL, pt_newabl);
  result->WIDTH    = 1;

  }



/* Enabling traces.  */
#ifndef BVL_Y_DEBUG
# define BVL_Y_DEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef BVL_Y_ERROR_VERBOSE
# undef BVL_Y_ERROR_VERBOSE
# define BVL_Y_ERROR_VERBOSE 1
#else
# define BVL_Y_ERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef BVL_Y_TOKEN_TABLE
# define BVL_Y_TOKEN_TABLE 0
#endif

#if ! defined BVL_Y_STYPE && ! defined BVL_Y_STYPE_IS_DECLARED
typedef union BVL_Y_STYPE
#line 1352 "../../../src/bvl/src/bvl_bcomp_y.y"
{
	long		 valu;
        float            flov;
	char		*text;
        bvl_ablstr       list;
	bvl_name	 name;
        struct g_type    dble;
	}
/* Line 187 of yacc.c.  */
#line 1713 "y.tab.c"
	BVL_Y_STYPE;
# define bvl_y_stype BVL_Y_STYPE /* obsolescent; will be withdrawn */
# define BVL_Y_STYPE_IS_DECLARED 1
# define BVL_Y_STYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1726 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef BVL_Y_TYPE_UINT8
typedef BVL_Y_TYPE_UINT8 bvl_y_type_uint8;
#else
typedef unsigned char bvl_y_type_uint8;
#endif

#ifdef BVL_Y_TYPE_INT8
typedef BVL_Y_TYPE_INT8 bvl_y_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char bvl_y_type_int8;
#else
typedef short int bvl_y_type_int8;
#endif

#ifdef BVL_Y_TYPE_UINT16
typedef BVL_Y_TYPE_UINT16 bvl_y_type_uint16;
#else
typedef unsigned short int bvl_y_type_uint16;
#endif

#ifdef BVL_Y_TYPE_INT16
typedef BVL_Y_TYPE_INT16 bvl_y_type_int16;
#else
typedef short int bvl_y_type_int16;
#endif

#ifndef BVL_Y_SIZE_T
# ifdef __SIZE_TYPE__
#  define BVL_Y_SIZE_T __SIZE_TYPE__
# elif defined size_t
#  define BVL_Y_SIZE_T size_t
# elif ! defined BVL_Y_SIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define BVL_Y_SIZE_T size_t
# else
#  define BVL_Y_SIZE_T unsigned int
# endif
#endif

#define BVL_Y_SIZE_MAXIMUM ((BVL_Y_SIZE_T) -1)

#ifndef BVL_Y__
# if BVL_Y_ENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define BVL_Y__(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef BVL_Y__
#  define BVL_Y__(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define BVL_Y_USE(e) ((void) (e))
#else
# define BVL_Y_USE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define BVL_Y_ID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
BVL_Y_ID (int i)
#else
static int
BVL_Y_ID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined bvl_y_overflow || BVL_Y_ERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef BVL_Y_STACK_USE_ALLOCA
#  if BVL_Y_STACK_USE_ALLOCA
#   ifdef __GNUC__
#    define BVL_Y_STACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define BVL_Y_STACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define BVL_Y_STACK_ALLOC alloca
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

# ifdef BVL_Y_STACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define BVL_Y_STACK_FREE(Ptr) do { /* empty */; } while (BVL_Y_ID (0))
#  ifndef BVL_Y_STACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define BVL_Y_STACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define BVL_Y_STACK_ALLOC BVL_Y_MALLOC
#  define BVL_Y_STACK_FREE BVL_Y_FREE
#  ifndef BVL_Y_STACK_ALLOC_MAXIMUM
#   define BVL_Y_STACK_ALLOC_MAXIMUM BVL_Y_SIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined BVL_Y_MALLOC || defined malloc) \
	     && (defined BVL_Y_FREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef BVL_Y_MALLOC
#   define BVL_Y_MALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (BVL_Y_SIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef BVL_Y_FREE
#   define BVL_Y_FREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined bvl_y_overflow || BVL_Y_ERROR_VERBOSE */


#if (! defined bvl_y_overflow \
     && (! defined __cplusplus \
	 || (defined BVL_Y_STYPE_IS_TRIVIAL && BVL_Y_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union bvl_y_alloc
{
  bvl_y_type_int16 bvl_y_ss;
  BVL_Y_STYPE bvl_y_vs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define BVL_Y_STACK_GAP_MAXIMUM (sizeof (union bvl_y_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define BVL_Y_STACK_BYTES(N) \
     ((N) * (sizeof (bvl_y_type_int16) + sizeof (BVL_Y_STYPE)) \
      + BVL_Y_STACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef BVL_Y_COPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define BVL_Y_COPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define BVL_Y_COPY(To, From, Count)		\
      do					\
	{					\
	  BVL_Y_SIZE_T bvl_y_i;				\
	  for (bvl_y_i = 0; bvl_y_i < (Count); bvl_y_i++)	\
	    (To)[bvl_y_i] = (From)[bvl_y_i];		\
	}					\
      while (BVL_Y_ID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables BVL_Y_SIZE and BVL_Y_STACKSIZE give the old and new number of
   elements in the stack, and BVL_Y_PTR gives the new location of the
   stack.  Advance BVL_Y_PTR to a properly aligned location for the next
   stack.  */
# define BVL_Y_STACK_RELOCATE(Stack)					\
    do									\
      {									\
	BVL_Y_SIZE_T bvl_y_newbytes;						\
	BVL_Y_COPY (&bvl_y_ptr->Stack, Stack, bvl_y_size);				\
	Stack = &bvl_y_ptr->Stack;						\
	bvl_y_newbytes = bvl_y_stacksize * sizeof (*Stack) + BVL_Y_STACK_GAP_MAXIMUM; \
	bvl_y_ptr += bvl_y_newbytes / sizeof (*bvl_y_ptr);				\
      }									\
    while (BVL_Y_ID (0))

#endif

/* BVL_Y_FINAL -- State number of the termination state.  */
#define BVL_Y_FINAL  3
/* BVL_Y_LAST -- Last index in BVL_Y_TABLE.  */
#define BVL_Y_LAST   242

/* BVL_Y_NTOKENS -- Number of terminals.  */
#define BVL_Y_NTOKENS  134
/* BVL_Y_NNTS -- Number of nonterminals.  */
#define BVL_Y_NNTS  102
/* BVL_Y_NRULES -- Number of rules.  */
#define BVL_Y_NRULES  180
/* BVL_Y_NRULES -- Number of states.  */
#define BVL_Y_NSTATES  289

/* BVL_Y_TRANSLATE(BVL_Y_LEX) -- Bison symbol number corresponding to BVL_Y_LEX.  */
#define BVL_Y_UNDEFTOK  2
#define BVL_Y_MAXUTOK   388

#define BVL_Y_TRANSLATE(BVL_Y_X)						\
  ((unsigned int) (BVL_Y_X) <= BVL_Y_MAXUTOK ? bvl_y_translate[BVL_Y_X] : BVL_Y_UNDEFTOK)

/* BVL_Y_TRANSLATE[BVL_Y_LEX] -- Bison symbol number corresponding to BVL_Y_LEX.  */
static const bvl_y_type_uint8 bvl_y_translate[] =
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

#if BVL_Y_DEBUG
/* BVL_Y_PRHS[BVL_Y_N] -- Index of the first RHS symbol of rule number BVL_Y_N in
   BVL_Y_RHS.  */
static const bvl_y_type_uint16 bvl_y_prhs[] =
{
       0,     0,     3,     4,     8,     9,    19,    22,    23,    25,
      31,    35,    38,    39,    43,    50,    52,    55,    57,    59,
      60,    66,    67,    71,    73,    74,    76,    80,    84,    86,
      88,    89,    91,    97,   101,   104,   105,   109,   117,   119,
     120,   122,   123,   125,   127,   129,   130,   143,   146,   148,
     149,   152,   154,   156,   159,   167,   170,   178,   179,   181,
     183,   185,   186,   189,   191,   193,   195,   198,   199,   210,
     212,   215,   217,   220,   222,   225,   227,   229,   235,   243,
     244,   250,   251,   263,   264,   268,   272,   274,   277,   278,
     281,   284,   286,   288,   290,   292,   294,   295,   299,   300,
     304,   306,   308,   310,   311,   314,   315,   318,   320,   322,
     324,   326,   328,   330,   332,   336,   340,   344,   348,   350,
     354,   358,   362,   366,   368,   372,   374,   376,   380,   382,
     384,   387,   389,   391,   393,   395,   397,   399,   401,   403,
     407,   409,   411,   413,   415,   420,   427,   431,   433,   435,
     437,   439,   441,   443,   445,   447,   449,   451,   453,   454,
     458,   459,   463,   464,   466,   467,   469,   473,   474,   476,
     477,   479,   480,   482,   484,   486,   489,   491,   493,   495,
     497
};

/* BVL_Y_RHS -- A `-1'-separated list of the rules' RHS.  */
static const bvl_y_type_int16 bvl_y_rhs[] =
{
     135,     0,    -1,    -1,   136,   137,   161,    -1,    -1,    65,
     228,    74,   138,   139,   154,   235,   227,   234,    -1,    65,
       1,    -1,    -1,   140,    -1,    71,    78,   141,   233,   234,
      -1,    71,     1,   234,    -1,   143,   142,    -1,    -1,   142,
     234,   143,    -1,    53,   219,    55,   218,   150,   144,    -1,
       1,    -1,   126,   145,    -1,   232,    -1,   146,    -1,    -1,
      78,   149,   147,   148,   233,    -1,    -1,   148,    56,   149,
      -1,   232,    -1,    -1,   151,    -1,    78,   152,   233,    -1,
     232,   153,   232,    -1,   118,    -1,    58,    -1,    -1,   155,
      -1,    94,    78,   156,   233,   234,    -1,    94,     1,   234,
      -1,   158,   157,    -1,    -1,   157,   234,   158,    -1,   159,
     219,    55,   160,   218,   150,   169,    -1,     1,    -1,    -1,
     110,    -1,    -1,    11,    -1,    24,    -1,    12,    -1,    -1,
      31,    75,    89,   228,    74,   162,   163,     4,   170,   235,
     227,   234,    -1,    31,     1,    -1,   164,    -1,    -1,   164,
     165,    -1,   168,    -1,   166,    -1,     1,   234,    -1,    53,
      75,    55,   218,   150,   167,   234,    -1,   126,   211,    -1,
     110,   219,    55,   218,   150,   169,   234,    -1,    -1,   103,
      -1,    44,    -1,   171,    -1,    -1,   171,   172,    -1,   173,
      -1,   176,    -1,   177,    -1,     1,   234,    -1,    -1,   230,
      41,   223,     4,   174,   175,   235,    41,   222,   234,    -1,
     171,    -1,   230,   178,    -1,   178,    -1,   230,   180,    -1,
     180,    -1,   230,   182,    -1,   182,    -1,   179,    -1,    33,
     199,   195,   196,   234,    -1,   229,    14,   226,   225,   181,
     186,   234,    -1,    -1,   181,   186,   129,   199,    63,    -1,
      -1,   131,   199,   183,   108,   229,    14,   226,   225,   185,
     184,   234,    -1,    -1,   184,    56,   185,    -1,   186,   129,
     191,    -1,   187,    -1,   199,   188,    -1,    -1,    28,   189,
      -1,   232,   190,    -1,    68,    -1,    97,    -1,    88,    -1,
     123,    -1,    81,    -1,    -1,   194,   192,   193,    -1,    -1,
     193,    45,   194,    -1,   211,    -1,    92,    -1,   213,    -1,
      -1,   105,   197,    -1,    -1,   109,   198,    -1,   116,    -1,
      66,    -1,   128,    -1,   200,    -1,   201,    -1,   202,    -1,
     203,    -1,   204,     3,   204,    -1,   200,     3,   204,    -1,
     204,    23,   204,    -1,   201,    23,   204,    -1,   204,    -1,
     204,    17,   204,    -1,   204,    20,   204,    -1,   204,    25,
     204,    -1,   203,    25,   204,    -1,   205,    -1,   205,   210,
     205,    -1,   206,    -1,   207,    -1,   206,    36,   207,    -1,
     208,    -1,   209,    -1,    21,   209,    -1,   211,    -1,   212,
      -1,   213,    -1,     6,    -1,    18,    -1,    54,    -1,   116,
      -1,    48,    -1,    78,   199,   107,    -1,   228,    -1,   214,
      -1,   215,    -1,   216,    -1,   228,    78,   232,   233,    -1,
     228,    78,   232,   153,   232,   233,    -1,   228,    37,   217,
      -1,   111,    -1,    39,    -1,   132,    -1,    82,    -1,    40,
      -1,   133,    -1,    83,    -1,   101,    -1,   102,    -1,    85,
      -1,    86,    -1,    -1,    75,   220,   221,    -1,    -1,   221,
      56,    75,    -1,    -1,   231,    -1,    -1,   224,    -1,    78,
     199,   233,    -1,    -1,   119,    -1,    -1,    72,    -1,    -1,
     228,    -1,    75,    -1,   213,    -1,   231,    55,    -1,    75,
      -1,    35,    -1,   107,    -1,   113,    -1,     5,    -1
};

/* BVL_Y_RLINE[BVL_Y_N] -- source line where rule number BVL_Y_N was defined.  */
static const bvl_y_type_uint16 bvl_y_rline[] =
{
       0,  1557,  1557,  1557,  1650,  1647,  1663,  1670,  1672,  1680,
    1685,  1692,  1696,  1698,  1704,  1727,  1743,  1748,  1756,  1762,
    1760,  1773,  1775,  1788,  1794,  1799,  1804,  1811,  1829,  1831,
    1835,  1837,  1841,  1846,  1853,  1857,  1859,  1865,  1903,  1919,
    1921,  1926,  1927,  1929,  1931,  1941,  1936,  1955,  1961,  1964,
    1966,  1971,  1972,  1973,  1979,  2000,  2006,  2049,  2050,  2052,
    2057,  2060,  2062,  2067,  2068,  2069,  2070,  2080,  2076,  2102,
    2106,  2116,  2120,  2127,  2128,  2135,  2139,  2143,  2158,  2433,
    2435,  2458,  2456,  2731,  2732,  2753,  2769,  2774,  2784,  2785,
    2791,  2810,  2812,  2814,  2816,  2818,  2824,  2823,  2829,  2831,
    2842,  2844,  2846,  2918,  2919,  2926,  2927,  2933,  2938,  2940,
    2945,  2947,  2949,  2951,  2956,  2960,  2967,  2971,  2978,  2980,
    2984,  2992,  2996,  3003,  3005,  3012,  3017,  3019,  3027,  3032,
    3034,  3040,  3046,  3048,  3143,  3145,  3150,  3152,  3154,  3159,
    3166,  3172,  3174,  3176,  3181,  3193,  3211,  3275,  3279,  3281,
    3283,  3285,  3287,  3289,  3291,  3293,  3295,  3297,  3303,  3302,
    3307,  3309,  3317,  3318,  3324,  3325,  3330,  3338,  3339,  3345,
    3346,  3352,  3353,  3358,  3363,  3368,  3377,  3382,  3387,  3392,
    3397
};
#endif

#if BVL_Y_DEBUG || BVL_Y_ERROR_VERBOSE || BVL_Y_TOKEN_TABLE
/* BVL_Y_TNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at BVL_Y_NTOKENS, nonterminals.  */
static const char *const bvl_y_tname[] =
{
  "$end", "error", "$undefined", "tok_AND", "_BEGIN", "_END", "_EQSym",
  "_EXIT", "_FILE", "_GESym", "_GTSym", "_IN", "_INOUT", "_LABEL",
  "_LESym", "_LINKAGE", "_LTSym", "_NAND", "_NESym", "_NEXT", "_NOR",
  "_NOT", "tok_NULL", "_OR", "_OUT", "_XOR", "ABS", "ACCESS", "AFTER",
  "ALIAS", "ALL", "ARCHITECTURE", "ARRAY", "ASSERT", "ATTRIBUTE",
  "AbstractLit", "Ampersand", "Apostrophe", "Arrow", "BIT", "BIT_VECTOR",
  "BLOCK", "BODY", "BUFFER", "BUS", "Bar", "BasedInt", "BasedReal",
  "BitStringLit", "Box", "CASE", "COMPONENT", "CONFIGURATION", "CONSTANT",
  "CharacterLit", "Colon", "Comma", "DISCONNECT", "DOWNTO", "DecimalInt",
  "DecimalReal", "Dot", "DoubleStar", "ELSE", "ELSIF", "ENTITY", "ERROR",
  "FOR", "FS", "FUNCTION", "GENERATE", "GENERIC", "GUARDED", "IF", "IS",
  "Identifier", "LIBRARY", "LOOP", "LeftParen", "MAP", "MOD", "MS",
  "MUX_BIT", "MUX_VECTOR", "Minus", "NATURAL", "NATURAL_VECTOR", "NEW",
  "NS", "OF", "ON", "OPEN", "OTHERS", "_PACKAGE", "PORT", "PROCEDURE",
  "PROCESS", "PS", "Plus", "RANGE", "RECORD", "REG_BIT", "REG_VECTOR",
  "REGISTER", "REM", "REPORT", "RETURN", "RightParen", "SELECT",
  "SEVERITY", "SIGNAL", "_STABLE", "SUBTYPE", "Semicolon", "Slash", "Star",
  "StringLit", "THEN", "TO", "TRANSPORT", "_TYPE", "UNITS", "UNTIL", "US",
  "USE", "VARIABLE", "VarAsgn", "WAIT", "WARNING", "WHEN", "WHILE", "WITH",
  "WOR_BIT", "WOR_VECTOR", "$accept", "design_file", "@1",
  "entity_declaration", "@2", ".generic_clause.", "generic_clause",
  "formal_generic_list", "...formal_generic_element..",
  "formal_generic_element", "generic_VarAsgn__expression",
  "generic_expression", "generic_aggregate", "@3",
  "...generic_element_association..", "generic_element_association",
  ".constraint.", "constraint", "range", "direction", ".port_clause.",
  "port_clause", "formal_port_list", "...formal_port_element..",
  "formal_port_element", ".SIGNAL.", ".mode.", "architecture_body", "@4",
  "architecture_declarative_part", "..block_declarative_item..",
  "block_declarative_item", "constant_declaration",
  "constant_VarAsgn__expression", "signal_declaration", ".signal_kind.",
  "architecture_statement_part", "..concurrent_statement..",
  "concurrent_statement", "block_statement", "@5", "set_of_statements",
  "concurrent_assertion_statement",
  "concurrent_signal_assignment_statement",
  "unlabeled_concurrent_assertion_statement", "assertion_statement",
  "unlabeled_conditional_signal_assignment",
  "..waveform__WHEN__condition__ELSE..",
  "unlabeled_selected_signal_assignment", "@6",
  "...waveform__WHEN__choices..", "waveform__WHEN__choices", "waveform",
  "waveform_element", ".AFTER__delay_expression.", "delay_expression",
  "time_unit", "choices", "@7", "..Bar__choice..", "choice",
  ".REPORT__expression.", ".SEVERITY__expression.", "report__message",
  "severity__message", "expression", "relation..AND__relation..",
  "relation..OR__relation..", "relation.NAND_NOR__relation.",
  "relation..XOR__relation..", "relation", "simple_expression",
  ".sign.term..add_op__term..", "term", "factor", "primary",
  "relational_operator", "literal", "aggregate", "name", "indexed_name",
  "slice_name", "attribute_name", "attribute_designator", "type_mark",
  "identifier_list", "@8", "...identifier..", ".label.",
  ".guard_expression.", "guard_expression", ".TRANSPORT.", ".GUARDED.",
  ".simple_name.", "simple_name", "target", "a_label", "label",
  "abstractlit", "RightParen_ERR", "Semicolon_ERR", "END_ERR", 0
};
#endif

# ifdef BVL_Y_PRINT
/* BVL_Y_TOKNUM[BVL_Y_LEX-NUM] -- Internal token number corresponding to
   token BVL_Y_LEX-NUM.  */
static const bvl_y_type_uint16 bvl_y_toknum[] =
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

/* BVL_Y_R1[BVL_Y_N] -- Symbol number of symbol that rule BVL_Y_N derives.  */
static const bvl_y_type_uint8 bvl_y_r1[] =
{
       0,   134,   136,   135,   138,   137,   137,   139,   139,   140,
     140,   141,   142,   142,   143,   143,   144,   145,   145,   147,
     146,   148,   148,   149,   150,   150,   151,   152,   153,   153,
     154,   154,   155,   155,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   160,   160,   162,   161,   161,   163,   164,
     164,   165,   165,   165,   166,   167,   168,   169,   169,   169,
     170,   171,   171,   172,   172,   172,   172,   174,   173,   175,
     176,   176,   177,   177,   177,   177,   178,   179,   180,   181,
     181,   183,   182,   184,   184,   185,   186,   187,   188,   188,
     189,   190,   190,   190,   190,   190,   192,   191,   193,   193,
     194,   194,   194,   195,   195,   196,   196,   197,   198,   198,
     199,   199,   199,   199,   200,   200,   201,   201,   202,   202,
     202,   203,   203,   204,   204,   205,   206,   206,   207,   208,
     208,   209,   209,   209,   210,   210,   211,   211,   211,   212,
     213,   213,   213,   213,   214,   215,   216,   217,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   220,   219,
     221,   221,   222,   222,   223,   223,   224,   225,   225,   226,
     226,   227,   227,   228,   229,   230,   231,   232,   233,   234,
     235
};

/* BVL_Y_R2[BVL_Y_N] -- Number of symbols composing right hand side of rule BVL_Y_N.  */
static const bvl_y_type_uint8 bvl_y_r2[] =
{
       0,     2,     0,     3,     0,     9,     2,     0,     1,     5,
       3,     2,     0,     3,     6,     1,     2,     1,     1,     0,
       5,     0,     3,     1,     0,     1,     3,     3,     1,     1,
       0,     1,     5,     3,     2,     0,     3,     7,     1,     0,
       1,     0,     1,     1,     1,     0,    12,     2,     1,     0,
       2,     1,     1,     2,     7,     2,     7,     0,     1,     1,
       1,     0,     2,     1,     1,     1,     2,     0,    10,     1,
       2,     1,     2,     1,     2,     1,     1,     5,     7,     0,
       5,     0,    11,     0,     3,     3,     1,     2,     0,     2,
       2,     1,     1,     1,     1,     1,     0,     3,     0,     3,
       1,     1,     1,     0,     2,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     1,     1,     3,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     4,     6,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     3,     0,     1,     0,     1,     3,     0,     1,     0,
       1,     0,     1,     1,     1,     2,     1,     1,     1,     1,
       1
};

/* BVL_Y_DEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when BVL_Y_TABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const bvl_y_type_uint8 bvl_y_defact[] =
{
       2,     0,     0,     1,     0,     0,     6,   173,     0,     0,
       3,     4,    47,     0,     7,     0,     0,    30,     8,     0,
       0,     0,     0,     0,    31,    45,   179,    10,    15,     0,
       0,    12,     0,     0,   180,   171,    49,   158,     0,   178,
       0,    11,    33,    38,    40,     0,    35,     0,     0,   172,
       0,     0,   160,     0,     9,     0,     0,    34,     0,     5,
      61,     0,     0,     0,    50,    52,    51,   159,   148,   151,
     150,   153,   156,   157,   154,   155,   149,   152,    24,    13,
      32,     0,    41,     0,     0,    53,     0,     0,     0,     0,
       0,    25,    36,    42,    44,    43,     0,   171,     0,     0,
     173,     0,    62,    63,    64,    65,    71,    76,    73,    75,
     174,   141,   142,   143,   140,     0,     0,     0,     0,     0,
     161,   177,     0,     0,     0,    14,    24,     0,    66,     0,
     138,   136,     0,   137,   103,   110,   111,   112,   113,   118,
     123,   125,   126,   128,   129,   131,   132,   133,    81,     0,
       0,   169,   164,    70,    72,    74,   175,    24,    24,    26,
      29,    28,     0,     0,    16,    18,    17,    57,    46,   130,
       0,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,   134,   135,     0,     0,     0,   147,   146,     0,   170,
     167,     0,     0,   165,     0,    57,    27,    19,    23,    59,
      58,    37,   139,   107,   104,     0,     0,   115,   117,   122,
     114,   119,   120,   116,   121,   124,   127,     0,     0,   144,
     168,    79,     0,    67,     0,     0,     0,    21,   108,   109,
     106,    77,     0,     0,     0,   166,    61,    55,    54,    56,
       0,   169,   145,     0,    86,    88,     0,     0,     0,    20,
     167,     0,    78,     0,    87,     0,    22,     0,     0,    89,
       0,   162,    83,     0,    80,    91,    95,    93,    92,    94,
      90,   176,     0,   163,     0,     0,    68,     0,    82,   101,
      85,    96,   100,   102,    84,    98,    97,     0,    99
};

/* BVL_Y_DEFGOTO[NTERM-NUM].  */
static const bvl_y_type_int16 bvl_y_defgoto[] =
{
      -1,     1,     2,     5,    14,    17,    18,    30,    41,    31,
     125,   164,   165,   227,   240,   197,    90,    91,   122,   162,
      23,    24,    45,    57,    46,    47,    96,    10,    36,    50,
      51,    64,    65,   225,    66,   201,    83,    84,   102,   103,
     236,   247,   104,   105,   106,   107,   108,   234,   109,   185,
     274,   262,   263,   244,   254,   259,   270,   280,   285,   286,
     281,   172,   206,   204,   230,   245,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   183,   145,   146,   147,
     111,   112,   113,   187,    78,    38,    52,    67,   272,   192,
     193,   221,   190,    48,   114,   115,   116,   117,   198,    40,
      27,    35
};

/* BVL_Y_PACT[STATE-NUM] -- Index in BVL_Y_TABLE of the portion describing
   STATE-NUM.  */
#define BVL_Y_PACT_NINF -190
static const bvl_y_type_int16 bvl_y_pact[] =
{
    -190,    44,    -4,  -190,    22,    31,  -190,  -190,     3,    29,
    -190,  -190,  -190,    10,    32,    25,     4,    24,  -190,    33,
      23,    52,    18,   117,  -190,  -190,  -190,  -190,  -190,    46,
      28,  -190,    23,     5,  -190,    25,  -190,  -190,    74,  -190,
      23,    23,  -190,  -190,  -190,    28,  -190,    46,    23,  -190,
     127,    14,  -190,   -13,  -190,    52,    23,    23,    83,  -190,
    -190,    23,    66,    46,  -190,  -190,  -190,    86,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,    68,  -190,
    -190,     5,   116,   117,     6,  -190,    89,    96,    77,   119,
      30,  -190,  -190,  -190,  -190,  -190,   -13,    25,    23,     0,
     102,     0,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,    13,   144,   -19,   104,   -13,   -13,
    -190,  -190,    28,   -26,     7,  -190,    68,    23,  -190,    -7,
    -190,  -190,     0,  -190,    55,   158,   141,  -190,   145,   130,
     108,   133,  -190,  -190,  -190,  -190,  -190,  -190,  -190,    60,
     119,    94,    95,  -190,  -190,  -190,  -190,    68,    68,  -190,
    -190,  -190,   119,   119,  -190,  -190,  -190,     8,  -190,  -190,
      65,    59,    67,     0,     0,     0,     0,     0,     0,     0,
       0,  -190,  -190,     0,     0,    69,  -190,  -190,   -24,  -190,
      61,     0,   174,  -190,    56,     8,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,   -38,    23,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,    25,   119,  -190,
    -190,  -190,    28,  -190,    -8,    23,    23,  -190,  -190,  -190,
    -190,  -190,   167,    28,     0,  -190,  -190,  -190,  -190,  -190,
      -1,    94,  -190,   -64,  -190,   155,    12,   117,   119,  -190,
      61,     0,  -190,   119,  -190,   143,  -190,     0,   122,  -190,
      42,   111,  -190,    58,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,    23,  -190,   -20,     9,  -190,     0,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,   146,     9,  -190
};

/* BVL_Y_PGOTO[NTERM-NUM].  */
static const bvl_y_type_int16 bvl_y_pgoto[] =
{
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,   134,
    -190,  -190,  -190,  -190,  -190,   -60,    -9,  -190,  -190,    15,
    -190,  -190,  -190,  -190,   114,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,     1,  -190,   -37,  -190,  -190,
    -190,  -190,  -190,  -190,    82,  -190,    84,  -190,    85,  -190,
    -190,   -75,   -29,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
     -81,  -190,  -190,  -190,  -190,   -89,  -190,  -190,  -190,  -190,
      39,    26,  -190,    36,  -190,    78,  -190,  -189,  -190,   -83,
    -190,  -190,  -190,  -190,   -59,    11,  -190,  -190,  -190,  -190,
    -190,   -42,   -31,   124,    16,    17,  -190,   -39,   -86,   -43,
     -32,   -79
};

/* BVL_Y_TABLE[BVL_Y_PACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what BVL_Y_DEFACT says.
   If BVL_Y_TABLE_NINF, syntax error.  */
#define BVL_Y_TABLE_NINF -177
static const bvl_y_type_int16 bvl_y_table[] =
{
      42,   110,    56,   123,    97,    20,    43,    98,    54,    55,
     134,   -60,   148,    98,    99,    61,    59,   -69,   -48,    32,
       8,   129,   152,     6,    80,    81,    68,    69,   228,    85,
      12,    19,   160,   110,   160,   237,   277,   126,   166,    99,
     130,   130,   121,   170,     3,    99,   131,   131,   130,    26,
     149,    49,   199,    28,   131,   248,     7,   130,    58,   157,
     158,     4,     9,   131,   188,   251,   128,    62,     7,    70,
      71,   132,    72,    73,    87,     7,   196,    11,   132,   159,
     -39,   100,    21,    39,     7,   163,   282,   100,    74,    75,
     229,   150,   161,    26,   161,   168,    33,     7,   282,    15,
       7,   279,   222,    16,    13,    29,    39,    25,   133,   133,
     265,   200,   101,    49,   181,    44,   133,   167,    22,    76,
      77,    37,    34,   266,    63,   133,   182,    93,    94,    53,
     267,    60,   233,   176,   110,    39,    26,   101,    82,   268,
      95,    86,    88,   101,   118,   219,    89,   177,   194,   195,
     178,   119,   120,   179,   121,   180,   124,  -176,   151,   156,
     171,   173,   258,   110,   174,   269,   189,   260,   255,   184,
     175,   186,   202,   191,   231,   203,   205,   217,   223,   235,
     220,   241,   224,   253,   261,   264,   271,   275,   256,    79,
     242,   287,   283,   238,   239,    92,   226,   249,   153,   246,
     154,   155,   284,   218,   283,   243,   288,   169,   257,   215,
     250,   252,   207,   208,   209,   210,   211,   212,   213,   214,
     216,   127,   273,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   232,     0,     0,     0,     0,     0,
     276,     0,   278
};

static const bvl_y_type_int16 bvl_y_check[] =
{
      32,    84,    45,    89,    83,     1,     1,     1,    40,    41,
      99,     5,   101,     1,    33,     1,    48,     5,     4,     1,
       4,    21,    41,     1,    56,    57,    39,    40,    66,    61,
       1,    15,    58,   116,    58,   224,    56,    96,   124,    33,
      48,    48,    35,   132,     0,    33,    54,    54,    48,   113,
      37,    35,    44,     1,    54,    56,    75,    48,    47,   118,
     119,    65,    31,    54,   150,   129,    98,    53,    75,    82,
      83,    78,    85,    86,    63,    75,   162,    74,    78,   122,
      75,    75,    78,   107,    75,    78,   275,    75,   101,   102,
     128,    78,   118,   113,   118,   127,    78,    75,   287,    89,
      75,    92,   191,    71,    75,    53,   107,    74,   116,   116,
      68,   103,   131,    97,     6,   110,   116,   126,    94,   132,
     133,    75,     5,    81,   110,   116,    18,    11,    12,    55,
      88,     4,   218,     3,   217,   107,   113,   131,    55,    97,
      24,    75,    56,   131,    55,   188,    78,    17,   157,   158,
      20,    55,    75,    23,    35,    25,   126,    55,    14,    55,
     105,     3,   251,   246,    23,   123,    72,   253,   247,    36,
      25,   111,   107,    78,   206,   116,   109,   108,     4,   222,
     119,    14,   126,    28,    41,    63,    75,   129,   248,    55,
     233,    45,   275,   225,   226,    81,   195,   240,   116,   236,
     116,   116,   277,   188,   287,   234,   287,   129,   250,   183,
     241,   243,   173,   174,   175,   176,   177,   178,   179,   180,
     184,    97,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
     272,    -1,   274
};

/* BVL_Y_STOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const bvl_y_type_uint8 bvl_y_stos[] =
{
       0,   135,   136,     0,    65,   137,     1,    75,   228,    31,
     161,    74,     1,    75,   138,    89,    71,   139,   140,   228,
       1,    78,    94,   154,   155,    74,   113,   234,     1,    53,
     141,   143,     1,    78,     5,   235,   162,    75,   219,   107,
     233,   142,   234,     1,   110,   156,   158,   159,   227,   228,
     163,   164,   220,    55,   234,   234,   233,   157,   219,   234,
       4,     1,    53,   110,   165,   166,   168,   221,    39,    40,
      82,    83,    85,    86,   101,   102,   132,   133,   218,   143,
     234,   234,    55,   170,   171,   234,    75,   219,    56,    78,
     150,   151,   158,    11,    12,    24,   160,   235,     1,    33,
      75,   131,   172,   173,   176,   177,   178,   179,   180,   182,
     213,   214,   215,   216,   228,   229,   230,   231,    55,    55,
      75,    35,   152,   232,   126,   144,   218,   227,   234,    21,
      48,    54,    78,   116,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   211,   212,   213,   199,    37,
      78,    14,    41,   178,   180,   182,    55,   218,   218,   233,
      58,   118,   153,    78,   145,   146,   232,   150,   234,   209,
     199,   105,   195,     3,    23,    25,     3,    17,    20,    23,
      25,     6,    18,   210,    36,   183,   111,   217,   232,    72,
     226,    78,   223,   224,   150,   150,   232,   149,   232,    44,
     103,   169,   107,   116,   197,   109,   196,   204,   204,   204,
     204,   204,   204,   204,   204,   205,   207,   108,   153,   233,
     119,   225,   199,     4,   126,   167,   169,   147,    66,   128,
     198,   234,   229,   232,   181,   233,   174,   211,   234,   234,
     148,    14,   233,   186,   187,   199,   171,   175,    56,   233,
     226,   129,   234,    28,   188,   235,   149,   225,   199,   189,
     232,    41,   185,   186,    63,    68,    81,    88,    97,   123,
     190,    75,   222,   231,   184,   129,   234,    56,   234,    92,
     191,   194,   211,   213,   185,   192,   193,    45,   194
};

#define bvl_y_errok		(bvl_y_errstatus = 0)
#define bvl_y_clearin	(bvl_y_char = BVL_Y_EMPTY)
#define BVL_Y_EMPTY		(-2)
#define BVL_Y_EOF		0

#define BVL_Y_ACCEPT	goto bvl_y_acceptlab
#define BVL_Y_ABORT		goto bvl_y_abortlab
#define BVL_Y_ERROR		goto bvl_y_errorlab


/* Like BVL_Y_ERROR except do call bvl_y_error.  This remains here temporarily
   to ease the transition to the new meaning of BVL_Y_ERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define BVL_Y_FAIL		goto bvl_y_errlab

#define BVL_Y_RECOVERING()  (!!bvl_y_errstatus)

#define BVL_Y_BACKUP(Token, Value)					\
do								\
  if (bvl_y_char == BVL_Y_EMPTY && bvl_y_len == 1)				\
    {								\
      bvl_y_char = (Token);						\
      bvl_y_lval = (Value);						\
      bvl_y_token = BVL_Y_TRANSLATE (bvl_y_char);				\
      BVL_Y_POPSTACK (1);						\
      goto bvl_y_backup;						\
    }								\
  else								\
    {								\
      bvl_y_error (BVL_Y__("syntax error: cannot back up")); \
      BVL_Y_ERROR;							\
    }								\
while (BVL_Y_ID (0))


#define BVL_Y_TERROR	1
#define BVL_Y_ERRCODE	256


/* BVL_Y_LLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define BVL_Y_RHSLOC(Rhs, K) ((Rhs)[K])
#ifndef BVL_Y_LLOC_DEFAULT
# define BVL_Y_LLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (BVL_Y_ID (N))                                                    \
	{								\
	  (Current).first_line   = BVL_Y_RHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = BVL_Y_RHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = BVL_Y_RHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = BVL_Y_RHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    BVL_Y_RHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    BVL_Y_RHSLOC (Rhs, 0).last_column;				\
	}								\
    while (BVL_Y_ID (0))
#endif


/* BVL_Y__LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef BVL_Y__LOCATION_PRINT
# if BVL_Y_LTYPE_IS_TRIVIAL
#  define BVL_Y__LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define BVL_Y__LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* BVL_Y_LEX -- calling `bvl_y_lex' with the right arguments.  */

#ifdef BVL_Y_LEX_PARAM
# define BVL_Y_LEX bvl_y_lex (BVL_Y_LEX_PARAM)
#else
# define BVL_Y_LEX bvl_y_lex ()
#endif

/* Enable debugging if requested.  */
#if BVL_Y_DEBUG

# ifndef BVL_Y_FPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define BVL_Y_FPRINTF fprintf
# endif

# define BVL_Y_DPRINTF(Args)			\
do {						\
  if (bvl_y_debug)					\
    BVL_Y_FPRINTF Args;				\
} while (BVL_Y_ID (0))

# define BVL_Y__SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (bvl_y_debug)								  \
    {									  \
      BVL_Y_FPRINTF (stderr, "%s ", Title);					  \
      bvl_y__symbol_print (stderr,						  \
		  Type, Value); \
      BVL_Y_FPRINTF (stderr, "\n");						  \
    }									  \
} while (BVL_Y_ID (0))


/*--------------------------------.
| Print this symbol on BVL_Y_OUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y__symbol_value_print (FILE *bvl_y_output, int bvl_y_type, BVL_Y_STYPE const * const bvl_y_valuep)
#else
static void
bvl_y__symbol_value_print (bvl_y_output, bvl_y_type, bvl_y_valuep)
    FILE *bvl_y_output;
    int bvl_y_type;
    BVL_Y_STYPE const * const bvl_y_valuep;
#endif
{
  if (!bvl_y_valuep)
    return;
# ifdef BVL_Y_PRINT
  if (bvl_y_type < BVL_Y_NTOKENS)
    BVL_Y_PRINT (bvl_y_output, bvl_y_toknum[bvl_y_type], *bvl_y_valuep);
# else
  BVL_Y_USE (bvl_y_output);
# endif
  switch (bvl_y_type)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on BVL_Y_OUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y__symbol_print (FILE *bvl_y_output, int bvl_y_type, BVL_Y_STYPE const * const bvl_y_valuep)
#else
static void
bvl_y__symbol_print (bvl_y_output, bvl_y_type, bvl_y_valuep)
    FILE *bvl_y_output;
    int bvl_y_type;
    BVL_Y_STYPE const * const bvl_y_valuep;
#endif
{
  if (bvl_y_type < BVL_Y_NTOKENS)
    BVL_Y_FPRINTF (bvl_y_output, "token %s (", bvl_y_tname[bvl_y_type]);
  else
    BVL_Y_FPRINTF (bvl_y_output, "nterm %s (", bvl_y_tname[bvl_y_type]);

  bvl_y__symbol_value_print (bvl_y_output, bvl_y_type, bvl_y_valuep);
  BVL_Y_FPRINTF (bvl_y_output, ")");
}

/*------------------------------------------------------------------.
| bvl_y__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y__stack_print (bvl_y_type_int16 *bottom, bvl_y_type_int16 *top)
#else
static void
bvl_y__stack_print (bottom, top)
    bvl_y_type_int16 *bottom;
    bvl_y_type_int16 *top;
#endif
{
  BVL_Y_FPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    BVL_Y_FPRINTF (stderr, " %d", *bottom);
  BVL_Y_FPRINTF (stderr, "\n");
}

# define BVL_Y__STACK_PRINT(Bottom, Top)				\
do {								\
  if (bvl_y_debug)							\
    bvl_y__stack_print ((Bottom), (Top));				\
} while (BVL_Y_ID (0))


/*------------------------------------------------.
| Report that the BVL_Y_RULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y__reduce_print (BVL_Y_STYPE *bvl_y_vsp, int bvl_y_rule)
#else
static void
bvl_y__reduce_print (bvl_y_vsp, bvl_y_rule)
    BVL_Y_STYPE *bvl_y_vsp;
    int bvl_y_rule;
#endif
{
  int bvl_y_nrhs = bvl_y_r2[bvl_y_rule];
  int bvl_y_i;
  unsigned long int bvl_y_lno = bvl_y_rline[bvl_y_rule];
  BVL_Y_FPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     bvl_y_rule - 1, bvl_y_lno);
  /* The symbols being reduced.  */
  for (bvl_y_i = 0; bvl_y_i < bvl_y_nrhs; bvl_y_i++)
    {
      fprintf (stderr, "   $%d = ", bvl_y_i + 1);
      bvl_y__symbol_print (stderr, bvl_y_rhs[bvl_y_prhs[bvl_y_rule] + bvl_y_i],
		       &(bvl_y_vsp[(bvl_y_i + 1) - (bvl_y_nrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define BVL_Y__REDUCE_PRINT(Rule)		\
do {					\
  if (bvl_y_debug)				\
    bvl_y__reduce_print (bvl_y_vsp, Rule); \
} while (BVL_Y_ID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int bvl_y_debug;
#else /* !BVL_Y_DEBUG */
# define BVL_Y_DPRINTF(Args)
# define BVL_Y__SYMBOL_PRINT(Title, Type, Value, Location)
# define BVL_Y__STACK_PRINT(Bottom, Top)
# define BVL_Y__REDUCE_PRINT(Rule)
#endif /* !BVL_Y_DEBUG */


/* BVL_Y_INITDEPTH -- initial size of the parser's stacks.  */
#ifndef	BVL_Y_INITDEPTH
# define BVL_Y_INITDEPTH 200
#endif

/* BVL_Y_MAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   BVL_Y_STACK_ALLOC_MAXIMUM < BVL_Y_STACK_BYTES (BVL_Y_MAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef BVL_Y_MAXDEPTH
# define BVL_Y_MAXDEPTH 10000
#endif



#if BVL_Y_ERROR_VERBOSE

# ifndef bvl_y_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define bvl_y_strlen strlen
#  else
/* Return the length of BVL_Y_STR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static BVL_Y_SIZE_T
bvl_y_strlen (const char *bvl_y_str)
#else
static BVL_Y_SIZE_T
bvl_y_strlen (bvl_y_str)
    const char *bvl_y_str;
#endif
{
  BVL_Y_SIZE_T bvl_y_len;
  for (bvl_y_len = 0; bvl_y_str[bvl_y_len]; bvl_y_len++)
    continue;
  return bvl_y_len;
}
#  endif
# endif

# ifndef bvl_y_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define bvl_y_stpcpy stpcpy
#  else
/* Copy BVL_Y_SRC to BVL_Y_DEST, returning the address of the terminating '\0' in
   BVL_Y_DEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
bvl_y_stpcpy (char *bvl_y_dest, const char *bvl_y_src)
#else
static char *
bvl_y_stpcpy (bvl_y_dest, bvl_y_src)
    char *bvl_y_dest;
    const char *bvl_y_src;
#endif
{
  char *bvl_y_d = bvl_y_dest;
  const char *bvl_y_s = bvl_y_src;

  while ((*bvl_y_d++ = *bvl_y_s++) != '\0')
    continue;

  return bvl_y_d - 1;
}
#  endif
# endif

# ifndef bvl_y_tnamerr
/* Copy to BVL_Y_RES the contents of BVL_Y_STR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for bvl_y_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  BVL_Y_STR is taken from bvl_y_tname.  If BVL_Y_RES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static BVL_Y_SIZE_T
bvl_y_tnamerr (char *bvl_y_res, const char *bvl_y_str)
{
  if (*bvl_y_str == '"')
    {
      BVL_Y_SIZE_T bvl_y_n = 0;
      char const *bvl_y_p = bvl_y_str;

      for (;;)
	switch (*++bvl_y_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++bvl_y_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (bvl_y_res)
	      bvl_y_res[bvl_y_n] = *bvl_y_p;
	    bvl_y_n++;
	    break;

	  case '"':
	    if (bvl_y_res)
	      bvl_y_res[bvl_y_n] = '\0';
	    return bvl_y_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! bvl_y_res)
    return bvl_y_strlen (bvl_y_str);

  return bvl_y_stpcpy (bvl_y_res, bvl_y_str) - bvl_y_res;
}
# endif

/* Copy into BVL_Y_RESULT an error message about the unexpected token
   BVL_Y_CHAR while in state BVL_Y_STATE.  Return the number of bytes copied,
   including the terminating null byte.  If BVL_Y_RESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return BVL_Y_SIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static BVL_Y_SIZE_T
bvl_y_syntax_error (char *bvl_y_result, int bvl_y_state, int bvl_y_char)
{
  int bvl_y_n = bvl_y_pact[bvl_y_state];

  if (! (BVL_Y_PACT_NINF < bvl_y_n && bvl_y_n <= BVL_Y_LAST))
    return 0;
  else
    {
      int bvl_y_type = BVL_Y_TRANSLATE (bvl_y_char);
      BVL_Y_SIZE_T bvl_y_size0 = bvl_y_tnamerr (0, bvl_y_tname[bvl_y_type]);
      BVL_Y_SIZE_T bvl_y_size = bvl_y_size0;
      BVL_Y_SIZE_T bvl_y_size1;
      int bvl_y_size_overflow = 0;
      enum { BVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *bvl_y_arg[BVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM];
      int bvl_y_x;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      BVL_Y__("syntax error, unexpected %s");
      BVL_Y__("syntax error, unexpected %s, expecting %s");
      BVL_Y__("syntax error, unexpected %s, expecting %s or %s");
      BVL_Y__("syntax error, unexpected %s, expecting %s or %s or %s");
      BVL_Y__("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *bvl_y_fmt;
      char const *bvl_y_f;
      static char const bvl_y_unexpected[] = "syntax error, unexpected %s";
      static char const bvl_y_expecting[] = ", expecting %s";
      static char const bvl_y_or[] = " or %s";
      char bvl_y_format[sizeof bvl_y_unexpected
		    + sizeof bvl_y_expecting - 1
		    + ((BVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof bvl_y_or - 1))];
      char const *bvl_y_prefix = bvl_y_expecting;

      /* Start BVL_Y_X at -BVL_Y_N if negative to avoid negative indexes in
	 BVL_Y_CHECK.  */
      int bvl_y_xbegin = bvl_y_n < 0 ? -bvl_y_n : 0;

      /* Stay within bounds of both bvl_y_check and bvl_y_tname.  */
      int bvl_y_checklim = BVL_Y_LAST - bvl_y_n + 1;
      int bvl_y_xend = bvl_y_checklim < BVL_Y_NTOKENS ? bvl_y_checklim : BVL_Y_NTOKENS;
      int bvl_y_count = 1;

      bvl_y_arg[0] = bvl_y_tname[bvl_y_type];
      bvl_y_fmt = bvl_y_stpcpy (bvl_y_format, bvl_y_unexpected);

      for (bvl_y_x = bvl_y_xbegin; bvl_y_x < bvl_y_xend; ++bvl_y_x)
	if (bvl_y_check[bvl_y_x + bvl_y_n] == bvl_y_x && bvl_y_x != BVL_Y_TERROR)
	  {
	    if (bvl_y_count == BVL_Y_ERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		bvl_y_count = 1;
		bvl_y_size = bvl_y_size0;
		bvl_y_format[sizeof bvl_y_unexpected - 1] = '\0';
		break;
	      }
	    bvl_y_arg[bvl_y_count++] = bvl_y_tname[bvl_y_x];
	    bvl_y_size1 = bvl_y_size + bvl_y_tnamerr (0, bvl_y_tname[bvl_y_x]);
	    bvl_y_size_overflow |= (bvl_y_size1 < bvl_y_size);
	    bvl_y_size = bvl_y_size1;
	    bvl_y_fmt = bvl_y_stpcpy (bvl_y_fmt, bvl_y_prefix);
	    bvl_y_prefix = bvl_y_or;
	  }

      bvl_y_f = BVL_Y__(bvl_y_format);
      bvl_y_size1 = bvl_y_size + bvl_y_strlen (bvl_y_f);
      bvl_y_size_overflow |= (bvl_y_size1 < bvl_y_size);
      bvl_y_size = bvl_y_size1;

      if (bvl_y_size_overflow)
	return BVL_Y_SIZE_MAXIMUM;

      if (bvl_y_result)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *bvl_y_p = bvl_y_result;
	  int bvl_y_i = 0;
	  while ((*bvl_y_p = *bvl_y_f) != '\0')
	    {
	      if (*bvl_y_p == '%' && bvl_y_f[1] == 's' && bvl_y_i < bvl_y_count)
		{
		  bvl_y_p += bvl_y_tnamerr (bvl_y_p, bvl_y_arg[bvl_y_i++]);
		  bvl_y_f += 2;
		}
	      else
		{
		  bvl_y_p++;
		  bvl_y_f++;
		}
	    }
	}
      return bvl_y_size;
    }
}
#endif /* BVL_Y_ERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
bvl_y_destruct (const char *bvl_y_msg, int bvl_y_type, BVL_Y_STYPE *bvl_y_valuep)
#else
static void
bvl_y_destruct (bvl_y_msg, bvl_y_type, bvl_y_valuep)
    const char *bvl_y_msg;
    int bvl_y_type;
    BVL_Y_STYPE *bvl_y_valuep;
#endif
{
  BVL_Y_USE (bvl_y_valuep);

  if (!bvl_y_msg)
    bvl_y_msg = "Deleting";
  BVL_Y__SYMBOL_PRINT (bvl_y_msg, bvl_y_type, bvl_y_valuep, bvl_y_locationp);

  switch (bvl_y_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef BVL_Y_PARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int bvl_y_parse (void *BVL_Y_PARSE_PARAM);
#else
int bvl_y_parse ();
#endif
#else /* ! BVL_Y_PARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int bvl_y_parse (void);
#else
int bvl_y_parse ();
#endif
#endif /* ! BVL_Y_PARSE_PARAM */



/* The look-ahead symbol.  */
int bvl_y_char;

/* The semantic value of the look-ahead symbol.  */
BVL_Y_STYPE bvl_y_lval;

/* Number of syntax errors so far.  */
int bvl_y_nerrs;



/*----------.
| bvl_y_parse.  |
`----------*/

#ifdef BVL_Y_PARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
bvl_y_parse (void *BVL_Y_PARSE_PARAM)
#else
int
bvl_y_parse (BVL_Y_PARSE_PARAM)
    void *BVL_Y_PARSE_PARAM;
#endif
#else /* ! BVL_Y_PARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
bvl_y_parse (void)
#else
int
bvl_y_parse ()

#endif
#endif
{
  
  int bvl_y_state;
  int bvl_y_n;
  int bvl_y_result;
  /* Number of tokens to shift before error messages enabled.  */
  int bvl_y_errstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int bvl_y_token = 0;
#if BVL_Y_ERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char bvl_y_msgbuf[128];
  char *bvl_y_msg = bvl_y_msgbuf;
  BVL_Y_SIZE_T bvl_y_msg_alloc = sizeof bvl_y_msgbuf;
#endif

  /* Three stacks and their tools:
     `bvl_y_ss': related to states,
     `bvl_y_vs': related to semantic values,
     `bvl_y_ls': related to locations.

     Refer to the stacks thru separate pointers, to allow bvl_y_overflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  bvl_y_type_int16 bvl_y_ssa[BVL_Y_INITDEPTH];
  bvl_y_type_int16 *bvl_y_ss = bvl_y_ssa;
  bvl_y_type_int16 *bvl_y_ssp;

  /* The semantic value stack.  */
  BVL_Y_STYPE bvl_y_vsa[BVL_Y_INITDEPTH];
  BVL_Y_STYPE *bvl_y_vs = bvl_y_vsa;
  BVL_Y_STYPE *bvl_y_vsp;



#define BVL_Y_POPSTACK(N)   (bvl_y_vsp -= (N), bvl_y_ssp -= (N))

  BVL_Y_SIZE_T bvl_y_stacksize = BVL_Y_INITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  BVL_Y_STYPE bvl_y_val;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int bvl_y_len = 0;

  BVL_Y_DPRINTF ((stderr, "Starting parse\n"));

  bvl_y_state = 0;
  bvl_y_errstatus = 0;
  bvl_y_nerrs = 0;
  bvl_y_char = BVL_Y_EMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  bvl_y_ssp = bvl_y_ss;
  bvl_y_vsp = bvl_y_vs;

  goto bvl_y_setstate;

/*------------------------------------------------------------.
| bvl_y_newstate -- Push a new state, which is found in bvl_y_state.  |
`------------------------------------------------------------*/
 bvl_y_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  bvl_y_ssp++;

 bvl_y_setstate:
  *bvl_y_ssp = bvl_y_state;

  if (bvl_y_ss + bvl_y_stacksize - 1 <= bvl_y_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      BVL_Y_SIZE_T bvl_y_size = bvl_y_ssp - bvl_y_ss + 1;

#ifdef bvl_y_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	BVL_Y_STYPE *bvl_y_vs1 = bvl_y_vs;
	bvl_y_type_int16 *bvl_y_ss1 = bvl_y_ss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if bvl_y_overflow is a macro.  */
	bvl_y_overflow (BVL_Y__("memory exhausted"),
		    &bvl_y_ss1, bvl_y_size * sizeof (*bvl_y_ssp),
		    &bvl_y_vs1, bvl_y_size * sizeof (*bvl_y_vsp),

		    &bvl_y_stacksize);

	bvl_y_ss = bvl_y_ss1;
	bvl_y_vs = bvl_y_vs1;
      }
#else /* no bvl_y_overflow */
# ifndef BVL_Y_STACK_RELOCATE
      goto bvl_y_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (BVL_Y_MAXDEPTH <= bvl_y_stacksize)
	goto bvl_y_exhaustedlab;
      bvl_y_stacksize *= 2;
      if (BVL_Y_MAXDEPTH < bvl_y_stacksize)
	bvl_y_stacksize = BVL_Y_MAXDEPTH;

      {
	bvl_y_type_int16 *bvl_y_ss1 = bvl_y_ss;
	union bvl_y_alloc *bvl_y_ptr =
	  (union bvl_y_alloc *) BVL_Y_STACK_ALLOC (BVL_Y_STACK_BYTES (bvl_y_stacksize));
	if (! bvl_y_ptr)
	  goto bvl_y_exhaustedlab;
	BVL_Y_STACK_RELOCATE (bvl_y_ss);
	BVL_Y_STACK_RELOCATE (bvl_y_vs);

#  undef BVL_Y_STACK_RELOCATE
	if (bvl_y_ss1 != bvl_y_ssa)
	  BVL_Y_STACK_FREE (bvl_y_ss1);
      }
# endif
#endif /* no bvl_y_overflow */

      bvl_y_ssp = bvl_y_ss + bvl_y_size - 1;
      bvl_y_vsp = bvl_y_vs + bvl_y_size - 1;


      BVL_Y_DPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) bvl_y_stacksize));

      if (bvl_y_ss + bvl_y_stacksize - 1 <= bvl_y_ssp)
	BVL_Y_ABORT;
    }

  BVL_Y_DPRINTF ((stderr, "Entering state %d\n", bvl_y_state));

  goto bvl_y_backup;

/*-----------.
| bvl_y_backup.  |
`-----------*/
bvl_y_backup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  bvl_y_n = bvl_y_pact[bvl_y_state];
  if (bvl_y_n == BVL_Y_PACT_NINF)
    goto bvl_y_default;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* BVL_Y_CHAR is either BVL_Y_EMPTY or BVL_Y_EOF or a valid look-ahead symbol.  */
  if (bvl_y_char == BVL_Y_EMPTY)
    {
      BVL_Y_DPRINTF ((stderr, "Reading a token: "));
      bvl_y_char = BVL_Y_LEX;
    }

  if (bvl_y_char <= BVL_Y_EOF)
    {
      bvl_y_char = bvl_y_token = BVL_Y_EOF;
      BVL_Y_DPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      bvl_y_token = BVL_Y_TRANSLATE (bvl_y_char);
      BVL_Y__SYMBOL_PRINT ("Next token is", bvl_y_token, &bvl_y_lval, &bvl_y_lloc);
    }

  /* If the proper action on seeing token BVL_Y_TOKEN is to reduce or to
     detect an error, take that action.  */
  bvl_y_n += bvl_y_token;
  if (bvl_y_n < 0 || BVL_Y_LAST < bvl_y_n || bvl_y_check[bvl_y_n] != bvl_y_token)
    goto bvl_y_default;
  bvl_y_n = bvl_y_table[bvl_y_n];
  if (bvl_y_n <= 0)
    {
      if (bvl_y_n == 0 || bvl_y_n == BVL_Y_TABLE_NINF)
	goto bvl_y_errlab;
      bvl_y_n = -bvl_y_n;
      goto bvl_y_reduce;
    }

  if (bvl_y_n == BVL_Y_FINAL)
    BVL_Y_ACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (bvl_y_errstatus)
    bvl_y_errstatus--;

  /* Shift the look-ahead token.  */
  BVL_Y__SYMBOL_PRINT ("Shifting", bvl_y_token, &bvl_y_lval, &bvl_y_lloc);

  /* Discard the shifted token unless it is eof.  */
  if (bvl_y_char != BVL_Y_EOF)
    bvl_y_char = BVL_Y_EMPTY;

  bvl_y_state = bvl_y_n;
  *++bvl_y_vsp = bvl_y_lval;

  goto bvl_y_newstate;


/*-----------------------------------------------------------.
| bvl_y_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
bvl_y_default:
  bvl_y_n = bvl_y_defact[bvl_y_state];
  if (bvl_y_n == 0)
    goto bvl_y_errlab;
  goto bvl_y_reduce;


/*-----------------------------.
| bvl_y_reduce -- Do a reduction.  |
`-----------------------------*/
bvl_y_reduce:
  /* bvl_y_n is the number of a rule to reduce with.  */
  bvl_y_len = bvl_y_r2[bvl_y_n];

  /* If BVL_Y_LEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets BVL_Y_VAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to BVL_Y_VAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that BVL_Y_VAL may be used uninitialized.  */
  bvl_y_val = bvl_y_vsp[1-bvl_y_len];


  BVL_Y__REDUCE_PRINT (bvl_y_n);
  switch (bvl_y_n)
    {
        case 2:
#line 1557 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		/* ###----------------------------------------------### */
		/*    Initializations					*/
		/*      - initialize the time unit conversion variables	*/
		/*      - erroneous  description presumed !		*/
		/*      - zero delay description presumed !		*/
		/* ###----------------------------------------------### */

		BVL_NM1LST = NULL;
		BVL_GRDLST = NULL;
		BVL_CNDLST = NULL;
		BVL_VALLST = NULL;
		BVL_ERRFLG = 0;
		switch (BEH_TIMEUNIT)
		  {
		  case BEH_TU__FS :
		    BVL_CNVFS = 1      ;
		    BVL_CNVPS = 1.0E+3 ;
		    BVL_CNVNS = 1.0E+6 ;
		    BVL_CNVUS = 1.0E+9 ;
		    BVL_CNVMS = 1.0E+12;
		    break;

		  case BEH_TU__PS :
		    BVL_CNVFS = 1.0E-3 ;
		    BVL_CNVPS = 1      ;
		    BVL_CNVNS = 1.0E+3 ;
		    BVL_CNVUS = 1.0E+6 ;
		    BVL_CNVMS = 1.0E+9 ;
		    break;

		  case BEH_TU__NS :
		    BVL_CNVFS = 1.0E-6 ;
		    BVL_CNVPS = 1.0E-3 ;
		    BVL_CNVNS = 1      ;
		    BVL_CNVUS = 1.0E+3 ;
		    BVL_CNVMS = 1.0E+6 ;
		    break;

		  case BEH_TU__US :
		    BVL_CNVFS = 1.0E-9 ;
		    BVL_CNVPS = 1.0E-6 ;
		    BVL_CNVNS = 1.0E-3 ;
		    BVL_CNVUS = 1      ;
		    BVL_CNVMS = 1.0E+3 ;
		    break;

		  case BEH_TU__MS :
		    BVL_CNVFS = 1.0E-12;
		    BVL_CNVPS = 1.0E-9 ;
		    BVL_CNVNS = 1.0E-6 ;
		    BVL_CNVUS = 1.0E-3 ;
		    BVL_CNVMS = 1      ;
		    break;

		  default :
		    BVL_CNVFS = 1      ;
		    BVL_CNVPS = 1      ;
		    BVL_CNVNS = 1      ;
		    BVL_CNVUS = 1      ;
		    BVL_CNVMS = 1      ;
		    bvl_error (83, NULL);
		  }

		if (BVL_ERRFLG == 0)
		  {
		  BVL_CNVFS = BVL_CNVFS / BEH_TIMESTEP;
		  BVL_CNVPS = BVL_CNVPS / BEH_TIMESTEP;
		  BVL_CNVNS = BVL_CNVNS / BEH_TIMESTEP;
		  BVL_CNVUS = BVL_CNVUS / BEH_TIMESTEP;
		  BVL_CNVMS = BVL_CNVMS / BEH_TIMESTEP;
		  }

		dic                 = beh_initab ();
		BVL_BEFPNT          = beh_addbefig (BVL_HEDFIG, NULL);
		BVL_BEFPNT->FLAG   |= BEH_FIG_ZERODELAY;
		BVL_BEFPNT->ERRFLG  = 1;
		BVL_HEDFIG          = BVL_BEFPNT;
		}
    break;

  case 3:
#line 1638 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if (BVL_ERRFLG == 0)
		  BVL_BEFPNT->ERRFLG = 0;

		beh_fretab (dic);
		}
    break;

  case 4:
#line 1650 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		BVL_BEFPNT->NAME = (bvl_y_vsp[(2) - (3)].text);
		BVL_MODNAM       = (bvl_y_vsp[(2) - (3)].text);
		}
    break;

  case 5:
#line 1659 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if (((bvl_y_vsp[(8) - (9)].text) != NULL) && ((bvl_y_vsp[(8) - (9)].text) != (bvl_y_vsp[(2) - (9)].text)))
		  bvl_error (1, (bvl_y_vsp[(8) - (9)].text));
		}
    break;

  case 6:
#line 1665 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		bvl_error (2, NULL);
		}
    break;

  case 8:
#line 1673 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		BVL_BEFPNT->BEGEN = BVL_GENPNT;
		BVL_GENPNT        = NULL      ;
		}
    break;

  case 10:
#line 1688 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_error (74, NULL); }
    break;

  case 14:
#line 1710 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		char *type;

		if ((bvl_y_vsp[(5) - (6)].name).FLAG == (bvl_y_vsp[(4) - (6)].dble).FLAG)
		  {
		  BVL_NM1LST = reverse   (BVL_NM1LST);
		  type       = namealloc ("natural");
		  BVL_GENPNT = addgen (BVL_GENPNT, BVL_INTLST, BVL_NM1LST,
		                       type, (bvl_y_vsp[(5) - (6)].name).LEFT, (bvl_y_vsp[(5) - (6)].name).RIGHT);
		  }
		else
		  bvl_error (33, NULL);
		freechain (BVL_NM1LST);
		freechain (BVL_INTLST);
		BVL_NM1LST = NULL;
		BVL_INTLST = NULL;
		}
    break;

  case 15:
#line 1728 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		/* ###----------------------------------------------### */
		/*   The following 3 lines reject tokens until the	*/
		/* sync. token 'Semicolon' is found			*/
		/* ###----------------------------------------------### */

		do
		  bvl_y_char = bvl_y_lex ();
		while ((bvl_y_char != Semicolon) && (bvl_y_char != 0));
		bvl_y_errok;
		bvl_error (75, NULL);
		}
    break;

  case 17:
#line 1749 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		long *ptlong;

		ptlong = (long *) mbkalloc (sizeof(long));
		*ptlong = (bvl_y_vsp[(1) - (1)].valu);
		BVL_INTLST = addchain (BVL_INTLST, (void *)ptlong);
		}
    break;

  case 19:
#line 1762 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		long *ptlong;

		ptlong = (long *) mbkalloc (sizeof(long));
		*ptlong = (bvl_y_vsp[(2) - (2)].valu);
		BVL_INTLST = addchain (BVL_INTLST, (void *)ptlong);
		}
    break;

  case 22:
#line 1778 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		long *ptlong;

		ptlong = (long *) mbkalloc (sizeof(long));
		*ptlong = (bvl_y_vsp[(3) - (3)].valu);
		BVL_INTLST = addchain (BVL_INTLST, (void *)ptlong);
		}
    break;

  case 23:
#line 1789 "../../../src/bvl/src/bvl_bcomp_y.y"
    {(bvl_y_val.valu) = (bvl_y_vsp[(1) - (1)].valu);}
    break;

  case 24:
#line 1794 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.name).FLAG  = 'S';
		(bvl_y_val.name).LEFT  = -1;
		(bvl_y_val.name).RIGHT = -1;
		}
    break;

  case 25:
#line 1800 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 26:
#line 1807 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(2) - (3)].name); }
    break;

  case 27:
#line 1814 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.name).FLAG  = 'A';
		(bvl_y_val.name).LEFT  = (bvl_y_vsp[(1) - (3)].valu);
		(bvl_y_val.name).RIGHT = (bvl_y_vsp[(3) - (3)].valu);

		if ((((bvl_y_vsp[(1) - (3)].valu) > (bvl_y_vsp[(3) - (3)].valu)) && ((bvl_y_vsp[(2) - (3)].valu) == BVL_UPTDFN)) ||
		    (((bvl_y_vsp[(1) - (3)].valu) < (bvl_y_vsp[(3) - (3)].valu)) && ((bvl_y_vsp[(2) - (3)].valu) == BVL_DWTDFN)) ||
		    (((bvl_y_vsp[(1) - (3)].valu) < 0 ) || ((bvl_y_vsp[(2) - (3)].valu) < 0 )))
		  {
		  bvl_error (32, NULL);
		  }
		}
    break;

  case 28:
#line 1830 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BVL_UPTDFN; }
    break;

  case 29:
#line 1832 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BVL_DWTDFN; }
    break;

  case 33:
#line 1849 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_error (3, NULL); }
    break;

  case 37:
#line 1872 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		char *signame;
		long   sigconf;
		void *pnt;

		/* ###----------------------------------------------### */
		/*    First, check the validity of the declaration.	*/
		/* Then, for each port, create the apropriate set of	*/
		/* structures (berin, bepor, beout, bebus)		*/
		/* ###----------------------------------------------### */

		chkdcl ('P', (bvl_y_vsp[(4) - (7)].valu), (bvl_y_vsp[(5) - (7)].dble).VALU, (bvl_y_vsp[(5) - (7)].dble).FLAG, (bvl_y_vsp[(7) - (7)].valu), (bvl_y_vsp[(6) - (7)].name).FLAG, &sigconf);

		BVL_NM1LST = reverse (BVL_NM1LST);
		while (BVL_NM1LST != NULL)
		  {
		  signame = (char *)BVL_NM1LST->DATA;
		  if (beh_chktab (dic, signame, BVL_MODNAM, BVL_SIGDFN) != 0)
		    bvl_error (4, signame);

		  pnt = addstr (BVL_BEFPNT, 'P', (bvl_y_vsp[(4) - (7)].valu), (bvl_y_vsp[(5) - (7)].dble).VALU, (bvl_y_vsp[(5) - (7)].dble).FLAG, signame,
		                (bvl_y_vsp[(6) - (7)].name).LEFT, (bvl_y_vsp[(6) - (7)].name).RIGHT);

		  beh_addtab (dic, signame, BVL_MODNAM, BVL_SIGDFN, sigconf);
		  beh_addtab (dic, signame, BVL_MODNAM, BVL_WMNDFN, (bvl_y_vsp[(6) - (7)].name).LEFT);
		  beh_addtab (dic, signame, BVL_MODNAM, BVL_WMXDFN, (bvl_y_vsp[(6) - (7)].name).RIGHT);
		  beh_addtab (dic, signame, BVL_MODNAM, BVL_PNTDFN, (long)pnt);

		  BVL_NM1LST = delchain (BVL_NM1LST, BVL_NM1LST);
		  }
		}
    break;

  case 38:
#line 1904 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		/* ###----------------------------------------------### */
		/*   The following 3 lines reject tokens until the	*/
		/* sync. token 'Semicolon' is found			*/
		/* ###----------------------------------------------### */

		do
		  bvl_y_char = bvl_y_lex ();
		while ((bvl_y_char != Semicolon) && (bvl_y_char != 0));
		bvl_y_errok;

		bvl_error (6, NULL);
		}
    break;

  case 41:
#line 1926 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = _IN; }
    break;

  case 42:
#line 1928 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = _IN; }
    break;

  case 43:
#line 1930 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = _OUT; }
    break;

  case 44:
#line 1932 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = _INOUT; }
    break;

  case 45:
#line 1941 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if ((bvl_y_vsp[(4) - (5)].text) != BVL_MODNAM)
		  bvl_error (1, (bvl_y_vsp[(4) - (5)].text));
		}
    break;

  case 46:
#line 1951 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if (((bvl_y_vsp[(11) - (12)].text) != NULL) && ((bvl_y_vsp[(11) - (12)].text) != (bvl_y_vsp[(2) - (12)].text)))
		  bvl_error (7, (bvl_y_vsp[(11) - (12)].text));
		}
    break;

  case 47:
#line 1957 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_error (8, NULL); }
    break;

  case 53:
#line 1975 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_error (9, NULL); }
    break;

  case 54:
#line 1986 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		long sigconf;
		
		if (chkdcl ('C', 0, (bvl_y_vsp[(4) - (7)].dble).VALU, (bvl_y_vsp[(4) - (7)].dble).FLAG, 0, (bvl_y_vsp[(5) - (7)].name).FLAG, &sigconf)==0)
		  {
		  beh_addtab (dic, (bvl_y_vsp[(2) - (7)].text), BVL_MODNAM, BVL_WMNDFN, (bvl_y_vsp[(5) - (7)].name).LEFT);
		  beh_addtab (dic, (bvl_y_vsp[(2) - (7)].text), BVL_MODNAM, BVL_WMXDFN, (bvl_y_vsp[(5) - (7)].name).RIGHT);
		  beh_addtab (dic, (bvl_y_vsp[(2) - (7)].text), BVL_MODNAM, BVL_SIGDFN, sigconf);
		  beh_addtab (dic, (bvl_y_vsp[(2) - (7)].text), NULL, BVL_PNTDFN, (bvl_y_vsp[(6) - (7)].text));
		  }
		}
    break;

  case 55:
#line 2002 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(2) - (2)].text); }
    break;

  case 56:
#line 2013 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		char *signame;
		long   sigconf;
		void *pnt;
		long   errflg;

		errflg = chkdcl ('S',0,(bvl_y_vsp[(4) - (7)].dble).VALU,(bvl_y_vsp[(4) - (7)].dble).FLAG,(bvl_y_vsp[(6) - (7)].valu),(bvl_y_vsp[(5) - (7)].name).FLAG,&sigconf);

		/* ###----------------------------------------------### */
		/*    First, check the validity of the declaration.	*/
		/* Then, for each signal, create the apropriate set of	*/
		/* structures (berin, bereg, beaux, bebux)		*/
		/* ###----------------------------------------------### */

		BVL_NM1LST = reverse (BVL_NM1LST);
		while (BVL_NM1LST != NULL)
		  {
		  signame = (char *)BVL_NM1LST->DATA;
		  if (beh_chktab (dic, signame, BVL_MODNAM, BVL_SIGDFN) != 0)
		    bvl_error (10, signame);

		  pnt = addstr (BVL_BEFPNT, 'S', 0, (bvl_y_vsp[(4) - (7)].dble).VALU, (bvl_y_vsp[(4) - (7)].dble).FLAG, signame,
		                (bvl_y_vsp[(5) - (7)].name).LEFT, (bvl_y_vsp[(5) - (7)].name).RIGHT);

		  beh_addtab (dic, signame, BVL_MODNAM, BVL_SIGDFN, sigconf);
		  beh_addtab (dic, signame, BVL_MODNAM, BVL_WMNDFN, (bvl_y_vsp[(5) - (7)].name).LEFT);
		  beh_addtab (dic, signame, BVL_MODNAM, BVL_WMXDFN, (bvl_y_vsp[(5) - (7)].name).RIGHT);
		  beh_addtab (dic, signame, BVL_MODNAM, BVL_PNTDFN, (long)pnt);

		  BVL_NM1LST = delchain (BVL_NM1LST, BVL_NM1LST);
		  }
		}
    break;

  case 57:
#line 2049 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 0; }
    break;

  case 58:
#line 2051 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = REGISTER; }
    break;

  case 59:
#line 2053 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BUS; }
    break;

  case 66:
#line 2072 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_error (18, NULL); }
    break;

  case 67:
#line 2080 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if (beh_chktab (dic, (bvl_y_vsp[(1) - (4)].text), BVL_MODNAM, BVL_LBLDFN) != 0)
		  bvl_error (19, (bvl_y_vsp[(1) - (4)].text));

		beh_addtab (dic, (bvl_y_vsp[(1) - (4)].text), BVL_MODNAM, BVL_LBLDFN, 1);
		if ((bvl_y_vsp[(3) - (4)].text) != NULL)
		  BVL_GRDLST = addchain (BVL_GRDLST, (char *)(bvl_y_vsp[(3) - (4)].text));
		}
    break;

  case 68:
#line 2093 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if ((bvl_y_vsp[(3) - (10)].text) != NULL)
		  BVL_GRDLST = delchain (BVL_GRDLST, BVL_GRDLST);
		if (((bvl_y_vsp[(9) - (10)].text) != NULL) && ((bvl_y_vsp[(9) - (10)].text) != (bvl_y_vsp[(1) - (10)].text)))
		  bvl_error (20, (bvl_y_vsp[(9) - (10)].text));
		}
    break;

  case 70:
#line 2108 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if (beh_chktab (dic, (bvl_y_vsp[(1) - (2)].text), BVL_MODNAM, BVL_LBLDFN) != 0)
		  bvl_error (19, (bvl_y_vsp[(1) - (2)].text));

		beh_addtab (dic, (bvl_y_vsp[(1) - (2)].text), BVL_MODNAM, BVL_LBLDFN, 1);
		if (BVL_ERRFLG == 0)
		  BVL_BEFPNT->BEMSG->LABEL = (bvl_y_vsp[(1) - (2)].text);
		}
    break;

  case 72:
#line 2122 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if (beh_chktab (dic, (bvl_y_vsp[(1) - (2)].text), BVL_MODNAM, BVL_LBLDFN) != 0)
		  bvl_error (19, (bvl_y_vsp[(1) - (2)].text));
		beh_addtab (dic, (bvl_y_vsp[(1) - (2)].text), BVL_MODNAM, BVL_LBLDFN, 1);
		}
    break;

  case 74:
#line 2130 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if (beh_chktab (dic, (bvl_y_vsp[(1) - (2)].text), BVL_MODNAM, BVL_LBLDFN) != 0)
		  bvl_error (19, (bvl_y_vsp[(1) - (2)].text));
		beh_addtab (dic, (bvl_y_vsp[(1) - (2)].text), BVL_MODNAM, BVL_LBLDFN, 1);
		}
    break;

  case 77:
#line 2148 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if (BVL_ERRFLG == 0)
		  {
		  BVL_BEFPNT->BEMSG = beh_addbemsg(BVL_BEFPNT->BEMSG, NULL, (bvl_y_vsp[(4) - (5)].valu),
		                                   (bvl_y_vsp[(3) - (5)].text), (bvl_y_vsp[(2) - (5)].list).LIST_ABL->DATA, NULL);
		  }
		}
    break;

  case 78:
#line 2165 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		long             i        ;
		struct beout   *beout_pnt;
		struct bebus   *bebus_pnt;
		struct bereg   *bereg_pnt;
		struct beaux   *beaux_pnt;
		struct bebux   *bebux_pnt;
		struct chain   *abl_pnt  ;
		unsigned long   delay    ;
		struct bvl_expr expr0    ;
		struct bvl_expr expr1    ;
		struct bvl_expr expr2    ;
		struct bvl_expr expr3    ;
		struct bvl_expr expr4    ;
		struct bvl_expr expr5    ;
		struct bvl_expr expr6    ;
		long             rev_flg  = 0;
		long             left_bnd ;
		long             right_bnd;
		long             left     ;
		long             right    ;
		long             in_bound ;
		long             out_bound;
		long             sig_width;
		long             sig_conf ;

		delay = (bvl_y_vsp[(6) - (7)].list).TIME;
		expr4 = (bvl_y_vsp[(6) - (7)].list)     ;

		while (BVL_CNDLST != NULL)
		  {
		  expr5 = *((bvl_ablstr *) BVL_CNDLST->DATA);
		  expr6 = *((bvl_ablstr *) BVL_VALLST->DATA);

		  expr0 = cpyablstr (expr5);
		  expr1 = crtabl (NOT , expr5, BVL_EMPSTR, -1, -1);
		  expr5 = expr0;
		  expr2 = crtabl (ANDM, expr4, expr1     , -1, -1);
		  expr3 = crtabl (ANDM, expr6, expr5     , -1, -1);
		  expr4 = crtabl (OR  , expr2, expr3     , -1, -1);

		  BVL_CNDLST = delchain (BVL_CNDLST, BVL_CNDLST);
		  BVL_VALLST = delchain (BVL_VALLST, BVL_VALLST);
		  }

		left_bnd  = beh_chktab (dic, (bvl_y_vsp[(1) - (7)].name).NAME, BVL_MODNAM, BVL_WMNDFN);
		right_bnd = beh_chktab (dic, (bvl_y_vsp[(1) - (7)].name).NAME, BVL_MODNAM, BVL_WMXDFN);
		sig_conf  = beh_chktab (dic, (bvl_y_vsp[(1) - (7)].name).NAME, BVL_MODNAM, BVL_SIGDFN);

		left  = (bvl_y_vsp[(1) - (7)].name).LEFT ;
		right = (bvl_y_vsp[(1) - (7)].name).RIGHT;

		if (left_bnd <= right_bnd)
		  {
		  sig_width = right_bnd - left_bnd + 1;
		  if (left <= right)
		    {
		    rev_flg   = 0;
		    in_bound  = right_bnd - right;
		    out_bound = right_bnd - left ;
		    if ((left < left_bnd) || (right > right_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (7)].name).NAME);
		    }
		  else
		    {
		    rev_flg   = 1;
		    in_bound  = right_bnd - left ;
		    out_bound = right_bnd - right;
		    if ((left > right_bnd) || (right < left_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (7)].name).NAME);
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
		      bvl_error (36, (bvl_y_vsp[(1) - (7)].name).NAME);
		    }
		  else
		    {
		    rev_flg   = 0;
		    in_bound  = right - right_bnd;
		    out_bound = left  - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (7)].name).NAME);
		    }
		  }

		if ((out_bound - in_bound + 1) != expr4.WIDTH)
		  bvl_error (35, (bvl_y_vsp[(1) - (7)].name).NAME);

		if (rev_flg == 1)
		  expr4.LIST_ABL = reverse (expr4.LIST_ABL);

		abl_pnt = expr4.LIST_ABL;

		switch (sig_conf)
		  {
		  case (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN) :
		    bvl_error (21, (bvl_y_vsp[(1) - (7)].name).NAME);
		    break;

		  case (BVL_OCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_BITDFN + BVL_NORDFN) :
		    if ((bvl_y_vsp[(3) - (7)].valu) == BVL_GRDDFN)
		      bvl_error (22, (bvl_y_vsp[(1) - (7)].name).NAME);
		    beout_pnt = (struct beout *)
		                 beh_chktab (dic,(bvl_y_vsp[(1) - (7)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (beout_pnt->ABL != NULL)
		            bvl_error (39, beout_pnt->NAME);
		          else
		            {
		            beout_pnt->ABL  = (struct chain *) abl_pnt->DATA;
		            beout_pnt->TIME = delay;
		            beout_pnt->FLAG = (bvl_y_vsp[(4) - (7)].valu)   ;
		            }
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        beout_pnt = beout_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_OCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_OCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		    if (((bvl_y_vsp[(3) - (7)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23, (bvl_y_vsp[(1) - (7)].name).NAME);
		    bebus_pnt = (struct bebus *)
		                 beh_chktab (dic,(bvl_y_vsp[(1) - (7)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bebus_pnt->BINODE = beh_addbinode (bebus_pnt->BINODE,
		                                             NULL, NULL);
		          bebus_pnt->BINODE->TIME = delay;
		          bebus_pnt->BINODE->FLAG = (bvl_y_vsp[(4) - (7)].valu)   ;

		          bebus_pnt->BIABL  = beh_addbiabl  (bebus_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             copyExpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          bebus_pnt->BIABL->TIME = delay;
		          bebus_pnt->BIABL->FLAG = (bvl_y_vsp[(4) - (7)].valu)   ;
		          abl_pnt                = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bebus_pnt = bebus_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_BITDFN + BVL_NORDFN):
		    if ((bvl_y_vsp[(3) - (7)].valu) == BVL_GRDDFN)
		      bvl_error (22, (bvl_y_vsp[(1) - (7)].name).NAME);
		    beaux_pnt = (struct beaux *)
		                beh_chktab (dic,(bvl_y_vsp[(1) - (7)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (beaux_pnt->ABL != NULL)
		            bvl_error (39, beaux_pnt->NAME);
		          else
		            {
		            beaux_pnt->ABL  = (struct chain *) abl_pnt->DATA;
		            beaux_pnt->TIME = delay;
		            beaux_pnt->FLAG = (bvl_y_vsp[(4) - (7)].valu)   ;
		            }
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        beaux_pnt = beaux_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_RBIDFN + BVL_REGDFN):
		    if (((bvl_y_vsp[(3) - (7)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23, (bvl_y_vsp[(1) - (7)].name).NAME);
		    bereg_pnt = (struct bereg *)
		                beh_chktab (dic,(bvl_y_vsp[(1) - (7)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bereg_pnt->BINODE = beh_addbinode (bereg_pnt->BINODE,
		                                             NULL, NULL);
		          bereg_pnt->BINODE->TIME = delay;
		          bereg_pnt->BINODE->FLAG = (bvl_y_vsp[(4) - (7)].valu)   ;

		          bereg_pnt->BIABL  = beh_addbiabl  (bereg_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             copyExpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          bereg_pnt->BIABL->TIME = delay;
		          bereg_pnt->BIABL->FLAG = (bvl_y_vsp[(4) - (7)].valu)   ;
		          abl_pnt                = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bereg_pnt = bereg_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_WORDFN + BVL_BUSDFN) :
		    if (((bvl_y_vsp[(3) - (7)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23, (bvl_y_vsp[(1) - (7)].name).NAME);
		    bebux_pnt = (struct bebux *)
		                beh_chktab (dic,(bvl_y_vsp[(1) - (7)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bebux_pnt->BINODE = beh_addbinode (bebux_pnt->BINODE,
		                                             NULL, NULL);
		          bebux_pnt->BINODE->TIME = delay;
		          bebux_pnt->BINODE->FLAG = (bvl_y_vsp[(4) - (7)].valu)   ;

		          bebux_pnt->BIABL  = beh_addbiabl  (bebux_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             copyExpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          bebux_pnt->BIABL->TIME = delay;
		          bebux_pnt->BIABL->FLAG = (bvl_y_vsp[(4) - (7)].valu)   ;
		          abl_pnt                = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bebux_pnt = bebux_pnt->NEXT;
		        }
		      }
		    break;

		  default :
		    bvl_error (17, (bvl_y_vsp[(1) - (7)].name).NAME);
		    break;
		  }
		}
    break;

  case 80:
#line 2440 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		struct bvl_expr *expr_pnt;

		expr_pnt           = (bvl_ablstr *)mbkalloc(sizeof(bvl_ablstr));
		expr_pnt->WIDTH    = (bvl_y_vsp[(4) - (5)].list).WIDTH;
		expr_pnt->LIST_ABL = (bvl_y_vsp[(4) - (5)].list).LIST_ABL;
		BVL_CNDLST         = addchain (BVL_CNDLST, (char *) expr_pnt);

		expr_pnt           = (bvl_ablstr *)mbkalloc(sizeof(bvl_ablstr));
		expr_pnt->WIDTH    = (bvl_y_vsp[(2) - (5)].list).WIDTH;
		expr_pnt->LIST_ABL = (bvl_y_vsp[(2) - (5)].list).LIST_ABL;
		BVL_VALLST         = addchain (BVL_VALLST, (char *) expr_pnt);
		}
    break;

  case 81:
#line 2458 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		BVL_SLCEXP = (bvl_y_vsp[(2) - (2)].list);
		BVL_BDDPNT = NULL;
		}
    break;

  case 82:
#line 2470 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		long             i;
		struct beout   *beout_pnt;
		struct bebus   *bebus_pnt;
		struct bereg   *bereg_pnt;
		struct beaux   *beaux_pnt;
		struct bebux   *bebux_pnt;
		struct chain   *abl_pnt  ;
		unsigned long   delay    ;
		struct bvl_expr expr1    ;
		long             rev_flg  = 0;
		long             left_bnd;
		long             right_bnd;
		long             left;
		long             right;
		long             in_bound;
		long             out_bound;
		long             sig_width;
		long             sig_conf;

		/* ###----------------------------------------------### */
		/*    $10 est une structure, pas un pointeur...		*/
		/*    et c'est bien la le probleme............		*/
		/*    Pour BVL_EMPSTR le champs LIST_ABL doit etre NULL	*/
		/* ###----------------------------------------------### */

                if (((bvl_y_vsp[(10) - (11)].list).LIST_ABL != NULL) && ((bvl_y_vsp[(9) - (11)].list).TIME != (bvl_y_vsp[(10) - (11)].list).TIME))
                  {
		  bvl_error (80, NULL);
                  }
		expr1      = crtabl (OR , (bvl_y_vsp[(9) - (11)].list) , (bvl_y_vsp[(10) - (11)].list), -1, -1);
		expr1.TIME = (bvl_y_vsp[(9) - (11)].list).TIME;

		if (BVL_BDDPNT != one)
		  bvl_error (25, NULL);

		left_bnd  = beh_chktab (dic, (bvl_y_vsp[(5) - (11)].name).NAME, BVL_MODNAM, BVL_WMNDFN);
		right_bnd = beh_chktab (dic, (bvl_y_vsp[(5) - (11)].name).NAME, BVL_MODNAM, BVL_WMXDFN);
		sig_conf  = beh_chktab (dic, (bvl_y_vsp[(5) - (11)].name).NAME, BVL_MODNAM, BVL_SIGDFN);

		left  = (bvl_y_vsp[(5) - (11)].name).LEFT ;
		right = (bvl_y_vsp[(5) - (11)].name).RIGHT;

		if (left_bnd <= right_bnd)
		  {
		  sig_width = right_bnd - left_bnd + 1;
		  if (left <= right)
		    {
		    rev_flg   = 0;
		    in_bound  = right_bnd - right;
		    out_bound = right_bnd - left ;
		    if ((left < left_bnd) || (right > right_bnd))
		      bvl_error (36, (bvl_y_vsp[(5) - (11)].name).NAME);
		    }
		  else
		    {
		    rev_flg   = 1;
		    in_bound  = right_bnd - left ;
		    out_bound = right_bnd - right;
		    if ((left > right_bnd) || (right < left_bnd))
		      bvl_error (36, (bvl_y_vsp[(5) - (11)].name).NAME);
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
		      bvl_error (36, (bvl_y_vsp[(5) - (11)].name).NAME);
		    }
		  else
		    {
		    rev_flg   = 0;
		    in_bound  = right - right_bnd;
		    out_bound = left  - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
		      bvl_error (36, (bvl_y_vsp[(5) - (11)].name).NAME);
		    }
		  }

		if ((out_bound - in_bound + 1) != expr1.WIDTH)
		  bvl_error (35, (bvl_y_vsp[(5) - (11)].name).NAME);

		if (rev_flg == 1)
		  expr1.LIST_ABL = reverse (expr1.LIST_ABL);

		abl_pnt = expr1.LIST_ABL;
		delay   = expr1.TIME    ;

		switch (sig_conf)
		  {
		  case (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN) :
		    bvl_error (21, (bvl_y_vsp[(5) - (11)].name).NAME);
		    break;

		  case (BVL_OCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_BITDFN + BVL_NORDFN) :
		    if ((bvl_y_vsp[(7) - (11)].valu) == BVL_GRDDFN)
		      bvl_error (22, (bvl_y_vsp[(5) - (11)].name).NAME);
		    beout_pnt = (struct beout *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (11)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (beout_pnt->ABL != NULL)
		            bvl_error (39, beout_pnt->NAME);
		          else
		            {
		            beout_pnt->ABL  = (struct chain *)abl_pnt->DATA;
		            beout_pnt->TIME = delay;
		            }
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        beout_pnt = beout_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_OCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_OCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		    if (((bvl_y_vsp[(7) - (11)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23, (bvl_y_vsp[(5) - (11)].name).NAME);
		    bebus_pnt = (struct bebus *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (11)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bebus_pnt->BINODE = beh_addbinode (bebus_pnt->BINODE,
		                                             NULL, NULL);
		          bebus_pnt->BINODE->TIME = delay;
		          bebus_pnt->BINODE->FLAG = (bvl_y_vsp[(8) - (11)].valu)   ;

		          bebus_pnt->BIABL  = beh_addbiabl  (bebus_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             copyExpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          bebus_pnt->BIABL->TIME = delay;
		          bebus_pnt->BIABL->FLAG = (bvl_y_vsp[(8) - (11)].valu)   ;
		          abl_pnt                = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bebus_pnt = bebus_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_BITDFN + BVL_NORDFN):
		    if ((bvl_y_vsp[(7) - (11)].valu) == BVL_GRDDFN)
		      bvl_error (22, (bvl_y_vsp[(5) - (11)].name).NAME);
		    beaux_pnt = (struct beaux *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (11)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          if (beaux_pnt->ABL != NULL)
		            bvl_error (39, beaux_pnt->NAME);
		          else
		           {
		            beaux_pnt->ABL  = (struct chain *) abl_pnt->DATA;
		            beaux_pnt->TIME = delay;
		            beaux_pnt->FLAG = (bvl_y_vsp[(8) - (11)].valu)   ;
		            }
		          abl_pnt = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        beaux_pnt = beaux_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_RBIDFN + BVL_REGDFN):
		    if (((bvl_y_vsp[(7) - (11)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23, (bvl_y_vsp[(5) - (11)].name).NAME);
		    bereg_pnt = (struct bereg *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (11)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bereg_pnt->BINODE = beh_addbinode (bereg_pnt->BINODE,
		                                             NULL, NULL);
		          bereg_pnt->BINODE->TIME = delay;
		          bereg_pnt->BINODE->FLAG = (bvl_y_vsp[(8) - (11)].valu)   ;

		          bereg_pnt->BIABL  = beh_addbiabl  (bereg_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             copyExpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          bereg_pnt->BIABL->TIME = delay;
		          bereg_pnt->BIABL->FLAG = (bvl_y_vsp[(8) - (11)].valu)   ;
		          abl_pnt                = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bereg_pnt = bereg_pnt->NEXT;
		        }
		      }
		    break;

		  case (BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_WORDFN + BVL_BUSDFN) :
		    if (((bvl_y_vsp[(7) - (11)].valu) != BVL_GRDDFN) || (BVL_GRDLST == NULL))
		      bvl_error (23, (bvl_y_vsp[(5) - (11)].name).NAME);
		    bebux_pnt = (struct bebux *)
		                beh_chktab (dic,(bvl_y_vsp[(5) - (11)].name).NAME,BVL_MODNAM,BVL_PNTDFN);
		    if (BVL_ERRFLG == 0)
		      {
		      for (i=0 ; i<sig_width ; i++)
		        {
		        if (i >= in_bound)
		          {
		          bebux_pnt->BINODE = beh_addbinode (bebux_pnt->BINODE,
		                                             NULL, NULL);
		          bebux_pnt->BINODE->TIME = delay;
		          bebux_pnt->BINODE->FLAG = (bvl_y_vsp[(8) - (11)].valu)   ;

		          bebux_pnt->BIABL  = beh_addbiabl  (bebux_pnt->BIABL,
		                                             BVL_LBLNAM,
		                                             copyExpr(BVL_GRDLST->DATA) ,
		                                             abl_pnt->DATA);
		          bebux_pnt->BIABL->TIME = delay;
		          bebux_pnt->BIABL->FLAG = (bvl_y_vsp[(8) - (11)].valu)   ;
		          abl_pnt                = abl_pnt->NEXT;
		          }
		        if (i >= out_bound)
		          break;
		        bebux_pnt = bebux_pnt->NEXT;
		        }
		      }
		    break;

		  default :
		    bvl_error (17, (bvl_y_vsp[(5) - (11)].name).NAME);
		    break;
		  }
		}
    break;

  case 83:
#line 2731 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = BVL_EMPSTR; }
    break;

  case 84:
#line 2735 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		/* ###----------------------------------------------### */
		/*    $9 est une structure, pas un pointeur...		*/
		/*    et c'est bien la le probleme............		*/
		/*    Pour BVL_EMPSTR le champs LIST_ABL doit etre NULL	*/
		/* ###----------------------------------------------### */

		if (((bvl_y_vsp[(1) - (3)].list).LIST_ABL != NULL) && ((bvl_y_vsp[(1) - (3)].list).TIME != (bvl_y_vsp[(3) - (3)].list).TIME))
                  {
		  bvl_error (80, NULL);
                  }

		(bvl_y_val.list)      = crtabl (OR, (bvl_y_vsp[(1) - (3)].list), (bvl_y_vsp[(3) - (3)].list), -1, -1);
		(bvl_y_val.list).TIME = (bvl_y_vsp[(3) - (3)].list).TIME;
		}
    break;

  case 85:
#line 2756 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		struct bvl_expr expr1;

		bvl_select (&expr1, BVL_NM1LST, &BVL_BDDPNT, BVL_SLCEXP);
		freechain  (BVL_NM1LST);
		BVL_NM1LST = NULL;

		(bvl_y_val.list)      = crtabl (ANDM, (bvl_y_vsp[(1) - (3)].list), expr1, -1, -1);
		(bvl_y_val.list).TIME = (bvl_y_vsp[(1) - (3)].list).TIME;
		}
    break;

  case 86:
#line 2770 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 87:
#line 2776 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.list)      = (bvl_y_vsp[(1) - (2)].list);
		(bvl_y_val.list).TIME = (bvl_y_vsp[(2) - (2)].valu);
		}
    break;

  case 88:
#line 2784 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 0; }
    break;

  case 89:
#line 2787 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = (bvl_y_vsp[(2) - (2)].valu); }
    break;

  case 90:
#line 2793 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		unsigned long dly;

		/* ###----------------------------------------------### */
		/*    if the delay is not null unset the 'zero delay'	*/
		/* flag of the description				*/
		/* ###----------------------------------------------### */

		dly = (bvl_y_vsp[(1) - (2)].valu) * (bvl_y_vsp[(2) - (2)].flov);
		if (dly != 0)
		  BVL_BEFPNT->FLAG &= ~BEH_FIG_ZERODELAY;

		(bvl_y_val.valu) = dly;
		}
    break;

  case 91:
#line 2811 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.flov) = BVL_CNVFS ; }
    break;

  case 92:
#line 2813 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.flov) = BVL_CNVPS ; }
    break;

  case 93:
#line 2815 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.flov) = BVL_CNVNS ; }
    break;

  case 94:
#line 2817 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.flov) = BVL_CNVUS ; }
    break;

  case 95:
#line 2819 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.flov) = BVL_CNVMS ; }
    break;

  case 96:
#line 2824 "../../../src/bvl/src/bvl_bcomp_y.y"
    { BVL_NM1LST = addchain (NULL, (bvl_y_vsp[(1) - (1)].text)); }
    break;

  case 97:
#line 2826 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_y_errok; }
    break;

  case 99:
#line 2834 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if ((bvl_y_vsp[(3) - (3)].text) == "others")
		  bvl_error (30, NULL);
		BVL_NM1LST = addchain (BVL_NM1LST, (bvl_y_vsp[(3) - (3)].text));
		}
    break;

  case 100:
#line 2843 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 101:
#line 2845 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = "others"; }
    break;

  case 102:
#line 2847 "../../../src/bvl/src/bvl_bcomp_y.y"
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

		strcpy (val2, "B\"");
		sig_conf = beh_chktab (dic, (bvl_y_vsp[(1) - (1)].name).NAME, BVL_MODNAM, BVL_SIGDFN);
		val      = (char *) beh_chktab (dic, (bvl_y_vsp[(1) - (1)].name).NAME, NULL, BVL_PNTDFN);
		if (sig_conf == 0)
		  bvl_error (17, (bvl_y_vsp[(1) - (1)].name).NAME);
		else
		  {
		  if (sig_conf != BVL_CSTDFN)
		    bvl_error (76, (bvl_y_vsp[(1) - (1)].name).NAME);
		  }

		left_bnd  = beh_chktab (dic, (bvl_y_vsp[(1) - (1)].name).NAME, BVL_MODNAM, BVL_WMNDFN);
		right_bnd = beh_chktab (dic, (bvl_y_vsp[(1) - (1)].name).NAME, BVL_MODNAM, BVL_WMXDFN);

		left  = (bvl_y_vsp[(1) - (1)].name).LEFT;
		right = (bvl_y_vsp[(1) - (1)].name).RIGHT;

		if (left_bnd <= right_bnd)
		  {
		  if (left <= right)
		    {
		    in_bound = left - left_bnd;
		    out_bound = right - left_bnd;
		    if ((left < left_bnd) || (right > right_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  else
		    {
		    in_bound = left - right_bnd;
		    out_bound = right - right_bnd;
		    if ((left > right_bnd) || (right < left_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  }
		else
		  {
		  if (left <= right)
		    {
		    in_bound = right - left_bnd;
		    out_bound = left - left_bnd;
		    if ((left < right_bnd) || (right > left_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  else
		    {
		    in_bound = right - right_bnd;
		    out_bound = left - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  }

		tobin (&val2[2], val, in_bound, out_bound);
		strcat (val2, "\"");
		(bvl_y_val.text) = namealloc (val2);
		}
    break;

  case 103:
#line 2918 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = NULL; }
    break;

  case 104:
#line 2921 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(2) - (2)].text); }
    break;

  case 105:
#line 2926 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 'E'; }
    break;

  case 106:
#line 2929 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = (bvl_y_vsp[(2) - (2)].valu); }
    break;

  case 107:
#line 2934 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 108:
#line 2939 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 'E'; }
    break;

  case 109:
#line 2941 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = 'W'; }
    break;

  case 110:
#line 2946 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 111:
#line 2948 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 112:
#line 2950 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 113:
#line 2952 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 114:
#line 2959 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (AND , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 115:
#line 2963 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (AND , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 116:
#line 2970 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (OR , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 117:
#line 2974 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (OR , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 118:
#line 2979 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 119:
#line 2983 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (NAND , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 120:
#line 2987 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (NOR , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 121:
#line 2995 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (XOR , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 122:
#line 2999 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (XOR , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 123:
#line 3004 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 124:
#line 3008 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl ((bvl_y_vsp[(2) - (3)].valu) , (bvl_y_vsp[(1) - (3)].list) , (bvl_y_vsp[(3) - (3)].list) , -1, -1); }
    break;

  case 125:
#line 3013 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 126:
#line 3018 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 127:
#line 3022 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (CONC, (bvl_y_vsp[(1) - (3)].list), (bvl_y_vsp[(3) - (3)].list), -1, -1); }
    break;

  case 128:
#line 3028 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 129:
#line 3033 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 130:
#line 3036 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = crtabl (NOT, (bvl_y_vsp[(2) - (2)].list), BVL_EMPSTR, -1, -1); }
    break;

  case 131:
#line 3041 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		struct bvl_expr expr1;
		expr1.IDENT = (bvl_y_vsp[(1) - (1)].text);
		(bvl_y_val.list) = crtabl (NOPS, expr1, BVL_EMPSTR, -1, -1);
		}
    break;

  case 132:
#line 3047 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(1) - (1)].list); }
    break;

  case 133:
#line 3049 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		struct bvl_expr expr1;
		long             left;
		long             right;
		long             left_bnd;
		long             right_bnd;
		long             in_bound;
		long             out_bound;
		long             sig_conf;

		sig_conf = beh_chktab (dic, (bvl_y_vsp[(1) - (1)].name).NAME, BVL_MODNAM, BVL_SIGDFN);
		switch (sig_conf)
		  {
		  case (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		  case (BVL_BITDFN + BVL_NORDFN):
		  case (BVL_MUXDFN + BVL_BUSDFN):
		  case (BVL_WORDFN + BVL_BUSDFN):
		  case (BVL_RBIDFN + BVL_REGDFN):
		  case (BVL_CSTDFN):
		    break;
		  case (BVL_OCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_OCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_OCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		    bvl_error (26, (bvl_y_vsp[(1) - (1)].name).NAME);
		    break;
		  default :
		    bvl_error (17, (bvl_y_vsp[(1) - (1)].name).NAME);
		    break;
		  }

		left_bnd  = beh_chktab (dic, (bvl_y_vsp[(1) - (1)].name).NAME, BVL_MODNAM, BVL_WMNDFN);
		right_bnd = beh_chktab (dic, (bvl_y_vsp[(1) - (1)].name).NAME, BVL_MODNAM, BVL_WMXDFN);

		left  = (bvl_y_vsp[(1) - (1)].name).LEFT;
		right = (bvl_y_vsp[(1) - (1)].name).RIGHT;

		if (left_bnd <= right_bnd)
		  {
		  if (left <= right)
		    {
		    in_bound  = left  - left_bnd;
		    out_bound = right - left_bnd;
		    if ((left < left_bnd) || (right > right_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  else
		    {
		    in_bound  = right - left_bnd;
		    out_bound = left  - left_bnd;
		    if ((left > right_bnd) || (right < left_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  }
		else
		  {
		  if (left <= right)
		    {
		    in_bound  = left  - right_bnd;
		    out_bound = right - right_bnd;
		    if ((left < right_bnd) || (right > left_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  else
		    {
		    in_bound  = right - right_bnd;
		    out_bound = left  - right_bnd;
		    if ((left > left_bnd) || (right < right_bnd))
		      bvl_error (36, (bvl_y_vsp[(1) - (1)].name).NAME);
		    }
		  }

		if (sig_conf != BVL_CSTDFN)
		  {
		  expr1.IDENT = (bvl_y_vsp[(1) - (1)].name).NAME;
		  if((bvl_y_vsp[(1) - (1)].name).FLAG == 'X')
		    {
		    expr1 = crtabl (NOPI  , expr1, BVL_EMPSTR, left, right);
		    (bvl_y_val.list)    = crtabl (STABLE, expr1, BVL_EMPSTR, left, right);
		    }
		  else 
		    (bvl_y_val.list)    = crtabl (NOPI  , expr1, BVL_EMPSTR, left, right);
		  }
		else
		  {
		  expr1.IDENT = (char *)beh_chktab(dic,(bvl_y_vsp[(1) - (1)].name).NAME,NULL,BVL_PNTDFN);
		  (bvl_y_val.list) = crtabl (NOPS,expr1,BVL_EMPSTR,in_bound,out_bound);
		  }
		}
    break;

  case 134:
#line 3144 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = EQ; }
    break;

  case 135:
#line 3146 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = NE; }
    break;

  case 136:
#line 3151 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 137:
#line 3153 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 138:
#line 3155 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 139:
#line 3162 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.list) = (bvl_y_vsp[(2) - (3)].list); }
    break;

  case 140:
#line 3167 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.name).NAME  = (bvl_y_vsp[(1) - (1)].text);
		(bvl_y_val.name).LEFT  = beh_chktab (dic, (bvl_y_vsp[(1) - (1)].text), BVL_MODNAM, BVL_WMNDFN);
		(bvl_y_val.name).RIGHT = beh_chktab (dic, (bvl_y_vsp[(1) - (1)].text), BVL_MODNAM, BVL_WMXDFN);
		}
    break;

  case 141:
#line 3173 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 142:
#line 3175 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 143:
#line 3177 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 144:
#line 3185 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		(bvl_y_val.name).NAME  = (bvl_y_vsp[(1) - (4)].text);
		(bvl_y_val.name).LEFT  = (bvl_y_vsp[(3) - (4)].valu);
		(bvl_y_val.name).RIGHT = (bvl_y_vsp[(3) - (4)].valu);
		}
    break;

  case 145:
#line 3199 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		if ((((bvl_y_vsp[(5) - (6)].valu) > (bvl_y_vsp[(3) - (6)].valu)) && ((bvl_y_vsp[(4) - (6)].valu) != BVL_UPTDFN)) ||
		    (((bvl_y_vsp[(5) - (6)].valu) < (bvl_y_vsp[(3) - (6)].valu)) && ((bvl_y_vsp[(4) - (6)].valu) != BVL_DWTDFN)))
		  bvl_error (32, (bvl_y_vsp[(1) - (6)].text));

		(bvl_y_val.name).NAME  = (bvl_y_vsp[(1) - (6)].text);
		(bvl_y_val.name).LEFT  = (bvl_y_vsp[(3) - (6)].valu);
		(bvl_y_val.name).RIGHT = (bvl_y_vsp[(5) - (6)].valu);
		}
    break;

  case 146:
#line 3214 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		char             extname [100];
		char            *lclname      ;
		long              sig_conf     ;
		struct bvl_expr  expr1        ;
		struct bvl_expr  expr2        ;
		struct chain    *ptabl        ;

		sig_conf = beh_chktab (dic, (bvl_y_vsp[(1) - (3)].text), BVL_MODNAM, BVL_SIGDFN);
		switch (sig_conf)
		  {
		  case (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_BITDFN + BVL_NORDFN) :
		  case (BVL_BCNDFN + BVL_MUXDFN + BVL_BUSDFN) :
		  case (BVL_BCNDFN + BVL_WORDFN + BVL_BUSDFN) :
		  case (BVL_BITDFN + BVL_NORDFN):
		  case (BVL_MUXDFN + BVL_BUSDFN):
		  case (BVL_WORDFN + BVL_BUSDFN):
		  case (BVL_RBIDFN + BVL_REGDFN):
		    break;
		  default :
		    bvl_error (79, (bvl_y_vsp[(1) - (3)].text));
		  }

		if (beh_chktab (dic, (bvl_y_vsp[(1) - (3)].text), BVL_MODNAM, BVL_WMNDFN) != -1)
		  bvl_error (79, (bvl_y_vsp[(1) - (3)].text));

		sprintf (extname, "%s'delayed", (bvl_y_vsp[(1) - (3)].text));
		lclname = namealloc (extname);

		if (BVL_ERRFLG == 0)
		  {
		  if (beh_chktab (dic, (bvl_y_vsp[(1) - (3)].text), BVL_MODNAM, BVL_STBDFN) == 0)
		    {
		    expr1.IDENT = (bvl_y_vsp[(1) - (3)].text);
		    expr1.WIDTH  = 1;
		    expr2 = crtabl (NOPI, expr1, BVL_EMPSTR, -1, -1);
		    ptabl = expr2.LIST_ABL->DATA;

		    if (BVL_AUXMOD == 1)
		      BVL_BEFPNT->BERIN=beh_addberin(BVL_BEFPNT->BERIN,lclname);

		    BVL_BEFPNT->BEDLY = beh_addbeaux(BVL_BEFPNT->BEDLY,lclname,
		                                     ptabl, NULL);
		    beh_addtab (dic, (bvl_y_vsp[(1) - (3)].text)     , BVL_MODNAM, BVL_STBDFN, 1);
		    beh_addtab (dic, lclname, BVL_MODNAM, BVL_WMNDFN, -1);
		    beh_addtab (dic, lclname, BVL_MODNAM, BVL_WMXDFN, -1);
		    beh_addtab (dic, lclname, BVL_MODNAM, BVL_SIGDFN,
		                (BVL_ICNDFN + BVL_BITDFN + BVL_NORDFN));
		    }
		  }
		BVL_BEFPNT->TYPE |= BEH_STABLE;
		(bvl_y_val.name).NAME  = (bvl_y_vsp[(1) - (3)].text) ;
		(bvl_y_val.name).LEFT  = -1 ;
		(bvl_y_val.name).RIGHT = -1 ;
		(bvl_y_val.name).FLAG  = 'X';

		}
    break;

  case 148:
#line 3280 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = BIT; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 149:
#line 3282 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = WOR_BIT; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 150:
#line 3284 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = MUX_BIT; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 151:
#line 3286 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = BIT; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 152:
#line 3288 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = WOR_BIT; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 153:
#line 3290 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = MUX_BIT; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 154:
#line 3292 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = REG_BIT; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 155:
#line 3294 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = REG_BIT; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 156:
#line 3296 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = NATURAL; (bvl_y_val.dble).FLAG = 'S'; }
    break;

  case 157:
#line 3298 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.dble).VALU = NATURAL; (bvl_y_val.dble).FLAG = 'A'; }
    break;

  case 158:
#line 3303 "../../../src/bvl/src/bvl_bcomp_y.y"
    { BVL_NM1LST = addchain (BVL_NM1LST, (bvl_y_vsp[(1) - (1)].text)); }
    break;

  case 161:
#line 3312 "../../../src/bvl/src/bvl_bcomp_y.y"
    { BVL_NM1LST = addchain (BVL_NM1LST, (bvl_y_vsp[(3) - (3)].text)); }
    break;

  case 162:
#line 3317 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = NULL; }
    break;

  case 163:
#line 3319 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 164:
#line 3324 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = NULL; }
    break;

  case 165:
#line 3326 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 166:
#line 3333 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (char *)(bvl_y_vsp[(2) - (3)].list).LIST_ABL->DATA; }
    break;

  case 167:
#line 3338 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BEH_ASG_INERTIAL ; }
    break;

  case 168:
#line 3340 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BEH_ASG_TRANSPORT; }
    break;

  case 169:
#line 3345 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BVL_UNGDFN ; }
    break;

  case 170:
#line 3347 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = BVL_GRDDFN; }
    break;

  case 171:
#line 3352 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = NULL; }
    break;

  case 172:
#line 3354 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 173:
#line 3359 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 174:
#line 3364 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.name) = (bvl_y_vsp[(1) - (1)].name); }
    break;

  case 175:
#line 3370 "../../../src/bvl/src/bvl_bcomp_y.y"
    {
		BVL_LBLNAM = (bvl_y_vsp[(1) - (2)].text);
		(bvl_y_val.text) = (bvl_y_vsp[(1) - (2)].text);
		}
    break;

  case 176:
#line 3378 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.text) = (bvl_y_vsp[(1) - (1)].text); }
    break;

  case 177:
#line 3383 "../../../src/bvl/src/bvl_bcomp_y.y"
    { (bvl_y_val.valu) = atoi ((bvl_y_vsp[(1) - (1)].text)); }
    break;

  case 178:
#line 3388 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_y_errok; }
    break;

  case 179:
#line 3393 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_y_errok; }
    break;

  case 180:
#line 3398 "../../../src/bvl/src/bvl_bcomp_y.y"
    { bvl_y_errok; }
    break;


/* Line 1267 of yacc.c.  */
#line 5051 "y.tab.c"
      default: break;
    }
  BVL_Y__SYMBOL_PRINT ("-> $$ =", bvl_y_r1[bvl_y_n], &bvl_y_val, &bvl_y_loc);

  BVL_Y_POPSTACK (bvl_y_len);
  bvl_y_len = 0;
  BVL_Y__STACK_PRINT (bvl_y_ss, bvl_y_ssp);

  *++bvl_y_vsp = bvl_y_val;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  bvl_y_n = bvl_y_r1[bvl_y_n];

  bvl_y_state = bvl_y_pgoto[bvl_y_n - BVL_Y_NTOKENS] + *bvl_y_ssp;
  if (0 <= bvl_y_state && bvl_y_state <= BVL_Y_LAST && bvl_y_check[bvl_y_state] == *bvl_y_ssp)
    bvl_y_state = bvl_y_table[bvl_y_state];
  else
    bvl_y_state = bvl_y_defgoto[bvl_y_n - BVL_Y_NTOKENS];

  goto bvl_y_newstate;


/*------------------------------------.
| bvl_y_errlab -- here on detecting error |
`------------------------------------*/
bvl_y_errlab:
  /* If not already recovering from an error, report this error.  */
  if (!bvl_y_errstatus)
    {
      ++bvl_y_nerrs;
#if ! BVL_Y_ERROR_VERBOSE
      bvl_y_error (BVL_Y__("syntax error"));
#else
      {
	BVL_Y_SIZE_T bvl_y_size = bvl_y_syntax_error (0, bvl_y_state, bvl_y_char);
	if (bvl_y_msg_alloc < bvl_y_size && bvl_y_msg_alloc < BVL_Y_STACK_ALLOC_MAXIMUM)
	  {
	    BVL_Y_SIZE_T bvl_y_alloc = 2 * bvl_y_size;
	    if (! (bvl_y_size <= bvl_y_alloc && bvl_y_alloc <= BVL_Y_STACK_ALLOC_MAXIMUM))
	      bvl_y_alloc = BVL_Y_STACK_ALLOC_MAXIMUM;
	    if (bvl_y_msg != bvl_y_msgbuf)
	      BVL_Y_STACK_FREE (bvl_y_msg);
	    bvl_y_msg = (char *) BVL_Y_STACK_ALLOC (bvl_y_alloc);
	    if (bvl_y_msg)
	      bvl_y_msg_alloc = bvl_y_alloc;
	    else
	      {
		bvl_y_msg = bvl_y_msgbuf;
		bvl_y_msg_alloc = sizeof bvl_y_msgbuf;
	      }
	  }

	if (0 < bvl_y_size && bvl_y_size <= bvl_y_msg_alloc)
	  {
	    (void) bvl_y_syntax_error (bvl_y_msg, bvl_y_state, bvl_y_char);
	    bvl_y_error (bvl_y_msg);
	  }
	else
	  {
	    bvl_y_error (BVL_Y__("syntax error"));
	    if (bvl_y_size != 0)
	      goto bvl_y_exhaustedlab;
	  }
      }
#endif
    }



  if (bvl_y_errstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (bvl_y_char <= BVL_Y_EOF)
	{
	  /* Return failure if at end of input.  */
	  if (bvl_y_char == BVL_Y_EOF)
	    BVL_Y_ABORT;
	}
      else
	{
	  bvl_y_destruct ("Error: discarding",
		      bvl_y_token, &bvl_y_lval);
	  bvl_y_char = BVL_Y_EMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto bvl_y_errlab1;


/*---------------------------------------------------.
| bvl_y_errorlab -- error raised explicitly by BVL_Y_ERROR.  |
`---------------------------------------------------*/
bvl_y_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     BVL_Y_ERROR and the label bvl_y_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto bvl_y_errorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this BVL_Y_ERROR.  */
  BVL_Y_POPSTACK (bvl_y_len);
  bvl_y_len = 0;
  BVL_Y__STACK_PRINT (bvl_y_ss, bvl_y_ssp);
  bvl_y_state = *bvl_y_ssp;
  goto bvl_y_errlab1;


/*-------------------------------------------------------------.
| bvl_y_errlab1 -- common code for both syntax error and BVL_Y_ERROR.  |
`-------------------------------------------------------------*/
bvl_y_errlab1:
  bvl_y_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      bvl_y_n = bvl_y_pact[bvl_y_state];
      if (bvl_y_n != BVL_Y_PACT_NINF)
	{
	  bvl_y_n += BVL_Y_TERROR;
	  if (0 <= bvl_y_n && bvl_y_n <= BVL_Y_LAST && bvl_y_check[bvl_y_n] == BVL_Y_TERROR)
	    {
	      bvl_y_n = bvl_y_table[bvl_y_n];
	      if (0 < bvl_y_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (bvl_y_ssp == bvl_y_ss)
	BVL_Y_ABORT;


      bvl_y_destruct ("Error: popping",
		  bvl_y_stos[bvl_y_state], bvl_y_vsp);
      BVL_Y_POPSTACK (1);
      bvl_y_state = *bvl_y_ssp;
      BVL_Y__STACK_PRINT (bvl_y_ss, bvl_y_ssp);
    }

  if (bvl_y_n == BVL_Y_FINAL)
    BVL_Y_ACCEPT;

  *++bvl_y_vsp = bvl_y_lval;


  /* Shift the error token.  */
  BVL_Y__SYMBOL_PRINT ("Shifting", bvl_y_stos[bvl_y_n], bvl_y_vsp, bvl_y_lsp);

  bvl_y_state = bvl_y_n;
  goto bvl_y_newstate;


/*-------------------------------------.
| bvl_y_acceptlab -- BVL_Y_ACCEPT comes here.  |
`-------------------------------------*/
bvl_y_acceptlab:
  bvl_y_result = 0;
  goto bvl_y_return;

/*-----------------------------------.
| bvl_y_abortlab -- BVL_Y_ABORT comes here.  |
`-----------------------------------*/
bvl_y_abortlab:
  bvl_y_result = 1;
  goto bvl_y_return;

#ifndef bvl_y_overflow
/*-------------------------------------------------.
| bvl_y_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
bvl_y_exhaustedlab:
  bvl_y_error (BVL_Y__("memory exhausted"));
  bvl_y_result = 2;
  /* Fall through.  */
#endif

bvl_y_return:
  if (bvl_y_char != BVL_Y_EOF && bvl_y_char != BVL_Y_EMPTY)
     bvl_y_destruct ("Cleanup: discarding lookahead",
		 bvl_y_token, &bvl_y_lval);
  /* Do not reclaim the symbols of the rule which action triggered
     this BVL_Y_ABORT or BVL_Y_ACCEPT.  */
  BVL_Y_POPSTACK (bvl_y_len);
  BVL_Y__STACK_PRINT (bvl_y_ss, bvl_y_ssp);
  while (bvl_y_ssp != bvl_y_ss)
    {
      bvl_y_destruct ("Cleanup: popping",
		  bvl_y_stos[*bvl_y_ssp], bvl_y_vsp);
      BVL_Y_POPSTACK (1);
    }
#ifndef bvl_y_overflow
  if (bvl_y_ss != bvl_y_ssa)
    BVL_Y_STACK_FREE (bvl_y_ss);
#endif
#if BVL_Y_ERROR_VERBOSE
  if (bvl_y_msg != bvl_y_msgbuf)
    BVL_Y_STACK_FREE (bvl_y_msg);
#endif
  /* Make sure BVL_Y_ID is used.  */
  return BVL_Y_ID (bvl_y_result);
}


#line 3400 "../../../src/bvl/src/bvl_bcomp_y.y"


