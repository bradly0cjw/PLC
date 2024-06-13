/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "t_parse.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "t2c.h"
	#include "t2c_tree.h"
	#include "t_parse.h"

#line 80 "t_parse.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "t_parse.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_lWRITE = 3,                     /* lWRITE  */
  YYSYMBOL_lREAD = 4,                      /* lREAD  */
  YYSYMBOL_lIF = 5,                        /* lIF  */
  YYSYMBOL_lASSIGN = 6,                    /* lASSIGN  */
  YYSYMBOL_lRETURN = 7,                    /* lRETURN  */
  YYSYMBOL_lBEGIN = 8,                     /* lBEGIN  */
  YYSYMBOL_lEND = 9,                       /* lEND  */
  YYSYMBOL_lEQU = 10,                      /* lEQU  */
  YYSYMBOL_lNEQ = 11,                      /* lNEQ  */
  YYSYMBOL_lGT = 12,                       /* lGT  */
  YYSYMBOL_lLT = 13,                       /* lLT  */
  YYSYMBOL_lGE = 14,                       /* lGE  */
  YYSYMBOL_lLE = 15,                       /* lLE  */
  YYSYMBOL_lADD = 16,                      /* lADD  */
  YYSYMBOL_lMINUS = 17,                    /* lMINUS  */
  YYSYMBOL_lTIMES = 18,                    /* lTIMES  */
  YYSYMBOL_lDIVIDE = 19,                   /* lDIVIDE  */
  YYSYMBOL_lLP = 20,                       /* lLP  */
  YYSYMBOL_lRP = 21,                       /* lRP  */
  YYSYMBOL_lINT = 22,                      /* lINT  */
  YYSYMBOL_lREAL = 23,                     /* lREAL  */
  YYSYMBOL_lSTRING = 24,                   /* lSTRING  */
  YYSYMBOL_lELSE = 25,                     /* lELSE  */
  YYSYMBOL_lMAIN = 26,                     /* lMAIN  */
  YYSYMBOL_lSEMI = 27,                     /* lSEMI  */
  YYSYMBOL_lCOMMA = 28,                    /* lCOMMA  */
  YYSYMBOL_lID = 29,                       /* lID  */
  YYSYMBOL_lINUM = 30,                     /* lINUM  */
  YYSYMBOL_lRNUM = 31,                     /* lRNUM  */
  YYSYMBOL_lQSTR = 32,                     /* lQSTR  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_prog = 34,                      /* prog  */
  YYSYMBOL_mthdcls = 35,                   /* mthdcls  */
  YYSYMBOL_type = 36,                      /* type  */
  YYSYMBOL_mthdcl = 37,                    /* mthdcl  */
  YYSYMBOL_formals = 38,                   /* formals  */
  YYSYMBOL_formal = 39,                    /* formal  */
  YYSYMBOL_oformal = 40,                   /* oformal  */
  YYSYMBOL_block = 41,                     /* block  */
  YYSYMBOL_stmts = 42,                     /* stmts  */
  YYSYMBOL_stmt = 43,                      /* stmt  */
  YYSYMBOL_vardcl = 44,                    /* vardcl  */
  YYSYMBOL_astm = 45,                      /* astm  */
  YYSYMBOL_rstm = 46,                      /* rstm  */
  YYSYMBOL_istm = 47,                      /* istm  */
  YYSYMBOL_wstm = 48,                      /* wstm  */
  YYSYMBOL_dstm = 49,                      /* dstm  */
  YYSYMBOL_expr = 50,                      /* expr  */
  YYSYMBOL_mexprs = 51,                    /* mexprs  */
  YYSYMBOL_mexpr = 52,                     /* mexpr  */
  YYSYMBOL_pexprs = 53,                    /* pexprs  */
  YYSYMBOL_pexpr = 54,                     /* pexpr  */
  YYSYMBOL_bexpr = 55,                     /* bexpr  */
  YYSYMBOL_aparams = 56,                   /* aparams  */
  YYSYMBOL_oparams = 57                    /* oparams  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   100

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  114

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    67,    70,    73,    77,    82,    88,    98,
     110,   114,   117,   124,   128,   131,   138,   141,   145,   147,
     149,   151,   153,   155,   157,   161,   170,   182,   194,   200,
     207,   215,   223,   233,   240,   245,   251,   254,   263,   270,
     278,   281,   285,   289,   293,   297,   306,   313,   320,   327,
     334,   341,   350,   358,   363,   371
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "lWRITE", "lREAD",
  "lIF", "lASSIGN", "lRETURN", "lBEGIN", "lEND", "lEQU", "lNEQ", "lGT",
  "lLT", "lGE", "lLE", "lADD", "lMINUS", "lTIMES", "lDIVIDE", "lLP", "lRP",
  "lINT", "lREAL", "lSTRING", "lELSE", "lMAIN", "lSEMI", "lCOMMA", "lID",
  "lINUM", "lRNUM", "lQSTR", "$accept", "prog", "mthdcls", "type",
  "mthdcl", "formals", "formal", "oformal", "block", "stmts", "stmt",
  "vardcl", "astm", "rstm", "istm", "wstm", "dstm", "expr", "mexprs",
  "mexpr", "pexprs", "pexpr", "bexpr", "aparams", "oparams", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,   -81,   -81,     7,   -81,   -15,    -1,   -81,   -16,     9,
     -81,    30,    -1,    -1,    13,    10,    25,    36,   -81,    58,
      -1,   -81,    58,     1,   -81,    25,   -81,    38,    47,    48,
      -4,    63,    41,   -81,    62,     1,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,    -4,    43,    -4,    -4,    53,   -81,   -81,
      49,     2,    22,    -4,    11,   -81,   -81,   -81,    46,    51,
      50,    54,    56,    -4,   -81,    -4,    -4,   -81,    -4,    -4,
     -81,    55,   -81,    52,    57,    -4,    -4,    -4,    -4,    -4,
      -4,     1,   -81,    59,    60,     2,     2,    22,    22,   -81,
      64,    65,   -81,   -81,   -81,   -81,   -81,   -81,    66,    -4,
     -81,   -81,   -81,   -81,   -81,   -81,    61,    67,     1,    59,
     -81,   -81,   -81,   -81
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     6,     7,     0,     2,     0,     5,     1,     0,     0,
       4,     0,    11,    11,     0,     0,    14,     0,    12,     0,
       0,    10,     0,     0,     9,    14,     8,     0,     0,     0,
       0,     0,     0,    18,     0,    17,    19,    20,    21,    22,
      23,    24,    13,     0,     0,     0,     0,    43,    41,    42,
       0,    36,    40,     0,     0,    26,    15,    16,     0,     0,
       0,     0,     0,    53,    28,     0,     0,    33,     0,     0,
      37,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    55,     0,    36,    36,    40,    40,    27,
       0,     0,    46,    47,    48,    49,    50,    51,    29,     0,
      52,    45,    34,    35,    38,    39,     0,     0,     0,    55,
      31,    32,    30,    54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,    72,    39,   -81,    70,    73,    71,    -7,    45,
     -80,   -81,    68,   -81,   -81,   -81,   -81,   -43,   -42,   -19,
     -39,   -14,   -81,   -81,   -17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,    32,     6,    15,    16,    21,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    50,    67,    51,
      70,    52,    61,    84,   100
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      58,    98,    60,    62,    27,    28,    29,     7,    30,    23,
      71,     8,    24,    11,     9,    26,    46,    53,    65,    66,
      83,     1,     2,     1,     2,    47,    48,    49,   112,    12,
      31,    19,    92,    93,    94,    95,    96,    97,    72,     5,
      68,    69,    18,   102,   103,     5,    85,    86,   104,   105,
      13,    14,    14,    20,    87,    88,   109,    22,    43,    14,
      75,    76,    77,    78,    79,    80,    23,    44,    45,    53,
      54,    56,    59,    63,    73,    81,    64,    82,    10,    74,
      57,   101,    89,    17,    90,   106,   107,    99,   110,    91,
       0,   108,   113,    25,   111,     0,    42,     0,     0,     0,
      55
};

static const yytype_int8 yycheck[] =
{
      43,    81,    45,    46,     3,     4,     5,     0,     7,     8,
      53,    26,    19,    29,    29,    22,    20,     6,    16,    17,
      63,    22,    23,    22,    23,    29,    30,    31,   108,    20,
      29,    21,    75,    76,    77,    78,    79,    80,    27,     0,
      18,    19,    29,    85,    86,     6,    65,    66,    87,    88,
      20,    12,    13,    28,    68,    69,    99,    21,    20,    20,
      10,    11,    12,    13,    14,    15,     8,    20,    20,     6,
      29,     9,    29,    20,    28,    21,    27,    21,     6,    28,
      35,    21,    27,    13,    32,    21,    21,    28,    27,    32,
      -1,    25,   109,    20,    27,    -1,    25,    -1,    -1,    -1,
      32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    22,    23,    34,    35,    36,    37,     0,    26,    29,
      35,    29,    20,    20,    36,    38,    39,    38,    29,    21,
      28,    40,    21,     8,    41,    39,    41,     3,     4,     5,
       7,    29,    36,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    40,    20,    20,    20,    20,    29,    30,    31,
      50,    52,    54,     6,    29,    45,     9,    42,    50,    29,
      50,    55,    50,    20,    27,    16,    17,    51,    18,    19,
      53,    50,    27,    28,    28,    10,    11,    12,    13,    14,
      15,    21,    21,    50,    56,    52,    52,    54,    54,    27,
      32,    32,    50,    50,    50,    50,    50,    50,    43,    28,
      57,    21,    51,    51,    53,    53,    21,    21,    25,    50,
      27,    27,    43,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    37,    37,
      38,    38,    39,    40,    40,    41,    42,    42,    43,    43,
      43,    43,    43,    43,    43,    44,    44,    45,    46,    47,
      47,    48,    49,    50,    51,    51,    51,    52,    53,    53,
      53,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    56,    56,    57,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     7,     6,
       2,     0,     2,     3,     0,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     4,     3,     5,
       7,     7,     7,     2,     3,     3,     0,     2,     3,     3,
       0,     1,     1,     1,     3,     4,     3,     3,     3,     3,
       3,     3,     2,     0,     3,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* prog: mthdcls  */
