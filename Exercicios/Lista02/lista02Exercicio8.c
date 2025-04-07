// 8.Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa que leia
// a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.
#include <stdio.h>

int main() {
  float celsius, fahrenheit;
  printf("Digite a temperatura em celsius: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9 / 5) + 32;

  printf("%2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
  return 0;

}