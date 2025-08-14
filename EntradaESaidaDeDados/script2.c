#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];

    // Sintaxe scanf
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("\nDigite a sua altura: ");
    scanf("%f", &altura);
    printf("\nEscolha uma opção: ");
    scanf(" %c", &opcao);
    printf("\nDigite seu nome: ");
    scanf("%s", nome);

    printf("\nA sua idade é: %d\n", idade);
    printf("A sua altura é: %.2f\n", altura);
    printf("A sua opção é: %c\n", opcao);
    printf("O seu nome é: %s", nome);
}
