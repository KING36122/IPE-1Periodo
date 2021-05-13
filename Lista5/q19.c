#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	printf("Digite 10 para votar em José da feira");
	printf("\nDigite 20 para votar em Maria Fumaça");
	printf("\nDigite 30 para votar em Chico");
	printf("\nDigite 1 para votar em branco ou 0 para votar nulo!");
	int j=0,m=0,c=0,n=0,v=0,i,voto;
	for(i=0;i<10;i++){
		printf("\nVoto: ");
		scanf("%d",&voto);
		switch(voto){
			case 10:
				j+=1;
				break;
			case 20:
				m+=1;
				break;
			case 30:
				c+=1;
				break;
			case 1:
				n+=1;
				break;
			case 0:
				n+=1;
				break;
			default:
				printf("Voto inválido!\n");
				v+=1;
		}
	}
	printf("\n%d votaram em José da Feira",j);
	printf("\n%d votaram em Maria Fumaça",m);
	printf("\n%d votaram em Chico",c);
	printf("\n%d votaram em branco ou nulo",n);
	printf("\n%d votaram invalidamente",v);
}
