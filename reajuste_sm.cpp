/* Problema: calcular o reajuste do Sal�rio m�nimo
Solu��o: obter o valor do reajuste em porcentos, descobrir o valor correspondente em reais e somar com o atual.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	float reajuste;
	
	printf("Informe a porcentagem de reajuste:");
	scanf("%f", &reajuste);
	
	float sm = 998;
	float total = reajuste /100 * sm + sm;
	
	printf("O sal�rio atual �: %.2f\n", total);
	
	
	
	
	return 0;
}
