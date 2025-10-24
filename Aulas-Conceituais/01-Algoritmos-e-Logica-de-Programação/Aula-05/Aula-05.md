## Estruturas Condicionais ##

- Estrutura comdicional ou estrutura de decisão
- A sequência de passos a ser executada depende de uma condição
- Caso a condição seja verdadeira, o bloco de comando é executado
- Caso a condição não seja verdadeira, o bloco de comando é ignorado
- Permite interromper e/ou redirecionar o fluxo de um algoritimo

**Se... Então**

- Usado para "selecionar um caminho" que será executado,
baseando em uma condição
- A condição deve ser expressa por uma expressão lógico-relacional
- Há varias formas de se organizar a sintaxe do comando "Se... Então"

* Simples,
* Composta,
* Aninhada, 
* Múltipla

**Estrutura Condicional Simples**

* Testa uma condição e, caso ela seja verdadeira,
executar um bloco de comandos.
- A condição é dada por uma expressão lógico-relacional
e possui como resultado verdadeiro (True) ou falso (False)

**Sintaxe em pseudocódigo**

Se (<expressão lógica>) então
   <sequência de comandos 1>
Fim-se

- Desenvolva um algoritimo que peça para o 
usuário informar um numero
- Caso o número seja maior do que 10, o algoritmodeverá informar o usuário

* Construção do algoritmo

- Entrada: valor númerico
- Saida: mensagem que informa que o número
é maior que 10

**Passo a passo**

1. Informar o número
2. Se o número > 10 informar ao usuário

-------------------------------

Algoritmo maiorQueDez
	Var numero: real

Início
	Leia (numero)
	Se (numero >10) então
		Escreva ("Número maior que 10")
	Fim-se
Fim


**De maneiroa geral, condições simples são formadas com operadores relacionai:** 
- Maior que (>), menor que (<), maior ou igual (>=)
menor ou igual (<=), igual (=) e diferente (<>)

**Pode-se utilizar os operadoers lógicos para compor condições mais complexas**
- Condiçoes complexas: união de duas ou mais condições simples
- Operadores: 
- Conjunção, disjunção e negação

------------------------

**Operações Lógicas**

- Introduzindo lógica proposicional:
- Proposições: sentenças declarativas
denotadas por letras (p, q, r,...)
- Proposições possuem um valor verdade: 
- Verdadeiro ou Falso

EX

- A Unicesumar é um centro universitário (Certo) (É uma sentneça declarativa)
- Trouxe meu lanche? (Errado)(É uma pergunta)


-----------------

- Negação: Inverte o valor, simbolo ~

EX:
p = "O Brasil é hexacampeão"

- Tabela Verdade da Negação:
p	~p
V	 F
F	 V

- Conjunção: Só é verdade quaquando ambos são verdadeiros
Se um dos operadores for falso o resultado é falso
simbolo ^ &&

EX:

p = "Trouxe ovos"
q = "Trouxe leite"

- Tabela verdade da Conjunção:
p	q	p^q
V	V	V
V	F	F
F	V	F
F	F	F

- Disjunção: Só é falso caso ambos os operadores forem falso
Se um dos operadores for verdadeiro, o resultado é verdadeiro
Simbolo:
||

EX:

p = "Trouxe suco"
q = "Trouxe refrigerante"

- Tabela verdade da disjunção

p	q	p||q
V	V	V
V	F	V
F	V	V
F	F	F


1) Imagine que é preciso informar ao usuário
se um número é maior que 10 e simultaneamente,
menor que 20:

Algoritmo entreDezEVinte
	Var numero: real
Inicio
	LEIA (numero)
	Se ((numero > 10)) E (numero < 20)) então
		ESCREVA ("Número entre 10 e 20")
	Fim_se
Fim


2) Imagine que é preciso informar ao usuários se um número é maior que 10 ou se é igual a 0

Algoritmo maiorQeuDezOuIgualAZero
	Var numero: real
inicio
	LEIA (numero)
	Se ((numero > 10) OU (numero = 0)) então
		ESCREVA("Número > 10 ou Número = 0)
Fim_se