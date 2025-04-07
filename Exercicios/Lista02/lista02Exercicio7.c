// 7.Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar seus
// pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que leia o número
// de pássaros que o criador possui e calcule a quantidade total de ração necessária por dia.
#include <stdio.h>

int main(){
  int passaros;
  float racao;
  
  printf("Qual a quantidade de passaros do criadouro?: ");
  scanf("%i", &passaros);

  racao = passaros * 30;
  printf("A quantidade de racao necessaria para o mes com base na quantidade de passaros sera de: %.2f gramas \n ", racao);

  return 0;
}

