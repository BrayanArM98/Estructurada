// Brayan Arturo Rocha Meneses Matricula:371049
// Fecha 30/08/2023 / 30/08/2023
//Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar en optimizado forma de arbol
//RMBA_A03_01_432
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() {
    float calif1, calif2, calif3, promedio;
   
    printf("Ingrese la primera calificación: ");
    scanf("%f", &calif1);
   
    printf("Ingrese la segunda calificación: ");
    scanf("%f", &calif2);
   
    printf("Ingrese la tercera calificación: ");
    scanf("%f", &calif3);
   
    promedio = (calif1 + calif2 + calif3) / 3.0;
   
    printf("El promedio es el siguiente: %.2f\n", promedio);
   
    if (promedio < 30)
    {
        printf("Repetir\n");
    } else
    {
        if (promedio < 60)
        {
            printf("Extraordinario\n");
        } else
        {
            if (promedio < 70)
            {
                printf("Suficiente\n");
            } else
            {
                if (promedio < 80)
                {
                    printf("Regular\n");
                } else
                {
                    if (promedio < 90)
                    {
                        printf("Bien\n");
                    } else
                    {
                        if (promedio < 98)
                        {
                            printf("Muy bien\n");
                        } else
                        {
                            if (promedio <= 100)
                            {
                                printf("Excelente\n");
                            } else
                            {
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
