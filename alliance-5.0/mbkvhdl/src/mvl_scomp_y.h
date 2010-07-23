/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef MVL_Y_TOKENTYPE
# define MVL_Y_TOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum mvl_y_tokentype {
     Ampersand = 258,
     Apostrophe = 259,
     LeftParen = 260,
     RightParen = 261,
     DoubleStar = 262,
     Star = 263,
     Plus = 264,
     Comma = 265,
     Minus = 266,
     VarAsgn = 267,
     Colon = 268,
     Semicolon = 269,
     _LESym = 270,
     Box = 271,
     _LTSym = 272,
     Arrow = 273,
     _EQSym = 274,
     _GESym = 275,
     _GTSym = 276,
     Bar = 277,
     _NESym = 278,
     Dot = 279,
     Slash = 280,
     Identifier = 281,
     DecimalInt = 282,
     DecimalReal = 283,
     AbstractLit = 284,
     BasedInt = 285,
     BasedReal = 286,
     CharacterLit = 287,
     StringLit = 288,
     BitStringLit = 289,
     ABS = 290,
     ACCESS = 291,
     AFTER = 292,
     ALIAS = 293,
     ALL = 294,
     tok_AND = 295,
     ARCHITECTURE = 296,
     ARRAY = 297,
     ASSERT = 298,
     ATTRIBUTE = 299,
     _BEGIN = 300,
     BIT = 301,
     BIT_VECTOR = 302,
     BLOCK = 303,
     BODY = 304,
     BUFFER = 305,
     BUS = 306,
     CASE = 307,
     COMPONENT = 308,
     CONFIGURATION = 309,
     CONSTANT = 310,
     CONVERT = 311,
     DISCONNECT = 312,
     DOWNTO = 313,
     ELSE = 314,
     ELSIF = 315,
     _END = 316,
     ENTITY = 317,
     ERROR = 318,
     _EXIT = 319,
     _FILE = 320,
     FOR = 321,
     FUNCTION = 322,
     GENERATE = 323,
     GENERIC = 324,
     GUARDED = 325,
     IF = 326,
     _INOUT = 327,
     _IN = 328,
     IS = 329,
     _LABEL = 330,
     LIBRARY = 331,
     _LINKAGE = 332,
     LOOP = 333,
     MAP = 334,
     MOD = 335,
     MUX_BIT = 336,
     MUX_VECTOR = 337,
     _NAND = 338,
     NATURAL = 339,
     NATURAL_VECTOR = 340,
     NEW = 341,
     _NEXT = 342,
     _NOR = 343,
     _NOT = 344,
     tok_NULL = 345,
     OF = 346,
     ON = 347,
     OPEN = 348,
     _OR = 349,
     OTHERS = 350,
     _OUT = 351,
     _PACKAGE = 352,
     PORT = 353,
     PROCEDURE = 354,
     PROCESS = 355,
     RANGE = 356,
     RECORD = 357,
     REG_BIT = 358,
     REG_VECTOR = 359,
     REGISTER = 360,
     REM = 361,
     REPORT = 362,
     RETURN = 363,
     SELECT = 364,
     SEVERITY = 365,
     SIGNAL = 366,
     _STABLE = 367,
     SUBTYPE = 368,
     THEN = 369,
     TO = 370,
     TRANSPORT = 371,
     _TYPE = 372,
     UNITS = 373,
     UNTIL = 374,
     USE = 375,
     VARIABLE = 376,
     WAIT = 377,
     WARNING = 378,
     WHEN = 379,
     WHILE = 380,
     WITH = 381,
     WOR_BIT = 382,
     WOR_VECTOR = 383,
     _XOR = 384
   };
#endif
/* Tokens.  */
#define Ampersand 258
#define Apostrophe 259
#define LeftParen 260
#define RightParen 261
#define DoubleStar 262
#define Star 263
#define Plus 264
#define Comma 265
#define Minus 266
#define VarAsgn 267
#define Colon 268
#define Semicolon 269
#define _LESym 270
#define Box 271
#define _LTSym 272
#define Arrow 273
#define _EQSym 274
#define _GESym 275
#define _GTSym 276
#define Bar 277
#define _NESym 278
#define Dot 279
#define Slash 280
#define Identifier 281
#define DecimalInt 282
#define DecimalReal 283
#define AbstractLit 284
#define BasedInt 285
#define BasedReal 286
#define CharacterLit 287
#define StringLit 288
#define BitStringLit 289
#define ABS 290
#define ACCESS 291
#define AFTER 292
#define ALIAS 293
#define ALL 294
#define tok_AND 295
#define ARCHITECTURE 296
#define ARRAY 297
#define ASSERT 298
#define ATTRIBUTE 299
#define _BEGIN 300
#define BIT 301
#define BIT_VECTOR 302
#define BLOCK 303
#define BODY 304
#define BUFFER 305
#define BUS 306
#define CASE 307
#define COMPONENT 308
#define CONFIGURATION 309
#define CONSTANT 310
#define CONVERT 311
#define DISCONNECT 312
#define DOWNTO 313
#define ELSE 314
#define ELSIF 315
#define _END 316
#define ENTITY 317
#define ERROR 318
#define _EXIT 319
#define _FILE 320
#define FOR 321
#define FUNCTION 322
#define GENERATE 323
#define GENERIC 324
#define GUARDED 325
#define IF 326
#define _INOUT 327
#define _IN 328
#define IS 329
#define _LABEL 330
#define LIBRARY 331
#define _LINKAGE 332
#define LOOP 333
#define MAP 334
#define MOD 335
#define MUX_BIT 336
#define MUX_VECTOR 337
#define _NAND 338
#define NATURAL 339
#define NATURAL_VECTOR 340
#define NEW 341
#define _NEXT 342
#define _NOR 343
#define _NOT 344
#define tok_NULL 345
#define OF 346
#define ON 347
#define OPEN 348
#define _OR 349
#define OTHERS 350
#define _OUT 351
#define _PACKAGE 352
#define PORT 353
#define PROCEDURE 354
#define PROCESS 355
#define RANGE 356
#define RECORD 357
#define REG_BIT 358
#define REG_VECTOR 359
#define REGISTER 360
#define REM 361
#define REPORT 362
#define RETURN 363
#define SELECT 364
#define SEVERITY 365
#define SIGNAL 366
#define _STABLE 367
#define SUBTYPE 368
#define THEN 369
#define TO 370
#define TRANSPORT 371
#define _TYPE 372
#define UNITS 373
#define UNTIL 374
#define USE 375
#define VARIABLE 376
#define WAIT 377
#define WARNING 378
#define WHEN 379
#define WHILE 380
#define WITH 381
#define WOR_BIT 382
#define WOR_VECTOR 383
#define _XOR 384




#if ! defined MVL_Y_STYPE && ! defined MVL_Y_STYPE_IS_DECLARED
typedef union MVL_Y_STYPE
#line 36 "../../../src/mbkvhdl/src/mvl_scomp_y.y"
{
  long        valu;
  char       *text;
  char        flag;
  mvl_name    name;
  mvl_expr    expr;
  }
/* Line 1489 of yacc.c.  */
#line 315 "y.tab.h"
	MVL_Y_STYPE;
# define mvl_y_stype MVL_Y_STYPE /* obsolescent; will be withdrawn */
# define MVL_Y_STYPE_IS_DECLARED 1
# define MVL_Y_STYPE_IS_TRIVIAL 1
#endif

extern MVL_Y_STYPE mvl_y_lval;

