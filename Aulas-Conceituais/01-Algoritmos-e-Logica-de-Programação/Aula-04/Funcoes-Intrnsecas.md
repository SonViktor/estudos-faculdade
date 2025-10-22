# Funções Intrinsecas #

- Funcionalidades prontas, que se podem utilizar
de maneira direta
- Não é preciso entender o funcionamento interno
- Geralmente são funções matemáticas
EX:
- SQRT
- POW ou EXP
- ABS
- COS
- SIN

**Atribuição**

- A atribuição é uma operação para armazenar ou
alterar o conteúdo de uma variável.
- Literais (números e/ou textos) ou expressões

- Simbolo em pseudocódigo:
<-

- Lê-se "variável recebe valor"
variável <- valor

EX

peso <- 50,5
num1 <- 10
centimetros <- metros * 100
area <- 3,14 * R^2
letra2 <- 'A' (Aspas ' ' para caracteres)
nome <- "Gilmar" (Aspas " " para frases compostas)
mensagem <- "Erros fatal"
flag <- falso

**Entrada e Saída de Dados**

- Entrada de Dados: O usuário está inserindo
informações 
- Teclado, mouse, etc...

- Comando utilizado (pseudocódigo): LEIA
- Sintaxe:
_ LEIA (nome_da_variavel)
ou
- LEIA nome_da_variavel

EX Leia (idade)

- Saida de Dados: É a forma do programa 
dizer algo ao usuário:

- Pode ser na tela, mas também, impressora, arquivos, etc...

- Comando utilizado (pseudocódigo):
ESCREVA

- Sintaxe:
- ESCREVA (noma_da_variavel)
- ESCREVA nome_da_variavel
- ESCREVA ("Texto Literal")
- ESCREVA "Texto Literal"

EX

1	ESCREVA "número"
	ESCREVA ("número")

2 	ESCREVA num
	ESCREVA (num)

3	ESCREVA "O número é:", num
	ESCREVA ("O nújmero é:", num)


------------------------------------------------


**Construindo um Algoritmo Estrutura Geral (pseudocódigo)**	

Algoritimo <nome_do_algoritimo>
	Var <nome_variável 1 : <tipo_variável>
	    <nome_variavel 2> : <tipo_variável>

Início
	<bloco de comando 1>
	<bloco de comando 2>
FIM

**Sempre estar atento à IDENTAÇÃO. O código fica mais legivel, é uma boa prática de programação**
