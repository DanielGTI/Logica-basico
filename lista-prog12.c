#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 12 - Criar um programa que solicite o usuário escolher entre par ou ímpar, escolher um
    // número, sortear um valor ao computador e verificar quem ganhou no par ou ímpar.

    int valor, numero, numero_computador, tipo;

    srand(time(NULL));
    printf("Digite 0 para PAR ou 1 para IMPAR: ");
    scanf("%d", &tipo);

    printf("Escolha um numero de 0 a 5: ");
    scanf("%d", &numero);

    numero_computador = rand() % 6;
    valor = numero + numero_computador;
    printf("\nNumero do computador: %d\n", numero_computador);
    
    if( valor % 2 == tipo ){
        printf("Parabéns, você ganhou!!");
    }else{
        printf("Você perdeu.. hahaha!");
    }
   
    return 0;
}
