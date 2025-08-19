#include <stdio.h>
 
// Exemplo de unsigned int e int
int unsigned_int_int() {
    int signedNumber = 3000000000; // Este valor excede o limite de um int normal
    unsigned int unsignedNumber = 3000000000;
    
    printf("\nExemplo de unsigned int e int\n");
    printf("Número com sinal: %d\n", signedNumber);
    printf("Número sem sinal: %u\n", unsignedNumber);
 
    return 0;
}

// Exemplo de long int e int
int long_int_int() {
    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
    
    printf("\nExemplo de long int e int\n");
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);
 
    return 0;
}

// Long double e double
int long_double_double() {
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("\nExemplo de long double e double\n");
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
 
    return 0;
}

// Uso combinado
int uso_combinado() {
    unsigned long int largePositiveNumber = 4000000000;

    printf("\nExemplo de uso combinado\n");
    printf("Número positivo grande: %lu\n", largePositiveNumber);
 
    return 0;
}

int main(){
    unsigned_int_int();
    long_int_int();
    long_double_double();
    uso_combinado();

    return 0;
}
