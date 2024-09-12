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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_PROGRAMA = 258,              /* T_PROGRAMA  */
    T_INICIO = 259,                /* T_INICIO  */
    T_FIM = 260,                   /* T_FIM  */
    T_LEIA = 261,                  /* T_LEIA  */
    T_ESCREVA = 262,               /* T_ESCREVA  */
    T_SE = 263,                    /* T_SE  */
    T_ENTAO = 264,                 /* T_ENTAO  */
    T_SENAO = 265,                 /* T_SENAO  */
    T_FIMSE = 266,                 /* T_FIMSE  */
    T_FOR = 267,                   /* T_FOR  */
    T_ENQTO = 268,                 /* T_ENQTO  */
    T_FACA = 269,                  /* T_FACA  */
    T_FIMENQTO = 270,              /* T_FIMENQTO  */
    T_NAO = 271,                   /* T_NAO  */
    T_ATRIB = 272,                 /* T_ATRIB  */
    T_ABRE = 273,                  /* T_ABRE  */
    T_FECHA = 274,                 /* T_FECHA  */
    T_VIRG = 275,                  /* T_VIRG  */
    T_INTEIRO = 276,               /* T_INTEIRO  */
    T_FLOAT = 277,                 /* T_FLOAT  */
    T_STRING = 278,                /* T_STRING  */
    T_CHAR = 279,                  /* T_CHAR  */
    T_LOGICO = 280,                /* T_LOGICO  */
    T_V = 281,                     /* T_V  */
    T_F = 282,                     /* T_F  */
    T_E = 283,                     /* T_E  */
    T_OU = 284,                    /* T_OU  */
    T_IGUAL = 285,                 /* T_IGUAL  */
    T_MAIOR = 286,                 /* T_MAIOR  */
    T_MENOR = 287,                 /* T_MENOR  */
    T_MAIS = 288,                  /* T_MAIS  */
    T_MENOS = 289,                 /* T_MENOS  */
    T_VEZES = 290,                 /* T_VEZES  */
    T_DIV = 291,                   /* T_DIV  */
    UMINUS = 292,                  /* UMINUS  */
    T_NUMERO = 293,                /* T_NUMERO  */
    T_IDENTIF = 294                /* T_IDENTIF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_PROGRAMA 258
#define T_INICIO 259
#define T_FIM 260
#define T_LEIA 261
#define T_ESCREVA 262
#define T_SE 263
#define T_ENTAO 264
#define T_SENAO 265
#define T_FIMSE 266
#define T_FOR 267
#define T_ENQTO 268
#define T_FACA 269
#define T_FIMENQTO 270
#define T_NAO 271
#define T_ATRIB 272
#define T_ABRE 273
#define T_FECHA 274
#define T_VIRG 275
#define T_INTEIRO 276
#define T_FLOAT 277
#define T_STRING 278
#define T_CHAR 279
#define T_LOGICO 280
#define T_V 281
#define T_F 282
#define T_E 283
#define T_OU 284
#define T_IGUAL 285
#define T_MAIOR 286
#define T_MENOR 287
#define T_MAIS 288
#define T_MENOS 289
#define T_VEZES 290
#define T_DIV 291
#define UMINUS 292
#define T_NUMERO 293
#define T_IDENTIF 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "decl.y"

    int ival;
    char* name;

#line 205 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_PROGRAMA = 3,                 /* T_PROGRAMA  */
  YYSYMBOL_T_INICIO = 4,                   /* T_INICIO  */
  YYSYMBOL_T_FIM = 5,                      /* T_FIM  */
  YYSYMBOL_T_LEIA = 6,                     /* T_LEIA  */
  YYSYMBOL_T_ESCREVA = 7,                  /* T_ESCREVA  */
  YYSYMBOL_T_SE = 8,                       /* T_SE  */
  YYSYMBOL_T_ENTAO = 9,                    /* T_ENTAO  */
  YYSYMBOL_T_SENAO = 10,                   /* T_SENAO  */
  YYSYMBOL_T_FIMSE = 11,                   /* T_FIMSE  */
  YYSYMBOL_T_FOR = 12,                     /* T_FOR  */
  YYSYMBOL_T_ENQTO = 13,                   /* T_ENQTO  */
  YYSYMBOL_T_FACA = 14,                    /* T_FACA  */
  YYSYMBOL_T_FIMENQTO = 15,                /* T_FIMENQTO  */
  YYSYMBOL_T_NAO = 16,                     /* T_NAO  */
  YYSYMBOL_T_ATRIB = 17,                   /* T_ATRIB  */
  YYSYMBOL_T_ABRE = 18,                    /* T_ABRE  */
  YYSYMBOL_T_FECHA = 19,                   /* T_FECHA  */
  YYSYMBOL_T_VIRG = 20,                    /* T_VIRG  */
  YYSYMBOL_T_INTEIRO = 21,                 /* T_INTEIRO  */
  YYSYMBOL_T_FLOAT = 22,                   /* T_FLOAT  */
  YYSYMBOL_T_STRING = 23,                  /* T_STRING  */
  YYSYMBOL_T_CHAR = 24,                    /* T_CHAR  */
  YYSYMBOL_T_LOGICO = 25,                  /* T_LOGICO  */
  YYSYMBOL_T_V = 26,                       /* T_V  */
  YYSYMBOL_T_F = 27,                       /* T_F  */
  YYSYMBOL_T_E = 28,                       /* T_E  */
  YYSYMBOL_T_OU = 29,                      /* T_OU  */
  YYSYMBOL_T_IGUAL = 30,                   /* T_IGUAL  */
  YYSYMBOL_T_MAIOR = 31,                   /* T_MAIOR  */
  YYSYMBOL_T_MENOR = 32,                   /* T_MENOR  */
  YYSYMBOL_T_MAIS = 33,                    /* T_MAIS  */
  YYSYMBOL_T_MENOS = 34,                   /* T_MENOS  */
  YYSYMBOL_T_VEZES = 35,                   /* T_VEZES  */
  YYSYMBOL_T_DIV = 36,                     /* T_DIV  */
  YYSYMBOL_37_ = 37,                       /* '+'  */
  YYSYMBOL_38_ = 38,                       /* '-'  */
  YYSYMBOL_39_ = 39,                       /* '*'  */
  YYSYMBOL_40_ = 40,                       /* '/'  */
  YYSYMBOL_UMINUS = 41,                    /* UMINUS  */
  YYSYMBOL_T_NUMERO = 42,                  /* T_NUMERO  */
  YYSYMBOL_T_IDENTIF = 43,                 /* T_IDENTIF  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_programa = 45,                  /* programa  */
  YYSYMBOL_46_1 = 46,                      /* $@1  */
  YYSYMBOL_47_2 = 47,                      /* $@2  */
  YYSYMBOL_cabecalho = 48,                 /* cabecalho  */
  YYSYMBOL_variaveis = 49,                 /* variaveis  */
  YYSYMBOL_declaracao_variaveis = 50,      /* declaracao_variaveis  */
  YYSYMBOL_tipo = 51,                      /* tipo  */
  YYSYMBOL_lista_variaveis = 52,           /* lista_variaveis  */
  YYSYMBOL_lista_comandos = 53,            /* lista_comandos  */
  YYSYMBOL_comando = 54,                   /* comando  */
  YYSYMBOL_entrada_saida = 55,             /* entrada_saida  */
  YYSYMBOL_leitura = 56,                   /* leitura  */
  YYSYMBOL_escrita = 57,                   /* escrita  */
  YYSYMBOL_repeticao = 58,                 /* repeticao  */
  YYSYMBOL_59_3 = 59,                      /* $@3  */
  YYSYMBOL_60_4 = 60,                      /* $@4  */
  YYSYMBOL_selecao = 61,                   /* selecao  */
  YYSYMBOL_62_5 = 62,                      /* $@5  */
  YYSYMBOL_63_6 = 63,                      /* $@6  */
  YYSYMBOL_64_7 = 64,                      /* $@7  */
  YYSYMBOL_atribuicao = 65,                /* atribuicao  */
  YYSYMBOL_expressao = 66,                 /* expressao  */
  YYSYMBOL_termo = 67                      /* termo  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 32 "decl.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
    #include <math.h>

    #include "tabelaSimbolos.h"

    extern char* yytext;
    extern FILE *yyin;

    extern int yylex(void);
    extern int yyparse(void);
    void yyerror(const char *);

    extern int quantVariaveis;
    extern TabelaSimbolos* tabela;

    int linha = 1;

#line 320 "y.tab.c"


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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   109

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  51
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  85

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
       2,     2,    39,    37,     2,    38,     2,    40,     2,     2,
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
      35,    36,    41,    42,    43
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    57,    57,    58,    57,    65,    69,    70,    75,    76,
      80,    81,    82,    83,    84,    88,    89,    93,    94,    98,
      99,   100,   101,   105,   106,   110,   114,   118,   120,   118,
     126,   127,   128,   126,   133,   139,   143,   152,   156,   160,
     164,   168,   172,   176,   180,   184,   187,   193,   196,   201,
     205,   209
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
  "\"end of file\"", "error", "\"invalid token\"", "T_PROGRAMA",
  "T_INICIO", "T_FIM", "T_LEIA", "T_ESCREVA", "T_SE", "T_ENTAO", "T_SENAO",
  "T_FIMSE", "T_FOR", "T_ENQTO", "T_FACA", "T_FIMENQTO", "T_NAO",
  "T_ATRIB", "T_ABRE", "T_FECHA", "T_VIRG", "T_INTEIRO", "T_FLOAT",
  "T_STRING", "T_CHAR", "T_LOGICO", "T_V", "T_F", "T_E", "T_OU", "T_IGUAL",
  "T_MAIOR", "T_MENOR", "T_MAIS", "T_MENOS", "T_VEZES", "T_DIV", "'+'",
  "'-'", "'*'", "'/'", "UMINUS", "T_NUMERO", "T_IDENTIF", "$accept",
  "programa", "$@1", "$@2", "cabecalho", "variaveis",
  "declaracao_variaveis", "tipo", "lista_variaveis", "lista_comandos",
  "comando", "entrada_saida", "leitura", "escrita", "repeticao", "$@3",
  "$@4", "selecao", "$@5", "$@6", "$@7", "atribuicao", "expressao",
  "termo", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-31)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       9,   -30,    15,   -31,   -31,   -31,    84,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -24,    12,   -24,    84,    -4,   -31,
     -31,   -23,    25,    25,   -31,     4,    17,    -4,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     2,    25,   -31,   -31,    25,
     -31,   -31,    68,   -31,    68,    25,    25,   -31,   -31,   -31,
      59,   -31,    25,    25,    25,    25,    25,    25,    25,    25,
      25,    16,    41,    68,   -31,    30,    30,    48,   -28,   -28,
     -25,   -25,   -31,   -31,    -4,   -31,   -31,    -4,    32,    11,
      -4,   -31,   -31,    29,   -31
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     5,     1,     7,    10,    11,    12,
      13,    14,     3,     6,     0,     0,    16,     9,    18,    15,
       8,     0,     0,     0,    27,     0,     0,    18,    19,    23,
      24,    20,    21,    22,    25,     0,     0,    49,    50,     0,
      48,    47,    26,    46,    30,     0,     0,     4,    17,    51,
       0,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    45,    42,    43,    41,    39,    40,
      37,    38,    35,    36,    18,    28,    31,    18,     0,     0,
      18,    29,    32,     0,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,   -31,   -31,   -31,   -31,    10,   -31,    33,   -27,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -22,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,    15,     3,    12,    13,    14,    17,    26,
      27,    28,    29,    30,    31,    45,    77,    32,    61,    78,
      83,    33,    42,    43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      48,    44,    21,    22,    23,    57,    58,    59,    60,    24,
      59,    60,     1,     4,    50,     5,    18,    51,    35,    16,
      34,    46,    47,    62,    63,    74,    81,    20,    37,    38,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    25,
      84,    35,    80,    36,    40,    41,     0,    76,    49,    19,
      79,    37,    38,    82,     0,    75,     0,     0,     0,    39,
      54,    55,    56,    57,    58,    59,    60,    40,    41,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    64,    55,
      56,    57,    58,    59,    60,     0,     0,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    52,    53,    54,    55,
      56,    57,    58,    59,    60,     7,     8,     9,    10,    11
};

static const yytype_int8 yycheck[] =
{
      27,    23,     6,     7,     8,    33,    34,    35,    36,    13,
      35,    36,     3,    43,    36,     0,     4,    39,    16,    43,
      43,    17,     5,    45,    46,     9,    15,    17,    26,    27,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    43,
      11,    16,    10,    18,    42,    43,    -1,    74,    35,    16,
      77,    26,    27,    80,    -1,    14,    -1,    -1,    -1,    34,
      30,    31,    32,    33,    34,    35,    36,    42,    43,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    19,    31,
      32,    33,    34,    35,    36,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    21,    22,    23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    45,    48,    43,     0,    46,    21,    22,    23,
      24,    25,    49,    50,    51,    47,    43,    52,     4,    52,
      50,     6,     7,     8,    13,    43,    53,    54,    55,    56,
      57,    58,    61,    65,    43,    16,    18,    26,    27,    34,
      42,    43,    66,    67,    66,    59,    17,     5,    53,    67,
      66,    66,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    62,    66,    66,    19,    66,    66,    66,    66,    66,
      66,    66,    66,    66,     9,    14,    53,    60,    63,    53,
      10,    15,    53,    64,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    46,    47,    45,    48,    49,    49,    50,    50,
      51,    51,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    54,    54,    55,    55,    56,    57,    59,    60,    58,
      62,    63,    64,    61,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     7,     2,     1,     0,     3,     2,
       1,     1,     1,     1,     1,     2,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     0,     7,
       0,     0,     0,    10,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     1,     1,
       1,     2
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
#line 57 "decl.y"
                                                                {printf("INPP\n");}
#line 1338 "y.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 58 "decl.y"
                                                                {printf("AMEM %d\n", quantVariaveis);}
#line 1344 "y.tab.c"
    break;

  case 4: /* programa: cabecalho $@1 variaveis $@2 T_INICIO lista_comandos T_FIM  */
