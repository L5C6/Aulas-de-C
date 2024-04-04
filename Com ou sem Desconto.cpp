#include <stdio.h>

int main(){
	float ValorDoProduto;
	float Desconto;
	float ValorComDesconto;
	
	printf("Qual o valor do produto?:");
	scanf("%f", &ValorDoProduto);
	
	if(ValorDoProduto >= 1000.00 ) {
		Desconto = ValorDoProduto * 10 / 100;
		printf("Voce tem um desconto de: %.2f\n", Desconto);
		ValorComDesconto = ValorDoProduto - Desconto;
		printf("Esse e o preco final: %.2f\n", ValorComDesconto);
	} else {
		printf("Voce nao tem desconto");
	}
	return 0;
}
