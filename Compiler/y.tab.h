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

#line 141 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
