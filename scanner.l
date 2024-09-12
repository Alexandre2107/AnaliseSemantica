%{  
    #include <stdio.h>                  
    #include <stdlib.h>
    #include <stdbool.h>
    #include <string.h>

    #include "y.tab.h"
    #include "hash_table.h"             
    extern HashTable* tabH;
    extern int yylex(void);
    void yyerror(char *);      

    void printar(char *);               
    void adiciona_na_tabs();

    int first = 1;                      
    int print_tokens = 0;
    bool eh_inteiro = true;
    bool first_t = true;
    bool variaveis_declaradas = false;

    int posicao_na_pilha = 0;         
%}

%option yylineno

NUMERO          [0-9]+                   
IDENTIFICADOR   [a-zaA-Z]([a-zaA-Z0-9])*
ESPACO          [ \n\t\r]+

%x comentario

%%

programa                        { return T_PROGRAMA; }
inicio                          { variaveis_declaradas =true; return T_INICIO; } 
fimprograma                     { first=2; return T_FIM; }

leia                            { eh_inteiro = false; return T_LEIA; }
escreva                         {eh_inteiro = true; return T_ESCREVA; }
se                              {  return T_SE; }
entao                           {  return T_ENTAO; }
senao                           {  return T_SENAO; }
fimse                           {  return T_FIMSE; }

enquanto                        {  return T_ENQTO; }
faca                            {  return T_FACA; }
fimenquanto                     {  return T_FIMENQTO; }

"+"                             {  return T_MAIS; }
"-"                             {  return T_MENOS; }
"*"                             {  return T_VEZES; }
"div"                           {  return T_DIV; }

">"                             {  return T_MAIOR; }
"<"                             {  return T_MENOR; }
"="                             {  return T_IGUAL; }

"e"                             {  return T_E; }
"ou"                            {  return T_OU; }
"nao"                           {  return T_NAO; }

"<-"                            {  return T_ATRIB; }
"("                             {  return T_ABRE; }
")"                             {  return T_FECHA; }

inteiro                         {  return T_INTEIRO; }                                
logico                          {  return T_LOGICO; }
"V"                             {  return T_V; }
"F"                             {  return T_F; }

{IDENTIFICADOR}                 { yylval.name = strdup(yytext);
                                  
                                  if(!variaveis_declaradas)
                                  adiciona_na_tabs();
                                  return T_IDENTIF; }
{NUMERO}                        {yylval.ival = atoi(yytext);
                                  return T_NUMERO; }




{ESPACO}                        {/*NADA*/}
"//".*                          {/*NADA*/}
"/*" BEGIN(comentario); 
<comentario>"*/" BEGIN(INITIAL);
<comentario>.                   {/*NADA*/}

{NUMERO}+{IDENTIFICADOR}+                  { 
                                    yyerror("Nome de ID invalido");
                                }
.                               { 
                                    yyerror("Simbolo não reconhecido");
                                }

%%

void adiciona_na_tabs(){
    
    char* id_name = strdup(yytext);

    if(first_t){
        insert(tabH, id_name, -1);
        first_t = false;
        posicao_na_pilha++;
        return;
    }

    Node* node_int = get_int (tabH, id_name);
    Node* node_bool = get_bool(tabH, id_name);

    if (node_int == NULL && node_bool == NULL) {
        if (eh_inteiro)
            insert_int(tabH, id_name, 0, posicao_na_pilha);
        else
            insert_bool(tabH, id_name, 0, posicao_na_pilha);
        posicao_na_pilha++;
    } else {
        extern int yylineno; 
        extern char * yytext; 
        printf("Erro (Variavel já declarada): '%s' (linha: %d)\n", yytext, yylineno);
    }
}

int yywrap(void){
    return 1;
}
