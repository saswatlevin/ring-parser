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
#line 1 "ring.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
int yylex();
int yyerror();
extern FILE *yyin;
extern char arr[100];
extern int i;

#line 76 "ring.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ring.tab.h".  */
#ifndef YY_YY_RING_TAB_H_INCLUDED
# define YY_YY_RING_TAB_H_INCLUDED
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
    IF = 258,
    ELSE = 259,
    ELSEIF = 260,
    FOR = 261,
    TO = 262,
    STEP = 263,
    FUNC = 264,
    ENDFUNC = 265,
    WHILE = 266,
    END = 267,
    DO = 268,
    AGAIN = 269,
    TRY = 270,
    CATCH = 271,
    SWITCH = 272,
    CASE = 273,
    OTHER = 274,
    PACKAGE = 275,
    DOT = 276,
    ENDPACKAGE = 277,
    SEE = 278,
    LITERAL = 279,
    GIVE = 280,
    CLASS = 281,
    FROM = 282,
    ENDCLASS = 283,
    LOAD = 284,
    IDENTIFIER = 285,
    OPERATOR = 286,
    LBR = 287,
    RBR = 288,
    COMMA = 289,
    LR = 290,
    RR = 291,
    EOP = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "ring.y" /* yacc.c:355  */

    char *str;

#line 158 "ring.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_RING_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 175 "ring.tab.c" /* yacc.c:358  */

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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   137

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    92,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   109,   114,   121,   127,
     134,   141,   147,   154,   157,   163,   165,   171,   179,   183,
     186,   190,   193,   196,   197,   200,   203,   206,   210,   213,
     216,   217,   220,   223,   226,   229,   232,   235,   238,   239,
     242,   245,   246,   249,   252,   253,   256,   259,   262,   265,
     266,   269,   272,   273,   276,   279,   282,   285,   286,   289,
     296,   301,   304,   307,   310,   313,   316,   320,   322,   325,
     326,   330,   333,   336,   339,   343,   344,   346,   349,   352,
     355,   356,   359,   362,   365,   366,   369,   372,   375,   376,
     379
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "ELSEIF", "FOR", "TO",
  "STEP", "FUNC", "ENDFUNC", "WHILE", "END", "DO", "AGAIN", "TRY", "CATCH",
  "SWITCH", "CASE", "OTHER", "PACKAGE", "DOT", "ENDPACKAGE", "SEE",
  "LITERAL", "GIVE", "CLASS", "FROM", "ENDCLASS", "LOAD", "IDENTIFIER",
  "OPERATOR", "LBR", "RBR", "COMMA", "LR", "RR", "EOP", "$accept", "stmt",
  "program", "Statement", "if_statement", "for_loop", "while_loop",
  "do_again_loop", "try_catch_statement", "switch_statement",
  "package_statement", "see_statement", "give_statement",
  "class_statement", "from_colon_lt_id_prime", "lbr_stmt_rbr_d1",
  "stmt_prime_2", "dot_id_p", "lbr_stmt_rbr_d", "stmt_prime_1", "lbr_d1",
  "case_expr_statement_p", "other_STMT_d", "STMT_prime_2", "stmt_prime_5",
  "stmt_prime_9", "lbr_d5", "stmt_prime_10", "stmt_prime_8", "lbr_d4",
  "stmt_prime_7", "function_statement", "paralist_d", "lr_d", "rr_d",
  "lbr_stmt_rbr_d2", "stmt_prime_3", "step_expr_d", "lbr_d2",
  "STMT_prime_3", "lbr_d", "stmt_prime_4", "elseif_expr_stmt_p", "STMT_p",
  "else_STMT_d", "STMT_prime_1", "expr", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

#define YYPACT_NINF -25

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-25)))

