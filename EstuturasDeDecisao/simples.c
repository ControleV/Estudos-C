#include <stdio.h>

// Comparação de dois valores.
int comparacao_dois_valores() {
  int numero1 = 8;
  int numero2 = 5;

  printf("\nComparação entre dois valores.\n");
  if (numero1 > numero2) {
    printf("numero1 é maior que numero2\n");
  }

  return 0;
}

// Verificando se uma pessoa é maior de idade.
int verificacao_maior_de_idade() {
  int idade = 20;

  printf("\nVerificando se uma pessoa é maior de idade.\n");
  if (idade >= 18) {
    printf("Você é maior de idade\n");
  }

  return 0;
}

// Verificação de temperatura.
int verificacao_temperatura() {
  float temperatura = 32.0;

  printf("\nVerificação de temperatura.\n");
  if (temperatura > 30.0) {
    printf("Está calor\n");
  }

  return 0;
}

// Verificação de nota.
int verificacao_nota() {
  int nota = 75;
  
  printf("\nVerificação de nota.\n");
  if (nota >= 60) {
    printf("Você passou!\n");
  }

  return 0;
}

// Comparação de idades.
int comparacao_idades() {
  int idade1 = 32;
  int idade2 = 30;

  printf("\nComparação de idades.\n");
  if (idade1 > idade2) {
    printf("Pessoa 1 é mais velha que Pessoa 2\n");
  }

  return 0;
}

// Verificação de número par.
int verificacao_numero_par() {
  int numero = 4;

  printf("\nVerificação de número par.\n");
  if (numero % 2 == 0) {
    printf("O número é par\n");
  }

  return 0;
}

// Verificação de estoque.
int verificacao_estoque() {
  int estoque = 3;

  printf("\nVerificação de estoque.\n");
  if (estoque < 5) {
    printf("Estoque baixo\n");
  }

  return 0;
}

int main(){
    comparacao_dois_valores();
    verificacao_maior_de_idade();
    verificacao_temperatura();
    verificacao_nota();
    comparacao_idades();
    verificacao_numero_par();
    verificacao_estoque();

    return 0;
}
