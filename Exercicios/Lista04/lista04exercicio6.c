//Crie um algoritmo que sorteie 5 valores entre 0 e 100 e depois imprima o menor, o maior e a média
//dos valores sorteados.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int soma = 0;
    int numeros[5];
    int menor, maior;
    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        numeros[i] = rand() % 101 ;
        printf("Numero %d: %d\n", i + 1, numeros[i]);
        soma += numeros[i];

        if (i == 0) {
            menor = maior = numeros[i];
        } else {
            menor = MIN(menor, numeros[i]);
            maior = MAX(maior, numeros[i]);
        }
    }

    float media = soma / 5.0;

    printf("\nMenor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Media dos valores: %.2f\n", media);

    return 0;
}