// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// 5 examenes de estructurada
// RMB_A04_07_432

#include <iostream>

int main() 
{
    double examen1, examen2, examen3, examen4, examen5;
    double promedioFinal;

    
    printf("Ingrese la calificación del primer examen: ");
    scanf("%lf", &examen1);

    printf("Ingrese la calificación del segundo examen: ");
    scanf("%lf", &examen2);

    printf("Ingrese la calificación del tercer examen: ");
    scanf("%lf", &examen3);

    printf("Ingrese la calificación del cuarto examen: ");
    scanf("%lf", &examen4);

    printf("Ingrese la calificación del quinto examen: ");
    scanf("%lf", &examen5);

  
    double minCalificacion = examen1;
    if (examen2 < minCalificacion) {
        minCalificacion = examen2;
    }
    if (examen3 < minCalificacion) {
        minCalificacion = examen3;
    }
    if (examen4 < minCalificacion) {
        minCalificacion = examen4;
    }
    if (examen5 < minCalificacion) {
        minCalificacion = examen5;
    }

    
    promedioFinal = (examen1 + examen2 + examen3 + examen4 + examen5 - minCalificacion) / 4.0;


    printf("El promedio final de la materia es: %.2lf\n", promedioFinal);

    return 0;
}
