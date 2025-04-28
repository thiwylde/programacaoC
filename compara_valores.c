#include <stdio.h>

/*
int main() {
    int numero1, numero2;

    numero1 = 10;
    numero2 = 5;

    if (numero1 > numero2) {
        printf("Número1 é maior que número2!\n");
    }
    printf("Fora IF");

}
*/

/*
int main() {
    int idade;

    idade = 18;

    if (idade >= 18) {
        printf("Você é maior de idade");

    }
    
}
*/
/*
int main() {
     float temperatura = 32.0;

     if (temperatura > 30.0) {
        printf("Esta calor!\n");
     }
}
*/

/*
int main() {

    int nota = 65;
    if (nota >= 60) {
        printf("Parabéns você passou de ano!\n");
        
    }
}
*/
/*
int main() {
    int idade1, idade2;

    idade1 = 35;
    idade2 = 30;

    if (idade1 > idade2) {
        printf("A idade 1 é maior que a idade 2!\n");
    
    }
}
*/
/*
int main() {
    int numero = 4, resultado;

    resultado = numero % 2;

    printf("A variável resultado é: %d\n", resultado);

    if(resultado == 0) {
        printf("O número é par!\n");
    }
}
*/

int main() {

    int estoque_minimo = 5, estoque;

    estoque = 3;

    printf("A quantidade atual do estoque é: %d\n", estoque);

    if (estoque_minimo > estoque){
        printf("Estoque abaixo do esperado! Quantidade %d", estoque_minimo - estoque);
    }


}