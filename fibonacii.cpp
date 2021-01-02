#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int SEQFIBONACCI(int num);

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int num;
	printf("Informe o número de sequências: ");
	scanf("%d", &num);
	
	SEQFIBONACCI(num);
	
	system("PAUSE");
	return 0;
}

int SEQFIBONACCI(int num){
	int result=2,i,ant1=1,aux=0;
	
	printf("A sequência de Fibonacci é: ");
	if(num==1) printf("0\t");
	if(num==2) printf("0\t1\t");
	
	//SE O NUMERO DE SOMAS FOR MAIOR OU IGUAL 3
	else{
		printf("0\t1\t");
	//OS TERMOS SERÃO SOMADOS 'n' VEZES;
	 for(i=2;i<num;i++){
	 	printf("%d\t", result);
	    aux=result;
	    result=result+ant1;
	    ant1=aux;
	  }
	}
}
//RESULT = 0, LOGO SOMA-SE +1; RESULT+1=1
//RESULT = 1, TAMBÉM SOMA-SE +1; RESULT=2
//RESULT = 2, COMEÇA A SORMAR PELOS DOIS ANTERIORES; RESULT=3
//RESULT = 3, RESULT=RESULT+ANT; RESULT=5
//RESULT = 5; RESULT=RESULT+ANT; RESULT=8
//RESULT = 8; RESULT=RESULT+ANT; RESULT=13
