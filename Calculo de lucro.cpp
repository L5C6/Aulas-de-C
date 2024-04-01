#include <stdio.h>

int main(){
	float PrecoCompra, PrecoVenda, Lucro;
	
	printf("Insira o preco de compra: R$");
	scanf("%f", &PrecoCompra);
	printf("Insira o preco de venda: R$");
	scanf("%f", &PrecoVenda);
	
	Lucro = PrecoVenda - PrecoCompra;
	
	printf("O lucro obtido na venda foi R$ %.2f\n", Lucro);
	
}
