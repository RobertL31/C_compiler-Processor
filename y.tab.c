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
#line 1 "compiler.y"

    #include <stdio.h>
    #include <stdlib.h>

    #include "global.h"
    #include "symbols.h"
    #include "assembly.h"
    
    int yylex();
    void yyerror(char*);

    char instr[100];
    TypeInfos g_typeInfos;
    // That variable is used in the case of int i,j,k
    // To be able getting the type for j and k.


#line 88 "y.tab.c"

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
    tMAIN = 258,
    tInt = 259,
    tConst = 260,
    tPlus = 261,
    tMinus = 262,
    tMul = 263,
    tDiv = 264,
    tEqu = 265,
    tPO = 266,
    tPF = 267,
    tAO = 268,
    tAF = 269,
    tOpenC = 270,
    tCloseC = 271,
    tMot = 272,
    tSpace = 273,
    tBackN = 274,
    tBackT = 275,
    tVirg = 276,
    tPointVirg = 277,
    tEsper = 278,
    tPrintf = 279,
    tIf = 280,
    tElse = 281,
    tWhile = 282,
    tReturn = 283,
    tLESS_THAN_OR_EQUAL_TO = 284,
    tLESS_THAN = 285,
    tGREATER_THAN_OR_EQUAL_TO = 286,
    tGREATER_THAN = 287,
    tDIFFERENT = 288,
    tEQUALCOMPARISON = 289,
    tNumber = 290,
    tDecimal = 291,
    tExpo = 292,
    tVariable = 293,
    ERROR = 294
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
#define tPO 266
#define tPF 267
#define tAO 268
#define tAF 269
#define tOpenC 270
#define tCloseC 271
#define tMot 272
#define tSpace 273
#define tBackN 274
#define tBackT 275
#define tVirg 276
#define tPointVirg 277
#define tEsper 278
#define tPrintf 279
#define tIf 280
#define tElse 281
#define tWhile 282
#define tReturn 283
#define tLESS_THAN_OR_EQUAL_TO 284
#define tLESS_THAN 285
#define tGREATER_THAN_OR_EQUAL_TO 286
#define tGREATER_THAN 287
#define tDIFFERENT 288
#define tEQUALCOMPARISON 289
#define tNumber 290
#define tDecimal 291
#define tExpo 292
#define tVariable 293
#define ERROR 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "compiler.y"

    char * var;
    int nb;
    int duo[2];
    float fl_nb;
    TypeInfos typeInfos;

#line 226 "y.tab.c"

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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   126

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  83
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  143

