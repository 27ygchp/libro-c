/*Escriba una instrucción individual en pseudocódigo que indique cada una de las siguientes acciones:
a) Despliegue el mensaje “Introduzca dos números”.
b) Asigne la suma de las variables x, y, y z a la variable p.
c) Verifique la siguiente condición dentro de una instrucción de selección if…else: el valor actual de la varia￾ble 
m es mayor que el doble del valor actual de la variable v.
d) Obtenga el valor de las variables s, r, y t desde el teclado. */

#include<stdio.h>
 
int main(){

int numero1, numero2;
printf("Introduzca dos números: ");
scanf("%d %d", &numero1, &numero2);


int x, y, z, p;

printf("Ingresé tres números: ");
scanf("%d %d %d", &x, &y, &z);

p = x + y + z;

printf("La suma es: %d\n", p);

int m, v = v * v;

printf("Ingresé el valor de m y v: ");
scanf("%d %d", &m, &v);

if( m > v ){

 printf("m es mayor que el doble valor de v");

} else {
printf("m no es mayor que el doble valor de v");
}

return 0;

}