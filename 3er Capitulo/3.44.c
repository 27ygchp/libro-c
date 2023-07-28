/*Escriba un programa que lea tres valores de tipo float diferentes de cero y que determine (y despliegue) si éstos
pueden representar los lados de un triángulo recto.*/

#include<stdio.h>
#include<math.h>

int main(){
	
	float a, b, c; // a = obtuso b = adyacente  c = hipotenusa 
	
	printf("Ingrese los lados del triangulo recto distintos de cero: "); 
	scanf("%f %f %f", &a, &b, &c);  
	
	while( a != 0 && b != 0 && c != 0){
		
		if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(c,2) + pow(b,2) == pow(a,2)) {
			printf("Los valores ingresados si representados los lados de un angulo recto\n"); 
			
		} else{
			printf("Los valores ingresados no cumplen con los lados de un angulo recto\n"); 
		}
		
		printf("\nIngrese los lados del triangulo recto distintos de cero: "); 
		scanf("%f %f %f", &a, &b, &c); 
	}
	
	
	return 0; 
}