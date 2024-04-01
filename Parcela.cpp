#include <stdio.h>

int main(){
	float ValorDaCompra;
	int parcelas;
	
	printf("Digite o preco do produto: R$");
	scanf("%f", &ValorDaCompra);
	printf("Digite a quantidade de parcelas:");
	scanf("%d", &parcelas);
	
	float valorParcela = ValorDaCompra / parcelas;
	
	printf("Valor das parcelas: R$ %.2f\n", valorParcela);
}
