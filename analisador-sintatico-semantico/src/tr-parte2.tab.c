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
#line 1 "tr-parte2.y"


#include "helpers.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

enum types {INT_T = 1, FLOAT_T = 2, BOOL_T = 3};


#line 85 "tr-parte2.tab.c"

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

#include "tr-parte2.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_BOOL = 4,                     /* T_BOOL  */
  YYSYMBOL_T_TRUE = 5,                     /* T_TRUE  */
  YYSYMBOL_T_FALSE = 6,                    /* T_FALSE  */
  YYSYMBOL_T_INT_TYPE = 7,                 /* T_INT_TYPE  */
  YYSYMBOL_T_BOOL_TYPE = 8,                /* T_BOOL_TYPE  */
  YYSYMBOL_T_FLOAT_TYPE = 9,               /* T_FLOAT_TYPE  */
  YYSYMBOL_T_FLOAT = 10,                   /* T_FLOAT  */
  YYSYMBOL_T_SMALLER_EQUALS = 11,          /* T_SMALLER_EQUALS  */
  YYSYMBOL_T_SMALLER = 12,                 /* T_SMALLER  */
  YYSYMBOL_T_GREATER = 13,                 /* T_GREATER  */
  YYSYMBOL_T_GREATER_EQUALS = 14,          /* T_GREATER_EQUALS  */
  YYSYMBOL_T_EQUALS = 15,                  /* T_EQUALS  */
  YYSYMBOL_T_DIFFERENT = 16,               /* T_DIFFERENT  */
  YYSYMBOL_T_PRINT = 17,                   /* T_PRINT  */
  YYSYMBOL_T_SUM = 18,                     /* T_SUM  */
  YYSYMBOL_T_SUB = 19,                     /* T_SUB  */
  YYSYMBOL_T_MULT = 20,                    /* T_MULT  */
  YYSYMBOL_T_DIV = 21,                     /* T_DIV  */
  YYSYMBOL_T_ID = 22,                      /* T_ID  */
  YYSYMBOL_T_SEMICOLON = 23,               /* T_SEMICOLON  */
  YYSYMBOL_T_OPEN_BRACKETS = 24,           /* T_OPEN_BRACKETS  */
  YYSYMBOL_T_CLOSE_BRACKETS = 25,          /* T_CLOSE_BRACKETS  */
  YYSYMBOL_T_OPEN_CURLY_BRACKETS = 26,     /* T_OPEN_CURLY_BRACKETS  */
  YYSYMBOL_T_CLOSE_CURLY_BRACKETS = 27,    /* T_CLOSE_CURLY_BRACKETS  */
  YYSYMBOL_T_OPEN_PARENTHESIS = 28,        /* T_OPEN_PARENTHESIS  */
  YYSYMBOL_T_CLOSE_PARENTHESIS = 29,       /* T_CLOSE_PARENTHESIS  */
  YYSYMBOL_T_COLON = 30,                   /* T_COLON  */
  YYSYMBOL_T_IF = 31,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 32,                    /* T_ELSE  */
  YYSYMBOL_T_WHILE = 33,                   /* T_WHILE  */
  YYSYMBOL_T_FOR = 34,                     /* T_FOR  */
  YYSYMBOL_T_RETURN = 35,                  /* T_RETURN  */
  YYSYMBOL_T_COMMA = 36,                   /* T_COMMA  */
  YYSYMBOL_T_ATR = 37,                     /* T_ATR  */
  YYSYMBOL_T_FUNCTION = 38,                /* T_FUNCTION  */
  YYSYMBOL_T_PROCEDURE = 39,               /* T_PROCEDURE  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_programa = 41,                  /* programa  */
  YYSYMBOL_42_1 = 42,                      /* $@1  */
  YYSYMBOL_declaracao_lista = 43,          /* declaracao_lista  */
  YYSYMBOL_declaracao = 44,                /* declaracao  */
  YYSYMBOL_var_declaracao = 45,            /* var_declaracao  */
  YYSYMBOL_tipo_especificador_novo = 46,   /* tipo_especificador_novo  */
  YYSYMBOL_tipo_especificador = 47,        /* tipo_especificador  */
  YYSYMBOL_fun_declaracao = 48,            /* fun_declaracao  */
  YYSYMBOL_fun = 49,                       /* fun  */
  YYSYMBOL_procedure = 50,                 /* procedure  */
  YYSYMBOL_params = 51,                    /* params  */
  YYSYMBOL_param_lista = 52,               /* param_lista  */
  YYSYMBOL_param = 53,                     /* param  */
  YYSYMBOL_composto_decl = 54,             /* composto_decl  */
  YYSYMBOL_composto_decl_proc = 55,        /* composto_decl_proc  */
  YYSYMBOL_local_declaracoes = 56,         /* local_declaracoes  */
  YYSYMBOL_statement_lista = 57,           /* statement_lista  */
  YYSYMBOL_statement = 58,                 /* statement  */
  YYSYMBOL_statement_lista_proc = 59,      /* statement_lista_proc  */
  YYSYMBOL_statement_proc = 60,            /* statement_proc  */
  YYSYMBOL_expressao_decl = 61,            /* expressao_decl  */
  YYSYMBOL_selecao_decl = 62,              /* selecao_decl  */
  YYSYMBOL_63_2 = 63,                      /* $@2  */
  YYSYMBOL_selecao = 64,                   /* selecao  */
  YYSYMBOL_65_3 = 65,                      /* $@3  */
  YYSYMBOL_66_4 = 66,                      /* $@4  */
  YYSYMBOL_iteracao_decl = 67,             /* iteracao_decl  */
  YYSYMBOL_iteracao_tipo = 68,             /* iteracao_tipo  */
  YYSYMBOL_while = 69,                     /* while  */
  YYSYMBOL_70_5 = 70,                      /* $@5  */
  YYSYMBOL_71_6 = 71,                      /* $@6  */
  YYSYMBOL_for = 72,                       /* for  */
  YYSYMBOL_73_7 = 73,                      /* $@7  */
  YYSYMBOL_74_8 = 74,                      /* $@8  */
  YYSYMBOL_75_9 = 75,                      /* $@9  */
  YYSYMBOL_atribuicao = 76,                /* atribuicao  */
  YYSYMBOL_retorno_decl = 77,              /* retorno_decl  */
  YYSYMBOL_print_decl = 78,                /* print_decl  */
  YYSYMBOL_expressao = 79,                 /* expressao  */
  YYSYMBOL_var = 80,                       /* var  */
  YYSYMBOL_simples_expressao = 81,         /* simples_expressao  */
  YYSYMBOL_relacional = 82,                /* relacional  */
  YYSYMBOL_soma_expressao = 83,            /* soma_expressao  */
  YYSYMBOL_soma = 84,                      /* soma  */
  YYSYMBOL_termo = 85,                     /* termo  */
  YYSYMBOL_mult = 86,                      /* mult  */
  YYSYMBOL_fator = 87,                     /* fator  */
  YYSYMBOL_ativacao = 88,                  /* ativacao  */
  YYSYMBOL_args = 89,                      /* args  */
  YYSYMBOL_arg_lista = 90                  /* arg_lista  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    60,    63,    64,    67,    68,    71,    85,
      97,   103,   104,   105,   108,   109,   112,   115,   118,   119,
     122,   123,   126,   127,   130,   133,   136,   137,   140,   141,
     144,   145,   146,   147,   148,   149,   152,   153,   156,   157,
     158,   159,   160,   164,   165,   168,   169,   169,   174,   174,
     174,   179,   182,   183,   186,   186,   186,   189,   189,   189,
     189,   192,   208,   209,   212,   217,   235,   238,   239,   242,
     245,   248,   249,   250,   251,   252,   253,   256,   264,   267,
     268,   271,   279,   282,   283,   286,   287,   293,   294,   295,
     298,   312,   313,   316,   317
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
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_BOOL",
  "T_TRUE", "T_FALSE", "T_INT_TYPE", "T_BOOL_TYPE", "T_FLOAT_TYPE",
  "T_FLOAT", "T_SMALLER_EQUALS", "T_SMALLER", "T_GREATER",
  "T_GREATER_EQUALS", "T_EQUALS", "T_DIFFERENT", "T_PRINT", "T_SUM",
  "T_SUB", "T_MULT", "T_DIV", "T_ID", "T_SEMICOLON", "T_OPEN_BRACKETS",
  "T_CLOSE_BRACKETS", "T_OPEN_CURLY_BRACKETS", "T_CLOSE_CURLY_BRACKETS",
  "T_OPEN_PARENTHESIS", "T_CLOSE_PARENTHESIS", "T_COLON", "T_IF", "T_ELSE",
  "T_WHILE", "T_FOR", "T_RETURN", "T_COMMA", "T_ATR", "T_FUNCTION",
  "T_PROCEDURE", "$accept", "programa", "$@1", "declaracao_lista",
  "declaracao", "var_declaracao", "tipo_especificador_novo",
  "tipo_especificador", "fun_declaracao", "fun", "procedure", "params",
  "param_lista", "param", "composto_decl", "composto_decl_proc",
  "local_declaracoes", "statement_lista", "statement",
  "statement_lista_proc", "statement_proc", "expressao_decl",
  "selecao_decl", "$@2", "selecao", "$@3", "$@4", "iteracao_decl",
  "iteracao_tipo", "while", "$@5", "$@6", "for", "$@7", "$@8", "$@9",
  "atribuicao", "retorno_decl", "print_decl", "expressao", "var",
  "simples_expressao", "relacional", "soma_expressao", "soma", "termo",
  "mult", "fator", "ativacao", "args", "arg_lista", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-95)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-43)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -95,     3,     7,   -95,   -95,   -95,   -95,   -16,     1,     7,
     -95,   -95,    -6,    10,   -95,   -95,   -95,    12,    20,   -95,
     -95,    52,   -95,    42,    42,    44,    36,    38,    34,   -95,
      49,    48,    27,    59,    42,    57,   -95,    66,    27,   -95,
     -95,   -95,    67,    68,     2,   -95,   -95,   -95,   -95,    51,
      69,    27,   -95,   -95,    65,    -4,   -95,    53,    70,   -95,
      73,    77,    75,   -95,   -95,    76,    85,    63,    88,   -95,
     -95,   -95,   -95,    89,    74,    80,   -95,    95,    37,   -95,
     -95,   -95,    16,    53,    53,    53,    90,    53,    92,   -95,
     -95,    81,   -95,   -95,    53,   -95,   -95,   -95,   -95,   -95,
     -95,   -95,   -95,    53,    53,   -95,   -95,    53,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,    93,    96,   -95,    94,    82,
     -95,   -95,    53,   102,   -95,    51,   -95,    41,    37,   -95,
     103,   -95,   -95,    53,    98,   -95,   101,   105,    97,   -95,
     -95,   -95,   -95,   100,   -95,    53,    51,    51,    53,   -95,
     -95,   -95,   -95,   107,   102,   104,    51,   -95
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    11,    13,    12,     0,     0,     3,
       5,     6,     0,     0,     7,    14,    15,     0,     0,     4,
       8,     0,    10,    18,    18,     0,     0,     0,    19,    21,
       0,     0,     0,     0,     0,     0,     9,    22,     0,    20,
      27,    17,     0,     0,    29,    23,    27,    16,    26,     0,
       0,    29,    88,    89,     0,    67,    44,     0,     0,    54,
       0,     0,    31,    28,    36,    30,    32,    45,    33,    51,
      52,    53,    34,    35,     0,    86,    66,    70,    78,    82,
      87,    25,     0,     0,     0,    92,     0,     0,     0,    57,
      62,     0,    46,    43,     0,    71,    72,    73,    74,    75,
      76,    79,    80,     0,     0,    83,    84,     0,    24,    31,
      30,    32,    33,    35,    86,     0,     0,    94,     0,    91,
      85,    48,     0,     0,    63,     0,    65,    69,    77,    81,
       0,    68,    90,     0,     0,    55,    67,     0,     0,    47,
      64,    93,    49,     0,    58,     0,     0,     0,     0,    61,
      50,    56,    59,     0,     0,     0,     0,    60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -95,   -95,   -95,   -95,   122,   -39,   -95,   -30,   -95,   -95,
     -95,   108,   -95,   106,   -36,   -95,    91,    84,   -94,   -95,
     -95,    87,    99,   -95,   -95,   -95,   -95,   109,   -95,   -95,
     -95,   -95,   -95,   -95,   -95,   -95,   -15,   -95,   110,   -57,
     -82,    55,   -95,    39,   -95,    40,   -95,    43,   -95,   -95,
     -95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     9,    10,    11,    12,    13,    14,    15,
      16,    27,    28,    29,   109,    41,    44,    49,    63,    50,
      64,   110,   111,   125,    67,   134,   146,   112,    69,    70,
      88,   143,    71,   123,   148,   153,   137,    72,   113,    74,
      75,    76,   103,    77,   104,    78,   107,    79,    80,   118,
     119
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,   114,    37,     3,    91,    48,    17,    47,    43,     4,
       5,     6,    48,    62,     4,     5,     6,    20,    21,    52,
      84,   114,   114,    18,    85,   114,    53,   116,   117,   -37,
     121,   139,    22,    54,     4,     5,     6,   126,    55,    56,
      23,   138,    46,   108,    57,     7,     8,    58,    24,    59,
      60,    61,   150,   151,    52,    25,    52,   105,   106,   101,
     102,    53,   157,    53,    26,   135,    32,    33,    54,    31,
      34,    36,   138,    55,    56,    55,   141,    46,    35,    57,
      52,    57,    58,    40,    59,    60,    61,    53,   149,    38,
      42,   152,    45,    83,    46,    92,    81,    93,    87,    55,
      90,    89,   -39,   -38,   124,    57,    95,    96,    97,    98,
      99,   100,   -40,   101,   102,   -41,   -42,    94,   133,   120,
     122,   131,   130,   132,   136,    84,   140,   142,   144,   147,
     154,    19,    30,   156,   145,    82,    65,    51,   115,   155,
      39,     0,   127,     0,   128,     0,     0,     0,    66,     0,
     129,     0,     0,     0,     0,     0,     0,     0,    68,    73
};

static const yytype_int16 yycheck[] =
{
      57,    83,    32,     0,    61,    44,    22,    43,    38,     7,
       8,     9,    51,    49,     7,     8,     9,    23,    24,     3,
      24,   103,   104,    22,    28,   107,    10,    84,    85,    27,
      87,   125,    22,    17,     7,     8,     9,    94,    22,    23,
      28,   123,    26,    27,    28,    38,    39,    31,    28,    33,
      34,    35,   146,   147,     3,     3,     3,    20,    21,    18,
      19,    10,   156,    10,    22,   122,    30,    29,    17,    25,
      36,    23,   154,    22,    23,    22,   133,    26,    29,    28,
       3,    28,    31,    26,    33,    34,    35,    10,   145,    30,
      24,   148,    25,    28,    26,    32,    27,    23,    28,    22,
      23,    28,    27,    27,    23,    28,    11,    12,    13,    14,
      15,    16,    27,    18,    19,    27,    27,    37,    36,    29,
      28,    25,    29,    29,    22,    24,    23,    29,    23,    29,
      23,     9,    24,    29,    37,    51,    49,    46,    83,   154,
      34,    -1,   103,    -1,   104,    -1,    -1,    -1,    49,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    49
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    42,     0,     7,     8,     9,    38,    39,    43,
      44,    45,    46,    47,    48,    49,    50,    22,    22,    44,
      23,    24,    22,    28,    28,     3,    22,    51,    52,    53,
      51,    25,    30,    29,    36,    29,    23,    47,    30,    53,
      26,    55,    24,    47,    56,    25,    26,    54,    45,    57,
      59,    56,     3,    10,    17,    22,    23,    28,    31,    33,
      34,    35,    54,    58,    60,    61,    62,    64,    67,    68,
      69,    72,    77,    78,    79,    80,    81,    83,    85,    87,
      88,    27,    57,    28,    24,    28,    79,    28,    70,    28,
      23,    79,    32,    23,    37,    11,    12,    13,    14,    15,
      16,    18,    19,    82,    84,    20,    21,    86,    27,    54,
      61,    62,    67,    78,    80,    81,    79,    79,    89,    90,
      29,    79,    28,    73,    23,    63,    79,    83,    85,    87,
      29,    25,    29,    36,    65,    79,    22,    76,    80,    58,
      23,    79,    29,    71,    23,    37,    66,    29,    74,    79,
      58,    58,    79,    75,    23,    76,    29,    58
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    42,    41,    43,    43,    44,    44,    45,    45,
      46,    47,    47,    47,    48,    48,    49,    50,    51,    51,
      52,    52,    53,    53,    54,    55,    56,    56,    57,    57,
      58,    58,    58,    58,    58,    58,    59,    59,    60,    60,
      60,    60,    60,    61,    61,    62,    63,    62,    65,    66,
      64,    67,    68,    68,    70,    71,    69,    73,    74,    75,
      72,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      88,    89,    89,    90,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     2,     5,
       2,     1,     1,     1,     1,     1,     8,     6,     0,     1,
       3,     1,     3,     5,     4,     4,     2,     0,     2,     0,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     2,     1,     1,     0,     4,     0,     0,
       7,     1,     1,     1,     0,     0,     7,     0,     0,     0,
      12,     3,     2,     3,     5,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       4,     1,     0,     3,     1
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
  case 2: /* $@1: %empty  */
