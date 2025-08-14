#include <stdio.h>

int main(){
    int idade = 23;
    float altura = 1.65;
    char opcao = 'S';
    char nome[20] = "victor";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %f\n", altura);    // Use <%.2f> para limitar a duas casas decimais
    printf("A opção é: %c\n", opcao);

    /*
        %d: Imprime um inteiro no formato decimal.
        %i: Equivale a %d.
        %f: Imprime um número de ponto flutuante no formato padrão.
        %e: Imprime um número de ponto flutuante na notação científica.
        %c: Imprime um único caractere.
        %s: Imprime uma cadeia (string) de caracteres.
    */
}
