    int x;
    printf("Introduce una hora >>>");
    scanf("%d",&x);
    if(x>=6 && x<=12){
        printf("Buenos Dias");
    }
    if(x>12 && x<21){
        printf("Buenas Tardes");
    }
    if((x>=0 && x<6) || (x>=21 && x<24)){
        printf("Buenas Noches");
    }
    if(x<0 && x>=24){
        printf("ERROR");
    }
