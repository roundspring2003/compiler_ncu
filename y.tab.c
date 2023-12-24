/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "final.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
int yywrap(void);
void set_numnode(int val,int type);
int get_numnode();
void set_boolnode(int val,int type);
int get_boolnode();
void set_variable(char* name,int val);
int get_var(char* name);
void set_fun(char* name);
void set_param(char* name);
void insert(char* data);
int eval();


int temp1;
int temp2;

int exp_number;
int bool_number;

int funtion;

typedef struct Num_Node {
    int value;
    int type;
    struct Num_Node *ptr;
} num_node;

num_node *num_ptr = NULL;

typedef struct Bool_Node {
    int word;
    int type;
    struct Bool_Node *ptr;
} bool_node;

bool_node *bool_ptr = NULL;

typedef struct Var_Node {
    char* name;
    int val;
    struct Var_Node *ptr;
} var_node;

var_node *var_ptr = NULL;

typedef struct Par_Node {
    char* name;
    int val;
    struct Par_Node *ptr;
} par_node;

typedef struct Fun_Node {
    char* name;
    par_node parameter[99];
    char* cal[99];
    int param_number;
    int top;
    int val;
    struct Fun_Node *ptr;
} fun_node;

fun_node *fun_ptr=NULL;




/* Line 189 of yacc.c  */
#line 146 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 74 "final.y"

    int num;
    char* str;



