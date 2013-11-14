    char nombre[80];
    int x,lon;
    printf("Di una cadena >>>");
    scanf("%s",nombre);
    lon=strlen(nombre)-1;
    for(x=lon;x>-1;x--){
        printf("%c",nombre[x]);
    }
