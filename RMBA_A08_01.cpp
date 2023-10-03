// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 25/09/2023  3/010/2023
// RMB_A08_01_432



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void menu(void);
int vectorman(int vector1[], int size);
int vectorrand(int vector2[], int size);
int vector1y2(int vector1[], int vector2[], int vector3[], int size);
int imprimir(int vector[], int size);
int matriz4(int matriz[][4], int vector1[], int vector2[], int size);
int imprimirmat(int matriz[][4], int size);


int main()
{
    srand(time(NULL));
    menu();

    return 0;
}


void menu()
{
    int op, c = 0, vector1[10], vector2[10], vector3[20], matriz[4][4];

    do
    {
        system("CLS");
        c++;
        printf("\t MENU \n");
        printf("1. Llenado de vector manualmente. \n");
        printf("2. Llenado de vector aleatorio.\n");
        printf("3. Llenado de vector con los primeros 2.\n");
        printf("4. Imprimir vectores.\n");
        printf("5. Llenado de matriz 4x4.\n");
        printf("6. Imprimir matriz 4x4.\n");
        printf("0. Salir.\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            vectorman(vector1, 10);
            break;
        case 2:
            vectorrand(vector2, 10);
            break;
        case 3:
            vector1y2(vector1, vector2, vector3, 10);
            break;
        case 4:
            imprimir(vector1, 10);
            imprimir(vector2, 10);
            imprimir(vector3, 20);
            break;
        case 5:
            matriz4(matriz, vector1, vector2, 4);
            break;
        case 6:
            imprimirmat(matriz, 4);
            break;
        case 0:
            printf("Repetiste el menu un total de %d veces. Fue un placer...\n", c);
            break;
        default:
            printf("Opcion no valida\n");
            break;
            system("CLS");
            printf("\n Deseas repetir el menu?\n 1. Si\n 0. No\n");
            scanf("%d", &op);
        }
    } while (op != 0);
}




int vectorman(int vector1[], int size)
{
    int i, val, sal;

    for (i = 0; i < size; i++)
    {
        sal = 1;
        do
        {
            printf("Ingrese un valor entre el 30 y el 70: ");
            scanf("%d", &val);
            if (val >= 30 && val <= 70) 
            {
                vector1[i] = val;
                sal = 1;
            }
            else
            {
                printf("Ingrese un valor valido\n");
                system("pause");
                sal = 0;
            }
        } while (sal != 1);
    }
    printf("\nProceso terminado con exito...");
    system("pause");
    return 0;
}


int vectorrand(int vector2[], int size)
{
    int i, n, j, sal;

    for (i = 0; i < size; i++)
    {
        sal = 1;
        do
        {
            n = rand() % 20 + 1;
            for (j = 0; j < i; j++) 
            {
                if (vector2[j] == n)
                {
                    sal = 0;
                }
            }
            if (sal == 1)
            {
                vector2[i] = n;
            }
        } while (sal != 1);
    }
    printf("\nProceso terminado con exito...");
    system("pause");
    return 0;
}


int vector1y2(int vector1[], int vector2[], int vector3[], int size)
{
    int i, j;

    for (i = 0; i < size; i++) 
    {
        vector3[i] = vector1[i];
    }
    for (j = 0; j < size; j++) 
    {
        vector3[j + 10] = vector2[j];
    }
    printf("\nProceso terminado con exito...");
    system("pause");
    return 0;
}


int imprimir(int vector[], int size)
{
    int i;

    printf("\n Vector: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", vector[i]);
    }
    printf("\nProceso terminado con exito...");
    system("pause");
    return 0;
}


int matriz4(int matriz[][4], int vector1[], int vector2[], int size)
{
    int i, j, sup1 = 0, sup2 = 0;

    for (i = 0; i < size; i++)
    { 
        for (j = 0; j < size; j++)
        {
            if (sup1 < 10)
            { 
                matriz[i][j] = vector1[sup1++];
            }
            else
            {
                if (sup2 < 10)
                { 
                    matriz[i][j] = vector2[sup2++];
                }
            }
        }
    }
    printf("\nProceso terminado con exito...");
    system("pause");
    return 0;
}


int imprimirmat(int matriz[][4], int size)
{
    int i, j;

    printf("Elementos de la matriz:\n");
    for (i = 0; i < size; i++) 
    {
        for (j = 0; j < size; j++)
        {
            printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\nProceso terminado con exito...");
    system("pause");

    return 0;
}
