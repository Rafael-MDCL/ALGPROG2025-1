// 9.Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras feitas pelos
// clientes. Faça um programa que leia o valor da compra e escreva o valor da compra com o desconto.
#include <stdio.h>
int main() {
  float compra, desconto, custo;

  printf("Digite o valor da compra: ");
  scanf("%f", &compra);

  desconto = 0.15 * compra;

  custo = compra - desconto;

  printf("Sua compra custou: %.2f, mas com o desconto de 15%% totalizou: %.2f \n", compra,custo);

  return 0;
}