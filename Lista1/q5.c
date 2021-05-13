#include<stdio.h>
int main(){
	int horaAula,numeroDeAulas;
	float percDesconto,salarioLiquido;
	printf("Digite a quantidade de horas de aula dadas no mês: ");
	scanf("%i",&horaAula);
	printf("Digite o número de aulas dadas no mês: ");
	scanf("%i",&numeroDeAulas);
	printf("Digite o percentual de desconto do INSS (apenas o número, sem a porcentagem): ");
	scanf("%f",&percDesconto);
	salarioLiquido = horaAula*numeroDeAulas - ((horaAula*numeroDeAulas)*(percDesconto/100));
	printf("Seu salário líquido é de: R$ %.2f",salarioLiquido);
}