#line 64 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm);
		  program = (yyval.sm); }
#line 1192 "t_parse.c"
    break;

  case 3: /* prog: %empty  */
#line 67 "t_parse.y"
                { printf("****** Parsing failed!\n"); }
#line 1198 "t_parse.c"
    break;

  case 4: /* mthdcls: mthdcl mthdcls  */
#line 71 "t_parse.y"
                { (yyval.sm) = (yyvsp[-1].sm);
		  (yyval.sm)->next = (yyvsp[0].sm); }
#line 1205 "t_parse.c"
    break;

  case 5: /* mthdcls: mthdcl  */
#line 74 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1211 "t_parse.c"
    break;

  case 6: /* type: lINT  */
#line 78 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eTYPE;
		  printf("MyTiny parse: type ok!\n");
		  (yyval.ex)->ival = tINT; }
#line 1220 "t_parse.c"
    break;

  case 7: /* type: lREAL  */
#line 83 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eTYPE;
		  (yyval.ex)->ival = tREAL; }
#line 1228 "t_parse.c"
    break;

  case 8: /* mthdcl: type lMAIN lID lLP formals lRP block  */
#line 89 "t_parse.y"
                { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sMAIN;
		  (yyval.sm)->exp1 = create_exp();
		  (yyval.sm)->exp1->exp_id = eID;
		  strcpy( (yyval.sm)->exp1->name, (yyvsp[-4].sr) );
		  (yyval.sm)->exp1->exp1 = (yyvsp[-6].ex);
		  (yyval.sm)->exp2 = (yyvsp[-2].ex);
		  (yyval.sm)->stm1 = (yyvsp[0].sm);
		  symtab = create_symnode( (yyvsp[-4].sr), (yyvsp[-6].ex)->ival ); }
