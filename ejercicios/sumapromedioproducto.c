/* 
Escriba un programa que introduzca tres diferentes enteros desde el teclado, despu�s que imprima la suma, el
promedio, el producto, el n�mero m�s peque�o y el m�s grande de �stos. 
*/

#include<stdio.h>

int main(){

    int numero, suma = 0, promedio = 0, producto = 1, contador; 

    for( contador = 1; contador <= 3; contador++){

        printf("Ingrese el numero %d: ", contador); 
        scanf("%d", &numero); 

        suma += numero; 
        promedio = suma / 3; 
        producto *= numero; 
  
    }

        printf("La suma es: %d\n", suma); 
        printf("El promedio es: %d\n", promedio); 
        printf("El producto es: %d\n", producto); 


    return 0; 
}