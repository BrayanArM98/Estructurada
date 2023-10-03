// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 23/08/2023  23/08/2023
// Algoritmo que sirva para desplegar el Total de una llamada telefónica
// RMB_A02_11_4032

#include <iostream>

int main() 
{
    int minutos, tipoLlamada;

    printf("Ingrese la duración de la llamada en minutos: ");
    scanf("%d", &minutos);

    printf("Ingrese el tipo de llamada (1: Local, 2: Nacional, 3: Internacional): ");
    scanf("%d", &tipoLlamada);

    double costoTotal = 0.0;

    if (tipoLlamada == 1) 
    {
        costoTotal = 3.0;
    } else 
    {
        if (tipoLlamada == 2) 
        {
            if (minutos <= 3) 
            {
                costoTotal = 7.0;
            } else 
            {
                costoTotal = 7.0 + (minutos - 3) * 2.0;
            }
        } else 
        {
            if (minutos <= 2) 
            {
                costoTotal = 9.0;
            } else 
            {
                costoTotal = 9.0 + (minutos - 2) * 4.0;
            }
        }
    }

    printf("El costo total de la llamada es: $%.2lf\n", costoTotal);

    return 0;
}
