#include<stdio.h>
#include<time.h>
#include<string.h>
main(){
    char nombre[40];
    char nombre2[80];
    int x,y=0;
    printf("Introduce una palabra\n");
    scanf("%s",nombre);
    for(x=0;nombre[x]!='\0';x++){
        nombre2[y+1]=nombre[x];
        nombre2[y]=nombre[x];
        y=y+2;
    }
    nombre2[y]='\0';
    printf("%s",nombre2);
}
