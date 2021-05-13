#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int par=0,im=0,n,i,num;
	printf("Informe quantos números você vai digitar: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Digite: ");
		scanf("%d",&num);
		if(num%2==0 && num!=0){
			par += 1;
		}else if(num == 0){
			par+=0;
			im+=0;
		}else{
			im += 1;
		}
	}
	printf("Números pares: %d e números ímpares: %d",par,im);
}
