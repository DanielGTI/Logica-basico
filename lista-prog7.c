#include <stdio.h>

int main() {
    //  7 - Crie um programa que solicita um número e informa se ele é positivo ou negativo.

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if( numero > 0 ){
        printf("Positivo");
    }else
        if( numero < 0 ){
            printf("Negativo");
        }else{
            printf("Nulo");
        }

    return 0;
}
