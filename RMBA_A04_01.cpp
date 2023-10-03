// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// 4 operaciones basicas con menu
// RMB_A04_01_432

#include <iostream>

int main() 
{
    int opcion;
    int num1, num2;

    do 
    {
        printf("MEN�\n");
        printf("1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Multiplicaci�n\n");
        printf("4.- Divisi�n\n");
        printf("0.- Salir\n");
        printf("Seleccione una opci�n: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) 
        {
            printf("Ingrese el primer n�mero: ");
            scanf("%d", &num1);
            printf("Ingrese el segundo n�mero: ");
            scanf("%d", &num2);

            switch (opcion) 
            {
                case 1:
                    printf("Resultado: %d + %d = %d\n", num1, num2, num1 + num2);
                    break;
                case 2:
                    printf("Resultado: %d - %d = %d\n", num1, num2, num1 - num2);
                    break;
                case 3:
                    printf("Resultado: %d * %d = %d\n", num1, num2, num1 * num2);
                    break;
                case 4:
                    if (num2 != 0) 
                    {
                        printf("Resultado: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                    } else 
                    {
                        printf("Error: Divisi�n por cero no permitida.\n");
                    }
                    break;
            }
        } else {
            printf("Opci�n no v�lida. Por favor, seleccione una opci�n v�lida.\n");
        }
    } while (opcion != 0);

    return 0;
}
