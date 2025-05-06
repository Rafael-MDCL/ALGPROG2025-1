//Fazer um programa que calcule e imprima o fatorial de um número fornecido pelo usuário. Repetir a
//execução do programa tantas até o usuário responder não. O fatorial de um número inteiro positivo é
//definido como o número multiplicado por ele menos 1, menos 2, etc até o valor 1.

#include <stdio.h>

int main() {
    int numero, fatorial;
    char opcao;

    do {
        printf("Digite um número para calcular o fatorial: ");
        scanf("%d", &numero);

        fatorial = 1;
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %d\n", numero, fatorial);

        printf("Deseja calcular outro número? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    return 0;
}
