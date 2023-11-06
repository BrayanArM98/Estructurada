// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 17/09/2023  17/09/2023
// Libreria de funciones 
// 2lifes.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int ValidarCadena(char mensj[], int ri, int rf);
int ValidarCadenaTexto(const char cadena[]);

int ValidarCadena(char mensj[], int ri, int rf) 
{
    
    int num;
    
    char cadena[200]; 
    do
    {
        printf("%s", mensj);
        
        fflush(stdin); 
        gets(cadena);
        num = atoi(cadena);
    } while (num < ri || num > rf);
    
    return num;
}


int ValidarCadenaTexto(const char cadena[]) 
{
    int longitud = strlen(cadena);
    
    if (longitud == 0) 
    {
        return 0;
    }
    
    if (cadena[0] == ' ' || cadena[longitud - 1] == ' ') 
    {
        return 0; 
    }
   
    for (int i = 0; cadena[i] != '\0'; i++) 
    {
        if (cadena[i] == ' ') 
        {
            
            if(cadena[i + 1] == ' ')
            {
                return 0;
            }
        }
        else
        {
            
            if(cadena[i] < 'A' || cadena[i] > 'Z')
            {
                return 0;
            }
        }
    }
    
    return 1;
}

int Mayusculas(char cadena[]) 
{
    int i = 0;
    while ( cadena[i] != '\0' ) 
    {
        if ( cadena[i] >= 'a' )
        {
            if ( cadena [i] <= 'z' )
            {
                cadena[i] = cadena[i] - ( 'a' - 'A');
            }
        }
        i++;
    }
    return 0;
}