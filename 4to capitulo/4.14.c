/*
Escriba un programa que evalúe los factoriales de los enteros de 1 a 5. Imprima los resultados de manera tabular 
*/ 

#include<stdio.h>

int main(){

int factorial = 1, contador; 
	
	printf("N\tFactorial\n"); 
	
for(contador = 1; contador <= 5; contador++ ){

    factorial *= contador;
    
	printf("\n%d\t%d\n", contador, factorial); 
} 

	
    return 0;
}