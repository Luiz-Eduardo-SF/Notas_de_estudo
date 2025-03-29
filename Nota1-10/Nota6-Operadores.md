# Operadores

# Operadores Relacionais

Na linguagem C, temos os seguintes operadores relacionais:

| Operador | Descrição       |
|----------|-----------------|
| `>`      | Maior que       |
| `<`      | Menor que       |
| `>=`     | Maior ou igual  |
| `<=`     | Menor ou igual  |
| `==`     | Igual a         |
| `!=`     | Diferente de    |

Esses operadores são usados para comparar dois valores, retornando `1` se a comparação for verdadeira, e `0` se for falsa.

```c
int a = b != c;
```

> Nesse exemplo, usamos dois valores para a comparação (**b** e **c**) e uma variável (**a**) que armazena o resultado da comparação.<br><br>
Se o valor de **b** for diferente do valor de **c**, a variável **a** receberá o valor `1` (**Verdadeiro**); caso contrário, receberá o valor `0` (**Falso**).

---

# Operadores Lógicos

| Operador | Nome       | Descrição                                                                 |
|----------|------------|---------------------------------------------------------------------------|
| `&&`     | And (E)    | Retorna `1` se **ambos** os operandos forem verdadeiros; caso contrário, retorna `0`. |
| <code>&#124;&#124;</code> | Or (Ou) | Retorna `1` se **ao menos um** operando for verdadeiro; caso contrário, retorna `0`. |
| `!`      | Not (Não)  | Inverte o valor lógico do operando. Se for verdadeiro, torna-se falso, e vice-versa. |

### Exemplos:

```c
int resultado = expressão1 && expressão2; // Operador And
int resultado = expressão1 || expressão2; // Operador Or
int resultado = !expressão;               // Operador Not
```

---

# Diversos Operadores e seus Resumos

| Operador | Descrição                  |
|----------|----------------------------|
| `!`      | Não                        |
| `*`      | Multiplicação              |
| `+`      | Adição / Concatenação      |
| `/`      | Divisão                    |
| `%`      | Resto de Divisão           |
| `-`      | Subtração                  |
| `++`     | Incremento (+1)            |
| `--`     | Decremento (-1)            |
| `=`      | Atribuição (Recebe)        |
| `==`     | Igual                      |
| `+=`     | Mais igual                 |
| `-=`     | Menos igual                |
| `*=`     | Vezes igual                |
| `/=`     | Dividido igual             |
| `%=`     | Resto da divisão igual     |

> **Nota:** Todos os operadores que possuem um sinal de igual (`=`) executam a operação correspondente e armazenam o resultado na variável.

### Exemplos:

```c
int a = 5;
int b = 5;

a += b == 10;
a -= b == 5;
a *= b == 25;
a /= b == 1;
a %= b == 0;
```

---

# Precedência de Operadores

| Operadores                                    | Associatividade |
|-----------------------------------------------|-----------------|
| `()` , `[]`                                   | **Esquerda → Direita** |
| `!` , `++` , `--`                             | **Direita &larr; Esquerda** |
| `*` , `/` , `%`                               | **Esquerda → Direita** |
| `+` , `-`                                     | **Esquerda → Direita** |
| `<` , `<=` , `>` , `>=`                       | **Esquerda → Direita** |
| `==` , `!=`                                   | **Esquerda → Direita** |
| `&&`                                          | **Esquerda → Direita** |
| <code>&#124;&#124;</code>                                          | **Esquerda → Direita** |
| `=` , `+=` , `-=` , `*=` , `/=` , `%=`        | **Direita &larr; Esquerda** |
| `,`                                           | **Esquerda → Direita** |