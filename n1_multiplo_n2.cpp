#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale (LC_ALL, "portuguese");
	
	int n1, n2;
	
	printf("Informe dois n�meros:\n");
	printf("N1:");
	scanf("%d", &n1);
	printf("N2:");
	scanf("%d", &n2);
	
	if ( n1 % n2==0){printf("O %d � multiplo do %d.\n", n1, n2);
}
	else printf("O %d n�o � multiplo de %d.\n", n1, n2);
	
	return 0;

	}
	
