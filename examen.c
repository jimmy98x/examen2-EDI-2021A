#include <stdio.h>

#define N 5

void leeArreglo(int arrClave[N], char arrNom[N], float arrEstSld[N][N]);
int buscaMayor(float arrEstSld[N][N], int *p);
void ordenaSld(float arrEstSld[N][N]);
void imprimeArreglo(int arrClave[N], char arrNom[N], float arrEstSld[N][N]);

int main()
{
    int arregloClave[N];
    float arregloEstSld[N][N];
    int pos;
    char arregloNom[N];
    char mayor;

    leeArreglo(arregloClave, arregloNom, arregloEstSld);
    ordenaSld(arregloEstSld);
    imprimeArreglo(arregloClave, arregloNom, arregloEstSld);
    mayor = buscaMayor(arregloEstSld, &pos);
    printf("El trabajador mas alto es: %c\n", mayor);
    printf("Se encuentra en la posicion: %d\n", pos);


    return 0;
}

void leeArreglo(int arrClave[N], char arrNom[N], float arrEstSld[N][N])
{
    int i, j;

    for(i=0; i<N; i++)
    {
        printf("Clave: ");
        scanf("%d", arrClave[i]);

        printf("Nombre: ");
        scanf("%c", arrNom[i]);

        for(j=0; j<N; j++)
        {
            printf("Estatura....Sueldo[%d][%d]: ", i,j);
            scanf("%f", &arrEstSld[i][j]);
        }

    }

}

int buscaMayor(float arrEstSld[N][N], int *p)
{
    int i, j;
    char may = arrEstSld[0][0];

    for(i=0; i<N; i++)
    {
        if(arrEstSld[i][0] > may)
        {
            may = arrEstSld[i][0];
            *p = i;
        }
    }
     return may;
}

void ordenaSld(float arrEstSld(N)(N))
{
     int i, j, aux;

    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(arrEstSld[i][0] < arrEstSld[j][0])
            {
                aux = arrEstSld[j][0];
                arrEstSld[j][0] = arrEstSld[i][0];
                arrEstSld[i][0] = aux;
            }

        }
    }
}

void imprimeArreglo(int arrClave[N], char arrNom[N], float arrEstSld[N][N])
{
    int i, j;
    printf("Clave    Nombre    Estatura    Sueldo");
    for(i=0; i<N; i++)
    {
        printf("%4d",arrClave[i]);
        printf("    %4c",arrNom[i]);
        printf("    %4f", arrEstSld[i][0]);
        for(j=0; j<N; j++)
        {
             printf("    %4f", arrEstSld[0][j]);
        }

     }

}
