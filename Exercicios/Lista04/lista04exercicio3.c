// Elabore um programa que lê um número de 1 a 9 e mostra a tabuada de multiplicação do número.

#include <stdio.h>
#include <windows.h>

int main() {
    int numero;
    char recomecar;

    do {
        printf("Digite um numero para exibir sua tabuada: ");
        scanf("%d", &numero);

        printf("Tabuada do %d:\n", numero);
        for (int i = 1; i <=10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\nDeseja ver outra tabuada? (s/n): ");
        scanf(" %c", &recomecar);

    } while (recomecar == 's' || recomecar == 'S');

    printf("Programa encerrado.\n");
    return 0;
}
