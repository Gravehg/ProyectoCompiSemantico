int main() {
    int n;
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &n);

    struct Estudiante estudiantes[n];

    for (int i = 0; i < n; i++) {
        printf("Ingrese el nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);

        printf("Ingrese la edad del estudiante %d: ", i + 1);
        scanf("%d", &estudiantes[i].edad);

        printf("Ingrese el promedio del estudiante %d: ", i + 1);
        scanf("%f", &estudiantes[i].promedio);
    }

    printf("\nDatos de los estudiantes:\n");

    for (int i = 0; i < n; i++) {
        printf("Estudiante %d:\n", i + 1);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Promedio: %.2f\n\n", estudiantes[i].promedio);
    }

    return 0;
}