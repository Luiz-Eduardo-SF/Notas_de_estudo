# Exemplos de Arrays e Matrizes - Parte 2

## Tipos de Informações

Apesar de só termos visto exemplos com valores `int` até agora, nós podemos sim utilizar outros tipos de dados em ``vetores e matrizes``.

**Como por Exemplo:**

## Float
```c
#include <stdio.h>

int main(){
    float notas[3] = {96.7, 97.9, 79.6}; // Usamos um vetor que armazena dados float
    
    printf("Primeira nota (índice 0): %.1f\n", notas[0]); // Chama o índice zero para exibir a primeira nota
    printf("Segunda nota (índice 1): %.1f\n", notas[1]); // Chama o índice um para exibir a segunda nota
    printf("Terceira nota (índice 2): %.1f\n", notas[2]); // Chama o índice dois para exibir a terceira nota

    return 0;
}
```
> Nesse exemplo, nós declaramos um vetor que recebe 3 valores float e chamamos índice por índice para exibir cada valor.

## Char

```c
#include <stdio.h>

int main(){
    char letras[4] = {'A', 'B', 'C', 'D'}; // Usamos um vetor que armazena dados char
    
    printf("Primeira letra (índice 0): %c\n", letras[0]); // Chama o índice zero para exibir a primeira letra
    printf("Segunda letra (índice 1): %c\n", letras[1]); // Chama o índice um para exibir a segunda letra
    printf("Terceira letra (índice 2): %c\n", letras[2]); // Chama o índice dois para exibir a terceira letra
    printf("Quarta letra (índice 3): %c\n", letras[3]); // Chama o índice três para exibir a quarta letra

    return 0;
}
```
> Nesse código, usamos o mesmo conceito, porém agora com letras. É importante lembrar que, para caracteres, se utilizam aspas simples.

## String

```c
#include <stdio.h>

int main(){
    char *nomes[] = {"Luiz", "Maria", "Joaquim"}; // Usamos um vetor que armazena dados string

    for(int i = 0; i < 3; i++){ // Criamos um loop para escrever os nomes como uma lista na tela
        printf("%s\n", nomes[i]);
    }

    return 0;
} 
```
> Nesse exemplo, nós declaramos um vetor que, apesar de não receber uma quantidade prévia de dados, armazena dados string e detecta como 3. É importante lembrar que, para strings, se utilizam aspas duplas.<br>
Também podemos perceber o uso de (`*`), que serve para declarar um ponteiro. Porém, vamos deixar para estudar os ponteiros mais a fundo mais tarde.

**Esses foram só mais alguns exemplos do que podemos fazer com arrays e matrizes. Fiz essa parte 2 para que o primeiro arquivo não ficasse muito grande.**