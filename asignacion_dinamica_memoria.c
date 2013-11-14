int x,y=0;
int *numeros = malloc(4*sizeof(int *)); //RESERVA DE MEMORIA DINAMICA INT DE 4 BYTES // 1 INT = 1 BYTE
char *letras = malloc(10*sizeof(char *));
for(x=0;x<sizeof(*numeros);x++){
    numeros[x]=x;
    printf("%d\n",numeros[x]);
}
for(x=0;x<10;x++){
    letras[x]=65+y;
    printf("%c\n",letras[x]);
    y++;
}
