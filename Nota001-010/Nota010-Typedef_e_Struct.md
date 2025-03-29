## Typedef e Struct

## Struct

- O `struct` define um novo tipo de dado composto (estrutura). Tipo uma variável que armazena um conjunto de variáveis.
- Para declarar variáveis, você precisa usar a palavra-chave `struct` sempre.

```c
struct Pessoa {
    int idade;
    float altura;
    char nome[50];
};
struct Pessoa p1;
```
> - **`struct`** &rarr; A palavra-chave `struct` define um novo tipo de dado composto (estrutura).<br>
> - **`Pessoa`** &rarr; O `Pessoa` define um novo tipo de dado composto (estrutura).<br>
> - **`p1`** &rarr; A variável `p1` do tipo `Pessoa`.

## Typedef 

- O `typedef` define um novo nome para um tipo de dado existente.

```c
typedef struct {
    int idade;
    float altura;
    char nome[50];
} Pessoa;
Pessoa p1;
```
> - **`typedef`** &rarr; A palavra-chave `typedef` define um novo nome para um tipo de dado existente.<br>
> - **`Pessoa`** &rarr; O `Pessoa` define um novo tipo de dado composto (estrutura).<br>
> - **`p1`** &rarr; A variável `p1` do tipo `Pessoa`.<br>
> - Utilizando o typedef faz com que o nome `Pessoa` seja usado em vez de `struct Pessoa`.
<hr>