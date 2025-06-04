// 5. Uma empresa está monitorando o consumo de água em uma residência ao longo de um mês (30
// dias). Para agilizar o preenchimento dos dados, faça o sorteio de valores entre 100 e 500 litros por
// dia. Escreva um programa que:
// a. Sorteie e armazene o consumo diário de água (em litros) em um vetor.
// b. Calcule o consumo total do mês.
// c. Calcule a média de consumo diário.
// d. Imprima o dia em que houve o maior consumo e o menor consumo de água.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int litros[30];
    int somatorio;
    int maior, menor;
    float media;


    for (int i = 0; i < 30; i++)
        {
        litros[i] = rand() % 401 + 100; // a.

        somatorio += litros[i];
        printf("No dia %d foram consumidos: %d litros\n",i + 1, litros[i]);
        if (i == 0)
        {
            maior = litros[0];
            menor = litros[0];
        }
        else
        {
            if (litros[i] > maior) maior = litros[i];
            if (litros[i] < menor) menor = litros[i];
        }
    }

    media = somatorio / 30.0;
    printf("****************************************************************\n");
    printf("No total, foram consumidos %d litros\n", somatorio); // b
    printf("a maior quantidade de litros foi de: %d\n", maior); // d
    printf("a menor quantidade de litros foi de: %d\n", menor); // d
    printf("a media de litros foi de: %.2f\n", media); // c
    printf("****************************************************************\n");

    return 0;
}