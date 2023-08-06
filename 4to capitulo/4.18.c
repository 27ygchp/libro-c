/*
Escriba un programa que lea cinco números (cada uno entre 1 y 30). Por cada número leído, su programa
debe imprimir una línea que contenga dicho número con asteriscos adyacentes. Por ejemplo, si su programa lee el
número 7, debe imprimir *******.  
*/ 

#include<stdio.h>

int main(){

int numero;
int contador; 
int i; 

 
for(contador = 1; contador <= 5; contador++){
	
	printf("\nIngrese un numero entre 1 y 30: ");
	scanf("%d", &numero);
	
	if(numero > 1 && numero <= 30){
		
        for( i = 1; i <= numero; i++){
        	
            printf("*");
        }
		
	} else{
		printf("\nEl numero debe estar entre 1 y 30.\n");
	}
    
}
	
    return 0; 
}