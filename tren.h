// Brayan Arturo Rocha Meneses  Matricula: 371049
// Fecha 9/11/2023  9/11/2023
//ARCHIVOS DE TEXTO/LIBRERIA
// RMB_A012_01_432



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

typedef struct _datos
{
    int matricula;
    char nombre_1[50];
    char apellido_pat[50];
    char apellido_mat[50];
    int dd;
    int mm;
    int aa;
    char sexo[10];
    char estado[5];
    char curp[19];
    char inconveniente[5];
    char aux[10];
} curp;

void constructor(curp *datos);
void mayusculador(curp *datos);
void ingresa_nombre(char *cadena, curp *datos);
void ingresa_apellido_pat(char *cadena, curp *datos);
void ingresa_apellido_mat(char *cadena, curp *datos);
void consonantes(char *cadena, char *resultado);
void recolector_datos();
void guardarDatosEnArchivo(curp datos);
int validar_aa();
int validar_mm();
int validar_dd();
int validar_estado();
int validar_sexo();
int validar_matricula();
int vali_cadena(const char *cadena);

void recolector_datos()
{
    curp datos;
    int opc, aux, opc2;
    char auxc[50];

    char abreviaturas[32][10] = {
        "AGS", "BC", "BCS", "CAMP", "COAH", "COL", "CHIS", "CHIH", "DF", "DGO",
        "GTO", "GRO", "HGO", "JAL", "MEX", "MICH", "MOR", "NAY", "NL", "OAX",
        "PUE", "QRO", "QR", "SLP", "SIN", "SON", "TAB", "TAM", "TLAX", "VER", "YUC"};

    ingresa_apellido_pat(auxc, &datos);
    printf("\nEXTRANJERO NATURALIZADO: [1].SI   [2].NO: ");
    scanf("%d", &opc2);
    if (opc2 == 1)
    {
        strcpy(datos.apellido_mat, "X");
    }
    else
    {
        fflush(stdin);
        ingresa_apellido_mat(auxc, &datos);
    }

    fflush(stdin);
    ingresa_nombre(auxc, &datos);

    datos.aa = validar_aa();

    datos.mm = validar_mm();

    datos.dd = validar_dd();

    aux = validar_sexo();
    if (aux == 1)
    {
        strcpy(datos.sexo, "H");
    }
    else
    {
        strcpy(datos.sexo, " M");
    }

    opc = validar_estado();
    strcpy(datos.estado, abreviaturas[opc - 1]);

    mayusculador(&datos);
    system("cls");
    constructor(&datos);

    
    datos.matricula = validar_matricula();

    
    guardarDatosEnArchivo(datos);
}

int validar_aa()
{
    int numero;
    bool entradaValida = false;

    while (!entradaValida)
    {
        system("cls");
        printf("\n MAL [x]: 2001 \n BIEN [V]: 01\n");
        printf("\nINGRESA TU AÑO DE NACIMIENTO A DOS DIGITOS: ");
        if (scanf("%d", &numero) == 1)
        {
            if (numero >= 0)
            {
                if (numero <= 99)
                {
                    entradaValida = true;
                }
            }
        }
        else
        {
            printf("DEBE SER UN ENTERO.\n");
            while (getchar() != '\n')
                ;
        }
    }
    return numero;
}

int validar_mm()
{
    int numero;
    bool entradaValida = false;

    while (!entradaValida)
    {
        system("cls");
        printf("\n MAL [x]: MAYO/mayo/Mayo \n BIEN [V]: 05\n\n");
        printf("MESES:\n");
        printf("[1] Enero       [2] Febrero     [3] Marzo\n");
        printf("[4] Abril       [5] Mayo        [6] Junio\n");
        printf("[7] Julio       [8] Agosto      [9] Septiembre\n");
        printf("[10] Octubre    [11] Noviembre  [12] Diciembre\n");
        printf("\nINGRESA TU MES DE NACIMIENTO: ");
        if (scanf("%d", &numero) == 1)
        {
            if (numero >= 1)
            {
                if (numero <= 12)
                {
                    entradaValida = true;
                }
            }
        }
        else
        {
            printf("Entrada no válida. Debe ser un número entero.\n");
            while (getchar() != '\n')
                ; 
        }
    }
    return numero;
}

int validar_dd()
{
    int numero;
    bool entradaValida = false;

    while (!entradaValida)
    {
        system("cls");
        printf("\n MAL [x]: 45/678/420 \n BIEN [V]: 21\n");
        printf("\nINGRESA TU DIA DE NACIMIENTO: ");
        if (scanf("%d", &numero) == 1)
        {
            if (numero >= 0)
            {
                if (numero <= 31)
                {
                    entradaValida = true;
                }
            }
        }
        else
        {
            printf("DEBE SER UN ENTERO.\n");
            while (getchar() != '\n')
                ;
        }
    }
    return numero;
}

