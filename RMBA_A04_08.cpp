// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 31/08/2023  4/09/2023
// chin cham pum anidado
// RMB_A04_08_432

 #include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
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

   
    if (jugador == computadora) {
        printf("¡Empate!\n");
    } else if ((jugador == 0 && computadora == 2) || (jugador == 1 && computadora == 0) || (jugador == 2 && computadora == 1)) {
        printf("¡Ganaste!\n");
    } else {
        printf("¡La computadora gana!\n");
    }

    return 0;
}
