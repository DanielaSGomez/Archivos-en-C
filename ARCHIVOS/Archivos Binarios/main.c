#include <stdio.h>
#include <stdlib.h>

//ARCHIVOS BINARIOS--------------------------------------------------------------
int main()
{
    //LECTURA-----------------------------------------------------------------

    /*FILE* archivoBinario;
    int* x = (int*)malloc(sizeof(int));
    *x = 4;

    //SE GUARDAN LOS DATOS CON .DAT O .BIN
    archivoBinario = fopen("D:\\Directorio\\datos.dat","wb");

    //EN VEZ DE USAR FPRINTF SE USA FWRITE
    //puntero al dato,tamaño del dato,cantidad de elementos que quiero escribir,archivo
    fwrite(x, sizeof(int),1,archivoBinario);

    fclose(archivoBinario);*/

    //ESCRITURA-----------------------------------------------------------------

    FILE* archivoBinario;
    int *x;

    x = (int*)malloc(sizeof(int));
    archivoBinario = fopen("D:\\Directorio\\datos.dat","rb");

    if(archivoBinario != NULL)
    {
        fread(x, sizeof(int),1,archivoBinario);
    }

    fclose(archivoBinario);

    printf("%d",*x);

    return 0;
}