int validar_estado()
{
    int numero;
    bool entradaValida = false;

    while (!entradaValida)
    {
        system("cls");
        printf("| Entidad Federativa      | Abreviatura | Número |\n");
        printf("|-------------------------|-------------|--------|\n");
        printf("| Aguascalientes          | AGS         |   1    |\n");
        printf("| Baja California         | BC          |   2    |\n");
        printf("| Baja California Sur     | BCS         |   3    |\n");
        printf("| Campeche                | CAMP        |   4    |\n");
        printf("| Coahuila                | COAH        |   5    |\n");
        printf("| Colima                  | COL         |   6    |\n");
        printf("| Chiapas                 | CHIS        |   7    |\n");
        printf("| Chihuahua               | CHIH        |   8    |\n");
        printf("| Ciudad de México        | DF          |   9    |\n");
        printf("| Durango                 | DGO         |  10    |\n");
        printf("| Guanajuato              | GTO         |  11    |\n");
        printf("| Guerrero                | GRO         |  12    |\n");
        printf("| Hidalgo                 | HGO         |  13    |\n");
        printf("| Jalisco                 | JAL         |  14    |\n");
        printf("| México                  | MEX         |  15    |\n");
        printf("| Michoacán               | MICH        |  16    |\n");
        printf("| Morelos                 | MOR         |  17    |\n");
        printf("| Nayarit                 | NAY         |  18    |\n");
        printf("| Nuevo León              | NL          |  19    |\n");
        printf("| Oaxaca                  | OAX         |  20    |\n");
        printf("| Puebla                  | PUE         |  21    |\n");
        printf("| Querétaro               | QRO         |  22    |\n");
        printf("| Quintana Roo            | QROO        |  23    |\n");
        printf("| San Luis Potosí         | SLP         |  24    |\n");
        printf("| Sinaloa                 | SIN         |  25    |\n");
        printf("| Sonora                  | SON         |  26    |\n");
        printf("| Tabasco                 | TAB         |  27    |\n");
        printf("| Tamaulipas              | TAMS        |  28    |\n");
        printf("| Tlaxcala                | TLAX        |  29    |\n");
        printf("| Veracruz                | VER         |  30    |\n");
        printf("| Yucatán                 | YUC         |  31    |\n");
        printf("| Zacatecas               | ZAC         |  32    |\n");

        printf("\n MAL [x]: 45/baja kalifornia/Baja California/Califas \n BIEN [V]: 2\n");
        printf("\nINGRESA EL NUMERO DE TU ESTADO: ");
        if (scanf("%d", &numero) == 1)
        {
            if (numero >= 1)
            {
                if (numero <= 32)
                {
                    entradaValida = true;
                }
            }
        }
        else
        {
            printf("Entrada no válida. Debe ser un número entero.\n");
            while (getchar() != '\n')
                ; 
        }
    }
    return numero;
}

int validar_sexo()
{
    int numero;
    bool entradaValida = false;

    while (!entradaValida)
    {
        system("cls");
        printf("\n MAL [x]: ombre/Hombre/Mujer/No binario/cis genero \n BIEN [V]: 1\n");
        printf("\nINGRESA TU SEXO\n[1].HOMBRE\n[2].MUJER\nOPCION: ");
        if (scanf("%d", &numero) == 1)
        {
            if (numero >= 0)
            {
                if (numero <= 31)
                {
                    entradaValida = true;
                }
            }
        }
        else
        {
            printf("Entrada no válida. Debe ser un número entero.\n");
            while (getchar() != '\n')
                ; 
        }
    }
    return numero;
}

int vali_cadena(const char *cadena)
{
    int i;
    for (i = 0; cadena[i] != '\0'; i++)
    {
        if (!isalpha(cadena[i]))
        {
            if (!isspace(cadena[i]))
            {
                return 0;
            }
        }
    }
    return 1;
}

void ingresa_nombre(char *cadena, curp *datos)
{
    system("cls");
    int valido = 0;
    while (!valido)
    {
        printf("INGRESA TU PRIMER NOMBRE: ");
        gets(cadena);

        if (vali_cadena(cadena))
        {
            strcpy(datos->nombre_1, cadena); 
            valido = 1;
        }
        else
        {
            printf("ERROR. LA CADENA DEBE CONTENER SOLO LETRAS.\n");
        }
    }
}

void ingresa_apellido_pat(char *cadena, curp *datos)
{
    system("cls");
    int valido = 0;
    while (!valido)
    {
        printf("INGRESA TU APELLIDO PATERNO: ");
        gets(cadena);

        if (vali_cadena(cadena))
        {
            valido = 1;
            char *apellido_mas_largo = strrchr(cadena, ' ');
            if (apellido_mas_largo != NULL)
            {

                apellido_mas_largo++;
            }
            else
            {

                apellido_mas_largo = cadena;
            }

            strcpy(datos->apellido_pat, apellido_mas_largo);
        }
        else
        {
            printf("ERROR. LA CADENA DEBE CONTENER SOLO LETRAS.\n");
        }
    }
}

void ingresa_apellido_mat(char *cadena, curp *datos)
{
    system("cls");
    int valido = 0;
    while (!valido)
    {
        printf("INGRESA TU APELLIDO MATERNO: ");
        gets(cadena);

        if (vali_cadena(cadena))
        {
            strcpy(datos->apellido_mat, cadena); 
            valido = 1;
        }
        else
        {
            printf("ERROR. LA CADENA DEBE CONTENER SOLO LETRAS.\n");
        }
    }
}

