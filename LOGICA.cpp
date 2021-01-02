//ALUNO: VAGNER HENRIQUE SILVA DE FRANÇA 
//TADS 2019.2
#include <stdio.h>
#include <stdlib.h>

/*CONJUNCAO
	'('=40
	')'=41
E	'^'=94
NAO	'~'=126
OU	'V'=86
EXCLUSIVO	'Y'=89
SE	'>'=62
SSS	'<'=60
LETRAS MINUSCULAS=97...122
*/	

/*DESCRICAO
PA=paranteses abertos '('
PF=parenteses fechados ')'
N=NEGACAO '~'
*/

int main(){
	char proposicao[30];
	int PA=0,PF=0,i=0,N[30],verificacao=0;
	
	printf("*CONJUNCAO:\nE= ^\tNEGACAO= ~\tOU= V\tPARENTESES ABERTO= (\nPARENTESES FECHADO= )\tSE= >\tSE SOMENTE SE= <\tOU EXCLUSIVO= Y\n");
	printf("\nInforme a proposicao com letras minusculas: ");
	gets(proposicao);
	
	if(proposicao[0] == '\0'){
	verificacao=1;
	}
		
	while (proposicao[i] != '\0'){	
	N[i]=0;
		//VERIFICA PRIMEIRO CARACTERE DA PROPOSICAO
		if(proposicao[0] < 97 || proposicao[0] > 122){
			if(proposicao[0] != 126 && proposicao[0] != 40){
			verificacao=1;
			break;
			}
		}
		
		//VERIFICA SEGUNDO CARACTERE
		if(proposicao[1] == '\0'){
		verificacao=1;
		break;
		}
		
		//VERIFICA PA
		if(proposicao[i] == 40){
		PA++;   
			//VERIFICA SUCESSOR DE PA
			if(proposicao[i+1] < 97 || proposicao[i+1] > 122){
			    if(proposicao[i+1] != 126){
			    verificacao=1;
			    break;
			    }
			}  
		}
		
		//VERIFICA PF
		if(proposicao[i] == 41){
		PF++;
			//VERIFICA SUCESSOR DE PF
			if(proposicao[i+1] != 86 && proposicao[i+1] != 89 && proposicao[i+1] != 94 && proposicao[i+1] != 60 && proposicao[i+1] !=  62 && proposicao[i+1] != '\0'){
			verificacao=1;
		    break;
		    } 
			    
		}
			
		//VERIFICA CONJUNCAO 'e'
		if(proposicao[i] == 94){
			//VERIFICA POSTERIOR DE 'e'
			if(proposicao[i+1] < 97 || proposicao[i+1] > 122 ){
			    if(proposicao[i+1] != 126 && proposicao[i+1] != 40){
			    verificacao=1;
			    break;
			    }
			}
		}
	
		//VERIFICA CONJUNCAO 'ou'
		if(proposicao[i] == 86){
				//VERIFICA POSTERIOR DE 'ou'
			if(proposicao[i+1] < 97 || proposicao[i+1] > 122 ){
			    if(proposicao[i+1] != 126 && proposicao[i+1] != 40){
			    verificacao=1;
			    break;
			    }
			}	
		}
		
		//VERIFICA EXCLUSIVO 'Y'
		if(proposicao[i] == 89){
		//VERIFICA POSTERIOR DE 'ou exclusivo'
			if(proposicao[i+1] < 97 || proposicao[i+1] > 122 ){
			    if(proposicao[i+1] != 126 && proposicao[i+1] != 40){
			    verificacao=1;
			    break;
			    }
			}	
		}		
		
		//VERIFICA SE
		if(proposicao[i] == 62){
			//VERIFICA POSTERIOR DE 'se'
			if(proposicao[i+1] < 97 || proposicao[i+1] > 122 ){
			    if(proposicao[i+1] != 126 && proposicao[i+1] != 40){
			    verificacao=1;
			    break;
			    }
			}	
		}
		
		//VERIFICA SSS
		if(proposicao[i] == 60){
			//VERIFICA POSTERIOR DE 'sss'
			if(proposicao[i+1] < 97 || proposicao[i+1] > 122 ){
			    if(proposicao[i+1] != 126 && proposicao[i+1] != 40){
			    verificacao=1;
			    break;
			    }
			}	
		}
		
		//VERIFICA LETRAS
		if(proposicao[i] >= 97 && proposicao[i] <= 122){
			//VERIFICA SUCESSOR
			if(proposicao[i+1] != 94 && proposicao[i+1] != 86 && proposicao[i+1] != 89 && proposicao[i+1] != 60 && proposicao[i+1] != 62 && proposicao[i+1] != 41 && proposicao[i+1] != '\0'){
			verificacao=1;
			break;
			}
		}
		
		//VERIFICA SE HÁ ESPAÇO
		if(proposicao[i] == 32){
		verificacao=1;
		break;
		}
		
		if(verificacao == 0) i++;		
	
}	
if(PF != PA){
	verificacao=1;
	}
	if(verificacao == 1){
	printf("INVALIDA\n");	
	}
	else printf("VALIDA\n");

system("PAUSE");	
return 0;	
}

