#include <stdio.h>

int main() {
    // 6 - Crie um programa que solicite 3 notas do aluno (Av1, Av2, Av3), descarte a menor nota e 
    // exiba a média do aluno, informando se o mesmo foi aprovado ou não.

    float av1, av2, av3, media, menor;

    printf("\nDigite a av1: ");
    scanf("%f", &av1);
    
    printf("\nDigite a av2: ");
    scanf("%f", &av2);

    printf("\nDigite a av3: ");
    scanf("%f", &av3);

    if( av1 < av2 && av1 < av3 ){
        menor = av1;
        //  media = (av2 + av3) / 2; 
    }
    else
        if( av2 < av1 && av2 < av3 ){
            menor = av2;
            //  media = (av1 + av3) / 2;
        }else{
            menor = av3;
            //  media = (av1 + av2) / 2;
        }

    media = (av1 + av2 + av3 - menor) / 2;
    printf("\nMedia = %.2f", media);

    if( media >= 6 ){
        printf("\nAprovado");
    }else{
        printf("\nReprovado");
    }
    
    return 0;
}
