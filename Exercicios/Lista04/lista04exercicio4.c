// Escrever um programa que calcule todos os números divisíveis por certo valor indicado pelo usuário (o
// resto da divisão por este número deve ser igual a zero), compreendidos em um intervalo também
// especificado pelo usuário. O usuário deve entrar com um primeiro valor correspondente ao divisor e
// após ele vai fornecer o valor inicial do intervalo, seguido do valor final deste intervalo.
#include <stdio.h>
int main() {
    int divisor;
    int resultado;
    int inicio, fim;
    printf("Digite um divisor: ");
    scanf("%d", &divisor);

    printf("Digite o primeiro intervalo: ");
    scanf("%d", &inicio);

    printf("Digite o intervalo final: ");
    scanf("%d", &fim);

    printf("Numeros divisiveis por %d no intervalo de %d a %d: ", divisor, inicio, fim);

    for (int i = inicio; i <= fim; i++) {
        if (i % divisor == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}