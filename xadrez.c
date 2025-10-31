#include <stdio.h>

int main() {
    // Move a Torre 5 casas para a direita
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    printf("\n");

    // Move o Bispo 5 casas diagonais à direita
    int contador = 0;

    while (contador < 5) {
        printf("Cima Direita\n", contador); // Imprime a direção do movimento
        contador++;
    }

    printf("\n");

    // Move a Rainha 8 casas à esquerda
    int movimento = 1;

    do{
        printf("Esquerda\n");
        movimento++;

    } while (movimento <= 8);

    printf("\n");

    // Move o cavalo 2 casas para baixo e 1 casa para a esquerda
    int movimentoClompleto = 1; // Flag para controlar o movimeto "L"

    while (movimentoClompleto--)
    {
       for (int i = 0; i <3; i++) {
           printf("Baixo\n"); // Imprime "Baixo 3 vezes"

       }
       printf("Esquerda\n"); // Imprime "Direita" uma vez
    } 
       
    return 0;
}