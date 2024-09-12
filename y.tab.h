/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INICIO = 258,                /* T_INICIO  */
    T_FIM = 259,                   /* T_FIM  */
    T_PROGRAMA = 260,              /* T_PROGRAMA  */
    T_LEIA = 261,                  /* T_LEIA  */
    T_ESCREVA = 262,               /* T_ESCREVA  */
    T_ENQTO = 263,                 /* T_ENQTO  */
    T_FACA = 264,                  /* T_FACA  */
    T_FIMENQTO = 265,              /* T_FIMENQTO  */
    T_SE = 266,                    /* T_SE  */
    T_ENTAO = 267,                 /* T_ENTAO  */
    T_SENAO = 268,                 /* T_SENAO  */
    T_FIMSE = 269,                 /* T_FIMSE  */
    T_ATRIB = 270,                 /* T_ATRIB  */
    T_NAO = 271,                   /* T_NAO  */
    T_ABRE = 272,                  /* T_ABRE  */
    T_FECHA = 273,                 /* T_FECHA  */
    T_E = 274,                     /* T_E  */
    T_OU = 275,                    /* T_OU  */
    T_IGUAL = 276,                 /* T_IGUAL  */
    T_MAIOR = 277,                 /* T_MAIOR  */
    T_MENOR = 278,                 /* T_MENOR  */
    T_MAIS = 279,                  /* T_MAIS  */
    T_MENOS = 280,                 /* T_MENOS  */
    T_VEZES = 281,                 /* T_VEZES  */
    T_DIV = 282,                   /* T_DIV  */
    UMINUS = 283,                  /* UMINUS  */
    T_LOGICO = 284,                /* T_LOGICO  */
    T_INTEIRO = 285,               /* T_INTEIRO  */
    T_NUMERO = 286,                /* T_NUMERO  */
    T_V = 287,                     /* T_V  */
    T_F = 288,                     /* T_F  */
    T_IDENTIF = 289                /* T_IDENTIF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_INICIO 258
#define T_FIM 259
#define T_PROGRAMA 260
#define T_LEIA 261
#define T_ESCREVA 262
#define T_ENQTO 263
#define T_FACA 264
#define T_FIMENQTO 265
#define T_SE 266
#define T_ENTAO 267
#define T_SENAO 268
#define T_FIMSE 269
#define T_ATRIB 270
#define T_NAO 271
#define T_ABRE 272
#define T_FECHA 273
#define T_E 274
#define T_OU 275
#define T_IGUAL 276
#define T_MAIOR 277
#define T_MENOR 278
#define T_MAIS 279
#define T_MENOS 280
#define T_VEZES 281
#define T_DIV 282
#define UMINUS 283
#define T_LOGICO 284
#define T_INTEIRO 285
#define T_NUMERO 286
#define T_V 287
#define T_F 288
#define T_IDENTIF 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "sintatico.y"

    int ival;
    char* name;

#line 140 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
