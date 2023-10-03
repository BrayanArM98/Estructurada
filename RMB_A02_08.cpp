// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 23/08/2023  23/08/2023
// Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor
// RMB_A02_08_4032

#include <iostream>

int main() {
    int num1, num2, num3;

    printf("Ingrese tres números separados por espacios: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 <= num2 && num2 <= num3) || (num3 <= num2 && num2 <= num1)) 
    {
        printf("%d es el número del medio.\n", num2);
    } else 
    {
        printf("%d es el número del medio.\n", (num1 <= num3) ? num1 : num3);
    }

    return 0;
}
