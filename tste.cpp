#include <stdio.h>

int main() {
    int CompraRoupas;
    int StockRoupas = 30;
    int StockAtual = StockRoupas; 
    int confirmacao = 0;

    while (confirmacao != 2) {
        printf("Quantas Roupas?");
        scanf("%d", &CompraRoupas);

        if (CompraRoupas <= StockAtual && CompraRoupas > 0) { 
            StockAtual = StockAtual - CompraRoupas; 
            printf("Voce comprou %d roupas\n", CompraRoupas);
            printf("O stock atual: %d\n", StockAtual);
            printf("Deseja comprar outra roupa? digite 1 para sim, 2 para nao:");
        scanf("%d", &confirmacao);
        } else {
            printf("Nosso stock tem um limite de %d\n Verifique o valor inserido lembrando que tem que ser > 0 ", StockAtual);
            confirmacao = 2;
        }        
    }
}


