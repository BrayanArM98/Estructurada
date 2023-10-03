// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 10/09/2023  12/09/2023
// Eatructuras de control repetitivas
// RMB_A05_01,02,03,04_432

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int msg();
void menu(void);
void programa1(void);
void programa2(void);
void programa3(void);
void programa4(void); 

int main()
{
    menu();
    return 0;
}

int msg()
{
    int op;
    system("cls");
    printf("1.Pide al usaurio el valor de n, y desplegar todos los numeros enteros positivos menores de n en orden descendente. ");
    printf("\n2.40 numeros aleatorios entre el 0 y 200");
    printf("\n3.N(35) cantidad de números (100 -200)");
    printf("\n4.Despliegue la tabla de multiplicar de un número dado");
    printf("\n\n[0].SALIR\n"); //
    scanf("%d", &op);

    return op;
}

void menu()
{
    int op;
    do
    {
        op = msg();
        switch (op)
        {
        case 1:
            programa1();
            break;
        case 2:
            programa2();
            break;
        case 3:
            programa3();
            break;
        case 4:
            programa4();
            break;
        default:
            break;
        }
        
    } while (op != 0);
}

void programa1()
{
    system("cls");
    int n, i;
    printf("\nINGRESA EL VALOR: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("EL VALOR DE N DEBE SER POSITIVO.\n");
        return;
    }

    printf("NUMEROS ENTEROS POSITIVOS MENORES QUE  %d EN ORDEN DESCENDENTE:\n", n);
    for (int i = n - 1; i > 0; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
    system("pause");
}

void programa2()
{
    system("cls");
    int numeros[40];
    int numerosPares = 0;
    int numerosImpares = 0;
    int sumaPares = 0;
    int sumaImpares = 0;

    srand(time(NULL));

    printf("NUMEROS ALEATORIOS ENTRE 0 y 200:\n");
    for (int i = 0; i < 40; i++)
    {
        numeros[i] = rand() % 201;
        printf("%d ", numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            printf("(PAR)\n");
            numerosPares++;
            sumaPares += numeros[i];
        }
        else
        {
            printf("(IMPAR)\n");
            numerosImpares++;
            sumaImpares += numeros[i];
        }
    }

    printf("\nCANTIDAD DE NUMEROS PARES: %d\n", numerosPares);
    printf("CANTIDAD DE NUMEROS IMPARES: %d\n", numerosImpares);
    printf("SUMA DE NUMEROS PARES: %d\n", sumaPares);
    printf("SUMA DE NUMEROS IMPARES: %d\n", sumaImpares);
    system("pause");
}

void programa3()
{
    system("cls");
    int n;
    printf("\nINGRESA EL NUMERO DE DATOS: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("LA CANTIDAD DE NUMEROS DEBE SER MAYOR QUE 0.\n");
        return;
    }

    int numeros[n];
    int numeroMayor = 100;
    int numeroMenor = 200;

    srand(time(NULL));

    printf("NUMEROS ALEATORIOS ENTRE 100 Y 200:\n");
    for (int i = 0; i < n; i++)
    {
        numeros[i] = rand() % 101 + 100;
        printf("%d ", numeros[i]);

        if (numeros[i] > numeroMayor)
        {
            numeroMayor = numeros[i];
        }
        if (numeros[i] < numeroMenor)
        {
            numeroMenor = numeros[i];
        }
    }

    printf("\nNUMERO MAYOR: %d\n", numeroMayor);
    printf("NUMERO MENOR: %d\n", numeroMenor);
    system("pause");
}

void programa4()
{
    system("cls");
    int numero;
    printf("\nINGRESA EL NUMERO DE DATOS: ");
    scanf("%d", &numero);
    if (numero < 1 || numero > 20)
    {
        printf("EL NUMERO DEBE ESTAR ENTRE 1 Y 20.\n");
        return;
    }

    printf("TABLA DE MULTIPLICAR DE %d:\n", numero);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    system("pause");
}

