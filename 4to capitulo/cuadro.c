#include<stdio.h>

int main(){
	
	int numero, contador, cuadro; 
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero); 
	
	for(contador = 1; contador <= numero; contador++){
		
		for(cuadro = 1; cuadro <= numero; cuadro++){
			
			printf("* ");
		}
		
		printf("\n"); 
	}
	
	
	
	return 0; 
}