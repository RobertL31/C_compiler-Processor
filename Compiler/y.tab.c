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
    tMot = 270,
    tComment = 271,
    tSpace = 272,
    tBackN = 273,
    tBackT = 274,
    tVirg = 275,
    tPointVirg = 276,
    tEsper = 277,
    tPrintf = 278,
    tIf = 279,
    tElse = 280,
    tWhile = 281,
    tReturn = 282,
    tLESS_THAN_OR_EQUAL_TO = 283,
    tLESS_THAN = 284,
    tGREATER_THAN_OR_EQUAL_TO = 285,
    tGREATER_THAN = 286,
    tDIFFERENT = 287,
    tEQUALCOMPARISON = 288,
    tNumber = 289,
    tDecimal = 290,
    tExpo = 291,
    tVariable = 292,
    ERROR = 293
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
#define tMot 270
#define tComment 271
#define tSpace 272
#define tBackN 273
#define tBackT 274
#define tVirg 275
#define tPointVirg 276
#define tEsper 277
#define tPrintf 278
#define tIf 279
#define tElse 280
#define tWhile 281
#define tReturn 282
#define tLESS_THAN_OR_EQUAL_TO 283
#define tLESS_THAN 284
#define tGREATER_THAN_OR_EQUAL_TO 285
#define tGREATER_THAN 286
#define tDIFFERENT 287
#define tEQUALCOMPARISON 288
#define tNumber 289
#define tDecimal 290
#define tExpo 291
#define tVariable 292
#define ERROR 293

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

#line 224 "y.tab.c"

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
#define YYLAST   112

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  132

#define YYUNDEFTOK  2
#define YYMAXUTOK   293


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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    96,   100,   103,   107,   109,   113,   117,
     120,   125,   128,   131,   135,   136,   136,   135,   141,   144,
     148,   148,   151,   151,   159,   161,   161,   165,   168,   173,
     175,   177,   179,   184,   189,   184,   211,   226,   234,   234,
     249,   249,   262,   270,   291,   301,   317,   326,   342,   364,
     364,   382,   400,   415,   415,   434,   436,   444,   452,   460,
     468,   480,   487,   493,   500,   516,   516,   518,   518,   520,
     520,   524,   526,   532,   537,   539
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tMAIN", "tInt", "tConst", "tPlus",
  "tMinus", "tMul", "tDiv", "tEqu", "tPO", "tPF", "tAO", "tAF", "tMot",
  "tComment", "tSpace", "tBackN", "tBackT", "tVirg", "tPointVirg",
  "tEsper", "tPrintf", "tIf", "tElse", "tWhile", "tReturn",
  "tLESS_THAN_OR_EQUAL_TO", "tLESS_THAN", "tGREATER_THAN_OR_EQUAL_TO",
  "tGREATER_THAN", "tDIFFERENT", "tEQUALCOMPARISON", "tNumber", "tDecimal",
  "tExpo", "tVariable", "ERROR", "$accept", "File", "$@1", "Fonctions",
  "Fonction", "FonctionMain", "Params", "Param", "SuiteParams", "Body",
  "$@2", "$@3", "$@4", "Declarations", "Declaration", "$@5", "$@6",
  "SuiteVariables", "$@7", "Instructions", "Instruction",
  "WhileInstruction", "$@8", "$@9", "Print", "IfInstruction", "$@10",
  "IfPattern", "$@11", "Comparaison", "Affectation", "$@12",
  "SuiteAffectations", "$@13", "Expression", "Value", "$@14", "$@15",
  "$@16", "Type", "CoreType", "PointerStars", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -57,     8,    11,   -57,     2,    24,   -57,    11,   -57,     9,
     -57,     2,   -57,   -57,   -57,    22,    36,   -57,    11,    11,
       1,    44,    28,    55,   -57,    11,   -57,   -57,   -57,   -57,
      56,    44,   -57,    11,   -57,   -57,    11,    31,   -19,   -57,
      49,    62,    70,   -57,    72,   -57,   -19,   -57,   -57,   -57,
      58,   -57,   -57,    64,    48,    -5,    75,    -5,    73,   -57,
     -57,   -57,    51,    68,    78,    -5,    57,    -5,    60,   -57,
     -57,   -57,   -57,    79,    46,   -57,    -5,    50,   -57,   -57,
      80,   -57,    71,    41,   -57,    54,   -57,   -57,   -57,   -57,
     -57,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,    -5,
      -5,    81,   -57,    82,   -57,    64,   -57,   -57,   -57,    41,
      41,   -57,   -57,    18,    18,    18,    18,    18,    18,   -57,
      61,    74,   -57,   -57,   -57,    89,   -57,   -57,    -5,    14,
      82,   -57
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     4,     1,    74,     0,     3,     4,     6,     0,
      71,    74,    73,    72,     5,     0,     0,    75,     9,     9,
       0,    12,     0,     0,    14,     0,    10,    11,    14,     8,
       0,    12,     7,    18,    13,    15,    18,     0,    27,    19,
      22,     0,     0,    33,     0,    16,    27,    31,    32,    30,
      37,    29,    20,     0,     0,     0,     0,     0,     0,    28,
      38,    21,     0,     0,     0,     0,     0,     0,     0,    65,
      69,    67,    61,     0,    48,    62,     0,    49,    17,    14,
      24,    23,     0,    60,    64,     0,    63,    66,    70,    68,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,    39,     0,    36,    55,    14,    56,
      57,    58,    59,    45,    46,    47,    44,    43,    42,    34,
       0,     0,    26,    41,    14,     0,    50,    35,     0,    52,
       0,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,   -57,    94,   -57,   -57,    84,    83,    76,   -28,
     -57,   -57,   -57,    69,   -57,   -57,   -57,    -1,   -57,    63,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,    30,
     -57,   -57,   -20,   -57,   -56,   -57,   -57,   -57,   -57,    12,
     106,   101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,    20,    21,    26,    29,
      30,    38,    58,    35,    36,    61,    53,    63,   105,    45,
      46,    47,    56,   124,    48,    49,    79,    50,   108,    73,
      51,   103,   121,   130,    74,    75,    87,    89,    88,    22,
      10,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    77,    65,    66,    41,    42,    67,    43,     3,    83,
      11,    85,    15,    24,     9,     4,     5,    68,    44,     9,
      91,    92,    93,    94,    91,    92,    93,    94,     4,    69,
      70,    71,    72,    18,   -53,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,    37,    16,    19,    37,    93,
      94,   104,    91,    92,    93,    94,    91,    92,    93,    94,
      91,    92,    93,    94,    25,    27,   107,    28,    40,    33,
      52,   102,   129,    54,    95,    96,    97,    98,    99,   100,
     123,    55,    57,    60,    62,    64,    76,    78,    80,    81,
      82,    90,   106,   119,    84,   126,   127,    86,   125,   128,
     -25,    14,   120,    23,   122,    39,   101,    34,    31,    59,
     131,    13,    17
};

