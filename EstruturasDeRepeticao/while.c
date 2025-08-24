#include <stdio.h>
 
// Exemplo básico de um loop while.
int while_simples() {
    int i = 1;
    
    printf("\nExemplo básico de um loop while.\n");
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
   
    return 0;
}

// Evitando loops infinitos.
int loops_infinitos() {
    int i = 1;
   
    printf("\nEvitando loops infinitos.\n");
    while (i <= 5) {
        printf("%d\n", i);
        i++;    // O valor de 'i' precisa ser incrementado!
    }
   
    return 0;
}

// Utilização de loops while para leitura de dados.
int loop_leitura_dados() {
    int num;

    printf("\nUtilização de loops while para leitura de dados.\n");
    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
}

int main(){
    while_simples();
    loops_infinitos();
    loop_leitura_dados();

    return 0;
}
