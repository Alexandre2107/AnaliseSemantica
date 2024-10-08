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
#line 1 "sintatico.y"

    #include <stdio.h>               
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>
    #include <math.h>
    #include "utils.h"          
    extern HashTable* tabH;

    extern char* yytext;                
    extern FILE *yyin;
    extern int yylex(void);            
    int yyparse(void);
    void yyerror(char *);

    int yylex(void);                    
    void yyerror(char *);   
    int present_label = 1;             
     

#line 92 "y.tab.c"

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
    T_INICIO = 258,                /* T_INICIO  */
    T_FIM = 259,                   /* T_FIM  */
    T_PROGRAMA = 260,              /* T_PROGRAMA  */
    T_LEIA = 261,                  /* T_LEIA  */
    T_ESCREVA = 262,               /* T_ESCREVA  */
    T_ENQTO = 263,                 /* T_ENQTO  */
    T_FACA = 264,                  /* T_FACA  */
    T_FIMENQTO = 265,              /* T_FIMENQTO  */
    T_SE = 266,                    /* T_SE  */
    T_ENTAO = 267,                 /* T_ENTAO  */
    T_SENAO = 268,                 /* T_SENAO  */
    T_FIMSE = 269,                 /* T_FIMSE  */
    T_ATRIB = 270,                 /* T_ATRIB  */
    T_NAO = 271,                   /* T_NAO  */
    T_ABRE = 272,                  /* T_ABRE  */
    T_FECHA = 273,                 /* T_FECHA  */
    T_E = 274,                     /* T_E  */
    T_OU = 275,                    /* T_OU  */
    T_IGUAL = 276,                 /* T_IGUAL  */
    T_MAIOR = 277,                 /* T_MAIOR  */
    T_MENOR = 278,                 /* T_MENOR  */
    T_MAIS = 279,                  /* T_MAIS  */
    T_MENOS = 280,                 /* T_MENOS  */
    T_VEZES = 281,                 /* T_VEZES  */
    T_DIV = 282,                   /* T_DIV  */
    UMINUS = 283,                  /* UMINUS  */
    T_LOGICO = 284,                /* T_LOGICO  */
    T_INTEIRO = 285,               /* T_INTEIRO  */
    T_NUMERO = 286,                /* T_NUMERO  */
    T_V = 287,                     /* T_V  */
    T_F = 288,                     /* T_F  */
    T_IDENTIF = 289                /* T_IDENTIF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_INICIO 258
#define T_FIM 259
#define T_PROGRAMA 260
#define T_LEIA 261
#define T_ESCREVA 262
#define T_ENQTO 263
#define T_FACA 264
#define T_FIMENQTO 265
#define T_SE 266
#define T_ENTAO 267
#define T_SENAO 268
#define T_FIMSE 269
#define T_ATRIB 270
#define T_NAO 271
#define T_ABRE 272
#define T_FECHA 273
#define T_E 274
#define T_OU 275
#define T_IGUAL 276
#define T_MAIOR 277
#define T_MENOR 278
#define T_MAIS 279
#define T_MENOS 280
#define T_VEZES 281
#define T_DIV 282
#define UMINUS 283
#define T_LOGICO 284
#define T_INTEIRO 285
#define T_NUMERO 286
#define T_V 287
#define T_F 288
#define T_IDENTIF 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "sintatico.y"

    int ival;
    char* name;

#line 218 "y.tab.c"

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
  YYSYMBOL_T_INICIO = 3,                   /* T_INICIO  */
  YYSYMBOL_T_FIM = 4,                      /* T_FIM  */
  YYSYMBOL_T_PROGRAMA = 5,                 /* T_PROGRAMA  */
  YYSYMBOL_T_LEIA = 6,                     /* T_LEIA  */
  YYSYMBOL_T_ESCREVA = 7,                  /* T_ESCREVA  */
  YYSYMBOL_T_ENQTO = 8,                    /* T_ENQTO  */
  YYSYMBOL_T_FACA = 9,                     /* T_FACA  */
  YYSYMBOL_T_FIMENQTO = 10,                /* T_FIMENQTO  */
  YYSYMBOL_T_SE = 11,                      /* T_SE  */
  YYSYMBOL_T_ENTAO = 12,                   /* T_ENTAO  */
  YYSYMBOL_T_SENAO = 13,                   /* T_SENAO  */
  YYSYMBOL_T_FIMSE = 14,                   /* T_FIMSE  */
  YYSYMBOL_T_ATRIB = 15,                   /* T_ATRIB  */
  YYSYMBOL_T_NAO = 16,                     /* T_NAO  */
  YYSYMBOL_T_ABRE = 17,                    /* T_ABRE  */
  YYSYMBOL_T_FECHA = 18,                   /* T_FECHA  */
  YYSYMBOL_T_E = 19,                       /* T_E  */
  YYSYMBOL_T_OU = 20,                      /* T_OU  */
  YYSYMBOL_T_IGUAL = 21,                   /* T_IGUAL  */
  YYSYMBOL_T_MAIOR = 22,                   /* T_MAIOR  */
  YYSYMBOL_T_MENOR = 23,                   /* T_MENOR  */
  YYSYMBOL_T_MAIS = 24,                    /* T_MAIS  */
  YYSYMBOL_T_MENOS = 25,                   /* T_MENOS  */
  YYSYMBOL_T_VEZES = 26,                   /* T_VEZES  */
  YYSYMBOL_T_DIV = 27,                     /* T_DIV  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_UMINUS = 32,                    /* UMINUS  */
  YYSYMBOL_T_LOGICO = 33,                  /* T_LOGICO  */
  YYSYMBOL_T_INTEIRO = 34,                 /* T_INTEIRO  */
  YYSYMBOL_T_NUMERO = 35,                  /* T_NUMERO  */
  YYSYMBOL_T_V = 36,                       /* T_V  */
  YYSYMBOL_T_F = 37,                       /* T_F  */
  YYSYMBOL_T_IDENTIF = 38,                 /* T_IDENTIF  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_programa = 40,                  /* programa  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_cabecalho = 42,                 /* cabecalho  */
  YYSYMBOL_variaveis = 43,                 /* variaveis  */
  YYSYMBOL_declaracao_variaveis = 44,      /* declaracao_variaveis  */
  YYSYMBOL_tipo = 45,                      /* tipo  */
  YYSYMBOL_lista_variaveis = 46,           /* lista_variaveis  */
  YYSYMBOL_lista_comandos = 47,            /* lista_comandos  */
  YYSYMBOL_comando = 48,                   /* comando  */
  YYSYMBOL_entrada_saida = 49,             /* entrada_saida  */
  YYSYMBOL_leitura = 50,                   /* leitura  */
  YYSYMBOL_escrita = 51,                   /* escrita  */
  YYSYMBOL_repeticao = 52,                 /* repeticao  */
  YYSYMBOL_53_2 = 53,                      /* $@2  */
  YYSYMBOL_54_3 = 54,                      /* $@3  */
  YYSYMBOL_55_4 = 55,                      /* $@4  */
  YYSYMBOL_selecao = 56,                   /* selecao  */
  YYSYMBOL_57_5 = 57,                      /* $@5  */
  YYSYMBOL_58_6 = 58,                      /* $@6  */
  YYSYMBOL_59_7 = 59,                      /* $@7  */
  YYSYMBOL_atribuicao = 60,                /* atribuicao  */
  YYSYMBOL_expressao = 61,                 /* expressao  */
  YYSYMBOL_termo = 62                      /* termo  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   101

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  82

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
       2,     2,    30,    28,     2,    29,     2,    31,     2,     2,
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
      25,    26,    27,    32,    33,    34,    35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    54,    54,    54,    61,    64,    65,    69,    70,    74,
      75,    79,    80,    84,    85,    89,    90,    91,    92,    96,
      97,   101,   118,   124,   126,   128,   124,   134,   136,   138,
     133,   143,   175,   179,   191,   195,   199,   203,   207,   211,
     215,   219,   223,   226,   232,   249,   254,   258,   262
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
  "\"end of file\"", "error", "\"invalid token\"", "T_INICIO", "T_FIM",
  "T_PROGRAMA", "T_LEIA", "T_ESCREVA", "T_ENQTO", "T_FACA", "T_FIMENQTO",
  "T_SE", "T_ENTAO", "T_SENAO", "T_FIMSE", "T_ATRIB", "T_NAO", "T_ABRE",
  "T_FECHA", "T_E", "T_OU", "T_IGUAL", "T_MAIOR", "T_MENOR", "T_MAIS",
  "T_MENOS", "T_VEZES", "T_DIV", "'+'", "'-'", "'*'", "'/'", "UMINUS",
  "T_LOGICO", "T_INTEIRO", "T_NUMERO", "T_V", "T_F", "T_IDENTIF",
  "$accept", "programa", "$@1", "cabecalho", "variaveis",
  "declaracao_variaveis", "tipo", "lista_variaveis", "lista_comandos",
  "comando", "entrada_saida", "leitura", "escrita", "repeticao", "$@2",
  "$@3", "$@4", "selecao", "$@5", "$@6", "$@7", "atribuicao", "expressao",
  "termo", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-25)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       1,   -24,    24,   -25,   -25,   -25,     8,   -25,   -25,    42,
     -25,    -8,     2,    -8,     8,     9,    27,   -25,    27,    31,
      44,     2,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,    -9,    27,    27,   -25,   -25,   -25,   -25,    67,   -25,
      27,    67,    27,   -25,   -25,   -25,    58,   -25,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    48,    37,    67,
     -25,    74,    74,    -5,   -22,   -22,   -15,   -15,   -25,   -25,
     -25,     2,     2,   -25,   -25,    40,    45,     2,   -25,   -25,
      46,   -25
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     4,     1,     5,     9,    10,     0,
       6,     0,    14,    12,     8,     0,     0,    23,     0,     0,
       0,    14,    15,    19,    20,    16,    17,    18,    11,     7,
      21,     0,     0,     0,    45,    46,    47,    44,    22,    42,
       0,    27,     0,     3,    13,    48,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      43,    39,    40,    38,    36,    37,    34,    35,    32,    33,
      24,    14,    14,    28,    25,     0,     0,    14,    26,    29,
       0,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -25,   -25,   -25,   -25,   -25,    47,   -25,    41,   -21,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
     -25,   -25,   -17,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     6,     3,     9,    10,    11,    14,    20,    21,
      22,    23,    24,    25,    40,    72,    76,    26,    58,    75,
      80,    27,    38,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      44,    41,    53,    54,    55,    56,     1,    31,    15,    16,
      17,    55,    56,    18,     4,    46,    47,    51,    52,    53,
      54,    55,    56,    57,     5,    59,    34,    35,    36,    37,
      13,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      19,     7,     8,    31,    32,    12,    42,    30,    43,    71,
      73,    74,    33,    77,    28,    78,    79,    70,     0,    45,
      81,    29,    34,    35,    36,    37,     0,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    60,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    50,    51,    52,    53,    54,
      55,    56
};

static const yytype_int8 yycheck[] =
{
      21,    18,    24,    25,    26,    27,     5,    16,     6,     7,
       8,    26,    27,    11,    38,    32,    33,    22,    23,    24,
      25,    26,    27,    40,     0,    42,    35,    36,    37,    38,
      38,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      38,    33,    34,    16,    17,     3,    15,    38,     4,    12,
      71,    72,    25,    13,    13,    10,    77,     9,    -1,    31,
      14,    14,    35,    36,    37,    38,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    21,    22,    23,    24,    25,
      26,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    40,    42,    38,     0,    41,    33,    34,    43,
      44,    45,     3,    38,    46,     6,     7,     8,    11,    38,
      47,    48,    49,    50,    51,    52,    56,    60,    46,    44,
      38,    16,    17,    25,    35,    36,    37,    38,    61,    62,
      53,    61,    15,     4,    47,    62,    61,    61,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    61,    57,    61,
      18,    61,    61,    61,    61,    61,    61,    61,    61,    61,
       9,    12,    54,    47,    47,    58,    55,    13,    10,    47,
      59,    14
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    41,    40,    42,    43,    43,    44,    44,    45,
      45,    46,    46,    47,    47,    48,    48,    48,    48,    49,
      49,    50,    51,    53,    54,    55,    52,    57,    58,    59,
      56,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     6,     2,     0,     1,     3,     2,     1,
       1,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     0,     0,     8,     0,     0,     0,
      10,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     3,     1,     1,     1,     1,     2
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
#line 54 "sintatico.y"
               {printf("INPP\n");}
#line 1317 "y.tab.c"
    break;

  case 3: /* programa: cabecalho $@1 variaveis T_INICIO lista_comandos T_FIM  */
