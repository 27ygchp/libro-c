/* Escriba un programa que pida al usuario escribir dos números, 
que obtenga los dos números por parte del usuario,
y que imprime la suma, el producto, la diferencia, 
el cociente y el residuo de los dos números. */

#include<stdio.h>

int main(){
	
	int suma, producto, diferencia, cociente, residuo, numero1, numero2;
	
	printf("Ingrese dos numeros: ");
	scanf("%d %d", &numero1, &numero2);
	
	printf("La suma de los dos numeros es: %d\n",suma = numero1 + numero2);
	printf("El producto de los dos numeros es: %d\n",producto = numero1 * numero2);
	printf("La diferencia de los dos numeros es: %d\n",diferencia = numero1 - numero2); 
	printf("El cociente de los dos numeros es: %d\n",cociente = numero1 / numero2);
	printf("El residuo de los dos numeros es: %d\n",residuo = numero1 % numero2);
	
	return 0; 
	
}
