// Escreva um programa que leia dois números e efetue uma divisão, mas somente se o divisor for 
// diferente de zero; quando isto ocorrer, é mostrada uma mensagem de erro apropriada.
#include <stdio.h>

int main(){
    
    float num1,num2, resultado;
inicio:

    printf("Digite o numerador da equaca: ");
    scanf("%f", &num1);

    printf("Digite o divisor da equacao, este divisor nao podera ser 0: ");
    scanf("%f", &num2);

    if (num2 == 0){
        printf("O divisor nao pode ser 0, tente novamente ");
        goto inicio;
    }else{
    resultado = num1 / num2;
    printf("O resultado da conta e: %.2f \n", resultado);
    }

    return 0;
}
