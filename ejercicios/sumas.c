/*  escribir un programa que lea del usuario la cantidad de numeros que quiere sumar
luego le pida q introduzca esos n numeros y le muestre al final la suma de esos n numeros */

#include<stdio.h>

int main(){

    int resultado = 0;
    int suma;
    int numeros;
    int contador = 0;

    printf("Ingrese la cantida de numeros que desea sumar: ");
    scanf("%d", &numeros);

    while (contador != numeros)
    {
        printf("Ingrese el numero %d ",contador + 1);
        scanf("%d", &suma);
        contador++;

        resultado += suma;
    }

    printf("El resultado de la suma es: %d", resultado);









    return 0;
}
