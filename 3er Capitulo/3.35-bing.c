/* Un palíndromo es un número o una frase de texto que se lee igual hacia delante y hacia atrás. Por ejemplo, cada
uno de los siguientes números de cinco dígitos, son palíndromos: 12321, 55555, 45554, y 11611. Escriba un
 programa que lea números de cinco dígitos y que determine si es o no, un palíndromo. [Pista: Utilice los 
 operadores de división y residuo para separar el número en sus dígitos individuales.]  */


#include<stdio.h>

int main(){

int numero, temporal;
int contador = 0; 

printf("Ingrese un numero de 5 digitos: ");
scanf("%d", &numero); 

temporal = numero; 

while (temporal != 0)
{
    contador *= 10;
    contador += temporal % 10; 
    temporal /= 10; 
     
} 

		if (numero == contador){
		
			printf("Es polindromo"); 
	} else{
	
			printf("No es polindromo"); 
}

    return 0; 
}