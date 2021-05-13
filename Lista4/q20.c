#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float dM,dMa,q,valor,valorD;
	printf("Digite a quantidade (em Kg) de morangos: ");
	scanf("%f",&dM);
	printf("Digite a quantidade (em Kg) de maçãs: ");
	scanf("%f",&dMa);
	q = dM + dMa;
	if(dM < 0 || dMa < 0){
		printf("Valor Inválido!");
	}else{
		if(q <= 5 && q > 0){
			valor = dM*2.5 + dMa*1.8;
			printf("Você deverá pagar o valor de R$%.2f",valor);
		}else if(q > 5){
			valor = dM*2.2 + dMa*1.5;
			if(q > 8 || valor > 25){
				valorD = valor - valor*0.1;
				printf("Você deverá pagar o valor de %.2f",valorD);
			}else{
				printf("Você deverá pagar o valor de %.2f",valor);
			}
		}else{
			printf("Valor Inválido!");
		}
	}
}
