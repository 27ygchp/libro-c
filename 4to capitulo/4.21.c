/*
Rescriba el programa de la figura 4.2 de manera que la inicialización de la variable contador se haga en 
la declaración, en lugar de hacerlo en la instrucción for.
*/

#include<stdio.h>

int main(){
	
	int contador = 1; 
	
	for(contador; contador <= 10; contador++){
		printf("%d\n", contador); 
	}
	
	return 0;
}