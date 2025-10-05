#include <stdio.h> // Biblioteca para entrada e saída de dados (scanf/printf)
#include <string.h> // Biblioteca para manipulação de strings
#include <stdlib.h> // Para usar atoi

//Estrutura para representar o território
struct Territorio {
    char nome[30];   // Nome do território
    char cor[10];    // Cor do exército
    int tropas;      // Quantidade de tropas alocadas no território
};

int main() {
    struct Territorio territorios[5]; // Vetor para armazenar 5 territórios
    char buffer[50];  // Buffer para ler entradas numéricas como texto

    printf("===== CADASTRO DE TERRITORIOS ===== \n\n");

    // Loop de iteração para entrada dos dados
    for (int i = 0; i < 5; i++) {
        printf("Territorio %d: \n", i + 1);

        printf("Nome: ");
        fgets(territorios[i].nome, 30, stdin); // Lê a linha inteira, permitindo 'espaços'
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = 0;

        printf("Cor do exercito: ");
        fgets(territorios[i].cor, 10, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = 0;
        

        printf("Quantidade de tropas: ");
        fgets(buffer, 50, stdin);   // Lê o valor como texto
        territorios[i].tropas = atoi(buffer);    // Converte o texto para inteiro

        printf("\n");
    }

    // Exibição dos dados após o cadastro
    printf("===== LISTA DE TERRITORIOS CADASTRADOS ===== \n\n");
    for (int i = 0; i < 5; i++) {
        printf("Territorio: %d \n", i + 1);
        printf("Nome: %s \n", territorios[i].nome);
        printf("Cor do exercito: %s \n", territorios[i].cor);
        printf("Tropas: %d \n\n", territorios[i].tropas);
    }

    return 0;

}

