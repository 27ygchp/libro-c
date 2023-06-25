/*   Escriba un programa que pida al usuario que introduzca dos enteros, que obtenga los números por parte del usuario,
después que imprima las palabras “es más grande”. Si los números son iguales, que imprima el mensaje
“Estos números son iguales”. Solamente utilice la forma de selección simple de la instrucción if, que
aprendió en este capítulo. */

#include<stdio.h> 

int main(){

int numero1, numero2;
int grande;

printf("Introduzca dos enteros: ");
scanf(" %d %d", &numero1, &numero2);

grande = numero1; 

if( numero2 > grande){
    grande = numero2;

}
    printf("Es mas grande %d", numero2);

if( numero1 == numero2){
    
    printf("Estos numeros son iguales");
    
}

    return 0;
}