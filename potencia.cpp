#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int z){
	int contador, total=1;
	for (contador = 0; contador < z ;contador++){
		total = total * x;
	}
	return total;
	}

int main()
{
	int x,z,result;
	printf("Informe dois numeros inteiros\nBASE: ");
	scanf("%d", &x);
	printf("EXPONTE: ");
	scanf ("%d", &z);
	
	result = potencia(x,z);
	printf("%d\n", result);
	system ("pause");
	return 0;
}
