/* Escriba un programa que lea la medida de uno de los lados de un cuadrado y que despliegue dicho cuadrado con
asteriscos. Su programa debe trabajar con cuadrados de tamaño entre 1 y 20 */ 

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
			
			printf("* ");
			columna++;
	}
	
			columna = 1;
			fila++;
			printf("\n");
		
		}
    
    return 0; 
}