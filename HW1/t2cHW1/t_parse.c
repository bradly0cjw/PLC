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
	#include "t2c.h"
	#include "t_parse.h"

#line 78 "t_parse.c"

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
  YYSYMBOL_localvardecls = 44,             /* localvardecls  */
  YYSYMBOL_assignstmt = 45,                /* assignstmt  */
  YYSYMBOL_returnstmt = 46,                /* returnstmt  */
  YYSYMBOL_ifstmt = 47,                    /* ifstmt  */
  YYSYMBOL_writestmt = 48,                 /* writestmt  */
  YYSYMBOL_readstmt = 49,                  /* readstmt  */
  YYSYMBOL_Expressions = 50,               /* Expressions  */
  YYSYMBOL_muls = 51,                      /* muls  */
  YYSYMBOL_mul = 52,                       /* mul  */
  YYSYMBOL_pimaryexprs = 53,               /* pimaryexprs  */
  YYSYMBOL_pimaryexpr = 54,                /* pimaryexpr  */
  YYSYMBOL_actualsParms = 55               /* actualsParms  */
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
#define YYLAST   92

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  99

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
static const yytype_uint8 yyrline[] =
{
       0,    22,    22,    26,    29,    31,    35,    37,    41,    43,
      47,    50,    53,    57,    60,    64,    67,    70,    74,    76,
      78,    80,    82,    84,    86,    89,    91,    94,    97,   100,
     102,   105,   107,   119,   122,   124,   127,   129,   132,   134,
     137,   143,   145,   147,   149,   151,   157,   159
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
  "localvardecls", "assignstmt", "returnstmt", "ifstmt", "writestmt",
  "readstmt", "Expressions", "muls", "mul", "pimaryexprs", "pimaryexpr",
  "actualsParms", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-64)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      10,   -64,   -64,    13,   -64,   -14,    10,   -64,    -8,     9,
     -64,    17,    10,    10,    21,    30,    24,    32,   -64,    34,
      10,   -64,    34,     1,   -64,    24,   -64,    35,    36,    37,
     -13,    48,    29,   -64,    50,     1,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -13,    31,   -13,   -13,    41,   -64,   -64,
      38,    19,    20,   -13,    -5,   -64,   -64,   -64,    39,    40,
      42,    43,   -13,   -64,   -13,   -13,   -64,   -13,   -13,   -64,
      44,   -64,    45,    46,     1,   -64,    47,    49,    19,    19,
      20,    20,   -64,    51,    52,    54,   -13,   -64,   -64,   -64,
     -64,   -64,    53,    55,     1,   -64,   -64,   -64,   -64
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     6,     7,     0,     2,     0,     5,     1,     0,     0,
       4,     0,    11,    11,     0,     0,    14,     0,    12,     0,
       0,    10,     0,    17,     9,    14,     8,     0,     0,     0,
       0,     0,     0,    18,     0,    17,    19,    20,    21,    24,
      22,    23,    13,     0,     0,     0,     0,    43,    41,    42,
       0,    36,    40,     0,     0,    26,    15,    16,     0,     0,
       0,     0,     0,    28,     0,     0,    33,     0,     0,    37,
       0,    25,     0,     0,     0,    44,    46,     0,    36,    36,
      40,    40,    27,     0,     0,    29,     0,    45,    34,    35,
      38,    39,     0,     0,     0,    47,    31,    32,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,   -64,    56,    14,   -64,    61,    63,    59,     6,    57,
     -63,   -64,    58,   -64,   -64,   -64,   -64,   -43,   -38,   -20,
     -34,   -19,   -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,    32,     6,    15,    16,    21,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    50,    66,    51,
      69,    52,    77
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      58,    53,    60,    61,    27,    28,    29,    46,    30,    23,
      70,    85,     8,     7,     5,     9,    47,    48,    49,    76,
       5,    11,    71,     1,     2,    24,    14,    14,    26,    12,
      31,    98,     1,     2,    14,    64,    65,    13,    67,    68,
      88,    89,    23,    95,    78,    79,    90,    91,    80,    81,
      18,    19,    20,    22,    53,    43,    44,    45,    54,    56,
      59,    62,    10,    74,    75,    63,     0,    72,    73,     0,
      87,    82,    92,    93,    17,    86,     0,    83,    84,    94,
      96,     0,    97,    25,    42,     0,     0,     0,     0,     0,
      55,     0,    57
};

