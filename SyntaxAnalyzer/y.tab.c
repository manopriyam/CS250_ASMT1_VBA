/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntaxAnalyzer.y"
 
/* Definition section */
    #include<stdio.h> 
    #include<stdlib.h>  
    #include <string.h>
    int flag=0; 
    extern FILE *yyin;
    extern int yylineno;
    extern char* yytext;

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 407 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  99
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  142
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  315

#define YYUNDEFTOK  2
#define YYMAXUTOK   389


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     138,   139,     2,     2,   141,     2,   137,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   135,   136,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   134,     2,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   140
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    55,    56,    57,    58,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    87,    88,    89,    91,    92,    93,    95,
      97,    99,   100,   101,   102,   104,   105,   106,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   134,   135,   136,   137,   139,   141,   142,
     143,   144,   146,   147,   148,   149,   150,   152,   153,   155,
     156,   158,   159,   161,   162,   164,   166,   168,   170,   172,
     174,   175,   177,   178,   180,   181,   183,   184,   186,   187,
     189,   190,   192,   194,   196,   197,   199,   201,   202,   204,
     206,   207,   209,   211,   212,   214,   215,   217,   218,   219,
     221,   222,   223,   224,   225,   226,   228,   230,   232,   233,
     235,   237,   238,   240,   241,   243,   244,   245,   246,   247,
     249,   250,   252,   254,   256,   258,   260,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMENT", "STRING_LITERAL", "OBJECT",
  "OBJECT_BLOCK", "DATATYPE", "T_DO_WHILE", "T_DO_UNTIL", "T_END_IF",
  "T_ELSE_IF", "T_IF", "T_THEN", "T_ELSE", "T_SELECT_CASE", "T_END_SELECT",
  "T_CASE_ELSE", "T_CASE", "T_EXIT_FOR", "T_FOR_EACH", "T_FOR", "T_TO",
  "T_STEP", "T_NEXT", "T_EXIT_DO", "T_DO", "T_LOOP", "T_WHILE", "T_UNTIL",
  "T_WEND", "T_END_WITH", "T_WITH", "T_ON_ERROR", "T_ON", "T_GOTO",
  "T_GO_SUB", "T_RETURN", "T_IN", "T_AS", "T_APP_ACTIVATE", "T_BEEP",
  "T_CALL", "T_CHDIR", "T_CHDRIVE", "T_CLOSE", "T_CONST", "T_DECLARE",
  "T_DELETE_SETTING", "T_DIM", "T_ERASE", "T_ERROR", "T_EVENT",
  "T_FILE_COPY", "T_FUNCTION", "T_IMPLEMENTS", "T_KILL", "T_LET", "T_LOAD",
  "T_UNLOAD", "T_LOCK", "T_UNLOCK", "T_LSET", "T_MKDIR", "T_NAME",
  "T_OPEN", "T_LINE_INPUT", "T_INPUT", "T_OPTION_BASE", "T_OPTION_COMPARE",
  "T_OPTION_PRIVATE", "T_OPTION_PRIVATE_MODULE", "T_OPTION_EXPLICIT",
  "T_PROPERTY_GET", "T_PROPERTY_LET", "T_PROPERTY_SET", "T_PROPERTY",
  "T_PRINT", "T_PRIVATE", "T_PUBLIC", "T_PUT", "T_RAISE_EVENT",
  "T_RANDOMIZE", "T_REDIM", "T_RESET", "T_RESUME", "T_RMDIR", "T_RSET",
  "T_SAVE_SETTING", "T_SEEK", "T_SEND_KEYS", "T_SET", "T_SET_ATTR",
  "T_STATIC", "T_STOP", "T_SUB", "T_TIME", "T_TYPE", "T_WIDTH", "T_WRITE",
  "T_ENUM", "T_END", "T_EXIT", "T_BY_VAL", "T_BY_REF", "T_NEW",
  "T_MSG_BOX", "T_POWER", "T_MULTIPLY", "T_DIVIDE", "T_BACKSLASH", "T_MOD",
  "T_PLUS", "T_MINUS", "T_CONCATENATE", "T_EQUAL", "T_NOT_EQUAL",
  "T_LESS_EQUAL", "T_GREATER_EQUAL", "T_LESS_THAN", "T_GREATER_THAN",
  "T_IS", "T_LIKE", "T_NOT", "T_AND", "T_OR", "T_XOR", "T_EQV", "T_IMP",
  "NUMERIC_LITERAL", "FLOAT_LITERAL", "IDENTIFIER", "PARENTHESIS",
  "SEPARATOR", "'_'", "':'", "';'", "'.'", "'('", "')'", "NEXT", "','",
  "$accept", "statements", "statement", "vartype", "declare",
  "declaration", "redeclaration", "value", "numbers", "expression",
  "assignment", "objectblock", "object", "obj", "valuecomma",
  "printvalues", "printing", "paramdeclare", "subblock", "functionblock",
  "propertygetblock", "propertysetblock", "propertyletblock", "typeblock",
  "type_declaration", "type_block", "data_type", "type_dec_value",
  "withblock", "conditionalifelse", "ifblock", "elseifs", "elseifblock",
  "elseblock", "conditionalselectcase", "cases", "caseblock", "elsecase",
  "caseexprs", "caseexpr", "compop", "forloop", "foreachloop", "stepping",
  "whileloop", "doWhileloop", "doUntilloop", "exit_statement", "pvtpub",
  "pvtpubdeclaration", "pvtpubsubblock", "pvtpubfunctionblock",
  "pvtpubpropgetblock", "pvtpubpropletblock", "pvtpubpropsetblock", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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
     385,   386,   387,   388,    95,    58,    59,    46,    40,    41,
     389,    44
};
# endif

