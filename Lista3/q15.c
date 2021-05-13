#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char sexo;
	float alt;
	printf("Digite M para masculino e F para feminino: ");
	scanf("%c",&sexo);
	printf("Digite sua altura (em metros): ");
	scanf("%f",&alt);
	if(alt<0.2){
		printf("Altura inválida!");
	}else{
		if(sexo == 'M' || sexo == 'm'){
			printf("Seu peso ideal é de %.2f Kg",(72.7*alt) - 58);
		}else if(sexo == 'F' || sexo == 'f'){
			printf("Seu peso ideal é de %.2f Kg", (62.1*alt) - 44.7);
		}else{
			printf("Sexo inválido!");
		}
	}
}