#define YYUNDEFTOK  2
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,    98,   103,   105,   107,   111,   113,   117,
     121,   124,   129,   132,   135,   139,   140,   140,   139,   145,
     148,   151,   155,   158,   161,   163,   167,   167,   170,   170,
     178,   180,   180,   184,   187,   189,   194,   196,   198,   200,
     205,   210,   205,   232,   247,   255,   255,   270,   270,   283,
     291,   312,   322,   338,   347,   363,   385,   385,   403,   420,
     435,   435,   454,   454,   456,   464,   472,   480,   488,   500,
     500,   507,   507,   515,   515,   517,   517,   519,   519,   523,
     525,   531,   536,   538
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tMAIN", "tInt", "tConst", "tPlus",
  "tMinus", "tMul", "tDiv", "tEqu", "tPO", "tPF", "tAO", "tAF", "tOpenC",
  "tCloseC", "tMot", "tSpace", "tBackN", "tBackT", "tVirg", "tPointVirg",
  "tEsper", "tPrintf", "tIf", "tElse", "tWhile", "tReturn",
  "tLESS_THAN_OR_EQUAL_TO", "tLESS_THAN", "tGREATER_THAN_OR_EQUAL_TO",
  "tGREATER_THAN", "tDIFFERENT", "tEQUALCOMPARISON", "tNumber", "tDecimal",
  "tExpo", "tVariable", "ERROR", "$accept", "File", "$@1", "Fonctions",
  "Fonction", "FonctionMain", "Params", "Param", "SuiteParams", "Body",
  "$@2", "$@3", "$@4", "BodyComments", "Comments", "Comment",
  "Declarations", "Declaration", "$@5", "$@6", "SuiteVariables", "$@7",
  "Instructions", "Instruction", "WhileInstruction", "$@8", "$@9", "Print",
  "IfInstruction", "$@10", "IfPattern", "$@11", "Comparaison",
  "Affectation", "$@12", "SuiteAffectations", "$@13", "Expression", "$@14",
  "$@15", "$@16", "Value", "$@17", "$@18", "$@19", "Type", "CoreType",
  "PointerStars", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-61)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -68,    13,    50,   -68,    20,    26,    -6,   -68,    50,   -68,
      50,     5,   -68,    20,   -68,   -68,   -68,    32,    -6,   -68,
     -68,    48,    56,   -68,   -68,   -68,    47,    47,    57,    60,
      33,    58,   -68,    47,   -68,   -68,   -68,   -68,    81,    60,
     -68,    50,   -68,    50,   -68,    50,    59,   -68,   -13,   -68,
      73,    87,    89,   -68,    91,   -13,   -68,   -13,   -68,   -68,
     -68,    76,   -68,   -68,    82,    66,     9,    94,     9,   -68,
      92,   -68,   -68,   -68,    69,    86,    97,     9,   -68,   -68,
     -68,   -68,   -68,    98,    54,   -68,     9,    67,   -68,   -68,
      90,   -68,    93,    49,     9,   -68,   -68,   -68,   -68,   -68,
       9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
     -68,   100,   -68,    95,   -68,    82,   -68,    84,   -68,    49,
      49,   -68,   -68,    71,    71,    71,    71,    71,    71,   -68,
      75,    96,   -68,   -68,   -68,   -68,   104,   -68,   -68,     9,
      -3,    95,   -68
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    82,     0,    20,     3,     6,     7,
       0,     0,    79,    82,    81,    80,    22,     0,    20,     5,
       4,     0,     0,    83,    19,    21,    10,    10,     0,    13,
       0,     0,    15,     0,    11,    12,    15,     9,     0,    13,
       8,    23,    14,    23,    16,    23,     0,    25,    33,    24,
      28,     0,     0,    40,     0,    33,    17,    33,    38,    39,
      37,    44,    36,    26,     0,     0,     0,     0,     0,    35,
       0,    34,    45,    27,     0,     0,     0,     0,    62,    73,
      77,    75,    69,     0,    55,    71,     0,    56,    18,    15,
      30,    29,     0,    68,     0,    74,    78,    76,    70,    47,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,     0,    58,     0,    46,     0,    43,     0,    15,    64,
      65,    66,    67,    52,    53,    54,    51,    50,    49,    41,
       0,     0,    32,    63,    48,    15,     0,    57,    42,     0,
      59,     0,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   -68,    -1,   -68,   -68,    99,    88,    78,   -36,
     -68,   -68,   -68,   -26,   101,   -68,   -22,   -68,   -68,   -68,
       7,   -68,   -31,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,    34,   -68,   -68,   -18,   -68,   -67,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,    23,   119,   112
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     8,     9,    28,    29,    34,    37,
      38,    48,    70,    10,    17,    18,    44,    45,    73,    64,
      75,   115,    56,    57,    58,    67,   135,    59,    60,    89,
      61,   118,    83,    62,   113,   131,   141,    84,    94,    98,
     110,    85,    95,    97,    96,    11,    12,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      40,    87,     6,   100,   101,   102,   103,    19,    21,    20,
      93,    51,    52,     3,    53,    43,    77,    43,   -60,    43,
      78,    47,    55,    49,    69,    54,    71,   117,    13,    55,
       4,    55,    16,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    22,    79,    80,    81,    82,    24,    30,
      30,     4,     5,   114,     4,     5,    30,   102,   103,    26,
     100,   101,   102,   103,    46,     6,    46,    27,    46,    32,
      36,    35,   140,   100,   101,   102,   103,   100,   101,   102,
     103,    33,   134,   104,   105,   106,   107,   108,   109,   112,
     100,   101,   102,   103,    41,    63,   133,    50,    65,   138,
      66,    68,    72,    74,    76,    86,    88,    90,    91,    92,
      99,   -31,   129,   136,   139,   116,   130,    42,   137,    25,
     111,    39,   132,   142,    15,    23,    31
};

