#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float cod;
	int ano,emp,idade,t;
	printf("Digite o código do empregado: ");
	scanf("%f",&cod);
	printf("Digite o ano de nascimento: ");
	scanf("%d",&ano);
	printf("Digite o ano que ele entrou na empresa: ");
	scanf("%d",&emp);
	idade = 2019 - ano;
	t = 2019 - emp;
	if(ano <= 0 || emp <= 0 || idade <= 0 || t < 0){
		printf("Valor inválido!");
	}else if(idade >= 60){
		if(t >= 25){
			printf("Idade: %d, Tempo de Trabalho: %d. Requerer Aposentadoria!",idade,t);
		}else if(idade >= 65){
			printf("Idade: %d, Tempo de Trabalho: %d. Requerer Aposentadoria!",idade,t);
		}else{
			printf("Idade: %d, Tempo de Trabalho: %d. Não Requerer Aposentadoria!",idade,t);
		}
	}else if(t >= 30){
		printf("Idade: %d, Tempo de Trabalho: %d. Requerer Aposentadoria!",idade,t);
	}else{
		printf("Idade: %d, Tempo de Trabalho: %d. Não Requerer Aposentadoria!",idade,t);
	}
}
