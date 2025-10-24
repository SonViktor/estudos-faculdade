## Estrutura Condicional Composta ##

- Desenvolva um algoritmo que peça para o usuário 
informar um número
- O algoritmo deverá informar se o número é par ou inpar

**Construção do Algoritmo**
 
- Entrada: Valor numerico
- Saída: mensagens que informam se o súmero é par ou inpar
- Passo a passo:
1. Informar o número
2. Se o número for par: imprimir "número par"
3. Caso contrario: imprimir "nímero impar"


Código Bruto:

Algoritmo parOuImpar
	Var numero, resto: inteiro

Inicio
	LEIA (numero)
	resto <- numero DIV 2
	resto <- numero - (resto * 2)
	Se (resto = 0) então 
		ESCREVA ("O número é par")
	Senão
		ESCREVA ("O número é ímpar)
	Fim_se
Fim



Código com MOD 

Algoritmo parOuImpar
	Var numero, resto: inteiro

Inicio
	LEIA (numero)
	resto <- numero MOD 2
	Se (resto = 0) então
		ESCREVA ("O número é par")
	Senão
		ESCREVA ("O número é ímpar)
	Fim_se
FIm
