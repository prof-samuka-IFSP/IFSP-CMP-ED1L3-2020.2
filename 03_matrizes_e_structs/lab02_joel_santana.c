#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    char ra[10];
    char email[100];
    float prova[3];  // [0] == prova1, [1] == prova2, [2] == prova3
    float media;
} Aluno;


// imprime os dados de um aluno
void imprimeAluno(Aluno aluno) {
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("RA: %s\n", aluno.ra);
    printf("Email: %s\n", aluno.email);
    printf("P1: %.2f\n", aluno.prova[0]);
    printf("P2: %.2f\n", aluno.prova[1]);
    printf("P3: %.2f\n", aluno.prova[2]);
    printf("Media: %.2f\n", aluno.media);

    if (aluno.media >= 6.0) {
        printf("APROVADO\n");
    }
    else {
        printf("REPROVADO\n");
    }
}


int main() {
    int n_alunos;

    // leitura da entrada de dados
    scanf("%d", &n_alunos);

    Aluno *alunos = (Aluno*) calloc(n_alunos, sizeof(Aluno));
    
    // leitura dos alunos
    for (int i = 0; i < n_alunos; i++) {
        scanf(" %[^\t\n]s", alunos[i].nome); // lê o nome
        scanf("%d", &alunos[i].idade);       // lê a idade
        scanf("%s", alunos[i].ra);       // lê o RA
        scanf("%s", alunos[i].email);    // lê o email
        scanf("%f %f %f",
              &alunos[i].prova[0],
              &alunos[i].prova[1],
              &alunos[i].prova[2]);

        // calcula a média das provas do aluno[i]
        alunos[i].media = (alunos[i].prova[0] + alunos[i].prova[1] + alunos[i].prova[2]) / 3;
    }

    // computar a maior nota da P1
    printf("#### Maior Nota da Prova 1 ####\n");

    // computar a maior nota da P2
    printf("#### Maior Nota da Prova 2 ####\n");

    // computar a maior nota da P3
    printf("#### Maior Nota da Prova 3 ####\n");

    // computar aluno com a maior média do curso
    printf("#### Maior Nota da Turma ####\n");

    // computar aluno com a menor média do curso
    printf("#### Menor Nota da Turma ####\n");

    // imprimir os dados de todos os alunos
    for (int i = 0; i < n_alunos; i++) {
        printf("Aluno: [%d]\n", i + 1);
        imprimeAluno(alunos[i]);
        printf("\n");
    }
    

    free(alunos);

    return 0;
}
