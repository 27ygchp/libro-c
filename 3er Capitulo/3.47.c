/* 
Escriba un programa que lea un entero positivo y que calcule y despliegue su factorial. 
*/
#include<stdio.h>

int main(){
	
	int contador, factorial = 1, numero; 
	
	printf("\nIngrese un numero para hallar un factorial: "); 
	scanf("%d", &numero); 
	
	for(contador = 1; contador <= numero; contador++){
		
		factorial *= contador; 
		
	}
	
	printf("El factorial es: %d\n", factorial); 
	
	return 0; 
}