#line 1242 "t_parse.c"
    break;

  case 9: /* mthdcl: type lID lLP formals lRP block  */
#line 99 "t_parse.y"
                { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sMDCL;
		  (yyval.sm)->exp1 = create_exp();
		  (yyval.sm)->exp1->exp_id = eID;
		  strcpy( (yyval.sm)->exp1->name, (yyvsp[-4].sr) );
		  (yyval.sm)->exp1->exp1 = (yyvsp[-5].ex);
		  (yyval.sm)->exp2 = (yyvsp[-2].ex);
		  (yyval.sm)->stm1 = (yyvsp[0].sm);
		  symtab = create_symnode( (yyvsp[-4].sr), (yyvsp[-5].ex)->ival ); }
#line 1256 "t_parse.c"
    break;

  case 10: /* formals: formal oformal  */
#line 111 "t_parse.y"
                { (yyval.ex) = (yyvsp[-1].ex);
		  (yyval.ex)->next = (yyvsp[0].ex); }
#line 1263 "t_parse.c"
    break;

  case 11: /* formals: %empty  */
#line 114 "t_parse.y"
                { (yyval.ex) = NULL; }
#line 1269 "t_parse.c"
    break;

  case 12: /* formal: type lID  */
#line 118 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eFORM;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		  strcpy( (yyval.ex)->name, (yyvsp[0].sr) ); }
#line 1278 "t_parse.c"
    break;

  case 13: /* oformal: lCOMMA formal oformal  */
