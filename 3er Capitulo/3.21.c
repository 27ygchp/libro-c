/* Desarrolle un programa que determine el pago bruto de cada uno de los empleados.
 Esta empresa paga “horas completas” por las primeras 40 horas trabajadas por cada 
 empleado y paga “hora y media” por todas las horas extras trabajadas después de las 40. 
 Usted tiene una lista de los empleados de la empresa, el número de horas que trabajó 
 cada empleado la semana pasada y el pago por hora de cada empleado. Su programa deberá 
 introducir esta información para cada empleado, y deberá determinar y desplegar el pago bruto por empleado.*/

#include<stdio.h>

int main(){

float pagoBruto;   
float horasTrabajadas; 
float pagoPorHora; 
int horas = 40; 

printf("Introduzca el numero de horas trabajadas (-1 para terminar): ");
scanf("%f", &horasTrabajadas);

while (horasTrabajadas != -1)
{
    printf("\nIntroduzca el pago por hora: ");
    scanf("%f",&pagoPorHora); 
    
    
    if (horasTrabajadas <= horas)
    {
        pagoBruto = horasTrabajadas * pagoPorHora;
        printf("\nEl salario es: %.3f\n", pagoBruto);

    } else if ( horasTrabajadas > horas ){

        pagoBruto = (horas * pagoPorHora) + ((horasTrabajadas - horas) * (pagoPorHora * 1.5)); 
        printf("\nEl salario es: %.3f\n\n", pagoBruto); 

    } 
    printf("\nIntroduzca el numero de horas trabajadas (-1 para terminar): ");
    scanf("%f", &horasTrabajadas);
    
} 

    return 0;
}