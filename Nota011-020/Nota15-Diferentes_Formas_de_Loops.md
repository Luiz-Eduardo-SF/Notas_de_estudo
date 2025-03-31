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

