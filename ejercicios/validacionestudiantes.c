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

int validarRango(int limiteInferior, int limiteSuperior){

    int numero;

    do {
        printf("Ingrese un numero entre %d y %d: ", limiteInferior, limiteSuperior);
        scanf("%d", &numero);

        if(numero < limiteInferior || numero > limiteSuperior) {

            printf("Ingrese un numero valido. \n\n");

        }

        } while (numero < limiteInferior || numero > limiteSuperior);

    return numero;
}


int main(){

    int sexo, mujeres = 0, contador, edad;
    float  notas, promedioM, suma = 0;

    for(contador = 0; contador < 3; contador++) {

        printf("\nIngrese la nota del estudiante.\n\n");

        notas = validarRango(0, 20);

        sexo = validacionSexo();

        printf("\nIngrese la edad del estudiante.\n\n");

        edad = validarRango(0, 100);

        if(sexo == 1 && edad < 18) {

            suma += notas;
            mujeres++;
        }

    }
    if(mujeres > 0) {

        promedioM = suma / mujeres;

    } else{
        promedioM = 0;
    }

    printf("El promedio de las mujeres menores de edad es de: %.2f\n", promedioM);


    return 0;
}
