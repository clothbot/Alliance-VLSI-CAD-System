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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 33 "../../../src/sea/src/DEF_grammar_yacc.y"
{
    double       n;
    char        *s;
    struct pt   *pt;
}
/* Line 1489 of yacc.c.  */
#line 373 "DEF_grammar_yacc.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE DEF_grammarlval;

