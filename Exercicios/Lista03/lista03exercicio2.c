// Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que A 
// + C.
#include <stdio.h>

int main (){
    float numA, numB, numC;
    float resultadoA, resultadoB;
    printf("Digite o valor de A: ");
    scanf("%f", &numA);

    printf("Digite o valor de B: ");
    scanf("%f", &numB);

    printf("Digite o valor de C: ");
    scanf("%f", &numC);

    resultadoA = numA + numB;
    resultadoB = numA + numC;

    if (resultadoA < resultadoB){
        printf("Os valores de a e b somados sao menores que os valores de b e c somados respectivamente \n %.2f \n %.2f", resultadoA, resultadoB);
    }else{
        printf("Os valores de a e b somados sao maiores que os valores de b e c somados respectivamente\n %.2f, \n %.2f", resultadoA, resultadoB);
    }
    return 0;
}