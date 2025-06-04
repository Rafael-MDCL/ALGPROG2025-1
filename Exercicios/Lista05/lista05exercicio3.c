// 5.Faça um programa para testar se um dado é viciado. Faça o lançamento N vezes (N é um número
// lido pelo usuário, pode ser um número bem grande), armazene cada valor que for sorteado em um
// array com 6 posições e ao final imprima o percentual do resultado de cada face.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    int faces[6] = {0};

    printf("Quantos lançamentos de dado deseja fazer? ");
    scanf("%d", &N);

    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        int resultado = rand() % 6 + 1;
        faces[resultado - 1]++;
    }

    printf("\nResultados após %d lançamentos:\n", N);
    for (int i = 0; i < 6; i++) {
        float percentual = (faces[i] / (float)N) * 100;
        printf("Face %d: %d vezes (%.2f%%)\n", i + 1, faces[i], percentual);
    }

    return 0;
}
