// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 10/09/2023  10/09/2023
// Signo zodiacal
// RMB_A02_07_432

#include <iostream>

void ObtenerSignoYHoroscopo(int mes, int dia) 
{
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        printf("Tu signo del zodiaco es Aries.\n");
        printf("Hor�scopo del d�a para Aries: \n");
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        printf("Tu signo del zodiaco es Tauro.\n");
        printf("Hor�scopo del d�a para Tauro: \n");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("Tu signo del zodiaco es G�minis.\n");
        printf("Hor�scopo del d�a para G�minis: \n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        printf("Tu signo del zodiaco es C�ncer.\n");
        printf("Hor�scopo del d�a para C�ncer: \n");
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        printf("Tu signo del zodiaco es Leo.\n");
        printf("Hor�scopo del d�a para Leo: \n");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("Tu signo del zodiaco es Virgo.\n");
        printf("Hor�scopo del d�a para Virgo: \n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("Tu signo del zodiaco es Libra.\n");
        printf("Hor�scopo del d�a para Libra: \n");
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("Tu signo del zodiaco es Escorpio.\n");
        printf("Hor�scopo del d�a para Escorpio: \n");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("Tu signo del zodiaco es Sagitario.\n");
        printf("Hor�scopo del d�a para Sagitario: \n");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        printf("Tu signo del zodiaco es Capricornio.\n");
        printf("Hor�scopo del d�a para Capricornio: \n");
    } else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        printf("Tu signo del zodiaco es Acuario.\n");
        printf("Hor�scopo del d�a para Acuario: \n");
    } else {
        printf("Tu signo del zodiaco es Piscis.\n");
        printf("Hor�scopo del d�a para Piscis: \n");
    }
}

int main() 
{
    int mes, dia;

    printf("Ingresa tu mes de nacimiento (1-12): ");
    scanf("%d", &mes);

    printf("Ingresa tu d�a de nacimiento (1-31): ");
    scanf("%d", &dia);

    ObtenerSignoYHoroscopo(mes, dia);

    return 0;
}
