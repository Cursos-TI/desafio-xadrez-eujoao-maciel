#include <stdio.h>

int main() {
    // declaração das variáveis
    int inicioTorre = 1, inicioBispo = 1;

    // movimentação das peças

    // movimentação da torre
    printf("Torre: \n");

    while(inicioTorre <= 5) {
        printf("Direita. \n");
        inicioTorre++;
    }

    printf("-----------------\n");

    // movimentação do bispo
    printf("Bispo: \n");

    do {
        printf("Cima, Direita. \n");
        inicioBispo++;
    } while (inicioBispo <= 5);

    printf("-----------------\n");

    // movimentação rainha
    printf("Rainha: \n");

    for(int i = 0; i < 8; i++) {
        printf("Esquerda. \n");
    }


    return 0;
}