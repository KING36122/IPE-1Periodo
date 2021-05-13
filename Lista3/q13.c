#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor;
	printf("Digite o valor do produto: ");
	scanf("%f",&valor);
	if(valor > 0 && valor < 20){
		printf("O valor da venda do produto será de R$%.2f", valor + (valor*0.45));
	}else if(valor >= 20){
		printf("O valor da vendo do produto será de R$%.2f", valor + (valor*0.3));
	}else{
		printf("Valor inválido!");
	}
}
