#include<stdio.h> 
  
 int main(){ 
  
         int contador = -1; 
        
         printf("Numero\tCuadrado\tCubo\n");
        
         while(contador <= 10 ){ 
        
                  
          printf("%d\t%d\t\t%d\t\n", ++contador, contador * contador, contador * contador * contador);
                
     
                              
         } 
  
         return 0;  
 }