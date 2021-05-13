#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float qtd,desc;
	char op;
	printf("Digite a quantidade de litros: ");
	scanf("%f",&qtd);
	fflush(stdin);
	printf("Digite a opção de combustível (A para Álcool ou G para Gasolina): ");
	scanf("%c",&op);
	if(qtd <= 0){
		printf("Valor Inválido!");
	}else{
		if(op == 'A' || op == 'a'){
			if(qtd > 20){
				desc = qtd*(2.9 - 2.9*0.05);
			}else{
				desc = qtd*(2.9 - 2.9*0.03);
			}
		}else if(op == 'G' || op == 'g'){
			if(qtd > 20){
				desc = qtd*(3.3 - 3.3*0.06);
			}else{
				desc = qtd*(3.3 - 3.3*0.04);
			}
		}else{
			printf("Opção Inválida!");
		}
	}
	printf("Valor a ser pago será de R$%.2f",desc);
}
