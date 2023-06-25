// Escriba un programa que lea dos enteros y que determine e imprima si el primero es múltiplo del segundo. 

#include<stdio.h>

int main(){
	
	int entero1, entero2;
	
	printf("Ingrese dos enteros: ");
	scanf("%d %d", &entero1, &entero2);
	
	if( entero1 % entero2 == 0){
		printf("%d es multiplo de %d", entero1, entero2);
	}
	
	
	
	
	return 0;
}
