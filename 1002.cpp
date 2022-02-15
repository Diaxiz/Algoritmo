#include<stdio.h>

int main(){
	double a, b;
	printf("Calculando area de circulo\n");
	printf("Digite o raio do circulo: ");
	scanf("%lf", &a);
	b = 3.14159 * (a * a);
	printf("O resultado encotrado foi %lf", b);
	
}
