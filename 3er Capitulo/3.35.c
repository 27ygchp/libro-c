/* Un palíndromo es un número o una frase de texto que se lee igual hacia delante y hacia atrás. Por ejemplo, cada
uno de los siguientes números de cinco dígitos, son palíndromos: 12321, 55555, 45554, y 11611. Escriba un
 programa que lea números de cinco dígitos y que determine si es o no, un palíndromo. [Pista: Utilice los
 operadores de división y residuo para separar el número en sus dígitos individuales.]  */
/* Un palíndromo es un número o una frase de texto que se lee igual hacia delante y hacia atrás. Por ejemplo, cada
uno de los siguientes números de cinco dígitos, son palíndromos: 12321, 55555, 45554, y 11611. Escriba un
 programa que lea números de cinco dígitos y que determine si es o no, un palíndromo. [Pista: Utilice los
 operadores de división y residuo para separar el número en sus dígitos individuales.] */

#include<stdio.h>

int main(){

    int numero;
    int digito;
    int contador = 0;

    printf("Digite el numero: ");
    scanf("%d", &numero);

    digito = numero;

    while (digito != 0)
    {
        contador *= 10;
        contador += digito % 10;
        digito /= 10;
    }

    if (contador == numero) {
        printf("El número %d es palindromo\n", numero);
    } else {
        printf("El número %d no es palindromo\n", numero);
    }

    return 0;
}
