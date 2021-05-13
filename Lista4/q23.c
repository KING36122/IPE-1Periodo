#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float peso,k,v;
	printf("Digite a quantidade de peixes (em Kg): ");
	scanf("%f",&peso);
	if(peso <= 0){
		printf("Valor inválido!");
	}else{
		if(peso > 50){
			k = peso - 50;
			v = k*4;
			printf("Você irá pagar R$%.2f reais de multa!",v);
		}else{
			printf("Você não pagará nada!");
		}
	}
}
