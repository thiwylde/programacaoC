#include <stdio.h>

/*
int main() {

    int numero1, numero2;

    numero1 = 20;
    numero2 = 30;


    if (numero1 > numero1) {
        printf("Numero 1 é maior que número2\n");   
    }else {
        printf("Núemro 2 é maior que número1\n");
    }
    
}

*/

int main() {
    int numero = 5;

    int resultado = numero % 2;

    if(resultado == 0){
        printf("O número é par!\n");
    }else {
        printf("O número é ímpar!\n");
    }

}