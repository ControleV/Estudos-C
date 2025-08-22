#include <stdio.h>

// Verificação de número par.
int verificacao_numero_par() {
  int numero = 10;

  printf("\nVerificação de número par.\n");
  if (numero % 2 == 0) {
    printf("O número é par\n");
  } else {
    printf("O número é ímpar\n");
  }

  return 0;
}

// Verificação de temperatura.
int verificacao_temperatura() {
  float temperatura = 25.0;

  printf("\nVerificação de temperatura.\n");
  if (temperatura > 30.0) {
    printf("Está calor\n");
  } else {
    printf("Não está calor\n");
  }

  return 0;
}

// Verificação de nota.
int verificacao_nota() {
  int nota = 65;

  printf("\nVerificação de nota.\n");
  if (nota >= 60) {
    printf("Você passou!\n");
  } else {
    printf("Você não passou.\n");
  }

  return 0;
}

// Verificação de idade.
int verificacao_idade() {
  int idade = 16;

  printf("\nVerificação de idade.\n");
  if (idade >= 18) {
    printf("Você é maior de idade\n");
  } else {
    printf("Você é menor de idade\n");
  }

  return 0;
}

// Comparação de preços.
int comparacao_precos() {
  float preco = 120.0;

  printf("\nComparação de preços.\n");
  if (preco > 100.0) {
    printf("O produto é caro\n");
  } else {
    printf("O produto é barato\n");
  }

  return 0;
}

// Verificação de estoque.
int verificacao_estoque() {
  int estoque = 3;

  printf("\nVerificação de estoque.\n");
  if (estoque < 5) {
    printf("Estoque baixo\n");
  } else {
    printf("Estoque adequado\n");
  }

  return 0;
}

int main(){
    verificacao_numero_par();
    verificacao_temperatura();
    verificacao_nota();
    verificacao_idade();
    comparacao_precos();
    verificacao_estoque();

    return 0;
}
