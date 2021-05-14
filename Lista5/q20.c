#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float cont2 = 0,i=0,cont1,a=0;
	while(cont2<4){
		cont1 = 0;
		for(a=0;a<i+1;a++){
			if(i%a==0){
				cont1++;
			}
		}
		if(cont1==2){
			printf("%.0f",i);
			cont2++;
		}
		i++;
	}
}
