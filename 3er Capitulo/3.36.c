/* Introduzca un número entero que contenga sólo unos y ceros (es decir, un entero “binario”) y
que despliegue su equivalente decimal. [Pista: Utilice los operadores de división y residuo para
separar los dígitos del número “binario”, uno por uno, de derecha a izquierda. Así como en el
sistema de numeración decimal, el dígito más a la derecha tiene un valor de posición de 1, y
el siguiente dígito a la izquierda tiene un valor por posición de 10, después de 100, después de
1000, y así sucesivamente, en el sistema binario de numeración, el dígito que se encuentra a la
derecha tiene un valor por posición de 1, el siguiente dígito a la izquierda tiene un valor por
posición de 2, después de 4, de 8, y así sucesivamente. Así, el número 234 se puede interpretar
como 4 * 1 + 3 * 10 + 2 * 100. El equivalente decimal del número binario 1101 es 1 * 1 + 0 * 2 + 1 *
4 + 1 * 8 o 1 + 0 + 4 + 8 o 13 */
#include<stdio.h>

int main(){


int numeroBinario;
int decimal = 0, contador = 0;

printf("Introduzca un numero binario: ");
scanf("%d", &numeroBinario);

/*
Corregir el cálculo.
*/

while (numeroBinario != 0)
{
		decimal +=  numeroBinario % 10;
		numeroBinario = contador * contador; 
		numeroBinario /= 10;
		contador++;

    }
		printf("Su equivalente decimal es: %d\n\n", decimal);

    return 0;
}
