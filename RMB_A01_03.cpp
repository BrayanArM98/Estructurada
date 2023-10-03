// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 16/08/2023  17/08/2023
// Algoritmo que muestra el promedio del alumno
// RMB_A01_03_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;



int main() 

{
    float calificacion1, calificacion2, calificacion3;
    float promedio;

    
    printf("Ingresa la primera calificacion del alumno: ");
    scanf("%f", &calificacion1);
    printf("Ingresa la segunda calificacion del alumno: ");
    scanf("%f", &calificacion2);
    printf("Ingresa la tercera calificacion del alumno: ");
    scanf("%f", &calificacion3);

    
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

    
    if (promedio < 30) {
        printf("DE ACUERDO A SU PROMEDIO ESTA EN REPETIR.\n");
    } else if (promedio >= 30 && promedio < 60) {
        printf("DE ACUERDO A SU PROMEDIO ESTA EN EXTRAORDINARIO.\n");
    } else if (promedio >= 60 && promedio < 70) {
        printf("DE ACUERDO A SU PROMEDIO ESTA EN SUFICIENTE.\n");
    } else if (promedio >= 70 && promedio < 80) {
        printf("DE ACUERDO A SU PROMEDIO ESTA EN REGULAR.\n");
    } else if (promedio >= 80 && promedio < 90) {
        printf("DE ACUERDO A SU PROMEDIO ESTA EN BIEN.\n");
    } else if (promedio >= 90 && promedio < 98) {
        printf("DE ACUERDO A SU PROMEDIO ESTA EN MUY BIEN.\n");
    } else if (promedio >= 98 && promedio <= 100) {
        printf("DE ACUERDO A SU PROMEDIO ESTA EN EXCELENTE.\n");
    } else {
        printf("ERROR EN PROMEDIO.\n");
    }

    return 0;
}


