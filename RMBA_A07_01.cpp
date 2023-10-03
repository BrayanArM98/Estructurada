// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 19/09/2023  25/09/2023
// RMB_A07_01_432


#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int msges();
void menu();


void datos(char nombre[]);
int validar(char mensj[], int ri, int rf);


void salida1(char nombre[]);
void salida2(char nombre[]);
void salida3(char nombre[]);
void salida4(char nombre[]);
void salida5(char nombre[]);
void salida6(char nombre[]);
void salida7(char nombre[]);
void salida8(char nombre[]);
void salida9(char nombre[]);
void salida10(char nombre[]);


int main()
{
    menu();
    return 0;
}


int msges()
{ 
    int op;

    system ("CLS");
    printf("\n MENU PARA LAS DIFERENTES SALIDAS \n");
    printf("\n OPCIONES: \n");
    printf("1.- MAYUSCULAS\n");
    printf("2.- MAYUSCULAS AL REVES\n");
    printf("3.- UNA LETRA POR RENGLON\n");
    printf("4.- UNA LETRA POR RENGLON AL REVES\n");
    printf("5.- PALABRA MENOS UNA LETRA\n");
    printf("6.- LA PALABRA MENOS UNA LETRA AL REVES\n");
    printf("7.- LA PALABRA MENOS UNA LETRA DEL INICIO\n");
    printf("8.- LA PALABRA MENOS UNA LETRA DEL INICIO AL REVES\n");
    printf("9.- SOLO CONSONANTES\n");
    printf("10.-SOLO VOCALES\n");
    printf("11.- SALIR  \n");
    op = validar ("ESCOGE UNA OPCION: ", 0, 10);

    return op;
}



void menu()
{
     system ("CSL");
    int op;
    char nombre[50];
    do {
        op = msges();
        switch(op)
        {
            case 1:
                datos(nombre);
                salida1(nombre);
                break;
            case 2:
                datos(nombre);
                salida2(nombre);
                break;
            case 3:
                datos(nombre);
                salida3(nombre);
                break;
            case 4:
                datos(nombre);
                salida4(nombre);
                break;
            case 5:
                datos(nombre);
                salida5(nombre);
                break;
            case 6:
                datos(nombre);
                salida6(nombre);
                break;
            case 7:
                datos(nombre);
                salida7(nombre);
                break;
            case 8:
                datos(nombre);
                salida8(nombre);
                break;
            case 9:
                datos(nombre);
                salida9(nombre);
                break;
            case 10:
                datos(nombre);
                salida10(nombre);
                break;
            case 0:
                printf("Saliste del programa.\n");
                break;
            default:
                printf("Opcion Invalida.\n");
                break;
        }
    } while(op != 0);
    system("PAUSE");
}


int validar(char mensj[], int ri, int rf) 
{
    int num;
   
   
    char cadena[50]; 
    
    
    do
    {
        printf("%s", mensj);
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < ri || num > rf);
    
    return num;
}



void datos(char nombre[])
{
    system ("CLS");
    printf("Introduzca su nombre: ");
    fflush(stdin);
    gets(nombre);

    if (nombre[strlen(nombre) - 1] == '\n') 
    {
        nombre[strlen(nombre) - 1] = '\0';
    }
}


void salida1(char nombre[])
{
    system ("CLS");
   
    printf("Salida 1: MAYUSCULAS\n");
  
    for (int i = 0; nombre[i] != '\0'; i++)
    {
        
        if (nombre[i] >= 'a') 
        {
            if (nombre[i] <= 'z') 
            {
                
                nombre[i] = nombre[i] - ('a' - 'A'); 
            }
        }
    
        printf("%c", nombre[i]);
    }
    printf("\n");
    system("PAUSE"); 
}


void salida2(char nombre[])
{
    system("CLS");
    
    printf("Salida 2: MAYUSCULAS AL REVES\n");

    int length = strlen(nombre);

    for (int i = length - 1; i >= 0; i--)
    {
        if (nombre[i] >= 'a')
        {
            if (nombre[i] <= 'z')
            {
                nombre[i] = nombre[i] - ('a' - 'A');
            }
        }

        printf("%c", nombre[i]);
    }

    printf("\n");
    system("PAUSE");
}


void salida3(char nombre[])
{
    system ("CLS");
    
    printf("Salida 3: UNA LETRA POR RENGLON\n");

    for (int i = 0; nombre[i] != '\0'; i++)
    {
        if (nombre[i] >= 'a')
        {
            if (nombre[i] <= 'z')
            {
                nombre[i] = nombre[i] - ('a' - 'A');
            }
        }

        printf("%c\n", nombre[i]);
    }

    printf("\n");
    system("PAUSE"); 
}


void salida4(char nombre[])
{
    system ("CLS");
    
    printf("Salida 4: UNA LETRA POR RENGLON AL REVES\n");

    int length = strlen(nombre);

    for (int i = length - 1; i >= 0; i--)
    {
        if (nombre[i] >= 'a')
        {
            if (nombre[i] <= 'z')
            {
                nombre[i] = nombre[i] - ('a' - 'A');
            }
        }

        printf("%c\n", nombre[i]);
    }

    printf("\n");
    system("PAUSE"); 
}


