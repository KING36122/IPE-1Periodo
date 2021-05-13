#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int num=0,i,qPares=0,qImpares=0;
	while(num != -1){
		printf("Digite um número: ");
		scanf("%d",&num);
		if(num%2 == 0 && num!=0){
			qPares++;
		}else if(num%2 == 1 && num!=-1){
			qImpares++;
		}
	}
	printf("Qtd de pares: %d e qtd de impares: %d",qPares,qImpares);
}
	
