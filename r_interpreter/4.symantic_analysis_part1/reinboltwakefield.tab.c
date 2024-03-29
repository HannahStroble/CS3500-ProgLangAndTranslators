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
#line 35 "reinboltwakefield.y" /* yacc.c:339  */

#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stack>
#include "SymbolTable.h"

#define IS_ARITH			11
#define IS_LOGICAL		12
#define IS_REALATION	13


void printRule(const char *lhs, const char *rhs);
int yyerror(const char *s);
void printTokenInfo(const char* tokenType, const char* lexeme);
void endScope( );
void beginScope( );
bool findEntryInAnyScope(const string theName);
void printAddSymb(const string symbName, TYPE_INFO typeinfo);
void printUnDefinedError(const string symbName);
void printMulDefinedError(const string symbName);

int numLines = 1;
int comments = 0;
int spaces = 0;
stack<SYMBOL_TABLE> scopeStack;
//variable for debugging
bool deboog = false;


extern "C" {
	int yyparse(void);
	int yylex(void);
	int yywrap() {return 1;}
	}


#line 105 "reinboltwakefield.tab.c" /* yacc.c:339  */

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
    T_ASSIGN = 258,
    T_IF = 259,
    T_WHILE = 260,
    T_FUNCTION = 261,
    T_FOR = 262,
    T_IN = 263,
    T_NEXT = 264,
    T_BREAK = 265,
    T_TRUE = 266,
    T_FALSE = 267,
    T_QUIT = 268,
    T_PRINT = 269,
    T_CAT = 270,
    T_READ = 271,
    T_LIST = 272,
    T_COMMENT = 273,
    T_WSPACE = 274,
    T_COMMA = 275,
    T_LBRACE = 276,
    T_RBRACE = 277,
    T_LPAREN = 278,
    T_RBRACKET = 279,
    T_LBRACKET = 280,
    T_ADD = 281,
    T_SUB = 282,
    T_MULT = 283,
    T_DIV = 284,
    T_MOD = 285,
    T_POWER = 286,
    T_LT = 287,
    T_GT = 288,
    T_LE = 289,
    T_GE = 290,
    T_EQ = 291,
    T_NE = 292,
    T_NOT = 293,
    T_AND = 294,
    T_OR = 295,
    T_SEMICOLON = 296,
    T_STRCONST = 297,
    T_FLOATCONST = 298,
    T_LETTER = 299,
    T_DIGIT = 300,
    T_UNKNOWN = 301,
    T_INTCONST = 302,
    T_IDENT = 303,
    T_RPAREN = 304,
    T_ELSE = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 75 "reinboltwakefield.y" /* yacc.c:355  */

char* text;
TYPE_INFO typeInfo;
int num;

#line 199 "reinboltwakefield.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 216 "reinboltwakefield.tab.c" /* yacc.c:358  */

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   138

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   110,   117,   124,   131,   138,   145,   152,
     159,   166,   173,   180,   187,   196,   203,   210,   217,   224,
     232,   240,   248,   252,   256,   261,   277,   276,   291,   297,
     301,   307,   306,   338,   343,   347,   355,   370,   376,   382,
     381,   396,   403,   409,   413,   436,   460,   470,   474,   480,
     484,   488,   493,   520,   551,   588,   633,   640,   677,   721,
     728,   735,   742,   749,   757,   762,   767,   773,   778,   783,
     788,   793,   799,   803,   807,   811,   815,   819,   824,   831,
     839,   864
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ASSIGN", "T_IF", "T_WHILE",
  "T_FUNCTION", "T_FOR", "T_IN", "T_NEXT", "T_BREAK", "T_TRUE", "T_FALSE",
  "T_QUIT", "T_PRINT", "T_CAT", "T_READ", "T_LIST", "T_COMMENT",
  "T_WSPACE", "T_COMMA", "T_LBRACE", "T_RBRACE", "T_LPAREN", "T_RBRACKET",
  "T_LBRACKET", "T_ADD", "T_SUB", "T_MULT", "T_DIV", "T_MOD", "T_POWER",
  "T_LT", "T_GT", "T_LE", "T_GE", "T_EQ", "T_NE", "T_NOT", "T_AND", "T_OR",
  "T_SEMICOLON", "T_STRCONST", "T_FLOATCONST", "T_LETTER", "T_DIGIT",
  "T_UNKNOWN", "T_INTCONST", "T_IDENT", "T_RPAREN", "T_ELSE", "$accept",
  "N_START", "N_EXPR", "N_CONST", "N_COMPOUND_EXPR", "N_EXPR_LIST",
  "N_IF_EXPR", "N_WHILE_EXPR", "N_FOR_EXPR", "$@1", "N_LIST_EXPR",
  "N_CONST_LIST", "N_ASSIGNMENT_EXPR", "$@2", "N_INDEX", "N_QUIT_EXPR",
  "N_OUTPUT_EXPR", "N_INPUT_EXPR", "N_FUNCTION_DEF", "$@3", "N_PARAM_LIST",
  "N_NO_PARAMS", "N_PARAMS", "N_FUNCTION_CALL", "N_ARG_LIST", "N_NO_ARGS",
  "N_ARGS", "N_ARITHLOGIC_EXPR", "N_SIMPLE_ARITHLOGIC", "N_ADD_OP_LIST",
  "N_TERM", "N_MULT_OP_LIST", "N_FACTOR", "N_ADD_OP", "N_MULT_OP",
  "N_REL_OP", "N_VAR", "N_SINGLE_ELEMENT", "N_ENTIRE_VAR", YY_NULLPTR
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
     305
};
# endif

