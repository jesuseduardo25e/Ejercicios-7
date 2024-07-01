#include <stdio.h>
#include <stdlib.h> // Para la función exit

int main() {
    FILE *archivo_frutas;
    int cantidad_frutas;
    char fruta[50]; // Tamaño máximo de la fruta (ajústalo según tus necesidades)

    // Pregunta al usuario la cantidad de frutas a almacenar
    printf("Ingrese la cantidad de frutas a almacenar: ");
    scanf("%d", &cantidad_frutas);

    // Abre el archivo en modo escritura
    archivo_frutas = fopen("frutas.txt", "w");
    if (archivo_frutas == NULL) {
        printf("Error al crear el archivo frutas.txt.\n");
        return 1;
    }

    // Lee y almacena cada fruta en el archivo
    for (int i = 0; i < cantidad_frutas; i++) {
        printf("Ingrese el nombre de la fruta %d: ", i + 1);
        scanf("%s", fruta);
        fprintf(archivo_frutas, "%s\n", fruta); // Escribe la fruta en el archivo
    }

    // Cierra el archivo
    fclose(archivo_frutas);

    printf("Archivo frutas.txt creado correctamente.\n");

    return 0;
}
