// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// 4 operaciones basicas con menu
// RMB_A04_01_432

#include <iostream>

int main() {
    int opcion;
    double valor;

    do {
        printf("MEN�\n");
        printf("1.- cm a pulgadas\n");
        printf("2.- cm a pies\n");
        printf("3.- Km a millas\n");
        printf("4.- Pulgadas a cm\n");
        printf("5.- Pies a cm\n");
        printf("6.- Millas a Km\n");
        printf("0.- Salir\n");
        printf("Seleccione una opci�n: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el valor en cent�metros: ");
                scanf("%lf", &valor);
                printf("%.2f cm equivale a %.2f pulgadas.\n", valor, valor / 2.54);
                break;
            case 2:
                printf("Ingrese el valor en cent�metros: ");
                scanf("%lf", &valor);
                printf("%.2f cm equivale a %.2f pies.\n", valor, valor / 30.48);
                break;
            case 3:
                printf("Ingrese el valor en kil�metros: ");
                scanf("%lf", &valor);
                printf("%.2f Km equivale a %.2f millas.\n", valor, valor / 1.60934);
                break;
            case 4:
                printf("Ingrese el valor en pulgadas: ");
                scanf("%lf", &valor);
                printf("%.2f pulgadas equivale a %.2f cm.\n", valor, valor * 2.54);
                break;
            case 5:
                printf("Ingrese el valor en pies: ");
                scanf("%lf", &valor);
                printf("%.2f pies equivale a %.2f cm.\n", valor, valor * 30.48);
                break;
            case 6:
                printf("Ingrese el valor en millas: ");
                scanf("%lf", &valor);
                printf("%.2f millas equivale a %.2f Km.\n", valor, valor * 1.60934);
                break;
            case 0:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opci�n no v�lida. Por favor, seleccione una opci�n v�lida.\n");
        }
    } while (opcion != 0);

    return 0;
}
