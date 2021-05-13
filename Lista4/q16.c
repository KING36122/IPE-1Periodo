#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int dia,mes;
	char signo[15];
	printf("Digite o dia do seu nascimento: ");
	scanf("%d",&dia);
	printf("Digite o mês do seu nascimento: ");
	scanf("%d",&mes);
	if(dia <= 0 || mes <= 0 || dia > 31 || mes > 12){
		printf("Dia ou mês inválidos!");
		strcpy(signo, "Nada");
	}else{
		if((dia >= 21 && mes == 1) || ( dia <= 19 && mes == 2)){
			strcpy(signo, "Aquário");
		}else if((dia >= 20 && mes == 2) || ( dia <= 20 && mes == 3)){
			strcpy(signo, "Peixes");
		}else if((dia >= 21 && mes == 3) || ( dia <= 20 && mes == 4)){
			strcpy(signo, "Áries");
		}else if((dia >= 21 && mes == 4) || ( dia <= 20 && mes == 5)){
			strcpy(signo, "Touro");
		}else if((dia >= 21 && mes == 5) || ( dia <= 20 && mes == 6)){
			strcpy(signo, "Gêmeos");
		}else if((dia >= 21 && mes == 6) || ( dia <= 21 && mes == 7)){
			strcpy(signo, "Câncer");
		}else if((dia >= 22 && mes == 7) || ( dia <= 22 && mes == 8)){
			strcpy(signo, "Leão");
		}else if((dia >= 23 && mes == 8) || ( dia <= 22 && mes == 9)){
			strcpy(signo, "Virgem");
		}else if((dia >= 23 && mes == 9) || ( dia <= 22 && mes == 10)){
			strcpy(signo, "Libra");
		}else if((dia >= 23 && mes == 10) || ( dia <= 21 && mes == 11)){
			strcpy(signo, "Escorpião");
		}else if((dia >= 22 && mes == 11) || ( dia <= 21 && mes == 12)){
			strcpy(signo, "Sagitário");
		}else{
			strcpy(signo, "Capricórnio");
		}
	}
	printf("Seu signo é %s",signo);
}
