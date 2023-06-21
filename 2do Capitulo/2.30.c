#include<stdio.h>

int main(){
	
	int numero, numero1, numero2, numero3, numero4, numero5;
	
	printf("Ingrese un numero de cinco digitos: ");
	scanf("%d", &numero);
	
	numero1 = numero / 10000;
	numero %= 10000; 

	numero2 = numero / 1000;
	numero %= 1000;

	numero3 = numero / 100;
	numero %= 100;

	numero4 = numero / 10;
	numero %= 10;

	numero5 = numero / 1;
	numero %= 1;

	printf("%d   %d   %d   %d   %d\n",
	 numero1, numero2, numero3, numero4, numero5);
	
	return 0;
}