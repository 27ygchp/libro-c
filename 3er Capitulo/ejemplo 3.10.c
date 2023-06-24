#include<stdio.h>

int main(){
	
	int aprobados = 0;
	int reprobados = 0;
	int contador = 1;
	int resultado; 

	while( contador != 10){
		printf("Ingrese los resultados (1 = aprobados, 2 = reprobados): ");
		scanf("%d", &resultado);
		
		if( resultado == 1){
			aprobados++;

		} else {
			reprobados++;
		}
		
		contador++;
	}
	
	printf("Estudiantes aprobados: %d\n", aprobados);
	printf("Estudiantes reprobados: %d\n", reprobados);
	
	if( aprobados >= 8){
		printf("Objetivo Alcanzado\n");
	} else {
		printf("No se obtuvo el objetivo\n");
	}
	
	
	
	return 0;
}
