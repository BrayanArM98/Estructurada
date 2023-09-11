// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 10/09/2023  10/09/2023
// Leer 3 numeros y desplegar el mayor usando and y or
// RMB_A02_04_432

#include <iostream>

int main() 
{
    int numero1, numero2, numero3;

   
    printf("Ingresa el primer número: ");
    scanf("%d", &numero1);

    printf("Ingresa el segundo número: ");
    scanf("%d", &numero2);

    printf("Ingresa el tercer número: ");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3) {
        printf("El primer número (%d) es el mayor.\n", numero1);
    } else if (numero2 > numero1 && numero2 > numero3) {
        printf("El segundo número (%d) es el mayor.\n", numero2);
    } else if (numero3 > numero1 && numero3 > numero2) {
        printf("El tercer número (%d) es el mayor.\n", numero3);
    } else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3) {
        printf("Hay al menos dos números iguales, o todos son iguales.\n");
    }

    return 0;
}
