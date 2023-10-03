// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// seleccion multiple
// RMB_A04_09_432

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    int jugador;
    int computadora;

    
    srand(time(NULL));

 
    computadora = rand() % 3;

    
    printf("Elige tu jugada:\n");
    printf("0 - Piedra\n");
    printf("1 - Papel\n");
    printf("2 - Tijera\n");
    printf("Ingresa tu elección: ");
    scanf("%d", &jugador);

    
    if (jugador < 0 || jugador > 2) {
        printf("Selección inválida. Por favor, elige 0, 1 o 2.\n");
        return 1;
    }


    printf("Tu elección: ");
    switch (jugador) {
        case 0:
            printf("Piedra\n");
            break;
        case 1:
            printf("Papel\n");
            break;
        case 2:
            printf("Tijera\n");
            break;
    }

    printf("Elección de la computadora: ");
    switch (computadora) {
        case 0:
            printf("Piedra\n");
            break;
        case 1:
            printf("Papel\n");
            break;
        case 2:
            printf("Tijera\n");
            break;
    }

    
    switch (jugador) {
        case 0: 
            switch (computadora) {
                case 0:
                    printf("¡Empate!\n");
                    break;
                case 1: 
                    printf("¡La computadora gana!\n");
                    break;
                case 2: 
                    printf("¡Ganaste!\n");
                    break;
            }
            break;

        case 1: 
            switch (computadora) {
                case 0: 
                    printf("¡Ganaste!\n");
                    break;
                case 1:
                    printf("¡Empate!\n");
                    break;
                case 2: 
                    printf("¡La computadora gana!\n");
                    break;
            }
            break;

        case 2: 
            switch (computadora) {
                case 0:
                    printf("¡La computadora gana!\n");
                    break;
                case 1: 
                    printf("¡Ganaste!\n");
                    break;
                case 2: 
                    printf("¡Empate!\n");
                    break;
            }
            break;
    }

    return 0;
}
