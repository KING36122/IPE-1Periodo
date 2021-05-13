#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int v[],int t){
	int i;
	for(i=0;i<t;i++){
		v[i]=1+rand()%100;
//		scanf("%d",&v[i]);
	}
}

void b(int v[],int t){
	int i;
	printf("Vetor A: ");
	for(i=0;i<t;i++){
		printf("%d  ",v[i]);
	}
}

void c(int v[],int t, int n){
	int i,vet[t];
	for(i=0;i<t;i++){
		vet[i] = v[i]*n;
	}
	printf("\nVetor B: ");
	for(i=0;i<t;i++){
		printf("%d  ",vet[i]);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=10,v[n],num;
	a(v,n);
	b(v,n);
	printf("\n\nDigite um número: ");
	scanf("%d",&num);
	c(v,n,num);
}
