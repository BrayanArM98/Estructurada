// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// Total de consumo de agua
// RMB_A04_06_432

#include <iostream>

int main() {
    double m3Consumidos, subtotal, iva, total;

    printf("Ingrese la cantidad de metros cúbicos (M3) consumidos: ");
    scanf("%lf", &m3Consumidos);

    double costoRango1 = 50.00;
    double costoRango2 = 8.00;
    double costoRango3 = 10.00;
    double costoRango4 = 11.00;

    if (m3Consumidos <= 4) {
        subtotal = costoRango1;
    } else if (m3Consumidos <= 15) {
        subtotal = costoRango1 + (m3Consumidos - 4) * costoRango2;
    } else if (m3Consumidos <= 50) {
        subtotal = costoRango1 + (15 - 4) * costoRango2 + (m3Consumidos - 15) * costoRango3;
    } else {
        subtotal = costoRango1 + (15 - 4) * costoRango2 + (50 - 15) * costoRango3 + (m3Consumidos - 50) * costoRango4;
    }

    iva = subtotal * 0.16; 
    total = subtotal + iva;

    
    printf("\nResumen de la facturación por consumo de agua:\n");
    printf("Metros cúbicos consumidos: %.2lf M3\n", m3Consumidos);
    printf("Subtotal: $%.2lf\n", subtotal);
    printf("IVA (16%%): $%.2lf\n", iva);
    printf("Total a pagar: $%.2lf\n", total);

    return 0;
}