#define YYTABLE_NINF -74

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     102,   -23,   -23,   -13,   -23,   -25,   -25,   -23,    -3,   -20,
     -19,     5,    -2,    40,    18,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,    10,    53,
     -10,    29,   -12,    -9,    31,    41,   102,   102,   102,   102,
      37,    35,   -25,   -25,   -25,   -25,   -23,   -25,    34,    38,
     -25,   -25,   -23,    -2,   -25,    -2,   -25,    55,   -25,   -25,
     -25,    42,    43,   -25,   -25,   -25,   -25,    46,    45,   -25,
      48,    65,   -25,    70,    47,     4,   102,   -25,    30,    41,
     -25,    60,   -25,   -25,    56,    -2,    54,   -25,   -23,    51,
      11,   102,    58,    -2,   102,   -25,   -25,    17,   -23,   -25,
      52,   -25,    23,   102,    24,   -25,   -25,   -23,    57,   -25,
     -25,   -25,    -2,   -25,   -25,   -25,    50,   -25,    -2,   102,
     -25,   -25,   102,   102,    -2,   -25,   -25,   -25,    -2,   -25,
     -25,   102,   -25,   102,    13,   -25,   -25,   -25,    61,   -25,
     -25,   -25,   102,   -25,   102,   -25,    -2,   -25,   -25,   -25
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    63,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     4,     5,     7,     8,
       9,    10,    11,    12,    13,    14,     6,    15,    88,     0,
      71,    65,     0,    57,    43,    36,     0,     0,     0,     0,
      29,     0,     1,     2,    87,    91,     0,    72,    77,     0,
      64,    68,     0,    61,    62,    53,    56,     0,    54,    42,
      45,     0,    38,    24,    23,    26,    25,     0,    31,   100,
      93,    82,    80,     0,     0,     0,     0,    60,    47,    36,
      41,     0,    28,    34,     0,    89,    97,    90,     0,    84,
       0,     0,     0,    66,     0,    67,    19,     0,     0,    49,
       0,    35,     0,     0,     0,    27,    99,     0,     0,    81,
      83,    86,    78,    76,    79,    69,    75,    18,    58,     0,
      59,    52,    46,     0,    39,    37,    40,    22,    32,    30,
      33,    96,    95,     0,     0,    74,    70,    20,    44,    48,
      21,    98,    92,    16,     0,    85,    50,    51,    94,    17
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -25,   -24,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,    14,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    68,    84,   104,    62,    81,   102,
      60,    78,   100,   122,   138,    33,    57,    97,    32,    51,
      75,    26,    48,    49,   136,    73,    90,    89,   111,   134,
      45,    70,    86,   142,   108,   131,    27
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    29,    52,    31,    36,    38,    34,    12,    37,    39,
      12,    12,    63,    64,    65,    66,     1,    30,    53,     2,
     -73,    55,     3,    56,     4,    47,     5,    35,     6,    41,
       7,    54,    58,     8,    93,    40,     9,    94,    10,    11,
      42,   112,    44,    12,   113,    71,   144,   118,    98,    99,
     119,    76,    96,   124,   128,    43,   125,   129,   106,   107,
      46,    50,    61,    59,    67,    69,    72,   115,    74,    87,
     117,    77,    79,    88,    95,    80,    82,    83,    85,   127,
      91,    92,   103,   110,   105,   123,   135,   109,   116,   114,
     133,   146,     0,   101,     0,   137,   120,   121,   139,   140,
       0,   126,     0,   130,     0,     1,   132,   141,     2,   143,
     145,     3,     0,     4,     0,     5,     0,     6,   148,     7,
     149,     0,     8,     0,     0,     9,     0,    10,    11,     0,
       0,     0,    12,     0,     0,     0,     0,   147
};

