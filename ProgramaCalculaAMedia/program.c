#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    float media;

    printf("\n*** Programa de cálculo de média ***\n");

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);

    printf("\nDigite sua segunda nota: ");
    scanf("%f", &nota2);

    printf("\nDigite sua terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nA média é: %.2f", media);

    return 0;
}
