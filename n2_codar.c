#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("A aluno %s tem %d anos, mede %f e esta matriculado sob o código: %d\n", nome, idade, altura, matricula);
    
}