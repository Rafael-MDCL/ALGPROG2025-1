// 7. Faça um programa que gere uma matriz de inteiros 5x5 e que transforme os números negativos
// em positivos e vice-versa.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    srand(time(NULL));

    printf("Matriz antes da conversao:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 201 - 100;

            printf("|%d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz apos a conversao:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = -matriz[i][j];
            }
            printf("|%d", matriz[i][j]);
        }
        printf("\n");
    }
}