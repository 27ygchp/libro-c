/*Formule un algoritmo en pseudocódigo para cada una de las siguientes:
a) Obtenga dos números desde el teclado, calcule la suma de los números y despliegue el resultado.
b) Obtenga dos números desde el teclado, y determine y despliegue cuál (si existe) es el mayor de los dos.
c) Obtenga una serie de números positivos desde el teclado, y determine y despliegue la suma de los números.
Asuma que el usuario introduce un valor centinela -1 para indicar el “fin de la entrada de datos” */

#include<stdio.h>

int main() {

int numero1, numero2, suma;

printf("Ingrese dos numeros: ");
scanf("%d %d", &numero1, &numero2);

printf("La suma es: %d\n", suma = numero1 + numero2);

int entero1, entero2, mayor; 

printf("Ingrese dos enteros: ");
scanf("%d %d ", &entero1, &entero2);

mayor = entero1;

if( entero2 > mayor){
    mayor = entero2;
}

printf("%d es mayor", mayor);

int numerosPositivos = 0, numerosSuma; 

printf("Ingrese los numeros que desea sumar: ");
scanf("%d", &numerosSuma);

while (numerosSuma != -1)
{
    numerosSuma += numerosPositivos;

    printf("La suma de los numeros positivos es: %d ", numerosSuma);

    printf("Ingrese los numeros que desea sumar: ");
    scanf("%d", &numerosSuma);    
}

    return 0;
}