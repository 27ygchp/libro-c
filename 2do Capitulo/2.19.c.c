/*  Escriba un programa que introduzca tres diferentes enteros desde el teclado, despu�s que imprima la suma, el
promedio, el producto, el n�mero m�s peque�o y el m�s grande de �stos.  */

#include<stdio.h>

int main(){
	
	int entero1, entero2, entero3;
	int suma, promedio, producto;
	int numeroPequeno;
	int numeroGrande;
	
	printf("Ingrese tres enteros: ");
	scanf("%d %d %d", &entero1, &entero2, &entero3);
	
	suma = entero1 + entero2 + entero3;
	printf("La suma es: %d\n", suma);
	
	promedio = suma / 3;
	printf("El promedio es: %d\n", promedio);
	
	producto = entero1 * entero2 * entero3;
	printf("El producto es: %d\n", producto);
	
	numeroGrande = entero1;
	numeroPequeno = entero1;
	
	if( entero2 > numeroGrande ){
		numeroGrande = entero2;
	}
	
	if( entero2 < numeroPequeno ){
		numeroPequeno = entero2;
	}
	
	if( entero3 > numeroGrande ){
		numeroGrande = entero3;
	}
	
	if( entero3 < numeroPequeno ){
		numeroPequeno = entero3;
	}
	
	printf("El numero mas grande es %d \n", numeroGrande); 
	printf("El numero mas peque�o es %d\n", numeroPequeno);

	return 0;
}

