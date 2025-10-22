/*
    Escreva um programa que imprima na tela todos os numeros
    pares entre 100 e 200.
*/

#include <stdio.h>

int main() 
{
    for (int i = 100; i <= 200; i+=2) // i = i+2
    {
        printf("%d\n", i);
        /*if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
        */
    }
return 0;
}