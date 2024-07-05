#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *archivo1, *archivo2;
    char caracter;
    char caractermayuscula;

    
    archivo1 = fopen("archivo1.txt", "r");
    if (archivo1 == NULL) {
        printf("No se pudo abrir el archivo 1.\n");
        return 1;
    }

    
    archivo2 = fopen("archivo2", "w");
    if (archivo2 == NULL) {
        printf("No se pudo abrir el archivo 2.\n");
        return 1;
    }

    
    while ((caracter = fgetc(archivo1)) != EOF) {
        caractermayuscula = toupper(caracter);

        fputc(caractermayuscula, archivo2);
    }

    fclose(archivo1);
    fclose(archivo2);

    printf("El archivo se ha creado correctamente.\n");

    return 0;
}
