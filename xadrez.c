#include <stdio.h>

// função recursiva para mover a torre
void movimentarTorre(int num) {
    if (num > 0) {
        printf("Direita. \n");
        movimentarTorre(num - 1);
    }
}

// função recursiva para mover a rainha
void movimentarRainha(int num) {
    if (num > 0) {
        printf("Esquerda. \n");
        movimentarRainha(num - 1);
    }
}

// função recursiva para mover o bispo
void movimentarBispo(int num) {
    if (num > 0) {
        printf("Direita, Cima. \n");
        movimentarBispo(num - 1);
    }
}

int main() {

    printf("\n");
    printf("Movimentacao das pecas de xadrez. \n");
    printf("\n");

    // movimento da torre
    printf("Torre. \n");
    movimentarTorre(5);
    printf("\n");

    // movimentação da rainha
    printf("Rainha. \n");
    movimentarRainha(8);
    printf("\n");

    // movimentação do bispo
    printf("Bispo. \n");
    movimentarBispo(5);
    printf("\n");

    // movimentação do cavalo
    printf("Cavalo. \n");
    for (int i = 1; i > 0; i--) {

        for (int j = 2; j > 0 && i > 0; j--) {
            printf("Cima. \n");
        }
        
        printf("Direita. \n");
    }
    printf("\n");

    return 0;
}