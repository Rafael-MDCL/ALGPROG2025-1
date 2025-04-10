// Um comerciante comprou um produto e quer vendê-lo com lucros diferentes dependendo do valor 
// da compra. Ele quer um lucro de 45% se o valor da compra for menor que R$ 20,00, 35% se o preço 
// for de até 50 reais e lucro de 25% se valor for maior. Entrar com o valor do produto e imprimir na 
// tela o valor de venda.

#include <stdio.h>

int main(){
    float compra, lucro, total;

    printf("Digite o valor da compra: ");
    scanf("%f", &compra);

    if (compra <= 20.00 ){
        lucro = compra * 0.45;
        total = compra + lucro;
        printf("O valor a ser cobrado sera de: %.2f", total);
    }else if (compra == 50){
        lucro = compra * 0.35;
        total = compra + lucro;
        printf("O valor a ser cobrado sera de: %.2f", total);
    }else if (compra > 50){
        lucro = compra * 0.25;
        total = compra + lucro;
        printf("O valor a ser cobrado sera de: %.2f", total);

    }

    return 0;
}