// 6.A loja de eletrônicos TechMundo vende uma certa quantidade de smartphones e uma quantidade de
// tablets a cada dia. Cada smartphone custa R$ 1000,00 e cada tablet custa R$ 1500,00. Ao final do dia,
// o dono quer saber quanto arrecadou com a venda dos smartphones e dos tablets. Escreva um
// programa que leia o número de smartphones e tablets vendidos em um dia e calcule o total
// arrecadado.
#include <stdio.h>

int main(){
  int smart, tablet;
  float lucro;
  printf("Quantos smartphones foram vendidos?: ");
  scanf("%i", &smart);

  printf("Quantos tablets foram vendidos?: ");
  scanf("%i", &tablet);

  smart = smart*1000;
  tablet = tablet*1500;

  lucro = smart + tablet;
  printf("O lucro foi de %.2f \n", lucro);

  return 0;
}

