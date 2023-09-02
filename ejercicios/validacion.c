/*
escribe un programa que le indique al usuario que ingrese el sexo 1 para femenino y 2 para masculino si el usuario
introduce una opcion fuera de las indicadas el programa debe desplegar de nuevo el menu y cuando ingrese un opcion correcta
debe decir que opcion ingreso.
*/

#include<stdio.h>

int main() {
    
    int sexo;

    do {
        printf("Introduzca el sexo:\n\n");
        printf("1) Femenino.\n");
        printf("2) Masculino.\n");
        scanf("%d", &sexo);

        if (sexo != 1  && sexo != 2) {

            printf("\nIngrese una opcion correcta.\n");

        }

    } while(sexo != 1  && sexo != 2);

         if ( sexo == 1) {

            printf("Usted ingreso la opcion de femenino.\n\n");

        } else{

            printf("Usted ingreso la opcio de masculino.\n\n");
        }






    return 0;
}
