/* 
Escriba un programa que lea una serie de pares de números de la siguiente manera:
a) Número de producto.
b) Cantidad vendida durante el día.
Su programa debe utilizar una instrucción switch para ayudar a determinar el precio de lista de cada producto.
Su programa debe calcular y desplegar el valor total de venta de todos los productos vendidos la semana pasada.
*/

#include<stdio.h>

int main(){

    int producto; 
    int cantidad_vendida; 
    float precio; 
    float ventas = 0; 

    printf("Ingrese el numero del producto y la cantidad vendidad durante el dia (Separados por un espacio): "); 
    scanf("%d %d", &producto, &cantidad_vendida);

    switch (producto){
    case 1: 
        precio = 2.98;
        break;
    case 2: 
        precio = 4.50;
        break;
    case 3: 
        precio = 9.98;
        break;
    case 4: 
        precio = 4.49; 
        break; 
    case 5: 
        precio = 6.87; 
        break; 
    default: 

        printf("Ingrese un numero valido.\n"); 
        break;
     
}
        ventas = precio * cantidad_vendida; 
        printf("El precio de este producto es de: %.2f\n", precio); 
        printf("La cantidad vendida de este producto la semana pasada es de: %.2f\n", ventas);
        

    return 0; 
}