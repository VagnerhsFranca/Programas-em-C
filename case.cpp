/*Problema: retorno da letra recebida em CASE 
Solu��o: subtrair 32 da vari�vel recebedida.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	char letra;
	
	
	printf("Informe uma letra do alfabeto:");
	scanf("%c", &letra);
	 
printf("\n%c",letra-32);
	
	return 0;
	
}
