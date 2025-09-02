#include <stdio.h>

int main() {
    int index;

    char * nomesAlunos[3][3] = {
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o número do aluno que queira ver as notas... \n");
    printf("Aluno 0 - 0\n");
    printf("Aluno 1 - 1\n");
    printf("Aluno 2 - 2\n");

    scanf("%d", &index);

    printf("As notas do aluno %s são %s, %s... \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}
