// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 10/09/2023  10/09/2023
// Piedra papel o tijera anidado
// RMB_A02_02_432

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int jugador, computadora;
    srand(time(0));

 
    printf("Elije una opcion:\n");
    printf("1. Piedra\n");
    printf("2. Papel\n");
    printf("3. Tijera\n");
    scanf("%d", &jugador);


    computadora = rand() % 3 + 1;

   
    printf("Jugador eligio: ");
    switch (jugador) {
        case 1:
            printf("Piedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tijera\n");
            break;
        default:
            printf("Opcion invalida\n");
            return 1;
    }
    printf("Computadora eligio: ");
    switch (computadora) {
        case 1:
            printf("Piedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tijera\n");
            break;
    }

   
    if (jugador == computadora) {
        printf("Empate!\n");
    } else if ((jugador == 1 && computadora == 3) || (jugador == 2 && computadora == 1) || (jugador == 3 && computadora == 2)) {
        printf("Ganaste!\n");
    } else {
        printf("Computadora gano!\n");
    }

    return 0;
}
