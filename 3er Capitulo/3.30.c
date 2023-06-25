/*¿Qué despliega el siguiente programa?*/


#include <stdio.h>

 int main()
{
    int fila = 10; 
    int columna; 

while ( fila >= 1 ) { 

    columna = 1; 

 while ( columna <= 10 ) { 

    printf( "%s", fila % 2 ? "<": ">" ); 

        columna++; 

 } 
    fila--; 
    
        printf( "\n" ); 
 } 

 return 0; 

 } 