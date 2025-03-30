# Tabela de Especificadores de Formato em C

| **Especificador** | **Tipo de Dado** | **Uso** | **Exemplo** |
|-------------------|------------------|---------|-------------|
|`%d` ou `%i`| int | **Exibe números com sinal** | `printf("%d", -42);`&rarr; "-42"|
|`%u`| unsigned int | **Exibe números sem sinal** | `printf("%u", -42);`&rarr; "42"|
|`%o`| unsigned int | **Exibe números em octal(base 8)** |`printf("%o", 42);`&rarr; "52"|
|`%x`| unsigned int | **Exibe números em hexadecimal(minúsculas)** |`printf("%x", 42)`&rarr; "2a"|
|`%X`| unsigned int | **Exibe números em hexadecimal(maiúsculas)** |`printf("%X", 42)`&rarr; "2A"|
|`%f`| float, double | **Exibe números de ponto flutuante** |`printf("%f", 3.14)`&rarr; "3.140000"|
|`%e ou %E`| float, double | **Exibe em notação científica(minúscula - maiúscula)** |`printf("%e", 3.14)`&rarr; "3.140000e+00"|
