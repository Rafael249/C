/* devuelve la cantidad de caracteres en cadena sin contar el '\0' */
int largo_cadena(char cadena[])
{
        int largo=0
        while (cadena[largo]!='\0') largo++;
        return largo;
}
