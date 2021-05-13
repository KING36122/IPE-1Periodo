#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int v[],int t){
	int i;
	for(i=0;i<t;i++){
		v[i]=1+rand()%100;
	}
}

void ordena(int v[],int t){
	int i,j,menor,a;
	for(i=0;i<t-1;i++){
		menor = i;
		for(j=i+1; j<t;j++){
			if(v[j]<v[menor]){
				menor = j;
			}
		}
		if(i!=menor){
			a = v[i];
			v[i] = v[menor];
			v[menor] = a;
		}
	}
	printf("\n");
}

void mostra(int v[],int tam){
	int i;
	printf("Vetor: ");
	for(i=0;i<tam;i++){
		printf("%d ",v[i]);
	}
}

int buscaBinaria(int v[],int tam, int x){
	int i,in=0,fim=tam-1;
	while(in<=fim){
		int meio = ((in+fim)/2);
		if(x==v[meio]){
			return meio;
		}else if(x>v[meio]){
			in=meio+1;
		}else{
			fim=meio-1;
		}
	}
	return -1;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=10,A[n],num,val;
	a(A,n);
	ordena(A,n);
	mostra(A,n);
	printf("\nDigite um número: ");
	scanf("%d",&num);
	val=buscaBinaria(A,n,num);
	if(val>=0){
		printf("\nEste número está no vetor na posição %d!",val);
	}else{
		printf("\nEste número não está no vetor!");
	}
}
