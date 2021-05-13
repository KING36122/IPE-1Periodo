#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int v[],int t){
	int i;
	for(i=0;i<t;i++){
		v[i]=1+rand()%1000;
		printf("%d ",v[i]);
	}
}

void b(int v[],int t){
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
	for(i=0;i<t;i++){
		printf("%d ",v[i]);
	}
}

void c(int v[],int t){
	int i,d=0,maior=0,i1,i2;
	for(i=0;i<t;i++){
		if((i+1)<t){
			d=v[i+1]-v[i];
			if(d>maior){
				maior=d;
				i1=i+1;
				i2=i;
			}
		}else{
			break;
		}
	}
	printf("\nMaior diferença: %d (entre v[%d] e v[%d])",maior,i1,i2);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=10,A[n];
	a(A,n);
	b(A,n);
	printf("\n");
	c(A,n);
}
