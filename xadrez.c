#include <stdio.h>

// Move a Torre 5 casas para a Direita
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Move o Bispo 5 casas para a Cima Direita
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima Direita\n");
        moverBispo(casas - 1);
    }
}

// Move a Rainha 8 casas para a Esquerda
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Move a Rainha 8 casas para a Esquerda
void moverCavalo(int casas) {
    if (casas > 0) {
        printf("Baixo\n");
        moverCavalo(casas - 1);
    }
}

void moverCavalo2(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverCavalo2(casas - 1);
    }
     
}

int main() {
    moverTorre(5);
    printf("\n");

    moverBispo(5);
    printf("\n");

    moverRainha(8);
    printf("\n");

    moverCavalo(3);
    moverCavalo2(1);
    return 0;
}