#line 60 "tr-parte2.y"
                { initiateProgram(); }
#line 1281 "tr-parte2.tab.c"
    break;

  case 3: /* programa: $@1 declaracao_lista  */
#line 60 "tr-parte2.y"
                                                        { finishProgram(); }
#line 1287 "tr-parte2.tab.c"
    break;

  case 8: /* var_declaracao: tipo_especificador_novo T_SEMICOLON  */
#line 71 "tr-parte2.y"
                                                            {
		(yyvsp[-1].typeAndId).id[strlen((yyvsp[-1].typeAndId).id)] = '\0';
		if ((yyvsp[-1].typeAndId).type == INT_T || (yyvsp[-1].typeAndId).type == BOOL_T) {
			if (isError(initializeVariableOnCode(table, (yyvsp[-1].typeAndId).id, 'i'))) {
				printError(table, (yyvsp[-1].typeAndId).id, INT_VAR_EXISTS);
				return 0;
			}
		} else if ((yyvsp[-1].typeAndId).type == FLOAT_T) {
			if (isError(initializeVariableOnCode(table, (yyvsp[-1].typeAndId).id, 'f'))) {
				printError(table, (yyvsp[-1].typeAndId).id, FLOAT_VAR_EXISTS);
				return 0;
			}
		}
	}
