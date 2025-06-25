// 3. Implemente uma função mediaUnisinos que receba como parâmetro as notas do Grau A e do Grau B e
// retorne o resultado do grau final.

#include <stdio.h>

void media(float a, float b) {
    float media = (a + b * 2) / 3.0;
    printf("Media = %.2f\n", media);
}
int main() {
    float a;
    float b;

    printf("Digite a nota do grau A: ");
    scanf("%f", &a);

    printf("Digite a nota do grau B: ");
    scanf("%f", &b);

    media(a, b);
}