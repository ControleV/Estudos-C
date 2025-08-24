#include <stdio.h>
 
// Exemplo básico de um loop do-while.
int do_while_loop() {
    int i = 1;

    printf("\nExemplo básico de um loop do-while.\n");
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
   
    return 0;
}

// Vantagens do do-while.
int do_while_vantagens() {
    int num;

    printf("\nVantagens do do-while.\n");
    do {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
       
        if (num >= 0) {
            printf("Você digitou: %d\n", num);
        }
    } while (num >= 0);
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}

// Utilização prática do do-while.
int do_while_pratica() {
    int option;

    printf("\nUtilização prática do do-while.\n");
    do {
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 3);
   
    return 0;
}

int main() {
    do_while_loop();
    do_while_vantagens();
    do_while_pratica();

    return 0;
}
