#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float peso,alt,imc;
	printf("Digite seu peso (em Kg): ");
	scanf("%f",&peso);
	printf("Digite sua altura (em m): ");
	scanf("%f",&alt);
	if(peso <= 0 || alt <= 0){
		printf("Valor Inválido!");
	}else{
		imc = peso/pow(alt,2);
		if(imc > 30){
			printf("Obesidade!");
		}else if(imc >= 25){
			printf("Acima do Peso!");
		}else if(imc >= 18.5){
			printf("Peso Normal!");
		}else{
			printf("Abaixo do Peso!");
		}
	}
}
