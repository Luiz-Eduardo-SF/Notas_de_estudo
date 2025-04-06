#include <stdio.h>
#include <math.h> // Biblioteca para adicionar calculos mais avançados

float n1,n2,res; // Declaração de variáveis em float 
char sinal; // Declaração de variável em char

void PegandoValores(){ // Crio uma função que não retorna nenhum valor
    printf("\n====================== Calculator ======================\n");
    printf("Possíveis equações:\nAdição(+) \nSubtração(-) \nMultiplicação(*)\n");
    printf("Divisão(/) \nElevado(^)\n");
    printf("========================================================\n");
    printf("Digite a equação que queira fazer (ex: 2+2): "); // Peço para escrever junto
    scanf("%f%c%f", &n1, &sinal, &n2); // Assim eu consigo armazenar tudo de uma vez no lugar certo
    printf("========================================================\n");
}

int main(){ // Função principal
    PegandoValores(); // Executa a primeira função criada
    
    switch(sinal){ // Switch que vai ler o valor da variável sinal
        case '+': // Se a variável for igual a "+"
            res = n1+n2; // A resposta vai ser a soma dos números escritos
            break; // Impede que leia os outros casos se esse for verdadeiro
        case '-':
            res = n1-n2;
            break;
        case '*':
            res = n1*n2;
            break;
        case '/':
            res = n1/n2;
            break;
        case '^':
            res = pow(n1,n2); // Função para calcular expoente
            break;
        default: // Se nenhum dos casos for verdadeiro
            printf("Calculo não detectado!\n Tente novamente"); // Ele manda mensagem de erro
            main(); // Reseta o código todo
            break;
    }
    
    printf("O resultado da sua conta é: %.2f", res); // Escreve o resultado na tela
    
    return 0; // Encerra o programa
}