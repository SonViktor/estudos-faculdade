/*
    Escreva um programa que receba a altura e peso de uma pessoa.
    O programa deverá calcular o IMC dessa pessoa e informar se ela está:

    Abaixo do peso - IMC menor ou igual 18,5
    Peso normal - IMC entre 18,5 e 24,99
    Sobrepeso - IMC entre 25 e 29,99
    Obeso - IMC maior ou igual a 30

    IMC = PESO / ALTURA²
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "pt_BR");
    system("chcp 65001 > nul");

    float peso, altura, IMC;

    printf("Qual a sua altura?: ");
    scanf("%f", &altura);
    printf("Qual seu peso?: ");
    scanf("%f", &peso);

    //IMC = peso / (altura * altura);
    IMC = peso / pow(altura, 2) ;

    if(IMC <=18.5)
    {
        printf("Abaixo do Peso");
    }
    else if(IMC <=24.99)
    {
        printf("Peso Normal");
    }

    else if(IMC >25 && IMC <29.99)
    {
        printf("SobrePeso");
    }

    else if(IMC >=30)
    {
        printf("Obeso");
    }


}