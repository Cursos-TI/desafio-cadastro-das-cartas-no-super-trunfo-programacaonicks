#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;

    //operadores aritmeticos;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b;

    //operadores de atribuicao
    a += 2; // a sera 12;
    b *= 3; // b sera 15;

    //operadores de incremento e decremento
    a++; //a sera 13;
    b--; //b sera 14;

    //exibicao dos dados
    printf("soma: %d\n", soma);
    printf("subtracao: %d\n", subtracao);
    printf("multiplicacao: %d\n", multiplicacao);
    printf("divisao: %d\n", divisao);
    printf("novo valor de a (apos += 2 e --): %d\n", a);
    printf("novo valor de b (apos *= 3 e --): %d\n", b);

    return 0;
}