/* El jugador tira dos dados. Cada dado tiene seis caras. Estas caras contienen 1, 2, 3, 4, 5 y 6 puntos. Una vez que
los dados caen, se calcula la suma de los puntos que se encuentran en las caras que ven hacia arriba. Si la suma es igual a 7 u 11 en el primer tiro, el jugador gana. Si la suma es 2, 3 o 12 en el primer tiro (llamado “craps”),
el jugador pierde (es decir, la “casa” gana). Si la suma es 4, 5, 6, 8, 9, o 10 en el primer tiro, entonces la suma
se convierte en el “punto” del jugador. Para ganar, usted debe continuar tirando los dados hasta que “haga su
punto”. El jugador pierde si tira un 7 antes de hacer su punto */ 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Estatus { GANA, PIERDE, CONTINUA};

int TiraDados(void){

int dado1, dado2; 
int suma_dados;

    dado1 = 1 + (rand () % 6); 
    dado2 = 1 + (rand () % 6);
    suma_dados = dado1 + dado2; 

    printf("El jugador tiro %d + %d = %d\n", dado1, dado2, suma_dados); 

    return suma_dados; 
} 

int TiraDados(void);

int main(){

int suma;
int mi_punto; 

    enum Estatus estatusJuego; 

    srand (time (NULL) );

    suma = TiraDados(); 

    switch (suma) {
    case 7:
    case 11: 
        estatusJuego = GANA; 

        break;

    case 2:
    case 3: 
    case 12: 
        estatusJuego = PIERDE; 

        break;
    
    default:
        estatusJuego = CONTINUA; 
        mi_punto = suma; 
        printf("Su punto es: %d\n", mi_punto); 

        break;
    }

    while (estatusJuego == CONTINUA) {

        suma = TiraDados(); 

        if (suma == mi_punto) {

            estatusJuego = GANA;

        } else {
		
			if(suma == 7) {

                estatusJuego = PIERDE; 
            }
            
        }
}
    if (estatusJuego == GANA) {
        
        printf("El jugador Gana. \n"); 

    } else {

        printf("El jugador pierde. \n"); 
    } 
    

    return 0; 
} 





