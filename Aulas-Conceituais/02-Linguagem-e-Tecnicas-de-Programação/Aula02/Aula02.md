# Constantes Variáveis e Tipos de Dados #

# Tipos de Dados #

* Oito tipos de dados:

> char: Caracteres simples e strings (cadeias de caracterse)
> int: dados numéricos se casas decimais 
> float: Números com casa decimais (valores em ponto flutuante)
> double: Ponto flutuante com precisão dubla
> bool: Valor lógico (verdadeiro ou falso)
> enum: Dados enumerados
> void: Ausência de valores, ocupam 0 bits em memória
> pointer: Localização de memória

* Modificadores de tipos de dados:

> unsigned: utilizado para declarar que um valor numérico não terá sinal
- Duplia a faixa de valores
> short: reduz a capacidade de armazenamento
> long: armazena a capacidade de armazenamento

- Os modificadores podem ser utilizados em conjunto com os tipos. Por exemplo: 
- long int
- unsigned float

# Palavras Reservadas #

* Comandos específicos que têm significado própio:
> int, float, double, void, bool, char, enum
> short, long, unsigned
> if, else, do, while, for, switch, case, break, default
> return
> typedef, struct, union

# Variáveis #

* Permitem armazenar e acessar uma informação
- Valores armazenados em memória
* Permitem que valores sejam alterados conforme a necessidade ao longo do programa
* Toda variável possui:
- Um tipo
- Um nome (identificador)

**Sintaxe de Criação de variável**

<tipo> <identificador>

- Pode-se declarar mais de uma variável na mesma linha
Ex:
float salario;
int idade, ano;
char nome[20];
bool brasileiro;

**Sintaxe de Criação de Constante**

#define <identificador> <valor>

- Alguns valores são fixos durante todo o programa
- As informações contidas em constantes não variam ao longo do programa

Ex:
#define PI 3.1416
#define MSG_ERRO "Erro!"

# Atribiuição #

**Em linguagem C, usa-se o símbulo "igual":**

<variável> = <valor>

* A atribuição é uma operação para armazenar ou alterar o conteúdo de uma variável
- Pode-se atribuir (dependendo do tipo de variável)
- Valores literias
- Valores constantes
- Outras variáveis
- Resultado de expressões 

Ex de atribuição:

idade = 42;
ano = 2010;
ano_atual = ano + idade;
custo = 66.89
juros = custo * 1.05;
brasileiro = true;