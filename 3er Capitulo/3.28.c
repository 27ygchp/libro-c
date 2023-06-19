/* Modifique el programa de la figura 3.10 para validar sus entradas. Para cualquier 
entrada, si el valor introducido es diferente a 1 o 2, continúe el ciclo hasta que el usuario digite un 
valor correcto. */

#include<stdio.h>

int main(){
	
	int aprobados = 0;
	int reprobados = 0;
	int contador = 0;
	int resultado; 

	while( contador != 10){
		printf("Ingrese los resultados (1 = aprobados, 2 = reprobados): ");
		scanf("%d", &resultado);
		
		if( resultado == 1){
			aprobados++;

		} 
		
		else if (resultado == 2){
			reprobados++;
            
		} else {
            printf("\nIntroduzca un numero valido, 1 = aprobados, 2 = reprobados\n\n");
        }
		
		contador++;
	}
	
	printf("\nEstudiantes aprobados: %d\n", aprobados);
	printf("Estudiantes reprobados: %d\n\n", reprobados);
	
	if( aprobados >= 8){
		printf("Objetivo Alcanzado\n");
	} else {
		printf("No se obtuvo el objetivo\n");
	}
	
	
	
	return 0;
}