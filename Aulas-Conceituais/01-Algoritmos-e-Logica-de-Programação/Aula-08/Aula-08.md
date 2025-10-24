## Estrutura de Decisão Múltipla ##

* Há situações em que a mesma variável pode gerar
condições múltiplas
- A mesma condição pode levar a mais de dois 
caminhos diferentes 
- Geralmente uma unica variável acaba controlando 
os vários caminhos diferentes.
- É como se fosse um "menu" de opções 
. Basicamente, substitui uma sequência de condições
simples baseadas (Se... Então...) em uma única variável


* Sintace em pseudocódigo * 

Caso (<variável>)
	Seja <valor 1> faça <lista de comandos 1>
	Seja <valor 2> faça <lista de comandos 2>
	Seja <valor 3> faça <lista de comandos 3>
	
	Seja <valor N> faça <lista de comanndos N>
	Senao <liste de comando padrão>
	Fim-se

* Desenvolva um algoritmo que, dependendo do valor
(número inteiro) digitado pelo usuário, imprimir
na tela dia da semana correspondente àquele número:

. 1 -> domingo
. 2 -> segunda-feira
. 3 -> terçao-feira
. 4 -> quarta-feira
. 5 -> quinta-feira
. 6 -> sexta-feira
. 7 -> sábado

EX

Algoritmo diaDaSemana
	Var dia: inteiro

inicio
	Leia (dia)
	Caso (dia)
		Seja 1 faça ESCREVA ("Domingo")
		Seja 2 faça ESCREVA ("Segunda-feira")
		Seja 3 faça ESCREVA ("Terça-feira")
		Seja 4 faça ESCREVA ("Quarta-feira")
		Seja 5 faça ESCREVA ("Quinta-feira")
		Seja 6 faça ESCREVA ("Sexta-feira")
		Seja 7 faça ESCREVA ("Sábado")
		Senão ESCREVA ("Valor Invalido")
	Fim_caso
Fim