#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int v[],int t){
	int i;
	for(i=0;i<t;i++){
		v[i]=1+rand()%10;
		printf("%d ",v[i]);
	}
}

void b(int v[],int t){
	int i,c,j;
	for(i=0;i<t;i++){
		c=0;
		for(j=0;j<t;j++){
			if(v[i]==v[j]){
				c++;
			}
		}
		if(c>=2){
			printf("\nO número %d apareceu %d vezes",v[i],c);
		}else{
			printf("\nO número %d apareceu apenas 1 vez",v[i]);
		}
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=10,A[n];
	a(A,n);
	b(A,n);
}
