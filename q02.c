#include <stdio.h>
#include <stdlib.h>


int main() {
    float real = 14.00;
    printf("Valor em real: R$ %.2f", real);
    float dolar = 5.16;
    printf("\nCotacao em Dolar: R$ %.2f ", dolar);
    printf("\nO valor de real em dolares e = R$ %.2f", real*dolar);
    printf("\n\n");
    system("pause");
    return 0;
}