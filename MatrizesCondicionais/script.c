#include <stdio.h>

// Inicialização condicional de uma matriz.
int inicializacao_matriz() {
    printf("\nInicialização condicional de uma matriz.\n");
    int matriz[3][3];
 
    // Inicialização da matriz com base em condições simples
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (j % 2 == 0) {
                matriz[i][j] = 1; // Se a coluna for par, atribui 1
            } else {
                matriz[i][j] = 0; // Se a coluna for ímpar, atribui 0
            }
        }
    }
 
    // Impressão da matriz
    for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha
        for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}

// Modificação condicional de uma matriz.
int modificacao_condicional_matriz() {
    printf("\nModificação condicional de uma matriz.\n");
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 
    // Modificação condicional dos elementos da matriz
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (matriz[i][j] > 5) {
                matriz[i][j] = -matriz[i][j]; // Se o elemento for maior que 5, torna-o negativo
            }
        }
    }
 
    // Impressão da matriz modificada
    for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha
        for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}
 
// Contagem condicional em uma matriz.
int contagem_condicional_matriz() {
    printf("\nContagem condicional em uma matriz.\n");
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int evenCount = 0, oddCount = 0;
 
    // Contagem de elementos pares e ímpares
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (matriz[i][j] % 2 == 0) {
                evenCount++; // Incrementa o contador de pares
            } else {
                oddCount++; // Incrementa o contador de ímpares
            }
        }
    }
 
    // Impressão dos resultados
    printf("Número de elementos pares: %d\n", evenCount);
    printf("Número de elementos ímpares: %d\n", oddCount);
 
    return 0;
}

// Substituição condicional de elementos.
int substituicao_condicional_elementos() {
    printf("\nSubstituição condicional de elementos.\n");
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
 
    // Substituição condicional de elementos
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (matriz[i][j] % 3 == 0) {
                matriz[i][j] = -1; // Substitui múltiplos de 3 por -1
            }
        }
    }

    // Impressão da matriz modificada
    for (int i = 0; i < 3; i++) {      // Loop para imprimir cada linha
        for (int j = 0; j < 3; j++) {  // Loop para imprimir cada coluna
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}

// Busca condicional em uma matriz.
int busca_condicional_matriz() {
    printf("\nBusca condicional em uma matriz.\n");

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5;
    int found = 0;
 
    // Busca condicional do elemento alvo
    for (int i = 0; i < 3; i++) {      // Loop externo para as linhas
        for (int j = 0; j < 3; j++) {  // Loop interno para as colunas
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
 
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }
 
    return 0;
}

int main(){
    inicializacao_matriz();
    modificacao_condicional_matriz();
    contagem_condicional_matriz();
    substituicao_condicional_elementos();
    busca_condicional_matriz();

    return 0;
}
