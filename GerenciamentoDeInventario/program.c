#include <stdio.h>

int main(){
    char produtoA[30] = "pilha";
    char produtoB[30] = "controle";

    unsigned long int estoqueA = 1000;
    unsigned long int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned short int estoqueMinimoA = 500;
    unsigned short int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

    printf("\nProduto %s tem estoque %u e o valor unitário é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitário é R$%.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);

    printf("O valor total de A (R$%.2f) é maior que o valor total de B(R$%.2f)? %d\n",
        estoqueA * valorA,
        estoqueB * valorB,
        (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}
