// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 24/08/2023  27/08/2023
// Algoritmo para saber si es PAR o Impar de un numero entero
// RMB_A02_02_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;




int main() 
{
    int numero;

    
    printf("Ingrese su numero entero: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("El número %d es PAR.\n", numero);
    } else {
        printf("El número %d es IMPAR.\n", numero);
    }

    return 0;
}
