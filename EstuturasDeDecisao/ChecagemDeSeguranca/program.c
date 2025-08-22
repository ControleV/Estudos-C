#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned long int estoque;
    unsigned short int estoqueMinimo = 500;

    printf("Entre com a temperatura: ");
    scanf("%f", &temperatura);

    printf("\nEntre com a umidade: ");
    scanf("%f", &umidade);

    printf("\nEntre com estoque: ");
    scanf("%d", &estoque);

    if ( temperatura > 30 ){
        printf("\nA temperatura está alta!");
    } else {
        printf("\nA temperatura está correta.");
    }

    if ( umidade > 50 ){
        printf("\nA umidade está crítica!");
    } else {
        printf("\nA umidade está correta.");
    }

    if ( estoque < estoqueMinimo ){
        printf("\nEstoque abaixo do mínimo!");
    } else {
        printf("\nEstoque correto.\n");
    }

    return 0;
}
