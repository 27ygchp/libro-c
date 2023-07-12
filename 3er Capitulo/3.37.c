/* Escriba un programa mediante un
ciclo while que cuente de 1 a 300,000,000 por unos. Cada vez que la cuenta alcance un múltiplo de 100,000,000
despliegue dicho número en la pantalla. Utilice su reloj para determinar cuánto tarda cada millón de repeticiones del
ciclo.*/

#include<stdio.h>
#define N 300000000
#define M 100000000

int main(){
	
	int contador = 1; 
	
	while(contador <= N){
		if(contador % M == 0){
			printf("%d\n", contador);
		}
		
		contador++; 
	} 
	
	return 0; 
}