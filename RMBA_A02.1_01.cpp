// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 10/09/2023  10/09/2023
// Leer calificaciones optimizado
// RMB_A02_01_432

#include <iostream>
#include <cstdio>

int main() 
{
    float calificacion1, calificacion2, calificacion3;
    float promedio;

    
    printf("Ingresa la primera calificación: ");
    scanf("%f", &calificacion1);

    printf("Ingresa la segunda calificación: ");
    scanf("%f", &calificacion2);

    printf("Ingresa la tercera calificación: ");
    scanf("%f", &calificacion3);

    
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

  
    if (promedio < 30) {
        printf("Categoría: Repetir\n");
    }
    else {
        if (promedio < 60) {
            printf("Categoría: Extraordinario\n");
        }
        else {
            if (promedio < 70) {
                printf("Categoría: Suficiente\n");
            }
            else {
                if (promedio < 80) {
                    printf("Categoría: Regular\n");
                }
                else {
                    if (promedio < 90) {
                        printf("Categoría: Bien\n");
                    }
                    else {
                        if (promedio < 98) {
                            printf("Categoría: Muy Bien\n");
                        }
                        else {
                            if (promedio <= 100) {
                                printf("Categoría: Excelente\n");
                            }
                            else {
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
