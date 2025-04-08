# Ponteiros em C

## O Que é um Ponteiro?

Um ponteiro é uma variável que guarda o endereço de memória de outra variável.

```c
int x = 10; // Declara uma variável de valor inteiro de nome x
int *ptr = &x; // Cria um ponteiro inteiro que armazena o valor de x
```

- `x` &rarr; é uma variável comum
- `&x` &rarr; é o endereço de memória de `x`
- `ptr` &rarr; é um ponteiro para `int`, armazenando o endereço de `x`

## Por quê usar Ponteiros?

- Acesso direto à memória.
- Mais perfomace (sem cópia de dados grandes).
- Permite criar estruturas como listas, árvores, etc.
- Manipulação de arrays, strings e funções.

## Sintaxe Básica 

```c
int *ptr; // Declaração do ponteiro para int
p = &x; // Ponteiro aponta para x
```

### Operadores:

- `&` &rarr; (endereço de memória).
- `*` &rarr; Conteúdo apontado (desferência).

## Exemplo

### >> Variável e Ponteiro

```c
#include <stdio.h>

int main(){
    int x = 42;
    int *p = &x;

    printf("x = %d\n", x);
    printf("endereço de x = %p\n", p);
    printf("valor apontado por p = %d\n", *p);

    return 0;
}
```
### >> Alterando Valores com Ponteiros

```c
#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;

    *p = 10;

    printf("x = %d", x);

    return 0;
}
```

