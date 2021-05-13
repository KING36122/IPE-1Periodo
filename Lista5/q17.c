#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float i,c,b;
	for(i=50;i<151;i++){
		c = i-32;
		b = 1.8;
		printf("\n%.2f",(c/b));
	}
}
