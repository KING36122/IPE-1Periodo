#include<stdio.h>
#include<math.h>
int main(){
	int base,altura,pe,area,dia;
	printf("Digite o valor da base do retângulo (em cm): ");
	scanf("%d",&base);
	printf("Digite o valor da altura do retângulo (em cm): ");
	scanf("%d",&altura);
	pe = 2 * (base+altura);
	area = base*altura;
	dia = sqrt((base*base)+(altura*altura));
	printf("O perímetro do retângulo é %d a área é %d e o diâmetro é %d",pe,area,dia);
}

