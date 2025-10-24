## Funçõs Intrínsecas ##

- Existem operadores complexos que já foram desenvolvidas em fomra de funções 
- É preciso identificar a biblioteca à qual uma função intríseca pertence

* Ex.
- ceil(x)
- abs(x)
- floor(x)
- log(x)
- log 10(x)
- z = modf(x, &y)
- pow(x, y)
- sqrt(x)
- printf("Texto")
- scanf("%d", &x)

#include **<stdio.h>**
#include **<stdlib.h>**
#include **<math.h>**

int main () 
{
    float A = 4, Resultado;

    Resultado = sqrt(A);
}

## Entrada e Saída ##

- Leitura de dados a partir do teclado (scanf): é feita por uma função
- Sintaxe:
**scanf("<tipo_da_variável>", &<variável)>;**

- Escrita de dados na tela do computador(printf): é feita por uma função
- Sintaxe:
**printf("texto <tipo_de_variável>", <variável>)**

- Caracteres especiais para indicar o tipo da variável (Especificadores de Formato)
**Tais caracteres devem ser inseridos entre as aspas duplas para indicar o tipo**

- %d: imprimir/ler um int
- %f: imprimir/ler um float
- %e: imprimir/ler um double
- %c: imprimir/ler um cahr
- %s: imprimir/ler um vetor de cahr (string)

- Caracteres especiais para utilizar em textos (dentro das aspas duplas):
- \n: pula de linha 
- \0: indica o fim de um texto (nulo)
- \: indica que o próximo caractere, caso seja especial, deverá ser interpretado literalmente
- ' ': indica um espaço
- \t insere uma tabulação (tab)
- \b: retrocesso (shift+tab)
- \f: salta de página de formulário

- Ex:
#include **<stdio.h>**
#include **<stdlib.h>**

int main() 
{
    int idade:
    printf("Digite a idade: \n");
    scanf("%d", &idade);
    printf("A idade digitada foi = %d", idade);

    return 0;
}