#line 57 "sintatico.y"
               {printf("FIMP \n");}
#line 1323 "y.tab.c"
    break;

  case 11: /* lista_variaveis: T_IDENTIF lista_variaveis  */
#line 79 "sintatico.y"
                               {printf("AMEM\n");}
#line 1329 "y.tab.c"
    break;

  case 12: /* lista_variaveis: T_IDENTIF  */
#line 80 "sintatico.y"
                               {printf("AMEM\n");}
#line 1335 "y.tab.c"
    break;

  case 21: /* leitura: T_LEIA T_IDENTIF  */
#line 101 "sintatico.y"
                     {   
        int valor;
        char* name_alvo = strdup((yyvsp[0].name));
        Node* node_alvo = procura(tabH, name_alvo);    

        if (node_alvo == NULL){
            yyerror("Identificador não declarado");
            return;
        }

        node_alvo->int_value = valor;
        printf("LEIA %d\n", 0);
        printf("ARZG %d\n", node_alvo->posic_pilha);
    }
#line 1354 "y.tab.c"
    break;

  case 22: /* escrita: T_ESCREVA expressao  */
#line 118 "sintatico.y"
                                        { 
                                           printf("ESCR\n");
                                        }
#line 1362 "y.tab.c"
    break;

  case 23: /* $@2: %empty  */
