/* Escriba un programa que utilice ciclos para producir la siguiente tabla de valores: */

#include<stdio.h>

int main(){

int contador = 0; 

    printf("A\tA+2\tA+4\tA+6\n\n");
    
while (contador < 15)
{
	 
     printf("%d\t", contador += 3);
	 printf("%d\t", contador + 2); 
	 printf("%d\t", contador + 4);
	 printf("%d\t\n", contador + 6); 
}

    return 0; 
}