static const yytype_uint8 yycheck[] =
{
      28,    57,     7,     8,    23,    24,    11,    26,     0,    65,
       8,    67,     3,    12,     2,     4,     5,    22,    37,     7,
       6,     7,     8,     9,     6,     7,     8,     9,     4,    34,
      35,    36,    37,    11,    20,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    33,    37,    11,    36,     8,
       9,    79,     6,     7,     8,     9,     6,     7,     8,     9,
       6,     7,     8,     9,    20,    37,    12,    12,    37,    13,
      21,    21,   128,    11,    28,    29,    30,    31,    32,    33,
     108,    11,    10,    25,    20,    37,    11,    14,    37,    21,
      12,    12,    21,    12,    37,    21,   124,    37,    37,    10,
      20,     7,    20,    19,   105,    36,    76,    31,    25,    46,
     130,     5,    11
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,    41,     0,     4,     5,    42,    43,    44,    78,
      79,     8,    80,    79,    42,     3,    37,    80,    11,    11,
      45,    46,    78,    45,    12,    20,    47,    37,    12,    48,
      49,    46,    48,    13,    47,    52,    53,    78,    50,    52,
      37,    23,    24,    26,    37,    58,    59,    60,    63,    64,
      66,    69,    21,    55,    11,    11,    61,    10,    51,    58,
      25,    54,    20,    56,    37,     7,     8,    11,    22,    34,
      35,    36,    37,    68,    73,    74,    11,    73,    14,    65,
      37,    21,    12,    73,    37,    73,    37,    75,    77,    76,
      12,     6,     7,     8,     9,    28,    29,    30,    31,    32,
      33,    68,    21,    70,    48,    57,    21,    12,    67,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    12,
      20,    71,    56,    48,    62,    37,    21,    48,    10,    73,
      72,    71
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    41,    40,    42,    42,    43,    43,    44,    45,
      45,    46,    47,    47,    49,    50,    51,    48,    52,    52,
      54,    53,    55,    53,    56,    57,    56,    58,    58,    59,
      59,    59,    59,    61,    62,    60,    63,    64,    65,    64,
      67,    66,    68,    68,    68,    68,    68,    68,    68,    70,
      69,    69,    71,    72,    71,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    75,    74,    76,    74,    77,
      74,    78,    78,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     2,     1,     6,     6,     0,
       2,     2,     0,     3,     0,     0,     0,     7,     0,     2,
       0,     4,     0,     5,     2,     0,     4,     0,     2,     1,
       1,     1,     1,     0,     0,     7,     5,     1,     0,     4,
       0,     6,     3,     3,     3,     3,     3,     3,     1,     0,
       6,     4,     4,     0,     6,     3,     3,     3,     3,     3,
       2,     1,     1,     2,     2,     0,     2,     0,     2,     0,
       2,     1,     2,     2,     0,     2
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
#line 96 "compiler.y"
        {printf("Starting to parse the file\n");}
#line 1495 "y.tab.c"
    break;

  case 8:
#line 114 "compiler.y"
    {printf("Finished to parse main function\n");}
#line 1501 "y.tab.c"
    break;

  case 10:
#line 121 "compiler.y"
        {printf("params have been parsed\n");}
#line 1507 "y.tab.c"
    break;

  case 14:
#line 135 "compiler.y"
        {printf("Starting to parse body\n");}
#line 1513 "y.tab.c"
    break;

  case 15:
#line 136 "compiler.y"
                         {printf("Finished declarations\n");}
#line 1519 "y.tab.c"
    break;

  case 16:
#line 136 "compiler.y"
                                                                          {printf("Finished instructions\n");}
#line 1525 "y.tab.c"
    break;

  case 17:
#line 137 "compiler.y"
        {printf("Finished Body\n");}
#line 1531 "y.tab.c"
    break;

  case 20:
#line 148 "compiler.y"
                                  {add_symbol((yyvsp[-1].var),(yyvsp[-2].typeInfos));}
#line 1537 "y.tab.c"
    break;

  case 21:
#line 149 "compiler.y"
        {printf("Parsed a declaration\n");}
#line 1543 "y.tab.c"
    break;

  case 22:
#line 151 "compiler.y"
                       {add_symbol((yyvsp[0].var),(yyvsp[-1].typeInfos));
                        g_typeInfos = (yyvsp[-1].typeInfos);
                        }
#line 1551 "y.tab.c"
    break;

  case 23:
#line 155 "compiler.y"
        {printf("Parsed a (multiple) declaration\n");}
#line 1557 "y.tab.c"
    break;

  case 24:
#line 159 "compiler.y"
                        {add_symbol((yyvsp[0].var),g_typeInfos);}
#line 1563 "y.tab.c"
    break;

  case 25:
#line 161 "compiler.y"
                        {add_symbol((yyvsp[0].var),g_typeInfos);}
#line 1569 "y.tab.c"
    break;

  case 33:
#line 184 "compiler.y"
           {
                int line_number = get_line_number();
                (yyvsp[0].duo)[0] = line_number+1;
                // $1[0] now contains the start line of the compare statement evaluation
            }
#line 1579 "y.tab.c"
    break;

  case 34:
#line 189 "compiler.y"
                        {
                                    int compare_result_adress = pop_temp_table();
                                    sprintf(instr,"JMF %d", compare_result_adress);
                                    int line_index = write_in_array(instr);
                                    (yyvsp[-4].duo)[1] = line_index;
                                    // and we suppose the compare statement to be one assembly line only
                                }
#line 1591 "y.tab.c"
    break;

  case 35:
#line 196 "compiler.y"
         {
            int line_number = get_line_number();
            patch((yyvsp[-6].duo)[1], line_number+2);
            // + 2 because we want it to jump after the following JMP instruction
            sprintf(instr,"JMP %d", (yyvsp[-6].duo)[0]);
            // $1[0] because we want to jump back to the start of compare statement evaluation,
            // that is the current line when tWhile is parsed.
            write_in_array(instr);
        }
#line 1605 "y.tab.c"
    break;

  case 36:
#line 211 "compiler.y"
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
#line 1620 "y.tab.c"
    break;

  case 37:
#line 226 "compiler.y"
                  {
                    //That part can't be managed in IfPattern because we don't 
                    // know about if there is a else or not (line_number +1 / 2)
                    int line_number = get_line_number();
                    patch((yyvsp[0].nb), line_number+1);
                    // + 1 is here because we want jmf to jump to the instruction after the if body end.
                    }
#line 1632 "y.tab.c"
    break;

  case 38:
#line 234 "compiler.y"
                        {
                            int line_number = get_line_number();
                            patch((yyvsp[-1].nb), line_number+2);
                            sprintf(instr,"JMP");
                            int line_index = write_in_array(instr);
                            (yyvsp[-1].nb) = line_index;
                        }
#line 1644 "y.tab.c"
    break;

  case 39:
#line 241 "compiler.y"
             {
                int line_number = get_line_number();
                patch((yyvsp[-3].nb), line_number+1);
            }
#line 1653 "y.tab.c"
    break;

  case 40:
#line 249 "compiler.y"
                                {
                                    int compare_result_adress = pop_temp_table();
                                    sprintf(instr,"JMF %d", compare_result_adress);
                                    int line_index = write_in_array(instr);
                                    (yyvsp[-3].nb) = line_index;
                                    // IfPattern return where is the if instruction, in case of else
                                    // We stock the value of line, so that we can patch the correct if statement when body is parsed.
                                }
#line 1666 "y.tab.c"
    break;

  case 41:
#line 257 "compiler.y"
             {(yyval.nb) = (yyvsp[-5].nb);}
#line 1672 "y.tab.c"
    break;

  case 42:
#line 262 "compiler.y"
                                                   {
                                                        int adr1 = pop_temp_table();
                                                        int adr2 = pop_temp_table();
                                                        int adr_result = queryAdress_temp_table();
                                                        sprintf(instr,"EQU %d %d %d", adr_result, adr2, adr1);
                                                        write_in_array(instr);
                                                    }
#line 1684 "y.tab.c"
    break;

  case 43:
#line 270 "compiler.y"
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
#line 1709 "y.tab.c"
    break;

  case 44:
#line 291 "compiler.y"
                                                {
                                                    int adr1 = pop_temp_table();
                                                    int adr2 = pop_temp_table();
                                                    int adr_result = queryAdress_temp_table();
                                                    sprintf(instr,"SUP %d %d %d", adr_result, adr2, adr1);
                                                    // adr2 then adr1 because the first popped is the last encountered
                                                    // So that, a > b produces a stack with b on top.
                                                    write_in_array(instr);
                                                }
#line 1723 "y.tab.c"
    break;

  case 45:
#line 301 "compiler.y"
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
#line 1743 "y.tab.c"
    break;

  case 46:
#line 317 "compiler.y"
                                             {
                                                int adr1 = pop_temp_table();
                                                int adr2 = pop_temp_table();
                                                int adr_result = queryAdress_temp_table();
                                                sprintf(instr,"INF %d %d %d", adr_result, adr2, adr1);
                                                write_in_array(instr);
                        
                                            }
#line 1756 "y.tab.c"
    break;

  case 47:
#line 326 "compiler.y"
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
#line 1776 "y.tab.c"
    break;

  case 48:
#line 342 "compiler.y"
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
#line 1798 "y.tab.c"
    break;

  case 49:
#line 364 "compiler.y"
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
#line 1819 "y.tab.c"
    break;

  case 51:
#line 382 "compiler.y"
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
#line 1838 "y.tab.c"
    break;

  case 52:
#line 400 "compiler.y"
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
#line 1857 "y.tab.c"
    break;

  case 53:
#line 415 "compiler.y"
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
#line 1876 "y.tab.c"
    break;

  case 56:
#line 436 "compiler.y"
                                    {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "ADD %d %d %d",dest, adr1, adr2 );
                                        write_in_array(instr);
                                    }
