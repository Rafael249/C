#include <stdio.h>
#include <stdlib.h>
main()
{
	//Declaracion de variables
	int i,c[]={1,2,3,4,5,6};
	int j,temp;
	//Bucle de inversion
	for (i=0;i<=5;i++)
	  temp=c[i];
    c[i]=c[5-i];
    c[5-i]=temp;
	//Impresion del invertido del vector
	for (j=0;j<=5;j++)
		printf("el vector invertido es %i",c[j]);
	system("Pause > nul");
	system("Exit");
}