/* Line 214 of yacc.c  */
#line 239 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 251 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  26
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  174

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    11,    13,    15,    17,    19,
      21,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    44,    53,    61,    62,    71,    79,    87,    95,   103,
     111,   112,   121,   122,   131,   137,   147,   151,   153,   154,
     156,   160,   162,   164,   165,   166,   174,   175,   176,   184,
     185,   186,   194,   195,   196,   204,   205,   206,   214,   218,
     220,   221,   222,   233,   239,   244,   250,   256
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      27,     0,    -1,    27,    28,    -1,    28,    -1,    29,    15,
      -1,    15,    -1,    31,    -1,    56,    -1,    57,    -1,    31,
      -1,    30,    15,    31,    -1,    24,    -1,    22,    -1,    23,
      -1,    25,    -1,    32,    -1,    35,    -1,    55,    -1,    53,
      -1,    38,    -1,    -1,    11,     3,    33,    15,    31,    15,
      30,    12,    -1,    11,     4,    15,    31,    15,    31,    12,
      -1,    -1,    11,     5,    34,    15,    31,    15,    30,    12,
      -1,    11,     6,    15,    31,    15,    31,    12,    -1,    11,
       7,    15,    31,    15,    31,    12,    -1,    11,     8,    15,
      31,    15,    31,    12,    -1,    11,     9,    15,    31,    15,
      31,    12,    -1,    11,    10,    15,    31,    15,    31,    12,
      -1,    -1,    11,    36,    17,    15,    31,    15,    30,    12,
      -1,    -1,    11,    37,    16,    15,    31,    15,    30,    12,
      -1,    11,    18,    15,    31,    12,    -1,    11,    21,    15,
      31,    15,    31,    15,    31,    12,    -1,    39,    15,    39,
      -1,    25,    -1,    -1,    41,    -1,    41,    15,    40,    -1,
      24,    -1,    25,    -1,    -1,    -1,    11,    42,     3,    43,
      15,    40,    12,    -1,    -1,    -1,    11,    44,     4,    45,
      15,    40,    12,    -1,    -1,    -1,    11,    46,     7,    47,
      15,    40,    12,    -1,    -1,    -1,    11,    48,     5,    49,
      15,    40,    12,    -1,    -1,    -1,    11,    50,     6,    51,
      15,    40,    12,    -1,    52,    15,    31,    -1,    31,    -1,
      -1,    -1,    11,    20,    54,    15,    11,    39,    12,    15,
      40,    12,    -1,    11,    53,    15,    52,    12,    -1,    11,
      25,    52,    12,    -1,    11,    13,    15,    31,    12,    -1,
      11,    14,    15,    31,    12,    -1,    11,    19,    15,    25,
      15,    31,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    85,    85,    86,    89,    90,    93,    94,    95,    98,
      99,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     113,   113,   124,   125,   125,   135,   136,   137,   147,   157,
     169,   169,   179,   179,   194,   206,   218,   219,   220,   222,
     223,   225,   226,   227,   227,   227,   228,   228,   228,   229,
     229,   229,   230,   230,   230,   231,   231,   231,   234,   235,
     236,   239,   239,   241,   242,   258,   259,   269
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLU", "MIN", "MUL", "DIV", "MOD", "GRE",
  "SMA", "EQU", "LEP", "RIP", "PRN", "PRB", "SPA", "OR", "AND", "NOT",
  "DE", "FNN", "FI", "TRUE", "FALSE", "NUM", "ID", "$accept", "program",
  "line", "stmt", "exps", "exp", "num_op", "$@1", "$@2", "log_op", "$@3",
  "$@4", "if_exp", "fun_id", "fes", "fe", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "expm", "fun_exp", "$@15",
  "fun_call", "prtstmt", "defstmt", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    26,    27,    27,    28,    28,    29,    29,    29,    30,
      30,    31,    31,    31,    31,    31,    31,    31,    31,    31,
      33,    32,    32,    34,    32,    32,    32,    32,    32,    32,
      36,    35,    37,    35,    35,    38,    39,    39,    39,    40,
      40,    41,    41,    42,    43,    41,    44,    45,    41,    46,
      47,    41,    48,    49,    41,    50,    51,    41,    52,    52,
      52,    54,    53,    55,    55,    56,    56,    57
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     8,     7,     0,     8,     7,     7,     7,     7,     7,
       0,     8,     0,     8,     5,     9,     3,     1,     0,     1,
       3,     1,     1,     0,     0,     7,     0,     0,     7,     0,
       0,     7,     0,     0,     7,     0,     0,     7,     3,     1,
       0,     0,    10,     5,     4,     5,     5,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    30,     5,    12,    13,    11,    14,     0,     3,     0,
       6,    15,    16,    19,    18,    17,     7,     8,    20,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,    60,     0,     0,     0,     1,     2,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,    59,     0,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    34,
       0,    38,     0,    58,     0,     0,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     9,    22,     0,    25,    26,    27,    28,    29,
      67,     0,    38,     0,     0,     0,    21,     0,    24,     0,
      36,     0,    31,    33,    10,    43,    41,    42,     0,    39,
      35,     0,     0,     0,     0,     0,    62,     0,    44,    47,
      50,    53,    56,    40,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
      48,    51,    54,    57
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,   111,   112,    11,    40,    42,    12,
      34,    35,    13,   107,   138,   139,   141,   154,   142,   155,
     143,   156,   144,   157,   145,   158,    56,    14,    52,    15,
      16,    17
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const yytype_int16 yypact[] =
{
      41,    90,  -140,  -140,  -140,  -140,  -140,     3,  -140,   -11,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   -10,
    -140,     2,     4,    16,    17,    23,    -5,    25,    43,    52,
      57,  -140,    58,    46,    44,    63,    59,  -140,  -140,  -140,
      72,    46,    74,    46,    46,    46,    46,    46,    46,    46,
      46,    77,    92,    46,   125,  -140,    -6,    97,    99,    46,
      46,   102,    46,   103,   104,   105,   106,   107,    93,   112,
     113,   111,   126,   123,  -140,    46,    46,    46,    -2,   124,
      46,   127,    46,    46,    46,    46,    46,  -140,  -140,  -140,
      46,   115,    46,  -140,   129,   132,  -140,    46,   136,    46,
     137,   139,   140,   141,   142,   143,  -140,    27,   144,    46,
      46,    39,  -140,  -140,    66,  -140,  -140,  -140,  -140,  -140,
    -140,   145,   115,    46,    76,   101,  -140,    46,  -140,     5,
    -140,   146,  -140,  -140,  -140,    30,  -140,  -140,   149,   147,
    -140,   153,   159,   150,   160,   158,  -140,     5,  -140,  -140,
    -140,  -140,  -140,  -140,   151,   152,   154,   155,   156,     5,
       5,     5,     5,     5,   161,   162,   163,   164,   165,  -140,
    -140,  -140,  -140,  -140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,   171,  -140,   -98,     0,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,    50,  -139,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,   109,     1,  -140,  -140,
    -140,  -140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      10,   114,    36,    37,    39,    41,    74,    10,   153,    75,
      96,   124,   125,    75,     1,    31,   135,    43,     2,    44,
     164,   165,   166,   167,   168,     3,     4,     5,     6,   136,
     137,    45,    46,    55,   -46,   -52,   -55,   -49,    47,   121,
      48,    61,   122,    63,    64,    65,    66,    67,    68,    69,
      70,   126,     1,    73,   127,    36,     2,    54,    49,    55,
      79,    57,    81,     3,     4,     5,     6,    50,     3,     4,
       5,     6,    51,    53,    59,    93,    94,    95,   128,    58,
      98,   127,   100,   101,   102,   103,   104,    60,   132,    62,
     105,   127,   108,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    71,    27,    28,    87,   -32,    72,    29,    30,
      31,    32,    76,   133,    77,    33,   127,    80,    82,    83,
      84,    85,    86,   131,    88,    89,    90,   134,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    91,    92,    97,
     106,   -32,    99,    29,   109,    31,    32,   110,   113,   115,
      33,   116,   117,   118,   119,   120,   148,   150,   140,   123,
     129,   146,   147,   149,   152,   151,   159,   160,    78,   161,
     162,   163,   130,   169,   170,   171,   172,   173,    38
};

