/*
Escriba instrucciones for que impriman la siguiente secuencia de valores:
a) 1, 2, 3, 4, 5, 6, 7
b) 3, 8, 13, 18, 23
c) 20, 14, 8, 2, -4, -10
d) 19, 27, 35, 43, 51
*/


#include<stdio.h>

int main(){
	
	int contador; 
	
//1, 2, 3, 4, 5, 6, 7
 for(contador = 1; contador <= 7; contador++){
    printf("%d ", contador);
  
    } 
    
    printf("\n\n"); 
    
//3, 8, 13, 18, 23
 for(contador = 3; contador <= 23; contador += 5){
 	printf("%d ", contador); 
 	
 } 
  	printf("\n\n");
  	
//20, 14, 8, 2, -4, -10
 for(contador = 20; contador >= 2; contador -= 6){
 	
 	printf("%d ", contador); 
}
	 
 	for(contador = 4; contador <= 10; contador += 6){
 		
 		printf("%d ", -contador); 
	 }

	 printf("\n\n");
	 
// 19, 27, 35, 43, 51
 for( contador = 19; contador <= 51; contador += 8){
 	printf("%d ", contador); 
 }


    return 0; 
}