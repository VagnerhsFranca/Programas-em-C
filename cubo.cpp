#include <stdio.h>
#include <stdlib.h>
int main()
{
	int lado, contador, contador2;
	printf("Informe o lado (1 a 20):");
	scanf("%d", &lado);
	contador=lado;
	contador2 = 1;
	
if (lado >= 1 && lado <= 20){
	while(contador2 <= lado){
	
		while (contador >= 1){
		printf("*");
		contador--;
		}
		contador = contador + lado;
		printf("\n");
		contador2++;
	}
	
		
}else printf("Valor invalido\n");

system ("pause");
return 0;
}
	