#line 1306 "tr-parte2.tab.c"
    break;

  case 9: /* var_declaracao: tipo_especificador_novo T_OPEN_BRACKETS T_INT T_CLOSE_BRACKETS T_SEMICOLON  */
#line 85 "tr-parte2.y"
                                                                                                   {
		int wArr = writeArray((yyvsp[-2].ival), (yyvsp[-4].typeAndId).id, (yyvsp[-4].typeAndId).type);
		if (isError(wArr)) {
			printError(table, (yyvsp[-4].typeAndId).id, ARRAY_ALREADY_EXISTS);
			return 0;
		} else if (wArr == -2) {
			printError(table, (yyvsp[-4].typeAndId).id, ARRAY_INVALID_TYPE);
			return 0;
		}
	}
#line 1321 "tr-parte2.tab.c"
    break;

  case 10: /* tipo_especificador_novo: tipo_especificador T_ID  */
#line 97 "tr-parte2.y"
                                                 {
		(yyval.typeAndId).type = (yyvsp[-1].ival);
		(yyval.typeAndId).id = strdup((yyvsp[0].sval));
	}
#line 1330 "tr-parte2.tab.c"
    break;

  case 11: /* tipo_especificador: T_INT_TYPE  */
#line 103 "tr-parte2.y"
                                   { (yyval.ival) = INT_T; }
