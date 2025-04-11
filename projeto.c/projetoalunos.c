#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define ARQUIVO "alunos.txt"

typedef struct {
    int matricula;
    char nome[100];
    int idade;
    char curso[100];
    float media;
} Aluno;

Aluno alunos[MAX];
int totalAlunos = 0;


void salvarEmArquivo() {
    FILE *fp = fopen(ARQUIVO, "w");
    if (fp == NULL) {
        printf("Erro ao salvar o arquivo.\n");
        return;
    }
    for (int i = 0; i < totalAlunos; i++) {
        fprintf(fp, "%d|%s|%d|%s|%.2f\n",
                alunos[i].matricula,
                alunos[i].nome,
                alunos[i].idade,
                alunos[i].curso,
                alunos[i].media);
    }
    fclose(fp);
}


void carregarDoArquivo() {
    FILE *fp = fopen(ARQUIVO, "r");
    if (fp == NULL) return;

    while (fscanf(fp, "%d|%[^|]|%d|%[^|]|%f\n",
                  &alunos[totalAlunos].matricula,
                  alunos[totalAlunos].nome,
                  &alunos[totalAlunos].idade,
                  alunos[totalAlunos].curso,
                  &alunos[totalAlunos].media) == 5) {
        totalAlunos++;
    }
    fclose(fp);
}

void cadastrarAluno() {
    if (totalAlunos >= MAX) {
        printf("Limite de alunos atingido.\n");
        return;
    }

    Aluno a;
    printf("Matricula: ");
    scanf("%d", &a.matricula);
    printf("Nome: ");
    getchar();
    fgets(a.nome, sizeof(a.nome), stdin);
    a.nome[strcspn(a.nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &a.idade);
    printf("Curso: ");
    getchar();
    fgets(a.curso, sizeof(a.curso), stdin);
    a.curso[strcspn(a.curso, "\n")] = '\0';

    printf("Media: ");
    scanf("%f", &a.media);

    alunos[totalAlunos++] = a;
    printf("Aluno cadastrado com sucesso!\n");
}

void listarAlunos() {
    for (int i = 0; i < totalAlunos; i++) {
        printf("\nMatricula: %d\n Nome: %s\n Idade: %d\n Curso: %s\n Media: %.2f\n",
               alunos[i].matricula, alunos[i].nome, alunos[i].idade,
               alunos[i].curso, alunos[i].media);
    }
    if (totalAlunos == 0) {
        printf("Nenhum aluno cadastrado.\n");
    }
}

void buscarAluno() {
    int mat;
    printf("Digite a matricula: ");
    scanf("%d", &mat);
    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].matricula == mat) {
            printf("\nMatricula: %d\n Nome: %s\nI dade: %d\n Curso: %s\n Media: %.2f\n",
                   alunos[i].matricula, alunos[i].nome, alunos[i].idade,
                   alunos[i].curso, alunos[i].media);
            return;
        }
    }
    printf("Aluno nao encontrado.\n");
}

void atualizarAluno() {
    int mat;
    printf("Digite a matricula do aluno a atualizar: ");
    scanf("%d", &mat);
    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].matricula == mat) {
            printf("Novo nome: ");
            getchar();
            fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
            alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

            printf("Nova idade: ");
            scanf("%d", &alunos[i].idade);

            printf("Novo curso: ");
            getchar();
            fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
            alunos[i].curso[strcspn(alunos[i].curso, "\n")] = '\0';

            printf("Nova media: ");
            scanf("%f", &alunos[i].media);

            printf("Aluno atualizado com sucesso!\n");
            return;
        }
    }
    printf("Aluno nao encontrado.\n");
}

void removerAluno() {
    int mat;
    printf("Digite a matricula do aluno a remover: ");
    scanf("%d", &mat);
    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].matricula == mat) {
            for (int j = i; j < totalAlunos - 1; j++) {
                alunos[j] = alunos[j + 1];
            }
            totalAlunos--;
            printf("Aluno removido com sucesso!\n");
            return;
        }
    }
    printf("Aluno nao encontrado.\n");
}

void menu() {
    int opcao;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Cadastrar aluno\n");
        printf("2. Listar alunos\n");
        printf("3. Buscar aluno por matricula\n");
        printf("4. Atualizar aluno\n");
        printf("5. Remover aluno\n");
        printf("6. Salvar e sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarAluno(); break;
            case 2: listarAlunos(); break;
            case 3: buscarAluno(); break;
            case 4: atualizarAluno(); break;
            case 5: removerAluno(); break;
            case 6:
                salvarEmArquivo();
                printf("Dados salvos. Encerrando o programa.\n");
                break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 6);
}

int main() {
    carregarDoArquivo();
    menu();
    return 0;
}
