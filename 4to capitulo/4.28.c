/* 
Una empresa paga a sus empleados como gerentes (quienes reciben un salario semanal fijo), 
a los empleados por hora (quienes reciben una paga fija por las primeras 40 horas trabajadas, 
y “hora y media” por las horas extras trabajadas, es decir, 1.5 veces su salario por hora), a 
los empleados por comisión (quienes reciben $250 más 5.7% de sus ventas brutas semanales), a los
empleados por destajo (quienes reciben un monto fijo de dinero por cada elemento que producen, 
cada empleado por destajo en la empresa trabaja sólo en un tipo de pieza). Escriba un programa 
que calcule el pago semanal de cada uno de los empleados. Usted no sabe de antemano el número total de
empleados. Cada tipo de empleado tiene su propio código de pago: los administradores tienen el código 
de pago 1, los empleados por hora tienen el código 2, los empleados por comisión tienen el código 3 y los 
empleados por destajo tienen el código 4. Utilice un switch para calcular el pago de cada empleado, de 
acuerdo con su código de empleado. Junto con switch, indique al usuario (es decir, a la plantilla de 
empleados) que introduzca los datos que su programa necesita para calcular el pago de cada empleado, de
 acuerdo con su código de pago.
*/ 

#include<stdio.h>

int main(){

int opcion;
int contador;
int administradores = 0; 
int hora = 0;
int comision = 0; 
int destajo = 0; 
printf("Ingrese el tipo de empleado: \n");
printf("1) Administradores. \n");
printf("2) Empleados por hora.\n"); 
printf("3) Empleados por comision. \n");
printf("4) Empleados por destajo. \n"); 
printf("5) Salir. \n"); 
scanf("%d", &opcion); 

for(contador = 1; contador != 5; contador++){

    switch (opcion){
    case 1: 
        administradores: 
        break;
    
    case 2: 
        hora: 
        break;

    case 3: 
        comision: 
        break;

    case 4: 
        destajo: 
        break;
        
    default:
        break;
    }


}
    return 0; 
}