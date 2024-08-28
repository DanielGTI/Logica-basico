#include <stdio.h>

int main() {
    
    //  5 - Crie um programa que solicite duas notas do aluno, calcule a média e informe 
    //  se o aluno está "aprovado" ou "reprovado" (média 6.0)
    
    float av1, av2, media;

    printf("\nDigite a av1: ");
    scanf("%f", &av1);
    
    printf("\nDigite a av2: ");
    scanf("%f", &av2);

    media = (av1 + av2)/2;

    printf("\nMedia = %.2f", media);

    if( media >= 6 ){
        printf("\nAprovado");
    }else{
        printf("\nReprovado");
    }
    
    return 0;
}
