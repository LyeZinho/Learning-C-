#include<stdio.h>
#include<stdlib.h>


int main(){//Inicio
   
    //Variaveis locais
    int altura, comprimento, area;
    //Entradas de valores
    printf("Insira o valor da altura:");
    scanf("%d", &altura);
    printf("Insira o valor do comprimento");
    scanf("%d", &comprimento);
    //Execucao
    area = comprimento * altura;
    //Saida de valores
    printf("A area e equivalente a %d",area    );
    
}//Fim
