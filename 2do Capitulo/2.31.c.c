#include<stdio.h>
#include<math.h>

int main(){
	
	int numero = 0;
	
	printf("Numero\tCuadrado\tCubo\n");
	
	while(numero >= 10){

		printf("%d\n\t", numero);
		printf("%d\t\n", pow (numero, 2));
		printf("%d\t\n", pow (numero, 3));
	}
	
	return 0; 
}
