// 1. Dados os vetores 𝑣1 = [1,5,9,2,5], 𝑣2 = [7,4,13,21,6] e 𝑣3 = [8, −3,5,7,12], faça um programa
// que copie o conteúdo dos vetores dados para uma matriz de tamanho 3x5 de forma a obter o
// seguinte resultado:
// 2. Faça a multiplicação de todos os elementos da matriz acima por 7.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v1[5] = {1,5,9,2,5};
    int v2[5] = {7,4,13,21,6};
    int v3[5] = {8,-3,5,7,12};
    int* vetores[3] = {v1, v2, v3};
    int M[3][5];
    int produto[3][5];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] = vetores[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            M[i][j] *= 7;
        }
    }

    printf("--------------------------\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

}