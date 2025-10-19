/*
Escreva um programa que receba a idade de uma pessoa.

Se essa pessoa tiver mais de 18 anos, ela é adulto.
Se a idade dela for entre 12 e 18, é adolescente.
Se ela tiver menos de 12 anos, é criança.

O programa deverá escrever na tela, a "qualificação" 
dessa pessoa de acordo com a idade.

*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{   setlocale(LC_ALL, "pt_BR");
    system("chcp 65001 > nul");
    

    int idade;

    printf("Digite sua idade para verificar sua faixa etária: ");
    scanf("%d", &idade);

    if (idade > 18) 
    {
        printf("Você é adulto. Sua idade é %d anos. \n", idade);
    }

    else if (idade >= 12 && idade <= 17) 
    {
        printf("Você é adolescente. Sua idade é %d anos.\n", idade);
    }

    else 
    {
        printf("Você é criança. Sua idade é %d anos.\n", idade);
    }

    return 0;
}