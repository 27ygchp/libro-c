/*  Desarrolle un programa en C que determine si un cliente de una tienda departamental excede el límite de crédito
de su cuenta. Para cada cliente, se dispone de los siguientes datos:
1. Número de cuenta.
2. Saldo al inicio del mes.
3. Total de elementos cargados al cliente en este mes.
4. El total de los créditos aplicados a la cuenta del cliente durante el mes.
5. El límite de crédito autorizado.
El programa debe introducir cada uno de estos datos, calcular el nuevo saldo (= saldo inicial + cargos – créditos),
y determinar si el nuevo saldo excede el límite de crédito del cliente. Para aquellos clientes que excedan el límite
de crédito, el programa debe desplegar el número de cuenta, el límite de crédito, el saldo nuevo y el mensaje 
“Limite de crédito excedido”. */

#include<stdio.h>

int main(){

float limiteCredito, credito; 
float cargos, saldoInicio;
float saldoFinal;
int cuenta; 

printf("\nIntroduzca el numero de cuenta (-1 para terminar): ");
scanf("%d", &cuenta); 

while (cuenta != -1)
{
    printf("\nIntroduzca el saldo inicial: ");
    scanf("%f", &saldoInicio);

    printf("\nIntroduzca el total de elementos cargados: ");
    scanf("%f", &cargos);

    printf("\nIntroduzca el total de creditos aplicados: ");
    scanf("%f", &credito);

    printf("\nIntroduzca el limite de credito: ");
    scanf("%f", &limiteCredito); 

    saldoFinal = saldoInicio + cargos - credito;

    
if (saldoFinal > limiteCredito)
{
   printf("\ncuenta: %d\n\n", cuenta);
   printf("Limite credito: %.2f\n\n", limiteCredito);
   printf("saldo: %.2f\n\n", saldoFinal); 
   printf("Limite de credito exedido"); 
} 

printf("\n\nIntroduzca el numero de cuenta (-1 para terminar): ");
scanf("%d", &cuenta);
}
    return 0;
}