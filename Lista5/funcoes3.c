#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char nome[100];
	printf("Nome: ");
	gets(nome);
//	scanf("%s",nome);
	printf("%s",nome);
	int t = strlen(nome);
	printf("\n%d",t);
	return 0;
}
