/* Problema: convers�o de um valor x de R$ em U$
Solu��o: dividir o valor em reais pela cota��o do dolar;
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
printf ("o valor correspondente em d�lares �: %f\n", cotacao);


return 0;
} 
