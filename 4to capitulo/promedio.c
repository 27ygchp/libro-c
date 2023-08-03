#include<stdio.h>

int main(){

int calificacion = 0, total = 0, contador; 
float promedio = 0; 

for( contador = 1; contador ; contador++){
	
	while( calificacion != -1){
		
    printf("Ingrese la calificacion, -1 para finalizar: "); 
	scanf("%d", &calificacion);
		
		total += calificacion; 
	}
	
	if(calificacion != 0){
		
		promedio = (float)total / contador;  
	 
	}
}
	printf("El promedio del grupo es: %.2f\n", promedio);
	return 0; 
}