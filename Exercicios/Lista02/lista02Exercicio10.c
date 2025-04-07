// 10. O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer que você
// calcule quanto cada cliente gastou na loja apenas informando o número de camisetas, calças e cintos
// comprados. As camisetas custam R$ 25,00, as calças R$ 100,00 e os cintos R$ 40,00. Some o valor da
// compra e ao final dê um desconto de 10 por cento sobre o total. Exiba na tela o valor do desconto e
// o valor da compra
#include <stdio.h>

int main() {
  int camiseta_preco = 25;
  int calca_preco = 100;
  int cinto_preco = 40;
  int camiseta, calca, cinto;
  float valor;
  float desconto;
  float custo;

  printf("Digite a quantidade de camisetas compradas, caso nao tenha comprado nenhuma digite 0: ");
  scanf("%i", &camiseta);

  printf("Digite a quantidade de calcas compradas, caso nao tenha comprado nenhuma digite 0: ");
  scanf("%i", &calca);

  printf("Digite a quantidade de cintos comprados, caso nao tenha comprado nenhum digite 0: ");
  scanf("%i", &cinto);

  valor = (camiseta * camiseta_preco + calca * calca_preco + cinto * cinto_preco);
  desconto = valor * 0.10;
  custo = valor - desconto;

  printf("Sua compra custou: %.2f, mas com o desconto de 10%% totalizou: %.2f \n", valor, custo);

  return 0;
}