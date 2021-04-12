/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "compiler.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>

    #include "symbols.h"
    #include "assembly.h"
    
    int yylex();
    void yyerror(char*);

    char instr[100];

    typedef enum {
        INT
    } TypeValue;

    typedef struct TypeInfos_s {
        int ptr_level;
        bool constantness;
        TypeValue type;
    } TypeInfos;


#line 90 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    tMAIN = 258,
    tInt = 259,
    tConst = 260,
    tPlus = 261,
    tMinus = 262,
    tMul = 263,
    tDiv = 264,
    tEqu = 265,
    tStar = 266,
    tPO = 267,
    tPF = 268,
    tAO = 269,
    tAF = 270,
    tSpace = 271,
    tBackN = 272,
    tBackT = 273,
    tVirg = 274,
    tPointVirg = 275,
    tPrintf = 276,
    tIf = 277,
    tElse = 278,
    tWhile = 279,
    tReturn = 280,
    tLESS_THAN_OR_EQUAL_TO = 281,
    tLESS_THAN = 282,
    tGREATER_THAN_OR_EQUAL_TO = 283,
    tGREATER_THAN = 284,
    tDIFFERENT = 285,
    tEQUALCOMPARISON = 286,
    tNumber = 287,
    tDecimal = 288,
    tExpo = 289,
    tVariable = 290,
    ERROR = 291
  };
#endif
/* Tokens.  */
#define tMAIN 258
#define tInt 259
#define tConst 260
#define tPlus 261
#define tMinus 262
#define tMul 263
#define tDiv 264
#define tEqu 265
#define tStar 266
#define tPO 267
#define tPF 268
#define tAO 269
#define tAF 270
#define tSpace 271
#define tBackN 272
#define tBackT 273
#define tVirg 274
#define tPointVirg 275
#define tPrintf 276
#define tIf 277
#define tElse 278
#define tWhile 279
#define tReturn 280
#define tLESS_THAN_OR_EQUAL_TO 281
#define tLESS_THAN 282
#define tGREATER_THAN_OR_EQUAL_TO 283
#define tGREATER_THAN 284
#define tDIFFERENT 285
#define tEQUALCOMPARISON 286
#define tNumber 287
#define tDecimal 288
#define tExpo 289
#define tVariable 290
#define ERROR 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "compiler.y" /* yacc.c:355  */

    char * var;
    int nb;
    int duo[2];
    float fl_nb;
    TypeInfos typeInfos;

