#include <stdio.h>
#include <stdlib.h>

int N_CARACTERES(char palavra[]){
	int i=0;
	while(palavra[i] != '\0') i++;
	return i;
}

int main(){
	int i;
	char palavra[46];
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	i=N_CARACTERES(palavra);
	
	printf("A palavra possue %d caracteres\n", i);
	
	system("PAUSE");
	return 0;
}
