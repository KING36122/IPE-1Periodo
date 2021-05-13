#include<stdio.h>
#define x 10
int main(){
	int A[x],B[x],C[x],i;
	for(i=0;i<x;i++){
		A[i] = 1 + rand() % 100;
		B[i] = 2 + rand() % 100;
	}
	printf("Vetor A:\t");
	for(i=0;i<x;i++){
		printf("%d\t",A[i]);
	}
	printf("\n");
	printf("Vetor B:\t");
	for(i=0;i<x;i++){
		printf("%d\t",B[i]);
	}
	for(i=0;i<x;i++){
		C[i] = A[i] + B[i];
	}
	printf("\n");
	printf("Vetor C:\t");
	for(i=0;i<x;i++){
		printf("%d\t",C[i]);
	}
}

