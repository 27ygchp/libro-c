#include<stdio.h>

int main(){

int contador = 0, suma = 0, numero; 
float promedio = 0;

do{

    printf("Ingrese un entero o 9999 para terminar: "); 
    scanf("%d", &numero);

    if(numero != 9999) {
	suma += numero; 
	contador++; 
}

}  while(numero != 9999);

    if (numero != 0) {
        
        promedio = (float) suma / contador; 

    } else{
        printf("No se introducieron numeros.\n"); 
    } 
      
	printf("El promedio es: %.2f", promedio); 

 
    return 0; 
}