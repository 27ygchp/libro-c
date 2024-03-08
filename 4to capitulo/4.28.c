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

int main() {
	int empleados, opcion;

//	1. administradores
	float salario;

//	2. empleados por hora
	int horas = 40;
	float pago_empleados_horas, pago_por_horas, horas_trabajadas;

// 3. empleados por comision
	float pago = 250, comision = 0.057, ventas, pago_comision;

//	4. empleados por destajo
	float monto_pieza, pago_piezas;
	int piezas;

	for (empleados = 1; opcion != 5; empleados++) {

		printf("Ingrese el numero del empleado: \n\n");
		printf("1) Administradores.\n");
		printf("2) Empleados por hora.\n");
		printf("3) Empleados por comision.\n");
		printf("4) Empleados por destajo.\n");
		printf("5) Salir.\n");
		scanf("%d", &opcion);


		switch (opcion)	{

			case 1:
				printf("Ingrese el salario fijo semanal: ");
				scanf("%f", &salario);

				printf("\nEl salario de los administradores es de: $%.3f\n\n", salario);
				break;

			case 2:
				printf("Ingrese la horas que trabajo el empleado: ");
				scanf("%f", &horas_trabajadas);

				printf("Ingrese el pago por hora: ");
				scanf("%f", &pago_por_horas);

				if(horas_trabajadas <= 40) {
					pago_empleados_horas = pago_por_horas * horas_trabajadas;
					printf("\nEl total de pago esta semana para este empleado es de: $%.3f\n\n", pago_empleados_horas);

				} else {
					pago_empleados_horas = (horas * pago_por_horas) + ((horas_trabajadas - horas) * (pago_por_horas  * 1.5));
					printf("\nEl total de pago esta semana para este empleado es de: $%.3f\n\n", pago_empleados_horas);
				}

				break;

			case 3:
				printf("\nIngrese el total de ventas en la semana: ");
				scanf("%f", &ventas);

				pago_comision = pago + ventas * comision;

				printf("El total de pago esta semana para este empleado es de: $%.3f\n\n", pago_comision);
				break;

			case 4:
				printf("\nIngrese el monto pagado por pieza: ");
				scanf("%f", &monto_pieza);

				printf("Ingrese el numero de piezas fabricadas: ");
				scanf("%d", &piezas);

				pago_piezas = piezas * monto_pieza;

				printf("El pago este semana para este empleado es de: $%.3f\n\n", pago_piezas);

				break;

			case 5:
				break;

			default:
				printf("\nIngrese una opcion correcta. \n\n");

				break;
		}


	}





	return 0;
}
