/*
    Escreva um programa em linguagem C que receba 2 notas de % alunos
    Essas notas devem ser armazenadas em uma matriz onde cada linha representa um aluno
    e cada coluna representa uma nota.

    O programa deverá exibir na tela a média de cada aluno e informar se ele
    está aprovado (média > 7), em recuperação (média entre 6 e 7), reprovado (média < 6).
*/

#include <stdio.h>

#define NUM_ALUNOS 5
#define NUM_NOTAS 2

int main (void) 
{
    float notas[NUM_ALUNOS][NUM_NOTAS];
    float media;

    for (int i = 0; i < NUM_ALUNOS; i++) 
    {
        for (int j = 0; j < NUM_NOTAS; j++) {
            int ok;
            do {
                printf("Informe a nota %d do alunos %d (0-10): ", j+1, i+1);
                ok = scanf("%f", &notas[i][j]);

                if (ok != 1) {
                    int c;
                    printf("Entrada invalida. Digite um numero. \n");
                    while ((c = getchar()) != '\n' && c != EOF) { }
                } else if (notas[i][j] < 0.0f || notas[i][j] > 10.0f) {
                    printf("Notas fora do intevalo 0-10. Tente novamente. \n");
                    ok = 0;
                }
                
            } while (ok != 1);
        }
    }

    for (int i = 0; i < NUM_ALUNOS; i++) {
        media = (notas[i][0] + notas[i][1]) / (float)NUM_NOTAS;
        printf("O aluno %d está ", i+1);

        if (media >= 7.0f) 
        {
            printf("Aprovado com média %.2f. \n", media);
        } else if (media >= 6.0f) 
        {
            printf("Em recuperação com média %.2f. \n", media);
        } 
        else 
        {
            printf("Reprovado com média %.2f. \n", media);
        }
    }

    return 0;
}