#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float nota;

    printf("=== SISTEMA DE CADASTRO DE ALUNOS ===\n\n");

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    printf("\n=== DADOS DO ALUNO ===\n");
    printf("Nome: %s", nome);
    printf("Idade: %d anos\n", idade);
    printf("Nota: %.2f\n", nota);

    printf("Cadastro realizado com sucesso!\n");
    
    return 0;
}
