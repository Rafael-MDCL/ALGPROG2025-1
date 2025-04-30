// 1. Faça um algoritmo para:
// a. Gerar e escrever todos os números inteiros do intervalo [0,100].
// b. Gerar e escrever os números pares do intervalo [20,50].
// c. Gerar e escrever os números inteiros do intervalo [25,70] em ordem decrescente.
// d. Gerar e escrever os números ímpares do intervalo [25,95] em ordem decrescente.
// e. Ler 15 números e escrever a soma e a média dos números lidos.
// f. Ler 10 números inteiros e escrever a quantidade de números pares e a quantidade de números
// ímpares lidos.
// g. Sortear 20 números inteiros entre -10 e 10 e imprimi-los acompanhados da mensagem
// “POSITIVO”, “NEGATIVO”, ou “NULO”, conforme o caso. No final, imprimir a quantidade de
// números positivos e negativos lidos.
// h. Ler n números e imprimir no final a soma dos números lidos (obs.: n é a quantidade de números
// que deverão ser lidos e também deve ser lido do teclado)

#include <stdio.h>
int main() {
    char opcao;
    printf("Digite a questão a ser visualizada: \n");
    scanf("%c", &opcao);

    if (opcao == 'a' || opcao == 'A' )   {
        for (int i = 0; i <= 100;  ++i) {
            printf("%d", i);
        }
    }
    if (opcao == 'b' || opcao == 'B' ) {
        for (int i = 20; i <= 50; ++i ) {
            if (i % 2 == 0) {
                printf("%d", i);
            }
        }
    }
    if (opcao == 'c' || opcao == 'C' ) {
        for (int i = 70; i >= 25; --i ) {}
    }
}

|