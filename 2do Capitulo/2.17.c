/* Escriba un programa que imprima los números del 1 al 4 en la misma línea. Escriba el programa utilizando los siguientes
métodos:
a) Mediante una instrucción printf sin especificadores de conversión.
b) Mediante una instrucción printf con cuatro especificadores de conversión.
c) Mediante cuatro instrucciones printf.*/

#include<stdio.h>

int main(){

int a = 1, b = 2, c = 3, d = 4;

printf("1 2 3 4 5\n");
printf(" %d %d %d %d\n", a, b, c, d);
printf("1");
printf("2");
printf("3");
printf("4\n");
    return 0;
}