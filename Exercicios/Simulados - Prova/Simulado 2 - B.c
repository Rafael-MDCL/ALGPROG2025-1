// 1. intervalo de numeros entre inicio e fim

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int sortear(int inicio, int fim) {
    if (inicio > fim) {
        int part = inicio;
        inicio = fim;
        fim = part;
    }
    return inicio + (rand() % (fim - inicio + 1));
}

int main() {
    srand(time(NULL));

    char frase[255];
    char respostas[10];
    char gabarito[10];
    int contagem[5] = {0};
    int matriz[5][5];
    int inicio, fim;
    int questao;
    int acertos = 0;

    printf("Digite a questao que deseja visualizar: ");
    scanf("%d", &questao);

    if (questao == 1) {
        printf("Digite o início do intervalo: ");
        scanf("%d", &inicio);
        printf("Digite o fim do intervalo: ");
        scanf("%d", &fim);

        int numero = sortear(inicio, fim);
        printf("Número sorteado: %d\n", numero);

        return 0;
    }

    // 2. (4.0 pts) Implemente um programa que, dado uma matriz 5x5 preenchida com valores entre 0 e 4
    // faça a contagem de quantos valores de cada um dos números possíveis esta matriz contém
    if (questao == 2) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                matriz[i][j] = sortear(0, 4);
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int valor = matriz[i][j];
                contagem[valor]++;
            }
        }
        printf("\nContagem de valores:\n");
        for (int i = 0; i < 5; i++) {
            printf("Quantidade de valores %d: %d\n", i, contagem[i]);
        }
    }
    if (questao == 3) {
        printf("Digite o gabarito da prova:\n");
        for (int i = 0; i < 10; i++) {
            printf("Questao %d: ", i + 1);
            scanf(" %c", &gabarito[i]);
        }
        printf("Digite as suas respostas da prova:\n");
        for (int i = 0; i < 10; i++) {
            printf("Questao %d: ", i + 1);
            scanf(" %c", &respostas[i]);
        }
        for (int i = 0; i < 10; i++) {
            if (respostas[i] == gabarito[i]) {
                printf("Questao %d: Correta\n", i + 1);
                acertos++;
            } else {
                printf("Questao %d: Incorreta. A resposta era: %c\n", i + 1, gabarito[i]);
            }
        }
        printf("A pontuacao do estudante e de: %d\n", acertos);
    }
    if (questao == 4) {
        while (getchar() != '\n'); // limpa o Buffer para evitar string vazia após digitar a questão

        printf("Digite uma palavra ou frase: ");
        fgets(frase, sizeof(frase), stdin);
        printf("String digitada: %s", frase);

        for (int i = 0; frase[i] != '\0'; i++) {
            if (frase[i] == 'R' || frase[i] == 'r') {
                frase[i] = 'l';
            }
        }
        printf("\n");
        printf("String cebolinhada: %s", frase);
    }


    // Função para substituir todos os 'r' por 'l' e 'R' por 'L'
    // void substituirRPorL(char frase[])
    // {
    //     int tam = strlen(frase);
    //     for (int i = 0; i < tam; i++) // Percorre a string até o tamanho calcula
    //         do
    //         {
    //             if (frase[i] == 'r') // Substitui 'r' minúsculo por 'l'
    //             {
    //                 frase[i] = 'l';
    //             }
    //             else if (frase[i] == 'R') // Substitui 'R' maiúsculo por 'L'
    //             {
    //                 frase[i] = 'L';
    //             }
    //         }
    // }
    // char frase[100]; // Declara a string para armazenar a frase
    //  printf("Digite uma frase: ");
    //  fgets(frase, sizeof(frase), stdin); // Lê a string com espaços
    //  substituirRPorL(frase); // Chama a função para substituir os caracteres
    //  printf("Frase alterada: %s\n", frase); // Exibe a string alterada
    // return 0;
}
