//Bibliotecas 
#include <math.h>
#include <stdio.h>
#include <complex.h>
#include <string.h>
#include <stdlib.h>
//main

int main()
{
	//valores de =x===========================================
	int x1, x2; //                                           =
	//Valores de =y===========================================
	int y1, y2; //                                           =
	//calculos================================================
	int rq, parametro1, parametro2, potencia1, potencia2, somaparam, valorfinal;//
	//Imput =X================================================
	
	printf("           __   ____     ________\n");
		printf("           \\ \\ / /\\ \\   / /___  /\n");
		printf("            \\ V /  \\ \\_/ /   / / \n");
		printf("             > <    \\   /   / /  \n");
		printf("            / . \\ _  | |_  / /__ \n");
		printf("           /_/ \\_( ) |_( )/_____|\n");
		printf("                 |/    |/        \n");
		printf("                                 \n");
		printf("=======================================Somar distancias em um plano carteziano======================================= \n");
		printf("            ------------Insira Primeiro os dois valores de X e logo apos os dois valores de Y!------------\n");
		printf("            Projeto pessoal De LyePedro LearnC                                                                   ");
		printf("===================================================================================================================== \n");
		printf("\nIsnisra o valor do ponto x1:");
		scanf("%d",&x1);
		printf("Insira o valor do ponto x2:");
		scanf("%d",&x2);
	//Imput =Y================================================
		printf("Insira o valor do ponto y1:");
		scanf("%d",&y2);
		printf("Insira o valor do ponto y2");
		scanf("%d",&y2);
	//Calculos=================================================
		parametro1 = (x2-x1);
		parametro2 = (y2-y1);
		potencia1 = pow(parametro1, 2);
		potencia2 = pow(parametro2, 2);
		somaparam = (potencia1 + potencia2);
		valorfinal = sqrt(somaparam);
	//Saida====================================================
		printf("A disctanciaia do Ponto Y e do Ponto x e equivalente a =[ %d ]=", valorfinal);
	return 0;
}
