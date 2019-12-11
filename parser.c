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
#line 1 "parser.y" /* yacc.c:339  */

#include <iostream>
#include <string>

#include "tree.h"
#include "lex.c"
using namespace std;
node_t* root;


void yyerror(const char *msg) {
	cout << "Error at line: " << line << ", column: " << col << endl;
	cerr << msg << endl;
}

#line 82 "parser.c" /* yacc.c:339  */

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
   by #include "parser.h".  */
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
#line 17 "parser.y" /* yacc.c:355  */

  node_t* val;

#line 184 "parser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "parser.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   525

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    69,    72,    73,    76,    77,    78,    81,
      82,    85,    86,    89,    90,    93,    96,    97,   100,   101,
     104,   105,   106,   109,   111,   112,   115,   116,   119,   121,
     122,   125,   126,   129,   130,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   145,   146,   148,   149,
     151,   152,   155,   156,   159,   160,   163,   164,   165,   168,
     169,   170,   171,   172,   173,   174,   175,   178,   179,   180,
     183,   184,   187,   188,   191,   192,   195,   197,   198,   201,
     203,   204,   207,   208,   211,   212,   215,   216,   217,   220,
     221,   222,   222,   222,   222,   222,   223,   223,   223,   223,
     223,   223
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MOD", "AND", "OR", "G", "L", "GE", "LE",
  "NEQ", "NOT", "ADD", "SUB", "MUL", "DIV", "ID", "DEF", "EQ", "INTEGER",
  "REAL", "STRING", "WHILE", "DO", "RETURN", "IF", "ELSIF", "ELSE", "FOR",
  "TO", "BY", "LARRAY", "RARRAY", "EXIT", "THEN", "LOOP", "PROGRAM", "IS",
  "SEMI", "BEGINE", "END", "VAR", "TYPE", "PROCEDURE", "READ", "DOT", "OF",
  "COM", "WRITE", "ARRAY", "RECORD", "COLON", "LS", "RS", "LP", "RP",
  "LPAREN", "RPAREN", "$accept", "program", "body", "declaration_list",
  "declaration", "var-decl_list", "var-decl", "type-decl_list",
  "type-decl", "procedure-decl_list", "procedure-decl", "type",
  "component", "component_list", "formal-params", "fp-section",
  "fp-section_list", "id_list", "statement_list", "statement",
  "elsif_list", "else-statement", "by-statement", "write-params",
  "write-params_list", "write-expr", "expression", "lvalue", "lvalue_list",
  "actual-params", "expression_list", "comp-values", "comp-values_list",
  "array-values", "array-value_list", "array-value", "number", "unary-op",
  "binary-op", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

#define YYPACT_NINF -112

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-112)))

