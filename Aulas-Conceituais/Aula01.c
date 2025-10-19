/*
    Nesta aula foi recapitulado alguns conceitos basicos e iniciado o primeiro código em C. 
    Segue o conteudo da aula:

    ** Introdução a Linguagem C **

- O que é algoritmo? 
. É uma sequencia finita de passos para resolver um problema

- Algoritmo na computaçõa:
. Corresponde a transformar um conjunto de dados de entrada em um 
conjunto de dados de saída por meio de instruções computacionais.

- Linguagem C:
. Linguagem de programação de propósito geral 
. Sintaxe muito parecida com outras linguagens:
Pascal, Delphi, Java, C++ C#, etc...
. Não depende de um hardware específico
. Combina vantagens de uma linguagem de alto nivel com a eficiência
das linguagens de máquina (Assembly)
. Compiladores e Ambientes de Programação (IDEs)

GCC
Dev C++
Visual Studio
Turbo C
Visual C

- Linguagens :
. Interpretadas
. Compiladas (C)

Processo de compilação+linkedição

Código fonte -> Compilador -> Programa - Objeto
			       \/
		Biblioteca -> Linkeditor
			      \/
		       Programa executavel


- Estrutura básica de um programa em C

. inclusão de bibliotecas
. Corpo principal do código - função main
- Comandos geralmente finalizados com ";"

#include <stdio.h>
int main()
{
	print("Olá, mundo!");
	return 0;
}

- Comentários
. Há situações em que o programador quer deixar anotações registradas
no código fonte
. Tais informações não podem ser interpretadas como instruções executáveis
. São apenas informações instrutivas (documentação)
. O compilador deve desconsiderar qualquer coisa que esteja em comentário
- Comandos "barra-barra" & "barra-asteristico"
*/

#include <stdio.h>

int main() 
{
    printf("Hello World! Ou Olá Mundo");

    return 0;
}