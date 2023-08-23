#include<stdio.h>

int main(){
	
	int contador, numero,fila;
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero); 
	
	for(contador = 1; contador <= numero; contador++){
		
		for( fila = 1; fila <= contador; fila++){
			
		    if(  fila == 1 || contador == numero || fila == 0 || fila == contador){
				
			    printf("*");
			
			} else {
				
				printf(" "); 
			}
	}
		printf("\n"); 
}

		printf("\n"); 
	
	for(contador = numero; contador > 0; contador--){
		
	for( fila = contador - 1; fila >= 0; fila--){
			
			if(contador == 0 || contador == numero || fila == 0|| fila == contador - 1){
				
				printf("*");
			} else{
				
				printf(" "); 
			}
	}
			printf("\n");
	
	}
	
	
	return 0; 
}