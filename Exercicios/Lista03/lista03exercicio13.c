#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float grauA, grauB, grauC, mediaFinal;
    char substituicao;

    // Leitura da nota do Grau A
    printf("Digite a nota do Grau A: ");
    scanf("%f", &grauA);

    // Leitura da nota do Grau B
    printf("Digite a nota do Grau B: ");
    scanf("%f", &grauB);

    // Calculando a média final com a fórmula correta
    mediaFinal = (grauA + (grauB * 2)) / 3;

    // Verificando se o aluno passou ou ficou em recuperação
    if (mediaFinal >= 6.0) {
        printf("A média final é: %.2f\n", mediaFinal);
        printf("Parabéns! Você foi aprovado.\n");
    } else {
        printf("A média final é: %.2f\n", mediaFinal);
        printf("Você ficou em recuperação.\n");

        // Perguntando se o aluno quer substituir o Grau A ou B
        printf("Deseja substituir o Grau A ou o Grau B? Digite 'a' para o Grau A ou 'b' para o Grau B: ");
        scanf(" %c", &substituicao);

        // Leitura da nota do Grau C e recalculo da média
        if (substituicao == 'a' || substituicao == 'A') {
            printf("Digite a nota do Grau C: ");
            scanf("%f", &grauC);
            mediaFinal = (grauC + (grauB * 2)) / 3;
        } else if (substituicao == 'b' || substituicao == 'B') {
            printf("Digite a nota do Grau C: ");
            scanf("%f", &grauC);
            mediaFinal = (grauA + (grauC * 2)) / 3;
        } else {
            printf("Opção inválida. Nenhuma substituição feita.\n");
        }

        // Verificando se o aluno foi aprovado ou reprovado após substituição
        if (mediaFinal >= 6.0) {
            printf("A média final após substituição é: %.2f\n", mediaFinal);
            printf("Parabéns! Você foi aprovado.\n");
        } else {
            printf("A média final após substituição é: %.2f\n", mediaFinal);
            printf("Infelizmente, você foi reprovado.\n");
        }
    }

    return 0;
    }