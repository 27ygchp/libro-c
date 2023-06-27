#include<stdio.h>

int main(){

int numero ; 
int fila = 1; 
int columna = 1; 
 
	printf("Ingrese el numero del cuadrado entre 1 y 20:  "); 
	scanf("%d", &numero);
	
	
	while ( numero < 1  || numero > 20){
		
		printf("El número ingresado no está dentro del rango permitido. Ingrese un número entre 1 y 20: ");
        scanf("%d", &numero);
}
		while  (fila <= numero ){

			while (columna <= numero){
		
	 		    columna++;
	 		
	 			if(fila == 1 || fila == numero || columna == 1 ||columna == numero ){
	 				
				  	printf("*");
				  	printf(" ");
					
	 		}
  
		
		}	
		
			columna = 1;    
			fila++;
	 		printf("\n");
	 		
	 		
	}
	
	
    
    
    return 0; 
}