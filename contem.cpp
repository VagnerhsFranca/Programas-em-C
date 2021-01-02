#include <stdio.h>
#include <stdlib.h>

int CONTEM(char palavra2[], char palavra[]);

int main(){
    
    char palavra[25],palavra2[25];
    
    printf("Informe a primeira palavra: ");
    gets(palavra);
    printf("Informe a segunda palavra: ");
    gets(palavra2);

    CONTEM(palavra2,palavra);
    system("PAUSE");
    return 0;
}

int CONTEM(char palavra2[], char palavra[]){
    int i=0,j=0,retorno=1;
	
	//enquanto o caractere da segunda palavra for diferente do inicio da primeira  
    while (palavra[j] != palavra2[i]){
    i++;
    }
    
    while(palavra[j] == palavra2[i]){
    	//se os caracteres da primeira palavra terminarem, retorna=1, pq está contido
        if(palavra[j] == '\0'){
        retorno=0;
		}
    i++;
    j++;
    }
	
	printf("retorno 0 = contem \t retorno 1 = nao contem\nretorno: %d\n", retorno);
}
