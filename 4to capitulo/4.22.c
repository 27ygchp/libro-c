/*
Modifique el programa de la figura 4.7 de manera que calcule el promedio de calificaciones del grupo.
*/

/*
#include <stdio.h>

int main() {
	int calificacion; 
	int cuentaA = 0;
	int cuentaB = 0; 
	int cuentaC = 0; 
	int cuentaD = 0; 
	int cuentaF = 0; 

	printf( “Introduzca la letra que corresponde a la calificacion.\n” );
	printf( “Introduzca el caracter EOF para finalizar la entrada de datos.\n” );
	while ( ( calificacion = getchar() ) != EOF ) {

 		switch ( calificacion ) { 
			
			case ‘A’: 
			case ‘a’: 
				++cuentaA; 
				break; 
			 case ‘B’: 
			 case ‘b’:
			 	++cuentaB; 
			 	break; 
			
			 case ‘C’:
			 case ‘c’: 
				 ++cuentaC; 
				 break; 
			
			 case ‘D’: 
			 case ‘d’: 
				++cuentaD;
				break; 
			
			 case ‘F’: 
			case ‘f’: 
				++cuentaF;
				break; 
			
			 case ‘\n’: 
			 case ‘\t’: 
			 case ‘ ‘: 
				 break; 
			
			 default: 
				 printf( “Introdujo una letra incorrecta.” ); 
				 printf( “ Introduzca una nueva calificacion.\n” ); 
				 break;
		} 
			
	} 

		printf( “\nLos totales por calificacion son:\n” );
		 printf( “A: %d\n”, cuentaA ); 
		 printf( “B: %d\n”, cuentaB ); 
		 printf( “C: %d\n”, cuentaC ); 
		 printf( “D: %d\n”, cuentaD ); 
		 printf( “F: %d\n”, cuentaF ); 

 return 0; 
 
} 
*/

#include<stdio.h>

int main(){

float promedio = 0, calificacion, total = 0; 
int contador; 


for( contador = 1; calificacion != -1; contador++){
    
    printf("Ingrese la calificacion o -1 si desea terminar: ");
    scanf("%f", &calificacion);
    
    total += calificacion; 
    
  	if(calificacion != -1){
    	promedio = total / contador;   
	  }

}
    printf("El promedio del salon es de: %.2f", promedio); 


    return 0; 
}

