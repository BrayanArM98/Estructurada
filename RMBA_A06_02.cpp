// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 17/09/2023  17/09/2023
// Eatructuras de control esqueleto
// RMB_A06_02_432


#include <cstdio>
#include <cstdlib>
#include <cmath>


void limpiarPantalla() {
    printf("Presiona una tecla para continuar...\n");
    getchar();
    system("cls"); 
}


double calcularPromedio(int calificaciones[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += calificaciones[i];
    }
    return static_cast<double>(suma) / n;
}


void imprimirTablasDeMultiplicar() {
    for (int i = 1; i <= 10; i++) {
        printf("TABLA DEL %d\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        limpiarPantalla();
    }
}


void leerNumerosYCalcular(int rangoMin, int rangoMax) {
    int numero;
    int suma = 0;
    int cantidadNumeros = 0;

    printf("Ingresa números dentro del rango [%d, %d].\n", rangoMin, rangoMax);
    printf("Ingresa un número negativo para terminar.\n");

    while (1) {
        printf("Ingresa un número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero >= rangoMin && numero <= rangoMax) {
            suma += numero;
            cantidadNumeros++;
        }
    }

    if (cantidadNumeros > 0) {
        double media = static_cast<double>(suma) / cantidadNumeros;
        printf("La suma de los números válidos es: %d\n", suma);
        printf("La media aritmética de los números válidos es: %.2f\n", media);
    } else {
        printf("No se ingresaron números válidos en el rango.\n");
    }
}


void calcularPromedioDePeso() {
    int pesoTotal = 0;
    int contadorTuristas = 0;

    while (contadorTuristas < 10) {
        int pesoTurista;
        printf("Ingresa el peso del turista %d en kilogramos: ", contadorTuristas + 1);
        scanf("%d", &pesoTurista);

        if (pesoTurista < 0) {
            break;
        }

        pesoTotal += pesoTurista;
        contadorTuristas++;
    }

    if (contadorTuristas > 0) {
        double promedioPeso = static_cast<double>(pesoTotal) / contadorTuristas;
        printf("El promedio de peso de los turistas es: %.2f kg\n", promedioPeso);

        if (contadorTuristas <= 10 && pesoTotal <= 700) {
            printf("Se cumplió la condición de cantidad de turistas.\n");
        } else if (promedioPeso <= 700 * 1.15) {
            printf("Se cumplió la condición de peso total.\n");
        } else {
            printf("No se cumplió ninguna de las condiciones.\n");
        }
    } else {
        printf("No se ingresaron datos de turistas.\n");
    }
}


void calcularResultadoAlumno() {
    double parcial1, parcial2, parcial3;
    printf("Ingresa la calificación del primer parcial: ");
    scanf("%lf", &parcial1);
    printf("Ingresa la calificación del segundo parcial: ");
    scanf("%lf", &parcial2);
    printf("Ingresa la calificación del tercer parcial: ");
    scanf("%lf", &parcial3);

    double promedio = (parcial1 + parcial2 + parcial3) / 3.0;

    printf("El promedio del alumno es: %.2f\n", promedio);

    if (promedio < 50) {
        printf("Repetir materia.\n");
    } else if (promedio < 70) {
        printf("Baja temporal.\n");
    } else {
        printf("Aprobado.\n");
    }
}

int main() {
    int opcion;

    do {
        printf("MENU:\n");
        printf("1. Calificaciones de alumnos\n");
        printf("2. Tablas de multiplicar\n");
        printf("3. Suma y media de números en rango\n");
        printf("4. Promedio de peso de turistas\n");
        printf("5. Resultado de alumno\n");
        printf("6. Salir\n");
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
        case 1:
            // Código para el primer caso
            // ...
            break;
        case 2:
            imprimirTablasDeMultiplicar();
            break;
        case 3:
            leerNumerosYCalcular(1, 100); 
            break;
        case 4:
            calcularPromedioDePeso();
            break;
        case 5:
            calcularResultadoAlumno();
            break;
        case 6:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción no válida. Introduce una opción del 1 al 6.\n");
        }

        limpiarPantalla();
    } while (opcion != 6);

    return 0;
}

