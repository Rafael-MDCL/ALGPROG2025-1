// 2. Implemente uma função tabuada que receba como parâmetro um número inteiro e escreva a tabuada
// desse número.

#include <stdio.h>

void tabuada(int n) {
    for (int i = 0; i < 10; i++) {
        int produto = n * (i + 1);
        printf("%d x %d = %d\n", n, i + 1, produto);
    }
}

int main() {
    int n;

    printf("Digite o número que deseja visualizar sua tabuada:\n");
    scanf("%d", &n);

    tabuada(n);

    return 0;
}