#line 1336 "tr-parte2.tab.c"
    break;

  case 12: /* tipo_especificador: T_FLOAT_TYPE  */
#line 104 "tr-parte2.y"
                                                     { (yyval.ival) = FLOAT_T; }
#line 1342 "tr-parte2.tab.c"
    break;

  case 13: /* tipo_especificador: T_BOOL_TYPE  */
#line 105 "tr-parte2.y"
                                                    { (yyval.ival) = BOOL_T; }
#line 1348 "tr-parte2.tab.c"
    break;

  case 16: /* fun: T_FUNCTION T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS T_COLON tipo_especificador composto_decl  */
#line 112 "tr-parte2.y"
                                                                                                            { changeTokenOnRow(table, (yyvsp[-6].sval), "function"); }
#line 1354 "tr-parte2.tab.c"
    break;

  case 17: /* procedure: T_PROCEDURE T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS composto_decl_proc  */
#line 115 "tr-parte2.y"
                                                                                             { changeTokenOnRow(table, (yyvsp[-4].sval), "procedure"); }
#line 1360 "tr-parte2.tab.c"
    break;

  case 45: /* selecao_decl: selecao  */
#line 168 "tr-parte2.y"
                        { writeFullLabelOnCode((yyvsp[0].ival));}
#line 1366 "tr-parte2.tab.c"
    break;

  case 46: /* $@2: %empty  */
