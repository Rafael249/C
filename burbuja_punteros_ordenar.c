#include<stdio.h>
#include<string.h>
main(){
    char *palabra=NULL,temp;
    int x,y,num;
    printf("Cuantas letras quieres ordenar? >>> ");
    scanf("%d",&num);
    palabra = (char *) malloc(num*sizeof(char));
    for(x=0;x<num;x++){
        printf("Letra %d :",x);
        scanf(" %c",&*(palabra+x));
    }
    for(x=0;x<num;x++)
        for(y=0;y<num-1;y++){
            if(*(palabra+y) > *(palabra+(y+1)) ){
                    temp = *(palabra+y);
                    *(palabra+y) = *(palabra+(y+1));
                    *(palabra+(y+1)) = temp;
                }
            }

    for(x=0;x<num;x++)
        printf("%c",*(palabra+x));
    free(palabra);
    }
