#include <stdio.h>
#include <stdlib.h>

int MAIOR(int v[], int x){
    int result=0,i;
    for(i=0;i<x;i++){
        if(result < v[i])result=v[i];
    }
    return result;
}
int MENOR(int v[], int x){
    int result=9999,i;
    for(i=0;i<x;i++){
        if(result > v[i])result=v[i];
    }
    return result;
}
int main(){

    int i,menor,maior,v[10],n=0;
    printf("Informe 10 numeros\n");
    for(i=0;i<10;i++){
        printf("Informe o N%d: ",i + 1);
        scanf("%d", &v[i]);
        n++;
    }
    menor=MENOR(v,n);
    maior=MAIOR(v,n);
    printf("O maior eh %d e o menor eh %d", maior,menor);
    system("PAUSE");
    return 0;
    
}
