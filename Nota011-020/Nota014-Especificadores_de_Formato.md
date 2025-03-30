# Tabela de Especificadores de Formato em C

| **Especificador** | **Tipo de Dado** | **Uso** | **Exemplo** |
|-------------------|------------------|---------|-------------|
|`%d` ou `%i`| int | **Exibe números com sinal** | `printf("%d", -42);`&rarr; "-42"|
|`%u`| unsigned int | **Exibe números sem sinal** | `printf("%u", 42);`&rarr; "42"|
|`%o`| unsigned int | **Exibe números em octal(base 8)** |`printf("%o", 42);`&rarr; "52"|
|`%x`| unsigned int | **Exibe números em hexadecimal(minúsculas)** |`printf("%x", 42)`&rarr; "2a"|
|`%X`| unsigned int | **Exibe números em hexadecimal(maiúsculas)** |`printf("%X", 42)`&rarr; "2A"|
|`%f`| float, double | **Exibe números de ponto flutuante** |`printf("%f", 3.14)`&rarr; "3.140000"|
|`%e ou %E`| float, double | **Exibe em notação científica(minúscula - maiúscula)** |`printf("%e", 3.14)`&rarr; "3.140000e+00"|
|`%g ou %G`| float, double | **Escolhe automaticamente entre `%f` e `%e` ou `%E`** |`printf("%g", 3.14)`&rarr; "3.14"|
|`%c`| char | **Exibe um único caractere** |`printf("%c", 'A')`&rarr; "A"|
|`%s`| char* | **Exibe uma string** |`printf("%s", "Hello")`&rarr; "Hello"|
|`%p`| void* | **Exibe um ponteiro(endereço de memória)** |`printf("%p", ptr)`&rarr; "0x7ffee2b3c8"|
|`%%`| Nenhum | **Exibe o caractere `%`** |`printf("%%")`&rarr; "%"|
|`%n`| int* | **Armazena o número de caracteres impressos até o momento** |`int n; printf("Hello%n", &n);`&rarr; "Hello" e `n = 5`|
|`%a ou %A`| double | **Exibe números de ponto flutuante em hexadecimal** |`printf("%a", 3.14)`&rarr; "0x1.91eb86p+1"|
|`%ld, %lld`| long, long long | **Exibe números inteiros longos** |`printf("%ld", 123456789L)`&rarr; "123456789"|
|`%lu, %llu`| unsigned long, unsigned long long | **Exibe números inteiros longos sem sinal** |`printf("%lu", 123456789UL)`&rarr; "123456789"|
|`%Lf`| long double | **Exibe números de ponto flutuante de precisão estendida** |`printf("%Lf", 3.141592653589793L)`&rarr; "3.141593"|

## Modificadores Adicionais:

Você pode combinar os especificadores com modificadores para alterar o comportamento:

- `%5d` &rarr; Largura mínima de 5 caracteres;
- `%-5d` &rarr; Alinhamento à esquerda;
- `%05d` &rarr; Preenche com zeros (ex: 0042);
- `%.2f` &rarr; 2 casas decimais;
- `%*d` &rarr; Largura passada como argumento;

##