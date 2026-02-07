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
     MODULE = 258,
     SUBFUN = 259,
     ENTRY = 260,
     SUBMODULE = 261,
     MODULESUBROUTINE = 262,
     MODULEFUNCTION = 263,
     END = 264,
     ENDSUBROUTINE = 265,
     ENDFUNCTION = 266,
     ENDPROGRAM = 267,
     ENDMODULE = 268,
     ENDSUBMODULE = 269,
     IF = 270,
     THEN = 271,
     ELSE = 272,
     ELSEIF = 273,
     ENDIF = 274,
     SIMPLEIF = 275,
     NWAYIF = 276,
     WHERE = 277,
     ENDWHERE = 278,
     FORALL = 279,
     ENDFORALL = 280,
     ELSEWHERE = 281,
     DO = 282,
     DOCOMMA = 283,
     DOWHILE = 284,
     DOCONCURRENT = 285,
     ENDDO = 286,
     SELECTCASE = 287,
     SELECTTYPE = 288,
     ENDSELECT = 289,
     CASE = 290,
     CASEDEFAULT = 291,
     TYPEIS = 292,
     CLASSIS = 293,
     CLASSDEFAULT = 294,
     SELECTRANK = 295,
     RANK = 296,
     RANKDEFAULT = 297,
     INTERFACE = 298,
     INTERFACE1 = 299,
     ABSTRACTINTERFACE = 300,
     ENDINTERFACE = 301,
     CONTAINS = 302,
     BLOCK = 303,
     ENDBLOCK = 304,
     BLOCKDATA = 305,
     ENDBLOCKDATA = 306,
     ASSOCIATE = 307,
     ENDASSOCIATE = 308,
     CRITICAL = 309,
     ENDCRITICAL = 310,
     CHANGETEAM = 311,
     ENDTEAM = 312,
     ENUM = 313,
     ENDENUM = 314,
     ASSIGNMENT = 315,
     ASSIGN = 316,
     TO = 317,
     GOTO = 318,
     GOTO_COMPUTED = 319,
     GOTO_ASSIGNED = 320,
     READ = 321,
     PRINT = 322,
     WRITE = 323,
     IO = 324,
     IOLIST = 325,
     STARTIO = 326,
     LABELIS = 327,
     OTHER = 328,
     MODULEPROCEDURE = 329,
     PROCEDURE = 330,
     ENDPROCEDURE = 331,
     TIDENTIFIER = 332,
     BLANK = 333,
     CHAR = 334,
     FINDFORMAT = 335,
     UNKNOWN = 336,
     FREE = 337,
     FIXED = 338,
     UNSURE = 339,
     PROBFREE = 340,
     FINDENTFIX = 341,
     FIXFINDENTFIX = 342,
     P_ON = 343,
     P_OFF = 344,
     SCANFIXPRE = 345,
     CPP_IF = 346,
     CPP_ENDIF = 347,
     CPP_ELSE = 348,
     CPP_ELIF = 349,
     CPP = 350,
     COCO_IF = 351,
     COCO_ENDIF = 352,
     COCO_ELSE = 353,
     COCO_ELIF = 354,
     COCO = 355,
     INCLUDE = 356,
     INCLUDE_CPP = 357,
     INCLUDE_CPP_STD = 358,
     INCLUDE_COCO = 359,
     INCFILENAME = 360,
     USE = 361,
     SEGMENT = 362,
     ENDSEGMENT = 363,
     ESOPE = 364,
     IDENTIFIER = 365,
     CIDENTIFIER = 366,
     SKIP = 367,
     SKIPALL = 368,
     SKIPNOOP = 369,
     SKIPNOS = 370,
     KEYWORD = 371,
     ELEMENTAL = 372,
     IMPURE = 373,
     PURE = 374,
     RECURSIVE = 375,
     NON_RECURSIVE = 376,
     SUBROUTINE = 377,
     FUNCTION = 378,
     PROGRAM = 379,
     EOL = 380,
     NAMED_LABEL = 381,
     STLABEL = 382,
     LABEL = 383,
     LABELS = 384,
     LABELLIST = 385,
     CALL = 386,
     STARTCALL = 387,
     CALLLIST = 388,
     TYPE = 389,
     ENDTYPE = 390,
     CLASS = 391,
     BASICTYPE = 392,
     TYPEC = 393,
     QSTRING = 394,
     HSTRING = 395,
     LR = 396,
     LRB = 397,
     DOTOPERATOR = 398,
     I_NUMBER = 399,
     UNCLASSIFIED = 400,
     ERROR = 401,
     OMP = 402,
     SCANOMPFIXED = 403,
     SCANOMPFREE = 404,
     DEF = 405,
     EXEC = 406,
     ENDDEF = 407,
     NONE = 408,
     LAST_TOKEN = 409
   };
