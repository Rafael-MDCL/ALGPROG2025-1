// 2. Um turista deseja comprar dólares em uma casa de câmbio. Escreva um programa que leia a cotação do
// dólar para real, a quantidade de dólares que o turista deseja comprar, e calcule o valor total em reais
// que ele precisará pagar.

#include <stdio.h>

#define conversao 5.00

int main() {

    double dolar, real;

    printf("Digite a quantidade a ser convertida: ");
    scanf("%lf", &dolar);

    real = dolar * conversao;

    printf("Valor em reais: %.2f\n", real);
    return 0;

}
