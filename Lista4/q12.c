#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char t;
	printf("Em qual turno você estuda? (digite M para matutino, V para vespertino ou N para noturno): ");
	scanf("%c",&t);
	if(t == 'M' || t == 'm'){
		printf("Bom Dia!");
	}else if(t == 'V' || t == 'V'){
		printf("Boa Tarde!");
	}else if(t == 'N' || t == 'n'){
		printf("Boa Noite!");
	}else{
		printf("Valor inválido!");
	}
}
