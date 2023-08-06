/* 
Modifique el programa del interés compuesto de la sección 4.16 para repetir sus pasos para tasas de interés del 5
por ciento, 6 por ciento, 8 por ciento, 9 por ciento, y 10 por ciento. Utilice un for para crear un ciclo que varíe la
tasa de interés.
*/

#include<stdio.h>
/* 
double monto; 
double principal = 1000.0; 
double tasa = .05; 
int anio; 

printf( “%4s%21s\n”, “Anio”, “Monto del deposito” );

for ( anio = 1; anio <= 10; anio++ ) {
    monto = principal * pow( 1.0 + tasa, anio );

    printf( “%4d%21.2f\n”, anio, monto ); 
 } 

*/ 

int main(){

float monto, interes;
float montoPrincipal = 1000;  
float  anio = 10;  

for(interes = 5; interes <= 10; interes++){

    if( interes == 7){
        continue;
    }

    monto = montoPrincipal * pow( 1 + interes/100, anio); 

    printf("\nEl mondo del interes del %.0f%% al final de los 10 anios es de: $%.2f\n", interes, monto); 

}

    return 0; 
}

