#include <stdio.h>

int main() {
    float salario, desconto, total;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    desconto = salario * 0.11;

    if (desconto > 318.20) { 
        printf("Voce atingiu o limite do desconto possivel\n");
        desconto = 318.20;
    }

    total = salario - desconto;

    printf("O total do salario recebido com o desconto de %.2f e %.2f\n", desconto, total);

    return 0;
}
