// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 23/08/2023  23/08/2023
// Algoritmo que lea 3 números y desplegar los 3 números en orden ascendente
// RMB_A02_09_4032

#include <iostream>

int main() 
{
    int num1, num2, num3;

    printf("Ingrese tres números separados por espacios: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2) 
    {
        if (num2 <= num3) 
        {
            printf("Los números en orden ascendente: %d %d %d\n", num1, num2, num3);
        } else 
        {
            if (num1 <= num3) 
            {
                printf("Los números en orden ascendente: %d %d %d\n", num1, num3, num2);
            } else 
            {
                printf("Los números en orden ascendente: %d %d %d\n", num3, num1, num2);
            }
        }
    } else {
        if (num1 <= num3) 
        {
            printf("Los números en orden ascendente: %d %d %d\n", num2, num1, num3);
        } else 
        {
            if (num2 <= num3) 
            {
                printf("Los números en orden ascendente: %d %d %d\n", num2, num3, num1);
            } else 
            {
                printf("Los números en orden ascendente: %d %d %d\n", num3, num2, num1);
            }
        }
    }

    return 0;
}