#define YYPACT_NINF -48

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define YYTABLE_NINF -35

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      10,   -20,   -17,   -48,   -14,   -48,   -48,    -3,    12,    13,
      14,    19,    10,    10,    -4,   -48,   -48,   -48,     7,    11,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,    38,   -22,    37,   -48,   -48,   -48,
      10,    10,    24,     1,     2,    10,    10,     6,    17,     9,
      20,    30,   -48,    10,    31,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,    -4,   -48,   -48,   -48,   -48,    -4,   -48,
     -48,   -48,   -48,   -48,   -48,    -4,    28,    29,    32,   -48,
     -48,    33,    34,    35,    41,    36,    10,    57,   -48,    56,
      67,    39,   -48,   -48,    10,    86,   -48,   -22,    37,    10,
      10,    70,    42,   -48,   -48,    84,   -48,   -48,   -48,    17,
     -48,     9,   -48,    10,    10,   -48,    69,    10,   -48,   -48,
      45,   -48,    32,    75,    10,   -48,   -48,    73,   -48,    74,
     -48,    10,   -48,   -48,    52,    78,   100,   -48,    10,   -48,
     -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    39,     0,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,    15,    81,     0,
       2,    61,     6,     3,     4,     5,    11,     8,    14,     9,
      10,    12,    13,     7,    52,    56,    59,    60,    79,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,    81,    63,    49,     0,    31,     1,    72,    73,    74,
      75,    76,    77,     0,    64,    65,    66,    54,     0,    67,
      68,    70,    71,    69,    57,     0,     0,     0,    43,    26,
      35,     0,     0,     0,    30,     0,     0,     0,    62,     0,
      50,     0,    48,    47,     0,     0,    53,    56,    59,     0,
       0,    44,     0,    42,    41,     0,    36,    37,    38,     0,
      28,    22,    20,     0,     0,    46,     0,     0,    55,    58,
      23,    25,     0,     0,     0,    29,    21,     0,    51,     0,
      32,     0,    45,    40,     0,     0,    80,    24,     0,    80,
      27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,     0,   -47,   -19,    -6,   -48,   -48,   -48,   -48,
     -48,    -2,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -16,   -48,   -48,   -48,    -5,   -48,    47,    15,
      40,    16,   -12,   -48,   -48,   -48,    64,   -48,   -48
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    19,    90,    21,    22,    87,    23,    24,    25,   105,
      26,    85,    27,    95,    55,    28,    29,    30,    31,    42,
     102,   103,   104,    32,    91,    92,    93,    33,    34,    67,
      35,    74,    36,    68,    75,    63,    37,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,    84,    52,    40,    64,    65,    41,     5,     6,    43,
     -34,    56,    49,    50,     1,     2,     3,     4,    66,    13,
      44,     5,     6,     7,     8,     9,    10,    11,     5,     6,
      53,    12,    54,    13,    14,    45,    46,    47,    15,    16,
      76,    77,    48,    17,    51,    81,    82,    78,    14,    79,
      86,    80,    15,    16,    51,    89,    94,    17,    18,    15,
      16,   109,    84,    98,    17,    69,    70,    71,    72,    88,
      57,    58,    59,    60,    61,    62,    73,    99,   100,   112,
     101,   113,   106,   107,   108,   110,   111,   114,   115,   117,
     122,   123,   124,   129,   116,   131,    12,   135,   136,   120,
     121,   138,   139,   -33,   133,   126,   132,   125,    97,   128,
      96,    83,   118,   127,   119,     0,     0,   130,     0,     0,
       0,     0,     0,     0,   134,     0,     0,     0,     0,     0,
       0,   137,     0,     0,     0,     0,     0,     0,   140
};

