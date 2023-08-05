/*
Escriba un programa que calcule e imprima la suma de los enteros pares del 2 al 30. 
*/ 

#include<stdio.h>

int main(){

int suma = 0, contador; 

for ( contador = 2; contador <= 30; contador += 2) {

    suma += contador; 
}

    printf("La suma de los numeros pares es: %d", suma); 


    return 0; 
}