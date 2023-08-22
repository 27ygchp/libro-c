
#include<stdio.h>

int validacionSexo() {
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

    return sexo;
}

int main() {
    
    int sexo;

    sexo = validacionSexo();

    if ( sexo == 1) {

        printf("Usted ingreso la opcion de femenino.\n\n");

    } else{

        printf("Usted ingreso la opcio de masculino.\n\n");
    }



    return 0;
}
