/*
    Escreva um código que faça a tabuada de multiplicação desejada pelo usuario.
    OBS: FIz esse exercício com base em exercícios passados.
*/


#include <stdio.h>

int main() 
{
    int numero, limite;

    printf("Digite o número da tabuada desejada: ");
    scanf("%d", &numero);

    printf("Digite até que número deseja multiplicar: ");
    scanf("%d", &limite);

     for (int i = 1; i <= limite; i++)
     {
        printf("%d x %d = %d\n", numero, i, numero * i);
     } 
     

    return 0;
}