// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// Desplegar numero mayor de 6 numeros
// RMB_A04_03_432

#include <iostream>

int main() {
    double numeros[6];
    double mayor;

    
    for (int i = 0; i < 6; i++) {
        printf("Ingrese el número %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    }

    
    mayor = numeros[0];

    
    for (int i = 1; i < 6; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    
    printf("El número mayor es: %.2lf\n", mayor);

    return 0;
}
