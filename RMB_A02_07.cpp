// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 23/08/2023  23/08/2023
// Algoritmo que lea 3 números y desplegar cuál número es el menor y su valor
// RMB_A02_07_4032

#include <iostream>

int main() 
{
    int num1, num2, num3;

    printf("Ingrese tres números separados por espacios: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 <= num2) 
    {
        if (num1 <= num3) 
        {
            printf("%d es el menor número.\n", num1);
        } else 
        {
            printf("%d es el menor número.\n", num3);
        }
    } else 
    {
        if (num2 <= num3) 
        {
            printf("%d es el menor número.\n", num2);
        } else 
        {
            printf("%d es el menor número.\n", num3);
        }
    }

    return 0;
}
