// Escriba un programa que lea cinco enteros y que después imprima el número más grande y el más pequeño del grupo.

#include<stdio.h>

int main(){
	
	int numero1, numero2, numero3, numero4, numero5;
	int grande, pequeno;
	
	printf("Ingrese cinco enteros diferentes: ");
	scanf("%d %d %d %d %d", &numero1, &numero2, &numero3, &numero4, &numero5);
	
	grande = numero1;
	pequeno = numero1;
	
	if( numero2 > grande ){
		grande = numero2;
	}
	
	if( numero2 < pequeno ){
		pequeno = numero2;
	}
	
	if( numero3 > grande ){
		grande = numero3;
	}
	
	if( numero3 < pequeno ){
		pequeno = numero3;
	}
	
	if( numero4 > grande ){
		grande = numero4;
	}
	
	if( numero4 < pequeno ){
		pequeno = numero4;
	}
	
	if( numero5 > grande ){
		grande = numero5;
	}
	
	if( numero5 < pequeno ){
		pequeno = numero5;
	}
	
	printf("El numero mas grande es: %d\n", grande);
	printf("El numero mas pequeño es: %d\n", pequeno);
	
	return 0; 
}