#line 210 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   108

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,    98,   103,   105,   109,   111,   115,   119,
     122,   127,   130,   133,   137,   138,   138,   137,   143,   146,
     150,   150,   153,   153,   158,   160,   160,   164,   167,   172,
     174,   176,   178,   183,   187,   183,   207,   222,   230,   230,
     245,   245,   258,   265,   275,   277,   285,   287,   295,   301,
     301,   301,   316,   331,   343,   343,   359,   359,   361,   369,
     377,   385,   393,   395,   395,   402,   402,   410,   410,   412,
     412,   414,   414,   418,   420,   424,   428,   430
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tMAIN", "tInt", "tConst", "tPlus",
  "tMinus", "tMul", "tDiv", "tEqu", "tStar", "tPO", "tPF", "tAO", "tAF",
  "tSpace", "tBackN", "tBackT", "tVirg", "tPointVirg", "tPrintf", "tIf",
  "tElse", "tWhile", "tReturn", "tLESS_THAN_OR_EQUAL_TO", "tLESS_THAN",
  "tGREATER_THAN_OR_EQUAL_TO", "tGREATER_THAN", "tDIFFERENT",
  "tEQUALCOMPARISON", "tNumber", "tDecimal", "tExpo", "tVariable", "ERROR",
  "$accept", "File", "$@1", "Fonctions", "Fonction", "FonctionMain",
  "Params", "Param", "SuiteParams", "Body", "$@2", "$@3", "$@4",
  "Declarations", "Declaration", "$@5", "$@6", "SuiteVariables", "$@7",
  "Instructions", "Instruction", "WhileInstruction", "$@8", "$@9", "Print",
  "IfInstruction", "$@10", "IfPattern", "$@11", "Comparaison",
  "Affectation", "$@12", "$@13", "SuiteAffectations", "$@14", "Expression",
  "$@15", "$@16", "$@17", "Value", "$@18", "$@19", "$@20", "Type",
  "CoreType", "PointerStars", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -57

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-57)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -57,    10,     8,   -57,     4,    43,   -57,     8,   -57,    11,
     -57,     4,   -57,   -57,   -57,    -4,    36,   -57,     8,     8,
      39,    37,    19,    42,   -57,     8,   -57,   -57,   -57,   -57,
      44,    37,   -57,     8,   -57,   -57,     8,    22,    29,   -57,
      45,    51,    58,   -57,    61,   -57,    29,   -57,   -57,   -57,
      52,   -57,   -57,    55,    41,    -5,    65,    -5,    70,   -57,
     -57,   -57,    54,    66,    74,    -5,   -57,   -57,   -57,   -57,
     -57,    75,    53,   -57,    -5,    -3,   -57,   -57,    71,   -57,
      72,    35,    -5,   -57,   -57,   -57,   -57,   -57,    -5,    -5,
      -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,   -57,    78,
     -57,   -57,   -57,    55,   -57,    60,   -57,    35,    35,   -57,
     -57,    16,    16,    16,    16,    16,    16,   -57,    76,   -57,
     -57,   -57,   -57,    62,    73,   -57,    86,   -57,    -5,    12,
      76,   -57
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    76,     0,     3,     5,     6,     0,
      73,    76,    75,    74,     4,     0,     0,    77,     9,     9,
       0,    12,     0,     0,    14,     0,    10,    11,    14,     8,
       0,    12,     7,    18,    13,    15,    18,     0,    27,    19,
      22,     0,     0,    33,     0,    16,    27,    31,    32,    30,
      37,    29,    20,     0,     0,     0,     0,     0,     0,    28,
      38,    21,     0,     0,     0,     0,    56,    67,    71,    69,
      63,     0,    48,    65,     0,    49,    17,    14,    24,    23,
       0,    62,     0,    68,    72,    70,    64,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
      52,    50,    39,     0,    36,     0,    14,    58,    59,    60,
      61,    42,    43,    44,    45,    46,    47,    34,     0,    26,
      57,    41,    14,     0,     0,    35,     0,    51,     0,    53,
       0,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,   -57,    91,   -57,   -57,    80,    77,    69,   -28,
     -57,   -57,   -57,    67,   -57,   -57,   -57,    -2,   -57,    59,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,    30,
     -57,   -57,   -57,   -24,   -57,   -56,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,     9,   102,    97
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,    20,    21,    26,    29,
      30,    38,    58,    35,    36,    61,    53,    63,   103,    45,
      46,    47,    56,   122,    48,    49,    77,    50,   106,    71,
      51,   101,   118,   124,   130,    72,    82,    86,    98,    73,
      83,    85,    84,    22,    10,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    75,    65,    88,    89,    90,    91,    66,    18,    81,
       3,     9,     4,     5,    15,    11,     9,   100,    88,    89,
      90,    91,    88,    89,    90,    91,   105,    67,    68,    69,
      70,   -54,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    37,    90,    91,    37,    16,     4,    19,   102,
      41,    42,    24,    43,    27,    28,    25,    40,    33,    88,
      89,    90,    91,    54,    44,    52,    88,    89,    90,    91,
      55,    57,   129,   120,    62,    60,    64,    74,   121,    92,
      93,    94,    95,    96,    97,    76,    79,    80,    87,    78,
     -25,   117,   104,   127,   125,   123,   128,   126,    14,    23,
      34,   119,    31,    39,    99,    59,   131,    13,    17
};

