// Encuentra el máximo de tres enteros

#include<stdio.h>

int maximo (int x, int y, int z);

int main(){
	
	int numero1;  
	int numero2;
	int numero3; 
	
	printf("Ingrese tres numeros, separados por un espacio: "); 
	scanf("%d %d %d", &numero1, &numero2, &numero3); 
	
	printf("\nEl numero mayor es: %d", maximo(numero1, numero2, numero3)); 

	return 0; 	
}


int maximo(int x, int y, int z){
		
	int max = x; 
		
		if(y > max){
			max = y; 
		} 
		
		if(z > max){
			max = z; 
		} 
		

	return max; 	
	
}