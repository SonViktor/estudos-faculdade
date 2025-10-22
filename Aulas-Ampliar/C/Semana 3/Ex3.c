/*
    Escreva um programa que simule um cofre.
    O usuário tem que acertar a senha do cofre
    para conseguir abri-lo
    A senha é 2345678
*/

#include <stdio.h>

#define senhaCorreta 2345678

int main() 
{
    int senha, tentativa = 0;
    //const int senhaCorreta = 2345678; 
    
    do 
    {
        printf("Informe a senha do ocofre de 7 digitos: ");
        scanf("%d", &senha);

        if(senha == senhaCorreta) {
        printf("Cofre aberto!");
        return 0;
        }
        else 
        {
            printf("Senha invalida.\n");
            tentativa++;
            if (tentativa != 3)
            {
                printf("Tente novamente.\n");
            }
        }
    } while (tentativa != 3);    

    return 0;
}