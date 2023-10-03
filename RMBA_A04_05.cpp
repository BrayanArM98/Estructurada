// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// Tipo de llamadas con menu
// RMB_A04_05_432

#include <iostream>

int main() {
    int opcion;
    double minutos, costoLlamada, subtotal, iva, total;

    printf("MENÚ\n");
    printf("1.- Llamada Local $3.00 sin límite de tiempo\n");
    printf("2.- Llamada Nacional $7.00 por los 3 primeros minutos y $2.00 minuto adicional\n");
    printf("3.- Llamada Internacional $9.00 por los 2 primeros minutos y $4.00 minuto adicional\n");
    printf("Seleccione el tipo de llamada (1, 2 o 3): ");
    scanf("%d", &opcion);

    printf("Ingrese la duración de la llamada en minutos: ");
    scanf("%lf", &minutos);

    switch (opcion) {
        case 1:
            costoLlamada = 3.00;
            break;
        case 2:
            if (minutos <= 3) {
                costoLlamada = 7.00;
            } else {
                costoLlamada = 7.00 + (minutos - 3) * 2.00;
            }
            break;
        case 3:
            if (minutos <= 2) {
                costoLlamada = 9.00;
            } else {
                costoLlamada = 9.00 + (minutos - 2) * 4.00;
            }
            break;
        default:
            printf("Opción no válida.\n");
            return 1; 
    }

    
    subtotal = costoLlamada;
    iva = subtotal * 0.16; 
    total = subtotal + iva;

   
    printf("\nResumen de la llamada:\n");
    printf("Tipo de llamada: %d\n", opcion);
    printf("Duración de la llamada (minutos): %.2lf\n", minutos);
    printf("Costo de la llamada: $%.2lf\n", costoLlamada);
    printf("Subtotal: $%.2lf\n", subtotal);
    printf("IVA (16%%): $%.2lf\n", iva);
    printf("Total: $%.2lf\n", total);

    return 0;
}
