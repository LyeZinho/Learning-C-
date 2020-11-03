//Bibliotecas / dretivas para pre-prosessador
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
//Definição de constantes


//Variaveis globais
int x, y, z;

main()
{
//Variaveis locais
int x, y, z;
//Operações aritimeticas
	x = y = 10;
	z = ++x;
	x = -x;
	y++;
	x = x + y - (z--);
	// -- retira 1 valor ex --1 = -1, --10 = 9
	// ++ adciona 1 vaor ex ++1 =2, ++10 = 11
//Saida de valores
printf("O valor e de x: %d - y: %d - x: %d",x,y,x);
}

