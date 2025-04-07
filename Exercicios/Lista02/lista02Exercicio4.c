// 4. Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do grau A
// e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau B 2/3.
#include <stdio.h>
int main() {
  float notaA, notaB, media;

  printf("Digite a primeira nota: ");
  scanf("%f", &notaA);

  printf("Digite a segunda nota: ");
  scanf("%f", &notaB);

  media = (notaA + notaB * 2)/3;

  printf(" A media das notas e %.2f \n", media);

  return 0;
  }