#include<stdio.h>
#define x 10
int main(){
	int v[x],i,soma = 0;
	for(i=0;i<x;i++){
		v[i] = 1 + rand() % 100;
	}
	for(i=0;i<x;i++){
		soma = soma + v[i];	
	}
	printf("soma = %d ",soma);
	return 0;
}
