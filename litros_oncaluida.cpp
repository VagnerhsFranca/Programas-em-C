#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void LITRO_ONCAFLUIDA(double litro){
	
    double resultonca=0.0295;
	double  valor=litro/resultonca;
	
	printf("A quantidade de petróleo lançado equivale a: %f oz fl\n",valor);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	double litro=7400000000;
	
	LITRO_ONCAFLUIDA(litro);
	
	system("PAUSE");
	return 0;
}

