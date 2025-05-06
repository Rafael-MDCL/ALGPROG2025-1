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
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char opcao;
    float soma = 0;
    float media;
    float positivo = 0;
    float negativo = 0;
    float nulo = 0;
    int n, numero;
    printf("Digite a questão a ser visualizada: \n");
    scanf("%c", &opcao);

    if (opcao == 'a' || opcao == 'A' )   {
        for (int i = 0; i <= 100;  ++i) {
            printf("%d\n", i);
        }
    }
    if (opcao == 'b' || opcao == 'B' ) {
        for (int i = 20; i <= 50; ++i ) {
            if (i % 2 == 0) {
                printf("%d\n", i);
            }
        }
    }
    if (opcao == 'c' || opcao == 'C' ) {
        for (int i = 70; i >= 25; --i ) {
            printf("%d\n", i);
        }
    }
    if (opcao == 'd' || opcao == 'D' ) {
        for (int i = 25; i <= 95; i +=2) {
            printf("%d\n", i);
        }
    }
    if (opcao == 'e' || opcao == 'E' ) {
        for (int i = 1; i <= 15; ++i) {
          soma += i;
        }
        media = soma / 15.0;
        printf("\nSoma = %0.f\n Media = %.2f\n", soma, media);
    }
    if (opcao == 'f' || opcao == 'F' ) {
      for (int i = 1; i <= 10; ++i) {
          if (i % 2 == 0) {
              printf("Este numero eh par: %d\n", i);
          }
          if (i % 2 != 0) {
              printf("Este numero eh impar: %d\n", i);
          }
      }
    }
    if (opcao == 'g' || opcao == 'G' ) {
        for (int i = 1; i <= 20; ++i) {
            int g = rand() % (21) - 10;
            if (g > 0) {
                printf("Este numero eh positivo: %d\n", g);
                positivo++ ;
            } else if (g < 0) {
                printf("Este numero eh negativo: %d\n", g);
                negativo ++ ;
            } else {
                nulo ++;
                printf("Este numero eh um valor nulo: %d\n", g);
            }
        }
        printf("Foram escolhidos = %0.f positivos, %0.f negativos e %0.f nulos.", positivo, negativo, nulo);
    }
    if (opcao == 'h' || opcao == 'H' ) {
        printf("Quantos numeros serao somados: ");
        scanf("%d", &n);

        for (int i = 1; i <= n; ++i) {
            printf("Digite o %dº número: ", i);
            scanf("%d", &numero);
            soma += numero;
        }
         printf("\nA soma dos %d números eh: %0.f\n", n, soma);
    }
    return 0;
}