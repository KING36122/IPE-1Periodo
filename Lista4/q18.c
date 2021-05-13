#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int qtd;
	printf("Digite a quantidade de maçãs: ");
	scanf("%d",&qtd);
	if(qtd<=0){
		printf("Valor inválido!");
	}else{
		if(qtd >= 12){
			printf("Total da compra: R$%.2f reais",qtd);
		}else{
			printf("Total da compra: R$%.2f reais",qtd*1.30);
		}
	}
}
