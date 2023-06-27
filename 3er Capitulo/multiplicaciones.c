/*  escribir un programa que lea del usuario la cantidad de numeros que quiere numeror
luego le pida q introduzca esos n numeros y le muestre al final la numero de esos n numeros */

#include<stdio.h>

int main(){

    int resultado = 1;
    int numero;
    int cantidadNumeros;
    int contador = 0;

    printf("Ingrese la cantida de numeros que desea multiplicar: ");
    scanf("%d", &cantidadNumeros);

    while (contador != cantidadNumeros)
    {
        printf("Ingrese el numero %d ",contador + 1);
        scanf("%d", &numero);
        contador++;

        resultado *= numero;
    }

    printf("El resultado de la multiplicacion es: %d\n", resultado);

    return 0;
}
