/* Problema: calculo da área de uma circunferência
Solução: Aplicar o raio informado na formula da ac = 2xpixR
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
	
	float raio;

	
	printf("Informe o valor do raio:");
	scanf("%f", &raio);
	
	float constante = 2;
	float pi = 3.14;
	float resultado = constante * pi * raio;
	
	printf("O comprimento da circunfêrencia é: %.2f.\n", resultado);
	
	
	
	return 0;
}
