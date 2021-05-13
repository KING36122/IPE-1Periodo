#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int idade;
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	if(idade >= 0 && idade < 5){
		printf("Nenhuma categoria!");
	}else if(idade >= 5 && idade <= 7){
		printf("Categoria: Infantil A");
	}else if(idade >= 8 && idade <= 10){
		printf("Categoria: Infantil B");
	}else if(idade >= 11 && idade <= 13){
		printf("Categoria: Juvenil A");
	}else if(idade >= 14 && idade <= 17){
		printf("Categoria: Juvenil B");
	}else if(idade >= 18 && idade <= 122){
		printf("Categoria: Sênior");
	}else{
		printf("Idade Inválida!");
	}
}
	
