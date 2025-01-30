#include <stdio.h>

int main() {
    int numeroNormal1 = 2147483647;
    long int numeroGrande = 2147483647;

    printf("Numero regular (int): %d\n", numeroNormal1);
    printf("Numero grande (long int): %ld\n", numeroGrande);

   numeroGrande = 2147483648;
    printf("Número grande atualizado (long int): %ld\n", numeroGrande);

    return 0;

}