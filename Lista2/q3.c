#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1,num2;
	char sinal;
	printf("Digite um número: ");
	scanf("%f",&num1);
	printf("Digite outro número: ");
	scanf("%f",&num2);
	printf("DIGITE:\n+ para somar \n- para subtrair \n* para multiplicar \n/ para dividir: ");
	scanf("%s",&sinal);
	switch(sinal){
		case('+'):
			printf("A soma de %.2f + %.2f é %.2f",num1,num2,num1+num2);
			break;
		case('-'):
			printf("A subtração de %.2f - %.2f é %.2f",num1,num2,num1-num2);
			break;
		case('*'):
			printf("A multiplicação de %.2f * %.2f é %.2f",num1,num2,num1*num2);
			break;
		case('/'):
			if(num2 != 0){
			printf("A divisão de %.2f por %.2f é %.2f",num1,num2,num1/num2);
			break;
			}else{
				printf("Divisão por 0!");
				break;
			}
		default:
			printf("Opção Inválida!");
			break;
	}
}
