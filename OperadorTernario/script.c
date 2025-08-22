#include <stdio.h>

// Verificação de idade.
int verificacao_idade() {
  int idade = 20;
  char* resultado;

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

  printf("\nVerificação de idade.\n");
  printf("Resultado: %s\n", resultado);

  return 0;
}

// Verificação de temperatura.
int verificacao_temperatura() {
  int temperatura = 28;
  char* estado;

  estado = (temperatura > 30) ? "Calor" : "Frio";

  printf("\nVerificação de temperatura.\n");
  printf("Estado: %s\n", estado);

  return 0;
}

// Determinação de maior número.
int determinacao_maior_numero() {
  int num1 = 10, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2;

  printf("\nVerificação de maior número.\n");
  printf("O maior número é: %d\n", maior);

  return 0;
}

int main(){
    verificacao_idade();
    verificacao_temperatura();
    determinacao_maior_numero();

    return 0;
}
