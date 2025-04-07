// 5. Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para ler o
// preço do litro da gasolina e o valor que o motorista tem disponível para abastecer. Calcule quantos
// litros ele conseguiu colocar no tanque e exiba na tela.
#include <stdio.h>
int main(){

  float precoGasolina, valorDisponivel, litrosAbastecidos;
  printf("Digite o preco da gasolina: ");
  scanf("%f", &precoGasolina);

  printf("Qual e o valor disponivel? : ");
  scanf("%f", &valorDisponivel);

  litrosAbastecidos = valorDisponivel / precoGasolina;

  printf("A quantidade abastecida foi de Litros %2.f\n ", litrosAbastecidos);
  return 0;
  }