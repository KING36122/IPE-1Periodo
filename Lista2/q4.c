#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	float n1,n2,n3,mp;
	printf("Digite sua 1º nota: ");
	scanf("%f",&n1);
	printf("Digite sua 2º nota: ");
	scanf("%f",&n2);
	printf("Digite sua 3º nota: ");
	scanf("%f",&n3);
	mp = (n1*2 + n2*4 + n3*4)/10;
	if(mp >= 8){
		printf("Você está aprovado com %.2f", mp);
	}else if(mp >= 5){
		printf("Tem direito à prova final, e sua nota foi %.2f", mp);
	}else{
		printf("Reprovado com nota %.2f", mp);
	}
}
