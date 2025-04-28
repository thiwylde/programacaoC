#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome[20];
    // sintaxe scanf
    // scanf("formato1" "formato2, &variavel1, variavel2, ...";)

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n", altura);

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("O seu nome é: %s\n", nome);

    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.

    */

}

