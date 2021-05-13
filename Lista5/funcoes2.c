#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int perfeito(int num){
	int i,soma=0,r;
	for(i=1;i<num;i++){
		if(num%i==0){
			soma = soma + i;
		}
	}
	if(soma==num){
		r = 1;
	}else{
		r = 0;
	}
	return r;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,a;
	printf("Digite um número: ");
	scanf("%d",&num);
	a = perfeito(num);
	if(a==1){
		printf("Número Perfeito!");
	}else{
		printf("Não é Perfeito!");
	}
}
