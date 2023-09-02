#include<stdio.h>

int cuadrado (int y); 

int main(){

    int x; 

    for(x = 1; x <= 10; x++){

        printf("%d", cuadrado(x));
    }

    printf("\n"); 

    return 0; 
    
}

    int cuadrado(int y) {

        return y * y;
    }

      
