/* Escriba un programa que pida al usuario escribir dos números, que obtenga los dos números por parte del usuario,
y que imprime la suma, el producto, la diferencia, el cociente y el residuo de los dos números. */

#include<stdio.h>
#include<stdlib.h>

int main(){

int entero1, entero2;
int suma;
int producto; 
int diferencia; 
int cociente;
int residuo;

printf("Ingrese dos enteros: ");
scanf(" %d %d", &entero1, &entero2);
system("pause");
suma = entero1 + entero2;
producto = entero1 * entero2;
diferencia = entero1 - entero2;
cociente = entero1 / entero2;
residuo = entero1 % entero2;

printf("La suma es: %d\n", suma);
printf("El producto es: %d\n", producto);
printf("La diferencia: %d\n", diferencia);
printf("El cociente es: %d\n", cociente);
printf("El residuo es: %d\n", residuo);

 system("pause");

    return 0;
}