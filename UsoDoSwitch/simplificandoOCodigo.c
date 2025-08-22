#include <stdio.h>

// Criando um menu.
int menu() {
  int opcao;

  printf("\nCriando um menu.\n");
  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}

// Dias da semana.
int dias_semana() {
  int dia = 3;

  printf("\nVerificando dia da semana.\n");
  switch (dia) {
    case 1:
      printf("Domingo\n");
      break;
    case 2:
      printf("Segunda-feira\n");
      break;
    case 3:
      printf("Terça-feira\n");
      break;
    case 4:
      printf("Quarta-feira\n");
      break;
    case 5:
      printf("Quinta-feira\n");
      break;
    case 6:
      printf("Sexta-feira\n");
      break;
    case 7:
      printf("Sábado\n");
      break;
    default:
      printf("Dia inválido\n");
  }

  return 0;
}

int main() {
    menu();
    dias_semana();

    return 0;
}
