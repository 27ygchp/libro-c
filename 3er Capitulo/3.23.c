/*Escriba un programa que utilice un ciclo para imprimir los números 1 a 10 dentro de la misma línea, 
separados cada uno por tres espacios en blanco */

#include<stdio.h>

int main(){


int contador = 1; 

while (contador <= 10)
{
    printf("%d   ", contador++);
}

    return 0; 
}