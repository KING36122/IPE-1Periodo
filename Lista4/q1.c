#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float v,m=0;
	printf("Digite a sua velocidade (em Km/h): ");
	scanf("%f",&v);
	if(v<=0){
		printf("Velocidade inválida!");
	}else{
		m = v/3.6;
     	printf("Sua velocidade é de %.2f m/s",m);
	}
}
