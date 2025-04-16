// 10) Dados não precisam ser tão “quadrados”, ou cúbicos para ser mais exato. Faça um programa que
// simule dados de 4, 6, 8, 10, 12 ou 16 faces (apenas estes valores). Peça para o usuário informar no
// começo do programa quantas faces quer, para depois fazer o sorteio.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int faces, resultado;

  srand(time(NULL));

  printf("Digite a quantidade de faces (até 16 faces e variando de 2 em 2 com excecao do 14) :  ");
  scanf("%d", &faces);
  if (faces == 4 || faces == 6 || faces == 8 || faces == 10 || faces == 12 || faces == 16) {

    resultado = (rand() % faces) + 1;
    printf("Você rolou um dado de %d faces e tirou: %d\n", faces, resultado);
  } else {
    printf("Quantidade de faces invalida. Use apenas 4, 6, 8, 10, 12 ou 16.\n");
  }
  return 0;
}