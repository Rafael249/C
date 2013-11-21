main(){
    char vocales[10]={'a', 'e', 'i', 'o', 'u', 'A','E','I','O','U'};
    char nombre[80];
    char nombre2[80];
    char contenedor_vocales[10];
    int contenedor_posicion[10];
    int num_vocales=0,x,y,aux,aux2,a;
    scanf("%[^\n]",nombre);
    for(x=0;nombre[x]!='\0';x++){ //RECORRO LO INTRODUCIDO
        nombre2[x]=nombre[x];//PONGO EN EL SEGUNDO VECTOR TODAS LAS LETRAS
        for(y=0;y<strlen(vocales);y++){ //RECORRO LAS VOCALES
         if(nombre[x]==vocales[y]){ //COMPARO SI LO INTRODUCIDO ES IGUAL A LAS VOCALES
            contenedor_vocales[num_vocales]=vocales[y]; //METO EN EL CONTENEDOR LA VOCAL
            contenedor_posicion[num_vocales]=x;//METO LA POSICION DONDE DEBERIA IR LA VOCAL EN UN CONTENEDOR
            num_vocales++; //AUMENTO UNO EN EL NUMERO DE VOCALES PARA SABER LUEGO SU TAMAÑO
         }
        }
    }
    for(y=0;y<num_vocales-1;y++){ 
        aux=contenedor_posicion[y]; //VARIABLE AUXILIAR QUE GUARDA LA POSICION DE LA PRIMERA VOCAL
        aux2=contenedor_posicion[y+1];//VARIABLE AUXILIAR QUE GUARDA LA POSICION DE LA SEGUNDA VOCAL
       nombre2[aux]=contenedor_vocales[y+1];//ASIGNO AL VECTOR LA VOCAL SIGUIENTE
       nombre2[aux2]=contenedor_vocales[y];//ASIGNO AL VECTOR LA VOCAL ANTERIOR
    }
    nombre2[x]='\0';
    printf("\n%s",nombre2);
  }
