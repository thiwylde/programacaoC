#include <stdio.h>

/*
int main(){ 
    int a = 10;
    int b =3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; //Note que a divisão de inteiros resulta em um número inteiro

    printf("Soma: %d\n", soma);
    printf("Diferença: %d\n", diferenca);
    printf("Produto: %d\n", produto);
    printf("Divisão: %d\n", quociente);

    return 0;
}
*/

/*
int main(){
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y;

    printf("A soma é: %.2f\n", soma);
    printf("A subtração é: %.2f\n", diferenca);
    printf("O produto é: %.2f\n", produto);
    printf("O quociente é: %.2f\n", quociente);
}
*/

/*
int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);
}

int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);
}

*/

int main(){
    int a = 10;
    float b = 3;
    float quociente = (float) a / b; // 'a' é convertido implicitamente para float

    printf("Resultado: %.2f\n", quociente);

    return 0;
}