#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float LERMATRIZ(int x){
	
	int i,z,operacao;
	float matriz[x][x];
	
	for(i=0;i<x;i++){
		printf("Informe os valores da linha %d:\n", i+1);
		for(z=0;z<x;z++){
		printf("valor %d: ",z+1);
		scanf("%f", &matriz[i][z]);
		}
	}
	
	//IMPRIMIR MATRIZ
	printf("\nDESEJA IMPRIMIR A MATRIZ?\n1-SIM\t0-NÃO\n");
	scanf("%d", &operacao);
	
	if(operacao==1){
		printf("A matriz é:\n");
		for(i=0;i<x;i++){
			for(z=0;z<x;z++){
			printf("%.2f\t", matriz[i][z]);	
			}
			printf("\n");
		}
	}
	return matriz[x][x];
}

float DETERMINANTE(int x){
    float valor,principal,secundaria,matriz[3][3];
    int i,z;
    
    for(i=0;i<x;i++){
		printf("Informe os valores da linha %d:\n", i+1);
		for(z=0;z<x;z++){
		printf("valor %d: ",z+1);
		scanf("%f", &matriz[i][z]);
		}
	}
                   //A			E				I				B			F			G				C			D			H		
    principal=(matriz[0][0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*matriz[2][0])+(matriz[0][2]*matriz[1][0]*matriz[2][1]);
    secundaria=(matriz[2][0]*matriz[1][1]*matriz[0][2])+(matriz[2][1]*matriz[1][2]*matriz[0][0])+(matriz[2][2]*matriz[1][0]*matriz[0][1]);
               
    valor=principal-secundaria;
    printf("O valor do determinante da matriz é: %.2f\n", valor);
}

float TRANSPOSTA(int x){
	float matriz[x][x],trasp[x][x];
	int i,z;
	
	for(i=0;i<x;i++){
		printf("Informe os valores da linha %d:\n", i+1);
		for(z=0;z<x;z++){
		printf("valor %d: ",z+1);
		scanf("%f", &matriz[i][z]);
		}
	}
	
	for(i=0;i<x;i++){
		for(z=0;z<x;z++){
		trasp[z][i]=matriz[i][z];
		}
	}
	
	for(i=0;i<x;i++){
		for(z=0;z<x;z++){
		printf("%.2f\t", trasp[i][z]);	
		}
		printf("\n");
		}
	return trasp[x][x];	
}

float ESCALAR(int x){
    int i,z,escala;
    float matriz[x][x];
    //VALOR DA MATRI
    for(i=0;i<x;i++){
		printf("Informe os valores da linha %d:\n", i+1);
		for(z=0;z<x;z++){
		printf("valor %d: ",z+1);
		scanf("%f", &matriz[i][z]);
		}
	}
	
	printf("Informe a escalar: ");
	scanf("%d", &escala);
	
	//APLICAÇÃO DA ESCALAR
	for(i=0;i<x;i++){
		for(z=0;z<x;z++){
		matriz[i][z]*=escala;
		}
	}
	//VALORES COM ESCALAR
		printf("A nova matriz é:\n");
		for(i=0;i<x;i++){
			for(z=0;z<x;z++){
			printf("%.2f\t", matriz[i][z]);	
			}
			printf("\n");
		}
	
	

}

int main(){
	setlocale(LC_ALL,"portuguese");
	int operacao,x,teste=1;
	
while( teste == 1){
	printf("\n1-CRIAR MATRIZ\n2-CALCULAR DETERMINANTE(matriz 3 x 3)\n3-CRIAR MATRIZ TRANSPOSTA\n4-MATRIZ ESCALAR\nInforme a operação que deseja realizar: ");
	scanf("%d", &operacao);
	
	if(operacao==1){
		printf("\nInforme a ordem da matriz: ");
		scanf("%d", &x);
		float matriz[x][x];
		matriz[x][x]=LERMATRIZ(x);
	}	
	
	if(operacao==2){
		x=3;
		DETERMINANTE(x);
	}	
	
	if(operacao==3){
		printf("\nInforme a ordem da matriz: ");
		scanf("%d", &x);
		float matriz[x][x];
		matriz[x][x]=TRANSPOSTA(x);
	}
	
	if(operacao==4){
	    printf("\nInforme a ordem da matriz: ");
		scanf("%d", &x);
		float matriz[x][x];
		matriz[x][x]=ESCALAR(x);
	}
	printf("\nDESEJA REALIZAR UMA NOVA OPERAÇÃO: 1-SIM\t0-NÃO\n");
	scanf("%d", &teste);	
}
	system("PAUSE");
	return 0;	
}
