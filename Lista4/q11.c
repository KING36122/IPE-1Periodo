#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float p1,p2,p3,menor;
	printf("Digite o valor do primeiro produto: ");
	scanf("%f",&p1);
	printf("Digite o valor do segundo produto: ");
	scanf("%f",&p2);
	printf("Digite o valor do terceiro produto: ");
	scanf("%f",&p3);
	if(p1 <= 0 || p2 <= 0 || p3 <= 0){
		printf("Valor Inválido!");
	}else{
		if(p1 < p2 && p1 < p3){
			menor = p1;
		}else if(p2 < p1 && p2 < p3){
			menor = p2;
		}else{
			menor = p3;
		}
	}
	printf("O produto com menor preço é o de valor igual a R$%.2f ", menor);
}
