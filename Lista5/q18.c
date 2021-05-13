#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float c=1.5,z=1.1,cn=0;
	while (c >= z){
		c+=0.02;
		z+=0.03;
		cn+=1;
	}
	printf("Levou %.0f anos para Zé ficar mais alto que Chico",cn);
}
