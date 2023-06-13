/* El interés simple para un préstamo se calcula mediante la fórmula:
interés = préstamo * tasa * días / 365;
La fórmula anterior asume que tasa es la tasa de interés anual, y por lo tanto incluye la división 
entre 365 (días). Desarrolle un programa que introduzca préstamo, tasa y días para varios préstamos, 
y que calcule y despliegue el interés simple para cada préstamo, utilizando la fórmula anterior */

#include<stdio.h>


int main(){

float prestamo, tasa, interes; 
int dias; 


printf("\nIntroduzca el monto del prestamo, (-1 para terminar): ");
scanf("%f", &prestamo); 

while (prestamo != -1)
{
    printf("\nIntroduzca la tasa de interes: ");
    scanf("%f", &tasa);

    printf("\nIntroduzca el periodo del prestamo en dias: ");
    scanf("%d", &dias); 

    interes = prestamo * tasa * dias / 365;

    printf("El monto del interes es: %.2f\n\n", interes); 

    printf("\nIntroduzca el monto del prestamo, (-1 para terminar): ");
    scanf("%f", &prestamo);
}

    return 0;
}