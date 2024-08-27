#include <stdio.h>

int main() {
    
	//	2 - Crie um programa que some dois números.
	int num1, num2, soma;
	printf("Programa 2: \n\n");
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2);
	soma = num1 + num2;
	printf("\nA soma dos dois números = %d\n", soma);
       
    return 0;
}
