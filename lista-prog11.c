#include <stdio.h>

int main() {
    // 11 - Criar um programa que solicite um numero do usuário e diga se ele é par ou ímpar.

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if( numero % 2 == 0 ){
        printf("Par\n");
    }else{
        printf("Impar\n");
    }
    return 0;
}
