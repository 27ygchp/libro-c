/* Mediante un método similar al del ejercicio 3.24, encuentre los dos valores más grandes de los 10 números.
[Nota: Debe introducir un número a la vez.]*/

#include<stdio.h>

int main(){

int mayor1 = 0, mayor2 = 0, numero = 0;
int contador = 0;

while (contador < 10)
{
    printf("Introduzca 10 numeros: "); // Mejorar este mensaje Ej: Introduzca un numero (1/10)
    scanf("%d", &numero);


    if( numero > mayor1){
        mayor2 = mayor1;
        mayor1 = numero;
    }

     else if (numero > mayor2 )
    {
       	mayor2 = numero;
    }

    contador++;
}

    printf("Los dos numeros mayores son: %d y %d", mayor1, mayor2);
    return 0;
}
