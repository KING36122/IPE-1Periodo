#include<stdio.h>
int main(){
	float salario,g,n;
	printf("Digite seu salario base: ");
	scanf("%f",&salario);
	g = salario + (salario*0.05);
	n = g - (salario*0.08);
	printf("Seu novo salario eh de R$%.2f",n);
}
