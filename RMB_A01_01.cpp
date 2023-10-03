// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 16/08/2023  17/08/2023
// Algoritmo para calcular el volumen de un cilindro
// RMB_A01_01_2023

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
 int main ( )
{

 float pi=3.141593 ;
 float r;
 float h;
 float v;

 printf("DAME EL VALOR DEL RADIO\n");
 scanf("%f", &r);


 printf("DAME EL VALOR DE LA ALTURA\n");
 scanf("%f", &h);


v=pi*pow(r,2)*h;

printf("EL VOLUMEN DEL CILINDRO ES: %.3f",v);

return 0;

}