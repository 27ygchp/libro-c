
#include<stdio.h>

int validarRango(){

    int numero;

    do {
        printf("Ingrese un numero entre 3 y 70: ");
        scanf("%d", &numero);

        if(numero < 3 || numero > 70) {

            printf("Ingrese un numero valido. \n\n");

        }

        } while (numero < 3 || numero > 70);

    return numero;
}

int main() {

int numero;

    numero = validarRango();

    printf("\nEl numero que ingreso fue: %d\n", numero);

    return 0;
}
