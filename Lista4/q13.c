#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,maior,menor,num;
	int i;
	printf("Digite um número: ");
	scanf("%f",&num);
	maior = num;
	menor = num;
	for(i=0;i<2;i++){
		printf("Digite um número: ");
		scanf("%f",&num);
		if(num > maior){
			maior = num;
		}else if(num < menor){
			menor = num;
		}
	}
	printf("O manor número é %.2f e o menor é %.2f",maior,menor);
}
