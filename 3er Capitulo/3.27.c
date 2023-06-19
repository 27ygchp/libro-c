/* Mediante un método similar al del ejercicio 3.24, encuentre los dos valores más grandes de los 10 números. 
[Nota: Debe introducir un número a la vez.]*/

#include<stdio.h>

int main(){

int numero1, numero2, numero; 
int contador = 1, mayor = 0; 

while (contador <= 10)
{
    printf("Introduzca 10 numeros: "); 
    scanf("%d", &numero); 

    
    if( numero1 > mayor){
        numero1 = mayor;
    } 

    if (numero2 > mayor )
    {
       numero2 = mayor;  
    }
    
    contador++; 
}

    printf("Los dos numeros mayores son: %d y %d", mayor); 
    return 0; 
}