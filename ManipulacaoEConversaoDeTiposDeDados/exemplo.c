#include <stdio.h>
 
// Exemplo de manipulação de variáveis inteiras:
int variaveis_inteiras() {
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisão de inteiros resulta em um número inteiro
 
    printf("\nVariáveis inteiras\n");
    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
 
    return 0;
}

// Exemplo de divisão de variáveis inteiras
int divisao_variaveis_inteiras() {
    int a = 7;
    int b = 2;
    int quociente = a / b; // Note que a divisão de 7 por 2 resulta em 3, pois a parte decimal é descartada
 
    printf("\nDivisão de variáveis inteiras\n");
    printf("Quociente: %d\n", quociente);
 
    return 0;
}

// Variáveis de ponto flutuante
int variaveis_ponto_flutuante() {
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; // Divisão de ponto flutuante
    
    printf("\nVariáveis de ponto flutuante\n");
    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}

// Conversão implícita
int conversao_implicita() {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
 
    printf("\nConversão implícita");
    printf("\nResultado: %.2f\n", resultado);
 
    return 0;
}

// Conversão explícita (Casting)
int conversao_explicita() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // 'a' é explicitamente convertido para float
    
    printf("\nConversão explícita");
    printf("\nQuociente: %.2f\n", quociente);
 
    return 0;
}

int main(){
    variaveis_inteiras();
    divisao_variaveis_inteiras();
    variaveis_ponto_flutuante();
    conversao_implicita();
    conversao_explicita();

    return 0;
}
