#include <stdio.h>

int comparacao_simples() {
    int a = 10;
    int b = 20;

    printf("\nComparação simples:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    return 0;
}

int comparacao_com_tipos_diferentes() {
    int x = 5;
    float y = 5.0;

    printf("\nComparação com tipos diferentes:\n");
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    return 0;
}

// Comparação entre variáveis de tipos diferentes com conversão explícita
int conversao_explicita() {
    int num = 10;
    float result = 10.0;

    int comparison = (float)num == result;

    printf("\nComparação entre variáveis de tipos diferentes com conversão explícita:\n");
    printf("num == result: %d\n", comparison);

    return 0;
}

int comparacao_com_char(){
    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("\nComparação com char\n");
    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é %d \n", c, c);

    return 0;
}

int main(){
    comparacao_simples();
    comparacao_com_tipos_diferentes();
    conversao_explicita();
    comparacao_com_char();

    return 0;
}
