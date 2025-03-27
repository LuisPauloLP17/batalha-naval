#include <stdio.h>

int main(){

int index;

char * nomesAlunos = {
    {"aluno1", "PT: 30", "MAT: 90"},
    {"aluno2", "PT: 60", "MAT: 60"},
    {"aluno3", "PT: 90", "MAT: 30"}
};

printf("Digite o numero do aluno para ver as notas... \n");
printf("para o aluno 0, digite 0");
printf("para o aluno 1, digite 1");
printf("para o aluno 2, digite 2");
    
scanf("%d", index);

printf("A nota do %s são: %s, %s...\n", nomesAlunos[index][1], nomesAlunos[index][2], nomesAlunos[index][3]);

    return 0;
}