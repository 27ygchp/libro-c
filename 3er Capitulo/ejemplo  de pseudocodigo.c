#include<stdio.h>

int main(){
	
	int calificacion;
	
	printf("Ingrese la calificacion del estudiante: ");
	scanf("%d", &calificacion); 
	
	if( calificacion >= 90)
		printf("A\n");
		
	else if( calificacion >= 80 )
		printf("B\n");
		
	else if( calificacion >= 70 )	
		printf("C\n");
		
	else if( calificacion >= 60)
		printf("D\n");
		
	else
		printf("F\n");
		
	return 0;
}