#line 125 "t_parse.y"
                { (yyval.ex) = (yyvsp[-1].ex);
		  (yyval.ex)->next = (yyvsp[0].ex); }
#line 1285 "t_parse.c"
    break;

  case 14: /* oformal: %empty  */
#line 128 "t_parse.y"
                { (yyval.ex) = NULL; }
#line 1291 "t_parse.c"
    break;

  case 15: /* block: lBEGIN stmts lEND  */
#line 132 "t_parse.y"
                { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sBLOCK;
		  printf("MyTiny parse: block ok!\n");
		  (yyval.sm)->stm1 = (yyvsp[-1].sm); }
#line 1300 "t_parse.c"
    break;

  case 16: /* stmts: stmt stmts  */
#line 139 "t_parse.y"
                { (yyval.sm) = (yyvsp[-1].sm);
		  (yyval.sm)->next = (yyvsp[0].sm); }
#line 1307 "t_parse.c"
    break;

  case 17: /* stmts: stmt  */
#line 142 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1313 "t_parse.c"
    break;

  case 18: /* stmt: block  */
#line 146 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1319 "t_parse.c"
    break;

  case 19: /* stmt: vardcl  */
#line 148 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1325 "t_parse.c"
    break;

  case 20: /* stmt: astm  */
#line 150 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1331 "t_parse.c"
    break;

  case 21: /* stmt: rstm  */
#line 152 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1337 "t_parse.c"
    break;

  case 22: /* stmt: istm  */
#line 154 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1343 "t_parse.c"
    break;

  case 23: /* stmt: wstm  */
#line 156 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1349 "t_parse.c"
    break;

  case 24: /* stmt: dstm  */
#line 158 "t_parse.y"
                { (yyval.sm) = (yyvsp[0].sm); }
#line 1355 "t_parse.c"
    break;

  case 25: /* vardcl: type lID lSEMI  */
#line 162 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.sm) = create_stm();
		(yyval.sm)->stm_id = sVDCL2;
		(yyval.sm)->exp1 = create_exp();
		(yyval.sm)->exp1->exp_id = eID;
		strcpy( (yyval.sm)->exp1->name, (yyvsp[-1].sr) );
		(yyval.sm)->exp1->exp1 = (yyvsp[-2].ex);
		}
