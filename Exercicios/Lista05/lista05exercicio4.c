//4. Uma pessoa está monitorando quantos passos ela dá por dia em uma semana. Escreva um
//programa que:
//a. Leia e armazene o número de passos dados em cada um dos 7 dias da semana.
//b. Calcule o total de passos dados na semana.
//c. Calcule a média diária de passos.
//d. Verifique se a pessoa conseguiu atingir a meta de 10.000 passos em algum dos dias. Se sim,
//informe quais dias a meta foi alcançada.

#include <stdio.h>

#define tam 7

int main() {
    int passos[tam];
    int somatorio = 0;
    int media = 0;
    int meta;

    printf("Digite a meta dessa semana: ");
    scanf("%d", &meta);

    printf("Digite a quantidade de Passos dados na semana: \n");
    for (int i = 0; i < tam; i++) {
        printf("Dia %d :", i + 1);
        scanf("%d", &passos[i]);
        somatorio += passos[i];
    }

    printf("Segundo os dados fornecidos, essa semana voce caminhou: %d\n", somatorio);

    media = somatorio / (float)tam;

    printf("Media da semana : %d\n", media);

    if (media >= meta)
    {
        printf("Parabens! Voce atingiu a meta da semana!");
    }
    else {
        printf("Voce nao conseguiu bater a meta essa semana, infelizmente...");
    }


}