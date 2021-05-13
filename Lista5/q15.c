#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int k;
	float t=0,i;
	printf("Digite um valor: ");
	scanf("%d",&k);
	for(i=1;i<101;i++){
		t = t + (k+i);
	}
	printf("%.2f",t);
}
	
