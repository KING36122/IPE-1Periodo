#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[30];
	float qtd,vt,salario;
	printf("Digite o nome do vendedor: ");
	scanf("%s",&nome);
	printf("Digite a quantidade de carros vendidos por este vendedor: ");
	scanf("%f",&qtd);
	printf("Digite o valor total de vendas realizadas por este vendedor: ");
	scanf("%f",&vt);
	salario = 500 + 50*qtd + vt*0.05;
	printf("Senhor(a) %s, seu salário é de R$%.2f",nome,salario);
}