#line 61 "decl.y"
                                                                 {printf("FIMP\n");}
#line 1350 "y.tab.c"
    break;

  case 25: /* leitura: T_LEIA T_IDENTIF  */
#line 110 "decl.y"
                                                                {printf("LEIA\n"); printf("ARZG %d\n", buscarSimboloPosicao(tabela, (yyvsp[0].name)));}
#line 1356 "y.tab.c"
    break;

  case 26: /* escrita: T_ESCREVA expressao  */
#line 114 "decl.y"
                                                                {printf("ESCR\n");}
#line 1362 "y.tab.c"
    break;

  case 27: /* $@3: %empty  */
#line 118 "decl.y"
                                                                {printf("L%d NADA\n", linha);}
#line 1368 "y.tab.c"
    break;

  case 28: /* $@4: %empty  */
#line 120 "decl.y"
                                                                {linha++; printf("DSVF L%d\n", linha);}
#line 1374 "y.tab.c"
    break;

  case 29: /* repeticao: T_ENQTO $@3 expressao T_FACA $@4 lista_comandos T_FIMENQTO  */
#line 122 "decl.y"
                                                                {linha--; printf("DSVS L%d\n", linha); linha++; printf("L%d NADA\n", linha); linha++;}
#line 1380 "y.tab.c"
    break;

  case 30: /* $@5: %empty  */