#line 1888 "y.tab.c"
    break;

  case 57:
#line 444 "compiler.y"
                                     {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "SOU %d %d %d",dest, adr2, adr1 );
                                        write_in_array(instr);
                                    }
#line 1900 "y.tab.c"
    break;

  case 58:
#line 452 "compiler.y"
                                   {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "MUL %d %d %d",dest, adr1, adr2 );
                                        write_in_array(instr);
                                    }
#line 1912 "y.tab.c"
    break;

  case 59:
#line 460 "compiler.y"
                                   {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "DIV %d %d %d",dest, adr2, adr1 );
                                        write_in_array(instr);
                                    }
#line 1924 "y.tab.c"
    break;

  case 60:
#line 468 "compiler.y"
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
#line 1940 "y.tab.c"
    break;

  case 61:
#line 480 "compiler.y"
                  {
                    int dest = queryAdress_temp_table();
                    int sym_adr = get_symbol_adress((yyvsp[0].var));
                    sprintf(instr, "COP %d %d", dest, sym_adr);
                    write_in_array(instr);
                }
#line 1951 "y.tab.c"
    break;

  case 62:
#line 487 "compiler.y"
              {
                int adr = queryAdress_temp_table();
                sprintf(instr, "AFC %d %d", adr, (yyvsp[0].nb) );
                write_in_array(instr);
            }
