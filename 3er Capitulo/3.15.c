/* Formule un algoritmo en pseudocódigo para cada una de las siguientes:
a) Obtenga dos números desde el teclado, calcule la suma de los números y despliegue el resultado.
b) Obtenga dos números desde el teclado, y determine y despliegue cuál (si existe) es el mayor de los dos.
c) Obtenga una serie de números positivos desde el teclado, y determine y despliegue la suma de los números.
Asuma que el usuario introduce un valor centinela -1 para indicar el “fin de la entrada de datos”. */


#include<stdio.h>

int main(){

int resultado, numero1, numero2; 

printf("Ingrese dos numeros: ");
scanf("%d %d", &numero1, &numero2);

resultado = numero1 + numero2;

printf("El resultado es: %d\n\n", resultado);

int entero1, entero2, mayor;

printf("Ingrese dos numeros: ");
scanf("%d %d", &entero1, &entero2);

mayor = entero1;

if (entero2 > mayor){
    mayor = entero2;
    
    printf("%d es mayor\n\n", mayor);
    
} else {
    printf("Los numeros son iguales\n\n");
} 

int NumerosPositivos = 0, SumaNumeros;

printf("Ingrese los numeros que desea sumar (-1 para terminar): ");
scanf("%d", &SumaNumeros);

while (SumaNumeros != -1)
{
    NumerosPositivos += SumaNumeros;
    printf("Ingrese los numeros que desea sumar (-1 para terminar): ");
    scanf("%d", &SumaNumeros);
}
    printf("La suma de los numeros es: %d\n\n", NumerosPositivos);
    return 0;
}