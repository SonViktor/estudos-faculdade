## Estrutura de Desisão Aninhadas ##

- Pose-se compor uma estrutura condicional mais complexa

- Coloca-se um "Se.. Então.." dentro do outro, de acordo
com a necessidade do algoritmo
- Pode-se utilizar estruturas condicionais simples, compostas e multiplas,
todas elas de maneira aninhada
- Criam-se vários níveis de decisões em que a decisão mais interna
só será conferida caso a decisão mais externa tenha resultado verdadeiro

- Sintaxe em pseudocódigo

Se (<expressão lógica 1>) então
	Se(<expressão lógica 2>) então
		<sequência de comandos 1>
	Senão
		<sequência de comandos 3>
	Fim_se
Senão
	Se(<expressão lógica 4>) então
		<srequência de comandos 5>
	Fim_se
Fim_se



- Construa um algoritmo que receba, como entrada, a média final de um aluno:

- Imprima "Aprovado" caso a nota seja maior ou igual a 7;
- "Exame" se a média for maior ou igual a 4, porem menor que 7;
- Imprima "Reprovado" caso a média seja menor que 4

----------------------

Algoritmo notas
	Var media: real
Inicio
	LEIA(media)
	Se (media >=7.0) então
		ESCREVA ("Aprovado")
	Senão
		Se (media >= 4,0) então
			ESCREVA ("Exame")
		Senão
			ESCREVA ("Reprovado")
		Fim_se
	Fim_se
Fim