#line 126 "decl.y"
                                                                {printf("DSVF L%d\n", linha); linha++;}
#line 1386 "y.tab.c"
    break;

  case 31: /* $@6: %empty  */
#line 127 "decl.y"
                                                                {printf("DSVS L%d\n", linha++); linha--; linha--; printf("L%d NADA\n", linha++);}
#line 1392 "y.tab.c"
    break;

  case 32: /* $@7: %empty  */
#line 128 "decl.y"
                                                                {printf("L%d NADA\n", linha++);}
#line 1398 "y.tab.c"
    break;

  case 34: /* atribuicao: T_IDENTIF T_ATRIB expressao  */
#line 133 "decl.y"
                                                                {
                                                                        printf("ARZG %d\n", buscarSimboloPosicao(tabela, (yyvsp[-2].name)));
                                                                }
#line 1406 "y.tab.c"
    break;

  case 35: /* expressao: expressao T_VEZES expressao  */
#line 139 "decl.y"
                                                                {
                                                                        (yyval.ival) = (yyvsp[-2].ival) * (yyvsp[0].ival); 
                                                                        printf("MULT\n");
                                                                }
#line 1415 "y.tab.c"
    break;

  case 36: /* expressao: expressao T_DIV expressao  */
#line 143 "decl.y"
                                                                {
                                                                        if ((yyvsp[0].ival) != 0){ 
                                                                                (yyval.ival) = floor((yyvsp[-2].ival) / (yyvsp[0].ival));
                                                                                printf("DIVI\n");
                                                                        }else {
                                                                                yyerror("Nao eh possivel fazer divisao por zero");
                                                                                return;
                                                                        }
                                                                }
