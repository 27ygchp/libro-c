// escriba un programa donde el usuario digite la base y el exponente y que muestre la potencia
#include<stdio.h>

int main(){

    int base;
    int exponente;
    int potencia = 1;
    int contador = 0;

    printf("introduzca la base: ");
    scanf("%d", &base);

    printf("introduzca el exponente: ");
    scanf("%d", &exponente);

    while (contador < exponente)
    {
       
       potencia *= base;  
       contador++;
    }

    printf("La potencia es: %d\n", potencia);

    return 0;
}
