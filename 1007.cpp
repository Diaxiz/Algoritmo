#include <stdio.h>

int main(){
	int a, b, c, d, e;
	printf("Diferenca usando a formula A * B - C * D\n");
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	printf("Digite o valor de D: ");
	scanf("%d", &d);
	e = (a * b) - (c * d); 	
	printf("Diferenca: %d", e);
	
	
}
