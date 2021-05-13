#include<stdio.h>
#include<math.h>
int main(){
	int h,vm;
	float d,litros;
	printf("Digite a quantidade de horas que você percorreu: ");
	scanf("%d",&h);
	printf("Digite sua velocidade média em (Km/h): ");
	scanf("%d",&vm);
	d = vm*h;
	litros = (d/12);
	printf("Você precisará de %.2f litros para sua viagem!",litros);
}
