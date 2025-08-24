#include <stdio.h>
 
// Exemplo básico de um loop for.
int exemplo_for() {
    printf("\nExemplo básico de um loop for.\n");

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
   
    return 0;
}

// Iteração com condicionais.
int iteracoes_condicionais() {
    printf("\nIteração com condicionais.\n");

    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
   
    return 0;
}

// Uso de for com incrementos e decrementos diferentes.
int incrementos_decrementos() {
    printf("\nUso de for com incrementos e decrementos diferentes.\n");

    for (int i = 0; i <= 100; i += 10) {
        printf("%d\n", i);
    }

    for (int i = 100; i >= 0; i -= 10) {
        printf("%d\n", i);
    }
   
    return 0;
}

int main(){
    exemplo_for();
    iteracoes_condicionais();
    incrementos_decrementos();

    return 0;
}