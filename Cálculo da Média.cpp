#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float soma, media;

    // Solicitar as notas ao usu�rio
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calcular a soma e a m�dia
    soma = nota1 + nota2 + nota3 + nota4;
    media = soma / 4;

    // Imprimir os resultados
    printf("A soma das notas �: %.2f\n", soma);
    printf("A m�dia das notas �: %.2f\n", media);

    return 0;
}

