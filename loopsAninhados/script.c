#include <stdio.h>
 
// Funcionamento básico - Exemplo com For.
int fb_for() {
    printf("\nFuncionamento básico - Exemplo com For.\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    
    return 0;
}

// Exemplo em while.
int fb_while() {
    printf("\nExemplo em while.\n");
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

// Exemplo em do-while.
int do_while_fb() {
    printf("\nExemplo em do-while.\n");
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);

    return 0;
}

// Exemplos adicionais - Verificação de pares de números.
int ea_verificacao_pares_numeros() {
    printf("\nExemplos adicionais - Verificação de pares de números.\n");
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((i + j) % 2 == 0) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}

// Desenho de um padrão.
int ea_desenho_de_padrao() {
    printf("\nDesenho de um padrão.\n");
    int n = 5; // altura do triângulo
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// Contagem regressiva de fogos de artifício.
int ea_contagem_regressiva() {
    printf("\nContagem regressiva de fogos de artifício.\n");
    int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 100000000; i++) {
            // Apenas para simular um atraso
        }
    }
 
    printf("Fogos de artifício!\n");
   
    return 0;
}

// Tabuada de multiplicação.
int ea_tabuada_multiplicacao() {
    printf("\nTabuada de multiplicação.\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
   
    return 0;
}

int main(){
    fb_for();
    fb_while();
    do_while_fb();
    ea_verificacao_pares_numeros();
    ea_desenho_de_padrao();
    ea_contagem_regressiva();
    ea_tabuada_multiplicacao();

    return 0;
}
