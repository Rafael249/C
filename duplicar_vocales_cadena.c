    char vocales[10]={'a', 'e', 'i', 'o', 'u', 'A','E','I','O','U'};
    char nombre[80];
    char nombre2[80];
    int cont, longitud,x,c=0;
    scanf("%[^\n]",nombre);
    longitud=strlen(nombre);

    for(cont=0;cont<=longitud;cont++){
       for(x=0;x<=10;x++){
        if(nombre[cont]==vocales[x]){
            nombre2[c]=nombre[cont];
            nombre2[c+1]=nombre[cont];
            c=c+1;

        }
        nombre2[c]=nombre[cont];
       }
        c++;
    }
    longitud=strlen(nombre2);
    for(cont=0;cont<=longitud;cont++){
        printf("%c",nombre2[cont]);

    }
