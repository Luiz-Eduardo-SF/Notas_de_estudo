# Diferentes Formas de Declarar Loops

## Loops com múltiplas variáveis

Esse tipo de loop consiste em declarar mais de uma variável, ao invés de apenas uma habitual. 

```c
for (int i = 1, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d\n", i, j);
}
```

Esse tipo de loop é útil para trabalhar com duas variáveis ao mesmo tempo, especialmente quando elas têm comportamentos opostos ou complementares. Isso simplifica o código e torna a lógica mais clara, como ao percorrer uma lista em ordem crescente enquanto outra é percorrida em ordem decrescente.

## Loops com condições múltiplas

Os loops com múltiplas condições verificam mais de um critério para decidir se continuam ou param. Isso geralmente é feito com o `for`, onde a condição pode usar operadores lógicos como:

- `&&` (E) &rarr; O loop continua apenas se **todas** as condições forem verdadeiras.
- `||` (OU) &rarr; O loop continua se **qualquer** das condições for verdadeira.

### Exemplo de `&&`

```c
for (int i = 0, j = 10; i < 5 && j > 5; i++, j--) {
        printf("i: %d, j: %d\n", i, j);
}    
```

Nesse exemplo, o loop só continua enquanto o **i for menor que 5 e j for maior que 5** ao mesmo tempo.<br>
Esses loops são úteis quando o controle depende de **múltiplas variáveis ou regras simultaneamente.**

## Loops com Atualizações Complexas

Diferente dos loops tradicionais, onde a variável de controle muda de forma simples (`i++` ou `i--`), os loops com **atualizações complexas** alteram essa variável de maneira dinâmica. Isso pode ser feito com:

- **Expressões condicionais** (ajustando a atualização com base em uma condição).

- **Cálculos matemáticos** (multiplicações, divisões, exponenciação, etc).

- **Funções** (determinando a próxima iteração de forma personalizada).

Esses loops são úteis quando precisamos de **padrões de iteração não lineares** para atender a requisitos específicos.

```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 100; i += (i % 2 == 0) ? 1 : 2) {
        printf("%d ", i);
    }
    return 0;
}
```

Nesse código, ao invés de usarmos uma atualização simples (`i++` ou `i--`), nós usamos um operador ternário, que detecta se o valor atual de `i` é par ou não, se for par ele vai adicionar 1 e se não for ele vai adicionar `2`, o que faz com que o loop do printf só rode quando `i` for impar e menor que 100.

## Uso de Continue e Break

Nos loops com condições, podemos usar a palavra-chave `continue` para pular uma iteração do loop e a palavra-chave `break` para parar o loop completamente. Sendo úteis para evitar certas condições ou para terminar o loop com base em critérios específicos.

```c
for(int i = 0; i < 10; i++) {
    if(i == 5) continue; // Retorna para o loop antes de completar as etapas 
    if(i == 10) break; // Sai do loop antes de completar as etapas
    
    printf("%d\t", i);
}
```

> Nesse exemplo, usamos `continue` para pular a iteração quando `i` for igual a 5 e `break` para parar o loop quando `i` for igual a 10.