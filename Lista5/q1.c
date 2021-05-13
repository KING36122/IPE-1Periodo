#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int soma = 0,i;
	for(i=85;i<907;i++){
		if(i%2==0){
			printf("%d\n",i);
			soma+=i;
		}
	}
	printf("%d",soma);
}
