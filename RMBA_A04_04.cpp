// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// Horas trabajadas 
// RMB_A04_04_432

#include <iostream>

int main() {
    double horasTrabajadas, salarioPorHora;
    const double jornadaNormal = 40.0;
    const double horasExtrasDobles = 9.0;
    const double horasExtrasTriples = 10.0;
    double salarioNormal, salarioExtra, salarioTotal;

   
    printf("Ingrese las horas trabajadas a la semana: ");
    scanf("%lf", &horasTrabajadas);

    printf("Ingrese el salario por hora: ");
    scanf("%lf", &salarioPorHora);

    if (horasTrabajadas <= jornadaNormal) {
        salarioNormal = horasTrabajadas * salarioPorHora;
        salarioExtra = 0.0;
    } else {
       
        salarioNormal = jornadaNormal * salarioPorHora;
        double horasExtras = horasTrabajadas - jornadaNormal;

        
        if (horasExtras <= horasExtrasDobles) {
            salarioExtra = horasExtras * (2 * salarioPorHora);
        } else {
            double horasDobles = horasExtrasDobles;
            double horasTriples = horasExtras - horasExtrasDobles;
            salarioExtra = (horasDobles * (2 * salarioPorHora)) + (horasTriples * (3 * salarioPorHora));
        }
    }


    salarioTotal = salarioNormal + salarioExtra;

  
    printf("\nResumen del salario:\n");
    printf("Salario por hora: %.2lf\n", salarioPorHora);
    printf("Horas Trabajadas: %.2lf\n", horasTrabajadas);
    printf("Salario normal: %.2lf\n", salarioNormal);
    printf("Salario extra: %.2lf\n", salarioExtra);
    printf("Salario Total: %.2lf\n", salarioTotal);

    return 0;
}
