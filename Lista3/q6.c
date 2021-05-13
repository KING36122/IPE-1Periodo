#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	if(num%3==0 && num%7==0){
		printf("É divisível por 3 e por 7!");
	}else{
		printf("Não divisível por 3 e por 7!");
	}
}
	
