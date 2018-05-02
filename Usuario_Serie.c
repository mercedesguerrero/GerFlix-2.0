#include "Usuario.h"
#include "Serie.h"
#include "Usuario_Serie.h"
#include <string.h>

void mostrarListaUsuarios(eUsuario usuarios[], eSerie series[], int cant)
{
    int i;
    printf("%5s %12s %13s\n","\nidUsuario","Nombre","Serie");

/**< Recorre y si el estado es distinto de 0 la muestra */
    for(i=0; i<cant; i++)
    {
        if(usuarios[i].estado==1)
        {
            printf("%5d %15s %14s\n", usuarios[i].idUsuario, usuarios[i].nombre, series[i].nombre);
        }
    }
}

void mostrarListaSerieConUsuarios(eUsuario usuarios[], eSerie series[], int cant)
{
    int i;
    printf("%5s %12s %13s\n","\nidSerie","Serie","Nombres");

/**< Recorre y si el estado es distinto de 0 la muestra */
    for(i=0; i<cant; i++)
    {
        if(series[i].estado==1)
        {
            printf("%5d %15s %14s\n", series[i].idSerie, series[i].nombre, usuarios[i].nombre);
        }
    }
}
