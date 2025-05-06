//Escrever um programa que produza a saída abaixo na tela, para n linhas e usando um caractere lido do
//teclado.

#include <stdio.h>

int main() {
    int n;
    char c;

    printf("Entre com um número: ");
    scanf("%d", &n);

    printf("Entre com um caractere: ");
    scanf(" %c", &c);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", c);
        }
        printf("\n");
    }

    return 0;
}