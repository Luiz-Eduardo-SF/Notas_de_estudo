# Gerando Números Aleatórios

É normal que na hora de gerarmos números aleatórios, usemos duas bibliotecas, sendo elas as: 

- `<stdlib.h>` -> biblioteca que fornece funções para a locação de memória, conversão de tipos de dados e geração de números aleatórios.

- `<time.h>` -> biblioteca que fornece funções para manipulação de tempo e data.

## Uso Comum das Duas Juntas

Quando se quer gerar números aleatórios diferentes a cada execução, combinamos: 
- `srand() e rand()` &rarr; **<stdlib.h>**
- `time(NULL)` &rarr; **<time.h>**

```c
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 100; // Gera um número aleatório entre 0 e 99.
    return 0; 
}
```
> **`srand(time(NULL))`** &rarr; Nessa parte você usa o srand() para configurar a semente do gerador de números pseudoaleatórios (rand()) pois sem o <ins>srand()</ins> o rand sempre gera a mesma sequência.

> **`rand() % 100`** &rarr; Nessa parte vocé utiliza o <ins>%</ins> no rand para limitar o número gerado a um intervalo específico.<br>
Por exemplo: (rand() % 100) que limita o número em 100 possíveis casos, contanto com o 0, o que resulta em um número aleatório entre 0 e 99.