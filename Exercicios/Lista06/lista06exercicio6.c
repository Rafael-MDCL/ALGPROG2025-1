//Gere uma matriz 10x3 que contenha valores de notas de 10 alunos (cada linha contém a
//informação das notas de um aluno). Para isso, sorteie valores entre 0.0 e 10.0 na primeira e
//segunda colunas, e na terceira, calcule a média da Unisinos considerando as notas anteriores
//como nota do Grau A e do Grau B.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float classe[10][3];
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 2; j++) {
            classe[i][j] = ((float)rand() / RAND_MAX) * 10.0; // valores entre 0.0 e 10.0
        }
        classe[i][2] = (classe[i][0] + classe[i][1] * 2) / 3.0; // média ponderada

        if (classe[i][2] < 6.0) {
            printf("Aluno %d pegou recuperacao com media %.2f\n", i + 1, classe[i][2]);
        }
        else {
            printf("Aluno %d passou, com a media de: %.2f\n", i + 1, classe[i][2]);
        }
    }

    return 0;

}



