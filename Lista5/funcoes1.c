#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int powtencia(int base,int exp){
	int p=1,i;
	for(i=1;i<=exp;i++){
		p = p * base;
	}
	return p;
}
int main(){
	int base,exp,r;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o valor da base: ");
	scanf("%d",&base);
	printf("Digite o valor do expoente: ");
	scanf("%d",&exp);
	r = powtencia(base,exp);
	printf("O resultado é %d",r);
}
