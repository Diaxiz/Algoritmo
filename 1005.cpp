#include<stdio.h>

int main (){
	double a, b, c;
	printf("Calculando media\n");
	printf("Digite o primeiro numero: ");
	scanf("%lf", &a);
	printf("Digite o segundo numero: ");
	scanf("%lf", &b);
	c = ((a * 3.5) + (b * 7.5))/11;
	printf("A media foi: %lf", c);
		
}
