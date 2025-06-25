// 4. Implemente uma função sorteio que receba o intervalo de valores inteiros início e fim como parâmetro
// e sorteie um número dentro do intervalo (considerando intervalo fechado [início, fim])

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeroaleatorio(int inicio, int fim) {
    return inicio + (rand() % (fim - inicio + 1));
}

int main () {
    srand(time(NULL));
    int inicio;
    int fim;

    printf("Digite o valor do intervalo inicial: ");
    scanf("%d", &inicio);

    printf("Digite o valor do intervalo final: ");
    scanf("%d", &fim);

    numeroaleatorio(inicio, fim);
}