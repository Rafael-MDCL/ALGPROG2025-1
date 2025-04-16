//14)Criar um programa para identificar o valor a ser pago por um plano de saúde dada a idade do
//conveniado considerando que todos pagam R$ 300 e mais um adicional (se tiver dependentes)
//conforme a seguinte tabela:
//a) crianças com menos de 10 anos pagam R$100;
//b) dependentes com idade entre 10 e 30 anos pagam R$220;
//c) dependentes com idade entre 31 e 60 anos pagam R$ 395;
//d) dependentes com mais de 60 anos pagam R$ 480.

#include <stdio.h>
#include <locale.h>
#include <windows.h>
int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int idadeConveniado, idadeDependente;
    int numDependentes;
    float valorPlano = 300.0, adicionalDependente = 0.0;

    // Leitura da idade do conveniado
    printf("Digite a idade do conveniado: ");
    scanf("%d", &idadeConveniado);

    // Leitura do número de dependentes
    printf("Digite o número de dependentes: ");
    scanf("%d", &numDependentes);

    for (int i = 0; i < numDependentes; i++) {
        printf("Digite a idade do dependente %d: ", i + 1);
        scanf("%d", &idadeDependente);

        if (idadeDependente < 10) {
            adicionalDependente += 100;
        } else if (idadeDependente >= 10 && idadeDependente <= 30) {
            adicionalDependente += 220;
        } else if (idadeDependente >= 31 && idadeDependente <= 60) {
            adicionalDependente += 395;
        } else if (idadeDependente > 60) {
            adicionalDependente += 480;
        }
    }

    // Exibindo o valor total a ser pago
    printf("Valor a ser pago pelo plano de saude: R$ %.2f\n", valorPlano + adicionalDependente);

    return 0;
}