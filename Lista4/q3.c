#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	char c1[30],c2[30],c3[30];
	float v1,v2,v3,co1,co2,co3;
	printf("Digite o nome do corretor 1: ");
	scanf("%s",&c1);
	printf("Digite o valor das vendas referentes a ele: ");
	scanf("%f",&v1);
	printf("Digite o nome do corretor 2: ");
	scanf("%s",&c2);
	printf("Digite o valor das vendas referentes a ele: ");
	scanf("%f",&v2);
	printf("Digite o nome do corretor 3: ");
	scanf("%s",&c3);
	printf("Digite o valor das vendas referentes a ele: ");
	scanf("%f",&v3);
	if(v1 < 0 || v2 < 0 || v3 < 0){
		printf("Valores de venda inválidos!");
	}else{
		printf("\nRELATÓRIO DE VENDAS DOS CORRETORES:");
		if(v1 > 50000){
			co1 = v1*0.12;
		}else if(v1 >= 30000){
			co1 = v1*0.095;
		}else{
			co1 = v1*0.07;
		}
		
		if(v2 > 50000){
			co2 = v2*0.12;
		}else if(v2 >= 30000){
			co2 = v2*0.095;
		}else{
			co2 = v2*0.07;
		}
		
		if(v3 > 50000){
			co3 = v3*0.12;
		}else if(v3 >= 30000){
			co3 = v3*0.095;
		}else{
			co3 = v3*0.07;
		}
		printf("\nCorretor 1: %s, com total de venda: %.2f e comissão de: %.2f",c1,v1,co1);
		printf("\nCorretor 2: %s, com total de venda: %.2f e comissão de: %.2f",c2,v2,co2);
		printf("\nCorretor 3: %s, com total de venda: %.2f e comissão de: %.2f",c3,v3,co3);
		printf("\nTotal de vendas da empresa é de: %.2f",v1+v2+v3);
	}
}
