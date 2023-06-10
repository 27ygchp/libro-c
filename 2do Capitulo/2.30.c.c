#include<stdio.h>

int main(){
	
	int numero, numero1, numero2, numero3, numero4, numero5;
	
	printf("Ingrese un numero de cinco digitos: ");
	scanf("%d", &numero);
	
	numero = numero1 / 10000;
	numero1 %= 10000; 

	numero = numero2 / 1000;
	numero2 %= 1000;

	numero = numero3 / 100;
	numero3 %= 100;

	numero = numero4 / 10;
	numero4 %= 10;

	numero = numero5 / 1;
	numero5 %= 1;

	printf("%d   %d   %d   %d   %d\n",
	 numero1, numero2, numero3, numero4, numero5);
	
	return 0;
}
