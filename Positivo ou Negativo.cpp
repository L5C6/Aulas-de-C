#include <stdio.h>

int main(){
	float numero;
	
	printf("Digite o numero:");
	scanf("%f", &numero);
	
	if(numero < 0) {
		printf("Seu numero e negativo");
	} else {
		printf("Seu numero e positivo");
	}
	return 0;
}
