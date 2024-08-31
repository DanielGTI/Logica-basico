#include <stdio.h>

int main() {
    // 10 - Crie um programa que solicita um valor ao usuário (idade ou ano de nascimento) e 
    // informe a sua idade ou a sua data de nascimento.

    
    int ano_atual, idade, idade_max, valor;
    ano_atual = 2024;
    idade_max = 150;  // Considerando a idade máxima de 150 anos.
    
    printf("Digite a sua idade ou ano de nascimento: \n");
    scanf("%d", &valor);

    // Alternativa Simples
    // printf("%d\n", ano_atual - valor);

    
    if( valor <= idade_max ){ 
        printf("Você nasceu em: %d\n", ano_atual - valor);        
    }else
        if( valor >= (ano_atual - idade_max) ){
            printf("A sua idade é de: %d\n", ano_atual - valor);
        }else{
            printf("Valor inválido\n");
        }
    
    return 0;
}