#line 124 "sintatico.y"
             {printf("NADA %d\n" ,present_label);}
#line 1368 "y.tab.c"
    break;

  case 24: /* $@3: %empty  */
#line 126 "sintatico.y"
            {present_label ++ ; printf("DSVF %d \n", present_label);
;}
#line 1375 "y.tab.c"
    break;

  case 25: /* $@4: %empty  */
#line 128 "sintatico.y"
                    {present_label --; printf("DSVS %d\n", present_label); present_label++; printf("NADA %d\n", present_label); present_label++;}
#line 1381 "y.tab.c"
    break;

  case 27: /* $@5: %empty  */
#line 134 "sintatico.y"
              {printf("DSVF %d \n", present_label ++);}
#line 1387 "y.tab.c"
    break;

  case 28: /* $@6: %empty  */
#line 136 "sintatico.y"
                   {printf("DSVS %d\n", present_label ++); present_label--; present_label--; printf("NADA %d\n", present_label++);}
#line 1393 "y.tab.c"
    break;

  case 29: /* $@7: %empty  */
#line 138 "sintatico.y"
                   {printf("NADA %d\n", present_label ++);}
#line 1399 "y.tab.c"
    break;

  case 30: /* selecao: T_SE expressao $@5 T_ENTAO lista_comandos $@6 T_SENAO lista_comandos $@7 T_FIMSE  */
