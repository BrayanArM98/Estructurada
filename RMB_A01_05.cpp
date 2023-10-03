// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 16/08/2023  17/08/2023
// Algoritmo para el calculo del salario semanal de un trabajador
// RMB_A01_05_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;



int main() 

{
    
    
    int Horas_Semanales, Horas_Extra, Horas_Normales, Salario_Por_Hora, Salario_Normal, Salario_Extra, Salario_Total;

    printf("Ingresa el número de horas semanales trabajadas: ");
    scanf("%d", &Horas_Semanales);

    printf("Ingresa el salario por hora: ");
    scanf("%d", &Salario_Por_Hora);

    Horas_Normales = Horas_Semanales;
    if (Horas_Semanales > 40) {
        Horas_Extra = Horas_Semanales - 40;
        Horas_Normales = 40;
    } else {
        Horas_Extra = 0;
    }

    Salario_Normal = Horas_Normales * Salario_Por_Hora;

    if (Horas_Extra > 0) {
        if (Horas_Extra <= 9) {
            Salario_Extra = Horas_Extra * Salario_Por_Hora * 2;
        } else {
            Salario_Extra = (Horas_Extra - 9) * Salario_Por_Hora * 3 + 9 * Salario_Por_Hora * 2;
        }
    } else {
        Salario_Extra = 0;
    }
