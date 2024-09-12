identificador       [a-zA-Z]([a-zA-Z0-9])*
numero              [0-9]+
espaco              [ \n\t\r]+

%x comentario

%{
    // INCLUDES
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>

    #include "y.tab.h"
    #include "tabelaSimbolos.h"

    extern int yylex(void);

    // void addSimboloTabela();
    
    // DECLARAÇÃO DE MÉTODOS
    void yyerror(char *);

    extern int quantVariaveis;
    bool variavelDeclarada = false;


    extern int yyleng;
    extern TabelaSimbolos* tabela;
%}

%%

programa            { /*printf("Palavra Reservada:%11s (define nome programa) - T_PROGRAMA\n", yytext);*/ return T_PROGRAMA; }
inicio              { /*printf("Palavra Reservada:%11s (indica inicio programa) - T_INICIO\n", yytext);*/ variavelDeclarada = true; return T_INICIO; }
fimprograma         { /*printf("Palavra Reservada:%11s (indica fim programa) - T_FIM\n", yytext);*/ return T_FIM; }


leia                { /*printf("Palavra Reservada:%11s (pegar valor teclado) - T_LEIA\n", yytext);*/ return T_LEIA; }
escreva             { /*printf("Palavra Reservada:%11s (printar valor terminal) - T_ESCREVA\n", yytext);*/ return T_ESCREVA; }


se                  { /*printf("Palavra Reservada:%11s (estrutura de comparacao) - T_SE\n", yytext);*/ return T_SE; }
entao               { /*printf("Palavra Reservada:%11s (define comandos estrutura de comparacao) - T_ENTAO\n", yytext);*/ return T_ENTAO; }
senao               { /*printf("Palavra Reservada:%11s (estrutura de comparacao) - T_SENAO\n", yytext);*/ return T_SENAO; }
fimse               { /*printf("Palavra Reservada:%11s (indica fim estrutura de comparacao) - T_FIMSE\n", yytext);*/ return T_FIMSE; }


for                 { /*printf("Palavra Reservada:%11s (estrutura de repeticao) - \n", yytext);*/ return T_FOR; }
enquanto            { /*printf("Palavra Reservada:%11s (estrutura de repeticao) - T_ENQTO\n", yytext);*/ return T_ENQTO; }
faca                { /*printf("Palavra Reservada:%11s (define comandos estrutura de repeticao) - T_FACA\n", yytext);*/ return T_FACA; }
fimenquanto         { /*printf("Palavra Reservada:%11s (indica fim estrutura de repeticao) - T_FIMENQTO\n", yytext);*/ return T_FIMENQTO; }


"+"                 { /*printf("Operador:%11s (operador aritmetico adicao) - T_MAIS\n", yytext);*/ return T_MAIS; }
"-"                 { /*printf("Operador:%11s (operador aritmetico subtracao) - T_MENOS\n", yytext);*/ return T_MENOS; }
"*"                 { /*printf("Operador:%11s (operador aritmetico multiplicacao) - T_VEZES\n", yytext);*/ return T_VEZES; }
"/"                 { /*printf("Operador:%11s (operador aritmetico divisao) - T_DIV\n", yytext);*/ return T_DIV; }
div                 { /*printf("Operador:%11s (operador aritmetico divisao) - T_DIV\n", yytext);*/ return T_DIV; }


"="                 { /*printf("Operador:%11s (operador relacional igualdade) - T_IGUAL\n", yytext);*/ return T_IGUAL; }
">"                 { /*printf("Operador:%11s (operador relacional maior) - T_MAIOR\n", yytext);*/ return T_MAIOR; }
"<"                 { /*printf("Operador:%11s (operador relacional menor) - T_MENOR\n", yytext);*/ return T_MENOR; }


"&"                 { /*printf("Operador:%11s (operador logico conjuncao) - \n", yytext);*/ return T_E; }
"|"                 { /*printf("Operador:%11s (operador logico disjuncao) - T_OU\n", yytext);*/ return T_OU; }
"!"                 { /*printf("Operador:%11s (operador logico negacao) - T_NAO\n", yytext);*/ return T_NAO; }
e                   { /*printf("Operador:%11s (operador logico conjuncao) - \n", yytext);*/ return T_E; }
ou                  { /*printf("Operador:%11s (operador logico disjuncao) - T_OU\n", yytext);*/ return T_OU; }
nao                 { /*printf("Operador:%11s (operador logico negacao) - T_NAO\n", yytext);*/ return T_NAO; }


"<-"                { /*printf("Operador:%11s (operador atribuicao) - T_ATRIB\n", yytext);*/ return T_ATRIB; }
"("                 { /*printf("Operador:%11s (operador abre parenteses) - T_ABRE\n", yytext);*/ return T_ABRE; }
")"                 { /*printf("Operador:%11s (operador fecha parenteses) - T_FECHA\n", yytext);*/ return T_FECHA; }
","                 { /*printf("Operador:%11s () - \n", yytext);*/ return T_VIRG; }


int                 { /*printf("Tipo:%11s (tipo int)\n", yytext);*/ return T_INTEIRO; }
inteiro             { /*printf("Tipo:%11s (tipo inteiro) - T_INTEIRO\n", yytext);*/ return T_INTEIRO; }
float               { /*printf("Tipo:%11s (tipo float)\n", yytext);*/ return T_FLOAT; }
String              { /*printf("Tipo:%11s (tipo string)\n", yytext);*/ return T_STRING; }
char                { /*printf("Tipo:%11s (tipo char)\n", yytext);*/ return T_CHAR; }
boolean             { /*printf("Tipo:%11s (tipo boolean)\n", yytext);*/ return T_LOGICO; }
logico              { /*printf("Tipo:%11s (tipo logico) - T_LOGICO\n", yytext);*/ return T_LOGICO; }


V                   { /*printf("Constante:%11s (constante logica de verdade) - T_V\n", yytext);*/ return T_V; }
F                   { /*printf("Constante:%11s (constante logica de falsidade) - T_F\n", yytext);*/ return T_F; }
true                { /*printf("Constante:%11s (constante logica de verdade) - \n", yytext);*/ return T_V; }
false               { /*printf("Constante:%11s (constante logica de falsidade) - \n", yytext);*/ return T_F; }


{identificador}     { 
                        // CRIA UMA CÓPIA DO IDENTIFICADOR (yytext) E ATRIBUI AO CAMPO name DA ESTRUTURA yylval
                        // yylval É UMA ESTRUTURA QUE PERMITE PASSAR INFORMAÇÕES PARA O ANALISADOR SINTÁTICO
                        yylval.name = strdup(yytext);

                        // printf("Identificador:%11s - T_IDENTIF\n", yytext); 
                        
                        int valor = buscarSimbolo(tabela, yytext);
                        if (valor == -1) {
                            quantVariaveis++;
                            inserirSimbolo(tabela, yytext, yyleng);
                        }

                        return T_IDENTIF;
                    }
{numero}            {
                        // CONVERTE O TEXTO DE (yytext) PARA UM VALOR (int)
                        yylval.ival = atoi(yytext);

                        // printf("Numero:%11s - T_NUMERO\n", yytext); 
                        return T_NUMERO; 
                    }
{espaco}            /* nao faz nada */

"//".*              /* comentario de linha */

"/*"                BEGIN(comentario);
<comentario>"*/"    BEGIN(INITIAL);
<comentario>.       /* nao faz nada */

.		            {printf("ERRO LEXICO"); yyerror("Simbolo nao foi reconhecido");}

%%

int yywrap(void) { return 1; }