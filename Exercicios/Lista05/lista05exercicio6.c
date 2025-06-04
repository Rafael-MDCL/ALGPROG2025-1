// 6. Em um jogo com 5 rodadas e 4 jogadores, cada jogador começa com 0 pontos. Escreva um
// programa que:
// a. Crie um vetor de 4 elementos, onde cada posição do vetor representa a pontuação
// acumulada de um jogador.
// b. A cada rodada, sorteie a pontuação para cada jogador (valores entre 0 e 100).
// c. Atualize o vetor de pontuação acumulada com a soma da pontuação de cada rodada.
// d. Ao final de cada rodada, verifique se algum jogador fez mais de 80 pontos e exiba uma
// mensagem de "Rodada de Destaque" para esse jogador.
// e. Ao final das 5 rodadas, exiba a pontuação total de cada jogador.
// f. Informe qual jogador venceu, ou se houve empate (o jogador com a maior pontuação).

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogadores[4];
    int pontuacaoAcumulada[4] = {0};
    int rodada = 0;
    int maior, menor;
    int maiorIndice = 0;
    int menorIndice = 0;
    int empate = 0;

    srand(time(NULL));

    do {
        printf("\nRodada %d\n", rodada + 1);
        for (int i = 0; i < 4; i++) {
            jogadores[i] = rand() % 101;
            pontuacaoAcumulada[i] += jogadores[i];

            if (jogadores[i] > 80) {
                printf("O jogador %d teve a rodada destaque com %d pontos!\n", i + 1, jogadores[i]);
            }
        }

        maior = pontuacaoAcumulada[0];
        menor = pontuacaoAcumulada[0];
        maiorIndice = 0;
        menorIndice = 0;
        for (int i = 1; i < 4; i++) {
            if (pontuacaoAcumulada[i] > maior) {
                maior = pontuacaoAcumulada[i];
                maiorIndice = i;
            }
            if (pontuacaoAcumulada[i] < menor) {
                menor = pontuacaoAcumulada[i];
                menorIndice = i;
            }
        }

        printf("Pontuacao acumulada:\n");
        for (int i = 0; i < 4; i++) {
            printf("Jogador %d: %d\n", i + 1, pontuacaoAcumulada[i]);
        }

        rodada++;
    } while (rodada < 5);

    empate = 0;
    for (int i = 0; i < 4; i++) {
        if (i != maiorIndice && pontuacaoAcumulada[i] == maior) {
            empate = 1;
            break;
        }
    }

    if (empate) {
        printf("\nHouve empate entre jogadores com %d pontos.\n", maior);
    } else {
        printf("\nO jogador com maior pontuacao foi o jogador %d, com %d pontos.\n", maiorIndice + 1, maior);
    }

    printf("O jogador com menor pontuacao foi o jogador %d, com %d pontos.\n", menorIndice + 1, menor);

    return 0;
}

