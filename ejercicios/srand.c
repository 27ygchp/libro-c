// Randomización del programa de dados

#include<stdio.h>
#include<stdlib.h>

int main(){

    int contador; 
    unsigned semilla; 

        printf("Ingrese una semilla: ");
        scanf("%u", &semilla);

        srand(semilla);

    for (contador = 1; contador <= 10; contador++) {

        printf("%10d", 1 + (rand () % 6)); 

        if(contador % 5 == 0){

            printf("\n");

        }

        return 0; 
        
    }
    






    return 0; 
}