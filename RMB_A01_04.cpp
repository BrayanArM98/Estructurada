// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 16/08/2023  17/08/2023
// Algoritmo que lea 3 numeros y despliegue el numero del medio
// RMB_A01_04_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;



int main() 

{
    float numero1, numero2, numero3;

    
    printf("INGRESA TU PRIMER NUMERO: ");
    scanf("%f", &numero1);
    printf("INGRESA TU SEGUNDO NUMERO: ");
    scanf("%f", &numero2);
    printf("INGRESA TU TERCER NUMERO: ");
    scanf("%f", &numero3);

    
    float middle;

    if ((numero1 <= numero2 && numero1 >= numero3) || (numero1 >= numero2 && numero1 <= numero3)) {
        middle = numero1;
    } else if ((numero2 <= numero1 && numero2 >= numero3) || (numero2 >= numero1 && numero2 <= numero3)) {
        middle = numero2;
    } else {
        middle = numero3;
    }

 
    printf("EL NUEMERO DEL MEDIO ES : %.2f\n", middle);

    return 0;
}
