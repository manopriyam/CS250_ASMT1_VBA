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
    #include<string.h>
    int flag=0; 
    extern FILE *yyin;
    extern int yylineno;
    extern char* yytext;

    #include<ctype.h>
    int count=0;
    int q;
    char type[20];

    struct node { 
        struct node *left; 
        struct node *right; 
        char *token; 
    }; 

    struct node* mknode (struct node *left, struct node *right, char *token); 

    void printtree(struct node*); 
    void printInorder(struct node *); 
    
    struct node *head;
    
    struct dataType {
        char * id_name;
        char * data_type;
        char * type;
        int line_no;
    } symbolTable[40];

    void add(char, char *);
    void insert_type();
    int search(char *);

    int ic_idx = 0;
    int temp_var = 0; 
    int label=0;
    
	int isIf=0;
    char icg[100][100];

#line 117 "y.tab.c"

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
#line 49 "syntaxAnalyzer.y"

	struct var_name { 
		char* name; 
		struct node* nd;
	} nd_obj; 
	
	struct var_name3 {
        char name[100];
        struct node* nd;
        char if_body[10];
        char else_body[10];  
	} nd_obj3;

#line 451 "y.tab.c"

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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   316

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  142
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

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
       0,   102,   102,   104,   105,   106,   107,   108,   110,   111,
     112,   113,   121,   135,   137,   144,   146,   151,   158,   163,
     168,   169,   170,   171,   177,   183,   189,   195,   201,   207,
     213,   219,   225,   247,   269,   291,   313,   335,   357,   379,
     401,   423,   445,   467,   489,   511,   533,   534,   537,   543,
     544,   562,   565,   569,   573,   611,   611,   634,   639,   633,
     647,   655,   657,   657,   664,   667
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
  "$accept", "program", "statements", "statement", "vartype", "declare",
  "declaration", "redeclaration", "value", "expression", "assignment",
  "printvalues", "printing", "conditionalifelse", "$@1", "ifblock", "$@2",
  "$@3", "elseifs", "elseifblock", "$@4", "elseblock", YY_NULLPTR
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

#define YYPACT_NINF (-120)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,  -120,  -119,   -55,  -119,   -55,    11,   -99,    18,     1,
    -120,  -120,  -120,  -120,  -120,  -120,    17,    -9,  -110,  -120,
    -110,  -120,   -82,    -4,  -120,  -120,  -120,  -120,  -120,    -4,
    -120,    27,  -120,   -96,    15,  -120,  -120,  -120,  -120,  -120,
      -4,  -120,    98,    98,    -3,  -120,    -9,   -82,    65,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,    -4,
      -4,    24,    -4,    -2,  -120,    28,  -120,  -120,  -120,  -101,
    -101,  -101,  -101,  -101,   -42,   -42,   -42,  -120,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   194,   177,   159,   140,   120,
     120,    -2,    98,     7,  -120,     1,    26,  -120,    -2,     1
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      55,    13,     0,     0,     0,     0,     0,     0,     0,     2,
       3,     8,     9,    10,    11,    12,     0,    15,    18,    50,
      19,    49,    53,     0,     1,     5,     6,     7,     4,     0,
      61,     0,    16,     0,     0,    54,    21,    22,    23,    20,
       0,    47,    48,    57,    65,    14,    15,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    55,    60,     0,    17,    51,    46,    30,
      26,    27,    28,    29,    24,    25,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    55,    62,    55,    56,    58,     0,    59,    55,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -120,  -120,   -68,    -6,    -5,    38,  -120,  -120,     9,    99,
       4,    -1,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     8,     9,    10,    32,    18,    11,    12,    41,    42,
      13,    35,    14,    15,    16,    30,    71,   107,    44,    74,
     106,    75
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      36,     1,     3,    28,     1,   103,    49,    19,    72,    21,
       1,    73,    17,   -55,    57,    22,    23,   -64,    24,    36,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    29,
      31,    33,    34,   105,    45,    46,     5,   101,   104,   108,
     109,    76,    20,    47,     0,     0,    77,     2,     0,     0,
       2,     0,     0,     0,     0,     3,     2,     0,     3,     0,
       0,     0,     0,     0,     3,    49,    50,    51,    52,    53,
      54,    55,     0,    57,     0,     0,     7,     0,     0,     0,
       0,     4,     0,     0,     4,     0,     0,     0,     0,     5,
       4,     0,     5,     0,     0,     0,     0,    28,     5,    28,
       0,     0,     0,    28,     6,     0,     0,     6,     0,     0,
       0,     0,     0,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,    43,     7,
       0,     0,     7,     0,    40,    25,    26,    27,     7,    48,
       0,    25,    26,    27,    37,    38,    39,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,   102,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64
};