void mayusculador(curp *datos)
{
    strupr(datos->apellido_pat);
    strupr(datos->apellido_mat);
    strupr(datos->nombre_1);
}

void constructor(curp *datos)
{
    int i, j, K = 1;
    int band = -1;
    int consonantes_encontradas = 0;
    char vocales[] = "AEIOU";
    char palabras_inconvenientes[][10] = {
        "WEY", "LOCO", "TONTO", "SEXY", "BUEY", "MAME",
        "MENSO", "INVESIL", "ANORMAL", "MALO", "COGE", "BUENA",
        "COJO", "INUTIL", "SUBNORMAL", "GUEY", "COLA", "CULO",
        "FALO", "MIERDA", "BABOSO", "CASTROSO", "GUEY", "JETA",
        "JOTO", "CACA", "NAGO", "ENFADOSO", "KAGO", "KAKA",
        "PUTO", "CULO", "COGER", "COJA", "CAGON", "VIEJA",
        "MAMON", "CABRON", "JETA", "SONSO", "HOT"};

    char resultado[3];
    datos->inconveniente[0] = datos->apellido_pat[0];

    for (i = 1; band != 1; i++)
    {
        if (strchr(vocales, datos->apellido_pat[i]) != NULL)
        {
            datos->inconveniente[1] = datos->apellido_pat[i];
            band = 1;
        }
    }

    datos->inconveniente[2] = datos->apellido_mat[0];
    datos->inconveniente[3] = datos->nombre_1[0];
    //
    for (i = 0; i < 4; i++)
    {
        printf("%c ", datos->inconveniente[i]);
    }
    int tachar_x = 0;

    for (i = 0; i < 41; i++)
    {
        if (strcmp(datos->inconveniente, palabras_inconvenientes[i]) == 0)
        {
            tachar_x = 1;
            break;
        }
    }

    if (tachar_x)
    {
        datos->inconveniente[1] = 'X';
    }

    strcpy(datos->curp, datos->inconveniente);

    if (datos->aa < 10)
    {
        strcat(datos->curp, "0");
        sprintf(datos->aux, "%d", datos->aa);
        strcat(datos->curp, datos->aux);
    }
    else
    {
        sprintf(datos->aux, "%d", datos->aa);
        strcat(datos->curp, datos->aux);
    }

    if (datos->mm < 10)
    {
        strcat(datos->curp, "0");
        sprintf(datos->aux, "%d", datos->mm);
        strcat(datos->curp, datos->aux);
    }
    else
    {
        sprintf(datos->aux, "%d", datos->mm);
        strcat(datos->curp, datos->aux);
    }

    if (datos->dd < 10)
    {
        strcat(datos->curp, "0");
        sprintf(datos->aux, "%d", datos->dd);
        strcat(datos->curp, datos->aux);
    }
    else
    {
        sprintf(datos->aux, "%d", datos->dd);
        strcat(datos->curp, datos->aux);
    }

    strcat(datos->curp, datos->sexo);
    strcat(datos->curp, datos->estado);

    consonantes(datos->apellido_pat, resultado);
    strcat(datos->curp, resultado);
    consonantes(datos->apellido_mat, resultado);
    strcat(datos->curp, resultado);
    consonantes(datos->nombre_1, resultado);
    strcat(datos->curp, resultado);

    printf("\nCURP: %s", datos->curp);
}

void consonantes(char *cadena, char *resultado)
{
    int i = 1;
    while (cadena[i])
    {
        if (strchr("AEIOU", cadena[i]) == NULL)
        {
            resultado[0] = cadena[i];
            resultado[1] = '\0';
            break;
        }
        i++;
    }
}

void guardarDatosEnArchivo(curp datos)
{
    FILE *archivo = fopen("datos.txt", "a");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para guardar los datos.\n");
        return;
    }

    char datosFormateados[256]; 

    sprintf(datosFormateados, "Matrícula: %d, Nombre: %s %s %s, Fecha de Nacimiento: %02d/%02d/%02d, Sexo: %s, Estado de Nacimiento: %s, CURP: %s\n",
        datos.matricula, datos.nombre_1, datos.apellido_pat, datos.apellido_mat, datos.dd, datos.mm, datos.aa, datos.sexo, datos.estado, datos.curp);

    fprintf(archivo, "%s\n", datosFormateados);

    fclose(archivo);
    printf("Datos guardados en el archivo 'datos.txt'.\n");
}


int validar_matricula()
{
    int numero;
    bool entradaValida = false;

    while (!entradaValida)
    {
        system("cls");
        printf("\nINGRESA TU MATRÍCULA: ");
        if (scanf("%d", &numero) == 1)
        {
            if (numero >= 0)
            {
                
                entradaValida = true;
            }
        }
        else
        {
            printf("DEBE SER UN VALOR ENTERO.\n");
            while (getchar() != '\n')
                ; 
        }
    }
    return numero;
}


