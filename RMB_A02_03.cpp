// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 24/08/2023  27/08/2023
// Algoritmo que lea 4 calificaciones de un alumno, calcular y desplegar el promedio
// RMB_A02_03_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    float calificacion1, calificacion2, calificacion3, calificacion4;
    float promedio;

    printf("Ingrese su primera calificación: ");
    scanf("%f", &calificacion1);

    printf("Ingrese su segunda calificación: ");
    scanf("%f", &calificacion2);

    printf("Ingrese su tercera calificación: ");
    scanf("%f", &calificacion3);

    printf("Ingrese su cuarta calificación: ");
    scanf("%f", &calificacion4);

    promedio = (calificacion1 + calificacion2 + calificacion3 + calificacion4) / 4.0;

    printf("El promedio total es: %.2f\n", promedio);

    if (promedio >= 6.0) {
        printf("APROBADO\n");
    } else if (promedio >= 4.0 && promedio < 6.0) {
        printf("RECUPERACIÓN\n");
    } else {
        printf("REPROBADO\n");
    }

    return 0;
}
