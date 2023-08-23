#include<stdio.h>

int main(){

int calificacion, total = 0, contador; 
int promedio;   


for (contador = 1; calificacion != -1; contador++)
{
	printf("Ingrese la calificacion o -1 si desea terminar: "); 
	scanf("%d", &calificacion); 

	total += calificacion; 

	if (calificacion != 0){
		
		promedio = total / contador; 

	} else{
		
		printf("No se introducieron calificaciones.\n"); 
		 
	}
}

	printf("\nEl promedio del salon es: %d\n", promedio); 
	
 
	return 0; 
}