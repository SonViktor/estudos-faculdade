/*
    Fazer um exercício com base nos dados aprendidos na aula 02
*/

#include <stdio.h>


int main() 
{

    char nome[10];
    int idade;

    printf("Digite seu nome: ");
    scanf("%9s", nome); // Nem sempre vai ser necessário puchar o & aparentemente. Pois nesse caso do "char" não foi

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf("Seu nome é: %s\n", nome);
    printf("Você tem: %d anos de idade\n", idade);
    return 0;
}