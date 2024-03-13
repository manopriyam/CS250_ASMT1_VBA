/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COMMENT = 258,
    STRING_LITERAL = 259,
    OBJECT = 260,
    OBJECT_BLOCK = 261,
    DATATYPE = 262,
    T_DO_WHILE = 263,
    T_DO_UNTIL = 264,
    T_END_IF = 265,
    T_ELSE_IF = 266,
    T_IF = 267,
    T_THEN = 268,
    T_ELSE = 269,
    T_SELECT_CASE = 270,
    T_END_SELECT = 271,
    T_CASE_ELSE = 272,
    T_CASE = 273,
    T_EXIT_FOR = 274,
    T_FOR_EACH = 275,
    T_FOR = 276,
    T_TO = 277,
    T_STEP = 278,
    T_NEXT = 279,
    T_EXIT_DO = 280,
    T_DO = 281,
    T_LOOP = 282,
    T_WHILE = 283,
    T_UNTIL = 284,
    T_WEND = 285,
    T_END_WITH = 286,
    T_WITH = 287,
    T_ON_ERROR = 288,
    T_ON = 289,
    T_GOTO = 290,
    T_GO_SUB = 291,
    T_RETURN = 292,
    T_IN = 293,
    T_AS = 294,
    T_APP_ACTIVATE = 295,
    T_BEEP = 296,
    T_CALL = 297,
    T_CHDIR = 298,
    T_CHDRIVE = 299,
    T_CLOSE = 300,
    T_CONST = 301,
    T_DECLARE = 302,
    T_DELETE_SETTING = 303,
    T_DIM = 304,
    T_ERASE = 305,
    T_ERROR = 306,
    T_EVENT = 307,
    T_FILE_COPY = 308,
    T_FUNCTION = 309,
    T_IMPLEMENTS = 310,
    T_KILL = 311,
    T_LET = 312,
    T_LOAD = 313,
    T_UNLOAD = 314,
    T_LOCK = 315,
    T_UNLOCK = 316,
    T_LSET = 317,
    T_MKDIR = 318,
    T_NAME = 319,
    T_OPEN = 320,
    T_LINE_INPUT = 321,
    T_INPUT = 322,
    T_OPTION_BASE = 323,
    T_OPTION_COMPARE = 324,
    T_OPTION_PRIVATE = 325,
    T_OPTION_PRIVATE_MODULE = 326,
    T_OPTION_EXPLICIT = 327,
    T_PROPERTY_GET = 328,
    T_PROPERTY_LET = 329,
    T_PROPERTY_SET = 330,
    T_PROPERTY = 331,
    T_PRINT = 332,
    T_PRIVATE = 333,
    T_PUBLIC = 334,
    T_PUT = 335,
    T_RAISE_EVENT = 336,
    T_RANDOMIZE = 337,
    T_REDIM = 338,
    T_RESET = 339,
    T_RESUME = 340,
    T_RMDIR = 341,
    T_RSET = 342,
    T_SAVE_SETTING = 343,
    T_SEEK = 344,
    T_SEND_KEYS = 345,
    T_SET = 346,
    T_SET_ATTR = 347,
    T_STATIC = 348,
    T_STOP = 349,
    T_SUB = 350,
    T_TIME = 351,
    T_TYPE = 352,
    T_WIDTH = 353,
    T_WRITE = 354,
    T_ENUM = 355,
    T_END = 356,
    T_EXIT = 357,
    T_BY_VAL = 358,
    T_BY_REF = 359,
    T_NEW = 360,
    T_MSG_BOX = 361,
    T_POWER = 362,
    T_MULTIPLY = 363,
    T_DIVIDE = 364,
    T_BACKSLASH = 365,
    T_MOD = 366,
    T_PLUS = 367,
    T_MINUS = 368,
    T_CONCATENATE = 369,
    T_EQUAL = 370,
    T_NOT_EQUAL = 371,
    T_LESS_EQUAL = 372,
    T_GREATER_EQUAL = 373,
    T_LESS_THAN = 374,
    T_GREATER_THAN = 375,
    T_IS = 376,
    T_LIKE = 377,
    T_NOT = 378,
    T_AND = 379,
    T_OR = 380,
    T_XOR = 381,
    T_EQV = 382,
    T_IMP = 383,
    NUMERIC_LITERAL = 384,
    FLOAT_LITERAL = 385,
    IDENTIFIER = 386,
    PARENTHESIS = 387,
    SEPARATOR = 388,
    NEXT = 389
  };
