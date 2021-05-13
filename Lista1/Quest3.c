#include<stdio.h>
#define x 50
int main(){
	int v[x],i,a=0;
	for(i=0;i<x;i++){
		v[i] = 1 + rand() % 100;
	}
	for(i=0;i<x;i++){
		printf("%d\t",v[i]);
	}
	printf("\nDigite um valor para multiplicar: ");
	scanf("%d",&a);
	for(i=0;i<x;i++){
		v[i] = v[i] * a;
	}
	for(i=0;i<x;i++){
		printf("%d\t",v[i]);
	}
	return 0;
}
