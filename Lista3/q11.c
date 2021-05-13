#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um número: ");
	scanf("%d",&num);
	if(num == 5){
		printf("Seu número é igual a 5!");
	}else if(num == 200){
		printf("Seu número é igual a 200!");
	}else if(num == 400){
		printf("Seu número é igual a 400!");
	}else if(num > 500 && num < 1000){
		printf("Seu número está entre 500 e 100!");
	}else{
		printf("Seu número não está em nenhuma das opções anteriores!");
	}
}
