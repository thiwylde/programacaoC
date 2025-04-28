#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Qual o valor do estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 28.0) {
        printf("Esta calor!\n");
    }else{
        printf("A temperatura esta agradável!\n");
    }

    if (umidade > 20.0){
        printf("A umidade esta alta!\n");
    }else{
        printf("A umidade esta baixa!\n");
    }

    if (estoque > 100){
        printf("O estoque esta adequado!\n");
    }else{
        printf("O estoque esta baixo!\n");
    }

}