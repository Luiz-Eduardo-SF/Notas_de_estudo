# Operador Ternário

O operador ternário é uma forma compacta de escrever uma instrução ``if-else``. Ele é chamado de ternário porque envolve três partes.

- Uma condição.
- Um valor se a condição for verdadeira.
- Um valor se a condição for falsa.

```c
    condição ? verdadeiro : falso;
```
> Você pode usar esse operador para armazenar resultados em `if else` numa variável.

```c
    int idade = 20;
    char* resultado;
    resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";
```