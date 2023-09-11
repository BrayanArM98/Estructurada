// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 10/09/2023  10/09/2023
// Piedra papel o tijera multiple
// RMB_A02_03_432

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int opcionUsuario;
    int opcionComputadora;

    printf("Juguemos al Chinchampú (Piedra, Papel, Tijera)!\n");
    printf("Elige tu opción:\n");
    printf("1. Piedra\n");
    printf("2. Papel\n");
    printf("3. Tijera\n");
    printf("Ingresa el número de tu elección: ");
    scanf("%d", &opcionUsuario);

    opcionComputadora = rand() % 3 + 1;

    printf("La computadora elige: %d\n", opcionComputadora);

    if (opcionUsuario < 1 || opcionUsuario > 3) {
        printf("Opción no válida.\n");
        return 1;
    }

    if (opcionUsuario == opcionComputadora) {
        printf("¡Empate!\n");
    } else if ((opcionUsuario == 1 && opcionComputadora == 3) ||
               (opcionUsuario == 2 && opcionComputadora == 1) ||
               (opcionUsuario == 3 && opcionComputadora == 2)) {
        printf("¡Ganaste!\n");
    } else {
        printf("¡La computadora gana!\n");
    }

    return 0;
}
