//15) Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço
//normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir
//para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
//1 - À vista em dinheiro, recebe 15% de desconto
//2 - À vista no cartão de crédito, recebe 10% de desconto
//3 - Em duas vezes, preço normal de etiqueta sem juros
//4 - Em três vezes, preço normal de etiqueta mais juros de 10%

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    float precoEtiqueta, precoFinal;
    int condicaoPagamento;

    // Leitura do preço do produto
    printf("Digite o preco do produto: R$ ");
    scanf("%f", &precoEtiqueta);

    // Leitura da condição de pagamento
    printf("Escolha a condicao de pagamento:\n");
    printf("1 - À vista em dinheiro (15%% de desconto)\n");
    printf("2 - À vista no cartao de credito (10%% de desconto)\n");
    printf("3 - Em duas vezes (preco normal)\n");
    printf("4 - Em tres vezes (10%% de juros)\n");
    scanf("%d", &condicaoPagamento);

    // Calculando o valor final conforme a condição de pagamento
    switch (condicaoPagamento) {
        case 1:
            precoFinal = precoEtiqueta - (precoEtiqueta * 0.15);
        printf("Valor a ser pago: R$ %.2f (15%% de desconto)\n", precoFinal);
        break;
        case 2:
            precoFinal = precoEtiqueta - (precoEtiqueta * 0.10);
        printf("Valor a ser pago: R$ %.2f (10%% de desconto)\n", precoFinal);
        break;
        case 3:
            precoFinal = precoEtiqueta;
        printf("Valor a ser pago: R$ %.2f (sem desconto e sem juros)\n", precoFinal);
        break;
        case 4:
            precoFinal = precoEtiqueta + (precoEtiqueta * 0.10);
        printf("Valor a ser pago: R$ %.2f (10%% de juros)\n", precoFinal);
        break;
        default:
            printf("Condicao de pagamento invalida.\n");
        break;
    }

    return 0;
}