# O Inicio de Tudo 

## Resumo da história
A linguagem C é uma das linguagens mais usadas na computação, pois, ao utilizá-la, é possível ter maior controle sobre o computador.<br>
**Criada por: Dennis Ritchie em 1972**

## C é uma linguagem de programação

1. **Compilada** -> O código-fonte é traduzido para linguagem de máquina por um compilador, gerando um arquivo executável.
2. **Estruturada** -> Permite a organização do código em blocos (funções, loops, condicionais, etc.), o que facilita a leitura e manutenção.
3. **Alto nível** -> É mais próxima da linguagem humana do que da linguagem de máquina.
4. **Baixo nível** -> Permite a manipulação direta de memória e hardware, o que a torna poderosa e flexível.

# Primeiro código
## Hello World!!

```c
#include <stdio.h>

int main() {
    printf("Hello World!\n");
    return 0;
}
```

## Explicando o código
1. ```#include <stdio.h>``` -> O comando ```#include``` serve para incluir uma biblioteca ou arquivo de cabeçalho no seu programa.<br>
Neste caso, ele inclui o arquivo ```<stdio.h>```, que contém funções de entrada e saída padrão da linguagem C.

2. ```int main()``` -> O comando ```int main()``` serve para iniciar o programa.

3. ```printf("Hello World!\n");``` -> O comando ```printf``` serve para imprimir uma mensagem na tela.

4. ```return 0;``` -> O comando ```return``` serve para encerrar o programa e retornar um valor.<br>
Neste caso, ele retorna 0, indicando que o programa foi executado com sucesso.

## Observação
> É muito importante estar atento ao uso do ``;`` (ponto e vírgula), pois, diferente de outras linguagens, o C exige o ``;`` para o funcionamento.