/*
    Escreva um programa em C que receba 10 idades em um vetor.
    O programa deve informar qual a idade mais velha.
*/

#include <stdio.h>

int main() 
{
    int idade[10];
    int i;
    int maisVelha;

    printf("Digite as 10 idades\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Idade %d:", i + 1);
        scanf("%d", &idade[i]);
    }

    maisVelha = idade[0];

    for (i = 1; i < 10; i++) 
    {
        if (idade[i] > maisVelha) 
        {
            maisVelha = idade[i];
        }
    }

    printf("\nA idade mais velha é: %d\n", maisVelha);
    
    return 0;
}