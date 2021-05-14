#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float num=2,i,soma,a=0;
	while(a<4){
		soma = 0;
		for(a=1;a<num;a++){
			if(num%i==0){
				soma++;
			}
		}
		if(soma==num){
			printf("%.0f",num);
			a++;
		}
		num++;
	}
}
