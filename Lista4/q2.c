#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float s,ns,sl;
	printf("Digite seu salário bruto: ");
	scanf("%f",&s);
	if(s<=0){
		printf("Salário inválido!");
	}else{
		ns = s - (s*0.1);
		sl = ns - (ns*0.05);
	    printf("Seu salário líquido é de R$%.2f", sl);
	}
}