#define YYTABLE_NINF -59

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,    32,    51,  -112,  -112,    29,   101,  -112,  -112,  -112,
    -112,  -112,  -112,   278,    62,    65,    82,    45,   150,   100,
     150,    93,    80,  -112,  -112,    69,    72,  -112,     3,  -112,
    -112,    84,  -112,    74,  -112,    46,    85,  -112,  -112,  -112,
      -7,  -112,  -112,   150,   486,    70,  -112,   150,  -112,   211,
     415,   109,  -112,   292,   118,    15,    98,   150,   123,   150,
      53,    30,    -1,   -12,  -112,   507,  -112,   150,   129,  -112,
    -112,  -112,     4,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,  -112,  -112,  -112,  -112,  -112,  -112,   150,   507,  -112,
    -112,   150,   108,  -112,    70,  -112,  -112,  -112,   507,    48,
    -112,   230,  -112,    79,   150,   131,    30,  -112,   102,   138,
     119,  -112,  -112,  -112,  -112,    30,    49,   195,  -112,   147,
    -112,   313,   507,   334,   468,  -112,    60,    67,  -112,  -112,
     247,  -112,   151,    30,   116,  -112,  -112,    -9,     6,   133,
     135,   150,  -112,   150,    28,   150,   136,   150,   146,   150,
     118,   141,   139,  -112,  -112,   150,  -112,    30,    14,    30,
     161,  -112,  -112,  -112,   507,   507,  -112,   150,   266,  -112,
     432,  -112,   140,   449,    70,  -112,  -112,   283,   143,  -112,
    -112,  -112,  -112,   144,  -112,   167,   130,  -112,   369,   148,
     150,   165,  -112,  -112,  -112,   173,  -112,   369,  -112,   507,
    -112,   150,   348,   507,   153,  -112
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     1,     0,     0,     2,    33,     9,
      13,    16,     5,     0,     6,     7,     8,    67,     0,     0,
       0,     0,     0,    33,     3,     0,     0,    34,     0,    31,
      10,     0,    14,     0,    17,     0,     0,    88,    86,    87,
      67,    84,    85,     0,     0,    60,    59,     0,    45,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,    74,    38,     0,     0,    64,
      65,    66,     0,    93,    95,    94,    96,    97,    98,    99,
     101,    89,    90,    91,    92,   100,    33,     0,    63,    44,
      33,     0,     0,    67,    70,    56,    53,    54,    57,    59,
      35,     0,    69,     0,     0,     0,     0,    20,     0,     0,
       0,    31,    27,    29,     4,     0,     0,    83,    80,     0,
      61,     0,    62,    46,     0,    41,     0,     0,    37,    68,
       0,    32,     0,     0,     0,    24,    15,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,     0,    48,     0,
       0,     0,     0,    52,    12,     0,    21,     0,     0,     0,
       0,    26,    19,     4,    75,    82,    79,     0,    77,    40,
       0,    33,     0,    50,    71,    36,    55,     0,     0,    22,
      25,    28,    30,     0,    81,     0,     0,    33,    49,     0,
       0,     0,    11,    23,    18,     0,    76,    47,    39,    51,
      33,     0,     0,    78,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -112,  -112,  -111,  -112,  -112,  -112,  -112,  -112,  -112,  -112,
    -112,   -83,    34,  -112,  -112,    33,  -112,    83,   -22,  -112,
    -112,  -112,  -112,  -112,  -112,    44,   -14,   -13,  -112,   157,
    -112,  -112,  -112,  -112,  -112,    55,   -53,  -112,  -112
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,     6,    12,    14,    30,    15,    32,    16,
      34,   110,   135,   158,    63,   113,   138,    60,    13,    27,
     148,   172,   191,    56,   127,    97,    98,    45,   126,    36,
     116,    70,   186,    71,   144,   118,    46,    47,    87
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    53,    99,   139,    44,    49,    50,    73,    74,    75,
      76,    77,    78,    79,    80,   111,    81,    82,    83,    84,
      57,    65,    85,   132,    67,   114,    37,    38,    39,    72,
     134,    40,   140,    88,    41,    42,    95,     1,   105,   115,
      28,    94,   159,   101,   160,   103,   107,    68,    58,    35,
     156,     4,   183,   117,   179,    59,   112,    37,    38,    39,
     166,   120,    40,   161,   121,    41,    42,     7,   123,     3,
     104,    43,    96,   122,   178,   167,   181,   124,    29,   108,
     109,    31,    73,    74,    75,    76,    77,    78,    79,    80,
     130,    81,    82,    83,    84,   -58,   141,    85,    33,    99,
     105,    35,    43,    64,   106,   -58,   142,   150,    28,    51,
      28,    37,    38,    39,   152,    58,    40,   151,    52,    41,
      42,    61,    59,    66,   153,    54,    91,   164,    55,   165,
      62,   168,   129,   170,    93,   173,   100,   174,    48,   102,
       8,   177,     9,    10,    11,   119,   125,   131,   133,   188,
      37,    38,    39,   117,   134,    40,    43,   136,    41,    42,
      95,    37,    38,    39,   145,   197,    40,   157,   155,    41,
      42,   162,   163,   171,   169,    28,   199,   111,   202,   175,
     189,   193,   194,   195,    28,   196,   198,   203,   200,    28,
     201,   205,   180,   182,   137,    43,   176,    69,    73,    74,
      75,    76,    77,    78,    79,    80,    43,    81,    82,    83,
      84,     0,     0,    85,    73,    74,    75,    76,    77,    78,
      79,    80,   184,    81,    82,    83,    84,     0,     0,    85,
       0,     0,     0,    73,    74,    75,    76,    77,    78,    79,
      80,   143,    81,    82,    83,    84,     0,     0,    85,    89,
      73,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,     0,     0,    85,     0,     0,   128,    73,
      74,    75,    76,    77,    78,    79,    80,     0,    81,    82,
      83,    84,     0,     0,    85,   154,    73,    74,    75,    76,
      77,    78,    79,    80,    17,    81,    82,    83,    84,     0,
      18,    85,    19,    20,   185,     0,    21,     0,    17,     0,
       0,    22,     0,    23,    18,     0,    19,    20,    24,     0,
      21,   192,    25,     0,     0,    22,    26,    23,     0,    17,
       0,     0,    92,     0,     0,    18,    25,    19,    20,     0,
      26,    21,     0,     0,     0,     0,    22,     0,    23,     0,
      17,     0,     0,   146,     0,     0,    18,    25,    19,    20,
     147,    26,    21,     0,    17,     0,     0,    22,     0,    23,
      18,     0,    19,    20,     0,     0,    21,     0,    25,     0,
       0,    22,    26,    23,     0,    17,     0,     0,   204,     0,
       0,    18,    25,    19,    20,     0,    26,    21,     0,     0,
       0,     0,    22,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,    26,    73,    74,
      75,    76,    77,    78,    79,    80,     0,    81,    82,    83,
      84,     0,     0,    85,     0,    73,    74,    75,    76,    77,
      78,    79,    80,     0,    81,    82,    83,    84,     0,    90,
      85,     0,    73,    74,    75,    76,    77,    78,    79,    80,
       0,    81,    82,    83,    84,     0,   187,    85,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,   190,
      81,    82,    83,    84,     0,     0,    85,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,   149,    81,    82,
      83,    84,     0,     0,    85,     0,     0,     0,     0,    86,
      73,    74,    75,    76,    77,    78,    79,    80,     0,    81,
      82,    83,    84,     0,     0,    85
};

