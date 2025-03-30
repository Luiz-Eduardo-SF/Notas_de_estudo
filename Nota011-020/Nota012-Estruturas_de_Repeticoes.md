# Estruturas de Repetição

Estruturas como `for`, `while` e `do-while` simplificam e otimizam tarefas que exigem múltiplas execuções de ações semelhantes.

## Estrutura de Repetição > while

A estrutura `while` repete o código dentro dela enquanto a condição for verdadeira, e só para quando essa condição for falsa.

### > Estrutura:
```c
while(condição){
    // código que se repete enquanto a condição for verdadeira.
}
```

### > Exemplo com Código:

```c
int main(){
    int num;
    printf("Digite um número (negativo para sair): ");
    scanf("%d", &num);
    while(num >= 0){
        printf("Você digitou %d.\n", num);
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
    }
    printf("Número negativo detectado, saindo...");
    return 0;
}
```

> Nesse programa, o código é executado até que o usuário insira um número negativo, tornando a condição falsa e terminando o loop.

## Do-while

O `do-while` é um loop que executa o bloco de código **pelo menos uma vez**, mesmo se a condição for falsa. Só depois ele verifica se deve repetir.

### > Estrutura:

```c
do{
    // Código é executado primeiro
}while(condição); // Depois verifica se repete
```

> Útil quando você precisa executar algo antes de testar **(ex: menus, input do usuário).**

## For 
O `for` é o método mais simples e mais utilizado devido à sua praticidade e clareza.<br>
O `for` consiste na criação de uma variável, condição e incremento, tudo em uma só linha, o que facilita sua leitura e compreensão.

```c
for (int i = 1; i <= 5; i++) {
    // código
}
```
> `int i = 1;` &rarr; cria uma variável `int i` e armazena o valor 1;<br>
> `i <= 5;` &rarr; compara a variável `i` com o valor 5;<br>
> `i++` &rarr; incrementa a variável `i` em 1 quando o código termina de rodar;<br>
> `// código` &rarr; executa o código dentro do bloco enquanto a comparação for verdadeira.