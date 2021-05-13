#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float i;
	printf("Informe o índice de poluição: ");
	scanf("%f",&i);
	if(i < 0){
		printf("Nenhuma empresa notificada!");
	}else if(i >= 0.5){
		printf("Todos os grupos de indústrias devem receber intimação de paralisação!");
	}else if(i >= 0.4){
		printf("O 1º e 2º grupo de indústrias devem receber intimação de suspensão!");
	}else if(i >= 0.3){
		printf("O 1º grupo de indústria deve receber intimação de suspensão!");
	}else if(i >= 0 && i <= 0.25){
		printf("Nível aceitável!");
	}else{
		printf("Não emite intimação, mas está acima do nível aceitável");
	}
}
