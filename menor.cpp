#include <stdio.h>
#include <stdlib.h>

int MENOR(int v[],int x){
	int i,result=v[0];
	for(i=0;i<x;i++){
	if(v[i] < result) result = v[i];
	}
	printf("O menor numero do vetor eh %d\n", result);
}
int main(){
	int i,x;
	
	printf("Informe o numero de elementos: ");
	scanf("%d", &x);
	int v[x];
	for(i=0;i<x;i++){
	    printf("v[%d]: ", i);
	    scanf("%d", &v[i]);
	}
	MENOR(v,x);
	system("PAUSE");
	return 0;
}