static const yytype_int16 yycheck[] =
{
      13,    23,    55,   114,    18,    19,    20,     3,     4,     5,
       6,     7,     8,     9,    10,    16,    12,    13,    14,    15,
      17,    35,    18,   106,    31,    37,    11,    12,    13,    43,
      16,    16,   115,    47,    19,    20,    21,    36,    47,    51,
      53,    54,    51,    57,    38,    59,    16,    54,    45,    56,
     133,     0,   163,    67,    40,    52,    57,    11,    12,    13,
      32,    57,    16,    57,    86,    19,    20,    38,    90,    37,
      17,    56,    57,    87,   157,    47,   159,    91,    16,    49,
      50,    16,     3,     4,     5,     6,     7,     8,     9,    10,
     104,    12,    13,    14,    15,    47,    47,    18,    16,   152,
      47,    56,    56,    57,    51,    57,    57,    47,   121,    16,
     123,    11,    12,    13,    47,    45,    16,    57,    38,    19,
      20,    37,    52,    38,    57,    56,    17,   141,    56,   143,
      56,   145,    53,   147,    16,   149,    38,   150,    38,    16,
      39,   155,    41,    42,    43,    16,    38,    16,    46,   171,
      11,    12,    13,   167,    16,    16,    56,    38,    19,    20,
      21,    11,    12,    13,    17,   187,    16,    51,    17,    19,
      20,    38,    37,    27,    38,   188,   190,    16,   200,    38,
      40,    38,    38,    16,   197,    55,    38,   201,    23,   202,
      17,    38,   158,   160,   111,    56,   152,    40,     3,     4,
       5,     6,     7,     8,     9,    10,    56,    12,    13,    14,
      15,    -1,    -1,    18,     3,     4,     5,     6,     7,     8,
       9,    10,   167,    12,    13,    14,    15,    -1,    -1,    18,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    46,    12,    13,    14,    15,    -1,    -1,    18,    38,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    -1,    -1,    18,    -1,    -1,    38,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    -1,    -1,    18,    38,     3,     4,     5,     6,
       7,     8,     9,    10,    16,    12,    13,    14,    15,    -1,
      22,    18,    24,    25,    38,    -1,    28,    -1,    16,    -1,
      -1,    33,    -1,    35,    22,    -1,    24,    25,    40,    -1,
      28,    38,    44,    -1,    -1,    33,    48,    35,    -1,    16,
      -1,    -1,    40,    -1,    -1,    22,    44,    24,    25,    -1,
      48,    28,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
      16,    -1,    -1,    40,    -1,    -1,    22,    44,    24,    25,
      26,    48,    28,    -1,    16,    -1,    -1,    33,    -1,    35,
      22,    -1,    24,    25,    -1,    -1,    28,    -1,    44,    -1,
      -1,    33,    48,    35,    -1,    16,    -1,    -1,    40,    -1,
      -1,    22,    44,    24,    25,    -1,    48,    28,    -1,    -1,
      -1,    -1,    33,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    48,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    -1,    34,
      18,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    -1,    34,    18,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    30,
      12,    13,    14,    15,    -1,    -1,    18,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    29,    12,    13,
      14,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    -1,    -1,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    59,    37,     0,    60,    61,    38,    39,    41,
      42,    43,    62,    76,    63,    65,    67,    16,    22,    24,
      25,    28,    33,    35,    40,    44,    48,    77,    85,    16,
      64,    16,    66,    16,    68,    56,    87,    11,    12,    13,
      16,    19,    20,    56,    84,    85,    94,    95,    38,    84,
      84,    16,    38,    76,    56,    56,    81,    17,    45,    52,
      75,    37,    56,    72,    57,    84,    38,    31,    54,    87,
      89,    91,    84,     3,     4,     5,     6,     7,     8,     9,
      10,    12,    13,    14,    15,    18,    23,    96,    84,    38,
      34,    17,    40,    16,    85,    21,    57,    83,    84,    94,
      38,    84,    16,    84,    17,    47,    51,    16,    49,    50,
      69,    16,    57,    73,    37,    51,    88,    84,    93,    16,
      57,    76,    84,    76,    84,    38,    86,    82,    38,    53,
      84,    16,    69,    46,    16,    70,    38,    75,    74,    60,
      69,    47,    57,    46,    92,    17,    40,    26,    78,    29,
      47,    57,    47,    57,    38,    17,    69,    51,    71,    51,
      38,    57,    38,    37,    84,    84,    32,    47,    84,    38,
      84,    27,    79,    84,    85,    38,    83,    84,    69,    40,
      70,    69,    73,    60,    93,    38,    90,    34,    76,    40,
      30,    80,    38,    38,    38,    16,    55,    76,    38,    84,
      23,    17,    76,    84,    40,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    61,    61,    62,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    67,    67,    68,    68,
      69,    69,    69,    70,    71,    71,    72,    72,    73,    74,
      74,    75,    75,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    83,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      86,    86,    87,    87,    88,    88,    89,    90,    90,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    95,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     4,     0,     2,     2,     2,     2,     0,
       2,     7,     5,     0,     2,     4,     0,     2,     7,     5,
       1,     3,     4,     4,     0,     2,     4,     2,     4,     0,
       3,     0,     3,     0,     2,     3,     6,     4,     3,     8,
       6,     4,    11,     2,     3,     2,     0,     4,     0,     2,
       0,     2,     4,     2,     0,     3,     1,     1,     1,     1,
       1,     3,     3,     2,     2,     2,     2,     1,     4,     3,
       0,     3,     2,     4,     0,     3,     6,     0,     4,     4,
       0,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#line 66 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("program", "",line,col); (yyval.val)->append((yyvsp[-1].val)); root = (yyval.val); }
#line 1491 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 69 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("body", "",line,col); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-1].val)); }
#line 1497 "parser.c" /* yacc.c:1646  */
    break;

  case 4:
#line 72 "parser.y" /* yacc.c:1646  */
    { (yyval.val) =NULL; }
#line 1503 "parser.c" /* yacc.c:1646  */
    break;

  case 5:
#line 73 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("declaration_list", "", line,col); (yyval.val)->appendChildren((yyvsp[-1].val));(yyval.val)->append((yyvsp[0].val)); }
#line 1509 "parser.c" /* yacc.c:1646  */
    break;

  case 6:
#line 76 "parser.y" /* yacc.c:1646  */
    {(yyval.val)  = create_node("declaration","", line,col); (yyval.val)->append((yyvsp[0].val)); }
#line 1515 "parser.c" /* yacc.c:1646  */
    break;

  case 7:
#line 77 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("declaration", "",line,col); (yyval.val)->append((yyvsp[0].val));}
#line 1521 "parser.c" /* yacc.c:1646  */
    break;

  case 8:
#line 78 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("declaration","",line,col); (yyval.val)->append((yyvsp[0].val)); }
#line 1527 "parser.c" /* yacc.c:1646  */
    break;

  case 9:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = NULL; }
