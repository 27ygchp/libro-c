/*
Escriba un programa que calcule e imprima el producto de los enteros nones del 1 al 15 
*/ 
#include<stdio.h>

int main(){

int producto = 1, contador; 

for( contador = 1; contador <= 15; contador += 2){

    producto *= contador; 

}

printf("El producto es: %d", producto); 

    return 0; 
}