static const yytype_int16 yycheck[] =
{
       4,     3,    57,     9,     3,    73,   107,     3,    11,     5,
       3,    14,   131,    12,   115,     4,   115,    10,     0,     4,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    12,
      39,   141,   114,   101,     7,   131,    91,    13,    10,    13,
     108,    46,     4,    34,    -1,    -1,    47,    49,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    57,    49,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    57,   107,   108,   109,   110,   111,
     112,   113,    -1,   115,    -1,    -1,   131,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    83,    -1,    -1,    -1,    -1,    91,
      83,    -1,    91,    -1,    -1,    -1,    -1,   103,    91,   105,
      -1,    -1,    -1,   109,   106,    -1,    -1,   106,    -1,    -1,
      -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,    29,   131,
      -1,    -1,   131,    -1,   138,   134,   135,   136,   131,    40,
      -1,   134,   135,   136,   129,   130,   131,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    72,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   139,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    49,    57,    83,    91,   106,   131,   143,   144,
     145,   148,   149,   152,   154,   155,   156,   131,   147,   152,
     147,   152,     4,   115,     0,   134,   135,   136,   145,    12,
     157,    39,   146,   141,   114,   153,     4,   129,   130,   131,
     138,   150,   151,   151,   160,     7,   131,   150,   151,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   158,    11,    14,   161,   163,   146,   153,   139,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,    13,   151,   144,    10,   144,   162,   159,    13,   144
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   142,   143,   144,   144,   144,   144,   144,   145,   145,
     145,   145,   145,   145,   146,   146,   147,   147,   148,   149,
     150,   150,   150,   150,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   152,   152,
     152,   153,   153,   154,   154,   156,   155,   158,   159,   157,
     160,   160,   162,   161,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     0,     2,     4,     2,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     2,
       2,     3,     2,     2,     3,     0,     5,     0,     0,     6,
       2,     0,     0,     5,     2,     0
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
  case 2:
#line 102 "syntaxAnalyzer.y"
                     { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; head = (yyval.nd_obj).nd; }
#line 1781 "y.tab.c"
    break;

  case 3:
#line 104 "syntaxAnalyzer.y"
                              { (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1787 "y.tab.c"
    break;

  case 4:
#line 105 "syntaxAnalyzer.y"
                              { (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "statements"); }
#line 1793 "y.tab.c"
    break;

  case 5:
#line 106 "syntaxAnalyzer.y"
                              { (yyval.nd_obj).nd = (yyvsp[-1].nd_obj).nd; }
#line 1799 "y.tab.c"
    break;

  case 6:
#line 107 "syntaxAnalyzer.y"
                              { (yyval.nd_obj).nd = (yyvsp[-1].nd_obj).nd; }
#line 1805 "y.tab.c"
    break;

  case 7:
#line 108 "syntaxAnalyzer.y"
                              { (yyval.nd_obj).nd = (yyvsp[-1].nd_obj).nd; }
#line 1811 "y.tab.c"
    break;

  case 8:
#line 110 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Declaration"); (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1817 "y.tab.c"
    break;

  case 9:
#line 111 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Re-Declaration"); (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1823 "y.tab.c"
    break;

  case 10:
#line 112 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Assignment"); (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1829 "y.tab.c"
    break;

  case 11:
#line 113 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Printing"); (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1835 "y.tab.c"
    break;

  case 12:
#line 121 "syntaxAnalyzer.y"
                                      { printf("\nBlock : Conditional If-ElseIf-Then"); (yyval.nd_obj).nd = (yyvsp[0].nd_obj).nd; }
#line 1841 "y.tab.c"
    break;

  case 13:
#line 135 "syntaxAnalyzer.y"
                                      { printf("\nStatement : Comment"); (yyval.nd_obj).nd = mknode(NULL, NULL, "COMMENT"); }
#line 1847 "y.tab.c"
    break;

  case 14:
#line 137 "syntaxAnalyzer.y"
                         { 
        insert_type(); 
        (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); 
        (yyvsp[0].nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); 
        (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "vartype"); 
    }
#line 1858 "y.tab.c"
    break;

  case 16:
#line 146 "syntaxAnalyzer.y"
                             { 
        (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); 
        (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "declareSingle"); 
        //sprintf(icg[ic_idx++], "%s =", $1.name);
    }
#line 1868 "y.tab.c"
    break;

  case 17:
#line 151 "syntaxAnalyzer.y"
                                     { 
        (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name);
        (yyval.nd_obj).nd = mknode((yyvsp[-3].nd_obj).nd, mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "declareSingle"), "declareMultiple"); 
        //sprintf(icg[ic_idx++], "%s =", $3.name);
    }
#line 1878 "y.tab.c"
    break;

  case 18:
#line 158 "syntaxAnalyzer.y"
                            { 
        (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); 
        (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "declaration"); 
    }
#line 1887 "y.tab.c"
    break;

  case 19:
#line 163 "syntaxAnalyzer.y"
                                { 
        (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); 
        (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "redeclaration"); 
    }
#line 1896 "y.tab.c"
    break;

  case 20:
#line 168 "syntaxAnalyzer.y"
                           { add('V', ""); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1902 "y.tab.c"
    break;

  case 21:
#line 169 "syntaxAnalyzer.y"
                           { add('C', "String"); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1908 "y.tab.c"
    break;

  case 22:
#line 170 "syntaxAnalyzer.y"
                           { add('C', "Integer"); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1914 "y.tab.c"
    break;

  case 23:
#line 171 "syntaxAnalyzer.y"
                           { add('C', "Double"); (yyval.nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name); }
#line 1920 "y.tab.c"
    break;

  case 24:
#line 177 "syntaxAnalyzer.y"
                                          { 
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf((yyval.nd_obj3).name, "t%d", temp_var);
        temp_var++;
        sprintf(icg[ic_idx++], "%s = %s %s %s\n",  (yyval.nd_obj3).name, (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 1931 "y.tab.c"
    break;

  case 25:
#line 183 "syntaxAnalyzer.y"
                                    { 
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf((yyval.nd_obj3).name, "t%d", temp_var);
        temp_var++;
        sprintf(icg[ic_idx++], "%s = %s %s %s\n",  (yyval.nd_obj3).name, (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 1942 "y.tab.c"
    break;

  case 26:
#line 189 "syntaxAnalyzer.y"
                                        { 
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf((yyval.nd_obj3).name, "t%d", temp_var);
        temp_var++;
        sprintf(icg[ic_idx++], "%s = %s %s %s\n",  (yyval.nd_obj3).name, (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 1953 "y.tab.c"
    break;

  case 27:
#line 195 "syntaxAnalyzer.y"
                                     { 
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf((yyval.nd_obj3).name, "t%d", temp_var);
        temp_var++;
        sprintf(icg[ic_idx++], "%s = %s %s %s\n",  (yyval.nd_obj3).name, (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 1964 "y.tab.c"
    break;

  case 28:
#line 201 "syntaxAnalyzer.y"
                                        { 
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf((yyval.nd_obj3).name, "t%d", temp_var);
        temp_var++;
        sprintf(icg[ic_idx++], "%s = %s %s %s\n",  (yyval.nd_obj3).name, (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 1975 "y.tab.c"
    break;

  case 29:
#line 207 "syntaxAnalyzer.y"
                                  { 
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf((yyval.nd_obj3).name, "t%d", temp_var);
        temp_var++;
        sprintf(icg[ic_idx++], "%s = %s %s %s\n",  (yyval.nd_obj3).name, (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 1986 "y.tab.c"
    break;

  case 30:
#line 213 "syntaxAnalyzer.y"
                                    { 
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf((yyval.nd_obj3).name, "t%d", temp_var);
        temp_var++;
        sprintf(icg[ic_idx++], "%s = %s %s %s\n",  (yyval.nd_obj3).name, (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 1997 "y.tab.c"
    break;

  case 31:
#line 219 "syntaxAnalyzer.y"
                                          { 
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf((yyval.nd_obj3).name, "t%d", temp_var);
        temp_var++;
        sprintf(icg[ic_idx++], "%s = %s %s %s\n",  (yyval.nd_obj3).name, (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 2008 "y.tab.c"
    break;

  case 32:
#line 225 "syntaxAnalyzer.y"
                                    {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2035 "y.tab.c"
    break;

  case 33:
#line 247 "syntaxAnalyzer.y"
                                        {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2062 "y.tab.c"
    break;

  case 34:
#line 269 "syntaxAnalyzer.y"
                                         {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2089 "y.tab.c"
    break;

  case 35:
#line 291 "syntaxAnalyzer.y"
                                            {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2116 "y.tab.c"
    break;

  case 36:
#line 313 "syntaxAnalyzer.y"
                                        {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2143 "y.tab.c"
    break;

  case 37:
#line 335 "syntaxAnalyzer.y"
                                           {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2170 "y.tab.c"
    break;

  case 38:
#line 357 "syntaxAnalyzer.y"
                                 {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2197 "y.tab.c"
    break;

  case 39:
#line 379 "syntaxAnalyzer.y"
                                   {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2224 "y.tab.c"
    break;

  case 40:
#line 401 "syntaxAnalyzer.y"
                                    {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2251 "y.tab.c"
    break;

  case 41:
#line 423 "syntaxAnalyzer.y"
                                  {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2278 "y.tab.c"
    break;

  case 42:
#line 445 "syntaxAnalyzer.y"
                                 {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2305 "y.tab.c"
    break;

  case 43:
#line 467 "syntaxAnalyzer.y"
                                   {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2332 "y.tab.c"
    break;

  case 44:
#line 489 "syntaxAnalyzer.y"
                                    {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2359 "y.tab.c"
    break;

  case 45:
#line 511 "syntaxAnalyzer.y"
                                   {  
        (yyval.nd_obj3).nd = mknode((yyvsp[-2].nd_obj3).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        
        if(isIf==0){
			sprintf(icg[ic_idx++], "\tif %s %s %s goto label%d\n", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name, label);
			sprintf(icg[ic_idx++], "\tt%d = 0\n", temp_var);
			
			sprintf((yyval.nd_obj3).name, "t%d", temp_var);
			
			sprintf(icg[ic_idx++], "\tgoto label%d\n", label+1);
			
			sprintf(icg[ic_idx++], "label%d:\n\tt%d = 1\n",label, temp_var++);
			
			sprintf(icg[ic_idx++], "label%d: \n", label+1);
			label+=2;
    }
    else{
			sprintf((yyval.nd_obj3).name, "%s %s %s", (yyvsp[-2].nd_obj3).name, (yyvsp[-1].nd_obj).name, (yyvsp[0].nd_obj3).name);
			sprintf((yyval.nd_obj3).if_body, "%d", label++);
			sprintf((yyval.nd_obj3).else_body, "%d", label++);
		}
    }
#line 2386 "y.tab.c"
    break;

  case 46:
#line 533 "syntaxAnalyzer.y"
                                                        { (yyval.nd_obj3).nd = (yyvsp[-1].nd_obj3).nd; strcpy((yyval.nd_obj3).name, (yyvsp[-1].nd_obj3).name);}
#line 2392 "y.tab.c"
    break;

  case 47:
#line 534 "syntaxAnalyzer.y"
                                                        { (yyval.nd_obj3).nd = (yyvsp[0].nd_obj).nd; strcpy((yyval.nd_obj3).name, (yyvsp[0].nd_obj).name);}
#line 2398 "y.tab.c"
    break;

  case 48:
#line 537 "syntaxAnalyzer.y"
                                           { 
        (yyvsp[-2].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-2].nd_obj).name); 
        (yyval.nd_obj).nd = mknode((yyvsp[-2].nd_obj).nd, (yyvsp[0].nd_obj3).nd, (yyvsp[-1].nd_obj).name); 
        sprintf(icg[ic_idx++], "%s = %s\n",  (yyval.nd_obj).name, (yyvsp[0].nd_obj3).name);
    }
#line 2408 "y.tab.c"
    break;

  case 49:
#line 543 "syntaxAnalyzer.y"
                                           { (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 2414 "y.tab.c"
    break;

  case 50:
#line 544 "syntaxAnalyzer.y"
                                           { (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name); (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-1].nd_obj).name); }
#line 2420 "y.tab.c"
    break;

  case 51:
#line 562 "syntaxAnalyzer.y"
                                              {
        (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, (yyvsp[-2].nd_obj).name);
    }
#line 2428 "y.tab.c"
    break;

  case 52:
#line 565 "syntaxAnalyzer.y"
                          {
        (yyval.nd_obj).nd = mknode((yyvsp[0].nd_obj).nd, NULL, (yyvsp[-1].nd_obj).name);
    }
#line 2436 "y.tab.c"
    break;

  case 53:
#line 569 "syntaxAnalyzer.y"
                                    {
        (yyvsp[0].nd_obj).nd = mknode(NULL, NULL, (yyvsp[0].nd_obj).name);
        (yyval.nd_obj).nd = mknode((yyvsp[0].nd_obj).nd, NULL, "printing");
    }
#line 2445 "y.tab.c"
    break;

  case 54:
#line 573 "syntaxAnalyzer.y"
                                           {
        (yyvsp[-1].nd_obj).nd = mknode(NULL, NULL, (yyvsp[-1].nd_obj).name);
        (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "printing");
    }
#line 2454 "y.tab.c"
    break;

  case 55:
#line 611 "syntaxAnalyzer.y"
                    {isIf=1;}
#line 2460 "y.tab.c"
    break;

  case 56:
#line 611 "syntaxAnalyzer.y"
                                                                 {

        /* Actions for handling the IF-ELSE statement */
        if ((yyvsp[-2].nd_obj).nd == NULL && (yyvsp[-1].nd_obj).nd == NULL) {
            	(yyval.nd_obj).nd = (yyvsp[-3].nd_obj).nd;
		//sprintf(icg[ic_idx++], "\nLABEL %s:\n", $4.if_body);
        } else if ((yyvsp[-2].nd_obj).nd != NULL && (yyvsp[-1].nd_obj).nd == NULL) {
            /* IF-ELSEIF blocks only */
            (yyval.nd_obj).nd = mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-2].nd_obj).nd, "if-elseif");
           
        } else if ((yyvsp[-2].nd_obj).nd != NULL && (yyvsp[-1].nd_obj).nd != NULL) {
            /* IF-ELSEIF-ELSE blocks */
            (yyval.nd_obj).nd = mknode(mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-2].nd_obj).nd, "if-elseif2"), (yyvsp[-1].nd_obj).nd, "if-elseif-else");
        }
        else if ((yyvsp[-2].nd_obj).nd == NULL && (yyvsp[-1].nd_obj).nd != NULL) {
            /* IF-ELSE blocks */
            (yyval.nd_obj).nd = mknode((yyvsp[-3].nd_obj).nd, (yyvsp[-1].nd_obj).nd, "if-else");
        }
        
        isIf=0;
    }
#line 2486 "y.tab.c"
    break;

  case 57:
#line 634 "syntaxAnalyzer.y"
        {
	sprintf(icg[ic_idx++], "\tif %s goto label%s\n\tgoto label%s\n", (yyvsp[0].nd_obj3).name, (yyvsp[0].nd_obj3).if_body, (yyvsp[0].nd_obj3).else_body);
	sprintf(icg[ic_idx++],"label%s:\n", (yyvsp[0].nd_obj3).if_body);
	}
#line 2495 "y.tab.c"
    break;

  case 58:
#line 639 "syntaxAnalyzer.y"
                          {
	sprintf(icg[ic_idx++],"label%s:\n", (yyvsp[-3].nd_obj3).else_body);
	}
#line 2503 "y.tab.c"
    break;

  case 59:
#line 643 "syntaxAnalyzer.y"
                {
        (yyval.nd_obj).nd = mknode((yyvsp[-4].nd_obj3).nd, (yyvsp[-1].nd_obj).nd, "if-block");
    }
#line 2511 "y.tab.c"
    break;

  case 60:
#line 647 "syntaxAnalyzer.y"
                              {
        if ((yyvsp[-1].nd_obj).nd != NULL) {
            (yyval.nd_obj).nd = mknode((yyvsp[-1].nd_obj).nd, (yyvsp[0].nd_obj).nd, "else-if-blocks");
        }
        else if ((yyvsp[-1].nd_obj).nd == NULL) {  
            (yyval.nd_obj).nd = mknode(NULL, (yyvsp[0].nd_obj).nd, "else-if-blocks2");
        }
    }
#line 2524 "y.tab.c"
    break;

  case 61:
#line 655 "syntaxAnalyzer.y"
                  { (yyval.nd_obj).nd = NULL; }
#line 2530 "y.tab.c"
    break;

  case 62:
#line 657 "syntaxAnalyzer.y"
                                   {
	sprintf(icg[ic_idx++], "\tif %s goto label%s\n\tgoto label%s\n", (yyvsp[0].nd_obj3).name, (yyvsp[0].nd_obj3).if_body, (yyvsp[0].nd_obj3).else_body);
	sprintf(icg[ic_idx++],"label%s:\n", (yyvsp[0].nd_obj3).if_body);}
#line 2538 "y.tab.c"
    break;

  case 63:
#line 660 "syntaxAnalyzer.y"
                          {
	sprintf(icg[ic_idx++],"label%s:\n", (yyvsp[-3].nd_obj3).else_body);
	}
#line 2546 "y.tab.c"
    break;

  case 64:
#line 664 "syntaxAnalyzer.y"
                              {
        (yyval.nd_obj).nd = mknode((yyvsp[0].nd_obj).nd, NULL, "else-block");
    }
#line 2554 "y.tab.c"
    break;

  case 65:
#line 667 "syntaxAnalyzer.y"
                  { (yyval.nd_obj).nd = NULL; }
#line 2560 "y.tab.c"
    break;


#line 2564 "y.tab.c"

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
#line 731 "syntaxAnalyzer.y"



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
    
    printf("\n\nSYNTAX ANALYSIS :\n\n");
    file = fopen(argv[1], "r"); // open the file given as argument
    yyin=file;  // Make file content input for lexical analysis, i.e, sets input file as file
    yyparse(); // function to call parser

    if (flag==0) printf("\n\nValid Source Code\n\n"); 
    else printf("\n\nInvalid Source Code\n\n");

    printf("\n\nSYMBOL TABLE :\n\n");
	printf("\n%20s\t %10s\t %10s\t %15s\t\n", "SYMBOL", "DATATYPE", "TYPE", "LINE_NUMBER");
	printf("_____________________________\n\n");
	for (int i=0; i<count; i++) {
		printf("%20s\t %10s\t %10s\t %15d\t\n", 
            symbolTable[i].id_name, 
            symbolTable[i].data_type, 
            symbolTable[i].type, 
            symbolTable[i].line_no);
	}
	for (int i=0; i<count; i++) {
		free(symbolTable[i].id_name);
		free(symbolTable[i].type);
	}
    printf("\n\n");

	printf("\n\nSYNTAX TREE :\n\n");
	printtree(head); 
	printf("\n\n");
	
	printf("\n\nINTERMEDIATE CODE GENERATION :\n\n");
	for(int i=0; i<ic_idx; i++){
		printf("%s", icg[i]);
	}
	printf("\n\n");

    return;
}

struct node* mknode (struct node *left, struct node *right, char *token) {	
	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	char *newstr = (char*)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->left = left; 
	newnode->right = right;
	newnode->token = newstr;
	return(newnode);
}

void printtree (struct node* tree) {
	printf("Inorder Traversal of the Syntax Tree or Parse Tree: \n\n");
	printInorder(tree);
	printf("\n\n");
}

void printInorder (struct node *tree) {
	if (tree->left) {
		printInorder(tree->left);
	}
	printf("%s, ", tree->token);
	if (tree->right) {
		printInorder(tree->right);
	}
}

void add (char c, char *t) {
    q = search(yytext);
    if (q==-1 && c=='V') {
        symbolTable[count].id_name=strdup(yytext);
        symbolTable[count].data_type=strdup(type);
        symbolTable[count].line_no=yylineno;
        symbolTable[count].type=strdup("Variable");
        count++;
    }
    else if (c=='C') {
        symbolTable[count].id_name=strdup(yytext);
        symbolTable[count].data_type=strdup(t);
        symbolTable[count].line_no=yylineno;
        symbolTable[count].type=strdup("Constant");
        count++;
    }
}

void insert_type() {
	strcpy(type, yytext);
}

int search (char *type) {
	for (int i=count-1; i>=0; i--) {
		if (strcmp(symbolTable[i].id_name, type)==0) {
			return i;
		}
	}
	return -1;
}

void yyerror (char *s) { 
    printf("\n\nSyntax Error : Line %d >> %s\n\n", yylineno, yytext); 
    flag=1; 
}
