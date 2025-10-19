#include <stdio.h>
#include <locale.h>
//Escreva um programa que solicite 2 números para o usuário e calcule uma multiplicação entre esses dois números.

int main()
{   setlocale(LC_ALL, "Portugese");
    
    float num1, num2, mult;
    
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    mult = num1 * num2;

    printf("O resultado da multiplição é: %.2f", mult);
}