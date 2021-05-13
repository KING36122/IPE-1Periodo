#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float sf,n,saldo,dep,ret;
	char t;
	printf("Digite seu número do cartão (somente o número): ");
	scanf("%f",&n);
	printf("Informe seu saldo: ");
	scanf("%f",&saldo);
	fflush(stdin);
	printf("Qual operação deseja usar?");
	printf("\nDigite D para depósito ou R para retirada: ");
	scanf("%c",&t);
	if(t == 'D' || t == 'd'){
		printf("Quanto deseja depositar?");
		printf("\nDepósito de: ");
		scanf("%f",&dep);
		sf = saldo + dep;
		printf("Seu saldo é de R$%.2f", sf);
	}else if(t == 'R' || t == 'r'){
		printf("Quanto deseja retirar?");
		printf("\nRetirada de: ");
		scanf("%f",&ret);
		sf = saldo - ret;
		if (sf < 0){
			printf("Seu saldo está negativo (R$%.2f), conta estourada!",sf);
		}else{
			printf("Seu novo saldo é de R$%.2f",sf);
		}
	}else{
		printf("Operação Inválida!");
	}
}
