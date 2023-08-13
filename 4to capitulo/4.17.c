/* 
Recuperar el dinero se hace más difícil durante los periodos de recesión, de manera 
que las empresas deben reducir sus límites de crédito para prevenir que sus cuentas 
por cobrar (el dinero prestado) se hagan muy grandes. En respuesta a la prolongada recesión, 
una empresa recortó sus límites de crédito a la mitad. De esta manera, si un cliente en particular
 tenía un límite de crédito de $2000, ahora su límite es de $1000. Si un cliente tenía un límite
de crédito de $5000, este cliente tiene ahora un límite de crédito de $2500. Escriba un programa que
analice el estado del crédito de tres clientes de esta empresa. Por cada cliente a usted se le brinda:
a) El número de cuenta del cliente.
b) El límite de crédito antes de la recesión.
c) El saldo actual del cliente (es decir, el monto que le debe el cliente a la empresa).
Su programa debe calcular e imprimir el nuevo límite de crédito para cada cliente, y debe determinar 
(e imprimir) cuáles clientes tienen saldos que exceden los nuevos límites de crédito.
*/ 
#include<stdio.h>

int main(){


int cuenta; 
float limiteCredito; 
float nuevoLimite = 0; 
float monto_actual; 
float debe = 0; 
int cliente; 
 
for(cliente = 1; cliente <= 3; cliente++){
	
	printf("\nIngrese el numero de cuenta del cliente: ");
	scanf("%d", &cuenta); 
	
	printf("\nIngrese el limite de credito antes de la recesion: "); 
	scanf("%f", &limiteCredito); 
	
	printf("\nIngrese el monto actual del cliente: "); 
	scanf("%f", &monto_actual); 
	
	nuevoLimite = limiteCredito / 2; 
	
	printf("\nEl nuevo limite de credito para la cuenta %d es de: $%.2f\n", cuenta, nuevoLimite); 

	
	if(monto_actual > nuevoLimite){

		debe = monto_actual - nuevoLimite; 
		printf("\nEl cliente excede el limite de credito.\nEl cliente debe a la empresa: %.2f\n", debe); 
	} 
}
    return 0;
}