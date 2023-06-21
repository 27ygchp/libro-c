/*Escriba un programa que demuestre la diferencia entre el predecremento y el posdecremento mediante el uso del
operador -- */


#include<stdio.h>

int main(){

int c = 5; 

printf("valor actual: %d\n", c); 
printf("posdecremento al valor actual: %d\n", c--); 
printf("nuevo valor: %d\n", c); 
printf("predecremento del valor actual: %d\n", --c); 

    return 0;
}
