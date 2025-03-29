# Variáveis e tipos de dados

# Entrada e Saída de Dados
1. ``printf();`` -> Exibe dados na tela.
2. ``scanf();`` -> Lê dados do teclado . (Como um input)

```c
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Número digitando:%d",n1);
```





# Estruturas Condicionais

1. Na tomada de decisão temos os: ``if``,``else`` e ``else if``.<br><br>
Onde o ``if`` serve para rodar o código caso a condição for verdadeira, ``else`` caso a condição do if não for verdadeira, e o ``else if`` caso a condição do primeiro if não for verdadeira mas queira aplicar outra condição.

```c
    int n1 = 1;
    if (n1 < 0){
        printf("O número que você digitou é negativo.");
    } else if (n1 > 0){
        printf("O número que você digitou é positivo.");
    } else{
        printf("O número que você digitou é igual a 0");
    }
```





# Loops
1. ``for`` -> Repetição com controle.
2. ``while`` -> Repetição enquanto uma condição for verdadeira.

## > Loop for
```c
    for(int i = 1; i <=5; i++){
        printf("%d", i);
    }
```
>``int i = 0;`` -> define uma variável numerica de nome "i" como 1.<br>
``i < 5;`` -> Aplica uma condição onde o código se repete enquanto a condição for verdadeira.<br>
``i++`` -> Após executar o código o valor de "i" aumenta em 1.

## > Loop while
```c
    int j = 0;
    while(j < 5){
        printf("%d", j);
        j++;
    }
```
> Como o modo de funcionameto é similar eu não vou legendar esse código, criamos uma variável e repetimos o código enquanto a condição do while for verdadeira, no final do código devemos adicionar o ``j++`` para que o loop termine.





# Funções

Funções são blocos de código que realizam tarefas específicas.<br>
Criar uma função é como criar um comando, existem diferentes tipos de funções, mas isso vai ser explicado mais para frente. 

```c
    int soma(int a, int b){
        return a + b; 
    }

    int resultado = soma(5,2);
```

Nesse código, é criado uma função de nome "soma", onde ele vai receber dois valores inteiros, e devolver a soma deles.<br>Vamos separar esse código em partes e explicar cada uma delas.

>``int soma(int a, int b)`` -> Nessa parte nós criamos a variável com int antes pois sabemos que ela vai retornar um valor inteiro, depois declaramos que ela vai receber também dois valores inteiros ``a`` e ``b``.<br>
``return a + b;`` -> Nessa parte nós definimos que a função vai retornar a soma dos dois valores criados.<br>
 ``int resultado = soma(5,2)``-> E nessa armazenamos o resultado da soma entre os dois valores inseridos (5 e 2) em uma variável.


# Arrays

Arrays são coleções de elementos do mesmo tipo, e que podem ser armazenados em uma mesma variável.
```c
    int numeros[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++){
        
        printf("%d", numero[i]);

    }
```
> Na primeira parte, é criado um array que armazena 5 números.<br>
Já na segunda parte, é criado um loop que escreve na tela os números desse array.

# Ponteiros

Ponteiros são variáveis que armazenam endereços da memória.<br>
Os ponteiros são comom papelzinhos que dizem onde algo está guardado, em vez de grardar um valor em si. **Eles ajudam o computador a encontrar coisas mais rapidamente na memória.**

```c
    int x = 10; 
    int* ptr = &x;
    printf("Valor de x:%d\n", *ptr);
```
> Nesse código, primeiros criamos uma variável ``x`` de valor 10, depois criamos um ponteiro int que vai armazenar a variavel ``x`` nele.
E por fim escrevemos o valor de x na tela utilizando o ponteiro no lugar da variável.
<hr>