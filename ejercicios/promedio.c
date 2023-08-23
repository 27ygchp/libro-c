#include<stdio.h>

int main(){

int calificacion, total = 0, contador, promedio;   


for (contador = 1; contador <= 10; contador++)
{
	printf("Ingrese la calificacion: "); 
	scanf("%d", &calificacion); 

	total += calificacion; 

	if (calificacion != 0){
		
		promedio = total / 10; 

	} else{
		printf("No se introducieron calificaciones.\n"); 
	}
}

	printf("\nEl promedio del salon es: %d\n", promedio); 

	return 0; 
}