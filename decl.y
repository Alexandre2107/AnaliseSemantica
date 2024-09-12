%token T_PROGRAMA T_INICIO T_FIM
%token T_LEIA T_ESCREVA
%token T_SE T_ENTAO T_SENAO T_FIMSE
%token T_FOR T_ENQTO T_FACA T_FIMENQTO
%token T_NAO
%token T_ATRIB T_ABRE T_FECHA T_VIRG
%token T_INTEIRO T_FLOAT T_STRING T_CHAR T_LOGICO
%token T_V T_F

%left T_E T_OU
%left T_IGUAL
%left T_MAIOR T_MENOR
%left T_MAIS T_MENOS
%left T_VEZES T_DIV

%left '+' '-'
%left '*' '/'

%nonassoc UMINUS                                //A declaracao %nonassoc UMINUS especifica que o operador unario negativo (-) tem associacao nao associativa.

%union {
    int ival;
    char* name;
}

%token <ival> T_NUMERO
%token <name> T_IDENTIF

%type <ival> expressao
%type <ival> termo

%{
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
%}

%%

programa:
        cabecalho                                               {printf("INPP\n");}
        variaveis                                               {printf("AMEM %d\n", quantVariaveis);}
        T_INICIO
        lista_comandos
        T_FIM                                                    {printf("FIMP\n");}
        ;

cabecalho:
        T_PROGRAMA T_IDENTIF
        ;

variaveis:
        declaracao_variaveis
        | 
        ;

    
declaracao_variaveis:
        tipo lista_variaveis declaracao_variaveis
        | tipo lista_variaveis
        ;

tipo:
        T_INTEIRO
        | T_FLOAT
        | T_STRING
        | T_CHAR
        | T_LOGICO
        ;

lista_variaveis:
        T_IDENTIF lista_variaveis
        | T_IDENTIF
        ;

lista_comandos:
        comando lista_comandos
        | 
        ;

comando:
        entrada_saida
        | repeticao
        | selecao
        | atribuicao
        ;

entrada_saida:
        leitura
        | escrita
        ;

leitura:
        T_LEIA T_IDENTIF                                        {printf("LEIA\n"); printf("ARZG %d\n", buscarSimboloPosicao(tabela, $2));}
        ;

escrita:
        T_ESCREVA expressao                                     {printf("ESCR\n");}
        ;

repeticao:
        T_ENQTO                                                 {printf("L%d NADA\n", linha);}
        expressao
        T_FACA                                                  {linha++; printf("DSVF L%d\n", linha);} 
        lista_comandos
        T_FIMENQTO                                              {linha--; printf("DSVS L%d\n", linha); linha++; printf("L%d NADA\n", linha); linha++;}
        ;

selecao:
        T_SE expressao                                          {printf("DSVF L%d\n", linha); linha++;} 
        T_ENTAO lista_comandos                                  {printf("DSVS L%d\n", linha++); linha--; linha--; printf("L%d NADA\n", linha++);} 
        T_SENAO lista_comandos                                  {printf("L%d NADA\n", linha++);} 
        T_FIMSE
        ;

atribuicao:
        T_IDENTIF T_ATRIB expressao                             {
                                                                        printf("ARZG %d\n", buscarSimboloPosicao(tabela, $1));
                                                                }
        ;
    
expressao:
        expressao T_VEZES expressao                             {
                                                                        $$ = $1 * $3; 
                                                                        printf("MULT\n");
                                                                }
        | expressao T_DIV expressao                             {
                                                                        if ($3 != 0){ 
                                                                                $$ = floor($1 / $3);
                                                                                printf("DIVI\n");
                                                                        }else {
                                                                                yyerror("Nao eh possivel fazer divisao por zero");
                                                                                return;
                                                                        }
                                                                }
        | expressao T_MAIS expressao                            {
                                                                        $$ = $1 + $3;
                                                                        printf("SOMA\n");
                                                                }      
        | expressao T_MENOS expressao                           {
                                                                        $$ = $1 - $3;
                                                                        printf("SUBT\n");
                                                                }    
        | expressao T_MAIOR expressao                           {
                                                                        $$ = ($1 > $3) ? 1 : 0;
                                                                        printf("CMMA\n");
                                                                }
        | expressao T_MENOR expressao                           {
                                                                        $$ = ($1 < $3) ? 1 : 0;
                                                                        printf("CMME\n");
                                                                }
        | expressao T_IGUAL expressao                           {
                                                                        $$ = ($1 == $3) ? 1 : 0;
                                                                        printf("CMIG\n");
                                                                }
        | expressao T_E expressao                               {
                                                                        $$ = ($1 && $3) ? 1 : 0;
                                                                        printf("CONJ\n");
                                                                }
        | expressao T_OU expressao                              {
                                                                        $$ = ($1 || $3) ? 1 : 0;
                                                                        printf("DISJ\n");
                                                                }
        | T_MENOS expressao %prec UMINUS                        {
                                                                        $$ = -$2;
                                                                        printf("SUBT\n");
                                                                }
        | T_ABRE expressao T_FECHA                              { 
                                                                        $$ = $2;
                                                                } 
        | termo                                                 {    
                                                                        $$ = $1;                                           
                                                                }
        ;

termo:
        T_IDENTIF                                               {
                                                                        printf("CRVG %d\n", buscarSimboloPosicao(tabela, $1));
                                                                }
        |T_NUMERO                                               {
                                                                        int n = $1;
                                                                        $$ = n;
                                                                        printf("CRCT %d\n", $$);
                                                                }
        | T_V                                                   {
                                                                        $$=true;
                                                                        printf("CRCT 1\n");
                                                                }
        | T_F                                                   {
                                                                        $$=false;
                                                                        printf("CRCT 0\n");
                                                                }
        | T_NAO termo                                           {
                                                                        $$ = ($2) ? 0 : 1;
                                                                        printf("NEGA\n");
                                                                }
        ;

%%

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
