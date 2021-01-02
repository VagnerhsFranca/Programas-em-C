/*Problema: está na coversão da temperatura 
Solução: consiste em fazer o programa aplicar o valor recebido na formula K = GC+273
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");	

float gc;

printf ("Informe a temperatura em Graus Celsius:");
scanf("%f", &gc);

float gk = 273;
float resultado = gc  + gk;

printf("A temperatura em Graus Kelvin é: %.2f", resultado);





return 0;
} 
