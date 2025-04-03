# Alguns Exemplos de Arrays e Matrizes

Nesses exemplos, eu vou colocar o código por completo, ou seja, haverá o `int main()` e o `#include` em todos eles. Além disso, não pretendo separar os códigos por etapas usando funções, pois sinto que assim ficará mais fácil para explicar e compreender.

## Arrays

### Exemplo 1 - Armazenando e Imprimindo 5 números
<hr>

```c
#include <stdio.h>

int main() {
    int numeros[5]; // Cria um vetor de 5 elementos
    
    // Loop para armazenar 5 números
    for(int i = 0; i < 5; i++) { // Cria um loop que vai rodar 5 vezes e começa em zero
        printf("Digite um número: "); // Pede para o usuário digitar um número
        scanf("%d", &numeros[i]); // Armazena o número digitado no vetor
    }


    // Loop para imprimir 5 números
    for(int j = 0; j < 5; j++) { // Cria um loop que vai rodar 5 vezes e começa em zero
        printf("%d\t", numeros[j]); // Imprime o número armazenado no vetor
    }
    return 0;
}
```

> Apesar do código já estar sendo explicado, é importante notar que o loop se inicia em zero, pois esse valor inicial é essencial para conseguirmos armazenar no primeiro índice do vetor (`índice 0`). Se o loop fosse iniciado em 1, ele começaria o armazenamento a partir do segundo índice.
<hr>

### Exemplo 2 - Somando os Elementos de um Vetor
<hr>

```c
#include <stdio.h>

int main() {
    int numeros[5] = {5,10,15,20,25}; // Cria um vetor com 5 valores já definidos
    int soma = 0; // Cria uma variável para armazenar a soma e zeramos o valor dela
    
    for (int i = 0; i < 5; i++){ // Cria um loop que vai rodar 5 vezes e começa em zero
        soma += numeros[i]; // Armazenamos o valor atual da soma junto do valor do indice i
    }
    
    
    printf("%d", soma); // Escrevemos na tela o resultado da soma
    return 0;
}
```

> Nesse código foi usado uma variável para armazenar o resultado da soma, e quando o loop se inicia novamente, o valor de soma vai ser o resultado da soma anterior + o novo valor do indice i.
<hr>

### Exemplo 3 - Encontrando o Maior Valor do Vetor
<hr>

```c
#include <stdio.h>

int main() {
    int numeros[5] = {50, 55, 57, 61, 14}; // Vetor com 5 números
    int maior = numeros[0]; // Inicializa "maior" com o primeiro número do vetor
    
    for (int i = 0; i < 5; i++) { // Percorre o vetor
        if (numeros[i] > maior) { // Se o número atual for maior que "maior"
            maior = numeros[i]; // Atualiza "maior" com o número atual
        }
    }
    
    printf("O maior número é: %d", maior); // Exibe o maior número
}
```

> O código percorre um vetor de 5 números e encontra o maior valor. Ele compara cada elemento com a variável `maior`, atualizando-a sempre que encotra um número maior. No final, exibe o maior número encontrado. 