#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{

    float A = 4, resultado;

    resultado = sqrt(A);
    printf("Resultado = %.2f\n", resultado);

    int idade;
    printf("Digite a idade: \n");
    scanf("%d", &idade);
    printf("A idade digitada foi = %d\n", idade);

    return 0;
}