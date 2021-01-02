/* Problema: conversão de um valor x de R$ em U$
Solução: dividir o valor em reais pela cotação do dolar;
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");	

float real;
float dolar = 3.96;


printf("insira o valor em reais:");
scanf ("%f", &real);

float cotacao = real/dolar;
printf ("o valor correspondente em dólares é: %f\n", cotacao);


return 0;
} 
