/*Escriba un programa que utilice ciclos para imprimir la siguiente tabla de valores*/ 
#include<stdio.h>

int main(){

int contador = 1; 

    printf("N\t10*N\t100*N\t1000*N\n\n");
while (contador <= 10 )
{
    printf("%d\t%d\t%d\t%d\n", contador++, contador * 10, contador * 100, contador * 1000); 
}

    return 0; 
}