#line 169 "tr-parte2.y"
                                               { 
		writeGoToOnCode((yyvsp[0].ival)); writeLabel((yyvsp[0].ival)); writeFullLabelOnCode((yyvsp[-1].ival));					
	}
#line 1374 "tr-parte2.tab.c"
    break;

  case 47: /* selecao_decl: selecao T_ELSE $@2 statement  */
#line 171 "tr-parte2.y"
                    { writeFullLabelOnCode((yyvsp[-2].ival)); }
#line 1380 "tr-parte2.tab.c"
    break;

  case 48: /* $@3: %empty  */
#line 174 "tr-parte2.y"
                                           { writeLabel((yyvsp[-2].ival)); }
#line 1386 "tr-parte2.tab.c"
    break;

  case 49: /* $@4: %empty  */
#line 174 "tr-parte2.y"
                                                                                   { 
		writeGoToOnCode((yyvsp[-2].symboltypeval)); writeLabel((yyvsp[-2].symboltypeval)); writeFullLabelOnCode((yyvsp[-4].ival));
	}
#line 1394 "tr-parte2.tab.c"
    break;

  case 50: /* selecao: T_IF T_OPEN_PARENTHESIS expressao $@3 T_CLOSE_PARENTHESIS $@4 statement  */
#line 176 "tr-parte2.y"
                    { (yyval.ival) = (yyvsp[-4].symboltypeval); }
