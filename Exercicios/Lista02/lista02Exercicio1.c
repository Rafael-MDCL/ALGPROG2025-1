// 1. Faça um algoritmo que leia uma quantidade de tempo em minutos e escreva o tempo equivalente em
// segundos na tela.
#include <stdio.h>
int main(){

    float tempo;

    printf("Digite o tempo: ");
    scanf("%f", &tempo);
    tempo = tempo * 60;
    printf("Tempo: %.2f\n", tempo);
    return 0;
}