static const yytype_int16 yycheck[] =
{
       0,    48,    14,    23,    26,    27,    23,    11,    12,    23,
       3,     0,    12,    13,     4,     5,     6,     7,    40,    23,
      23,    11,    12,    13,    14,    15,    16,    17,    11,    12,
      23,    21,    25,    23,    38,    23,    23,    23,    42,    43,
      40,    41,    23,    47,    48,    45,    46,    23,    38,    48,
      41,    49,    42,    43,    48,    25,    25,    47,    48,    42,
      43,    20,   109,    75,    47,    28,    29,    30,    31,    49,
      32,    33,    34,    35,    36,    37,    39,    49,    49,    22,
      48,    25,    49,    49,    49,    49,    86,    20,    49,     3,
      20,    49,     8,    24,    94,    50,    21,    24,    24,    99,
     100,    49,    24,     3,   123,   111,   122,   109,    68,   114,
      63,    47,    97,   113,    98,    -1,    -1,   117,    -1,    -1,
      -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,   138
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,    11,    12,    13,    14,    15,
      16,    17,    21,    23,    38,    42,    43,    47,    48,    52,
      53,    54,    55,    57,    58,    59,    61,    63,    66,    67,
      68,    69,    74,    78,    79,    81,    83,    87,    88,    89,
      23,    23,    70,    23,    23,    23,    23,    23,    23,    53,
      53,    48,    83,    23,    25,    65,     0,    32,    33,    34,
      35,    36,    37,    86,    26,    27,    40,    80,    84,    28,
      29,    30,    31,    39,    82,    85,    53,    53,    23,    48,
      49,    53,    53,    87,    54,    62,    41,    56,    49,    25,
      53,    75,    76,    77,    25,    64,    79,    81,    83,    49,
      49,    48,    71,    72,    73,    60,    49,    49,    49,    20,
      49,    53,    22,    25,    20,    49,    53,     3,    80,    82,
      53,    53,    20,    49,     8,    62,    56,    53,    77,    24,
      53,    50,    73,    55,    53,    24,    24,    53,    49,    24,
      53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    54,    54,
      55,    56,    56,    57,    57,    58,    60,    59,    61,    62,
      62,    64,    63,    65,    65,    66,    67,    67,    68,    70,
      69,    71,    71,    72,    73,    73,    74,    75,    75,    76,
      77,    77,    78,    78,    79,    80,    80,    81,    82,    82,
      83,    83,    83,    83,    84,    84,    84,    85,    85,    85,
      85,    85,    86,    86,    86,    86,    86,    86,    87,    87,
      88,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     5,     7,     5,     0,     8,     4,     3,
       1,     0,     5,     5,     0,     3,     4,     4,     4,     0,
       6,     1,     1,     0,     1,     3,     4,     1,     1,     0,
       1,     3,     1,     3,     2,     3,     0,     2,     3,     0,
       1,     1,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     1
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
#line 103 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule ("START", "EXPR");
										endScope();
										if(deboog == true)
											printf("\n ---- Completed parsing ----\n\n");
										}