void salida5(char nombre[])
{
    system ("CLS");
    
    printf("Salida 5: LA PALABRA MENOS UNA LETRA\n"); 
    
    int length = strlen(nombre);
    char copia_nombre[50];
   
    strcpy(copia_nombre, nombre);
    
    for (int i = length; i >= 0; i--) 
    {
        
        copia_nombre[i] = '\0'; 
         
        for (int j = 0; copia_nombre[j] != '\0'; j++)
        {
            if (copia_nombre[j] >= 'a')
            {
                if (copia_nombre[j] <= 'z')
                {
                    copia_nombre[j] = copia_nombre[j] - ('a' - 'A');
                }
            }
            
            printf("%c", copia_nombre[j]);
        }
        
        printf("\n");
    }

    printf("\n");
    system("PAUSE");  
}


void salida6(char nombre[])
{
    system ("CLS");
    printf("Salida 6: LA PALABRA MENOS UNA LETRA AL REVES\n");
    
    int length = strlen(nombre);
    char copia_nombre[50];

    strcpy(copia_nombre, nombre);

    for (int i = length - 1; i > 0; i--) 
    {
        
        copia_nombre[i] = '\0'; 

        for (int j = length - 1; j >= 0; j--)
        {
            if (copia_nombre[j] >= 'a')
            {
                if (copia_nombre[j] <= 'z')
                {
                    copia_nombre[j] = copia_nombre[j] - ('a' - 'A');
                }
            }

            printf("%c", copia_nombre[j]);
        }
        
        printf("\n");
    }

    printf("\n");
    system("PAUSE");  
}


void salida7(char nombre[])
{
    system ("CLS");
    printf("Salida 7: LA PALABRA MENOS UNA LETRA DEL INICIO\n");
   
    char copia_nombre[50];
    
    strcpy(copia_nombre, nombre);
    
    for (int i = 0; copia_nombre[i] != '\0'; i++)
    {
        if (copia_nombre[i] >= 'a')
        {
            if (copia_nombre[i] <= 'z')
            {
                copia_nombre[i] = copia_nombre[i] - ('a' - 'A');
            }
        }
        printf("%c\n", copia_nombre + i + 1);
    }
    printf("\n");
    system("PAUSE"); 
}


void salida8(char nombre[])
{
    system ("CLS");

    printf("Salida 8: LA PALABRA MENOS UNA LETRA DEL INICIO AL REVES\n");
    
    int length = strlen(nombre);
    char copia_nombre[50];

    strcpy(copia_nombre, nombre);

    for (int i = 0; copia_nombre[i] != '\0'; i++) 
    {
        
        copia_nombre[i] = '\0'; 

        for (int j = length - 1; j >= 0; j--)
        {
            if (copia_nombre[j] >= 'a')
            {
                if (copia_nombre[j] <= 'z')
                {
                    copia_nombre[j] = copia_nombre[j] - ('a' - 'A');
                }
            }
            printf("%c", copia_nombre[j]);
        }
        printf("\n");
    }
    printf("\n");
    system("PAUSE"); 
}


void salida9(char nombre[])
{
    system ("CLS");
    
    printf("Salida 9: SOLO CONSONANTES\n");
    
    for (int i = 0; nombre[i] != '\0'; i++) 
    {
        if (nombre[i] >= 'a') 
        {
            if(nombre[i] <= 'z')
            {
                nombre[i] = nombre[i] - ('a' - 'A');
            }
        }
    }
    
    for (int i = 0; nombre[i] != '\0'; i++) 
    {
        if ( nombre[i] != 'A')
        {
            if (nombre[i] != 'E')
            {
                if ( nombre[i] != 'I')
                {
                    if ( nombre[i] != 'O')
                    {
                        if ( nombre[i] != 'U')
                        {
                            printf ( "%c", nombre[i] );
                        }
                    }
                }
            }
        }
    }
    printf("\n");
    system("PAUSE");  
}


void salida10(char nombre[])
{
    system ("CLS");
   
    printf("Salida 10: SOLO VOCALES\n");
    
    for (int i = 0; nombre[i] != '\0'; i++) 
    {
        if (nombre[i] >= 'a') 
        {
            if(nombre[i] <= 'z')
            {
                nombre[i] = nombre[i] - ('a' - 'A');
            }
        }
    }
    
    for (int i = 0; nombre[i] != '\0'; i++) 
    {
        if ( nombre[i] == 'A')
        {
            printf ( "%c", nombre[i] );
        }
        if (nombre[i] == 'E')
        {
            printf ( "%c", nombre[i] );
        }
        if ( nombre[i] == 'I')
        {
            printf ( "%c", nombre[i] );
        }
        if ( nombre[i] == 'O')
        {
            printf ( "%c", nombre[i] );
        }
        if ( nombre[i] == 'U')
        {
            printf ( "%c", nombre[i] );
        }
        
    }
    printf("\n");
    system("PAUSE");  
}





