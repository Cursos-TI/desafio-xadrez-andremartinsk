#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva + loops aninhados para o Bispo (5 casas na diagonal para cima e à direita)
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            if (i == j) {
                printf("Cima Direita\n");
            }
        }
    }

    moverBispo(vertical - 1, horizontal - 1);
}

// Movimento complexo do Cavalo (2 casas para cima, 1 para a direita)
void moverCavalo() {
    int vertical = 2;
    int horizontal = 1;
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < vertical; i++) {
        if (i == 0) {
            for (int j = 0; j < horizontal; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    break;
                }
            }
        }
        if (i < vertical) {
            printf("Cima\n");
            continue;
        }
    }
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 5);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo
    moverCavalo();

    return 0;
}
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
