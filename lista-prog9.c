#include <stdio.h>

int main() {
    // 8 - Crie um programa que solicita o ano de nascimento do usuário e informe a sua idade
    
    int ano, idade;

    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano);
    
    idade = 2024 - ano;

    printf("Você tem %d anos.", idade);
    return 0;
}
