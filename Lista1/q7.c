#include<stdio.h>
int main(){
	char nome[20];
	float salarioFixo, vendas,salarioFinal;
	printf("Digite seu primeiro nome: ");
	scanf("%s",&nome);
	printf("Digite seu salário fixo: ");
	scanf("%f",&salarioFixo);
	printf("Digite a quantidade de vendas que você efetuou no mês (em dinheiro): ");
	scanf("%f",&vendas);
	salarioFinal = salarioFixo + (vendas*0.15);
	printf("Senhor(a) %s seu salário final é de R$ %.2f",nome,salarioFinal);
}

