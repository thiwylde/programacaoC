#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
    

    printf("**** Programa de cálculo de média.****\n");
    printf("Insira a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Insira a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Insira a terceira nota:\n");
    scanf("%f", &nota3);

    float media = (float) (nota1 + nota2 + nota3) / 3;

    printf("A média do aluno é: %.2f\n", media);

    return 0;

}