#define YYPACT_NINF (-209)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1901,  -209,  -134,  -130,    30,    30,    30,  -118,  -209,  -104,
      17,  -209,  1901,    30,    12,   -76,   -37,    17,   -25,   -21,
      16,  -209,  -209,   -76,    17,    21,    32,   -38,    94,   -85,
     419,  -209,  -209,  -209,  -209,    25,    27,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,   -30,  -209,  -209,  -209,  -209,
    -209,  -209,     8,     8,  -209,  -209,  -209,   -79,    30,  -209,
    1774,  -209,  1774,  1902,  -209,   127,   145,   598,  1774,   503,
    1901,   -33,    29,    33,  -209,    34,    36,    37,    29,  -209,
      57,    11,  -209,  -209,  -209,    82,    30,    20,     8,  -209,
    -209,  -209,  -209,  -209,    30,    23,    40,    29,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,   -46,   -42,  1970,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
     682,   766,  1901,    58,    66,   -63,    84,   850,   934,  1018,
      24,    69,  -209,    68,   -76,   -76,   -76,   -76,   -76,    73,
      62,   -94,  -209,   162,     8,  -209,  2003,   -79,  -209,   -32,
    2003,    72,  -209,    30,  1901,  -209,   196,  -209,     8,  -209,
    -209,   -65,   -65,   -65,   -65,   -65,   292,   292,   292,  -209,
     266,   266,   266,   266,   266,   266,   266,   241,    70,  2064,
    2045,  2025,  2025,  -209,  -209,  1690,  1901,    15,  -209,   191,
    1901,  -209,  -209,  -209,   185,    30,    30,  -209,  -209,  -209,
    -209,  -209,   193,   174,    29,    99,   100,   101,   102,   103,
     -69,   115,   148,  -209,   239,    82,  -209,  1926,  1690,  -209,
    -209,  1690,   -35,  1948,   315,  -209,  -209,  1102,   -63,  1901,
    2003,  2003,   120,  -209,   174,   174,   174,   174,  1901,   154,
     230,  -209,   146,   250,  -209,  1901,  -209,  -209,  -209,  -209,
    -209,  -209,    30,    30,    15,  1690,   124,  -209,  1186,   119,
    1901,  1901,  1901,  1901,  1270,  -209,   130,    30,  -209,  1690,
    2003,  2003,  -209,  -209,   129,   174,  1354,  1438,  1522,  1606,
     166,   123,  2003,  -209,  -209,   209,   189,   190,   197,  -209,
    -209,  -209,  -209,  -209,  -209
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    32,    86,    84,     0,     0,     0,     0,   145,     0,
       0,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   150,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     7,     8,     9,     0,    77,    79,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   115,    19,    20,
      21,    22,    23,    24,    25,     0,    26,    27,    28,    29,
      31,    30,     0,     0,    42,    43,    44,    41,     0,    71,
       0,    72,     0,     0,   121,     0,     0,     0,     0,     0,
       0,    35,    39,     0,    76,     0,     0,     0,    40,    75,
       0,     0,   148,   149,   147,    91,     0,     0,     0,     1,
       4,     5,     6,     3,     0,     0,   118,   152,   153,   154,
     155,   157,   156,    41,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,    94,    94,    94,    94,    94,     0,
     108,     0,   102,     0,     0,    92,    73,     0,    81,     0,
      74,    80,    78,     0,     0,   114,     0,    85,     0,    83,
      70,    54,    50,    51,    52,    53,    48,    49,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,   141,   143,   113,     0,     0,   120,     0,
       0,    46,    47,    45,   139,     0,     0,   140,   110,   111,
      33,    34,     0,    35,    93,     0,     0,     0,     0,     0,
       0,     0,     0,   103,     0,    90,    82,     0,   117,   112,
      88,   123,     0,   127,     0,   126,   119,     0,     0,     0,
     142,   144,     0,    37,    35,    35,    35,    35,     0,     0,
       0,   100,   106,   104,    89,     0,   130,   131,   132,   133,
     134,   135,     0,     0,     0,   122,     0,   138,     0,     0,
       0,     0,     0,     0,     0,   101,     0,     0,   105,   116,
     129,   128,   125,   137,     0,    35,     0,     0,     0,     0,
       0,     0,   107,   136,    38,     0,     0,     0,     0,    95,
     109,    96,    97,    99,    98
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -209,    -1,     9,  -208,    18,  -209,  -209,    -2,    19,    98,
      46,    -4,   175,   169,   -58,    41,  -209,   -67,   220,   222,
     223,   231,   233,  -209,   126,  -158,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,    22,
    -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,  -209,
    -209,  -209,  -209,  -209,  -209
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    30,    31,   152,   224,    32,    33,    69,   214,   243,
      34,    35,    36,    37,   115,   165,    38,   225,    39,    40,
      41,    42,    43,    44,   161,   162,   263,   163,    45,    46,
      47,   106,   175,   176,    48,   143,   208,   209,   244,   245,
     272,    49,    50,   249,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    71,    71,   233,    62,   116,   150,   232,    63,    71,
      80,    77,    64,    74,   159,   253,    92,     2,     3,    64,
       2,     3,     2,     3,    16,     2,     3,    75,     2,     3,
      96,   220,   259,    82,    64,     2,     3,   160,    93,   103,
     169,    88,   118,    18,    19,    20,   280,   281,   282,   283,
     126,   173,    97,    98,   174,    81,    76,    94,    97,    98,
     114,   114,   160,    84,    71,    25,   211,   212,   213,   140,
      89,   141,   233,   107,    17,   206,   207,   147,   148,   149,
     266,   267,   268,   269,   270,   271,   103,   304,   226,   227,
     228,   229,    71,   177,    83,   178,   114,   179,    95,   178,
      71,    81,    70,    72,    73,   151,    85,   236,    24,   178,
      86,    78,   215,   216,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,   242,    65,    66,   113,
     104,   205,   160,    79,    65,    66,    67,    87,    29,   103,
     103,   167,    90,    68,   171,   221,   103,   103,   103,    65,
      66,    67,   235,    91,   105,   144,   117,   145,    68,    71,
     153,   154,   155,   238,   156,   157,   240,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   166,   158,   164,   210,   222,   223,
     231,   234,   170,    71,   160,   241,   239,   246,   248,   247,
      98,    71,    71,   150,   103,   252,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   254,   255,
     256,   257,   258,   275,   260,   261,   262,   103,   278,   279,
     103,   285,   286,   288,   287,   293,   103,   284,   295,   301,
     303,   309,   310,   311,   289,   312,   313,   277,    71,    71,
      71,   237,   168,   314,   172,   108,   264,   109,   110,   296,
     297,   298,   299,    71,   103,   230,   111,   103,   112,     0,
       0,     0,     0,   103,     0,     0,   292,     0,   103,     0,
       0,     0,     0,     0,     0,   103,   103,   103,   103,     0,
       0,     0,     0,   250,   251,     0,     0,     0,     1,     0,
       2,     3,     0,     4,     5,     0,     0,     6,     0,     0,
       7,     0,     0,     0,     8,     9,    10,     0,     0,     0,
      11,    12,     0,    13,     0,     0,     0,    14,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,    15,     0,     0,     0,     0,    16,
     290,   291,    17,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,     0,     0,   302,     0,     0,    18,    19,
      20,     0,     0,    21,    22,     0,     0,     0,    23,   118,
     119,   120,   121,   122,   123,   124,    24,   126,     0,     0,
      25,     0,    26,     0,     0,     0,     0,    27,     0,    99,
       0,    28,     1,     0,     2,     3,     0,     4,     5,     0,
       0,     6,     0,     0,     7,     0,     0,     0,     8,     9,
      10,     0,     0,     0,    11,    12,    29,    13,     0,     0,
       0,    14,     0,     0,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,     0,
       0,     0,     0,    16,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    19,    20,     0,     0,    21,    22,     0,
       0,     0,    23,     0,     0,     0,     1,     0,     2,     3,
      24,     4,     5,     0,    25,     6,    26,     0,     7,     0,
       0,    27,     8,     9,    10,    28,     0,     0,    11,    12,
       0,    13,     0,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    15,   100,   101,   102,     0,    16,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    19,    20,     0,
       0,    21,    22,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,     0,    25,     0,
      26,     1,     0,     2,     3,    27,     4,     5,     0,    28,
       6,     0,     0,     7,     0,     0,     0,     8,     9,    10,
       0,     0,     0,    11,    12,   146,    13,     0,     0,     0,
      14,     0,     0,     0,    29,     0,     0,     0,     0,     0,
      97,    98,     0,     0,     0,     0,     0,    15,     0,     0,
       0,     0,    16,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,    23,     0,     0,     0,     1,     0,     2,     3,    24,
       4,     5,     0,    25,     6,    26,     0,     7,     0,     0,
      27,     8,     9,    10,    28,     0,     0,    11,    12,   203,
      13,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    15,   100,   101,   102,     0,    16,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,    23,     0,     0,     0,     1,
       0,     2,     3,    24,     4,     5,     0,    25,     6,    26,
       0,     7,     0,     0,    27,     8,     9,    10,    28,     0,
       0,    11,    12,   204,    13,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    15,   100,   101,   102,     0,
      16,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,    23,
       0,     0,     0,     1,     0,     2,     3,    24,     4,     5,
       0,    25,     6,    26,     0,     7,     0,     0,    27,     8,
       9,    10,    28,     0,     0,    11,    12,     0,    13,     0,
     217,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    15,
     100,   101,   102,     0,    16,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,    23,     0,     0,     0,     1,     0,     2,
       3,    24,     4,     5,     0,    25,     6,    26,     0,     7,
       0,     0,    27,     8,     9,    10,    28,     0,     0,    11,
      12,     0,    13,     0,     0,   218,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    15,   100,   101,   102,     0,    16,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,    23,     0,     0,
       0,     1,     0,     2,     3,    24,     4,     5,     0,    25,
       6,    26,     0,     7,     0,     0,    27,     8,     9,    10,
      28,     0,     0,    11,    12,     0,    13,     0,     0,   219,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    15,   100,   101,
     102,     0,    16,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,    23,     0,     0,     0,     1,     0,     2,     3,    24,
       4,     5,     0,    25,     6,    26,     0,     7,     0,     0,
      27,     8,     9,    10,    28,     0,   276,    11,    12,     0,
      13,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    15,   100,   101,   102,     0,    16,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,    23,     0,     0,     0,     1,
       0,     2,     3,    24,     4,     5,     0,    25,     6,    26,
       0,     7,     0,     0,    27,     8,     9,    10,    28,     0,
     294,    11,    12,     0,    13,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    15,   100,   101,   102,     0,
      16,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,    23,
       0,     0,     0,     1,     0,     2,     3,    24,     4,     5,
       0,    25,     6,    26,     0,     7,     0,     0,    27,     8,
       9,    10,    28,     0,     0,    11,    12,     0,    13,     0,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    15,
     100,   101,   102,     0,    16,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,    23,     0,     0,     0,     1,     0,     2,
       3,    24,     4,     5,     0,    25,     6,    26,     0,     7,
       0,   300,    27,     8,     9,    10,    28,     0,     0,    11,
      12,     0,    13,     0,     0,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    15,   100,   101,   102,     0,    16,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,    23,     0,     0,
       0,     1,     0,     2,     3,    24,     4,     5,     0,    25,
       6,    26,     0,     7,     0,   305,    27,     8,     9,    10,
      28,     0,     0,    11,    12,     0,    13,     0,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,     0,    15,   100,   101,
     102,     0,    16,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    19,    20,     0,     0,    21,    22,     0,     0,
       0,    23,     0,     0,     0,     1,     0,     2,     3,    24,
       4,     5,     0,    25,     6,    26,     0,     7,     0,   306,
      27,     8,     9,    10,    28,     0,     0,    11,    12,     0,
      13,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    15,   100,   101,   102,     0,    16,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    19,    20,     0,     0,
      21,    22,     0,     0,     0,    23,     0,     0,     0,     1,
       0,     2,     3,    24,     4,     5,     0,    25,     6,    26,
       0,     7,     0,   307,    27,     8,     9,    10,    28,     0,
       0,    11,    12,     0,    13,     0,     0,     0,    14,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    15,   100,   101,   102,     0,
      16,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      19,    20,     0,     0,    21,    22,     0,     0,     0,    23,
       0,     0,     0,     1,     0,     2,     3,    24,     4,     5,
       0,    25,     6,    26,     0,     7,     0,   308,    27,     8,
       9,    10,    28,     0,     0,    11,    12,     0,    13,     0,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,    15,
     100,   101,   102,     0,    16,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,    20,     0,     0,    21,    22,
       0,     0,     0,    23,     0,     0,     0,     1,     0,     2,
       3,    24,     4,     5,     0,    25,     6,    26,     0,     7,
       0,     0,    27,     8,     9,    10,    28,     0,     0,    11,
      12,     0,    13,     0,     0,     0,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    15,   100,   101,   102,     0,    16,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    18,    19,    20,
       0,     0,    21,    22,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,    25,
       0,    26,     0,     0,     0,     0,    27,     0,     0,     0,
      28,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,     0,     1,    29,     2,     3,     0,     4,
       5,     0,     0,     6,     0,   142,     7,     0,     0,     0,
       8,     9,    10,     0,     0,     0,    11,    12,     0,    13,
       0,     0,     0,    14,     0,     0,     0,     0,     0,   265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      15,     0,     0,     0,     0,    16,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     273,     0,     0,     0,    18,    19,    20,     0,     0,    21,
      22,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,    25,     0,    26,     0,
       0,     0,     0,    27,     0,     0,     0,    28,     0,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,     0,    29,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   180,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135
};

