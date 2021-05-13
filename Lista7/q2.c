#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int v[],int t){
	int i;
	printf("Vetor:\n");
	for(i=0;i<t;i++){
		scanf("%d",&v[i]);
	}
}

int b(int v[],int ve[],int vet[],int t){
	int i,j,aux=0,c=0;
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			if(v[i]==ve[j]){
				vet[aux]=v[i];
				aux++;
				c++;
			}	
		}	
	}
	return c;
}

void c(int v[], int t){
	int i;
	for(i=0;i<t;i++){
		printf("\n%d ",v[i]);
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,ca;
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&n);
	int v[n],ve[n],vet[n];
	a(v,n);
	printf("\n");
	a(ve,n);
	ca=b(v,ve,vet,n);
	if(ca==0){
		printf("Nenhum valor igual!");
	}else{
		c(vet,ca);
	}
}
