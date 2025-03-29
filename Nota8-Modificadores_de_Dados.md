# Modificadores de Dados

## Signed e Unsigned com Char

**O unsigned serve para armazenar um número maior de caracteres (Porém ele não pode ser negativo).**

Char pode ser declarado como ``signed`` ou ``unsigned``.<br>
Sendo ``signed`` o padrão **(valores de -128 a 127)**. Ou ``unsigned`` **(valores de 0 a 255)**.:


```c
signed char sc = 10;  // Pode ser negativo.
unsigned char uc = 10;  // Só armazena valores positivos.
```

## Short com Int

**Short é usado para economizar memória, reduzindo o tamanho da variável.**

```c
short int si = 32767;  // Valor de -32768 a 32767.
```

## Long com Int e Double

**O long serve para armazenar números maiores que um int ou um double comum.**

>Long pode ser declarado como ``long int`` ou ``long double``.<br>
Sendo ``long int`` o padrão **(valores de -2147483648 a 2147483647)**.<br>
Ou ``long double`` **(valores de 1.7e-38 a 1.7e+38)**.<br>

```c
long int li = 2147483647;
long double ld = 1.7e-38;
```

## Long Long com Int e Double

**O long long serve para armazenar números ainda maiores.**

>Long Long pode ser declarado como ``long long int`` ou ``long long double``.<br>
Sendo ``long long int`` o padrão **(valores de -9223372036854775808 a 9223372036854775807)**.<br>
Ou ``long long double`` **(valores de 2.2250738585072014e-308 a 1.7976931348623157e+308)**.

```c
long long int lli = 9223372036854775807;
long long double lld = 2.2250738585072014e-308;
```

## Const com Float e Char

**O ``const`` torna o valor imutável.**

>Const pode ser declarado como ``const float`` ou ``const char``.<br> 

```c
const float cf = 3.14; // Valor imutável.
const char *msg = 'Ola, Mundo!'; // Um ponteiro para uma string imutável.
```

## Volatile com Int e Float

**O ``volatile`` é usado quando o valor pode ser alterado externamente (ex: Hardware).**

>Volatil pode ser declarado como ``volatile int`` ou ``volatile float``.<br>

```c
volatile int sensor_value = 0; // Pode mudar a qualquer momento.
volatile float temperatura = 25.5; // Temperatura pode variar.
```

## Static

### Em Variáveis Locais (Dentro de Funções)

A variável mantém seu valor entre chamadas da função.

```c
void funcao() {
    static int contador = 0; // Variável estática local.
    contador++;
    printf("Contador: %d\n", contador);
}
    funcao(); // Contador: 1;
    funcao(); // Contador: 2;
    funcao(); // Contador: 3;
```

### Em Variáveis Globais (Dentro de Arquivos)
A variável só pode ser acessada no arquivo em que ela foi declarada.

```c
static int segredo = 42; // Só visível dentro deste arquivo.
```
<h3> > Resumo</h3>
<hr>

- Local Preserva o valor entre chamadas.
- Global Limita o escopo ao arquivo.