#endif
/* Tokens.  */
#define MODULE 258
#define SUBFUN 259
#define ENTRY 260
#define SUBMODULE 261
#define MODULESUBROUTINE 262
#define MODULEFUNCTION 263
#define END 264
#define ENDSUBROUTINE 265
#define ENDFUNCTION 266
#define ENDPROGRAM 267
#define ENDMODULE 268
#define ENDSUBMODULE 269
#define IF 270
#define THEN 271
#define ELSE 272
#define ELSEIF 273
#define ENDIF 274
#define SIMPLEIF 275
#define NWAYIF 276
#define WHERE 277
#define ENDWHERE 278
#define FORALL 279
#define ENDFORALL 280
#define ELSEWHERE 281
#define DO 282
#define DOCOMMA 283
#define DOWHILE 284
#define DOCONCURRENT 285
#define ENDDO 286
#define SELECTCASE 287
#define SELECTTYPE 288
#define ENDSELECT 289
#define CASE 290
#define CASEDEFAULT 291
#define TYPEIS 292
#define CLASSIS 293
#define CLASSDEFAULT 294
#define SELECTRANK 295
#define RANK 296
#define RANKDEFAULT 297
#define INTERFACE 298
#define INTERFACE1 299
#define ABSTRACTINTERFACE 300
#define ENDINTERFACE 301
#define CONTAINS 302
#define BLOCK 303
#define ENDBLOCK 304
#define BLOCKDATA 305
#define ENDBLOCKDATA 306
#define ASSOCIATE 307
#define ENDASSOCIATE 308
#define CRITICAL 309
#define ENDCRITICAL 310
#define CHANGETEAM 311
#define ENDTEAM 312
#define ENUM 313
#define ENDENUM 314
#define ASSIGNMENT 315
#define ASSIGN 316
#define TO 317
#define GOTO 318
#define GOTO_COMPUTED 319
#define GOTO_ASSIGNED 320
#define READ 321
#define PRINT 322
#define WRITE 323
#define IO 324
#define IOLIST 325
#define STARTIO 326
#define LABELIS 327
#define OTHER 328
#define MODULEPROCEDURE 329
#define PROCEDURE 330
#define ENDPROCEDURE 331
#define TIDENTIFIER 332
#define BLANK 333
#define CHAR 334
#define FINDFORMAT 335
#define UNKNOWN 336
#define FREE 337
#define FIXED 338
#define UNSURE 339
#define PROBFREE 340
#define FINDENTFIX 341
#define FIXFINDENTFIX 342
#define P_ON 343
#define P_OFF 344
#define SCANFIXPRE 345
#define CPP_IF 346
#define CPP_ENDIF 347
#define CPP_ELSE 348
#define CPP_ELIF 349
#define CPP 350
#define COCO_IF 351
#define COCO_ENDIF 352
#define COCO_ELSE 353
#define COCO_ELIF 354
#define COCO 355
#define INCLUDE 356
#define INCLUDE_CPP 357
#define INCLUDE_CPP_STD 358
#define INCLUDE_COCO 359
#define INCFILENAME 360
#define USE 361
#define SEGMENT 362
#define ENDSEGMENT 363
#define ESOPE 364
#define IDENTIFIER 365
#define CIDENTIFIER 366
#define SKIP 367
#define SKIPALL 368
#define SKIPNOOP 369
#define SKIPNOS 370
#define KEYWORD 371
#define ELEMENTAL 372
#define IMPURE 373
#define PURE 374
#define RECURSIVE 375
#define NON_RECURSIVE 376
#define SUBROUTINE 377
#define FUNCTION 378
#define PROGRAM 379
#define EOL 380
#define NAMED_LABEL 381
#define STLABEL 382
#define LABEL 383
#define LABELS 384
#define LABELLIST 385
#define CALL 386
#define STARTCALL 387
#define CALLLIST 388
#define TYPE 389
#define ENDTYPE 390
#define CLASS 391
#define BASICTYPE 392
#define TYPEC 393
#define QSTRING 394
#define HSTRING 395
#define LR 396
#define LRB 397
#define DOTOPERATOR 398
#define I_NUMBER 399
#define UNCLASSIFIED 400
#define ERROR 401
#define OMP 402
#define SCANOMPFIXED 403
#define SCANOMPFREE 404
#define DEF 405
#define EXEC 406
#define ENDDEF 407
#define NONE 408
#define LAST_TOKEN 409




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

