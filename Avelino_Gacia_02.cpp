#include <stdio.h>

int main() {
    FILE *archivo;
    int cantidad_de_sueldos;
    float sueldo;

    
    archivo = fopen("sueldos.dat", "wb");
    if (archivo == NULL) {
        printf("No se pudo crear el archivo.\n");
        return 1;
    }

   
    printf("Ingrese la cantidad de sueldos ");
    scanf("%d", &cantidad_de_sueldos);

    
    for (int i = 0; i < cantidad_de_sueldos; i++) {
        printf("Ingrese el sueldo %d: ", i + 1);
        scanf("%f", &sueldo);

        
        fwrite(&sueldo, sizeof(float), 1, archivo);
    }

   
    fclose(archivo);

    printf("El archivo 'sueldos.dat' ha sido creado exitosamente.\n");

    return 0;
}
