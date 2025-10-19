/*
    Escreva um programa que receba 2 notas de um aluno.
    O programa deverá calcular a média das notas e informar se o aluno
    está aprovado ou reprovado. Média para aprovarção tem que ser 
    igual ou maior que 6
*/

#include <stdio.h>

int main() 
{
    float nota1, nota2, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("\nInforme a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 6) 
    {
        printf("Média %.2f = Aprovado", media);
    }

    else 
    {
        printf("Média %.2f = Reprovado", media);
    }

    return 0;
}