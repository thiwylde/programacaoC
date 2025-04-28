#include <stdio.h>


int main(){
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Entre o primeiro número: \n");
    scanf("%d", &numero1);
    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    subtracao = numero1 - numero2;

    multiplicacao = numero1 * numero2;

    divisao = numero1 / numero2;

    int resultado = 10;



    printf("A soma é: %d\n", soma);
    printf("A subtração é: %d\n", subtracao);
    printf("A multiplicação é: %d\n", multiplicacao);
    printf("A divisão é: %d\n", divisao);

    resultado += multiplicacao;
    printf("O resultado mais a multplicação é igual a: %d\n", resultado);
    int numero3 = 1;
    numero3++;
    printf("Após o incremento o resultado é: %d\n", numero3);




}