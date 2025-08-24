#include <stdio.h>

int checar_par(){
    int i = 0;

    while (i <= 100){
        if(i % 2 == 0){
            printf("O número %d é par!\n", i);
        }

        i++;
    }

    return 0;
}

int algoritmo(){
    int numero;

    do {
        printf("\nDigite um número par para sair do programa: ");
        scanf("%d", &numero);

        if(numero % 2 == 0){
            printf("%d é par!\n", numero);

        } else {
            printf("%d é impar!\n", numero);
        }

    } while (numero % 2 != 0);

    printf("Você digitou um número par, saindo do programa...");

    return 0;
}

int tabuada(){
    int numero, i;

    printf("\nDigite um número para calcularmos a tabuada...\n");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", i, numero, i * numero);
    }

    return 0;
}

int main(){
    int opcao;

    printf("\nEscolha o que quer fazer:\n0 - Checar números pares\n1 - Algoritmo\n2 - Tabuada\n");
    scanf("%d", &opcao);

    switch (opcao){
        case 0:
            checar_par();
            break;

        case 1:
            algoritmo();
            break;

        case 2:
            tabuada();
            break;
        
        default:
            printf("A opção escolhida não existe, tente novamente!\n");
    }

    return 0;
}
