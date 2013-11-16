//Hecho por: Gustavo Chavarria.
//UNAN-LEON - Nicaragua.
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int *puntero=NULL;
puntero = (int *)malloc(100*sizeof(int)); //Asignacion dinamica de memoria
 
        if (puntero == NULL)  //evaluacion de condicion.
        {
                printf("NO hay suficiente espacio en memoria"); //Mensaje
                return -1;                               //Cierra el programa con un error.
        }else
        printf("Se asigno memoria  ");
 
free(puntero);//liberacion de memoria
return 0;
}
//El programa solo asigna memoria, imprime un mensaje en dependecia de la condicion y libera
 
//Revisado por: Gustavo Chavarria.
//UNAN-LEON - Nicaragua.
