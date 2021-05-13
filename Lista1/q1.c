#include<stdio.h>
int main(){
	int a,b,c,d,diferenca;
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("Digite um valor para C: ");
	scanf("%d", &c);
	printf("Digite um valor para D: ");
	scanf("%d", &d);
	diferenca = (a*b)-(c*d);
	printf("O Resultado eh %d!",diferenca);
}