#line 1408 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "IF_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1419 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "WHILE_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1430 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 125 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "FOR_EXPR");
										(yyval.typeInfo).type = NOT_APPLICABLE;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1441 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 132 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "COMPOUND_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1452 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "ARITHLOGIC_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1463 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 146 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "ASSIGNMENT_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1474 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 153 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "OUTPUT_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1485 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 160 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "INPUT_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1496 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 167 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "LIST_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1507 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 174 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "FUNCTION_DEF");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1518 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 181 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "FUNCTION_CALL");
										(yyval.typeInfo).type = NOT_APPLICABLE;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1529 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 188 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR", "QUIT_EXPR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										exit(1);
										}
#line 1541 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 197 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("CONST", "INTCONST");
										(yyval.typeInfo).type = INT;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1552 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 204 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("CONST", "STRCONST");
										(yyval.typeInfo).type = STR;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1563 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 211 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("CONST", "FLOATCONST");
										(yyval.typeInfo).type = FLOAT;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1574 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 218 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("CONST", "TRUE");
										(yyval.typeInfo).type = BOOL;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1585 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 225 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("CONST", "FALSE");
										(yyval.typeInfo).type = BOOL;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1596 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 233 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("COMPOUND_EXPR", "{ EXPR EXPR_LIST }");
										(yyval.typeInfo).type = (yyvsp[-2].typeInfo).type;
										(yyval.typeInfo).numParams = (yyvsp[-2].typeInfo).numParams;
										(yyval.typeInfo).returnType = (yyvsp[-2].typeInfo).returnType;
										}
#line 1607 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 241 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR_LIST", "; EXPR EXPR_LIST");
										(yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
										(yyval.typeInfo).numParams = (yyvsp[-1].typeInfo).numParams;
										(yyval.typeInfo).returnType = (yyvsp[-1].typeInfo).returnType;
										}
#line 1618 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 248 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("EXPR_LIST", "epsilon");
										}
#line 1626 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 253 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("IF_EXPR", "IF ( EXPR ) EXPR");
										}
#line 1634 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 257 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("IF_EXPR", "IF ( EXPR ) EXPR ELSE EXPR");
										}
#line 1642 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 262 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("WHILE_EXPR", "WHILE ( EXPR ) EXPR");
											if(((yyvsp[-2].typeInfo).type == FUNCTION) || ((yyvsp[-2].typeInfo).type == NULL_TYPE) || ((yyvsp[-2].typeInfo).type == LIST) || ((yyvsp[-2].typeInfo).type == STR))
											{
												yyerror("Arg 1 cannot be function or null or list or string");
											}
											else
											{
												(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
												(yyval.typeInfo).numParams = (yyvsp[0].typeInfo).numParams;
												(yyval.typeInfo).returnType = (yyvsp[0].typeInfo).returnType;
											}
										}
#line 1660 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 277 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("FOR_EXPR", "FOR ( IDENT IN EXPR ) EXPR");
										// add T_IDENT to the most recent scope if it's not in one
										string lexeme = string((yyvsp[0].text));
										if(!scopeStack.top().findEntry(lexeme))
											{
											TYPE_INFO newType = {NULL_TYPE, NOT_APPLICABLE, NOT_APPLICABLE};
											newType.type = (scopeStack.top().findEntryData(lexeme)).type;
											printAddSymb(lexeme, newType);
											}
								}
#line 1676 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 292 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("LIST_EXPR", "LIST ( CONST_LIST )");
										(yyval.typeInfo).type = LIST;
										}
#line 1685 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 298 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("CONST_LIST", "CONST, CONST_LIST");
										}
#line 1693 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 302 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("CONST_LIST", "CONST");
										}
#line 1701 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 307 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										// add T_IDENT to the most recent scope if it's not in a scope
										printRule("ASSIGNMENT_EXPR", "IDENT INDEX ASSIGN EXPR");
										string lexeme = string((yyvsp[-1].text));
										if(!scopeStack.top().findEntry(lexeme))
											{
											TYPE_INFO newType = {NULL_TYPE, NOT_APPLICABLE, NOT_APPLICABLE};
											newType.type= scopeStack.top().findEntryData(lexeme).type;
											printAddSymb(lexeme, newType);
											}
										}
