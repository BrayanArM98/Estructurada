// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 24/08/2023  27/08/2023
// Algoritmo que lea 4 calificaciones y desplegar "APROBADO" O "REPROBADO"
// RMB_A02_01_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;


int main() 
{
    float calificacion1, calificacion2, calificacion3, calificacion4;
    float promedio;

    
    printf("Ingrese la primera calificación del alumno: ");
    scanf("%f", &calificacion1);

    printf("Ingrese la segunda calificación del alumno: ");
    scanf("%f", &calificacion2);

    printf("Ingrese la tercera calificación del alumno: ");
    scanf("%f", &calificacion3);

    printf("Ingrese cuarta calificacion del alumno: ");
    scanf("%f", &calificacion4);

   
    promedio = (calificacion1 + calificacion2 + calificacion3 + calificacion4) / 4.0;

    
    printf("El promedio total es de: %.2f\n", promedio);

    if (promedio >= 6.0) {
        printf("APROBADO\n");
    } else {
        printf("REPROBADO\n");
    }

    return 0;
}