#endif
/* Tokens.  */
#define COMMENT 258
#define STRING_LITERAL 259
#define OBJECT 260
#define OBJECT_BLOCK 261
#define DATATYPE 262
#define T_DO_WHILE 263
#define T_DO_UNTIL 264
#define T_END_IF 265
#define T_ELSE_IF 266
#define T_IF 267
#define T_THEN 268
#define T_ELSE 269
#define T_SELECT_CASE 270
#define T_END_SELECT 271
#define T_CASE_ELSE 272
#define T_CASE 273
#define T_EXIT_FOR 274
#define T_FOR_EACH 275
#define T_FOR 276
#define T_TO 277
#define T_STEP 278
#define T_NEXT 279
#define T_EXIT_DO 280
#define T_DO 281
#define T_LOOP 282
#define T_WHILE 283
#define T_UNTIL 284
#define T_WEND 285
#define T_END_WITH 286
#define T_WITH 287
#define T_ON_ERROR 288
#define T_ON 289
#define T_GOTO 290
#define T_GO_SUB 291
#define T_RETURN 292
#define T_IN 293
#define T_AS 294
#define T_APP_ACTIVATE 295
#define T_BEEP 296
#define T_CALL 297
#define T_CHDIR 298
#define T_CHDRIVE 299
#define T_CLOSE 300
#define T_CONST 301
#define T_DECLARE 302
#define T_DELETE_SETTING 303
#define T_DIM 304
#define T_ERASE 305
#define T_ERROR 306
#define T_EVENT 307
#define T_FILE_COPY 308
#define T_FUNCTION 309
#define T_IMPLEMENTS 310
#define T_KILL 311
#define T_LET 312
#define T_LOAD 313
#define T_UNLOAD 314
#define T_LOCK 315
#define T_UNLOCK 316
#define T_LSET 317
#define T_MKDIR 318
#define T_NAME 319
#define T_OPEN 320
#define T_LINE_INPUT 321
#define T_INPUT 322
#define T_OPTION_BASE 323
#define T_OPTION_COMPARE 324
#define T_OPTION_PRIVATE 325
#define T_OPTION_PRIVATE_MODULE 326
#define T_OPTION_EXPLICIT 327
#define T_PROPERTY_GET 328
#define T_PROPERTY_LET 329
#define T_PROPERTY_SET 330
#define T_PROPERTY 331
#define T_PRINT 332
#define T_PRIVATE 333
#define T_PUBLIC 334
#define T_PUT 335
#define T_RAISE_EVENT 336
#define T_RANDOMIZE 337
#define T_REDIM 338
#define T_RESET 339
#define T_RESUME 340
#define T_RMDIR 341
#define T_RSET 342
#define T_SAVE_SETTING 343
#define T_SEEK 344
#define T_SEND_KEYS 345
#define T_SET 346
#define T_SET_ATTR 347
#define T_STATIC 348
#define T_STOP 349
#define T_SUB 350
#define T_TIME 351
#define T_TYPE 352
#define T_WIDTH 353
#define T_WRITE 354
#define T_ENUM 355
#define T_END 356
#define T_EXIT 357
#define T_BY_VAL 358
#define T_BY_REF 359
#define T_NEW 360
#define T_MSG_BOX 361
#define T_POWER 362
#define T_MULTIPLY 363
#define T_DIVIDE 364
#define T_BACKSLASH 365
#define T_MOD 366
#define T_PLUS 367
#define T_MINUS 368
#define T_CONCATENATE 369
#define T_EQUAL 370
#define T_NOT_EQUAL 371
#define T_LESS_EQUAL 372
#define T_GREATER_EQUAL 373
#define T_LESS_THAN 374
#define T_GREATER_THAN 375
#define T_IS 376
#define T_LIKE 377
#define T_NOT 378
#define T_AND 379
#define T_OR 380
#define T_XOR 381
#define T_EQV 382
#define T_IMP 383
#define NUMERIC_LITERAL 384
#define FLOAT_LITERAL 385
#define IDENTIFIER 386
#define PARENTHESIS 387
#define SEPARATOR 388
#define NEXT 389

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "syntaxAnalyzer.y"

    int numval;
    char* strval;
    double fltval;

#line 331 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
