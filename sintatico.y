%{
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
     
%}

%token T_INICIO T_FIM T_PROGRAMA T_LEIA T_ESCREVA T_ENQTO T_FACA T_FIMENQTO
%token T_SE T_ENTAO T_SENAO T_FIMSE T_ATRIB T_NAO T_ABRE T_FECHA

%left T_E T_OU
%left T_IGUAL
%left T_MAIOR T_MENOR
%left T_MAIS T_MENOS
%left T_VEZES T_DIV

%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%union {
    int ival;
    char* name;
}

/*TRATAR ERRO TIPO DE VARIÁVEL inteiro x <- true*/
%token T_LOGICO 
%token  T_INTEIRO

%token <ival> T_NUMERO
%token T_V T_F
%token <name> T_IDENTIF

%type <ival> expressao
%type <ival> termo

%%

programa:
    cabecalho  {printf("INPP\n");}
    variaveis
    T_INICIO lista_comandos 
    T_FIM      {printf("FIMP \n");}
    ;

cabecalho:
    T_PROGRAMA T_IDENTIF
    ;

variaveis:
    | declaracao_variaveis
    ;

declaracao_variaveis:
    tipo lista_variaveis declaracao_variaveis 
    | tipo lista_variaveis
    ;

tipo:
    T_LOGICO                                
    | T_INTEIRO                             
    ;

lista_variaveis:
    T_IDENTIF lista_variaveis  {printf("AMEM\n");}             
    | T_IDENTIF                {printf("AMEM\n");}            
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
    T_LEIA T_IDENTIF {   
        int valor;
        char* name_alvo = strdup($2);
        Node* node_alvo = procura(tabH, name_alvo);    

        if (node_alvo == NULL){
            yyerror("Identificador não declarado");
            return;
        }

        node_alvo->int_value = valor;
        printf("LEIA %d\n", 0);
        printf("ARZG %d\n", node_alvo->posic_pilha);
    }
    ;

escrita:
    T_ESCREVA expressao                 { 
                                           printf("ESCR\n");
                                        }
    ;

repeticao:
    T_ENQTO  {printf("NADA %d\n" ,present_label);}
     expressao 
     T_FACA {present_label ++ ; printf("DSVF %d \n", present_label);
;}
     lista_comandos {present_label --; printf("DSVS %d\n", present_label); present_label++; printf("NADA %d\n", present_label); present_label++;}
     T_FIMENQTO
    ;

selecao:
    T_SE 
    expressao {printf("DSVF %d \n", present_label ++);}
    T_ENTAO
    lista_comandos {printf("DSVS %d\n", present_label ++); present_label--; present_label--; printf("NADA %d\n", present_label++);}
    T_SENAO 
    lista_comandos {printf("NADA %d\n", present_label ++);}
    T_FIMSE { }
    ;

atribuicao:
    T_IDENTIF T_ATRIB expressao      {
        char* name_alvo = strdup($1);
        Node* node_alvo = procura(tabH, name_alvo);

        if (node_alvo != NULL) {
        } else {
            yyerror("Identificador não foi declarado");
            return;
        }

        if(node_alvo->type == INT_TYPE){
            int result = $3;
            set_int(tabH, name_alvo, result);
        }

        else{
            bool result = $3;
            int bool_value;
            if(result)
                bool_value=true;
            else 
                bool_value=false;

            set_bool(tabH, name_alvo, bool_value);
        }
        printf("ARZG %d\n", node_alvo->posic_pilha);

    }          
    ;


expressao:
    expressao T_VEZES expressao       {
        $$ = $1 * $3;
        printf("MULT %d", $$);
    }      
    | expressao T_DIV expressao   {
         if ($3 == 0){ 
                                                    yyerror("divisão por zero");
                                                    return;
                                                  
                                                }
                                                else {
                                                    $$ = floor($1/$3);
                                                   printf("DIVI %d \n" , $$);
                                                    
                                                }  
    }         
    | expressao T_MAIS expressao    {
         $$ = $1 + $3;
         printf("SOMA %d \n", $$);
    }        
    | expressao T_MENOS expressao       {
         $$ = $1 - $3;
         printf("SUBT %d \n", $$);
    }    
    | expressao T_MAIOR expressao   {
         $$ = ($1 > $3) ? 1 : 0;
         printf("CMMA \n");
    }       
    | expressao T_MENOR expressao      {
         $$ = ($1 < $3) ? 1 : 0;
         printf("CMME \n");
    }    
    | expressao T_IGUAL expressao    {
         $$ = ($1 == $3) ? 1 : 0;
         printf("CMIG \n");
    }       
    | expressao T_E expressao   {
        $$ = ($1 && $3) ? 1 : 0;
        printf("CONJ \n");
    }            
    | expressao T_OU expressao     {
         $$ = ($1 || $3) ? 1 : 0;
         printf("DISJ \n");
    }         
    | T_MENOS expressao %prec UMINUS     {
         $$ = -$2;
         printf("SUBT %d \n", $$);
    }  
    | termo       {
         $$ = $1;
    }  
    |   T_ABRE expressao T_FECHA {
        $$ = $2;
    }                     
    ;

termo:
    T_IDENTIF   {
        Node* node = procura(tabH, yylval.name); 
                                                if (node != NULL) {
                                                    printf("CRVG %d \n" , node->posic_pilha);

                                                    if(node->type == INT_TYPE){
                                                        $$ = node->int_value;
                                                    }
                                                    else{
                                                        $$ = node->bool_value;
                                                    }
                                                }
                                                else {
                                                    yyerror("Identificador não declarado");
                                                   return;
                                                }
    }                            
    | T_NUMERO {
        int num = $1;
         $$=num;
         printf("CRCT %d \n", num);
    }
    | T_V {
         $$=true;
         printf("CRCT %d \n" , 1);
    }
    | T_F {
        $$=false;
        printf("CRCT %d \n" , 0);
    }
    | T_NAO termo {
         $$ = ($2) ? 0 : 1;
         printf("NEGA %d \n", 0);
    }
    ;

%%

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
