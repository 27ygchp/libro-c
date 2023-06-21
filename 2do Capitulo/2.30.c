#include<stdio.h>

int main(){

	int numero, numero1, numero2, numero3, numero4, numero5;

	printf("Ingrese un numero de cinco digitos: ");
	scanf("%d", &numero);
<<<<<<< HEAD:2do Capitulo/2.30.c.c
	
	numero1 = numero / 10000;
	numero %= 10000; 
=======

	/**
	 * No funciona bien
	*/

	numero = numero1 / 10000;
	numero1 %= 10000;
>>>>>>> 622e255f3f17764aec594489210f17b8a1243e71:2do Capitulo/2.30.c

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
