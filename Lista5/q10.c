#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int qtd,i;
	float sal,soma,maior,menor;
	printf("Digite a quantidade de funcionários: ");
	scanf("%d",&qtd);
	printf("Digite o salário: R$");
	scanf("%f",&sal);
	soma = sal;
	maior = sal;
	menor = sal;
	if(sal <= 0){
		printf("Salário inválido!");
	}else{
		for(i=0;i<qtd-1;i++){
			printf("Digite o salário: R$");
			scanf("%f",&sal);
			if(sal <= 0){
				printf("Salário inválido!");
				break;
			}else{
				if (sal > maior){
					maior = sal;
				}else if(sal < menor){
					menor = sal;
				}
				soma+=sal;
			}
		}
		printf("\nMédia dos salários dos %d funcionários é de: R$%.2f",qtd,soma/qtd);
		printf("\nMaior salário: R$%.2f",maior);
		printf("\nMenor salário: R$%.2f",menor);
	}
}
