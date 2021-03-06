#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"
#include "Usuario.h"
#define TAMSERIE 100
#define TAMUSUARIO 100


int main()
{

    /**< 2 arrays que son mis listas: */
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);



    /**< 1. Mostrar el listado de series */

    mostrarListadoDeSeries(listaDeSeries, TAMSERIE);

    /**< 2. Mostrar el listado de usuarios */

    mostrarListadoDeUsuarios(listaDeUsuarios, TAMUSUARIO);

    /**< 3. Mostrar el listado de Usuarios con el nombre de la serie que ve */

    mostrarListaUsuarios(listaDeUsuarios, listaDeSeries, TAMUSUARIO, TAMSERIE);

    /**< 4. Mostrar por cada serie, el nombre de los usuarios que la ven. */

    mostrarListaSerieConUsuarios(listaDeUsuarios, listaDeSeries, TAMUSUARIO, TAMSERIE);



    return 0;
}
