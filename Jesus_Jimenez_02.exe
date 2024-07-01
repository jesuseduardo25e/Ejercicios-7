#include <stdio.h>

int main() {
    FILE *archivo_sueldos;
    int cantidad_sueldos;
    float sueldo;

    // Pregunta al usuario la cantidad de sueldos a almacenar
    printf("Ingrese la cantidad de sueldos a almacenar: ");
    scanf("%d", &cantidad_sueldos);

    // Abre el archivo en modo escritura binaria
    archivo_sueldos = fopen("sueldos.dat", "wb");
    if (archivo_sueldos == NULL) {
        printf("Error al crear el archivo sueldos.dat.\n");
        return 1;
    }

    // Lee los sueldos y almacénalos en el archivo
    for (int i = 0; i < cantidad_sueldos; i++) {
        printf("Ingrese el sueldo %d: ", i + 1);
        scanf("%f", &sueldo);
        fwrite(&sueldo, sizeof(float), 1, archivo_sueldos);
    }

    // Cierra el archivo
    fclose(archivo_sueldos);

    printf("Archivo sueldos.dat creado correctamente.\n");

    return 0;
}