static const yytype_uint8 yycheck[] =
{
      36,    68,    15,     6,     7,     8,     9,     8,     3,    10,
      77,    24,    25,     0,    27,    41,     7,    43,    21,    45,
      11,    43,    48,    45,    55,    38,    57,    94,     8,    55,
       4,    57,    38,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    38,    35,    36,    37,    38,    16,    26,
      27,     4,     5,    89,     4,     5,    33,     8,     9,    11,
       6,     7,     8,     9,    41,    15,    43,    11,    45,    12,
      12,    38,   139,     6,     7,     8,     9,     6,     7,     8,
       9,    21,   118,    29,    30,    31,    32,    33,    34,    22,
       6,     7,     8,     9,    13,    22,    12,    38,    11,   135,
      11,    10,    26,    21,    38,    11,    14,    38,    22,    12,
      12,    21,    12,    38,    10,    22,    21,    39,    22,    18,
      86,    33,   115,   141,     5,    13,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    42,     0,     4,     5,    15,    43,    44,    45,
      53,    85,    86,     8,    87,    86,    38,    54,    55,    43,
      43,     3,    38,    87,    16,    54,    11,    11,    46,    47,
      85,    46,    12,    21,    48,    38,    12,    49,    50,    47,
      49,    13,    48,    53,    56,    57,    85,    56,    51,    56,
      38,    24,    25,    27,    38,    53,    62,    63,    64,    67,
      68,    70,    73,    22,    59,    11,    11,    65,    10,    62,
      52,    62,    26,    58,    21,    60,    38,     7,    11,    35,
      36,    37,    38,    72,    77,    81,    11,    77,    14,    69,
      38,    22,    12,    77,    78,    82,    84,    83,    79,    12,
       6,     7,     8,     9,    29,    30,    31,    32,    33,    34,
      80,    72,    22,    74,    49,    61,    22,    77,    71,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    12,
      21,    75,    60,    12,    49,    66,    38,    22,    49,    10,
      77,    76,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    42,    41,    43,    43,    43,    44,    44,    45,
      46,    46,    47,    48,    48,    50,    51,    52,    49,    53,
      54,    54,    55,    56,    56,    56,    58,    57,    59,    57,
      60,    61,    60,    62,    62,    62,    63,    63,    63,    63,
      65,    66,    64,    67,    68,    69,    68,    71,    70,    72,
      72,    72,    72,    72,    72,    72,    74,    73,    73,    75,
      76,    75,    78,    77,    77,    77,    77,    77,    77,    79,
      77,    80,    77,    82,    81,    83,    81,    84,    81,    85,
      85,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     1,     1,     6,     6,
       0,     2,     2,     0,     3,     0,     0,     0,     7,     3,
       0,     2,     1,     0,     2,     2,     0,     4,     0,     5,
       2,     0,     4,     0,     2,     2,     1,     1,     1,     1,
       0,     0,     7,     5,     1,     0,     4,     0,     6,     3,
       3,     3,     3,     3,     3,     1,     0,     6,     4,     4,
       0,     6,     0,     4,     3,     3,     3,     3,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     1,
       2,     2,     0,     2
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
#line 98 "compiler.y"
        {printf("Starting to parse the file\n");}
#line 1506 "y.tab.c"
    break;

  case 9:
#line 118 "compiler.y"
    {printf("Finished to parse main function\n");}
#line 1512 "y.tab.c"
    break;

  case 11:
#line 125 "compiler.y"
        {printf("params have been parsed\n");}
#line 1518 "y.tab.c"
    break;

  case 15:
#line 139 "compiler.y"
        {printf("Starting to parse body\n");}
#line 1524 "y.tab.c"
    break;

  case 16:
#line 140 "compiler.y"
                         {printf("Finished declarations\n");}
#line 1530 "y.tab.c"
    break;

  case 17:
#line 140 "compiler.y"
                                                                          {printf("Finished instructions\n");}
#line 1536 "y.tab.c"
    break;

  case 18:
#line 141 "compiler.y"
        {printf("Finished Body\n");}
#line 1542 "y.tab.c"
    break;

  case 19:
#line 145 "compiler.y"
                                {printf("Parsed a comment\n");}
#line 1548 "y.tab.c"
    break;

  case 26:
#line 167 "compiler.y"
                                  {add_symbol((yyvsp[-1].var),(yyvsp[-2].typeInfos));}
#line 1554 "y.tab.c"
    break;

  case 27:
#line 168 "compiler.y"
        {printf("Parsed a declaration\n");}
#line 1560 "y.tab.c"
    break;

  case 28:
#line 170 "compiler.y"
                       {add_symbol((yyvsp[0].var),(yyvsp[-1].typeInfos));
                        g_typeInfos = (yyvsp[-1].typeInfos);
                        }
#line 1568 "y.tab.c"
    break;

  case 29:
#line 174 "compiler.y"
        {printf("Parsed a (multiple) declaration\n");}
#line 1574 "y.tab.c"
    break;

  case 30:
#line 178 "compiler.y"
                        {add_symbol((yyvsp[0].var),g_typeInfos);}
#line 1580 "y.tab.c"
    break;

  case 31:
#line 180 "compiler.y"
                        {add_symbol((yyvsp[0].var),g_typeInfos);}
#line 1586 "y.tab.c"
    break;

  case 40:
#line 205 "compiler.y"
           {
                int line_number = get_line_number();
                (yyvsp[0].duo)[0] = line_number+1;
                // $1[0] now contains the start line of the compare statement evaluation
            }
#line 1596 "y.tab.c"
    break;

  case 41:
#line 210 "compiler.y"
                        {
                                    int compare_result_adress = pop_temp_table();
                                    sprintf(instr,"JMF %d", compare_result_adress);
                                    int line_index = write_in_array(instr);
                                    (yyvsp[-4].duo)[1] = line_index;
                                    // and we suppose the compare statement to be one assembly line only
                                }
#line 1608 "y.tab.c"
    break;

  case 42:
#line 217 "compiler.y"
         {
            int line_number = get_line_number();
            patch((yyvsp[-6].duo)[1], line_number+2);
            // + 2 because we want it to jump after the following JMP instruction
            sprintf(instr,"JMP %d", (yyvsp[-6].duo)[0]);
            // $1[0] because we want to jump back to the start of compare statement evaluation,
            // that is the current line when tWhile is parsed.
            write_in_array(instr);
        }
#line 1622 "y.tab.c"
    break;

  case 43:
#line 232 "compiler.y"
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
#line 1637 "y.tab.c"
    break;

  case 44:
#line 247 "compiler.y"
                  {
                    //That part can't be managed in IfPattern because we don't 
                    // know about if there is a else or not (line_number +1 / 2)
                    int line_number = get_line_number();
                    patch((yyvsp[0].nb), line_number+1);
                    // + 1 is here because we want jmf to jump to the instruction after the if body end.
                    }
#line 1649 "y.tab.c"
    break;

  case 45:
#line 255 "compiler.y"
                        {
                            int line_number = get_line_number();
                            patch((yyvsp[-1].nb), line_number+2);
                            sprintf(instr,"JMP");
                            int line_index = write_in_array(instr);
                            (yyvsp[-1].nb) = line_index;
                        }
#line 1661 "y.tab.c"
    break;

  case 46:
#line 262 "compiler.y"
             {
                int line_number = get_line_number();
                patch((yyvsp[-3].nb), line_number+1);
            }
#line 1670 "y.tab.c"
    break;

  case 47:
#line 270 "compiler.y"
                                {
                                    int compare_result_adress = pop_temp_table();
                                    sprintf(instr,"JMF %d", compare_result_adress);
                                    int line_index = write_in_array(instr);
                                    (yyvsp[-3].nb) = line_index;
                                    // IfPattern return where is the if instruction, in case of else
                                    // We stock the value of line, so that we can patch the correct if statement when body is parsed.
                                }
#line 1683 "y.tab.c"
    break;

  case 48:
#line 278 "compiler.y"
             {(yyval.nb) = (yyvsp[-5].nb);}
#line 1689 "y.tab.c"
    break;

  case 49:
#line 283 "compiler.y"
                                                   {
                                                        int adr1 = pop_temp_table();
                                                        int adr2 = pop_temp_table();
                                                        int adr_result = queryAdress_temp_table();
                                                        sprintf(instr,"EQU %d %d %d", adr_result, adr2, adr1);
                                                        write_in_array(instr);
                                                    }
#line 1701 "y.tab.c"
    break;

  case 50:
#line 291 "compiler.y"
                                             {
                                                // Each time, we consider !a to be 1-a, due to the fact boolean are just 0 and 1
                                                int adr1 = pop_temp_table();
                                                int adr2 = pop_temp_table();
                                                int adr_temp_result = queryAdress_temp_table();
                                                sprintf(instr, "EQU %d %d %d", adr_temp_result, adr2, adr1);
                                                write_in_array(instr);
                                                adr_temp_result = pop_temp_table();
                                                int adr_final_result = queryAdress_temp_table();
                                                // As every instruction is working on memory adress, we have to position a 1 somewhere.
                                                // We're querying the adress to position a 1, then AFC a 1 on it.
                                                int adr_of_1 = queryAdress_temp_table();
                                                // That instruction can seem to be useless, but it allows the adress of the one
                                                // To be removed from the temp_table
                                                adr_of_1 = pop_temp_table();
                                                sprintf(instr, "AFC %d 1", adr_of_1);
                                                write_in_array(instr);
                                                sprintf(instr,"SOU %d %d %d", adr_final_result, adr_of_1, adr_temp_result);
                                                write_in_array(instr);
                                            }
#line 1726 "y.tab.c"
    break;

  case 51:
#line 312 "compiler.y"
                                                {
                                                    int adr1 = pop_temp_table();
                                                    int adr2 = pop_temp_table();
                                                    int adr_result = queryAdress_temp_table();
                                                    sprintf(instr,"SUP %d %d %d", adr_result, adr2, adr1);
                                                    // adr2 then adr1 because the first popped is the last encountered
                                                    // So that, a > b produces a stack with b on top.
                                                    write_in_array(instr);
                                                }
#line 1740 "y.tab.c"
    break;

  case 52:
#line 322 "compiler.y"
                                                         {
                                                            int adr1 = pop_temp_table();
                                                            int adr2 = pop_temp_table();
                                                            int adr_temp_result = queryAdress_temp_table();
                                                            sprintf(instr, "SUP %d %d %d", adr_temp_result, adr2, adr1);
                                                            write_in_array(instr);
                                                            adr_temp_result = pop_temp_table();
                                                            int adr_final_result = queryAdress_temp_table();
                                                            int adr_of_1 = queryAdress_temp_table();
                                                            adr_of_1 = pop_temp_table();
                                                            sprintf(instr, "AFC %d 1", adr_of_1);
                                                            write_in_array(instr);
                                                            sprintf(instr,"SOU %d %d %d", adr_final_result, adr_of_1, adr_temp_result);
                                                            write_in_array(instr);
                                                        }
#line 1760 "y.tab.c"
    break;

  case 53:
#line 338 "compiler.y"
                                             {
                                                int adr1 = pop_temp_table();
                                                int adr2 = pop_temp_table();
                                                int adr_result = queryAdress_temp_table();
                                                sprintf(instr,"INF %d %d %d", adr_result, adr2, adr1);
                                                write_in_array(instr);
                        
                                            }
#line 1773 "y.tab.c"
    break;

  case 54:
#line 347 "compiler.y"
                                                            {
                                                                int adr1 = pop_temp_table();
                                                                int adr2 = pop_temp_table();
                                                                int adr_temp_result = queryAdress_temp_table();
                                                                sprintf(instr, "INF %d %d %d", adr_temp_result, adr2, adr1);
                                                                write_in_array(instr);
                                                                adr_temp_result = pop_temp_table();
                                                                int adr_final_result = queryAdress_temp_table();
                                                                int adr_of_1 = queryAdress_temp_table();
                                                                adr_of_1 = pop_temp_table();
                                                                sprintf(instr, "AFC %d 1", adr_of_1);
                                                                write_in_array(instr);
                                                                sprintf(instr,"SOU %d %d %d", adr_final_result, adr_of_1, adr_temp_result);
                                                                write_in_array(instr);
                                                            }
#line 1793 "y.tab.c"
    break;

  case 55:
#line 363 "compiler.y"
                       {
                            // Just Expression is something like if(i).
                            // We consider the condition to be true if i != 0
                            // We just take again the code from 'tDIFFERENT' section
                            int adr1 = pop_temp_table();
                            int adr_temp_result = queryAdress_temp_table();
                            sprintf(instr, "EQU %d 0 %d", adr_temp_result, adr1);
                            write_in_array(instr);
                            adr_temp_result = pop_temp_table();
                            int adr_final_result = queryAdress_temp_table();
                            int adr_of_1 = queryAdress_temp_table();
                            adr_of_1 = pop_temp_table();
                            sprintf(instr, "AFC %d 1", adr_of_1);
                            write_in_array(instr);
                            sprintf(instr,"SOU %d %d %d", adr_final_result, adr_of_1, adr_temp_result);
                            write_in_array(instr);
                        }
#line 1815 "y.tab.c"
    break;

  case 56:
#line 385 "compiler.y"
                                  {
                                    if (is_constant((yyvsp[-2].var))){
                                        fprintf(stderr,"FATAL ERROR - tried to change value of constant variable\n");
                                    }
                                    printf("Parsed an affectation\n");
                                    printf("on parse la variable %s\n",(yyvsp[-2].var));
                                    if(check_symbol((yyvsp[-2].var))){
                                        int adr_var = get_symbol_adress((yyvsp[-2].var));
                                        int adr_result = pop_temp_table();
                                        sprintf(instr, "COP %d %d", adr_var, adr_result);
                                        write_in_array(instr);
                                    } else {
                                        fprintf(stderr,"FATAL ERROR - Undeclared variable %s\n", (yyvsp[-2].var));
                                        exit(1);
                                    }
                                }
#line 1836 "y.tab.c"
    break;

  case 58:
#line 403 "compiler.y"
                                             {
                                                if (is_constant((yyvsp[-3].var))){
                                                    fprintf(stderr,"FATAL ERROR - tried to change value of constant variable\n");
                                                }
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
#line 1855 "y.tab.c"
    break;

  case 59:
#line 420 "compiler.y"
                                        {
                                            if (is_constant((yyvsp[-2].var))){
                                                fprintf(stderr,"FATAL ERROR - tried to change value of constant variable\n");
                                            }
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
#line 1874 "y.tab.c"
    break;

  case 60:
#line 435 "compiler.y"
                                        {
                                            if (is_constant((yyvsp[-2].var))){
                                                fprintf(stderr,"FATAL ERROR - tried to change value of constant variable\n");
                                            }
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
#line 1893 "y.tab.c"
    break;

  case 62:
#line 454 "compiler.y"
            {printf("tPO\n");}
#line 1899 "y.tab.c"
    break;

  case 63:
#line 454 "compiler.y"
                                             {printf(" tPF\n");}
#line 1905 "y.tab.c"
    break;

  case 64:
#line 456 "compiler.y"
                                    {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "ADD %d %d %d",dest, adr1, adr2 );
                                        write_in_array(instr);
                                    }
#line 1917 "y.tab.c"
    break;

  case 65:
#line 464 "compiler.y"
                                     {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "SOU %d %d %d",dest, adr2, adr1 );
                                        write_in_array(instr);
                                    }
#line 1929 "y.tab.c"
    break;

  case 66:
#line 472 "compiler.y"
                                   {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "MUL %d %d %d",dest, adr1, adr2 );
                                        write_in_array(instr);
                                    }
#line 1941 "y.tab.c"
    break;

  case 67:
#line 480 "compiler.y"
                                   {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "DIV %d %d %d",dest, adr2, adr1 );
                                        write_in_array(instr);
                                    }
