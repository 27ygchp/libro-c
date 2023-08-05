/*
Escriba un programa que encuentre el menor de varios enteros. Suponga que el
primer valor a leer especifica el número de valores restantes. 
*/

#include<stdio.h>

int main(){

    int numero, contador, numeroMenor, cantidadNumero; 

printf("Ingrese la cantidad de numeros que desea: ");
scanf("%d", &cantidadNumero); 

printf("Ingrese el entero 1: "); 
scanf("%d", &numeroMenor); 

for(contador = 1; contador < cantidadNumero; contador++){

    printf("Ingrese el numero %d: ", contador + 1);
    scanf("%d", &numero); 

    if(numero < numeroMenor){
        
        numeroMenor = numero; 
    }

}
    printf("El numero menor es: %d", numeroMenor); 

    return 0; 
}