#line 1533 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 82 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("var-decl_list", "",line,col); (yyval.val)->appendChildren((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1539 "parser.c" /* yacc.c:1646  */
    break;

  case 11:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("var-decl", "", line,col); (yyval.val)->append((yyvsp[-6].val)); (yyval.val)->appendChildren((yyvsp[-5].val)); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-1].val));}
#line 1545 "parser.c" /* yacc.c:1646  */
    break;

  case 12:
#line 86 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("var-decl", "", line,col); (yyval.val)->append((yyvsp[-4].val)); (yyval.val)->appendChildren((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-1].val)); }
#line 1551 "parser.c" /* yacc.c:1646  */
    break;

  case 13:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = NULL; }
#line 1557 "parser.c" /* yacc.c:1646  */
    break;

  case 14:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("type-decl_list", "",line,col); (yyval.val)->appendChildren((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1563 "parser.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("type-decl", "",line,col); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-1].val));}
#line 1569 "parser.c" /* yacc.c:1646  */
    break;

  case 16:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = NULL; }
#line 1575 "parser.c" /* yacc.c:1646  */
    break;

  case 17:
#line 97 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("procedure-decl_list", "",line,col); (yyval.val)->appendChildren((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1581 "parser.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("procedure-decl", "",line,col); (yyval.val)->append((yyvsp[-6].val)); (yyval.val)->append((yyvsp[-5].val)); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-1].val));}
#line 1587 "parser.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("procedure-decl", "",line,col); (yyval.val)->append((yyvsp[-4].val)); (yyval.val)->append((yyvsp[-3].val));(yyval.val)->append((yyvsp[-1].val)); }
#line 1593 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 104 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("type",(yyvsp[0].val)->info,line,col); (yyval.val)->append((yyvsp[0].val)); }
#line 1599 "parser.c" /* yacc.c:1646  */
    break;

  case 21:
#line 105 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("type","",line,col); (yyval.val)->append((yyvsp[0].val)); }
#line 1605 "parser.c" /* yacc.c:1646  */
    break;

  case 22:
#line 106 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("type","",line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->appendChildren((yyvsp[-1].val)); }
#line 1611 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 109 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("component","",line,col); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-1].val)); }
#line 1617 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 112 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("component_list", "",line,col); (yyval.val)->appendChildren((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1623 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 115 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("formal-params", "",line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->appendChildren((yyvsp[-1].val)); }
#line 1629 "parser.c" /* yacc.c:1646  */
    break;

  case 27:
#line 116 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("formal-params", "",line,col);}
#line 1635 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 119 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("fp-section", "",line,col); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->appendChildren((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1641 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 122 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("fp-section+list", "",line,col); (yyval.val)->appendChildren((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1647 "parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 125 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = NULL; }
#line 1653 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 126 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("id_list","",line,col); (yyval.val)->appendChildren((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1659 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 129 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = NULL; }
#line 1665 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 130 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement_list","",line,col); (yyval.val)->appendChildren((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1671 "parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 133 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); (yyval.val)->append((yyvsp[-1].val)); }
#line 1677 "parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 134 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->appendChildren((yyvsp[-2].val)); }
#line 1683 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 135 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-1].val));}
#line 1689 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 136 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->append((yyvsp[-1].val)); }
#line 1695 "parser.c" /* yacc.c:1646  */
    break;

  case 39:
#line 137 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("statement","",line,col); (yyval.val)->append((yyvsp[-6].val)); (yyval.val)->appendChildren((yyvsp[-4].val)); (yyval.val)->appendChildren((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-2].val)); }
#line 1701 "parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 138 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("statement","",line,col);(yyval.val)->append((yyvsp[-4].val));(yyval.val)->appendChildren((yyvsp[-2].val)); }
#line 1707 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 139 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); (yyval.val)->appendChildren((yyvsp[-2].val)); }
#line 1713 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 140 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); (yyval.val)->append((yyvsp[-9].val)); (yyval.val)->append((yyvsp[-7].val)); (yyval.val)->append((yyvsp[-5].val)); (yyval.val)->append((yyvsp[-4].val)); (yyval.val)->appendChildren((yyvsp[-2].val)); }
#line 1719 "parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 141 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); }
#line 1725 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 142 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); (yyval.val)->append((yyvsp[-1].val)); }
#line 1731 "parser.c" /* yacc.c:1646  */
    break;

  case 45:
#line 143 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("statement","",line,col); }
#line 1737 "parser.c" /* yacc.c:1646  */
    break;

  case 47:
#line 146 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("elsif_list","",line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->appendChildren((yyvsp[0].val));}
#line 1743 "parser.c" /* yacc.c:1646  */
    break;

  case 49:
#line 149 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("else-statement","",line,col); (yyval.val)->appendChildren((yyvsp[0].val));}
#line 1749 "parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 152 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("by-statement","",line,col); (yyval.val)->append((yyvsp[0].val)); }
#line 1755 "parser.c" /* yacc.c:1646  */
    break;

  case 52:
#line 155 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("write-params", "",line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->appendChildren((yyvsp[-1].val)); }
#line 1761 "parser.c" /* yacc.c:1646  */
    break;

  case 53:
#line 156 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("write-params", "",line,col);}
#line 1767 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 159 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = NULL;}
#line 1773 "parser.c" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("write-params_list", "",line,col); (yyval.val)->appendChildren((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1779 "parser.c" /* yacc.c:1646  */
    break;

  case 56:
#line 163 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("write-expr", "",line,col); (yyval.val)->append((yyvsp[0].val));}
#line 1785 "parser.c" /* yacc.c:1646  */
    break;

  case 57:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("write-expr", "",line,col); (yyval.val)->append((yyvsp[0].val)); }
