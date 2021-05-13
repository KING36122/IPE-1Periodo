#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int h,x,f,r,m;
	float ct;
	printf("\n----CARDÁPIO----\n");
	printf("\nHamburguer---------- R$ 3,00\n");
	printf("X-Burguer----------- R$ 2,50\n");
	printf("Fritas-------------- R$ 2,50\n");
	printf("Refrigerante-------- R$ 1,00\n");
	printf("Milkshake----------- R$ 3,00\n");
	printf("Digite a quantidade de Hambúrguer's que deseja: ");
	scanf("%d",&h);
	printf("Digite a quantidade de X-Burguer's que deseja: ");
	scanf("%d",&x);
	printf("Digite a quantidade de Fritas que deseja: ");
	scanf("%d",&f);
	printf("Digite a quantidade de Refrigerantes que deseja: ");
	scanf("%d",&r);
	printf("Digite a quantidade de Milkshake's' que deseja: ");
	scanf("%d",&m);
	ct = h*3 + x*2.5 + f*2.5 + r*1 + m*3;
	if(h < 0 || x < 0 || f < 0 || r < 0 || m < 0){
		printf("Algum dos valores digitados é menor que 0!");
	}else{
		printf("A conta final deu R$%.2f", ct);
	}
}