#line 1953 "y.tab.c"
    break;

  case 68:
#line 488 "compiler.y"
                          {
                            int adr1 = pop_temp_table();
                            int dest = queryAdress_temp_table();
                            // As in Comparaisons, we have to position a 0 somewhere.
                            int adr_of_0 = queryAdress_temp_table();
                            adr_of_0 = pop_temp_table();
                            sprintf(instr,"AFC %d 0", adr_of_0);
                            write_in_array(instr);
                            sprintf(instr,"SOU %d %d %d", dest, adr_of_0, adr1);
                            write_in_array(instr);
                        }
#line 1969 "y.tab.c"
    break;

  case 69:
#line 500 "compiler.y"
                  {printf("on est dans une expression avec une variable%s",(yyvsp[0].var));}
#line 1975 "y.tab.c"
    break;

  case 70:
#line 500 "compiler.y"
                                                                                 {
                                        int dest = queryAdress_temp_table();
                                        int sym_adr = get_symbol_adress((yyvsp[-1].var));
                                        sprintf(instr, "COP %d @%d", dest, sym_adr);
                                        write_in_array(instr);
                                        }
#line 1986 "y.tab.c"
    break;

  case 71:
#line 507 "compiler.y"
              {printf("on est dans une expression %d",(yyvsp[0].nb));}
