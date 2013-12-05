#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NFIL 20
#define NCOL 20
#define AU 5
main(){
    char array[NFIL][NCOL];
    int fil,col;
    int posicionFIL,posicionCOL,hubo,orientacion,x=0,y=0,limites=0;
    srand(time(NULL));
    posicionFIL=rand() % NFIL+1; //POSICION FILA ALEATORIOA
    posicionCOL=rand() % NCOL+1; //POSICION COL ALEATORIO
    orientacion=rand() % 2; //ORIENTACION ALEATORIO
    //1 vertical - 0 horizontal
    for (fil=0;fil<NFIL;fil++){ //RECORRO FILAS
        for (col=0;col<NCOL;col++){ //RECORRO CADA COLUMNA DE CADA FILA
            hubo=0;
            if( (posicionFIL+x==fil && orientacion==1 && col==posicionCOL )     && x<AU){
                    array[posicionFIL+x][col]='@';//ASIGNO EL ASTERISCO A LA FILA SABIENDO CUAL TOCA Y EN LA COL QUE TOKE
                    x++;
                    hubo=1;
            }
            if( (posicionCOL+y==col && orientacion==0 && fil==posicionFIL )     && y<AU){
                    array[fil][posicionCOL+y]='@';//ASIGNO EL ASTERISCO A LA COL SABIENDO CUAL TOCA Y EN LA FILA QUE TOKE
                    y++;
                    hubo=1;
            }
             if(hubo!=1)array[fil][col]='*';//CONTROLO SI YA SE A PUESTO EL SIMBOLO , SINO SE A PUESO INTRODUZCO EL ASTERISCO
             if((NFIL<posicionFIL+AU) || (NCOL<posicionCOL+AU)){limites=1;array[fil][col]='*';}//CONTROLO SI EL RANGO ESTA FUERA DE LOS LIMITES

        }
       array[fil][col]='\0';
    }
    //ESCRIBO POR PANTALLA
    for (fil=0;fil<NFIL;fil++){
        for (col=0;col<NCOL;col++){
            printf(" %c ",array[fil][col]);
        }
     printf("\n");
    }
    if(limites==1)printf("\nVuelve a ejecutar el programa, se salio de los limites, ya lo siento.\n\n\n\n\n\n\n\n\n\n\n");
}

