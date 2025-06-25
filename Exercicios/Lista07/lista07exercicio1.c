// 1. Implemente uma função cumprimentar que receba como parâmetro o nome de uma pessoa e escreva
// a mensagem “Olá, <nome_da_pessoa>!”

#include <stdio.h>

void cumprimentar (const char nome[]) { // Estrutura de uma function, Void não retornará nada
    printf("Ola, %s!\n", nome);
}

int main() {
    char nome [50];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    cumprimentar(nome);

    return 0;
}
