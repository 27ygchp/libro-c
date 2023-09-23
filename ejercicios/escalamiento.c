// Escalamiento y cambio de enteros producidos por 1 + rand() % 6

#include<stdio.h>
#include<stdlib.h>

int main(){

    int contador; 

    for ( contador = 1; contador <= 20; contador++){
        
        printf("%10d", 1 + (rand() % 6)); 

        if( contador % 5 == 0){

            printf("\n"); 
        }
    }
    
    return 0; 
}