/*
Escriba un programa que sume una secuencia de enteros. Asuma que el primer entero leído mediante 
scanf especifica el número de valores restantes que se introducirán. Su programa debe leer 
únicamente un valor cada vez que se ejecuta scanf. Una secuencia de entrada típica podría ser
5 100 200 300 400 500  
*/ 

#include<stdio.h>

int main(){

int numeroSuma, numeros, suma = 0, contador; 

    printf("Ingrese la cantidad de numeros que desea sumar: "); 
    scanf("%d", &numeroSuma); 

for( contador = 1; contador <= numeroSuma; contador++){

    printf("Ingrese el numero %d que desea sumar: ", contador); 
    scanf("%d", &numeros); 

    suma += numeros; 

}

    printf("La suma de los numeros es: %d", suma); 


    return 0; 
}