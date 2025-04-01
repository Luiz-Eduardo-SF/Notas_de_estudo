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

<h3 style = "color: #ff3838;"><bold>!! Atenção: é muito importante que coloque uma condição que evite a recursividade infinita. !!</bold></h3>

## Ordem de Execução 

Ao escrever uma função recursiva é muito importânte prestarmos atenção na ordem em que escrevemos o código, por exemplo:

```c
void recursivo(int numero){
    if (numero > 0){
        recursivo(numero - 1);
        printf("%d\n", numero);
    }
}

int main(){
    int quantidade = 10;
    printf("Contagem regrassiva. . . \n");
    recursivo(quantidade);
    return 0;
}
```

> Nesse código é feito uma contagem regressiva, onde ele chama a si mesma e imprime o valor atual enquanto o valor for maior que zero.<br>
> Porém tem um erro nesse código, no qual a função chama ela mesma antes de escrever o número na tela, o que faz com que o número seja armazenado como em uma "pilha" de informações

<h3 style = "color:green;">Por Exemplo:</h3>
<hr>

```c
- recursivo(5 - 1) // Primeira informação calculada
    - recursivo(4 - 1)
        - recursivo(3 - 1)
            - recursivo(2 - 1)
                - recursivo(1 - 1) // Última informação calculada
                - printf(recursivo(1)) // Escrevendo a Última informação na tela
            - printf(recursivo(2))
        - printf(recursivo(3))
    - printf(recursivo(4))
- printf(recursivo(5)) // Escrevendo a primeira informação na tela
```

> E como o exemplo mostra, quando essa pilha é criada, as informações são escritas na ordem inversa, ou seja, 1, 2, 3, 4, 5. Ao invés de 5, 4, 3, 2, 1.<br>
> **Por isso devemos sempre prestar atenção na ordem em que escrevemos o código.**