#line 1400 "tr-parte2.tab.c"
    break;

  case 54: /* $@5: %empty  */
#line 186 "tr-parte2.y"
               { writeFullLabelOnCode((yyvsp[0].ival)); }
#line 1406 "tr-parte2.tab.c"
    break;

  case 55: /* $@6: %empty  */
#line 186 "tr-parte2.y"
                                                                          { writeLabel(labelNum); writeGoToOnCode(labelNum); writeLabel(++labelNum); writeFullLabelOnCode(labelNum - 1); }
#line 1412 "tr-parte2.tab.c"
    break;

  case 56: /* while: T_WHILE $@5 T_OPEN_PARENTHESIS expressao $@6 T_CLOSE_PARENTHESIS statement  */
#line 186 "tr-parte2.y"
                                                                                                                                                                                                                         { writeGoToOnCode((yyvsp[-6].ival)); writeLabel((yyvsp[-6].ival)); writeFullLabelOnCode(labelNum); }
#line 1418 "tr-parte2.tab.c"
    break;

  case 57: /* $@7: %empty  */
#line 189 "tr-parte2.y"
                              { writeFullLabelOnCode((yyvsp[-1].ival)); }
#line 1424 "tr-parte2.tab.c"
    break;

  case 58: /* $@8: %empty  */
#line 189 "tr-parte2.y"
                                                                                   { writeFullLabelOnCode(++labelNum); }
#line 1430 "tr-parte2.tab.c"
    break;

  case 59: /* $@9: %empty  */
#line 189 "tr-parte2.y"
                                                                                                                                   { writeLabel(labelNum); writeGoToOnCode(labelNum); writeLabel(++labelNum); writeFullLabelOnCode(labelNum - 1); }
#line 1436 "tr-parte2.tab.c"
    break;

  case 60: /* for: T_FOR T_OPEN_PARENTHESIS $@7 atribuicao T_SEMICOLON $@8 expressao $@9 T_SEMICOLON atribuicao T_CLOSE_PARENTHESIS statement  */
#line 189 "tr-parte2.y"
                                                                                                                                                                                                                                                                                                         { writeGoToOnCode((yyvsp[-11].ival) + 1); writeLabel((yyvsp[-11].ival) + 1); writeFullLabelOnCode(labelNum); }
#line 1442 "tr-parte2.tab.c"
    break;

  case 61: /* atribuicao: var T_ATR expressao  */
#line 192 "tr-parte2.y"
                                {
		int type = getVarType(table, (yyvsp[-2].sval));
		if (type == INT_T) {
			if (isError(pushIntToVariableOnCode(table, (yyvsp[-2].sval)))) {
				printError(table, (yyvsp[-2].sval), INT_VAR_UNINITIALIZED);
				return 0;
			}
		} else if (type == FLOAT_T) {
			if (isError(pushFloatToVariableOnCode(table, (yyvsp[-2].sval)))) {
				printError(table, (yyvsp[-2].sval), FLOAT_VAR_UNINITIALIZED);
				return 0;
			}
		}
		(yyval.symboltypeval) = (yyvsp[0].symboltypeval);
	}
