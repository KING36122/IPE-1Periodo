#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int a=0,b=1,n,i;
	printf("Digite a quantidade: ");
	scanf("%d",&n);
	while(b<n){
		printf("\n%d",b);
		b = b + a;
		a = b - a;
	}
}
