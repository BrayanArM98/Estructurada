// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 24/08/2023  27/08/2023
//Algoritmo que a través de opciones (1.- HOMBRE 2.- MUJER )
// RMB_A02_04_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int opcion;

    printf("Selecciona tu sexo:\n");
    printf("1. HOMBRE\n");
    printf("2. MUJER\n");
    printf("Ingresa el número de cómo te identifiques: ");
    scanf("%d", &opcion);

    if (opcion == 1) 
    {
        printf("HOLA, ERES HOMBRE\n");
    } 
    else if (opcion == 2) 
    {
        printf("HOLA, ERES MUJER\n");
    } 
    else 
    {
        printf("Opción no válida\n");
    }

    return 0;
}
