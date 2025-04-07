// 3. Um restaurante de buffet a quilo cobra R$ 40,00 por quilo. Escreva um programa que leia o peso do
// prato do cliente e calcule o valor a ser pago.

#include <stdio.h>
#define taxa 40.00
int main(){

  float peso;
  printf("Digite o peso em kg do prato: ");
  scanf("%f", &peso);

  peso *= taxa;

  printf("Sua conta é: %.2f\n", peso);
  return 0;
  }