static const yytype_uint8 yycheck[] =
{
      28,    57,     7,     6,     7,     8,     9,    12,    12,    65,
       0,     2,     4,     5,     3,    11,     7,    20,     6,     7,
       8,     9,     6,     7,     8,     9,    82,    32,    33,    34,
      35,    19,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    33,     8,     9,    36,    35,     4,    12,    77,
      21,    22,    13,    24,    35,    13,    19,    35,    14,     6,
       7,     8,     9,    12,    35,    20,     6,     7,     8,     9,
      12,    10,   128,    13,    19,    23,    35,    12,   106,    26,
      27,    28,    29,    30,    31,    15,    20,    13,    13,    35,
      19,    13,    20,    20,   122,    19,    10,    35,     7,    19,
      31,   103,    25,    36,    74,    46,   130,     5,    11
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    38,    39,     0,     4,     5,    40,    41,    42,    80,
      81,    11,    82,    81,    40,     3,    35,    82,    12,    12,
      43,    44,    80,    43,    13,    19,    45,    35,    13,    46,
      47,    44,    46,    14,    45,    50,    51,    80,    48,    50,
      35,    21,    22,    24,    35,    56,    57,    58,    61,    62,
      64,    67,    20,    53,    12,    12,    59,    10,    49,    56,
      23,    52,    19,    54,    35,     7,    12,    32,    33,    34,
      35,    66,    72,    76,    12,    72,    15,    63,    35,    20,
      13,    72,    73,    77,    79,    78,    74,    13,     6,     7,
       8,     9,    26,    27,    28,    29,    30,    31,    75,    66,
      20,    68,    46,    55,    20,    72,    65,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    13,    69,    54,
      13,    46,    60,    19,    70,    46,    35,    20,    10,    72,
      71,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    39,    38,    40,    40,    41,    41,    42,    43,
      43,    44,    45,    45,    47,    48,    49,    46,    50,    50,
      52,    51,    53,    51,    54,    55,    54,    56,    56,    57,
      57,    57,    57,    59,    60,    58,    61,    62,    63,    62,
      65,    64,    66,    66,    66,    66,    66,    66,    66,    68,
      69,    67,    67,    70,    71,    70,    73,    72,    72,    72,
      72,    72,    72,    74,    72,    75,    72,    77,    76,    78,
      76,    79,    76,    80,    80,    81,    82,    82
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     6,     6,     0,
       2,     2,     0,     3,     0,     0,     0,     7,     0,     2,
       0,     4,     0,     5,     2,     0,     4,     0,     2,     1,
       1,     1,     1,     0,     0,     7,     5,     1,     0,     4,
       0,     6,     3,     3,     3,     3,     3,     3,     1,     0,
       0,     7,     4,     4,     0,     6,     0,     4,     3,     3,
       3,     3,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     1,     2,     2,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 98 "compiler.y" /* yacc.c:1646  */
    {printf("Starting to parse the file\n");}
#line 1399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "compiler.y" /* yacc.c:1646  */
    {printf("Finished to parse main function\n");}
#line 1405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 123 "compiler.y" /* yacc.c:1646  */
    {printf("params have been parsed\n");}
#line 1411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 137 "compiler.y" /* yacc.c:1646  */
    {printf("Starting to parse body\n");}
#line 1417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 138 "compiler.y" /* yacc.c:1646  */
    {printf("Finished declarations\n");}
#line 1423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 138 "compiler.y" /* yacc.c:1646  */
    {printf("Finished instructions\n");}
#line 1429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 139 "compiler.y" /* yacc.c:1646  */
    {printf("Finished Body\n");}
#line 1435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 150 "compiler.y" /* yacc.c:1646  */
    {add_symbol((yyvsp[-1].var));}
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 151 "compiler.y" /* yacc.c:1646  */
    {printf("Parsed a declaration\n");}
#line 1447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 153 "compiler.y" /* yacc.c:1646  */
    {add_symbol((yyvsp[0].var));}
#line 1453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 154 "compiler.y" /* yacc.c:1646  */
    {printf("Parsed a (multiple) declaration\n");}
#line 1459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 158 "compiler.y" /* yacc.c:1646  */
    {add_symbol((yyvsp[0].var));}
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 160 "compiler.y" /* yacc.c:1646  */
    {add_symbol((yyvsp[0].var));}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 183 "compiler.y" /* yacc.c:1646  */
    {
                int line_number = get_line_number();
                (yyvsp[0].duo)[0] = line_number;
            }
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 187 "compiler.y" /* yacc.c:1646  */
    {
                                    int compare_result_adress = pop_temp_table();
                                    sprintf(instr,"JMF %d", compare_result_adress);
                                    int line_index = write_in_array(instr);
                                    (yyvsp[-4].duo)[1] = line_index;
                                    // and we suppose the compare statement to be one assembly line only
                                }
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 194 "compiler.y" /* yacc.c:1646  */
    {
            int line_number = get_line_number();
            patch((yyvsp[-6].duo)[1], line_number+2);
            // + 2 because we want it to jump after the following JMP instruction
            sprintf(instr,"JMP %d", (yyvsp[-6].duo)[1] - (yyvsp[-6].duo)[0]);
            // $1[0]-$1[1] because we want to jump back to the start of compare statement evaluation,
            // that is the current line when tWhile is parsed.
            write_in_array(instr);
        }
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 207 "compiler.y" /* yacc.c:1646  */
    {
                                            if(check_symbol((yyvsp[-2].var))){
                                                int adr_var = get_symbol_adress((yyvsp[-2].var));
                                                sprintf(instr, "PRI %d", adr_var);
                                                write_in_array(instr);
                                            } else{
                                                fprintf(stderr,"Undeclared variable %s\n", (yyvsp[-2].var));
                                                exit(1);
                                            }
                                        }
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 222 "compiler.y" /* yacc.c:1646  */
    {
                    //That part can't be managed in IfPattern because we don't 
                    // know about if there is a else or not (line_number +1 / 2)
                    int line_number = get_line_number();
                    patch((yyvsp[0].nb), line_number+1);
                    // + 1 is here because we want jmf to jump to the instruction after the if body end.
                    }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 230 "compiler.y" /* yacc.c:1646  */
    {
                            int line_number = get_line_number();
                            patch((yyvsp[-1].nb), line_number+2);
                            sprintf(instr,"JMP");
                            int line_index = write_in_array(instr);
                            (yyvsp[-1].nb) = line_index;
                        }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 237 "compiler.y" /* yacc.c:1646  */
    {
                int line_number = get_line_number();
                patch((yyvsp[-3].nb), line_number+1);
            }
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 245 "compiler.y" /* yacc.c:1646  */
    {
                                    int compare_result_adress = pop_temp_table();
                                    sprintf(instr,"JMF %d", compare_result_adress);
                                    int line_index = write_in_array(instr);
                                    (yyvsp[-3].nb) = line_index;
                                    // IfPattern return where is the if instruction, in case of else
                                    // We stock the value of line, so that we can patch the correct if statement when body is parsed.
                                }
#line 1567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 253 "compiler.y" /* yacc.c:1646  */
    {(yyval.nb) = (yyvsp[-5].nb);}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 258 "compiler.y" /* yacc.c:1646  */
    {/*
                                                            int adr1 = pop_temp_table();
                                                            int adr2 = pop_temp_table();
                                                            int adr_result = queryAdress_temp_table();
                                                            sprintf(instr,"INF %d %d %d",adr_result, adr1, adr2);*/
                                                        }
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 265 "compiler.y" /* yacc.c:1646  */
    {
                                                            int adr1 = pop_temp_table();
                                                            int adr2 = pop_temp_table();
                                                            int adr_result = queryAdress_temp_table();
                                                            sprintf(instr,"INF %d %d %d", adr_result, adr2, adr1);
                                                            // adr2 then adr1 because the first popped is the last encountered
                                                            write_in_array(instr);
                                    
                                                        }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 277 "compiler.y" /* yacc.c:1646  */
    {
                                                            int adr1 = pop_temp_table();
                                                            int adr2 = pop_temp_table();
                                                            int adr_result = queryAdress_temp_table();
                                                            sprintf(instr,"SUP %d %d %d", adr_result, adr2, adr1);
                                                            write_in_array(instr);
                                                        }
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 287 "compiler.y" /* yacc.c:1646  */
    {
                                                            int adr1 = pop_temp_table();
                                                            int adr2 = pop_temp_table();
                                                            int adr_result = queryAdress_temp_table();
                                                            sprintf(instr,"EQU %d %d %d", adr_result, adr2, adr1);
                                                            write_in_array(instr);
                                                        }
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 301 "compiler.y" /* yacc.c:1646  */
    {printf("Parsed an affectation\n");}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 301 "compiler.y" /* yacc.c:1646  */
    {
                                        printf("on parse la variable %s\n",(yyvsp[-3].var));
                                        if(check_symbol((yyvsp[-3].var))){
                                            
                                            int adr_var = get_symbol_adress((yyvsp[-3].var));
                                            int adr_result = pop_temp_table();
                                            sprintf(instr, "COP %d %d", adr_var, adr_result);
                                            write_in_array(instr);
                                        } else{
                                            fprintf(stderr,"Undeclared variable %s\n", (yyvsp[-3].var));
                                            exit(1);
                                        }
                                    }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 316 "compiler.y" /* yacc.c:1646  */
    {
                                            
                                                if(check_symbol((yyvsp[-3].var))){
                                                    int adr_var = get_symbol_adress((yyvsp[-3].var));
                                                    int adr_result = pop_temp_table();
                                                    sprintf(instr, "COP %d %d", adr_var, adr_result);
                                                    write_in_array(instr);
                                                    }else{
                                                        fprintf(stderr,"Undeclared variable %s\n", (yyvsp[-3].var));
                                                        exit(1);
                                                    }
                                            }
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 331 "compiler.y" /* yacc.c:1646  */
    {
                                            if(check_symbol((yyvsp[-2].var))){
                                                int adr_var = get_symbol_adress((yyvsp[-2].var));
                                                int adr_result = pop_temp_table();
                                                sprintf(instr, "COP %d %d", adr_var, adr_result);
                                                write_in_array(instr);
                                            } else{
                                                fprintf(stderr,"Undeclared variable %s\n", (yyvsp[-2].var));
                                                exit(1);
                                            }
                                        }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 343 "compiler.y" /* yacc.c:1646  */
    {
                                            if(check_symbol((yyvsp[-2].var))){
                                                int adr_var = get_symbol_adress((yyvsp[-2].var));
                                                int adr_result = pop_temp_table();
                                                sprintf(instr, "COP %d %d", adr_var, adr_result);
                                                write_in_array(instr);
                                            } else {
                                                fprintf(stderr,"Undeclared variable %s\n", (yyvsp[-2].var));
                                                exit(1);
                                            }
                                        }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 359 "compiler.y" /* yacc.c:1646  */
    {printf("tPO\n");}
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 359 "compiler.y" /* yacc.c:1646  */
    {printf(" tPF\n");}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 361 "compiler.y" /* yacc.c:1646  */
    {
                                                        int adr1 = pop_temp_table();
                                                        int adr2 = pop_temp_table();
                                                        int dest = queryAdress_temp_table();
                                                        sprintf(instr, "ADD %d %d %d",dest, adr1, adr2 );
                                                        write_in_array(instr);
                                                    }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 369 "compiler.y" /* yacc.c:1646  */
    {
                                                        int adr1 = pop_temp_table();
                                                        int adr2 = pop_temp_table();
                                                        int dest = queryAdress_temp_table();
                                                        sprintf(instr, "SOU %d %d %d",dest, adr2, adr1 );
                                                        write_in_array(instr);
                                                    }
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 377 "compiler.y" /* yacc.c:1646  */
    {
                                                        int adr1 = pop_temp_table();
                                                        int adr2 = pop_temp_table();
                                                        int dest = queryAdress_temp_table();
                                                        sprintf(instr, "MUL %d %d %d",dest, adr1, adr2 );
                                                        write_in_array(instr);
                                                    }
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 385 "compiler.y" /* yacc.c:1646  */
    {
                                                        int adr1 = pop_temp_table();
                                                        int adr2 = pop_temp_table();
                                                        int dest = queryAdress_temp_table();
                                                        sprintf(instr, "DIV %d %d %d",dest, adr2, adr1 );
                                                        write_in_array(instr);
                                                    }
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 393 "compiler.y" /* yacc.c:1646  */
    {printf("-num\n");}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 395 "compiler.y" /* yacc.c:1646  */
    {printf("on est dans une expression avec une variable%s",(yyvsp[0].var));}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 395 "compiler.y" /* yacc.c:1646  */
    {
                                        int dest = queryAdress_temp_table();
                                        int sym_adr = get_symbol_adress((yyvsp[-1].var));
                                        sprintf(instr, "COP %d @%d", dest, sym_adr);
                                        write_in_array(instr);
                                        }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 402 "compiler.y" /* yacc.c:1646  */
    {printf("on est dans une expression %d",(yyvsp[0].nb));}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 402 "compiler.y" /* yacc.c:1646  */
    {
                                    int adr = queryAdress_temp_table();
                                    sprintf(instr, "AFC %d %d", adr, (yyvsp[-1].nb) );
                                    write_in_array(instr);
                                }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 410 "compiler.y" /* yacc.c:1646  */
    {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 410 "compiler.y" /* yacc.c:1646  */
    {(yyval.nb)=(yyvsp[-1].nb);}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 412 "compiler.y" /* yacc.c:1646  */
    {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 412 "compiler.y" /* yacc.c:1646  */
    {(yyval.nb)=(yyvsp[-1].nb);}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 414 "compiler.y" /* yacc.c:1646  */
    {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 414 "compiler.y" /* yacc.c:1646  */
    {(yyval.nb)=(yyvsp[-1].nb);}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 418 "compiler.y" /* yacc.c:1646  */
    {(yyval.typeInfos) = (yyvsp[0].typeInfos);}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 420 "compiler.y" /* yacc.c:1646  */
    { (yyval.typeInfos) = {.type = (yyvsp[0].typeInfos).type, .ptr_level = (yyvsp[0].typeInfos).ptr_level, .constantness = true}; }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 424 "compiler.y" /* yacc.c:1646  */
    {(yyval.typeInfos)= {.type = INT, .ptr_level = (yyvsp[0].nb), .constantness = false}; }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 428 "compiler.y" /* yacc.c:1646  */
    {(yyval.nb)=0;}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 430 "compiler.y" /* yacc.c:1646  */
    {(yyval.nb) = 1 + (yyvsp[0].nb);}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1864 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 433 "compiler.y" /* yacc.c:1906  */


void yyerror(char * str){
    fprintf(stderr,"Error line %s\n", str);
}

int main(){
    init_symbol_table();
    init_temp_table();
    init_instr_tab();
    if (yyparse() == 0){
        printf("Analyse reussie\n");}
    printf("fini!!!");
    write_in_file();
    delete_instr_tab();
    delete_symbol_table();
    delete_temp_table();
    return 0;
}

