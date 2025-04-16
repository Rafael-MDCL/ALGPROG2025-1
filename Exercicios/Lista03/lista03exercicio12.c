//12) A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
//algoritmo que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5-7 anos
//Infantil B 8-10 anos
//Juvenil A 11-13 anos
//Juvenil B 14-17 anos
//Sênior Maiores de 18 anos

#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main() {
  SetConsoleOutputCP(CP_UTF8);
  setlocale(LC_ALL, "pt_BR.UTF-8");

  float idade;

  printf("Digite sua idade: ");
  scanf("%f", &idade);

  if (idade >= 18) {
    printf("Você faz parte da categoria sênior, por ter %f", idade);
  } else if (idade >=14 && idade <=17) {
    printf("Você faz parte da categoria juvenil B, por ter %f", idade);
  } else if (idade >=11 && idade <=13) {
    printf("Você faz parte da categoria juvenil A, por ter %f", idade);
  } else if (idade >=8 && idade <=10) {
    printf("Você faz parte da categoria infantil B, por ter %f", idade);
  } else if (idade >=5 && idade <=7) {
    printf("Você faz parte da categoria infantil A, por ter %f", idade);
  } else {
    printf("O valor digitado não condiz com o esperado (Números)\n");
  }

  return 0;
}