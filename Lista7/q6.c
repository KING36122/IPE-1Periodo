#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void a(int v[],int t){
	int i;
	for(i=0;i<t;i++){
		v[i]=1+rand()%6;
		printf("%d ",v[i]);
	}
}

int b(int v[],int t){
	int i,j,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0;
	for(i=0;i<t;i++){
		if(v[i]==1){
			n1++;
		}else if(v[i]==2){
			n2++;
		}else if(v[i]==3){
			n3++;
		}else if(v[i]==4){
			n4++;
		}else if(v[i]==5){
			n5++;
		}else{
			n6++;
		}
	}
	printf("\nO número 1 aparece %d vezes!",n1);
	printf("\nO número 2 aparece %d vezes!",n2);
	printf("\nO número 3 aparece %d vezes!",n3);
	printf("\nO número 4 aparece %d vezes!",n4);
	printf("\nO número 5 aparece %d vezes!",n5);
	printf("\nO número 6 aparece %d vezes!",n6);
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n=5,A[n],num,i;
	a(A,n);
	b(A,n);
}
