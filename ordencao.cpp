#include <stdio.h>
#include <stdlib.h>

int MENOR(int v[], int x);

int main()
{
    int x,i;
    
    printf("Informe o numero de elementos: ");
    scanf("%d", &x);
    
    int v[x];
    for (i=0;i<x;i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    
    printf("\n");
    MENOR(v,x);
    
    system("PAUSE");
    return 0;
}


int MENOR(int v[], int x){
	
    int a,i, aux;
    
  

    for(i=0;i<x;i++){
    	
    	for(a=0;a<x;a++){	
        	if(v[i] > v[a]){
        	aux= v[i]; 
        	v[i] = v[a];
        	v[a] = aux;   
    		}
        }    
    }
    
    for(i=0;i<x;i++){
    printf("ordenacao[%d]: %d\n", i, v[i]);
    }
 
}
