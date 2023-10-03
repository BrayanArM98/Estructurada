// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 24/08/2023  27/08/2023
// Algoritmo para promedio de un alumno mediante anidado por el falso
// RMB_A02_06_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>


int main() 
{
    float calificacion1, calificacion2, calificacion3;
    float promedio;

    
    printf("Ingrese su primera calificación: ");
    scanf("%f", &calificacion1);

    printf("Ingrese su segunda calificación: ");
    scanf("%f", &calificacion2);

    printf("Ingrese su tercera calificación: ");
    scanf("%f", &calificacion3);

    
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3.0;

   
    if (promedio >= 98 && promedio <= 100) {
        printf("Excelente\n");
    } else {
        if (promedio >= 90 && promedio < 98) {
            printf("Muy bien\n");
        } else {
            if (promedio >= 80 && promedio < 90) {
                printf("Bien\n");
            } else {
                if (promedio >= 70 && promedio < 80) {
                    printf("Regular\n");
                } else {
                    if (promedio >= 60 && promedio < 70) {
                        printf("Suficiente\n");
                    } else {
                        if (promedio >= 30 && promedio < 60) {
                            printf("Extraordinario\n");
                        } else {
                            if (promedio < 30) {
                                printf("Repetir\n");
                            } else {
                                printf("Error en promedio\n");
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}

    
