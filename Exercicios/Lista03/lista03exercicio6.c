// Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois 
// disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie 
// um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da 
// soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga 
// que o programa venceu
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num2 = rand() % 6;
    srand(time(NULL));
    int num1, resultado;
    int escolha;
    printf("Par ou Impar?(escreva em minusculo): ");
    scanf("%i", &escolha);

    printf("Digite um numero de 0 a 5");
    scanf("%i", &num1);

resultado = num1 + num2;

if (resultado % 2 == 0, escolha == "PAR"){
    printf("Voce venceu");
}else if (resultado % 2 == 0, escolha == "IMPAR"){
    printf("Voce perdeu");
}else if (resultado % 2 != 0, escolha == "IMPAR"){
    printf("Voce venceu");
}else (resultado % 2 != 0, escolha == "IMPAR");
    printf("Voce perdeu");
return 0;
}