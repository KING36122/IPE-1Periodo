#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int i,num;
	printf("Digite um número: ");
	scanf("%d",&num);
	for(i=1;i<11;i++){
		printf("\n%d X %d = %d",num,i,num*i);
	}
}
