/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    MOD = 258,
    AND = 259,
    OR = 260,
    G = 261,
    L = 262,
    GE = 263,
    LE = 264,
    NEQ = 265,
    NOT = 266,
    ADD = 267,
    SUB = 268,
    MUL = 269,
    DIV = 270,
    ID = 271,
    DEF = 272,
    EQ = 273,
    INTEGER = 274,
    REAL = 275,
    STRING = 276,
    WHILE = 277,
    DO = 278,
    RETURN = 279,
    IF = 280,
    ELSIF = 281,
    ELSE = 282,
    FOR = 283,
    TO = 284,
    BY = 285,
    LARRAY = 286,
    RARRAY = 287,
    EXIT = 288,
    THEN = 289,
    LOOP = 290,
    PROGRAM = 291,
    IS = 292,
    SEMI = 293,
    BEGINE = 294,
    END = 295,
    VAR = 296,
    TYPE = 297,
    PROCEDURE = 298,
    READ = 299,
    DOT = 300,
    OF = 301,
    COM = 302,
    WRITE = 303,
    ARRAY = 304,
    RECORD = 305,
    COLON = 306,
    LS = 307,
    RS = 308,
    LP = 309,
    RP = 310,
    LPAREN = 311,
    RPAREN = 312
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "parser.y" /* yacc.c:1909  */

  node_t* val;

#line 116 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