#line 1368 "t_parse.c"
    break;

  case 26: /* vardcl: type astm  */
#line 171 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.sm) = create_stm();
		(yyval.sm)->stm_id = sVDCL2;
		(yyval.sm)->exp1 = create_exp();
		(yyval.sm)->exp1->exp_id = eID;
		strcpy( (yyval.sm)->exp1->name, (yyvsp[0].sm)->exp1->name );
		(yyval.sm)->exp1->exp1 = (yyvsp[-1].ex);
		(yyval.sm)->exp2 = (yyvsp[0].sm)->exp2;
		}
#line 1382 "t_parse.c"
    break;

  case 27: /* astm: lID lASSIGN expr lSEMI  */
#line 183 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.sm) = create_stm();
		(yyval.sm)->stm_id = eASSIGN2;
		(yyval.sm)->exp1 = create_exp();
		(yyval.sm)->exp1->exp_id = eID;
		strcpy( (yyval.sm)->exp1->name, (yyvsp[-3].sr) );
		(yyval.sm)->exp1->exp1 = (yyvsp[-1].ex);
		
		}
#line 1396 "t_parse.c"
    break;

  case 28: /* rstm: lRETURN expr lSEMI  */
#line 195 "t_parse.y"
                { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sRSTM;
		  (yyval.sm)->exp1 = (yyvsp[-1].ex); }
#line 1404 "t_parse.c"
    break;

  case 29: /* istm: lIF lLP bexpr lRP stmt  */
#line 201 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.sm) = create_stm();
		(yyval.sm)->stm_id = sISTM;
		(yyval.sm)->exp1 = (yyvsp[-2].ex);
		(yyval.sm)->stm1 = (yyvsp[0].sm);
		}
#line 1415 "t_parse.c"
    break;

  case 30: /* istm: lIF lLP bexpr lRP stmt lELSE stmt  */
#line 208 "t_parse.y"
                { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sISTM;
		  (yyval.sm)->exp1 = (yyvsp[-4].ex);
		  (yyval.sm)->stm1 = (yyvsp[-2].sm);
		  (yyval.sm)->stm2 = (yyvsp[0].sm); }
#line 1425 "t_parse.c"
    break;

  case 31: /* wstm: lWRITE lLP expr lCOMMA lQSTR lRP lSEMI  */
#line 216 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.sm) = create_stm();
		(yyval.sm)->stm_id = sWSTM;
		(yyval.sm)->exp1 = (yyvsp[-4].ex);
		}
#line 1435 "t_parse.c"
    break;

  case 32: /* dstm: lREAD lLP lID lCOMMA lQSTR lRP lSEMI  */
#line 224 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.sm) = create_stm();
		(yyval.sm)->stm_id = sDSTM;
		(yyval.sm)->exp1 = create_exp();
		(yyval.sm)->exp1->exp_id = eID;
		strcpy( (yyval.sm)->exp1->name, (yyvsp[-4].sr) );
		}
#line 1447 "t_parse.c"
    break;

  case 33: /* expr: mexpr mexprs  */
#line 234 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eEXPR;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		  (yyval.ex)->next = (yyvsp[0].ex); }
#line 1456 "t_parse.c"
    break;

  case 34: /* mexprs: lADD mexpr mexprs  */
#line 241 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eADD;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		  (yyval.ex)->next = (yyvsp[0].ex); }
#line 1465 "t_parse.c"
    break;

  case 35: /* mexprs: lMINUS mexpr mexprs  */
#line 246 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eMINUS;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		  (yyval.ex)->next = (yyvsp[0].ex); }
#line 1474 "t_parse.c"
    break;

  case 36: /* mexprs: %empty  */
#line 251 "t_parse.y"
                { (yyval.ex) = NULL; }
#line 1480 "t_parse.c"
    break;

  case 37: /* mexpr: pexpr pexprs  */