#line 1791 "parser.c" /* yacc.c:1646  */
    break;

  case 58:
#line 165 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("write-expr", "",line,col); (yyval.val)->append((yyvsp[0].val));}
#line 1797 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 168 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("expression", "", line,col); (yyval.val)->append((yyvsp[0].val)); (yyval.val)->info = (yyvsp[0].val)->info; }
#line 1803 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 169 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("expression", "", line,col); (yyval.val)->append((yyvsp[0].val)); (yyval.val)->info = (yyvsp[0].val)->info; }
#line 1809 "parser.c" /* yacc.c:1646  */
    break;

  case 61:
#line 170 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("expression", "", line,col); (yyval.val)->append((yyvsp[-1].val)); (yyval.val)->info = "(" + (yyvsp[-1].val)->info + ")";}
#line 1815 "parser.c" /* yacc.c:1646  */
    break;

  case 62:
#line 171 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("expression", "", line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->append((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val)); (yyval.val)->info = (yyvsp[-2].val)->info+(yyvsp[-1].val)->info+(yyvsp[0].val)->info; }
#line 1821 "parser.c" /* yacc.c:1646  */
    break;

  case 63:
#line 172 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("expression", "", line,col); (yyval.val)->append((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val));(yyval.val)->info = (yyvsp[-1].val)->info+(yyvsp[0].val)->info;}
#line 1827 "parser.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("expression", "", line,col); (yyval.val)->append((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val));(yyval.val)->info = (yyvsp[-1].val)->info+(yyvsp[0].val)->info;}
#line 1833 "parser.c" /* yacc.c:1646  */
    break;

  case 65:
#line 174 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("expression", "", line,col); (yyval.val)->append((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val));(yyval.val)->info = (yyvsp[-1].val)->info+(yyvsp[0].val)->info;}
#line 1839 "parser.c" /* yacc.c:1646  */
    break;

  case 66:
#line 175 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("expression", "", line,col); (yyval.val)->append((yyvsp[-1].val)); (yyval.val)->append((yyvsp[0].val));(yyval.val)->info = (yyvsp[-1].val)->info+(yyvsp[0].val)->info;}
#line 1845 "parser.c" /* yacc.c:1646  */
    break;

  case 67:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("lvalue",(yyvsp[0].val)->info,line,col); (yyval.val)->append((yyvsp[0].val));}
#line 1851 "parser.c" /* yacc.c:1646  */
    break;

  case 68:
#line 179 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("lvalue", "", line,col); (yyval.val)->append((yyvsp[-3].val)); (yyval.val)->append((yyvsp[-1].val));(yyval.val)->info = (yyvsp[-3].val)->info+ "[" + (yyvsp[-1].val)->info+ "]";}
#line 1857 "parser.c" /* yacc.c:1646  */
    break;

  case 69:
#line 180 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("lvalue", "", line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val));(yyval.val)->info = (yyvsp[-2].val)->info+"."+(yyvsp[0].val)->info;}
#line 1863 "parser.c" /* yacc.c:1646  */
    break;

  case 70:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = NULL; }