#line 1429 "y.tab.c"
    break;

  case 37: /* expressao: expressao T_MAIS expressao  */
#line 152 "decl.y"
                                                                {
                                                                        (yyval.ival) = (yyvsp[-2].ival) + (yyvsp[0].ival);
                                                                        printf("SOMA\n");
                                                                }
#line 1438 "y.tab.c"
    break;

  case 38: /* expressao: expressao T_MENOS expressao  */
#line 156 "decl.y"
                                                                {
                                                                        (yyval.ival) = (yyvsp[-2].ival) - (yyvsp[0].ival);
                                                                        printf("SUBT\n");
                                                                }
#line 1447 "y.tab.c"
    break;

  case 39: /* expressao: expressao T_MAIOR expressao  */
#line 160 "decl.y"
                                                                {
                                                                        (yyval.ival) = ((yyvsp[-2].ival) > (yyvsp[0].ival)) ? 1 : 0;
                                                                        printf("CMMA\n");
                                                                }
#line 1456 "y.tab.c"
    break;

  case 40: /* expressao: expressao T_MENOR expressao  */
#line 164 "decl.y"
                                                                {
                                                                        (yyval.ival) = ((yyvsp[-2].ival) < (yyvsp[0].ival)) ? 1 : 0;
                                                                        printf("CMME\n");
                                                                }
