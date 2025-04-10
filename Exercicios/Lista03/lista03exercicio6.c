// Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois 
// disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie 
// um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da 
// soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga 
// que o programa venceu
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    int num1, resultado;
    char escolha[10];

    printf("Par ou Impar? (escreva em minusculo): ");
    scanf("%s", escolha);

    printf("Digite um numero de 0 a 5: ");
    scanf("%d", &num1);

    srand(time(NULL));
    int num2 = rand() % 6;

    resultado = num1 + num2;

    printf("Numero do computador: %d\n", num2);
    printf("Soma dos numeros: %d\n", resultado);

    if (resultado % 2 == 0) {
        if (strcmp(escolha, "par") == 0) {
            printf("Voce venceu!\n");
        } else {
            printf("Voce perdeu!\n");
        }
    } else {
        if (strcmp(escolha, "impar") == 0) {
            printf("Voce venceu!\n");
        } else {
            printf("Voce perdeu!\n");
        }
    }

    return 0;
}
