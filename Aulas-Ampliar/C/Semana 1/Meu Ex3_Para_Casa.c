#include <stdio.h>
#include <locale.h>
//Escreva um programa que solicite 2 n�meros para o usu�rio e calcule uma multiplica��o entre esses dois n�meros.

int main()
{   setlocale(LC_ALL, "Portugese");
    
    float num1, num2, mult;
    
    
    printf("Insira o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Insira o segundo numero: ");
    scanf("%f", &num2);

    mult = num1 * num2;

    printf("O resultado da multipli��o �: %.2f", mult);
}