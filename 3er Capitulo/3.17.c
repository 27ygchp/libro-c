/* Los conductores están preocupado por el kilometraje obtenido en sus automóviles. Un conductor mantiene el
registro de muchos llenados de tanque de gasolina mediante el registro de miles de kilómetros conducidos y los
litros empleados durante cada llenado del tanque. El programa debe calcular y desplegar los kilómetros por litro
obtenidos durante cada llenado de tanque. Después de procesar toda la información, el programa debe calcular y
desplegar los kilómetros por litro combinados de todos los llenados de tanque*/

#include<stdio.h>

int main(){

float litros, kilometros;
float kilometrosPorLitros = 0, litrosUtilizados = 0;
int tanques = 0;
int promedio = 0;

printf("Ingrese los litros utilizados (-1 para terminar): ");
scanf("%f", &litros);

while (litros != -1)
{
    printf("Ingrese los kilometros recorridos: ");
    scanf("%f", &kilometros);

    kilometrosPorLitros = kilometros / litros;
    printf("Los kilometros por litros utilizados en este tanque fueron: %.2f\n\n", kilometrosPorLitros);

    kilometrosPorLitros += kilometros;
    litrosUtilizados += litros;
    tanques++; 

    printf("Ingrese los litros utilizados (-1 para terminar): ");
    scanf("%f", &litros);
}

    if (tanques != -1)
    {
        kilometrosPorLitros / litrosUtilizados;
        printf("El promedio general de kilometros/litros es de: %.2f\n\n");

    } else {
        printf("No se ingresaron datos");
    }
    
    
    return 0;
}