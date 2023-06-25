/* Escriba un programa que lea el radio de un c�rculo y que imprima el di�metro, la circunferencia y el �rea de ese
c�rculo. Utilice el valor constante de 3.14159 para . Realice cada uno de estos c�lculos dentro de instrucci�n(es)
printf, y utilice el especificador de conversi�n %f. */

#include<stdio.h>

int main(){
	
	float radio, diametro, circunferencia, area;
	float pi = 3.14159;
	
	printf("Ingrese el radio del circulo: ");
	scanf("%f", &radio);
	
	printf("La circunferencia es: %.2f\n", circunferencia = 2 * pi * radio);
	printf("El diametro es: %.2f\n", diametro = circunferencia / pi);
	printf("El area es: %.2f\n", area = pi * radio * radio);
	
	
	
	
	
	
	return 0;
}