static const yytype_int16 yycheck[] =
{
       4,     5,     6,   161,   138,    63,    39,   101,   138,    13,
      14,    12,     4,   131,     3,   223,    54,     5,     6,     4,
       5,     6,     5,     6,    54,     5,     6,   131,     5,     6,
     115,     7,   101,    15,     4,     5,     6,   131,    76,    30,
      98,    23,   107,    73,    74,    75,   254,   255,   256,   257,
     115,    11,   137,   138,    14,   131,    10,    95,   137,   138,
      62,    63,   131,    17,    68,    95,   129,   130,   131,    70,
      24,    72,   230,    55,    57,    17,    18,    78,    79,    80,
     115,   116,   117,   118,   119,   120,    77,   295,   155,   156,
     157,   158,    96,   139,   131,   141,    98,   139,     4,   141,
     104,   131,     4,     5,     6,   138,   131,   139,    91,   141,
     131,    13,    28,    29,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   121,   129,   130,   131,
     115,   142,   131,   131,   129,   130,   131,   131,   131,   140,
     141,   131,   131,   138,   131,   131,   147,   148,   149,   129,
     130,   131,   164,   131,   137,    38,    68,    22,   138,   173,
     141,   138,   138,   174,   138,   138,   178,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,    96,   138,   114,   131,   129,   131,
     138,    39,   104,   207,   131,   206,    10,    16,    23,   210,
     138,   215,   216,    39,   205,    22,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   139,   139,
     139,   139,   139,   244,   129,    97,     7,   238,   249,   129,
     241,    97,    22,     3,   108,   131,   247,   258,   139,   129,
     131,    95,   139,    54,   265,    76,    76,   248,   272,   273,
     274,   173,    97,    76,   105,    55,   235,    55,    55,   280,
     281,   282,   283,   287,   275,   159,    55,   278,    55,    -1,
      -1,    -1,    -1,   284,    -1,    -1,   274,    -1,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,   298,   299,    -1,
      -1,    -1,    -1,   215,   216,    -1,    -1,    -1,     3,    -1,
       5,     6,    -1,     8,     9,    -1,    -1,    12,    -1,    -1,
      15,    -1,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,
      25,    26,    -1,    28,    -1,    -1,    -1,    32,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,    49,    -1,    -1,    -1,    -1,    54,
     272,   273,    57,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,   287,    -1,    -1,    73,    74,
      75,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,   107,
     108,   109,   110,   111,   112,   113,    91,   115,    -1,    -1,
      95,    -1,    97,    -1,    -1,    -1,    -1,   102,    -1,     0,
      -1,   106,     3,    -1,     5,     6,    -1,     8,     9,    -1,
      -1,    12,    -1,    -1,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    -1,    -1,    25,    26,   131,    28,    -1,    -1,
      -1,    32,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      -1,    -1,    83,    -1,    -1,    -1,     3,    -1,     5,     6,
      91,     8,     9,    -1,    95,    12,    97,    -1,    15,    -1,
      -1,   102,    19,    20,    21,   106,    -1,    -1,    25,    26,
      -1,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,    -1,    49,   134,   135,   136,    -1,    54,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,
      -1,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    95,    -1,
      97,     3,    -1,     5,     6,   102,     8,     9,    -1,   106,
      12,    -1,    -1,    15,    -1,    -1,    -1,    19,    20,    21,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,
     137,   138,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      -1,    83,    -1,    -1,    -1,     3,    -1,     5,     6,    91,
       8,     9,    -1,    95,    12,    97,    -1,    15,    -1,    -1,
     102,    19,    20,    21,   106,    -1,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    49,   134,   135,   136,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,     3,
      -1,     5,     6,    91,     8,     9,    -1,    95,    12,    97,
      -1,    15,    -1,    -1,   102,    19,    20,    21,   106,    -1,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    49,   134,   135,   136,    -1,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,     3,    -1,     5,     6,    91,     8,     9,
      -1,    95,    12,    97,    -1,    15,    -1,    -1,   102,    19,
      20,    21,   106,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    49,
     134,   135,   136,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,     3,    -1,     5,
       6,    91,     8,     9,    -1,    95,    12,    97,    -1,    15,
      -1,    -1,   102,    19,    20,    21,   106,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    49,   134,   135,   136,    -1,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,
      -1,     3,    -1,     5,     6,    91,     8,     9,    -1,    95,
      12,    97,    -1,    15,    -1,    -1,   102,    19,    20,    21,
     106,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    49,   134,   135,
     136,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      -1,    83,    -1,    -1,    -1,     3,    -1,     5,     6,    91,
       8,     9,    -1,    95,    12,    97,    -1,    15,    -1,    -1,
     102,    19,    20,    21,   106,    -1,    24,    25,    26,    -1,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    49,   134,   135,   136,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,     3,
      -1,     5,     6,    91,     8,     9,    -1,    95,    12,    97,
      -1,    15,    -1,    -1,   102,    19,    20,    21,   106,    -1,
      24,    25,    26,    -1,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    49,   134,   135,   136,    -1,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,     3,    -1,     5,     6,    91,     8,     9,
      -1,    95,    12,    97,    -1,    15,    -1,    -1,   102,    19,
      20,    21,   106,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    49,
     134,   135,   136,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,     3,    -1,     5,
       6,    91,     8,     9,    -1,    95,    12,    97,    -1,    15,
      -1,   101,   102,    19,    20,    21,   106,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    49,   134,   135,   136,    -1,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,
      -1,     3,    -1,     5,     6,    91,     8,     9,    -1,    95,
      12,    97,    -1,    15,    -1,   101,   102,    19,    20,    21,
     106,    -1,    -1,    25,    26,    -1,    28,    -1,    -1,    -1,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    49,   134,   135,
     136,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    75,    -1,    -1,    78,    79,    -1,    -1,
      -1,    83,    -1,    -1,    -1,     3,    -1,     5,     6,    91,
       8,     9,    -1,    95,    12,    97,    -1,    15,    -1,   101,
     102,    19,    20,    21,   106,    -1,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    49,   134,   135,   136,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    -1,    -1,    -1,     3,
      -1,     5,     6,    91,     8,     9,    -1,    95,    12,    97,
      -1,    15,    -1,   101,   102,    19,    20,    21,   106,    -1,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,    49,   134,   135,   136,    -1,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,
      -1,    -1,    -1,     3,    -1,     5,     6,    91,     8,     9,
      -1,    95,    12,    97,    -1,    15,    -1,   101,   102,    19,
      20,    21,   106,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,    49,
     134,   135,   136,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    -1,     3,    -1,     5,
       6,    91,     8,     9,    -1,    95,    12,    97,    -1,    15,
      -1,    -1,   102,    19,    20,    21,   106,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    49,   134,   135,   136,    -1,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    95,
      -1,    97,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,     3,   131,     5,     6,    -1,     8,
       9,    -1,    -1,    12,    -1,    13,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    -1,    -1,    25,    26,    -1,    28,
      -1,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    73,    74,    75,    -1,    -1,    78,
      79,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    -1,    95,    -1,    97,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   106,    -1,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,   131,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     8,     9,    12,    15,    19,    20,
      21,    25,    26,    28,    32,    49,    54,    57,    73,    74,
      75,    78,    79,    83,    91,    95,    97,   102,   106,   131,
     143,   144,   147,   148,   152,   153,   154,   155,   158,   160,
     161,   162,   163,   164,   165,   170,   171,   172,   176,   183,
     184,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   138,   138,     4,   129,   130,   131,   138,   149,
     151,   153,   151,   151,   131,   131,   152,   143,   151,   131,
     153,   131,   146,   131,   152,   131,   131,   131,   146,   152,
     131,   131,    54,    76,    95,     4,   115,   137,   138,     0,
     134,   135,   136,   144,   115,   137,   173,   146,   160,   161,
     162,   163,   164,   131,   149,   156,   156,   151,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     143,   143,    13,   177,    38,    22,    27,   143,   143,   143,
      39,   138,   145,   141,   138,   138,   138,   138,   138,     3,
     131,   166,   167,   169,   114,   157,   151,   131,   154,   156,
     151,   131,   155,    11,    14,   174,   175,   139,   141,   139,
     139,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,    27,    27,   143,    17,    18,   178,   179,
     131,   129,   130,   131,   150,    28,    29,    30,    31,    31,
       7,   131,   129,   131,   146,   159,   159,   159,   159,   159,
     166,   138,   101,   167,    39,   149,   139,   151,   143,    10,
     149,   143,   121,   151,   180,   181,    16,   143,    23,   185,
     151,   151,    22,   145,   139,   139,   139,   139,   139,   101,
     129,    97,     7,   168,   157,    13,   115,   116,   117,   118,
     119,   120,   182,    22,   141,   143,    24,   150,   143,   129,
     145,   145,   145,   145,   143,    97,    22,   108,     3,   143,
     151,   151,   181,   131,    24,   139,   143,   143,   143,   143,
     101,   129,   151,   131,   145,   101,   101,   101,   101,    95,
     139,    54,    76,    76,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   142,   143,   143,   143,   143,   143,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   145,   145,   145,   146,   146,   146,   147,
     148,   149,   149,   149,   149,   150,   150,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   152,   152,   152,   152,   153,   154,   154,
     154,   154,   155,   155,   155,   155,   155,   156,   156,   157,
     157,   158,   158,   159,   159,   160,   161,   162,   163,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   172,   173,   173,   174,   175,   175,   176,
     177,   177,   178,   179,   179,   180,   180,   181,   181,   181,
     182,   182,   182,   182,   182,   182,   183,   184,   185,   185,
     186,   187,   187,   188,   188,   189,   189,   189,   189,   189,
     190,   190,   191,   192,   193,   194,   195,   196
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     2,     4,     7,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     2,     2,     1,     3,     1,
       3,     3,     4,     4,     1,     4,     1,     1,     3,     3,
       2,     2,     3,     1,     0,     8,     9,     9,     9,     9,
       5,     6,     1,     2,     3,     4,     1,     3,     1,     6,
       4,     4,     4,     4,     2,     0,     4,     2,     0,     5,
       2,     0,     3,     2,     0,     3,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     8,     7,     2,     0,
       4,     4,     5,     4,     5,     1,     1,     2,     2,     2,
       1,     1,     2,     2,     2,     2,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7:
#line 60 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Declaration"); }
#line 2215 "y.tab.c"
    break;

  case 8:
#line 61 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Re-Declaration"); }
#line 2221 "y.tab.c"
    break;

  case 9:
#line 62 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Assignment"); }
#line 2227 "y.tab.c"
    break;

  case 10:
#line 63 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Printing"); }
#line 2233 "y.tab.c"
    break;

  case 11:
#line 64 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Sub Procedure"); }
#line 2239 "y.tab.c"
    break;

  case 12:
#line 65 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Function Procedure"); }
#line 2245 "y.tab.c"
    break;

  case 13:
#line 66 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Property Get Procedure"); }
#line 2251 "y.tab.c"
    break;

  case 14:
#line 67 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Property Set Procedure"); }
#line 2257 "y.tab.c"
    break;

  case 15:
#line 68 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Property Let Procedure"); }
#line 2263 "y.tab.c"
    break;

  case 16:
#line 69 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Type Procedure"); }
#line 2269 "y.tab.c"
    break;

  case 17:
#line 70 "syntaxAnalyzer.y"
                                      { printf("\nBlock : With Procedure"); }
#line 2275 "y.tab.c"
    break;

  case 18:
#line 71 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Conditional If-ElseIf-Then"); }
#line 2281 "y.tab.c"
    break;

  case 19:
#line 72 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Conditional Select-Case"); }
#line 2287 "y.tab.c"
    break;

  case 20:
#line 73 "syntaxAnalyzer.y"
                                      { printf("\nBlock : For Loop"); }
#line 2293 "y.tab.c"
    break;

  case 21:
#line 74 "syntaxAnalyzer.y"
                                      { printf("\nBlock : For Each Loop"); }
#line 2299 "y.tab.c"
    break;

  case 22:
#line 75 "syntaxAnalyzer.y"
                                      { printf("\nBlock : While Loop"); }
#line 2305 "y.tab.c"
    break;

  case 23:
#line 76 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Do While Loop"); }
#line 2311 "y.tab.c"
    break;

  case 24:
#line 77 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Do Until Loop"); }
#line 2317 "y.tab.c"
    break;

  case 25:
#line 78 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Exit Statement"); }
#line 2323 "y.tab.c"
    break;

  case 26:
#line 79 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Private/Public Declaration"); }
#line 2329 "y.tab.c"
    break;

  case 27:
#line 80 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Private/Public Sub Procedure"); }
#line 2335 "y.tab.c"
    break;

  case 28:
#line 81 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Private/Public Function Procedure"); }
#line 2341 "y.tab.c"
    break;

  case 29:
#line 82 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Private/Public Property Get Procedure"); }
#line 2347 "y.tab.c"
    break;

  case 30:
#line 83 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Private/Public Property Set Procedure"); }
#line 2353 "y.tab.c"
    break;

  case 31:
#line 84 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Private/Public Property Let Procedure"); }
#line 2359 "y.tab.c"
    break;

  case 32:
#line 85 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Comment"); }
#line 2365 "y.tab.c"
    break;


#line 2369 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 265 "syntaxAnalyzer.y"


  
//driver code 
void main (int argc, char** argv) {
    FILE *file; 	
    file = fopen(argv[1], "r"); // open the file given as argument

    if (argc<2) {   // in case of no file given as argument throw error
        printf("ERROR : Insufficient Arguments. Missing file name.\n");
        return;
    }

    if (!file) {    // error for invalid file 
        printf("ERROR : Could NOT Open the file.\n");
        return;
    }
    
    int ch = fgetc(file); // check if empty file
    if (ch == EOF) { // error for invalid file 
        printf("ERROR : Empty file.\n");
        return;
    }
    fclose(file);
    
    file = fopen(argv[1], "r"); // open the file given as argument
    yyin=file;  // Make file content input for lexical analysis, i.e, sets input file as file
    yyparse(); // function to call parser

    if (flag==0) printf("\n\nValid\n\n"); 
    else printf("\n\nInvalid\n\n");
    return;
} 
  
  
void yyerror(char *s) { 
   printf("\n\nSyntax Error : Line %d >> %s\n\n", yylineno, yytext); 
   flag=1; 
} 
