#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double POTENCIA(int base, int expoente){
	int contador, total=1;
	for (contador = 0; contador < expoente ;contador++){
		total = total * base;
	}
	return total;
	}
	
double FATORIAL(int x){
int result;
	if ( x == 0){
	result=1;
	}else result=x*FATORIAL(x-1);
	return result;
}

void SENO(int grau, int centro){
	int cont,divisor,dividendo;
	float soma=0;
	
	for(cont=0;cont<centro;cont++){
	dividendo=-1;
	divisor=(2*centro)+1;
	
	soma=soma+POTENCIA(dividendo,centro)/FATORIAL(divisor)*POTENCIA(grau,divisor);
	}
	printf("O seno é: %.2f", soma);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int grau,centro;
	
	printf("Informe o valor do grau: ");
	scanf("%d", &grau);
	printf("Informe a quantidade de somas: ");
	scanf("%d", &centro);
	
	SENO(grau,centro);
	system("PAUSE");
	return 0;
	}
