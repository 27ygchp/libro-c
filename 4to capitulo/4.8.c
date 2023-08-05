#include<stdio.h>

int main(){

int x,y,j,i; 

printf("Introduzca dos enteros entre 1 y 20: "); 
scanf("%d %d", &x, &y); 

for ( i = 1; i <= y; i++) {
    
    for ( j = 1; j <= x; j++) {
       
       printf("@"); 
    }
    
    printf("\n");

}

    return 0; 
}