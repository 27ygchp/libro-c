/* Establezca el orden de evaluaci�n de los operadores en cada una de las 
siguientes instrucciones de C, y muestre el
valor de x despu�s de que se realice cada instrucci�n.
a) x = 7 + 3 * 6 / 2 � 1;
b) x = 2 % 2 + 2 * 2 � 2 / 2;
c) x = ( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );  */
# include<stdio.h>
int main(){
	
	int x;
	
	printf("El valor de X es: %d\n", x = (7 + 3) * 6 / 2 - 1);	
	printf("El valor de X es: %d\n", x = 2 % (2 + 2) * (2 - 2) / 2);
	printf("El valor de X es: %d\n", x = 3 * 9 * (3 + 9) * 3 / 3);
	
	return 0;
} 
