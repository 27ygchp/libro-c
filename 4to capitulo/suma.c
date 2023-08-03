#include<stdio.h>

int main(){
	
	int contador, suma = 0, numero; 
	
	for(contador = 1; contador <= 10; contador++){
		
		printf("\nIngrese el numero %d: ", contador); 
		scanf("%d", &numero); 
		
		suma += numero;  
		
	}
	
	printf("la suma de los diez numeros es: %d\n", suma); 
	
	return 0; 
}