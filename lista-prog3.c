#include <stdio.h>

int main() {
    
	//	3 - Crie um programa que some dois números inteiros e um número real.
	int num1, num2;
	float num3, soma;
	printf("Programa 3: \n");
	printf("\nDigite o primeiro número: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo número: ");
	scanf("%d", &num2);
	printf("\nDigite o terceiro número: ");
	scanf("%f", &num3);
	soma = num1 + num2 + num3;
	printf("\nA soma dos tres números = %.2f\n", soma);
       
    return 0;
}
