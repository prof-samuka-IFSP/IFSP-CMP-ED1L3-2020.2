#include <stdio.h>
#include <stdlib.h>

typedef struct _aluno {
    char nome[100];
    int idade;
} Aluno;


int main() {
    int n_alunos = 10;

    Alunos* alunos = (Aluno*) calloc(n_alunos, sizeof(Aluno));

    alunos[1].idade = 10;


    free(alunos);

    return 0;
}