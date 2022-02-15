#include <stdio.h>

int main(){
	double a, b, c, d;
	printf("Calculando media 2 \n");
	printf("Digite o primeiro numero: ");
	scanf ("%lf", &a);
	printf ("Digite o segundo numero: ");
	scanf("%lf", &b);
	printf ("Digite o terceiro numero: ");
	scanf("%lf", &c);
	d = ((a * 2) + (b * 3) + (c * 5)) /10;
	printf ("A Media foi %lf", d);
	
}
