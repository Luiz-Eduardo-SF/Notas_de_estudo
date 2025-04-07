# Define - Para que Serve

``#define`` em C serve para criar constantes ou macros. Ele é um ``pré-processador``, ou seja, o compilador substitui o que foi definido antes mesmo de começar a compilar.

## Dois Usos Principais:`

1. **Constantes**
 ```c
#define PI 3.1415
 ```

> Toda vez que o compilador encontrar PI, ele troca por 3.1415. Não ocupa memória, porque é só substituição de texto.

2. **Macros com Parâmetros**
```c
#define QUADRADO(x) ((x)*(x))
```
> Isso cria uma "Função falsa" que é expandida como texto. QUADRADO(3+1) vira (3+1)*(3+1), que dá 16.

## Exemplos

```c
#define PI 3.1415 // Cria uma constante

int main() { // Função principal
    printf("PI = %.4f\n", PI); // Imprime o valor da constante com 4 casas decimais
    return 0; 
}
```

```c
#define QUADRADO(x) ((x)*(x)) // Cria uma macro

int main() { // Função principal
    printf("O quadrado de 9 é %d\n", QUADRADO(9)); // Imprime o quadrado de 9 corretamente
    return 0;
}
```

## Vantagens

- **Zero uso de memória** &rarr; É só substituição de texto, não ocupa RAM.

- **Compatível com C antigo** &rarr; Funciona até nos compiladores mais velhos.

- **Rápido para constantes simples** &rarr; Ideal para valores fixos (#define PI 3.1415).

- **Macros com parâmetros podem ser poderosas** &rarr; Dá para simular funções sem overhead de chamada.

## Desvantagens

- **Sem tipo definido** &rarr; Não tem tipo de dado. Pode causar bugs difíceis de rastrear.

- **Não tem escopo** &rarr; Vale globalmente no código. Pode dar conflito de nomes.

- **Erros difíceis de debugar** &rarr; O compilador não mostra o erro no ``#define``, mas na linha que usou ele.

- **Não aparece no depurador** &rarr; gdb e outros não "vêem" macros, só o código expandido.