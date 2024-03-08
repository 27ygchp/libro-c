// Tiro de un dado de seis lados 6000 veces

#include<stdio.h>
#include<stdlib.h>

int main(){

int cara, tiro; 
int frecuencia1 = 0;
int frecuencia2 = 0;
int frecuencia3 = 0;
int frecuencia4 = 0;
int frecuencia5 = 0;
int frecuencia6 = 0;

    for(tiro = 1; tiro <= 6000; tiro++){

        cara = 1 + rand () % 6; 

        switch (cara) {
        case 1:
            frecuencia1++;
            break;
        
        case 2: 
            frecuencia2++;
            break;

        case 3: 
            frecuencia3++;
            break;

        case 4: 
            frecuencia4++;
            break;

        case 5: 
            frecuencia5++; 
            break;

        case 6: 
            frecuencia6++; 
            break; 
        }
    }

    printf("%s %13s","Cara", "Frecuencia"); 
    printf("   \n\n1%13d", frecuencia1); 
    printf("   \n2%13d", frecuencia2);
    printf("   \n3%13d", frecuencia3);
    printf("   \n4%13d", frecuencia4);
    printf("   \n5%13d", frecuencia5);
    printf("   \n6%13d", frecuencia6);
    

return 0; 
}