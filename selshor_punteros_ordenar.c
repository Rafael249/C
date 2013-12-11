#include<stdio.h>
#include<string.h>
main(){
    char *palabra=NULL,temp,minimo=NULL;
    int i,j,n,x;
    printf("Cuantas letras quieres ordenar? >>> ");
    scanf("%d",&n);
    palabra = (char *) malloc(n*sizeof(char));
    for(x=0;x<n;x++){
        printf("Letra %d :",x);
        scanf(" %c",&*(palabra+x));
    }
    for(i=0 ; i<n-1 ; i++)
    {
         minimo=i;
         for(j=i+1 ; j<n ; j++){
            if (*(palabra+minimo) > *(palabra+j))
               minimo=j;
            }
         temp=*(palabra+minimo);
         *(palabra+minimo)=*(palabra+i);
         *(palabra+i)=temp;
    }
    for(x=0;x<n;x++)
        printf("%c",*(palabra+x));
    free(palabra);
      }
