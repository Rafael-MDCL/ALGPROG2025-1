// Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3.
#include <stdio.h>

int main(){
    int num1;
    printf("Digite o numero: ");
    scanf("%d", &num1);

    if (num1 % 3 == 0){
        printf("Este numero e divisivel por 3");

    }else {
        printf("Este numero nao e divisivel por 3");
    }
    return 0;
}