#line 1992 "y.tab.c"
    break;

  case 72:
#line 507 "compiler.y"
                                                            {
                                    int adr = queryAdress_temp_table();
                                    sprintf(instr, "AFC %d %d", adr, (yyvsp[-1].nb) );
                                    write_in_array(instr);
                                }
#line 2002 "y.tab.c"
    break;

  case 73:
#line 515 "compiler.y"
                {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 2008 "y.tab.c"
    break;

  case 74:
#line 515 "compiler.y"
                                                             {(yyval.nb)=(yyvsp[-1].nb);}
#line 2014 "y.tab.c"
    break;

  case 75:
#line 517 "compiler.y"
              {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 2020 "y.tab.c"
    break;

  case 76:
#line 517 "compiler.y"
                                                           {(yyval.nb)=(yyvsp[-1].nb);}
#line 2026 "y.tab.c"
    break;

  case 77:
#line 519 "compiler.y"
                 {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 2032 "y.tab.c"
    break;

  case 78:
#line 519 "compiler.y"
                                                              {(yyval.nb)=(yyvsp[-1].nb);}
#line 2038 "y.tab.c"
    break;

  case 79:
#line 523 "compiler.y"
                 {(yyval.typeInfos) = (yyvsp[0].typeInfos);}
#line 2044 "y.tab.c"
    break;

  case 80:
#line 525 "compiler.y"
                        { TypeInfos ans = {.type = (yyvsp[0].typeInfos).type, .ptr_level = (yyvsp[0].typeInfos).ptr_level, .constantness = true};
                            // Single line declaration, such as $$ = {...} doesnt work
                          (yyval.typeInfos) = ans; }
#line 2052 "y.tab.c"
    break;

  case 81:
#line 531 "compiler.y"
                          {TypeInfos ans = {.type = INT, .ptr_level = (yyvsp[0].nb), .constantness = false}; 
                          (yyval.typeInfos) = ans;}
#line 2059 "y.tab.c"
    break;

  case 82:
#line 536 "compiler.y"
                 {(yyval.nb)=0;}
#line 2065 "y.tab.c"
    break;

  case 83:
#line 538 "compiler.y"
                          {(yyval.nb) = 1 + (yyvsp[0].nb);}
#line 2071 "y.tab.c"
    break;


#line 2075 "y.tab.c"

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
#line 541 "compiler.y"


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

