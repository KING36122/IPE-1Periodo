#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float km,h,v;
	printf("Informe sua distância percorrida (em Km): ");
	scanf("%f",&km);
	printf("Digite o tempo gasto em viagem (em horas): ");
	scanf("%f",&h);
	if(km <= 0 || h <= 0){
		printf("Valores inválidos!");
	}else{
		v = km/h;
		if(v > 110){
			printf("Sua velocidade média excedeu o limite de velocidade de 110 Km/h!");
		}else{
			printf("Sua velocidade está no limite ou abaixo dele!");
		}
	}
}
