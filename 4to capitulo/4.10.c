/*
Escriba un programa que calcule e imprima el promedio de varios enteros. Suponga que el último valor que lee la
instrucción scanf es el centinela 9999. Una secuencia de entrada típica podría ser
10 8 11 7 9 9999  
*/

#include<stdio.h>

int main(){

int numero, contador = 0, suma = 0; 
float promedio = 0; 

	printf("\nIngrese un entero o 9999 para finalizar: "); 
	scanf("%d", &numero); 
	
while(numero != 9999){
	
	suma += numero; 
	contador++; 
	
	printf("\nIngrese otro entero o 9999 para finalizar: "); 
	scanf("%d", &numero); 
	
}
   
 if(contador != 0){
 	
 	promedio = (float) suma / contador; 
 	
 } else{
 	printf("No se introducieron numeros\n."); 
 }   
 
 	printf("El promedio es: %.2f", promedio); 

    return 0; 
}