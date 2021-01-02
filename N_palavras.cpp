#include <stdio.h>
#include <stdlib.h>

int N_PALAVRAS(char x[]){
    int i=0,z=1;
	while(x[i] != '\0'){
		if(x[i] == 32 && x[i+1] != '\0') z++; 
		i++;		
	}
	return z;
}

int main(){
	char frase[100];
	int i=0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	i=N_PALAVRAS(frase);
	printf("A frase possue %d palavras\n", i);
	system ("PAUSE");
	return 0;
}
