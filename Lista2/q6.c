#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float salarioBruto,emp;
	int qtd;
	printf("Digite seu salário bruto: ");
	scanf("%f",&salarioBruto);
	printf("Digite o valor do empréstimo: ");
	scanf("%f",&emp);	
	printf("Digite a quantidade de parcelas: ");
	scanf("%d",&qtd);
	if(qtd != 0){
		if((emp/qtd) <= (salarioBruto*0.3)){
			printf("Empréstimo concedido!");
		}else{
			printf("Empréstimo não concedido!");
		}
	}
}
