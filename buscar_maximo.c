int buscar_maximo(double valores[], int num_valores)
{
        int maximo_pos = 0;
        for (int i = 1; i < num_valores; i++) {
                if (valores[i] > valores[maximo_pos]) {
                        maximo_pos = i;
                }
        }
        return maximo_pos;
}
