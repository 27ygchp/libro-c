#include<stdio.h>

int main(){
	
	int numero, contador, cuadro; 
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero); 
	
	for(contador = 0; contador < numero; contador++){
		
		for(cuadro = 0; cuadro < numero; cuadro++){
			
			if(contador == 0 || cuadro == 0 || contador == numero - 1 || cuadro == numero - 1){
				
				printf("*");
			} else{
				printf(" "); 
			}
		}
		
		printf("\n"); 
	}
	
	
	
	return 0; 
}