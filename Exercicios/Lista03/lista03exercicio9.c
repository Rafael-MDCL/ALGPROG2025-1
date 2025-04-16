// 9) Faça um conversor de câmbio de reais/dólar/euro. O usuário deve informar inicialmente a cotação
// de cada moeda em relação ao real. Depois apresente o seguinte menu:
//
// 1) Converter de Real para Euro
// 2) Converter de Real para Dólar
// 3) Converter de Euro para Dólar
// 4) Converter de Euro para Real
// 5) Converter de Dólar para Euro
// 6) Converter de Dólar para Real
//
// Leia o valor a ser convertido na moeda de origem e imprima na tela a quantidade na moeda
// destino.

#include <stdio.h>

int main() {
  float dolar, euro;
  int opcao;
  float valor, convercao;
  printf("Digite a cotacao do dolar: ");
  scanf("%f", &dolar);

  printf("Digite a cotacao do euro: ");
  scanf("%f", &euro);

  //Menu
  printf("\nMenu de conversao: \n");
  printf("1) Converter de Real para Euro\n");
  printf("2) Converter de Real para Dolar\n");
  printf("3) Converter de Euro para Dolar\n");
  printf("4) Converter de Euro para Real\n");
  printf("5) Converter de Dolar para Euro\n");
  printf("6) Converter de Dolar para Real\n");
  printf("Escolha uma opcao (1 a 6): ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Digite o valor em Real: ");
      scanf("%f", &valor);
      convercao = valor / euro;
      printf("valor em Euro: %.2f\n", convercao);
      break;
    case 2:
      printf("Digite o valor em Real: ");
      scanf("%f", &valor);
      convercao = valor / dolar;
      printf("valor em Dolar: %.2f\n", convercao);
      break;
    case 3:
      printf("Digite o valor em Euro: ");
      scanf("%f", &valor);
      convercao = (valor * euro) / dolar;
      printf("valor em Dolar: %.2f\n", convercao);
      break;
    case 4:
      printf("Digite o valor em Euro: ");
      scanf("%f", &valor);
      convercao = valor * euro;
      printf("valor em Real: %.2f\n", convercao);
      break;
    case 5:
      printf("Digite o valor em Dolar: ");
      scanf("%f", &valor);
      convercao = (valor * dolar) / euro;
      printf("valor em Euro: %.2f\n", convercao);
      break;
    case 6:
      printf("Digite o valor em Dolar: ");
      scanf("%f", &valor);
      convercao = valor * dolar;
      printf("valor em Reais: %.2f\n", convercao);
      break;
    default:
      printf("Opcao invalida\n");
  }
  return 0;
}