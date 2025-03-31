# Loops Aninhados

Loops aninhados, de forma simplificada, são estruturas onde um loop está contido dentro de outro. Eles são amplamente utilizados para manipular dados em múltiplas dimensões ou realizar operações que exigem repetições em diferentes níveis.

> Para cada iteração do loop externo, o loop interno é executado completamente.

## Exemplo com `for`

No exemplo abaixo, utilizamos dois loops `for` para imprimir uma matriz de asteriscos 5x5. O loop externo controla as linhas, enquanto o loop interno controla as colunas.

```c
#include <stdio.h>

int main() {
    // Loop externo para as linhas
    for (int lins = 1; lins <= 5; lins++) {
        // Loop interno para as colunas
        for (int cols = 1; cols <= 5; cols++) {
            printf("*\t"); // Imprime um asterisco seguido de uma tabulação
        }
        printf("\n"); // Quebra de linha após cada linha de asteriscos
    }
    
    return 0;
}
```

## Exemplo com `do-while`

Aqui, utilizamos dois loops `do-while` para alcançar o mesmo resultado. O loop externo controla as linhas, enquanto o interno controla as colunas. Essa abordagem é útil quando queremos garantir que o bloco de código seja executado pelo menos uma vez.

```c
#include <stdio.h>

int main() {
    int size = 5; // Tamanho da matriz
    int lins = 1; // Inicializa o contador de linhas

    // Loop externo para as linhas
    do {
        int cols = 1; // Inicializa o contador de colunas

        // Loop interno para as colunas
        do {
            printf("*\t"); // Imprime um asterisco seguido de uma tabulação
            cols++; // Incrementa o contador de colunas
        } while (cols <= size); // Condição para o loop interno

        printf("\n"); // Quebra de linha após cada linha de asteriscos
        lins++; // Incrementa o contador de linhas
    } while (lins <= size); // Condição para o loop externo

    return 0;
}
```

## Exemplo com `while`

No exemplo a seguir, utilizamos dois loops `while` para alcançar o mesmo resultado. O loop externo controla as linhas, enquanto o loop interno controla as colunas.

```c
#include <stdio.h>

int main() {
    int size = 5; // Tamanho da matriz
    int lins = 1; // Inicializa o contador de linhas

    // Loop externo para as linhas
    while (lins <= size) {
        int cols = 1; // Inicializa o contador de colunas

        // Loop interno para as colunas
        while (cols <= size) {
            printf("*\t"); // Imprime um asterisco seguido de uma tabulação
            cols++; // Incrementa o contador de colunas
        }

        printf("\n"); // Quebra de linha após cada linha de asteriscos
        lins++; // Incrementa o contador de linhas
    }

    return 0;
}
```

> **Nota:** A escolha entre `for`, `while` e `do-while` depende do contexto e da necessidade de inicialização ou execução garantida do bloco de código. Todos os exemplos acima produzem o mesmo resultado, mas cada abordagem tem suas particularidades.