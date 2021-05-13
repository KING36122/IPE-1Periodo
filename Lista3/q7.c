#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	if ((num%4 == 0 && num%8 == 0) || (num%6 == 0 && num%9 == 0)){
		printf("Ele é múltiplo ou de 4 e 8 ou de 6 e 9");
	}else{
		printf("Ele não é múltiplo nem de 4 e 8 nem de 6 e 9");
	}
}
	
