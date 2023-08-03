#include<stdio.h>

int main(){

    int numero1, numero2, numero3, numeroGrande, numeroPequeno, contador; 

    printf("Ingrese tres enteros: "); 
    scanf("%d %d %d", &numero1, &numero2, &numero3); 

    

    for( contador = 1; contador <= 3; contador++){

        numeroGrande = numero1; 
        numeroPequeno = numero1; 

        if(numeroGrande < numero2){
            numeroGrande = numero2; 
        } 

        if(numeroGrande < numero3){
            numeroGrande = numero3; 
        }
        // numero pequeño

        if (numeroPequeno > numero2){
            numeroPequeno = numero2; 
        }

        if (numeroPequeno > numero3){
            numeroPequeno = numero3; 
        }
        
    }

    printf("El numero mayor es: %d", numeroGrande); 
    printf("El numero menor es: %d", numeroPequeno); 


    return 0; 
}