#include <stdio.h>

int main() {
    /*
    Atribuicao simples (=)
    Atricuicao com soma (+=)
    Atribuicao com subtracao (-=)
    Atribuicao com multiplicacao (*=)
    Atribuicao com divsao (/=)
    */

   int numero1 = 10, numero2, resultado;

   resultado = 10;
   printf("Resultado: %d\n", resultado);

    //resultado = resultado + 20;
   resultado += 20;
   printf("Resultado: %d\n", resultado);
   
   //resultado = resultado - numero1;
    resultado -= numero1;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado * 5;
    resultado *= 5;
    printf("Resultado: %d\n", resultado);

    //resultado = resultado / 2;
    resultado /= 2;
    printf("Resultado: %d\n", resultado);





}