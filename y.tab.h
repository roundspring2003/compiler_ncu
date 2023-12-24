/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLU = 258,
     MIN = 259,
     MUL = 260,
     DIV = 261,
     MOD = 262,
     GRE = 263,
     SMA = 264,
     EQU = 265,
     LEP = 266,
     RIP = 267,
     PRN = 268,
     PRB = 269,
     SPA = 270,
     OR = 271,
     AND = 272,
     NOT = 273,
     DE = 274,
     FNN = 275,
     FI = 276,
     TRUE = 277,
     FALSE = 278,
     NUM = 279,
     ID = 280
   };
#endif
/* Tokens.  */
#define PLU 258
#define MIN 259
#define MUL 260
#define DIV 261
#define MOD 262
#define GRE 263
#define SMA 264
#define EQU 265
#define LEP 266
#define RIP 267
#define PRN 268
#define PRB 269
#define SPA 270
#define OR 271
#define AND 272
#define NOT 273
#define DE 274
#define FNN 275
#define FI 276
#define TRUE 277
#define FALSE 278
#define NUM 279
#define ID 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 74 "final.y"

    int num;
    char* str;



/* Line 1685 of yacc.c  */
#line 108 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