#line 1869 "parser.c" /* yacc.c:1646  */
    break;

  case 71:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("lvalue_list", "",line,col); (yyval.val)->appendChildren((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1875 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 187 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("actual-params", "", line,col);}
#line 1881 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("actual-params", "", line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->appendChildren((yyvsp[-1].val)); }
#line 1887 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 191 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = NULL; }
#line 1893 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 192 "parser.y" /* yacc.c:1646  */
    {(yyval.val) = create_node("expression_list", "", line,col);(yyval.val)->appendChildren((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1899 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("comp-values", "", line,col); (yyval.val)->info = "{"+(yyvsp[-4].val)->info+":="+ (yyvsp[-2].val)->info+"}";}
#line 1905 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 198 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("comp-values_list", "", line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1911 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 201 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("array_values","", line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->appendChildren((yyvsp[-1].val)); }
#line 1917 "parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("array_values_list","", line,col); (yyval.val)->appendChildren((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1923 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 207 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("array_value","", line,col); (yyval.val)->append((yyvsp[-2].val)); (yyval.val)->append((yyvsp[0].val)); }
#line 1929 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 208 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = create_node("array_value","", line,col); (yyval.val)->append((yyvsp[0].val)); }
#line 1935 "parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1941 "parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1947 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 215 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1953 "parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1959 "parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 217 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1965 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 220 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1971 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1977 "parser.c" /* yacc.c:1646  */
    break;

  case 91:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1983 "parser.c" /* yacc.c:1646  */
    break;

  case 92:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1989 "parser.c" /* yacc.c:1646  */
    break;

  case 93:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 1995 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 2001 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 2007 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 2013 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 2019 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 2025 "parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 2031 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 2037 "parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = (yyvsp[0].val); }
#line 2043 "parser.c" /* yacc.c:1646  */
    break;


#line 2047 "parser.c" /* yacc.c:1646  */
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
      yyerror (YY_("ohoh,syntax error~"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
	cout<<"test the position parser.c 2104 48"<<endl;
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
#line 225 "parser.y" /* yacc.c:1906  */

