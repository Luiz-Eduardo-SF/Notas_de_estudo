// Criação de formas utilizando loops aninhados
#include <stdio.h>

typedef struct{
    int lins_max;
    int cols_max;
} Cood; // Cria um tipo de dado que armazena duas variáveis 

int MenuOp(){ // Função para escrever o menu e também armazenar a opção escolhida
    
    int op; // Cria uma variável que armazena a opção escolhida
    
    printf("\n============== Geometric Shapes Generator ==============\n");
    printf(" 1. Triangle\n");
    printf(" 2. Square\n");
    printf(" 3. Rectangle\n");
    printf("========================================================\n");
    printf(" Op: "); scanf("%d", &op); // Armazena a opção na variável
    printf("========================================================\n");
    
    return op; // Faz com que a função retorne o valor da escolha
}


void Triangle(Cood *cood1){ // Cria uma função que recebe um valor e o transforma em ponteiro
    for(int i = 1; i <= cood1->lins_max; i++){ // Loop externo que cuida da quantidade de linhas
        for(int j = 1; j <= i; j++){ // Faz com que a quantidade de colunas seja a mesma que a quantidade de linhas atuais
            printf("*\t"); // Desenha usando *
        }
        printf("\n"); // faz a quebra de linhas
    }
}

void Square(Cood *cood1){ // Função que desenha um quadrado
    for(int i = 1; i <= cood1->lins_max; i++){ // Loop externo que cuida da quantidade de linhas
        for(int j = 1;j <= cood1->lins_max;j++){ //  Loop interno que cuida da quantidade de colunas (usa a mesma variável)
            printf("*\t"); 
        }
        printf("\n");
    }
}

void Rectangle(Cood *cood1){ // Função que desenha um retângulo
    for(int i = 1; i <= cood1->lins_max; i++){ // Loop externo que cuida da quantidade de linhas
        for(int j = 1; j <= cood1->cols_max;j++){ // Loop interno que cuida da quantidade de colunas
            printf("*\t"); // Faz o desenho
        }
        printf("\n"); // Quebra de linhas
    }
}

int main(){ // Função principal
    Cood cood1; // Cria uma variável Cood com o nome de cood1 (cood de COOrDenadas)
    
    switch(MenuOp()){ // Cria um switch que vai executar a função do menu e recebe o valor escolhido
        case 1: // Se a opção escolhida for 1 
            
            printf("Choose the height for triangle: "); // Pede a altura do triângulo
            scanf("%d", &cood1.lins_max); // Armazena a altura na variável de linhas
            
            printf("========================================================\n");
            Triangle(&cood1); // Executa a Função de triângulo
            printf("========================================================\n");
            break; // Impede que os outros casos sejam executados
        
        case 2: // Se a opção escolhida for 2
            
            printf("Choose the height for square: ");
            scanf("%d", &cood1.lins_max); // Pede a altura do quadrado
            
            printf("========================================================\n");
            Square(&cood1); // Executa a função do quadrado
            printf("========================================================\n");
            break;
        
        case 3: // Se a opção escolhida for 3
            
            printf("Choose the height for rectangle: ");  // Pede a altura do retângulo
            scanf("%d", &cood1.lins_max); // Armazena a quantidade de linhas
            printf("Choose the width for rectangle: "); // Pede a largura do retângulo
            scanf("%d", &cood1.cols_max); // Armazena a quantidade de colunas
            
            printf("========================================================\n");
            Rectangle(&cood1); // Executa a função do retângulo
            printf("========================================================\n");
            break;
            
        default: // Se o valor da escolha não estiver na lista, executa esse código
            printf("Invalid Op"); // Manda mensagem falando que a opção não é valida
            main(); // Executa todo o código novamente
            break;
    }
    
    return 0; // Termina o processo com sucesso
}