#line 1462 "tr-parte2.tab.c"
    break;

  case 62: /* retorno_decl: T_RETURN T_SEMICOLON  */
#line 208 "tr-parte2.y"
                                     {}
#line 1468 "tr-parte2.tab.c"
    break;

  case 63: /* retorno_decl: T_RETURN expressao T_SEMICOLON  */
#line 209 "tr-parte2.y"
                                                               { (yyval.symboltypeval) = (yyvsp[-1].symboltypeval); }
#line 1474 "tr-parte2.tab.c"
    break;

  case 64: /* print_decl: T_PRINT T_OPEN_PARENTHESIS simples_expressao T_CLOSE_PARENTHESIS T_SEMICOLON  */
#line 212 "tr-parte2.y"
                                                                                         {
		writePrintOnCode('i');
	}
#line 1482 "tr-parte2.tab.c"
    break;

  case 65: /* expressao: var T_ATR expressao  */
#line 217 "tr-parte2.y"
                                    {
		int type = getVarType(table, (yyvsp[-2].sval));
		if (type == INT_T) {
			if (isError(pushIntToVariableOnCode(table, (yyvsp[-2].sval)))) {
				printError(table, (yyvsp[-2].sval), INT_VAR_UNINITIALIZED);
				return 0;
			}
		} else if (type == FLOAT_T) {
			if (isError(pushFloatToVariableOnCode(table, (yyvsp[-2].sval)))) {
				printError(table, (yyvsp[-2].sval), FLOAT_VAR_UNINITIALIZED);
				return 0;
			}
		} else {
			printError(table, (yyvsp[-2].sval), VAR_UNINITIALIZED);
			return 0;
		}
		(yyval.symboltypeval) = (yyvsp[0].symboltypeval);
	}
#line 1505 "tr-parte2.tab.c"
    break;

  case 66: /* expressao: simples_expressao  */
#line 235 "tr-parte2.y"
                                          { (yyval.symboltypeval) = (yyvsp[0].symboltypeval); }
#line 1511 "tr-parte2.tab.c"
    break;

  case 67: /* var: T_ID  */
