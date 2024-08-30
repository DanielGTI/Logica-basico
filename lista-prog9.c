#include <stdio.h>

int main() {
    // 9 - Crie um programa que solicita a sua idade e informe o seu ano de nascimento.
    
    int ano, idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    
    ano = 2024 - idade;

    printf("Você nasceu em %d.", ano);
    return 0;
}