#line 1717 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 319 "reinboltwakefield.y" /* yacc.c:1646  */
    {
											if ((yyvsp[-3].typeInfo).type == NOT_APPLICABLE)
											{
												string lexeme = string((yyvsp[-4].text));
												if(!scopeStack.top().findEntry(lexeme))
												{
													TYPE_INFO newType = {NOT_APPLICABLE, NOT_APPLICABLE, NOT_APPLICABLE};
													printAddSymb(lexeme, newType);
												}
												yyerror("Arg 1 cannot be list");
											}
											else
											{
												(yyval.typeInfo).type = NOT_APPLICABLE;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
										}
#line 1740 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 339 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("INDEX", "[[ EXPR ]]");
										}
#line 1748 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 343 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("INDEX", "epsilon");
										}
#line 1756 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 348 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("QUIT_EXPR", "QUIT()");
										(yyval.typeInfo).type = NULL_TYPE;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1767 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 356 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("OUTPUT_EXPR", "PRINT ( EXPR )");
										if(((yyvsp[-1].typeInfo).type == FUNCTION) || ((yyvsp[-1].typeInfo).type == NULL_TYPE))
											{
												yyerror("Arg 1 cannot be function or null");
											}
											else
											{
												(yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
										}
#line 1785 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 371 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("OUTPUT_EXPR", "CAT ( EXPR )");
										(yyval.typeInfo).type = NULL_TYPE;
										}
#line 1794 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 377 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("INPUT_EXPR", "READ ( VAR )");
										}
#line 1802 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 382 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										// new symbol table
										beginScope();
										}
#line 1811 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 387 "reinboltwakefield.y" /* yacc.c:1646  */
    {
									printRule("FUNCTION_DEF", "FUNCTION ( PARAM_LIST ) COMPOUND_EXPR");
									(yyval.typeInfo).type = FUNCTION;
									(yyval.typeInfo).numParams = NOT_APPLICABLE;
									(yyval.typeInfo).returnType = NOT_APPLICABLE;
									//close the symbol table for this function
									endScope();
								}
#line 1824 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 397 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("PARAM_LIST", "PARAMS");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 1835 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 404 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("PARAM_LIST", "NO_PARAMS");
										}
#line 1843 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 409 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("NO_PARAMS", "epsilon");
										}
#line 1851 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 414 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("PARAMS", "IDENT");

										// add T_IDENT to the most recent scope if it's not in a scope
										string lexeme = string((yyvsp[0].text));
										if(findEntryInAnyScope(lexeme))
											{
											TYPE_INFO newType = {(yyval.typeInfo).type, (yyval.typeInfo).numParams, (yyval.typeInfo).returnType};
											printAddSymb(lexeme, newType);
											printMulDefinedError(lexeme);
											}
										// if it's not in a scope then add to recent scope
										else
											{
											TYPE_INFO newType = {(yyval.typeInfo).type, (yyval.typeInfo).numParams, (yyval.typeInfo).returnType};
											printAddSymb(lexeme, newType);
											(yyval.typeInfo).type = INT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
											(yyval.typeInfo).type = INT;
										}
#line 1878 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 437 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("PARAMS", "IDENT, PARAMS");
											(yyval.typeInfo).type = INT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										// add T_IDENT to the most recent scope if it's not in a scope
										string lexeme = string((yyvsp[-2].text));
										if(findEntryInAnyScope(lexeme))
											{
											TYPE_INFO newType = {(yyval.typeInfo).type, (yyval.typeInfo).numParams, (yyval.typeInfo).returnType};
											printAddSymb(lexeme, newType);
											printMulDefinedError(lexeme);
											}
										// if it's not in a scope then add to recent scope
										else
											{
											TYPE_INFO newType = {(yyval.typeInfo).type, (yyval.typeInfo).numParams, (yyval.typeInfo).returnType};
											printAddSymb(lexeme, newType);
											}
										(yyval.typeInfo).type = INT;

										}
#line 1905 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 461 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("FUNCTION_CALL", "IDENT ( ARG_LIST )");
										string lexeme = string((yyvsp[-3].text));
										if(!findEntryInAnyScope(lexeme))
											{
											printUnDefinedError(lexeme);
											}
										}
#line 1918 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 471 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ARG_LIST", "ARGS");
										}
#line 1926 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 475 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ARG_LIST", "NO_ARGS");
										}
#line 1934 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 480 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("NO_ARGS", "epsilon");
										}
#line 1942 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 485 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ARGS", "EXPR");
										}
