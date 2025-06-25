// 4. Escreva um algoritmo que preenche uma matriz 4x6 com valores inteiros aleatórios entre -10 e
// 10. Calcule as somas:
// a. dos elementos da segunda linha
// b. dos elementos da quinta coluna
// c. da multiplicação dos elementos da primeira linha pelos elementos da quarta linha
// d. dos elementos só das colunas com índices pares
// e. dos elementos só das linhas com índices ímpares

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int mat[4][6];
    int somaA = 0;
    int somaB = 0;
    int somaD = 0;
    int somaE = 0;
    int maior, menor;
    int produto = 0;
    srand(time(NULL));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            mat[i][j] = rand() % 21 - 10;
            if (i == 0 && j == 0) {
                maior = menor = mat[0][0];
            } else {
                if (mat[i][j] > maior) maior = mat[i][j];
                if (mat[i][j] < menor) menor = mat[i][j]; // exercício 5
            }
        }

    }
   for (int j = 0 ; j < 6 ; j++) {
       somaA += mat[1][j];
   }

    printf("Matriz 4x6:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma da segunda linha: %d\n", somaA);

    for (int i = 0; i < 4; i++) {
        somaB += mat[i][4];
    }
    printf("Soma da quinta coluna: %d\n", somaB);


    for (int j = 0; j < 6; j++) {
        produto += mat[0][j] * mat[3][j];
    }
    printf("Produto: %d\n", produto);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            if (j % 2 == 0) {
                somaD += mat[i][j];
            }
            else {
                somaE += mat[i][j];
            }
        }
    }
    printf("Soma dos valores pares: %d\n", somaD);
    printf("Soma dos valores impares: %d\n", somaE);
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
}