#include <stdio.h>

// Operador AND lógico (&&).
int operador_and() {
  int a = 5;
  int b = 10;

  printf("\nOperador AND lógico.\n");
  if (a > 0 && b > 0) {
    printf("Ambos os números são positivos\n");
  }

  return 0;
}

// Operador OR lógico (||).
int operador_or() {
  int a = 5;
  int b = -10;

  printf("Operador lógico or.\n");
  if (a > 0 || b > 0) {
    printf("Pelo menos um dos números é positivo\n");
  }

  return 0;
}

// Operador NOT lógico (!).
int operador_not() {
  int a = -5;

  printf("Operador lógico not.\n");
  if (!(a > 0)) {
    printf("a não é um número positivo\n");
  }

  return 0;
}

// Precedência de operadores.
int precedencia_de_operadores() {
  int a = 5;
  int b = -10;
  int c = 0;

  printf("Preceência de operadores.\n");
  if (a > 0 && b < 0 || c == 0) {
    printf("A condição é verdadeira\n");
  } else {
    printf("A condição é falsa\n");
  }

  return 0;
}

// Verificação de idade e altura.
int verificacao_idade_altura() {
  int idade = 20;
  float altura = 1.75;

  printf("Verificação de idade e altura.\n");
  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");
  }

  return 0;
}

// Verificação de temperatura e umidade.
int verificacao_temperatura_umidade() {
  float temperatura = 25.0;
  float umidade = 55.0;

  printf("Verificação de temperatura e umidade.\n");
  if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
    printf("As condições estão favoráveis\n");
  } else {
    printf("As condições não estão favoráveis\n");
  }

  return 0;
}

int main(){
    operador_and();
    operador_or();
    operador_not();
    precedencia_de_operadores();
    verificacao_idade_altura();
    verificacao_temperatura_umidade();

    return 0;
}
