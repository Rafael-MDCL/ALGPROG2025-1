// 2. Implemente um programa que sorteia um número de 1 a 10 e dá ao usuário 3 tentativas de acertá-lo.
//A cada tentativa errada, o programa informa se o número a adivinhar está abaixo ou acima.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tentativa = 0;
    int resposta;
    srand(time(NULL));

    int numero = rand() % 10 + 1;

    do {
        printf("Tente adivinhar o numero escolhido (1 a 10) em ate 3 tentativas: ");
        scanf("%d", &resposta);
        tentativa++;
    } while (resposta != numero && tentativa < 3);

    if (resposta == numero) {
        printf("Parabens! Voce acertou o numero %d em %d tentativa(s).\n", numero, tentativa);
    } else {
        printf("Que pena! Voce nao acertou. O numero era %d.\n", numero);
    }

    return 0;
}