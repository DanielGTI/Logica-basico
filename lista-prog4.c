#include <stdio.h>

int main() {
    
    //  4 - Crie um programa que solicite duas notas e calcule a média do aluno.
    float av1, av2, media;

    printf("\nDigite a av1: ");
    scanf("%f", &av1);
    
    printf("\nDigite a av2: ");
    scanf("%f", &av2);

    media = (av1 + av2)/2;

    printf("\nMedia = %.2f\n", media);
    
    return 0;
}
