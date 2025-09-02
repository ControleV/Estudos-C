#include <stdio.h>

// Definição e inicialização de arrays.
int definicao_arrays() {
    int numeros[5];  // Declaração de um array de inteiros com 5 elementos.
    int numeros2[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores.

    return 0;
}

// Acessando elementos de um array.
int acessando_elementos() {
    printf("\nAcessando elementos de um array.\n");
    int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores.
 
    // Acessando e imprimindo elementos específicos do array.
    printf("O primeiro elemento é %d\n", numeros[0]);
    printf("O terceiro elemento é %d\n", numeros[2]);
    printf("O quinto elemento é %d\n", numeros[4]);
 
    return 0;
}

// Armazenamento de notas de alunos.
int nota_alunos() {
    printf("\nArmazenamento de notas de alunos.\n");
    float notas[3] = {85.5, 90.0, 78.0};  // Array de notas de 3 alunos
 
    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota do segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n", notas[2]);
 
    return 0;
}

// Armazenamento de caracteres.
int armazenamento_caracteres() {
    printf("\nArmazenamento de caracteres.\n");
    char letras[4] = {'A', 'B', 'C', 'D'};  // Array de caracteres
 
    printf("Primeira letra: %c\n", letras[0]);
    printf("Segunda letra: %c\n", letras[1]);
    printf("Terceira letra: %c\n", letras[2]);
    printf("Quarta letra: %c\n", letras[3]);
 
    return 0;
}

// Arrays utilizando string.
int arrays_string() {
    printf("\nArrays utilizando string.\n");
    char *nomes[] = {"Alice", "Bob", "Carol", "Victor"};
    int i;
    for(i = 0; i <= 3; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}

int main(){
    definicao_arrays();
    acessando_elementos();
    nota_alunos();
    armazenamento_caracteres();
    arrays_string();

    return 0;
}
