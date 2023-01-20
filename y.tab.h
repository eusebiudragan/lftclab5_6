/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     MAIN = 258,
     IF = 259,
     ELSE = 260,
     WHILE = 261,
     FOR = 262,
     ID = 263,
     NUMBER_CONST = 264,
     ZERO_CONST = 265,
     STRING_CONST = 266,
     INT = 267,
     STRING = 268,
     CHAR = 269,
     FLOAT = 270,
     BOOL = 271,
     WRITE = 272,
     READ = 273,
     ASSIG = 274,
     NE = 275,
     GE = 276,
     LE = 277,
     OR = 278,
     AND = 279,
     ATR = 280,
     EQ = 281
   };
#endif
/* Tokens.  */
#define MAIN 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define FOR 262
#define ID 263
#define NUMBER_CONST 264
#define ZERO_CONST 265
#define STRING_CONST 266
#define INT 267
#define STRING 268
#define CHAR 269
#define FLOAT 270
#define BOOL 271
#define WRITE 272
#define READ 273
#define ASSIG 274
#define NE 275
#define GE 276
#define LE 277
#define OR 278
#define AND 279
#define ATR 280
#define EQ 281




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "lab56.y"
{
    int l_val;
    char *p_val;
}
/* Line 1529 of yacc.c.  */
#line 106 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