static const yytype_int16 yycheck[] =
{
       1,     2,    14,     4,    24,    24,     7,    30,     9,    10,
      30,    30,    36,    37,    38,    39,     3,    30,    30,     6,
      30,    30,     9,    32,    11,    35,    13,    30,    15,    31,
      17,    32,    33,    20,    30,    30,    23,    33,    25,    26,
       0,    30,    32,    30,    33,    46,    33,    30,    18,    19,
      33,    52,    76,    30,    30,    37,    33,    33,     4,     5,
       7,    32,    21,    32,    27,    30,    32,    91,    30,    70,
      94,    16,    30,     8,    75,    32,    30,    32,    30,   103,
      10,    34,    22,    32,    28,    33,    36,    88,    30,    90,
      33,    30,    -1,    79,    -1,   119,    97,    98,   122,   123,
      -1,   102,    -1,   104,    -1,     3,   107,   131,     6,   133,
     134,     9,    -1,    11,    -1,    13,    -1,    15,   142,    17,
     144,    -1,    20,    -1,    -1,    23,    -1,    25,    26,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,   138
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     9,    11,    13,    15,    17,    20,    23,
      25,    26,    30,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    69,    84,    84,    84,
      30,    84,    66,    63,    84,    30,    24,    84,    24,    84,
      30,    31,     0,    37,    32,    78,     7,    35,    70,    71,
      32,    67,    14,    30,    84,    30,    32,    64,    84,    32,
      58,    21,    55,    41,    41,    41,    41,    27,    52,    30,
      79,    84,    32,    73,    30,    68,    84,    16,    59,    30,
      32,    56,    30,    32,    53,    30,    80,    84,     8,    75,
      74,    10,    34,    30,    33,    84,    41,    65,    18,    19,
      60,    55,    57,    22,    54,    28,     4,     5,    82,    84,
      32,    76,    30,    33,    84,    41,    30,    41,    30,    33,
      84,    84,    61,    33,    30,    33,    84,    41,    30,    33,
      84,    83,    84,    33,    77,    36,    72,    41,    62,    41,
      41,    41,    81,    41,    33,    41,    30,    84,    41,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    49,    50,    50,    51,    52,    52,
      53,    53,    54,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    62,    63,    63,    63,    64,    64,    65,    65,
      65,    66,    66,    66,    67,    67,    68,    68,    68,    69,
      70,    70,    71,    71,    72,    72,    73,    73,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    83,
      84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     9,     6,     5,
       7,     7,     6,     3,     3,     3,     3,     5,     2,     0,
       3,     0,     2,     2,     0,     3,     0,     3,     0,     2,
       2,     0,     1,     0,     4,     0,     2,     0,     2,     0,
       2,     2,     0,     2,     2,     0,     1,     0,     2,     2,
       0,     2,     2,     0,     1,     0,     2,     2,     0,     6,
       5,     0,     1,     0,     1,     0,     3,     0,     2,     2,
       0,     2,     0,     1,     0,     2,     0,     1,     0,     2,
       2,     0,     4,     0,     2,     0,     2,     0,     2,     0,
       3
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
        case 16:
#line 109 "ring.y" /* yacc.c:1646  */
    { 
    printf("\nKeyword\t\t%s", (yyvsp[-7].str));
	printf("\nSS\t\t%s",(yyvsp[-1].str));}
#line 1369 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 114 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s", (yyvsp[-8].str));
    printf("\nKEYWORD\t\t%s",(yyvsp[-6].str));
    printf("\nSS\t\t%s",(yyvsp[-1].str));
	}
#line 1379 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 121 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s", (yyvsp[-5].str));
    printf("\nSS\t\t%s",(yyvsp[-1].str));
	}
#line 1388 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 127 "ring.y" /* yacc.c:1646  */
    { 
    printf("\nKEYWORD\t\t%s",(yyvsp[-4].str));
    printf("\nKEYWORD %s",(yyvsp[-2].str)); 
    }
#line 1397 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 134 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-6].str));
	printf("\nKEYWORD\t\t%s",(yyvsp[-3].str)); 
	printf("\nSS\t\t%s",(yyvsp[-1].str));  
	}
#line 1407 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 141 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-6].str));
	printf("\nSS\t\t%s",(yyvsp[-1].str)); 
	}
#line 1416 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 147 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-5].str));
	printf("\nID\t\t%s",(yyvsp[-4].str)); 
	printf("\nKEYWORD\t\t%s",(yyvsp[-1].str));  
	}
