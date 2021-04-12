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
    tSpace = 270,
    tBackN = 271,
    tBackT = 272,
    tVirg = 273,
    tPointVirg = 274,
    tEsper = 275,
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
#define tPO 266
#define tPF 267
#define tAO 268
#define tAF 269
#define tSpace 270
#define tBackN 271
#define tBackT 272
#define tVirg 273
#define tPointVirg 274
#define tEsper 275
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
#line 21 "compiler.y"

    char * var;
    int nb;
    int duo[2];
    float fl_nb;
    TypeInfos typeInfos;

#line 137 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
