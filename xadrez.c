#include <stdio.h>

int main() {
    // Definindo as variáveis para o número de casas a serem movidas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavaloHorizontal = 1; // Quantas vezes ele se move horizontalmente (uma casa)
    int movimentosCavaloVertical = 2;   // Quantas vezes ele se move verticalmente (duas casas)

    // Movimentação da Torre (utilizando um loop for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo (utilizando um loop while)
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimentação da Rainha (utilizando um loop do-while)
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    // Movimentação do Cavalo (utilizando loops aninhados)
    printf("\nMovimento do Cavalo:\n");
    for (int vertical = 0; vertical < movimentosCavaloVertical; vertical++) {
        printf("Baixo\n");
    }

    int horizontal = 0;
    while (horizontal < movimentosCavaloHorizontal) {
        printf("Esquerda\n");
        horizontal++;
    }

    return 0;
}