// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 23/08/2023  23/08/2023
// Programa que sirva para calcular el salario semanal de un trabajador
// RMB_A02_10_4032

#include <iostream>

int main() {
    const double SALARIO_NORMAL = 40.0; 
    const double SALARIO_DOBLE = 2.0;  
    const double SALARIO_TRIPLE = 3.0;  

    double horasTrabajadas, salarioHora;
    
    printf("Ingrese las horas trabajadas en la semana: ");
    scanf("%lf", &horasTrabajadas);

    printf("Ingrese el salario por hora: ");
    scanf("%lf", &salarioHora);

    double salarioNormal, salarioExtra, salarioTotal;

    if (horasTrabajadas <= SALARIO_NORMAL) 
    {
        salarioNormal = horasTrabajadas * salarioHora;
        salarioExtra = 0.0;
    } else 
    {
        salarioNormal = SALARIO_NORMAL * salarioHora;
        double horasExtra = horasTrabajadas - SALARIO_NORMAL;
        
        if (horasExtra <= 9.0) 
        {
            salarioExtra = horasExtra * SALARIO_DOBLE * salarioHora;
        } else 
        {
            double horasDobles = 9.0;
            double horasTriples = horasExtra - 9.0;
            salarioExtra = (horasDobles * SALARIO_DOBLE + horasTriples * SALARIO_TRIPLE) * salarioHora;
        }
    }

    salarioTotal = salarioNormal + salarioExtra;

    printf("\nSalario por hora: %.2lf\n", salarioHora);
    printf("Horas trabajadas: %.2lf\n", horasTrabajadas);
    printf("Salario normal: %.2lf\n", salarioNormal);
    printf("Salario extra: %.2lf\n", salarioExtra);
    printf("Salario total: %.2lf\n", salarioTotal);

    return 0;
}
