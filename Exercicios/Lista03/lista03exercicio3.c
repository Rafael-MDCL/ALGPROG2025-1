// Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo 
// o resultado.
#include <stdio.h>

int main() {
    float num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    if (num1 > 0){
        num2 = num1 * 2;
    printf("O dobro do numero digitado eh: %.2f", num2);
    } else if (num1 < 0){
        num2 = num1 * 3;

    printf("O triplo do numero negativo digitado eh: %.2f", num2);
    }
    return 0;
}