#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base: não há mais casas para mover
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para movimentar o Bispo (usando também loops aninhados)
void moverBispoRecursivo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0 || casasHorizontais == 0) return; // Caso base
    printf("Cima Direita\n");
    moverBispoRecursivo(casasVerticais - 1, casasHorizontais - 1); // Movimento diagonal
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para movimentar o Cavalo utilizando loops complexos
void moverCavalo(int movimentosVerticais, int movimentosHorizontais) {
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Cima\n"); // Duas casas para cima
    }

    for (int j = 0; j < movimentosHorizontais; j++) {
        printf("Direita\n"); // Uma casa para a direita
    }
}

int main() {
    // Variáveis para definir o número de movimentos de cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavaloVerticais = 2;  // Duas casas para cima
    int movimentosCavaloHorizontais = 1; // Uma casa para a direita

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(casasBispo, casasBispo);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo
    moverCavalo(movimentosCavaloVerticais, movimentosCavaloHorizontais);

    return 0;
}