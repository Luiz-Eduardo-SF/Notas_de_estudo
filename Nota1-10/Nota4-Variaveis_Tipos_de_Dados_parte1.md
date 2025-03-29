# Variáveis e Tipos de Dados - Parte 1

## O que são Variáveis?
Variáveis são como incógnitas (tipo o x na matemática), onde um determinado valor/informação é armazenado em uma palavra específica.<br>
As variáveis têm algumas regras para poder funcionar corretamente que serão mencionadas em breve.

## Regras
1. É importante lembrar que as variáveis são case-sensitive, ou seja, a linguagem diferencia as letras minúsculas das maiúsculas, o que torna possível escrever diferentes variáveis com a mesma palavra. Por exemplo: 
> Variavel ≠ variavel ≠ vAriavel ≠ VARIAVEL ≠ .....

2. A variável não pode começar com números ou alguns sinais como ``#, @ ou !``, então sempre utilize letras ou underscore ``_``.
> **Válido:** _n1, N1<br>**Inválido:** #n1, @variavel, !valor
3. Não utilize espaços em nomes de variáveis. Caso precise, use o padrão camelCase ou o underscore ``_`` para separar palavras.
> **Válido:** minhaVariavel, minha_variavel<br>**Inválido:** minha variavel

4. Evite usar palavras reservadas da linguagem como nomes de variáveis. Palavras reservadas são aquelas que têm um significado especial na linguagem de programação e não podem ser usadas para outros fins.
> **Exemplo de palavras reservadas em C:** int, float, char, return, if, else, etc.
## Tipos de Dados
1. ``int`` -> Números inteiros (ex: *int* idade = 18;)
2. ``float`` -> Números decimais (ex: *float* altura = 1.75;)
3. ``char`` -> Caracteres (ex: char letra = 'A';)
4. ``double`` -> Números decimais com maior precisão (ex: 3,141592;)

## Criando Variáveis
Para definir / criar uma variável basta você escrever o tipo de dado que você quer armazenar, o nome da variável e o valor que ela vai receber. Por exemplo: 
```c
    int num1 = 2;
    char letra = 'A';
    float num2 = 2.32;
    double num3 = 3.141592;
```
<hr>