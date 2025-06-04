// 2. Faça um programa que leia 5 valores para num vetor e imprima o resultado de cada
// valor multiplicado pela sua posição no vetor. Por exemplo: 1, 2, 3, 4 e 5 imprimirá na tela 0, 2, 6,
// 12 e 20.

#include <stdio.h>

int main() {
    int vetor[5];
    int produto;

    printf("Digite os valores do vetor a serem multiplicados pelos indices em que se encontram:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
        produto = vetor[i] * i;
        printf("\no produto dos vetores sao: %d\n", produto);
    }

}