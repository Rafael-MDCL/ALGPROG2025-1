// Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se 
// é ímpar.
#include <stdio.h>
int main() {
    int num1;

    printf("Digite um numero: ");
    scanf("%i", &num1);

    if (num1 % 2 == 0){
        printf("O numero e par");
    } else{
        printf("O numero e impar");
    }
}