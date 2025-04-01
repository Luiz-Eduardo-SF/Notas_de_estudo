# Procedimento e Recursividade

## Procedimento

Os procedimentos são como blocos de códigos, praticamente uma função, mas que não retornam um valor. Por isso são definidos como `void`.<br>
Esses procedimentos são muito úteis para poder organizar o código, deixando mais compreensível e também podendo separar cada etapa, simplificando na hora de corrigir algum erro ou editar o código.

```c
void HelloWorld(){
    printf("Olá Mundo!!\n");
}

int main(){
    HelloWorld();
    return 0;
}
```
> Nesse exemplo nós criamos um procedimento chamado ``HelloWorld`` que imprime ``Olá Mundo!!`` na tela quando ele é chamado na função principal.

## Recursividade

A recursividade é uma técnica onde uma função chama a si mesma para resolver um problema. Isso pode substituir loops, facilitar a divisão de problemas complexos e tornar o código mais legível para certos algoritmos.

```c
#include <stdio.h>

int fatorial(int n){
    if(n == 0) return 1;
    return n * fatorial(n - 1);
}

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O fatorial de %d é: %d", num, fatorial(num));
    return 0;
}
```

> Nesse exemplo, usamos a recursividade para calcular o fatorial de um número. Onde que na função, se o valor escrito pelo o usuário não for igual a zero, ele vai rodar um comando que vai chamar a própria função e diminuir o valor escrito pelo o usuário.<br>
> Nessa função ele vai retornar o fatorial do valor escrito pelo o usuário.

<h2 style = "color: #ff3838;"><bold>!! Atenção: é muito importante que coloque uma condição que evite a recursividade infinita. !!</bold></h2>