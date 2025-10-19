#include <stdio.h>
// #include <locale.h>

//Escreva um programa que receba o salário de uma pessoa e calcule um aumento de 10%.

int main()
{
    float salario, aumento;

    // setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    aumento = salario + (salario * 0.10);

    printf("\nSeu salário mais 10 %% é: %2.f", aumento);

}