static const yytype_uint8 yycheck[] =
{
       0,    99,     1,     0,    15,    15,    12,     7,   147,    15,
      12,   109,   110,    15,    11,    20,    11,    15,    15,    15,
     159,   160,   161,   162,   163,    22,    23,    24,    25,    24,
      25,    15,    15,    33,     4,     5,     6,     7,    15,    12,
      15,    41,    15,    43,    44,    45,    46,    47,    48,    49,
      50,    12,    11,    53,    15,    54,    15,    11,    15,    59,
      60,    17,    62,    22,    23,    24,    25,    15,    22,    23,
      24,    25,    15,    15,    15,    75,    76,    77,    12,    16,
      80,    15,    82,    83,    84,    85,    86,    15,    12,    15,
      90,    15,    92,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    25,    13,    14,    12,    16,    15,    18,    19,
      20,    21,    15,    12,    15,    25,    15,    15,    15,    15,
      15,    15,    15,   123,    12,    12,    15,   127,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    11,    15,    15,
      25,    16,    15,    18,    15,    20,    21,    15,    12,    12,
      25,    12,    12,    12,    12,    12,     3,     7,    12,    15,
      15,    12,    15,     4,     6,     5,    15,    15,    59,    15,
      15,    15,   122,    12,    12,    12,    12,    12,     7
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    11,    15,    22,    23,    24,    25,    27,    28,    29,
      31,    32,    35,    38,    53,    55,    56,    57,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    13,    14,    18,
      19,    20,    21,    25,    36,    37,    53,     0,    28,    15,
      33,    15,    34,    15,    15,    15,    15,    15,    15,    15,
      15,    15,    54,    15,    11,    31,    52,    17,    16,    15,
      15,    31,    15,    31,    31,    31,    31,    31,    31,    31,
      31,    25,    15,    31,    12,    15,    15,    15,    52,    31,
      15,    31,    15,    15,    15,    15,    15,    12,    12,    12,
      15,    11,    15,    31,    31,    31,    12,    15,    31,    15,
      31,    31,    31,    31,    31,    31,    25,    39,    31,    15,
      15,    30,    31,    12,    30,    12,    12,    12,    12,    12,
      12,    12,    15,    15,    30,    30,    12,    15,    12,    15,
      39,    31,    12,    12,    31,    11,    24,    25,    40,    41,
      12,    42,    44,    46,    48,    50,    12,    15,     3,     4,
       7,     5,     6,    40,    43,    45,    47,    49,    51,    15,
      15,    15,    15,    15,    40,    40,    40,    40,    40,    12,
      12,    12,    12,    12
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 11:

/* Line 1464 of yacc.c  */
#line 102 "final.y"
    {set_numnode((yyvsp[(1) - (1)].num),exp_number);}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 103 "final.y"
    {set_boolnode(1,bool_number);}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 104 "final.y"
    {set_boolnode(0,bool_number);}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 105 "final.y"
    {set_numnode(get_var((yyvsp[(1) - (1)].str)),exp_number);}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 113 "final.y"
    {exp_number++;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 113 "final.y"
    {
                                                                int type=num_ptr->type;
                                                                temp2=get_numnode();
                                                                exp_number--;
                                                                while(num_ptr!=NULL && type==num_ptr->type && type != 0){
                                                                    temp1=get_numnode();
                                                                    temp2+=temp1;
                                                                }
                                                                set_numnode(temp2,exp_number);
                                                                
                                                            }
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 124 "final.y"
    {temp1=get_numnode();temp2=get_numnode();set_numnode(temp2-temp1,exp_number);}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 125 "final.y"
    {exp_number++;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 125 "final.y"
    {   
                                                                int type=num_ptr->type;
                                                                temp2=get_numnode();
                                                                exp_number--;
                                                                while(num_ptr!=NULL && type==num_ptr->type && type != 0){
                                                                    temp1=get_numnode();
                                                                    temp2=temp1*temp2;
                                                                }
                                                                set_numnode(temp2,exp_number);
                                                            }
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 135 "final.y"
    {temp1=get_numnode();temp2=get_numnode();set_numnode(temp2/temp1,exp_number);}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 136 "final.y"
    {temp1=get_numnode();temp2=get_numnode();set_numnode(temp2%temp1,exp_number);}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 137 "final.y"
    {
                                                temp1=get_numnode();
                                                temp2=get_numnode();
                                                if(temp2>temp1){
                                                    set_boolnode(1,bool_number);
                                                }
                                                else{
                                                    set_boolnode(0,bool_number);
                                                }
                                            }
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 147 "final.y"
    {
                                                temp1=get_numnode();
                                                temp2=get_numnode();
                                                if(temp2<temp1){
                                                    set_boolnode(1,bool_number);
                                                }
                                                else{
                                                    set_boolnode(0,bool_number);
                                                }
                                            }
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 157 "final.y"
    {
                                                temp1=get_numnode();
                                                temp2=get_numnode();
                                                if(temp2==temp1){
                                                    set_boolnode(1,bool_number);
                                                }
                                                else{
                                                    set_boolnode(0,bool_number);
                                                }
                                            }
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 169 "final.y"
    {bool_number++;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 169 "final.y"
    {  //AND
                                                            int type=bool_ptr->type;
                                                            temp1=get_boolnode();
                                                            bool_number--;
                                                            while(bool_ptr!=NULL && type==bool_ptr->type && type != 0){
                                                                temp2=get_boolnode();
                                                                temp1=temp1*temp2;
                                                            }
                                                            set_boolnode(temp1,bool_number);
                                                        }
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 179 "final.y"
    {bool_number++;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 179 "final.y"
    {  //OR
                                                            int type=bool_ptr->type;
                                                            temp1=get_boolnode();
                                                            bool_number--;
                                                            while(bool_ptr!=NULL && type==bool_ptr->type && type != 0){
                                                                temp2=get_boolnode();
                                                                temp1=temp1+temp2;
                                                            }
                                                            if(temp1==0){
                                                                set_boolnode(0,bool_number);
                                                            }
                                                            else{
                                                                set_boolnode(1,bool_number);
                                                        }
                                                        }
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 194 "final.y"
    {  //NOT
                                                            int type=bool_ptr->type;
                                                            temp1=get_boolnode();
                                                            bool_number--;
                                                            if(temp1==0){
                                                                set_boolnode(1,bool_number);
                                                            }
                                                            else{
                                                                set_boolnode(0,bool_number);
                                                            }
                                                        }
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 206 "final.y"
    {
                                                    int test=get_boolnode();
                                                    int el=get_numnode();
                                                    int th=get_numnode();
                                                    if(test==1){
                                                        set_numnode(th,exp_number);
                                                    }
                                                    else{
                                                        set_numnode(el,exp_number);
                                                    }
                                                }
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 219 "final.y"
    {set_param((yyvsp[(1) - (1)].str));}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 225 "final.y"
    {char* str = (char*)malloc(20 * sizeof(char));sprintf(str,"%d",(yyvsp[(1) - (1)].num));insert(str);}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 226 "final.y"
    {insert((yyvsp[(1) - (1)].str));}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 227 "final.y"
    {insert("(");}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 227 "final.y"
    {insert("+");}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 227 "final.y"
    {insert(")");}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 228 "final.y"
    {insert("(");}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 228 "final.y"
    {insert("-");}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 228 "final.y"
    {insert(")");}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 229 "final.y"
    {insert("(");}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 229 "final.y"
    {insert("%");}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 229 "final.y"
    {insert(")");}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 230 "final.y"
    {insert("(");}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 230 "final.y"
    {insert("*");}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 230 "final.y"
    {insert(")");}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 231 "final.y"
    {insert("(");}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 231 "final.y"
    {insert("/");}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 231 "final.y"
    {insert(")");}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 239 "final.y"
    {set_fun("");}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 241 "final.y"
    {for(int i=fun_ptr->param_number-1;i>=0;i--){fun_ptr->parameter[i].val=get_numnode();}set_numnode(eval(fun_ptr),exp_number);}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 242 "final.y"
    {   
                                fun_node *temp=fun_ptr;
                                while(1){
                                    if(strcmp(temp->name, (yyvsp[(2) - (4)].str))==0){
                                        for(int i=temp->param_number-1;i>=0;i--){
                                            temp->parameter[i].val=get_numnode();
                                        }
                                        set_numnode(eval(temp),exp_number);
                                        break;
                                    }
                                    temp=temp->ptr;
                                }                                    
                            }
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 258 "final.y"
    {printf("%d\n",get_numnode());}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 259 "final.y"
    {
                                if(get_boolnode()==1){
                                    printf("#t\n");
                                }
                                else{
                                    printf("#f\n");
                                }
                              }
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 269 "final.y"
    {   
                                        if(funtion==1){
                                            fun_ptr->name=(yyvsp[(4) - (7)].str);
                                            funtion=0;
                                        }
                                        else{
                                            set_variable((yyvsp[(4) - (7)].str),get_numnode());
                                            
                                        }
                                    }
    break;



/* Line 1464 of yacc.c  */
#line 2013 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 283 "final.y"

void set_numnode(int val,int type){
    num_node *newnode=malloc(sizeof(num_node));
    newnode->value=val;
    newnode->type=type;
    newnode->ptr=num_ptr;
    num_ptr=newnode;
}
int get_numnode(){
    int t_value=num_ptr->value;
    num_node *t_node=num_ptr;
    num_ptr=num_ptr->ptr;
    free(t_node);
    return t_value;
}
void set_boolnode(int val,int type){
    bool_node *newnode=malloc(sizeof(bool_node));
    newnode->word=val;
    newnode->type=type;
    newnode->ptr=bool_ptr;
    bool_ptr=newnode;
}
int get_boolnode(){
    int t_word=bool_ptr->word;
    bool_node *t_node=bool_ptr;
    bool_ptr=bool_ptr->ptr;
    free(t_node);
    return t_word;
}
void set_variable(char* name,int val){
    var_node *newnode=malloc(sizeof(var_node));
    newnode->name=name;
    newnode->val=val;
    newnode->ptr=var_ptr;
    var_ptr=newnode;
}
int get_var(char* name){
    var_node *temp=var_ptr;
    while(temp!=NULL){
        if(strcmp(temp->name, name)==0){
            return temp->val;
        }
        temp=temp->ptr;
    }
}
void set_fun(char* name){
    fun_node *newnode=malloc(sizeof(fun_node));
    newnode->name=name;
    newnode->param_number=0;
    newnode->top=-1;
    newnode->ptr=fun_ptr;
    funtion=1;
    fun_ptr=newnode;
    
}
void set_param(char* name){
    fun_ptr->parameter[fun_ptr->param_number].name=name;
    fun_ptr->param_number++;
}
void insert(char* data){
    fun_ptr->top++;
    fun_ptr->cal[fun_ptr->top]=data;
}
int eval(fun_node *fun_ptr){
    int type=0;
    num_node stack[99];
    int stack_top=-1;
    for(int i=fun_ptr->top;i>=0;i--){
        bool found=false;
        if(fun_ptr->cal[i][0]=='+'){
            while(1){
                if(stack[stack_top-1].type!=type){
                    stack[stack_top].type=type-1;
                    break;
                }
                stack[stack_top-1].value=stack[stack_top].value+stack[stack_top-1].value;
                stack_top--;
            }
        }else if(fun_ptr->cal[i][0]=='-'){
            stack[stack_top-1].value=stack[stack_top].value-stack[stack_top-1].value;
            stack[stack_top-1].type--;
            stack_top--;
        }else if(fun_ptr->cal[i][0]=='/'){
            stack[stack_top-1].value=stack[stack_top].value/stack[stack_top-1].value;
            stack[stack_top-1].type--;
            stack_top--;
        }else if(fun_ptr->cal[i][0]=='%'){
            stack[stack_top-1].value=stack[stack_top].value%stack[stack_top-1].value;
            stack[stack_top-1].type--;
            stack_top--;
        }else if(fun_ptr->cal[i][0]=='*'){
            while(1){
                if(stack[stack_top-1].type!=type){
                    stack[stack_top].type=type-1;
                    break;
                }
                stack[stack_top-1].value=stack[stack_top].value*stack[stack_top-1].value;
                stack_top--;
            };
        }else if(fun_ptr->cal[i][0]=='('){
            type--;
        }else if(fun_ptr->cal[i][0]==')'){
            type++;
        }else{
            for(int j=0;j<fun_ptr->param_number;j++){
                if (strcmp(fun_ptr->parameter[j].name,fun_ptr->cal[i])==0){
                    stack_top++;
                    stack[stack_top].value=fun_ptr->parameter[j].val;
                    stack[stack_top].type=type;
                    found=true;
                    break;
                }
            }
            if(!found){
                stack_top++;
                stack[stack_top].value=atoi(fun_ptr->cal[i]);
                stack[stack_top].type=type;
            }
        }
    }
    return stack[0].value;
}
void yyerror(char *str){
    printf("syntax error\n");
    exit(0);
}

int yywrap(){
    return 1;
}
int main()
{
    yyparse();
    return 0;
}