#line 1465 "y.tab.c"
    break;

  case 41: /* expressao: expressao T_IGUAL expressao  */
#line 168 "decl.y"
                                                                {
                                                                        (yyval.ival) = ((yyvsp[-2].ival) == (yyvsp[0].ival)) ? 1 : 0;
                                                                        printf("CMIG\n");
                                                                }
#line 1474 "y.tab.c"
    break;

  case 42: /* expressao: expressao T_E expressao  */
#line 172 "decl.y"
                                                                {
                                                                        (yyval.ival) = ((yyvsp[-2].ival) && (yyvsp[0].ival)) ? 1 : 0;
                                                                        printf("CONJ\n");
                                                                }
#line 1483 "y.tab.c"
    break;

  case 43: /* expressao: expressao T_OU expressao  */
#line 176 "decl.y"
                                                                {
                                                                        (yyval.ival) = ((yyvsp[-2].ival) || (yyvsp[0].ival)) ? 1 : 0;
                                                                        printf("DISJ\n");
                                                                }
#line 1492 "y.tab.c"
    break;

  case 44: /* expressao: T_MENOS expressao  */
#line 180 "decl.y"
                                                                {
                                                                        (yyval.ival) = -(yyvsp[0].ival);
                                                                        printf("SUBT\n");
                                                                }
#line 1501 "y.tab.c"
    break;

  case 45: /* expressao: T_ABRE expressao T_FECHA  */
#line 184 "decl.y"
                                                                { 
                                                                        (yyval.ival) = (yyvsp[-1].ival);
                                                                }
#line 1509 "y.tab.c"
    break;

  case 46: /* expressao: termo  */
#line 187 "decl.y"
                                                                {    
                                                                        (yyval.ival) = (yyvsp[0].ival);                                           
                                                                }
#line 1517 "y.tab.c"
    break;

  case 47: /* termo: T_IDENTIF  */
#line 193 "decl.y"
                                                                {
                                                                        printf("CRVG %d\n", buscarSimboloPosicao(tabela, (yyvsp[0].name)));
                                                                }
#line 1525 "y.tab.c"
    break;

  case 48: /* termo: T_NUMERO  */
#line 196 "decl.y"
                                                                {
                                                                        int n = (yyvsp[0].ival);
                                                                        (yyval.ival) = n;
                                                                        printf("CRCT %d\n", (yyval.ival));
                                                                }
#line 1535 "y.tab.c"
    break;

  case 49: /* termo: T_V  */
#line 201 "decl.y"
                                                                {
                                                                        (yyval.ival)=true;
                                                                        printf("CRCT 1\n");
                                                                }
#line 1544 "y.tab.c"
    break;

  case 50: /* termo: T_F  */
#line 205 "decl.y"
                                                                {
                                                                        (yyval.ival)=false;
                                                                        printf("CRCT 0\n");
                                                                }
#line 1553 "y.tab.c"
    break;

  case 51: /* termo: T_NAO termo  */
#line 209 "decl.y"
                                                                {
                                                                        (yyval.ival) = ((yyvsp[0].ival)) ? 0 : 1;
                                                                        printf("NEGA\n");
                                                                }
#line 1562 "y.tab.c"
    break;


#line 1566 "y.tab.c"

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

#line 215 "decl.y"


void yyerror(const char *s){
    printf("%s \n", s);
}

int quantVariaveis = -1;
TabelaSimbolos* tabela;

int main(void){
    FILE *fp; int i;
    fp=fopen("./avaliacao.simples","r");
    
    tabela = criarTabelaSimbolos();

    yyin=fp;
    yyparse();

    imprimirTabelaSimbolos(tabela);

    liberarTabelaSimbolos(tabela);
    
    return 0;
}
