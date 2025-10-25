#include <stdio.h>

int main() {
    // Mover A Torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Move o Bispo 5 casas diagonais à direita
    int contador = 0;

    while (contador < 5) {
        printf("Cima Direita\n", contador); // Imprime a direção do movimento
        contador++;
    }

    // Move a Rainha 8 casas à esquerda
    int movimento = 1;

    do{
        printf("Esquerda\n");
        movimento++;

    } while (movimento <= 8);

    return 0;
}