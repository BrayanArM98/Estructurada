// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 10/09/2023  10/09/2023
// Leer 3 numeros y desplegar el mayor usando and y or
// RMB_A02_04_432

#include <iostream>

int main() 
{
    int numero1, numero2, numero3;

   
    printf("Ingresa el primer n�mero: ");
    scanf("%d", &numero1);

    printf("Ingresa el segundo n�mero: ");
    scanf("%d", &numero2);

    printf("Ingresa el tercer n�mero: ");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3) {
        printf("El primer n�mero (%d) es el mayor.\n", numero1);
    } else if (numero2 > numero1 && numero2 > numero3) {
        printf("El segundo n�mero (%d) es el mayor.\n", numero2);
    } else if (numero3 > numero1 && numero3 > numero2) {
        printf("El tercer n�mero (%d) es el mayor.\n", numero3);
    } else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
        printf("Hay al menos dos n�meros iguales, o todos son iguales.\n");
    }

    return 0;
}
