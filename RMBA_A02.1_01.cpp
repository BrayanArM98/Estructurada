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

    
    printf("Ingresa la primera calificaci�n: ");
    scanf("%f", &calificacion1);

    printf("Ingresa la segunda calificaci�n: ");
    scanf("%f", &calificacion2);

    printf("Ingresa la tercera calificaci�n: ");
    scanf("%f", &calificacion3);

    
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

  
    if (promedio < 30) {
        printf("Categor�a: Repetir\n");
    }
    else {
        if (promedio < 60) {
            printf("Categor�a: Extraordinario\n");
        }
        else {
            if (promedio < 70) {
                printf("Categor�a: Suficiente\n");
            }
            else {
                if (promedio < 80) {
                    printf("Categor�a: Regular\n");
                }
                else {
                    if (promedio < 90) {
                        printf("Categor�a: Bien\n");
                    }
                    else {
                        if (promedio < 98) {
                            printf("Categor�a: Muy Bien\n");
                        }
                        else {
                            if (promedio <= 100) {
                                printf("Categor�a: Excelente\n");
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
