#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int s=1,soma=0;
	while(s<6561){
		s=s*3;
		printf("\n%d",s);
		soma+=s;
	}
	printf("\nA soma dessa progressão é de %d",soma);
}
