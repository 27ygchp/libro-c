// Escriba un programa que lea un entero y que determine e imprima si es par o impar.
#include<stdio.h>
int main(){
	
	int numero;
	
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	if( numero % 2 == 0){
		printf("El numero es par", numero);
	} 

	return 0;
}