#line 1950 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 489 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ARGS", "EXPR, ARGS");
										}
#line 1958 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 494 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ARITHLOGIC_EXPR", "SIMPLE_ARITHLOGIC");

										if((yyvsp[0].typeInfo).type == NOT_APPLICABLE)
										{
											yyerror("Arg 11 must be integer or float or bool");
										}
										else if(((yyvsp[0].typeInfo).type == IS_ARITH) && ((yyvsp[0].typeInfo).type != FLOAT))
										{
											(yyval.typeInfo).type = INT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else if((yyvsp[0].typeInfo).type == FLOAT)
										{
											(yyval.typeInfo).type = FLOAT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else if(((yyvsp[0].typeInfo).type == IS_LOGICAL) || ((yyvsp[0].typeInfo).type == IS_REALATION))
										{
											(yyval.typeInfo).type = BOOL;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										}
#line 1989 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 521 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ARITHLOGIC_EXPR", "SIMPLE_ARITHLOGIC REL_OP SIMPLE_ARITHLOGIC");
										if(((yyvsp[-2].typeInfo).type == NOT_APPLICABLE) || ((yyvsp[0].typeInfo).type == NOT_APPLICABLE))
										{
											yyerror("Arg 3 must be integer or float or bool");
										}
										else if(((yyvsp[-2].typeInfo).type == IS_ARITH) && ((yyvsp[0].typeInfo).type == IS_ARITH))
										{
											(yyval.typeInfo).type = INT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else if(((yyvsp[-2].typeInfo).type == FLOAT) || ((yyvsp[0].typeInfo).type == FLOAT))
										{
											(yyval.typeInfo).type = FLOAT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else if(((yyvsp[-2].typeInfo).type == IS_LOGICAL) || ((yyvsp[-2].typeInfo).type == IS_REALATION) || ((yyvsp[0].typeInfo).type == IS_LOGICAL) || ((yyvsp[0].typeInfo).type == IS_REALATION))
										{
											(yyval.typeInfo).type = BOOL;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else
										{
											yyerror("Arg 4 must be integer or float or bool");
										}
										}
#line 2023 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 552 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("SIMPLE_ARITHLOGIC", "TERM ADD_OP_LIST");
										// add a rule here
										if(((yyvsp[0].typeInfo).type == NOT_APPLICABLE))
										{
											if((yyvsp[-1].typeInfo).type != NOT_APPLICABLE)
											{
												(yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
											else
											{
												yyerror("Arg 5 must be integer or float or bool");
											}
										}
										else if (((yyvsp[0].typeInfo).type == IS_ARITH) || ((yyvsp[-1].typeInfo).type == IS_ARITH))
										{
											(yyval.typeInfo).type = INT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else if (((yyvsp[0].typeInfo).type == IS_LOGICAL) || ((yyvsp[-1].typeInfo).type == IS_LOGICAL))
										{
											(yyval.typeInfo).type = BOOL;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else
										{
											(yyval.typeInfo).type = FLOAT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										}
#line 2063 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 589 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ADD_OP_LIST", "ADD_OP TERM ADD_OP_LIST");
										// add a thing here
										if((yyvsp[-2].num) == IS_ARITH)
										{
											if(((yyvsp[0].typeInfo).type == NOT_APPLICABLE) || ((yyvsp[0].typeInfo).type != BOOL) || ((yyvsp[0].typeInfo).type != INT) || ((yyvsp[0].typeInfo).type != FLOAT))
											{
												// episilon here
												if(((yyvsp[-1].typeInfo).type != NOT_APPLICABLE))
												{
													(yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
													(yyval.typeInfo).numParams = NOT_APPLICABLE;
													(yyval.typeInfo).returnType = NOT_APPLICABLE;
												}
												else
												{
													yyerror("Arg 6 must be integer or float or bool");
												}
											}
											else if (((yyvsp[-1].typeInfo).type == IS_ARITH) && ((yyvsp[0].typeInfo).type == IS_ARITH))
											{
												(yyval.typeInfo).type = INT;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
											else
											{
												(yyval.typeInfo).type = FLOAT;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
										}
										else if((yyvsp[-2].num) == IS_LOGICAL)
										{
											(yyval.typeInfo).type = BOOL;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else
										{
											yyerror("Arg 7 must be integer or float or bool");
										}
										}
#line 2111 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 633 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ADD_OP_LIST", "epsilon");
										(yyval.typeInfo).type = NOT_APPLICABLE;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 2122 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 641 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("TERM", "FACTOR MULT_OP_LIST");
										// add a thing here
										if(((yyvsp[0].typeInfo).type == NOT_APPLICABLE) || ((yyvsp[0].typeInfo).type != BOOL) || ((yyvsp[0].typeInfo).type != INT) || ((yyvsp[0].typeInfo).type != FLOAT))
										{
											if(((yyvsp[-1].typeInfo).type != NOT_APPLICABLE))
											{
												(yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
											else
											{
												yyerror("Arg 8 must be integer or float or bool");
											}
										}
										else if (((yyvsp[-1].typeInfo).type == IS_LOGICAL) && ((yyvsp[0].typeInfo).type == IS_LOGICAL))
										{
											(yyval.typeInfo).type = BOOL;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else if (((yyvsp[-1].typeInfo).type == IS_ARITH) && ((yyvsp[0].typeInfo).type == IS_ARITH))
										{
											(yyval.typeInfo).type = INT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else
										{
											(yyval.typeInfo).type = FLOAT;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										}
#line 2162 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 678 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("MULT_OP_LIST", "MULT_OP FACTOR MULT_OP_LIST");
										if((yyvsp[-2].num) == IS_ARITH)
										{
											if(((yyvsp[0].typeInfo).type == NOT_APPLICABLE) || ((yyvsp[0].typeInfo).type != BOOL) || ((yyvsp[0].typeInfo).type != INT) || ((yyvsp[0].typeInfo).type != FLOAT))
											{
												// episilon here
												if(((yyvsp[-1].typeInfo).type != NOT_APPLICABLE))
												{
													(yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
													(yyval.typeInfo).numParams = NOT_APPLICABLE;
													(yyval.typeInfo).returnType = NOT_APPLICABLE;
												}
												else
												{
													yyerror("Arg 9 must be integer or float or bool");
												}
											}
											else if (((yyvsp[-1].typeInfo).type == IS_ARITH) && ((yyvsp[0].typeInfo).type == IS_ARITH))
											{
												(yyval.typeInfo).type = INT;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
											else
											{
												(yyval.typeInfo).type = FLOAT;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
										}
										else if((yyvsp[-2].num) == IS_LOGICAL)
										{
											(yyval.typeInfo).type = BOOL;
											(yyval.typeInfo).numParams = NOT_APPLICABLE;
											(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
										else
										{
											yyerror("Arg 10 must be integer or float or bool");
										}
										}
#line 2209 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 721 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("MULT_OP_LIST", "epsilon");
										(yyval.typeInfo).type = NOT_APPLICABLE;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 2220 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 729 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("FACTOR", "VAR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 2231 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 736 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("FACTOR", "CONST");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 2242 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 743 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("FACTOR", "( EXPR )");
										(yyval.typeInfo).type = (yyvsp[-1].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 2253 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 750 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("FACTOR", "! FACTOR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 2264 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 758 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ADD_OP", "+");
										(yyval.num) = IS_ARITH;
										}
#line 2273 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 763 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ADD_OP", "-");
										(yyval.num) = IS_ARITH;
										}
#line 2282 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 768 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ADD_OP", "|");
										(yyval.num) = IS_LOGICAL;
										}
#line 2291 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 774 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("MULT_OP", "*");
										(yyval.num) = IS_ARITH;
										}
#line 2300 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 779 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("MULT_OP", "/");
										(yyval.num) = IS_ARITH;
										}
#line 2309 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 784 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("MULT_OP", "&");
										(yyval.num) = IS_LOGICAL;
										}
#line 2318 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 789 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("MULT_OP", "%%");
										(yyval.num) = IS_ARITH;
										}
#line 2327 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 794 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("MULT_OP", "^");
										(yyval.num) = IS_ARITH;
										}
#line 2336 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 800 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("REL_OP", "<");
										}
#line 2344 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 804 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("REL_OP", ">");
										}
#line 2352 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 808 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("REL_OP", "<=");
										}
#line 2360 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 812 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("REL_OP", ">=");
										}
#line 2368 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 816 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("REL_OP", "==");
										}
#line 2376 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 820 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("REL_OP", "!=");
										}
#line 2384 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 825 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("VAR", "ENTIRE_VAR");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 2395 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 832 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("VAR", "SINGLE_ELEMENT");
										(yyval.typeInfo).type = (yyvsp[0].typeInfo).type;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										}
#line 2406 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 840 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("SINGLE_ELEMENT", "IDENT [[ EXPR ]]");
										string lexeme = string((yyvsp[-5].text));
										// first make sure that it exists
										if (findEntryInAnyScope(lexeme))
										{
											// if ident exists it should have a type right? right?
											if (scopeStack.top().findEntryData(lexeme).type == LIST)// < so then why does this fuck up?
											{
												(yyval.typeInfo).type = INT_OR_STR_OR_BOOL_OR_FLOAT;
												(yyval.typeInfo).numParams = NOT_APPLICABLE;
												(yyval.typeInfo).returnType = NOT_APPLICABLE;
											}
											else
											{
												yyerror("Arg 1 must be list");
											}
										}
										else
										{
											printUnDefinedError(lexeme);
										}
										}
#line 2434 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 865 "reinboltwakefield.y" /* yacc.c:1646  */
    {
										printRule("ENTIRE_VAR", "IDENT");
										(yyval.typeInfo).type = INT;
										(yyval.typeInfo).numParams = NOT_APPLICABLE;
										(yyval.typeInfo).returnType = NOT_APPLICABLE;
										//check if undefined
										string lexeme = string((yyvsp[0].text));
										if(!findEntryInAnyScope(lexeme))
											{
											printUnDefinedError(lexeme);
											}
										}
#line 2451 "reinboltwakefield.tab.c" /* yacc.c:1646  */
    break;


#line 2455 "reinboltwakefield.tab.c" /* yacc.c:1646  */
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
#line 878 "reinboltwakefield.y" /* yacc.c:1906  */


//symbol table files
#include <stack>
#include "SymbolTable.h" //we dont need the other one because it is included in this one

#include "lex.yy.c"
extern FILE *yyin;

void printRule(const char *lhs, const char *rhs)
{
	if (deboog == true)
		printf("%s -> %s\n", lhs, rhs);
}

int yyerror(const char *s)
{
	char str[9];
	sprintf(str, "%d", numLines);
	printf("Line %s", str);
	printf(": %s\n",s);
	exit(1);
	return(1);
}

void printTokenInfo(const char* tokenType, const char* lexeme)
{
	if (deboog == true)
		printf("TOKEN: %s	LEXEME: %s\n", tokenType, lexeme);
}


void printMulDefinedError(const string symbName)
{
	char str[9];
	sprintf(str, "%d", numLines);
	printf("Line %s", str);
	printf(": Multiply defined identifier\n");
	exit(1);
}

void printUnDefinedError(const string symbName)
{
	char str[9];
	sprintf(str, "%d", numLines);
	printf("Line %s", str);
	printf(": Undefined identifier\n");
	exit(1);
}

void printAddSymb(const string symbName, TYPE_INFO typeinfo)
{
	scopeStack.top().addEntry(SYMBOL_TABLE_ENTRY(symbName, typeinfo));
	if (deboog == true)
		printf("___Adding %s to symbol table\n", symbName.c_str());
}

bool findEntryInAnyScope(const string theName)
{
	if (scopeStack.empty()) return(false);
	bool found = scopeStack.top().findEntry(theName);
	if (found)
		return(true);
	else { // check in "next higher" scope
		SYMBOL_TABLE symbolTable = scopeStack.top();
		scopeStack.pop();
		found = findEntryInAnyScope(theName);
		scopeStack.push(symbolTable); // restore the stack
		return(found);
	}
}

void beginScope( )
{
	scopeStack.push(SYMBOL_TABLE( ));
	if (deboog == true)
		printf("\n___Entering new scope...\n\n");
}

void endScope( )
{
	scopeStack.pop( );
	if (deboog == true)
		printf("\n___Exiting scope...\n\n");
}


int main()
{
	// make the global table
	beginScope();

	do
	{
		yyparse();
		numLines++;
	} while(!feof(yyin));

	return 0;
}
