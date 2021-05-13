#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int v[],int t){
	int i;
	for(i=0;i<t;i++){
		v[i]=1+rand()%100;
		printf("%d ",v[i]);
	}
}

void b(int v[],int t){
	int i,c=0,c1=0;
	for(i=0;i<t;i++){
		if(i%2==0){
			c++;
		}else if(i%2==1){
			c1++;
		}
	}
	printf("\n[%d]\t\t[%d]\n",c,c1);
	int p[c],j,im[c1];
	for(i=0;i<t;i++){
		if(i%2==0){
			p[i]=v[i];
			printf("Ordem par: %d\t",p[i]);
		}else if(i%2==1){
			im[i]=v[i];
			printf("Ordem ímpar: %d\n",im[i]);
		}
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=10,A[n];
	a(A,n);
	b(A,n);
}
