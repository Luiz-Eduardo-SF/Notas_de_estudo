# Estruturas de Decisão
As estruturas de decisão são essenciais em qualquer linguagem de programação, pois são responsáveis por permitir que o programa tome decisões com base em condições específicas.

## Simples

O `if` e o `else` avaliam se uma condição é verdadeira ou falsa. Com base no resultado, o programa executa um bloco de código correspondente à decisão tomada.

#### > Estrutura:

```c
if(condição){
    // Código a ser executado caso a condição seja verdadeira
}else{
    // Código a ser executado caso a condição seja falsa
}
```

## Estruturas Encadeadas

Nessa estrutura, em vez de usar múltiplos `if`, utilizamos apenas um `if` e o restante usamos `else if` para indicar outros parâmetros.

#### > Estrutura:

```c
if(condição1){
    // Código1 (se condição1 for verdadeira)
}else if(condição2){
    // Código2 (se a condição1 for falsa e condição2 for verdadeira)
}else{
    // Código3 (se todas as condições forem falsas)
}
```

## Estruturas Aninhadas

Nessa estrutura, uma condição está dentro da outra. Ou seja, um `if` dentro de outro `if`.

#### > Estrutura:

```c
if(condição1){
    // Código caso condição1 seja verdadeira.
    if(condição2){
        // Código caso ambas as condições sejam verdadeiras.
    }else{
        // Código caso a condição1 seja verdadeira, mas a condição2 não seja.
    }
}else{
    // Código caso condição1 seja falsa.
}
```

## Switch

O switch é usado para simplificar o processo de seleção de uma entre várias opções possíveis.

```c
switch(opção){
    case 1:
        // Código caso opção == 1;
        break;
    case 2:
        // Código caso opção == 2;
        break;
    default:
        // Código caso nenhum dos casos acima seja verdadeiro.
        break;
}
```

### > Observação

É importante lembrar que o uso do `break` é obrigatório. Caso contrário, todos os códigos da lista serão executados.
##