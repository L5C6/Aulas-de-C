#include <stdio.h>

int main() {
    int num1, num2;

    // Valores do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    //  Mostra os Valores Originais
    printf("Valores originais: num1 = %d, num2 = %d\n", num1, num2);

    // Troca os valores usando apenas operadores de atribuição
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // MOstra os valores depois da troca
    printf("Valores depois da troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