#line 139 "sintatico.y"
            { }
#line 1405 "y.tab.c"
    break;

  case 31: /* atribuicao: T_IDENTIF T_ATRIB expressao  */
#line 143 "sintatico.y"
                                     {
        char* name_alvo = strdup((yyvsp[-2].name));
        Node* node_alvo = procura(tabH, name_alvo);

        if (node_alvo != NULL) {
        } else {
            yyerror("Identificador não foi declarado");
            return;
        }

        if(node_alvo->type == INT_TYPE){
            int result = (yyvsp[0].ival);
            set_int(tabH, name_alvo, result);
        }

        else{
            bool result = (yyvsp[0].ival);
            int bool_value;
            if(result)
                bool_value=true;
            else 
                bool_value=false;

            set_bool(tabH, name_alvo, bool_value);
        }
        printf("ARZG %d\n", node_alvo->posic_pilha);

    }
#line 1438 "y.tab.c"
    break;

  case 32: /* expressao: expressao T_VEZES expressao  */
#line 175 "sintatico.y"
                                      {
        (yyval.ival) = (yyvsp[-2].ival) * (yyvsp[0].ival);
        printf("MULT %d", (yyval.ival));
    }
#line 1447 "y.tab.c"
    break;

  case 33: /* expressao: expressao T_DIV expressao  */
#line 179 "sintatico.y"
                                  {
         if ((yyvsp[0].ival) == 0){ 
                                                    yyerror("divisão por zero");
                                                    return;
                                                  
                                                }
                                                else {
                                                    (yyval.ival) = floor((yyvsp[-2].ival)/(yyvsp[0].ival));
                                                   printf("DIVI %d \n" , (yyval.ival));
                                                    
                                                }  
    }
#line 1464 "y.tab.c"
    break;

  case 34: /* expressao: expressao T_MAIS expressao  */
#line 191 "sintatico.y"
                                    {
         (yyval.ival) = (yyvsp[-2].ival) + (yyvsp[0].ival);
         printf("SOMA %d \n", (yyval.ival));
    }
#line 1473 "y.tab.c"
    break;

  case 35: /* expressao: expressao T_MENOS expressao  */
#line 195 "sintatico.y"
                                        {
         (yyval.ival) = (yyvsp[-2].ival) - (yyvsp[0].ival);
         printf("SUBT %d \n", (yyval.ival));
    }
#line 1482 "y.tab.c"
    break;

  case 36: /* expressao: expressao T_MAIOR expressao  */