#line 1426 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 154 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-2].str));
	}
#line 1434 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 157 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-2].str));
	printf("\nLITERAL\t\t%s",(yyvsp[-1].str));                     
	}
#line 1443 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 163 "ring.y" /* yacc.c:1646  */
    {
	printf("\nKEYWORD\t\t%s",(yyvsp[-2].str));}
#line 1450 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 165 "ring.y" /* yacc.c:1646  */
    {
	printf("\nKEYWORD\t\t%s",(yyvsp[-2].str));
	printf("\nLITERAL\t\t%s",(yyvsp[-1].str));                     
	}
#line 1459 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 171 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-4].str));
	printf("\nID\t\t%s",(yyvsp[-3].str));   
	printf("\nKEYWORD\t\t%s",(yyvsp[0].str));                  
	}
#line 1469 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 179 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-1].str));
	printf("\nID\t\t%s",(yyvsp[0].str));                     
	}
#line 1478 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 186 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[-2].str));
	printf("\nSS\t\t%s",(yyvsp[0].str));                     
	}
#line 1487 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 193 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));                    
	}
#line 1495 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 200 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[-2].str));                    
	}
#line 1503 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 206 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[-2].str));  
	printf("\nSS\t\t%s",(yyvsp[0].str));                    
	}
#line 1512 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 213 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));               
	}
#line 1520 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 220 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[0].str));                   
	}
#line 1528 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 226 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-2].str));                   
	}
#line 1536 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 232 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-1].str));                   
	}
#line 1544 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 242 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));                    
	}
#line 1552 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 249 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));                    
	}
#line 1560 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 256 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[0].str));                    
	}
#line 1568 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 262 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));                    
	}
#line 1576 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 269 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));                    
	}
#line 1584 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 276 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[0].str));                    
	}
#line 1592 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 282 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));                    
	}
#line 1600 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 289 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-5].str));                    
	printf("\nID\t\t%s",(yyvsp[-4].str));
	printf("\nKEYWORD\t\t%s",(yyvsp[-1].str));
	}
#line 1610 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 296 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[-3].str));  
	printf("\nSS\t\t%s",(yyvsp[-2].str));  
	printf("\nID\t\t%s",(yyvsp[-1].str));                    
	}
#line 1620 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 304 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[0].str));                    
	}
#line 1628 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 310 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[0].str));                    
	}
#line 1636 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 316 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[-2].str));  
	printf("\nSS\t\t%s",(yyvsp[0].str)); 
	}
#line 1645 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 322 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));                     
	}
#line 1653 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 330 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-1].str));                     
	}
#line 1661 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 336 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[0].str));                   
	}
#line 1669 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 346 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nSS\t\t%s",(yyvsp[0].str));                   
	}
#line 1677 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 352 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[0].str));                   
	}
#line 1685 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 359 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nKEYWORD\t\t%s",(yyvsp[-2].str));                   
	}
#line 1693 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 369 "ring.y" /* yacc.c:1646  */
    {
	printf("\nKEYWORD\t\t%s",(yyvsp[-1].str));                   
	}
#line 1701 "ring.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 379 "ring.y" /* yacc.c:1646  */
    { 
	printf("\nID\t\t%s",(yyvsp[-2].str)); 
	printf("\nOP\t\t%s",(yyvsp[-1].str)); 
	printf("\nID\t\t%s",(yyvsp[0].str));                    
	}
#line 1711 "ring.tab.c" /* yacc.c:1646  */
    break;


#line 1715 "ring.tab.c" /* yacc.c:1646  */
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
#line 385 "ring.y" /* yacc.c:1906  */

          
void main()
{
	char filename[15];

	printf("Enter filename: ");
	scanf("%s",filename);
	yyin=fopen(filename,"r");
        
    printf("\nType\t\tToken");
	do
	{
		if(yyparse())
 		{
			printf("\nFailure:\n");
			exit(0);
		}
    }while(!feof(yyin));
         
	printf("\nSuccess\n");
    
}