static const yytype_int8 yycheck[] =
{
      43,     6,    45,    46,     3,     4,     5,    20,     7,     8,
      53,    74,    26,     0,     0,    29,    29,    30,    31,    62,
       6,    29,    27,    22,    23,    19,    12,    13,    22,    20,
      29,    94,    22,    23,    20,    16,    17,    20,    18,    19,
      78,    79,     8,    86,    64,    65,    80,    81,    67,    68,
      29,    21,    28,    21,     6,    20,    20,    20,    29,     9,
      29,    20,     6,    21,    21,    27,    -1,    28,    28,    -1,
      21,    27,    21,    21,    13,    28,    -1,    32,    32,    25,
      27,    -1,    27,    20,    25,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    35
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
      50,    50,    20,    27,    16,    17,    51,    18,    19,    53,
      50,    27,    28,    28,    21,    21,    50,    55,    52,    52,
      54,    54,    27,    32,    32,    43,    28,    21,    51,    51,
      53,    53,    21,    21,    25,    50,    27,    27,    43
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    35,    35,    36,    36,    37,    37,
      38,    38,    39,    40,    40,    41,    42,    42,    43,    43,
      43,    43,    43,    43,    43,    44,    44,    45,    46,    47,
      47,    48,    49,    50,    51,    51,    51,    52,    53,    53,
      53,    54,    54,    54,    54,    54,    55,    55
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     7,     6,
       2,     0,     2,     3,     0,     3,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     3,     2,     4,     3,     5,
       7,     7,     7,     2,     3,     3,     0,     2,     3,     3,
       0,     1,     1,     1,     3,     4,     1,     3
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
#line 23 "t_parse.y"
                { printf("Program -> MethodDecls\n");
		  printf("Parsed OK!\n"); }
#line 1178 "t_parse.c"
    break;

  case 3: /* prog: %empty  */
#line 26 "t_parse.y"
                { printf("****** Parsing failed!\n"); }
#line 1184 "t_parse.c"
    break;

  case 4: /* mthdcls: mthdcl mthdcls  */
#line 30 "t_parse.y"
                { printf("MethodDecls -> MethodDecl MethodDecls\n"); }
#line 1190 "t_parse.c"
    break;

  case 5: /* mthdcls: mthdcl  */
#line 32 "t_parse.y"
                { printf("MethodDecls -> MethodDecl\n"); }
#line 1196 "t_parse.c"
    break;

  case 6: /* type: lINT  */
#line 36 "t_parse.y"
                { printf("Type -> INT\n"); }
#line 1202 "t_parse.c"
    break;

  case 7: /* type: lREAL  */
#line 38 "t_parse.y"
                { printf("Type -> REAL\n"); }
#line 1208 "t_parse.c"
    break;

  case 8: /* mthdcl: type lMAIN lID lLP formals lRP block  */
#line 42 "t_parse.y"
                { printf("MethodDecl -> Type MAIN ID LP Formals RP Block\n"); }
#line 1214 "t_parse.c"
    break;

  case 9: /* mthdcl: type lID lLP formals lRP block  */
#line 44 "t_parse.y"
                { printf("MethodDecl -> Type ID LP Formals RP Block\n"); }
#line 1220 "t_parse.c"
    break;

  case 10: /* formals: formal oformal  */
#line 48 "t_parse.y"
                { printf("Formals -> Formal OtherFormals\n"); }
#line 1226 "t_parse.c"
    break;

  case 11: /* formals: %empty  */
#line 50 "t_parse.y"
                { printf("Formals -> \n"); }
#line 1232 "t_parse.c"
    break;

  case 12: /* formal: type lID  */
#line 54 "t_parse.y"
                { printf("Formal -> Type ID\n"); }
#line 1238 "t_parse.c"
    break;

  case 13: /* oformal: lCOMMA formal oformal  */
#line 58 "t_parse.y"
                { printf("OtherFormals -> COMMA Formal OtherFormals\n"); }
#line 1244 "t_parse.c"
    break;

  case 14: /* oformal: %empty  */
#line 60 "t_parse.y"
                { printf("OtherFormals -> \n"); }
#line 1250 "t_parse.c"
    break;

  case 15: /* block: lBEGIN stmts lEND  */
#line 65 "t_parse.y"
                { printf("Block -> BEGIN Stmts END\n"); }
#line 1256 "t_parse.c"
    break;

  case 16: /* stmts: stmt stmts  */
#line 68 "t_parse.y"
                {printf("Stmts -> Stmt Stmts\n");}
#line 1262 "t_parse.c"
    break;

  case 17: /* stmts: %empty  */
#line 70 "t_parse.y"
                {printf("Stmts -> \n");}
#line 1268 "t_parse.c"
    break;

  case 18: /* stmt: block  */
#line 75 "t_parse.y"
                {printf("Stmts -> Block\n");}
#line 1274 "t_parse.c"
    break;

  case 19: /* stmt: localvardecls  */
#line 77 "t_parse.y"
                {printf("Stmts -> LocalDecls\n");}
#line 1280 "t_parse.c"
    break;

  case 20: /* stmt: assignstmt  */
#line 79 "t_parse.y"
                {printf("Stmts -> AssignStmt\n");}
#line 1286 "t_parse.c"
    break;

  case 21: /* stmt: returnstmt  */
#line 81 "t_parse.y"
                {printf("Stmts -> ReturnStmt\n");}
#line 1292 "t_parse.c"
    break;

  case 22: /* stmt: writestmt  */
#line 83 "t_parse.y"
                {printf("Stmts -> WriteStmt\n");}
#line 1298 "t_parse.c"
    break;

  case 23: /* stmt: readstmt  */
#line 85 "t_parse.y"
                {printf("Stmts -> ReadStmt\n");}
#line 1304 "t_parse.c"
    break;

  case 24: /* stmt: ifstmt  */
#line 87 "t_parse.y"
                {printf("Stmts -> IfStmt\n");}
#line 1310 "t_parse.c"
    break;

  case 25: /* localvardecls: type lID lSEMI  */
#line 90 "t_parse.y"
                {printf("LocalDecls -> Type ID SEMI\n");}
#line 1316 "t_parse.c"
    break;

  case 26: /* localvardecls: type assignstmt  */
#line 92 "t_parse.y"
                {printf("LocalDecls -> Type ID SEMI LocalDecls\n");}
#line 1322 "t_parse.c"
    break;

  case 27: /* assignstmt: lID lASSIGN Expressions lSEMI  */
#line 95 "t_parse.y"
                {printf("AssignStmt -> LValue ASSIGN Expr SEMI\n");}
#line 1328 "t_parse.c"
    break;

  case 28: /* returnstmt: lRETURN Expressions lSEMI  */
#line 98 "t_parse.y"
                {printf("ReturnStmt -> RETURN Expr SEMI\n");}
#line 1334 "t_parse.c"
    break;

  case 29: /* ifstmt: lIF lLP Expressions lRP stmt  */
#line 101 "t_parse.y"
                {printf("IfStmt -> IF LP Expr RP Stmts\n");}
#line 1340 "t_parse.c"
    break;

  case 30: /* ifstmt: lIF lLP Expressions lRP stmt lELSE stmt  */
#line 103 "t_parse.y"
                {printf("IfStmt -> IF LP Expr RP Stmts ELSE Stmts\n");}
#line 1346 "t_parse.c"
    break;

  case 31: /* writestmt: lWRITE lLP Expressions lCOMMA lQSTR lRP lSEMI  */
#line 106 "t_parse.y"
                {printf("WriteStmt -> WRITE LP Expr COM QSTR RP SEMI\n");}
#line 1352 "t_parse.c"
    break;

  case 32: /* readstmt: lREAD lLP lID lCOMMA lQSTR lRP lSEMI  */
#line 108 "t_parse.y"
                {printf("ReadStmt -> READ LP ID COM QSTR RP SEMI\n");}
#line 1358 "t_parse.c"
    break;

  case 33: /* Expressions: mul muls  */
#line 120 "t_parse.y"
                {printf("Expr -> MultExpr MultExprs\n");}
#line 1364 "t_parse.c"
    break;

  case 34: /* muls: lADD mul muls  */
#line 123 "t_parse.y"
                {printf("MultExprs -> AddOp MultExpr MultExprs\n");}
#line 1370 "t_parse.c"
    break;

  case 35: /* muls: lMINUS mul muls  */
#line 125 "t_parse.y"
                {printf("MultExprs -> SubOp MultExpr MultExprs\n");}
#line 1376 "t_parse.c"
    break;

  case 36: /* muls: %empty  */
#line 127 "t_parse.y"
                {printf("MultExprs -> \n");}
#line 1382 "t_parse.c"
    break;

  case 37: /* mul: pimaryexpr pimaryexprs  */
#line 130 "t_parse.y"
                {printf("MultExpr -> PrimExpr\n");}
#line 1388 "t_parse.c"
    break;

  case 38: /* pimaryexprs: lTIMES pimaryexpr pimaryexprs  */
#line 133 "t_parse.y"
                {printf("PrimExprs -> MultOp PrimExpr PrimExprs\n");}
#line 1394 "t_parse.c"
    break;

  case 39: /* pimaryexprs: lDIVIDE pimaryexpr pimaryexprs  */
#line 135 "t_parse.y"
                {printf("PrimExprs -> DivOp PrimExpr PrimExprs\n");}
#line 1400 "t_parse.c"
    break;

  case 40: /* pimaryexprs: %empty  */
#line 137 "t_parse.y"
                {printf("PrimExprs -> \n");}
#line 1406 "t_parse.c"
    break;

  case 41: /* pimaryexpr: lINUM  */
#line 144 "t_parse.y"
                {printf("PrimExpr -> INUM\n");}
#line 1412 "t_parse.c"
    break;

  case 42: /* pimaryexpr: lRNUM  */
#line 146 "t_parse.y"
                {printf("PrimExpr -> RNUM\n");}
#line 1418 "t_parse.c"
    break;

  case 43: /* pimaryexpr: lID  */
#line 148 "t_parse.y"
                {printf("PrimExpr -> ID\n");}
#line 1424 "t_parse.c"
    break;

  case 44: /* pimaryexpr: lLP Expressions lRP  */
#line 150 "t_parse.y"
                {printf("PrimExpr -> LP Expr RP\n");}
#line 1430 "t_parse.c"
    break;

  case 45: /* pimaryexpr: lID lLP actualsParms lRP  */
#line 152 "t_parse.y"
                {printf("PrimExpr -> ID LP Actuals RP\n");}
#line 1436 "t_parse.c"
    break;

  case 46: /* actualsParms: Expressions  */
#line 158 "t_parse.y"
                {printf("Actuals -> Exprs\n");}
#line 1442 "t_parse.c"
    break;

  case 47: /* actualsParms: Expressions lCOMMA Expressions  */
#line 160 "t_parse.y"
                {printf("Actuals -> Exprs COM Exprs\n");}
#line 1448 "t_parse.c"
    break;


#line 1452 "t_parse.c"

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

#line 176 "t_parse.y"
 
int yyerror(char *s)
{
	printf("%s\n",s);
	return 1;
}

