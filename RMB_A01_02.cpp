// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 16/08/2023  17/08/2023
// Algoritmo que muestra tales totales para sembrar pasto
// RMB_A01_02_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;



int main() 
{
    

    float ancho_terreno, largo_terreno;
    const float costo_por_metro_cuadrado = 35.40;

    
    printf("INGRESE EL ANCHO DEL TERRENO EN METROS: ");
    scanf("%f", &ancho_terreno);
    printf("INGRESE LO LARGO DEL TERRENO EN METROS: ");
    scanf("%f", &largo_terreno);

    
    float area_terreno = ancho_terreno * largo_terreno;
    float costo_total_pasto = area_terreno * costo_por_metro_cuadrado;
    float longitud_alambre_necesario = 2 * (ancho_terreno + largo_terreno);


    printf("El COSTO TOTAL DEL SEMBRADO EN EL TERRENO ES DE : $%.2f\n", costo_total_pasto);
    printf("LA LONGITUD DE ALAMBRE QUE SE NECEITA PARA CERCAR ES DE: %.2f metros\n", longitud_alambre_necesario);

    return 0;
}
