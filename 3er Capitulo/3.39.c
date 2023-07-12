/*Escriba un programa que lea un número entero y que determine y despliegue cuántos dígitos del entero son sietes.*/

int main(){

int numero; 
int contador; 

while (numero != 0)
{
    printf("Ingrese un numero entero: "); 
    scanf("%d", &numero); 

    if (numero % 10 == 7)
    {
        contador++; 
    }
    
    numero /= 10; 
}

    printf(" %d son sietes \n"); 

return 0; 

}