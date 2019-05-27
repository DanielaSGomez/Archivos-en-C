#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* miArchivo;
    //PARA LEER UN ARCHIVO
    char nombre[20];

    miArchivo = fopen("D:\\Directorio\\misDatos.txt","r");

    //SI SE USAN DOS FGETS SE PISAN Y MUESTRAN BIEN LO QUE SE LEE


    while(!feof(miArchivo))
    {
        fgets(nombre,30,miArchivo);
        fgets(nombre,30, miArchivo);
        printf("Su nombre es:\n%s",nombre);
    }

    fclose(miArchivo);












    //PARA CARGAR DATOS AL ARCHIVO


/* char nombre[20] = "Daniela";

    //fopen para abrir el archivo
   //EJEMPLO DE ABRIR UN ARCHIVO
    miArchivo = fopen("D:\\Directorio\\misDatos.txt" ,"w");

    if(miArchivo != NULL)
    {
        fprintf(miArchivo,"Su Nombre es\n%s",nombre);
    }
    else
    {
        printf("Error...");printf("Hello world!\n");
    }


    fclose(miArchivo);*/
    return 0;
}
