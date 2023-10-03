// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 19/09/2023  25/09/2023
// RMB_A01_02_432



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int msges();
void menu();


int es_numero(char caracter);

int es_espacio(char caracter);

int validarCadena(const char *cadena);


void datos(char cadena[]);


void ej1_pt2(char cadena[]);
void ej2_pt2(char cadena[]);
void ej3_pt2(char cadena[]);
void ej4_pt2(char cadena[]);
void ej5_pt2(char cadena[]);
void ej6_pt2(char cadena[]);
void ej7_pt2(char cadena[]);
void ej8_pt2(char cadena[]);
void ej9_pt2(char cadena[]);


int main()
{
    menu();
    return 0;
}


int msges()
{ 
    int op;

    system ("CLS");
    printf ("\n MENU \n");
    printf ("\n PARTE 2 \n");
    printf("1.- Mayusculas \n");
    printf("2.- Minusculas \n");
    printf("3.- Capital \n");
    printf("4.- Cantidad \n");
    printf("5.- Inversa \n");
    printf("6.- Nueva Cadena \n");
    printf("7.- Alfabeto \n");
    printf("8.- TODO \n");
    printf("9.- PALINDROMO \n");
    printf("10.- SALIR  \n");
    printf("SELECCCIONA UNA OPCION: ");
    scanf ("%d",&op);

    return op;
}


void menu()
{
  int op;
  char cadena[50];
  do{
      op=msges();
      switch (op)
      {
        case 1:
              datos(cadena);
              ej1_pt2(cadena);
              break;
        case 2:
              datos(cadena);
              ej2_pt2(cadena);
              break;
        case 3:
              datos(cadena);
              ej3_pt2(cadena);
              break;
        case 4:
              datos(cadena);
              ej4_pt2(cadena);
              break;
        case 5:
              datos(cadena);
              ej5_pt2(cadena);
              break;
        case 6:
              datos(cadena);
              ej6_pt2(cadena);
              break;
        case 7:
              datos(cadena);
              ej7_pt2(cadena);
              break;
        case 8:
              datos(cadena);
              ej8_pt2(cadena);
              break;      
        case 9:
              datos(cadena);
              ej9_pt2(cadena);
              break;
        case 0:
              printf("Saliste del programa.\n");
              break;
        default:
                printf("Opcion Invalida.\n");
                break;
      }
    }while (op != 0);
}


int validarCadena(const char *cadena) 
{
    int contieneNumero = 0;
    int contieneDobleEspacio = 0;

    for (int i = 0; cadena[i] != '\0'; i++) 
    {
        if (es_numero(cadena[i])) 
        {
            contieneNumero = 1;
        } 
        if (es_espacio(cadena[i])) 
        {
            if (cadena[i + 1] == ' ') 
            {
                contieneDobleEspacio = 1;
            }
        }
    }

    if (contieneNumero || contieneDobleEspacio) 
    {
        
        return 0;
    } 
    else 
    {
      
        return 1; 
    }
}

int es_numero(char caracter) 
{
    return (caracter >= '0' && caracter <= '9');
}

int es_espacio(char caracter) 
{
    return (caracter == ' ');
}


void datos(char cadena[])
{
    system ("CLS");
    printf( "Introduzca una palabra: " );
    fflush(stdin);
    gets(cadena);

    
    if (!validarCadena(cadena)) 
    {
        printf("La cadena no cumple con los requisitos.\n");
        printf("No uses dobles espacios y no ingreses numeros.\n");
        
        cadena[0] = '\0'; 
        system("PAUSE");
    }
}


{
  
    if (cadena[0] != '\0')
    {
        system ("CLS");
        
        printf("CONVERTIR A MAYUSCULAS\n");
        
        for (int i = 0; cadena[i] != '\0'; i++)
        {
            
            if (cadena[i] >= 'a') 
            {
                if (cadena[i] <= 'z') 
                {
                   
                    cadena[i] = cadena[i] - ('a' - 'A'); 
                }
            }
       
            printf("%c", cadena[i]);
        }
        printf("\n");
        system("PAUSE");
    }
}


void ej2_pt2(char cadena[])
{
    if (cadena[0] != '\0')
    {
        system ("CLS");
       
        printf("CONVERTIR A MINUSCULAS\n");
        
        for (int i = 0; cadena[i] != '\0'; i++)
        {
            
            if (cadena[i] >= 'A') 
            {
                if (cadena[i] <= 'Z') 
                {
                    
                    cadena[i] = cadena[i] - ('A' - 'a'); 
                }
            }
        
            printf("%c", cadena[i]);
        }
        printf("\n");
        system("PAUSE");
    }
}


void ej3_pt2(char cadena[])
{
    if (cadena[0] != '\0')
    {
        system ("CLS");
        
        printf("CONVERTIR A CAPITAL\n");
       
        int primera_letra = 1;
        
        for (int i = 0; cadena[i] != '\0'; i++)
        {
            
            if (cadena[i] >= 'a') 
            {
                if (cadena[i] <= 'z') 
                {
                    
                    if (primera_letra)
                    {
                        
                        cadena[i] = cadena[i] - ('a' - 'A');
                        
                        primera_letra = 0;
                    }
                }
            }
            
            printf("%c", cadena[i]);
        }
        printf("\n");
        system("PAUSE");
    }
}



void ej4_pt2(char cadena[])
{
    system ("CLS");
    printf("hola");
    system("PAUSE");
}


void ej5_pt2(char cadena[])
{
    system ("CLS");
    printf("hola");
    system("PAUSE");
}


void ej6_pt2(char cadena[])
{
    system ("CLS");
    printf("hola");
    system("PAUSE");
}


void ej7_pt2(char cadena[])
{
    system ("CLS");
    printf("hola");
    system("PAUSE");
}


void ej8_pt2(char cadena[])
{
    system ("CLS");
    printf("hola");
    system("PAUSE");
}


void ej9_pt2(char cadena[])
{
    system ("CLS");
    printf("hola");
    system("PAUSE");
}


