//Para x alunos da Unisinos, ler as notas do grau A e grau B e calcular a média considerando o sistema
//de notas da Unisinos. Se o aluno estiver aprovado escrever “APROVADO”. Caso contrário, ler o grau C
//e pedir qual o grau que deve ser substituído (A ou B, maiúsculo ou minúsculo), recalcular a média. Se
//estiver aprovado, escrever “APROVADO”, caso contrário escrever “REPROVADO”. No final escrever a
//média geral dos alunos.
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x;
    float grauA, grauB, grauC, mediaFinal, somaMedias = 0;
    char substituicao;

    printf("Digite o número de alunos: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        printf("\nAluno %d:\n", i);

        // Leitura das notas
        printf("Digite a nota do Grau A: ");
        scanf("%f", &grauA);

        printf("Digite a nota do Grau B: ");
        scanf("%f", &grauB);

        // Cálculo da média
        mediaFinal = (grauA + (grauB * 2)) / 3;

        // Verificação inicial
        if (mediaFinal >= 6.0) {
            printf("Média final: %.2f\n", mediaFinal);
            printf("APROVADO\n");
        } else {
            printf("Média final: %.2f\n", mediaFinal);
            printf("RECUPERAÇÃO\n");

            // Grau C e substituição
            printf("Digite a nota do Grau C: ");
            scanf("%f", &grauC);

            printf("Deseja substituir o Grau A ou B? Digite 'a' ou 'b': ");
            scanf(" %c", &substituicao);

            if (substituicao == 'a' || substituicao == 'A') {
                mediaFinal = (grauC + (grauB * 2)) / 3;
            } else if (substituicao == 'b' || substituicao == 'B') {
                mediaFinal = (grauA + (grauC * 2)) / 3;
            } else {
                printf("Opção inválida. Nenhuma substituição feita.\n");
            }

            // Resultado final
            printf("Média final após substituição: %.2f\n", mediaFinal);
            if (mediaFinal >= 6.0) {
                printf("APROVADO\n");
            } else {
                printf("REPROVADO\n");
            }
        }

        // Soma das médias para o cálculo geral
        somaMedias += mediaFinal;
    }

    // Média geral dos alunos
    float mediaGeral = somaMedias / x;
    printf("\nMédia geral dos alunos: %.2f\n", mediaGeral);

    return 0;
}
