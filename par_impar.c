    //DECLARAMOS
    char vec[80];
    char vecpar[80];
    char vecim[80];
    int x=0,y=-1,parnu=0,imnu=0;
    //LEEEMOS POR TECLADO HASTA QUE EL USUARIO TECLEE EL 0
    while(y!=0){
        if(y%2==0){
            vecpar[parnu]=y; //SI ES PAR ESCRIBIMOS EN EL VECTOR PAR Y SUMAMOS UNO AL CONTADOR DE PAR
            parnu++;
        }else if(y%2>0){
            vecim[imnu]=y;
            imnu++;
        }-

        printf("Introduce un numero >>> "); //SI ES PAR ESCRIBIMOS EN EL VECTOR PAR Y SUMAMOS UNO AL CONTADOR DE IMPAR
        scanf("%d",&y);
        vec[x]=y;
        x++;
    }
  //ESCRIBIMOS LA CADENA DEL USUARIO POR CADENA
for(x=0;x<strlen(vec);x++){
        printf("%d ",vec[x]);

    }
    printf("\n");
    //ESCRIBIMOS LA CADENA PAR
    for(x=0;x<parnu;x++){
        printf("%d ",vecpar[x]);
    }
     printf("\n");
    //ESCRIBIMOS LA CADENA IMPAR
    for(x=0;x<imnu;x++){
        printf("%d ",vecim[x]);
    }
    printf("\n");
