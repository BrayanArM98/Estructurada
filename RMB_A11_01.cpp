// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 1/11/2023  1/11/2023
//FUNCIONES y METODOS DE ORDENACION Y BUSQUEDA ESTRUCTURAS Y LIBRERIAS PART 2
// RMB_A011_01_432


#include "2SCARP.h"


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu_mensaje();
void menu();

int menu_mensajes_agregar();
void menu_agregar();


int main()
{
    srand(time(NULL));
    menu();
    return 0;
}

int menu_mensaje()
{
    int opcion;
    system("CLS");
    printf("SISTEMA DE GESTIÓN DE ALUMNOS\n");
    printf("1.- AGREGAR ALUMNO\n");
    printf("2.- ELIMINAR ALUMNO\n");
    printf("3.- BUSCAR ALUMNO\n");
    printf("4.- ORDENAR ALUMNOS\n");
    printf("5.- IMPRIMIR ALUMNOS\n");
    printf("6.- EXPORTAR A ARCHIVO DE TEXTO\n");
    printf("0.- SALIR\n");
    opcion = ValidarCadena("OPCIÓN QUE DESEAS (0-6):\n", 0, 6);
    return opcion;
}

void menu()
{
    int opcion;
    do {
        opcion = menu_mensaje();
        system("CLS");
        switch (opcion)
        {
        case 1:
            printf("AGREGAR ALUMNO\n");
            menu_agregar();
            system("PAUSE");
            break;
        case 2:
            printf("ELIMINAR ALUMNO\n");
            system("PAUSE");
            break;
        case 3:
            printf("BUSCAR ALUMNO\n");
            system("PAUSE");
            break;
        case 4:
            printf("ORDENAR ALUMNOS\n");
            system("PAUSE");
            break;
        case 5:
            printf("IMPRIMIR ALUMNOS\n");
            system("PAUSE");
            break;
        case 6:
            printf("EXPORTAR A ARCHIVO DE TEXTO\n");
            system("PAUSE");
            break;
        case 0:
            printf("HAS SALIDO DEL PROGRAMA.\n");
            system("PAUSE");
            break;
        }
    } while (opcion != 0);
}

int menu_mensajes_agregar()
{
    int opcion;
    system("CLS");
    printf("AGREGAR ALUMNO:\n");
    printf("1.- INGRESAR DATOS MANUALMENTE\n");
    printf("2.- GENERAR DATOS AUTOMÁTICAMENTE\n");
    printf("3.- REGRESAR AL MENÚ PRINCIPAL\n");
    opcion = ValidarCadena("OPCIÓN QUE DESEAS (1-3):\n", 1, 3);
    return opcion;
}

void menu_agregar()
{
    int opcion;
    Tdatos _datos;
    do {
        system("CLS");
        opcion = menu_mensajes_agregar();
        switch (opcion)
        {
        case 1:
            printf("INGRESAR DATOS MANUALMENTE\n");
            generar_datos_manual(_datos);
            system("PAUSE");
            break;
        case 2:
            printf("GENERAR DATOS AUTOMÁTICAMENTE\n");
            generar_datos_random(_datos);
            system("PAUSE");
            break;
        case 3:
            menu();
            break;
        }
    } while (opcion != 0);
}

