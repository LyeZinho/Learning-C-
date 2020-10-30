#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//===Vars===
double result_area,result_peri;                                                               
//===const===

#define PI 3.14159265;
int main (void)
{//===Entrada===
float raio;
double area, perimetro;

//===Entradas===
	printf ("Digite o raio do seu circulo:\n cm2\r");
	scanf ("%f", &raio);
	area = (raio*raio)*PI;
	perimetro = raio*2*PI;

//===Saidas===
	system ("cls");
	printf ("A area do circulo equivale a: %.2f cm\n", area);
	printf ("O perimetro do circulo equivale a: %.2f cm",perimetro);
	printf ("\n\n");
	system ("pause");
}//===Fim===
