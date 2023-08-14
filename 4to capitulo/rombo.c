#include<stdio.h>

int main(){
	
	int contador, numero, espacios, asteriscos;  
	
	printf("Ingrese un numero: "); 
	scanf("%d", &numero); 
	
	for(contador = 0; contador <= numero; contador++){
		
		for(espacios = 0; espacios <= numero - contador + 1; espacios++){
			printf(" "); 
		}
		
		for(asteriscos = 1 - 1; asteriscos <= contador * 2 - numero - 1; asteriscos++){
			
			printf("*");
		}
		
		printf("\n"); 
		
	} 
	
 	for(contador = numero - 1; contador >= 0; contador--){
		
		for(espacios = 0; espacios <= numero - contador + 1 ; espacios++){
			printf(" "); 
		}
		
		for(asteriscos = 0; asteriscos <= contador * 2 - numero - 1; asteriscos++){
			
			printf("*");
		}
		
		printf("\n"); 
		
	} 

	
	return 0; 
}