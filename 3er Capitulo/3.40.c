#include<stdio.h>

int main(){

int fila = 0; 
int columna = 0; 

while (fila < 8){
	
	columna = 0;  
	
	while(columna < 8){
		
		printf("* ");  
		columna++; 
	}  
	
	printf("\n"); 
	fila++; 
	printf(" ");
	
}

    return 0;
}