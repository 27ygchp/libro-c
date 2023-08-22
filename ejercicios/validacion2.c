/*
Escribir un programa que le indique al usuario que ingrese un numero entre el 3 y el 70
y si el usuarion introduce un numero fuera del rango diga que introduzca un valor correcto
y muestre nuevamente el mensaje. y si introduce el numero dentro del rango debe decir que
numero introducio y salir del programa.
*/

#include<stdio.h>

int main(){

int numero;

        do {
            printf("Ingrese un numero entre 3 y 70: ");
            scanf("%d", &numero);

            if(numero < 3 || numero > 70) {

                printf("Ingrese un numero valido. \n\n");

            }

        } while (numero < 3 || numero > 70);

            printf("\nEl numero que ingreso fue: %d\n", numero);







    return 0;
}
