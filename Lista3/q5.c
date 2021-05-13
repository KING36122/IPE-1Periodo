#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	if(num%5==0){
		printf("É divisível por 5!");
	}else{
		printf("Não é divisível por 5!");
	}
}
