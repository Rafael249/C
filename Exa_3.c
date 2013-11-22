#include<stdio.h>
#include<time.h>
#include<string.h>
main(){
    int n_elecciones = 0,numero,numero_p;//DECLARO VARIABLES ETC ETC ETC
    int n[2];
    n[0]=0;
    char nombre[20];
    printf ("\nHola, como te llamas?");
    scanf("%s",nombre);
    srand(time(NULL)); //CAMBIO LA SEMILLA AL VALOR DEL TIEMPO
    numero = rand() % 21; //GENERO EL NUMERO ALEATORIO DEL 1 AL 20
    numero_p=1; // INICIO CON 1 LA VARIABLE DEL NUMERO ITNRODUCIDO
     printf("Bueno %s voy a pensar un numero del 1 al 20",nombre);
    while (n[0]<6){
        if (numero_p<21 && numero_p>0){ //COMPARO QUE ESTE DENTRO DEL RANGO 1-20 PUNTO B
            n[0]=n_elecciones;
            n_elecciones++;
            printf("\nQue numero he pensado?");
            scanf("%d",&numero_p);
        }else{//SINO ESTA EN EL RANGO VUELVO A PEDIR QUE META EL NUMERO Y NO LE CUENTO EL INTENTO
            printf("\nEl numero ingresado no esta en el rango");
            printf("\nQue numero he pensado?");
            scanf("%d",&numero_p);
        }
        if (numero_p < numero){//SI ES MAS PEKENIO
            printf("\nDemasiado pequenio");
            }
        if (numero_p > numero){//SI ES MAS GRANDE
            printf("\nDemasiado grande");
            }
        if (numero_p == numero){ //SI EL NUMERO INTRODUCIDO ES LE MISMO AL GENERADO ALEATORIAMENTE
            printf("\nMuy bien Has adivinado el numero en  %d jugadas", n_elecciones);
            break;
        }
        if (n[0]==6){
            printf("\nTu futuro no esta en la adivinacion. El numero que habia pensado era el %d", numero);
            }
    }
}
