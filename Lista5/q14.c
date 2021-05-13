#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	float w=0,i;
	printf("Digite um valor: ");
	scanf("%d",&n);
	for(i=1;i<n+1;i++){
		w = w + 1/i;
	}
	printf("%f",w);
}
