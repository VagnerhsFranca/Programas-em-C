#include <stdio.h>
#include <stdlib.h>

float fatorial(float x){
	float result=1;
if(x > 0){
	while ( x > 1){
	result=x*result;
	x--;	
	}
} else if (x < 0) printf("Numero invalido\n");
	return result;
	}

float equacao(int N){
    
	float S=1+(1/fatorial(1))+ (1/fatorial(1/2))+ 1/(fatorial(3)) + 1/(fatorial (N));
	return S;
}
int main(){
	int x;
	float valor;
	printf("Informe um numero inteiro: ");
	scanf("%d", &x);
	valor = equacao(x);
	printf("O resultado de S e' %f\n", valor);
	
	system ("pause");
	return 0;	
}