#line 255 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eEXPR;
		(yyval.ex)->exp1 = (yyvsp[-1].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1491 "t_parse.c"
    break;

  case 38: /* pexprs: lTIMES pexpr pexprs  */
#line 264 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eTIMES;
		(yyval.ex)->exp1 = (yyvsp[-1].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1502 "t_parse.c"
    break;

  case 39: /* pexprs: lDIVIDE pexpr pexprs  */
#line 271 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eDIVIDE;
		(yyval.ex)->exp1 = (yyvsp[-1].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1513 "t_parse.c"
    break;

  case 40: /* pexprs: %empty  */
#line 278 "t_parse.y"
                { (yyval.ex) = NULL; }
#line 1519 "t_parse.c"
    break;

  case 41: /* pexpr: lINUM  */
#line 282 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eINUM;
		  (yyval.ex)->ival = (yyvsp[0].iv); }
#line 1527 "t_parse.c"
    break;

  case 42: /* pexpr: lRNUM  */
#line 286 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eRNUM;
		  (yyval.ex)->rval = (yyvsp[0].rv); }
#line 1535 "t_parse.c"
    break;

  case 43: /* pexpr: lID  */
#line 290 "t_parse.y"
                { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eID;
		  strcpy( (yyval.ex)->name, (yyvsp[0].sr) ); }
#line 1543 "t_parse.c"
    break;

  case 44: /* pexpr: lLP expr lRP  */
#line 294 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = (yyvsp[-1].ex);
		}
#line 1551 "t_parse.c"
    break;

  case 45: /* pexpr: lID lLP aparams lRP  */
#line 298 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eFUNC;
		strcpy( (yyval.ex)->name, (yyvsp[-3].sr) );
		(yyval.ex)->exp1 = (yyvsp[-1].ex);
		}
#line 1562 "t_parse.c"
    break;

  case 46: /* bexpr: expr lEQU expr  */
#line 307 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();	
		(yyval.ex)->exp_id = eEQ;
		(yyval.ex)->exp1 = (yyvsp[-2].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1573 "t_parse.c"
    break;

  case 47: /* bexpr: expr lNEQ expr  */
#line 314 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eNE;
		(yyval.ex)->exp1 = (yyvsp[-2].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1584 "t_parse.c"
    break;

  case 48: /* bexpr: expr lGT expr  */
#line 321 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eGT;
		(yyval.ex)->exp1 = (yyvsp[-2].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1595 "t_parse.c"
    break;

  case 49: /* bexpr: expr lLT expr  */
#line 328 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eLT;
		(yyval.ex)->exp1 = (yyvsp[-2].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1606 "t_parse.c"
    break;

  case 50: /* bexpr: expr lGE expr  */
#line 335 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eGE;
		(yyval.ex)->exp1 = (yyvsp[-2].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1617 "t_parse.c"
    break;

  case 51: /* bexpr: expr lLE expr  */
#line 342 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eLE;
		(yyval.ex)->exp1 = (yyvsp[-2].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1628 "t_parse.c"
    break;

  case 52: /* aparams: expr oparams  */
#line 351 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eAPARM;
		(yyval.ex)->exp1 = (yyvsp[-1].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1639 "t_parse.c"
    break;

  case 53: /* aparams: %empty  */
#line 358 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = NULL;
		}
#line 1647 "t_parse.c"
    break;

  case 54: /* oparams: lCOMMA expr oparams  */
#line 364 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = create_exp();
		(yyval.ex)->exp_id = eAPARM;
		(yyval.ex)->exp1 = (yyvsp[-1].ex);
		(yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1658 "t_parse.c"
    break;

  case 55: /* oparams: %empty  */
#line 371 "t_parse.y"
                { // Write your own semantic action here.
		(yyval.ex) = NULL;
		}
#line 1666 "t_parse.c"
    break;


#line 1670 "t_parse.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 376 "t_parse.y"


int yyerror(char *s)
{
	printf("%s\n",s);
	return 1;
}

