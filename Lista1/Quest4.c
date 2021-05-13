#include<stdio.h>
#define x 50
int main(){
	int v[x],i,maior=0,in;
	for(i=0;i<x;i++){
		v[i] = 1 + rand() % 100;
	}
	for(i=0;i<x;i++){
		printf("%d\t",v[i]);
	}
	for(i=0;i<x;i++){
		if(v[i]>maior){
			maior = v[i];
			in = i;
		}
	}
	printf("Maior = %d no indice %d.",maior,in);
	return 0;
}
