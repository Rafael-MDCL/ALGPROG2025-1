// 1. Faça um programa que leia números inteiros até que o usuário digite 0. No final, imprima a
// porcentagem de números positivos, negativos, divisíveis por 2, e divisíveis por 5.
// 2. Escreva um programa que sorteie:
// a. Um número entre 130 e 670.
// b. Um número entre -20 e -5.
// c. Um número entre -10 e 10.
// d. Um número entre 10.5 e 50.2, com uma casa decimal.
// e. Um número entre 0 e 100, que seja múltiplo de 5.
// f. Um caractere entre 'A' (65) e 'Z' (90).
// 3. Imagine que você está administrando uma fazenda de abelhas. A cada mês, a colmeia inicial
// dobra de tamanho, mas 3% das abelhas migram para outras colmeias devido às mudanças
// sazonais. Escreva um programa que leia o número de meses e a população inicial da colmeia,
// e exiba a população ao final de cada mês, considerando a migração.
// 4. Em um sistema de controle para uma casa inteligente, você deseja automatizar a irrigação de
// um jardim. O programa deve ler a umidade do solo (em porcentagem) medida por 5 sensores.
// Se a umidade estiver abaixo de 30% em algum sensor, o programa deve ativar a irrigação e
// exibir uma mensagem indicando o sensor que disparou a ação.
// 5. Escreva um programa que sorteie um número entre 1 e 100. O usuário deve tentar adivinhar o
// número sorteado, e o programa deve informar se o palpite está muito alto, muito baixo ou
// correto. O programa termina quando o usuário acerta o número.
// 6. Um fisioterapeuta está monitorando o progresso de um paciente que realiza exercícios
// diariamente. A cada dia, o paciente registra a quantidade de tempo que conseguiu realizar o
// exercício (em minutos). Escreva um programa que leia o tempo de exercício realizado por 7
// dias consecutivos e calcule:
// a. O total de tempo exercitado na semana.
// b. A média de tempo diário.
// c. O dia em que o paciente realizou o maior tempo de exercício.
// 7. Escreva um programa que leia 10 caracteres inseridos pelo usuário. Para cada caractere, o
// programa deve informar se é uma letra, um número, ou um símbolo especial. Utilize a função
// isalpha() da biblioteca ctype.h para verificar se o caractere é uma letra, e isdigit() para
// números.
// 8. Você está desenvolvendo um programa para monitoramento de uma área de floresta. A cada
// dia, são feitos registros da quantidade de chuva (em mm). Escreva um programa que leia os
// registros diários de chuva para uma semana e informe:
// a. O total de chuva acumulada.
// b. O dia com maior quantidade de chuva.
// c. Se em algum dia a chuva foi menor que 5 mm, exiba uma mensagem de alerta sobre
// possível seca.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int num;                  // número digitado pelo usuário
    int total = 0;            // total de números digitados (sem contar o zero)
    int positivos = 0;        // contador de positivos
    int negativos = 0;        // contador de negativos
    int div_2 = 0;            // contador de divisíveis por 2
    int div_5 = 0;            // contador de divisíveis por 5
    char opcao;
    srand(time(NULL));

    printf("Digite a questao a qual deseja saber: ");
    scanf("%d", &n);

    if (n == 1) {
        do{
            scanf("%d", &num);
            if (num != 0) {
                total++;

                if (num > 0) positivos++;
                if (num < 0) negativos++;
                if (num % 2 == 0) div_2++;
                if (num % 5 == 0) div_5++;
            }
        } while (num != 0);

        printf("Positivos: %.2f%%\n", (positivos * 100.0) / total);
        printf("Negativos: %.2f%%\n", (negativos * 100.0) / total);
        printf("Divisíveis por 2: %.2f%%\n", (div_2 * 100.0) / total);
        printf("Divisíveis por 5: %.2f%%\n", (div_5 * 100.0) / total);
        return 0;
    }
    if (n == 2) {

        int a = rand() % (670 - 130 + 1) + 130; //a. Um número entre 130 e 670.

        int b = rand() % (16) - 20; // b. Um número entre -20 e -5.

        int c = rand() % (21) - 10; //c. Um número entre -10 e 10.

        float d = ((rand() % 398) / 10.0) + 10.5; //d. Um número entre 10.5 e 50.2, com uma casa decimal.

        int e = (rand() % 21) * 5;

        char f = (char)(rand() % (90 - 65 + 1) + 65);

        printf("a. O numero sorteado foi: %d\n", a);
        printf("b. O numero sorteado foi: %d\n", b);
        printf("c. O numero sorteado foi: %d\n", c);
        printf("d. O numero sorteado foi: %1.f\n", d);
        printf("e. O numero sorteado foi: %d\n", e);
        printf("f. A letra sorteada foi: %c\n", f);
    }
    if (n == 3) {

        int tempo;
        double abelhas_iniciais;
        double abelhas_finais;
        double abelhas_extras;
        double comeco;
        printf("Digite quantos meses quer simular: ");
        scanf("%d", &tempo);

        printf("Digite a quantidade de abelhas iniciais: ");
        scanf("%lf", &abelhas_iniciais);

        for (int i = 1; i <= tempo; i++) {
            abelhas_finais = (abelhas_iniciais * 2) * 0.97;  // dobra e perde 3%

            abelhas_extras = abelhas_finais - abelhas_iniciais;

            printf("No mes %d, (+%.0f) abelhas novas surgiram, totalizando: %.0f\n", i, abelhas_extras, abelhas_finais);

            abelhas_iniciais = abelhas_finais;  // atualiza para o próximo mês
        }
    }
    if (n == 5) {
        int secreto = rand() % 100 + 1;
        int adivinhar;
        do {
            printf("Digite o valor a ser adivinhado: ");
            scanf("%d", &adivinhar);
            if (secreto > adivinhar) {
                printf("O valor e maior que este\n");
            } else if (secreto < adivinhar) {
                printf("O valor e menor que este\n");
            }else {
                printf("Voce acertou, parabens.\n");
            }
        } while (adivinhar != secreto);
    }
    if (n == 4) {
        int g = rand() % 101 - 50 ;

        int h = (rand() % 41) * 2 +20;

        float j = (rand() % 101) /100;
    }
}