#line 1961 "y.tab.c"
    break;

  case 63:
#line 493 "compiler.y"
                         {
                            int dest = queryAdress_temp_table();
                            int var_adr = get_symbol_adress((yyvsp[0].var));
                            sprintf(instr, "AFC %d %d", dest, var_adr);
                            write_in_array(instr);
                        }
#line 1972 "y.tab.c"
    break;

  case 64:
#line 500 "compiler.y"
                       {    int unreferenced_value = queryAdress_temp_table();
                            int dest = queryAdress_temp_table();
                            int sym_adr = get_symbol_adress((yyvsp[0].var));
                            // We copy the value at tVariable adress into temp table
                            sprintf(instr, "COP %d %d", dest, sym_adr);
                            write_in_array(instr);
                            // We don't need dest anymore
                            pop_temp_table();
                            // And then, we COP in tempTable the value at the adress present in temp table
                            sprintf(instr, "COP %d %d", unreferenced_value, dest);
                            write_in_array(instr);
                        }
#line 1989 "y.tab.c"
    break;

  case 65:
#line 516 "compiler.y"
                {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 1995 "y.tab.c"
    break;

  case 66:
#line 516 "compiler.y"
                                                             {(yyval.nb)=(yyvsp[-1].nb);}
#line 2001 "y.tab.c"
    break;

  case 67:
#line 518 "compiler.y"
              {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 2007 "y.tab.c"
    break;

  case 68:
#line 518 "compiler.y"
                                                           {(yyval.nb)=(yyvsp[-1].nb);}
#line 2013 "y.tab.c"
    break;

  case 69:
#line 520 "compiler.y"
                 {printf("Parsed number, value is %d\n",(yyvsp[0].nb));}
#line 2019 "y.tab.c"
    break;

  case 70:
#line 520 "compiler.y"
                                                              {(yyval.nb)=(yyvsp[-1].nb);}
#line 2025 "y.tab.c"
    break;

  case 71:
#line 524 "compiler.y"
                 {(yyval.typeInfos) = (yyvsp[0].typeInfos);}
#line 2031 "y.tab.c"
    break;

  case 72:
#line 526 "compiler.y"
                        { TypeInfos ans = {.type = (yyvsp[0].typeInfos).type, .ptr_level = (yyvsp[0].typeInfos).ptr_level, .constantness = true};
                            // Single line declaration, such as $$ = {...} doesnt work
                          (yyval.typeInfos) = ans; }
#line 2039 "y.tab.c"
    break;

  case 73:
#line 532 "compiler.y"
                          {TypeInfos ans = {.type = INT, .ptr_level = (yyvsp[0].nb), .constantness = false}; 
                          (yyval.typeInfos) = ans;}
#line 2046 "y.tab.c"
    break;

  case 74:
#line 537 "compiler.y"
                 {(yyval.nb)=0;}
#line 2052 "y.tab.c"
    break;

  case 75:
#line 539 "compiler.y"
                          {(yyval.nb) = 1 + (yyvsp[0].nb);}
#line 2058 "y.tab.c"
    break;


#line 2062 "y.tab.c"

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
#line 542 "compiler.y"


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

