//bibliotecas [Libs]
#include <errno.h>
#include <stdio.h>
#include <string.h>
//variaveis Globais

//Mains
main()
{
	//Variaveis locais
	int num;
	printf("  _____               _                    _______                             _                   _        \n");
	printf(" |  __ \\             | |                  |__   __|                           (_)                 (_)       \n");
	printf(" | |__) |   ___    __| |  _ __    ___        | |      ___   _ __   _ __ ___    _   _ __     __ _   _   ___  \n");
	printf(" |  ___/   / _ \\  / _` | | '__|  / _ \\       | |     / _ \\ | '__| | '_ ` _ \\  | | | '_ \\   / _` | | | / __| \n");
	printf(" | |      |  __/ | (_| | | |    | (_) |      | |    |  __/ | |    | | | | | | | | | | | | | (_| | | | \\__ \\ \n");
	printf(" |_|       \\___|  \\__,_| |_|     \\___/       |_|     \\___| |_|    |_| |_| |_| |_| |_| |_|  \\__,_| |_| |___/ \n");
	printf("                                                                                                            \n");
	printf("=========================================================================================================== \n");
	printf("Insira um numero:");
	scanf("%d",&num);
	//Ifs 
	if (num > 9) 
	{
		printf("Seu valor e maior que 9!");
	}
	
	else if (num >= 5)
	{
		printf("Seu valor e maior ou igual a 5!");
	}
	
	else
	{
		if (num == 5)
		{
			printf("Seu numero e igual a 0!");
		}
		
		else 
		{
			printf("Seu numero nao e nulo e e menor que 5!");
		}
	}
}
