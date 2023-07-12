/* Escriba un programa que lea el radio de un círculo (como un valor float) y que calcule y 
despliegue el diámetro, la circunferencia y el área. Utilice el valor 3.14159 para π*/

#include<stdio.h>


int main(){

float radio, diametro = 1, circunferencia = 1, area = 1, pi = 3.14159; 
int contador = 0;

printf("Ingrese el radio del circulo: ");
scanf("%d", &radio); 

while ( contador != 0 )
{
    diametro = circunferencia / pi;
    circunferencia = 2 * pi * radio; 
    area = pi * radio * radio; 

    contador++;  
}

    printf("El diametro del circulo es: %d\n", diametro);
    printf("la circunferencia del circulo es: %d\n", circunferencia);
    printf("El area del circulo es: %d\n", area);

    return 0; 
}