#line 199 "sintatico.y"
                                    {
         (yyval.ival) = ((yyvsp[-2].ival) > (yyvsp[0].ival)) ? 1 : 0;
         printf("CMMA \n");
    }
#line 1491 "y.tab.c"
    break;

  case 37: /* expressao: expressao T_MENOR expressao  */
#line 203 "sintatico.y"
                                       {
         (yyval.ival) = ((yyvsp[-2].ival) < (yyvsp[0].ival)) ? 1 : 0;
         printf("CMME \n");
    }
#line 1500 "y.tab.c"
    break;

  case 38: /* expressao: expressao T_IGUAL expressao  */
#line 207 "sintatico.y"
                                     {
         (yyval.ival) = ((yyvsp[-2].ival) == (yyvsp[0].ival)) ? 1 : 0;
         printf("CMIG \n");
    }
#line 1509 "y.tab.c"
    break;

  case 39: /* expressao: expressao T_E expressao  */
#line 211 "sintatico.y"
                                {
        (yyval.ival) = ((yyvsp[-2].ival) && (yyvsp[0].ival)) ? 1 : 0;
        printf("CONJ \n");
    }
#line 1518 "y.tab.c"
    break;

  case 40: /* expressao: expressao T_OU expressao  */
#line 215 "sintatico.y"
                                   {
         (yyval.ival) = ((yyvsp[-2].ival) || (yyvsp[0].ival)) ? 1 : 0;
         printf("DISJ \n");
    }
#line 1527 "y.tab.c"
    break;

  case 41: /* expressao: T_MENOS expressao  */
#line 219 "sintatico.y"
                                         {
         (yyval.ival) = -(yyvsp[0].ival);
         printf("SUBT %d \n", (yyval.ival));
    }
#line 1536 "y.tab.c"
    break;

  case 42: /* expressao: termo  */
#line 223 "sintatico.y"
                  {
         (yyval.ival) = (yyvsp[0].ival);
    }
#line 1544 "y.tab.c"
    break;

  case 43: /* expressao: T_ABRE expressao T_FECHA  */
#line 226 "sintatico.y"
                                 {
        (yyval.ival) = (yyvsp[-1].ival);
    }
#line 1552 "y.tab.c"
    break;

  case 44: /* termo: T_IDENTIF  */
#line 232 "sintatico.y"
                {
        Node* node = procura(tabH, yylval.name); 
                                                if (node != NULL) {
                                                    printf("CRVG %d \n" , node->posic_pilha);

                                                    if(node->type == INT_TYPE){
                                                        (yyval.ival) = node->int_value;
                                                    }
                                                    else{
                                                        (yyval.ival) = node->bool_value;
                                                    }
                                                }
                                                else {
                                                    yyerror("Identificador não declarado");
                                                   return;
                                                }
    }
#line 1574 "y.tab.c"
    break;

  case 45: /* termo: T_NUMERO  */
#line 249 "sintatico.y"
               {
        int num = (yyvsp[0].ival);
         (yyval.ival)=num;
         printf("CRCT %d \n", num);
    }
#line 1584 "y.tab.c"
    break;

  case 46: /* termo: T_V  */
#line 254 "sintatico.y"
          {
         (yyval.ival)=true;
         printf("CRCT %d \n" , 1);
    }
#line 1593 "y.tab.c"
    break;

  case 47: /* termo: T_F  */
#line 258 "sintatico.y"
          {
        (yyval.ival)=false;
        printf("CRCT %d \n" , 0);
    }
#line 1602 "y.tab.c"
    break;

  case 48: /* termo: T_NAO termo  */
#line 262 "sintatico.y"
                  {
         (yyval.ival) = ((yyvsp[0].ival)) ? 0 : 1;
         printf("NEGA %d \n", 0);
    }
#line 1611 "y.tab.c"
    break;


#line 1615 "y.tab.c"

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

#line 268 "sintatico.y"


void yyerror(char *s){
    extern int yylineno; 
    extern char * yytext; 
    printf("Erro registrado (%s): Erro ==> <%s> \nEncontrado em (linha: %d)\n", s, yytext, yylineno);
    return;
}
void exibe_tabs(){
    tabH = create_hash_table(100);
    yyparse();
    free_hash_table(tabH);
}
int main(void){
    FILE *f_in = fopen("/home/alexandre_rodrigues/semantico/teste.simples", "r");
    yyin = f_in;
    exibe_tabs();
    fclose(f_in);
    return 0;
}
