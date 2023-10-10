// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 10/09/2023  10/09/2023
// Libreria de funciones 
// 4life.h

#include <stdio.h>
#include <stdlib.h>




int ValidarCadena(char mensj[], int ri, int rf);
int DigitoEncontrado(int vector[], int longitud, int num);


void EsperarUsuario();


void LlenarVectorSinRepetir(int vector1[], int n, int ri, int rf);
void LlenarMatrizSinRepetir(int m, int n, int matriz[][4], int ri, int rf);
void ImprimirVector(int vector[], int n);
void ImprimirMatriz(int n, int m, int matriz[][4]);
void OrdenarVector(int vector[], int n);
int BusqSecVector(int vector[], int n, int num);
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


int DigitoEncontrado(int vector[], int longitud, int num)
{
   
    int i;
    
    for (i = 0; i < longitud; i++)
    {
        if (vector[i] == num)
        {
           
            return i;
        }
    }
    
    return -1;
}




void EsperarUsuario()
{
    printf("\nPresione ENTER para continuar");
    
    getchar();
}




void LlenarVectorSinRepetir(int vector1[], int n, int ri, int rf)
{
    
    int num, rango;
    int i;
    
    num = 0;
    rango = (rf - ri) + 1;
   
    for (i = 0; i < n; i++)
    {
        
        do
        {
            num = (rand() % rango) + ri;
            
        } while (DigitoEncontrado(vector1, i, num) != -1);
        vector1[i] = num;
    }
}


void LlenarMatrizSinRepetir(int m, int n, int matriz[][4], int ri, int rf)
{
    
    int vector[m * n];
    LlenarVectorSinRepetir(vector, m * n, ri, rf);
   
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matriz[i][j] = vector[k++];
        }
    }
}



void ImprimirVector(int vector[], int n)
{
    
    int i;
    
    for (i = 0; i < n; i++)
    {
        
        printf("Vector [%d]: [%2d]\n", i, vector[i]);
    }
}


void ImprimirMatriz(int n, int m, int matriz[][4])
{
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            printf("[%2d]\t", matriz[i][j]);
        }
        printf("\n");
    }
}


void OrdenarVector(int vector[], int n)
{
    
    int i, j;
    int temp;
   
    for(i = 0; i < n; i++)
    {
        
        for(j = 0; j < n; j++)
        {
            
            if(vector[j] > vector[i])
            {
                
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
}


int BusqSecVector(int vector[], int n, int num)
{
    
    int i;
    
    
    for(i = 0; i < n; i++)
    {
        if(vector[i] == num)
        {
            return i;
        }
    }
    return -1;
}