#include <stdio.h>


int main() {
    FILE *frutas;
    int cantidadfrutas;
    char nombrefruta[50];


    printf("Ingrese la cantidad de frutas a almacenar: ");
    scanf("%d", &cantidadfrutas);

    frutas = fopen("frutas.txt", "w");
    if (frutas == NULL) {
        printf ("error ");
    }else{
    	for (int i = 0; i < cantidadfrutas; i++) {
        	printf("Ingrese el nombre de la fruta %d: ", i + 1);
        	scanf("%s", nombrefruta);
        	fprintf(frutas, "%s\n", nombrefruta);
    	}
	}

    fclose(frutas);

    printf("operacion realizada en el archivo 'frutas.txt'.\n");

    return 0;
}
