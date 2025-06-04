//1. Criar um vetor de 10 números v e inicialize-o sorteando valores de 10 a 90 para cada elemento.
//Depois disso, implemente algoritmos para:
//a. Imprimir o vetor
//b. Verificar se existe o valor 50 neste vetor (apenas dizer se encontrou ou não)
//c. Verificar o número de ocorrências do valor 50 neste vetor.
//d. Calcular a média dos valores do vetor
//e. Encontrar o maior e o menor valor dos elementos do vetor.
//f. Imprimir a soma e o produto acumulado dos valores dos elementos do vetor
//g. Imprimir o vetor em ordem inversa
//h. Copiar os elementos em ordem inversa para outro vetor.
//i. Crie outros dois vetores com 10 elementos, vPares e vImpares. Copie para vPares todos os
//elementos pares e para vImpares todos os elementos ímpares. Depois disso, imprima o
//conteúdo de vPares e vImpares (OBS.: guarde o número de pares e ímpares para poder
//acessar os vetores depois).
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

int main() {
    int vetor[tam];
    int especialNum = 0;
    int soma = 0;
    double produto = 1;
    float media = 0;
    int maior, menor;
    int inverso[10];
    int par[tam];
    int impar[tam];
    int uniao[20];
    int p = 0;
    int im = 0;

    srand(time(NULL));

    for (int i = 0; i < tam; i++) {
        vetor[i] = rand() % 81 + 10;

        produto *= vetor[i];

        soma += vetor[i];

        media = soma / tam;

        if (vetor[i] %2 == 0){
            par[p] = vetor[i];
            p++;
        }   else {
            impar[im] = vetor[i];
            im++;
        }

        if (i == 0) {
            menor = vetor[i];
            maior = vetor[i];
        }
        else {
            if (vetor[i] > maior) maior = vetor[i];
            if (vetor[i] < menor) menor = vetor[i];
        }

        if (vetor[i] == 50)
        {
            printf("\nVetor [%d] : %d\n\n, Foi encontrado o valor especial!\n",i + 1 , vetor[i]); // b
            especialNum++;

        }else
        {
            printf("\nVetor [%d] : %d\n\n",i + 1 , vetor[i]); // a
        }
        printf("********** Calculos matematicos ************\n");
        printf("soma: %d\n", soma);
        printf("produto: %0.lf\n", produto);
        printf("media: %2.f\n", media);
        printf("maior: %d\n", maior);
        printf("menor: %d\n", menor);
        printf("********************************************\n");
    }

    while (p < tam) {
        int complementosP = (rand() % 41)*2 + 10;
        par[p] = complementosP;
        p++;
    }

    while (im < tam) {
        int complementosI = (rand() % 40)*2 + 11;
        impar[im] = complementosI;
        im++;
    }

    printf("Array de numeros pares\n");
    for (int i = 0; i < tam; i++) {
        printf(" [%d] : %d\n", i + 1 , par[i]);
    }

    printf("Array de numeros impares\n");
    for (int i = 0; i < tam; i++) {
        printf(" [%d] : %d\n|", i + 1 , impar[i]);
    }

    printf("\n\n");

    for (int i = 0; i < tam; i++) {
        inverso[i] = vetor[tam - i - 1];
    }
    printf("\nVetor invertido:\n");
    for (int i = 0; i < tam; i++) {
        printf(" vetor[%d] = %d\n", i + 1, inverso[i]);
    }

    for (int i = 0; i < 2 * tam; i++) {
        if (i < tam) {
            uniao[i] = par[i];
        } else {
            uniao[i] = impar[i - tam];
        }
    }
    printf("\n\n");
    printf("Uniao geral:\n");
    for (int i = 0; i < (2 * tam); i++) {
        printf(" [%d] : %d\n", i + 1 , uniao[i]);
    }
    printf("\n\n");

    printf("O valor especial foi encontrado: %d vezes\n",especialNum); // c

    return 0;

}