/* programa que despliegue 100 asteriscos, uno a la vez. Después de cada diez asteriscos, el programa debe 
desplegar un carácter de nueva línea. [Pista: Cuente de 1 a 100. Utilice el operador módulo para reconocer 
cada vez que el contador alcance un múltiplo de 10.] */ 

#include<stdio.h>

int main(){

    int contador = 0; 

while (contador <= 100 )
{
    printf("*");

        if (contador % 10 == 0)
        {
            printf("\n"); 
        }
        
        contador++; 
}

    return 0; 
}