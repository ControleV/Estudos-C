#include <stdio.h>

int main() {
    /*
        Incremento (**)
        Pré-Incremento (++a)
        Pós-Incremento (a++)
        Decremento (--)
        Pré-Decremento --a
        Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    numero1++; // Incrementar em uma unidade
    numero1--; // Decrementar em uma unidade
    resultado = numero1++; // Primeiro atribui, e depois incrementa
    resultado = ++numero1; // Primeiro incrementa, depois atribui
    resultado = numero1--; // Primeiro atribui, e depois decrementa
    resultado = --numero1; // Primeiro decrementa, depois atribui

    printf("Resultado: %d - Número1: %d\n", &resultado, &numero1);
}
