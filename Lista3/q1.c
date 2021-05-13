#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor,gorjeta;
	printf("Digite o valor das despesas: ");
	scanf("%f",&valor);
	gorjeta = valor*0.1;
	printf("O valor da gorjeta é de: R$%.2f", gorjeta);
}
