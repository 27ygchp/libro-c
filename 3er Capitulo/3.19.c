/* una gran empresa de productos químicos le paga a sus vendedores mediante un esquema de comisiones. 
Los vendedores reciben $200 semanales más el 9% de sus ventas totales durante la semana. Por ejemplo, 
un vendedor que vende $5000 de productos químicos durante la semana recibe $200 más el 9% de $5000, o 
un total de $650. Desarrolle un programa que introduzca las ventas totales de cada vendedor durante 
la última semana y que calcule y despliegue los ingresos de ese vendedor. Procese las cantidades de un 
vendedor a la vez*/   

#include<stdio.h> 

int main(){

float pagoTotal, pago = 200; 
float comision = 9; 
float ventas; 

printf("Ingrese las ventas totales (-1 para terminar): ");
scanf("%f", &ventas); 

while (ventas != -1)
{
    pagoTotal = (ventas * comision) / 100  + pago; 
    printf("El salario es: $%.3f", pagoTotal); 

    printf("Ingrese las ventas totales (-1 para terminar): ");
    scanf("%f", &ventas);

}

    return 0;
}