#line 238 "tr-parte2.y"
             { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1517 "tr-parte2.tab.c"
    break;

  case 69: /* simples_expressao: soma_expressao relacional soma_expressao  */
#line 242 "tr-parte2.y"
                                                                 {
		(yyval.symboltypeval) = writeRelationalOpOnCode((yyvsp[-1].sval), "i");
	}
#line 1525 "tr-parte2.tab.c"
    break;

  case 70: /* simples_expressao: soma_expressao  */
#line 245 "tr-parte2.y"
                                                      { (yyval.symboltypeval) = (yyvsp[0].symboltypeval); }
#line 1531 "tr-parte2.tab.c"
    break;

  case 71: /* relacional: T_SMALLER_EQUALS  */
#line 248 "tr-parte2.y"
                                         { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1537 "tr-parte2.tab.c"
    break;

  case 72: /* relacional: T_SMALLER  */
#line 249 "tr-parte2.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1543 "tr-parte2.tab.c"
    break;

  case 73: /* relacional: T_GREATER  */
#line 250 "tr-parte2.y"
                                          { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1549 "tr-parte2.tab.c"
    break;

  case 74: /* relacional: T_GREATER_EQUALS  */
#line 251 "tr-parte2.y"
                                                 { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1555 "tr-parte2.tab.c"
    break;

  case 75: /* relacional: T_EQUALS  */
#line 252 "tr-parte2.y"
                                         { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1561 "tr-parte2.tab.c"
    break;

  case 76: /* relacional: T_DIFFERENT  */
#line 253 "tr-parte2.y"
                                            { (yyval.sval) = strdup((yyvsp[0].sval)); }
#line 1567 "tr-parte2.tab.c"
    break;

  case 77: /* soma_expressao: soma_expressao soma termo  */
#line 256 "tr-parte2.y"
                                                  {
		if (ceil((yyvsp[-2].symboltypeval)) == (yyvsp[-2].symboltypeval) && ceil((yyvsp[0].symboltypeval)) == (yyvsp[0].symboltypeval)) {
			writeOpOnCode((yyvsp[-1].cval), 'i');
		} else {
			writeOpOnCode((yyvsp[-1].cval), 'f');
		}
		(yyval.symboltypeval) = (yyvsp[-2].symboltypeval);
	}
#line 1580 "tr-parte2.tab.c"
    break;

  case 78: /* soma_expressao: termo  */
#line 264 "tr-parte2.y"
                      { (yyval.symboltypeval) = (yyvsp[0].symboltypeval); }
#line 1586 "tr-parte2.tab.c"
    break;

  case 79: /* soma: T_SUM  */
#line 267 "tr-parte2.y"
              { (yyval.cval) = (yyvsp[0].cval); }
#line 1592 "tr-parte2.tab.c"
    break;

  case 80: /* soma: T_SUB  */
#line 268 "tr-parte2.y"
                      { (yyval.cval) = (yyvsp[0].cval); }
#line 1598 "tr-parte2.tab.c"
    break;

  case 81: /* termo: termo mult fator  */
#line 271 "tr-parte2.y"
                                 {
		if (ceil((yyvsp[-2].symboltypeval)) == (yyvsp[-2].symboltypeval) && ceil((yyvsp[0].symboltypeval)) == (yyvsp[0].symboltypeval)) {
			writeOpOnCode((yyvsp[-1].cval), 'i');
		} else {
			writeOpOnCode((yyvsp[-1].cval), 'f');
		}
		(yyval.symboltypeval) = (yyvsp[-2].symboltypeval);
	}
#line 1611 "tr-parte2.tab.c"
    break;

  case 82: /* termo: fator  */
#line 279 "tr-parte2.y"
                              { (yyval.symboltypeval) = (yyvsp[0].symboltypeval); }
#line 1617 "tr-parte2.tab.c"
    break;

  case 83: /* mult: T_MULT  */
#line 282 "tr-parte2.y"
                       { (yyval.cval) = (yyvsp[0].cval); }
#line 1623 "tr-parte2.tab.c"
    break;

  case 84: /* mult: T_DIV  */
#line 283 "tr-parte2.y"
                              { (yyval.cval) = (yyvsp[0].cval); }
#line 1629 "tr-parte2.tab.c"
    break;

  case 85: /* fator: T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS  */
#line 286 "tr-parte2.y"
                                                                 { (yyval.symboltypeval) = (yyvsp[-1].symboltypeval); }
#line 1635 "tr-parte2.tab.c"
    break;

  case 86: /* fator: var  */
#line 287 "tr-parte2.y"
                            {
		if (isError(loadVariable(table, (yyvsp[0].sval)))) {
			printError(table, (yyvsp[0].sval), LOAD_UNINITIALIZED_VAR);
			return 0;
		}
	}
#line 1646 "tr-parte2.tab.c"
    break;

  case 88: /* fator: T_INT  */
#line 294 "tr-parte2.y"
                               { writeIntOnCode((yyvsp[0].ival)); (yyval.symboltypeval) = (yyvsp[0].ival); }
#line 1652 "tr-parte2.tab.c"
    break;

  case 89: /* fator: T_FLOAT  */
#line 295 "tr-parte2.y"
                                 { writeFloatOnCode((yyvsp[0].fval)); (yyval.symboltypeval) = (yyvsp[0].fval); }
#line 1658 "tr-parte2.tab.c"
    break;

  case 90: /* ativacao: T_ID T_OPEN_PARENTHESIS args T_CLOSE_PARENTHESIS  */
#line 298 "tr-parte2.y"
                                                                 { 
		Row* token = getToken(table, (yyvsp[-3].sval));
		if (strcmp(token->token, "function") == 0) {
			(yyval.sval) = (yyvsp[-1].sval);
		} else if (strcmp(token->token, "procedure") == 0) {
			printError(table, (yyvsp[-3].sval), RETURN_OF_PROC);
			return 0;
		} else {
			printError(table, (yyvsp[-3].sval), NOT_A_FUNC);
			return 0;
		}
	}
#line 1675 "tr-parte2.tab.c"
    break;

  case 91: /* args: arg_lista  */
#line 312 "tr-parte2.y"
                          { (yyval.sval) = (yyvsp[0].sval); }
#line 1681 "tr-parte2.tab.c"
    break;


#line 1685 "tr-parte2.tab.c"

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

#line 320 "tr-parte2.y"


int main(int argc, char **argv) {
    ++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	do {
		yyparse();

	} while(!feof(yyin));
	
	return 0;
}

void yyerror (char const *s) {
   fprintf (stderr, "Syntax Error\n");
}
