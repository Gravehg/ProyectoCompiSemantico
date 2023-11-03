#include <stdio.h>

int main() {
    // Declarar las variables
    double num1, num2;

    // Solicitar al usuario que ingrese el primer número
    printf("Ingrese eÜl primer número: ");
    scanf("%lf", &num1);
    
    // Solicitar al usuario que ingrese el segundo número
    printf("Ingrese el segundo número: ");
    scanf("%lf", &num2);

    // Calcular la suma de los números ingresados
    double suma = num1 + num2;

    // Mostrar el resultado
    printf("La suma de %.2lf y %.2lf es %.2lf\n", num1, num2, suma);

    return 0;

}

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Ingrese un número positivo: ");
    scanf("%d", &n);

    // Manejo de números negativos
    if (n < 0)
        printf("El factorial no está definido para números negativos.\n");
    else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("El factorial de %d es %llu\n", n, factorial);
    }

    return 0;
}


#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    printf("Ingrese un número: ");
    scanf("%d", &n);

    if (esPrimo(n))
        printf("%d es un número primo.\n", n);
    else
        printf("%d no es un número primo.\n", n);

    return 0;
}

#include <stdio.h>

void ordenar(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int arr[n];
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ordenar(arr, n);

    printf("Arreglo ordenado en orden ascendente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

void multiplicarMatrices(int A[10][10], int B[10][10], int resultado[10][10], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void mostrarMatriz(int matriz[10][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p;
    printf("Ingrese el número de filas y columnas de la primera matriz (m n): ");
    scanf("%d %d", &m, &n);

    printf("Ingrese el número de columnas de la segunda matriz (p): ");
    scanf("%d", &p);

    int A[10][10], B[10][10], resultado[10][10];

    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplicarMatrices(A, B, resultado, m, n, p);

    printf("Resultado de la multiplicación de matrices:\n");
    mostrarMatriz(resultado, m, p);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void agregarAlFinal(struct Nodo** cabeza, int dato) {
    struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;

    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
    } else {
        struct Nodo* temp = *cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

void mostrarLista(struct Nodo* cabeza) {
    struct Nodo* temp = cabeza;
    while (temp != NULL) {
        printf("%d -> ", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
}

int main() {
    struct Nodo* cabeza = NULL;

    agregarAlFinal(&cabeza, 1);
    agregarAlFinal(&cabeza, 2);
    agregarAlFinal(&cabeza, 3);

    printf("Lista enlazada: ");
    mostrarLista(cabeza);

    return 0;
}

#include <stdio.h>

int main() {
    double longitud, ancho;

    printf("Ingrese la longitud del rectángulo: ");
    scanf("%lf", &longitud);

    printf("Ingrese el ancho del rectángulo: ");
    scanf("%lf", &ancho);

    double area = longitud * ancho;
    double perimetro = 2 * (longitud + ancho);

    printf("Área del rectángulo: %.2lf\n", area);
    printf("Perímetro del rectángulo: %.2lf\n", perimetro);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzarDado() {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(NULL));

    int dado1 = lanzarDado();
    int dado2 = lanzarDado();

    printf("Resultado del primer dado: %d\n", dado1);
    printf("Resultado del segundo dado: %d\n", dado2);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];

    printf("Ingrese una cadena de texto: ");
    scanf("%s", cadena);

    printf("En mayúsculas: %s\n", strupr(cadena));
    printf("En minúsculas: %s\n", strlwr(cadena));

    return 0;
}

#include <stdio.h>

struct Circulo {
    double radio;
};

double calcularArea(struct Circulo circulo) {
    return 3.14159265359 * circulo.radio * circulo.radio;
}

double calcularPerimetro(struct Circulo circulo) {
    return 2 * 3.14159265359 * circulo.radio;
}

int main() {
    struct Circulo miCirculo;

    printf("Ingrese el radio del círculo: ");
    scanf("%lf", &miCirculo.radio);

    printf("Área del círculo: %.2lf\n", calcularArea(miCirculo));
    printf("Perímetro del círculo: %.2lf\n", calcularPerimetro(miCirculo));

    return 0;
}

#include <stdio.h>

int main() {
    FILE *archivo;
    archivo = fopen("miarchivo.txt", "w");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "¡Hola, archivo!\n");
    fclose(archivo);

    printf("Mensaje escrito en el archivo.\n");

    return 0;
}

#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, siguiente;

    printf("Ingrese el número de términos de la secuencia de Fibonacci: ");
    scanf("%d", &n);

    printf("Secuencia de Fibonacci:\n");

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        siguiente = t1 + t2;
        t1 = t2;
        t2 = siguiente;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int numeroAleatorio = rand() % 100 + 1;
    int intento, intentosRestantes = 10;

    printf("Bienvenido al juego de adivinar el número. Tienes 10 intentos.\n");

    while (intentosRestantes > 0) {
        printf("Ingresa tu intento: ");
        scanf("%d", &intento);

        if (intento == numeroAleatorio) {
            printf("¡Felicidades! Has adivinado el número.\n");
            break;
        } else if (intento < numeroAleatorio) {
            printf("El número es mayor. ");
        } else {
            printf("El número es menor. ");
        }

        printf("Intentos restantes: %d\n", --intentosRestantes);
    }

    if (intentosRestantes == 0) {
        printf("Se han agotado todos los intentos. El número era %d.\n", numeroAleatorio);
    }

    return 0;
}

#include <stdio.h>

int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Ingrese dos números para calcular su MCD: ");
    scanf("%d %d", &num1, &num2);

    int mcd = calcularMCD(num1, num2);

    printf("El MCD de %d y %d es %d\n", num1, num2, mcd);

    return 0;
}

#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2lf grados Celsius son %.2lf grados Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}

#include <stdio.h>

int main() {
    char operador;
    double num1, num2;

    printf("Ingrese una operación (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Ingrese dos números: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operador) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error: No se puede dividir por cero.\n");
            }
            break;
        default:
            printf("Operador no válido.\n");
    }

    return 0;
}

#include <stdio.h>

unsigned long long calcularFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFactorial(n - 1);
    }
}

int main() {
    int numero;

    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        unsigned long long factorial = calcularFactorial(numero);
        printf("El factorial de %d es %llu\n", numero, factorial);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char palabras[][20] = {
    "manzana",
    "banana",
    "naranja",
    "sandia",
    "uva"
};

int main() {
    srand(time(NULL));

    int indicePalabra = rand() % 5;
    char palabraSecreta[20];
    strcpy(palabraSecreta, palabras[indicePalabra]);

    int longitud = strlen(palabraSecreta);
    char palabraAdivinada[20];
    memset(palabraAdivinada, '_', longitud);
    palabraAdivinada[longitud] = '\0';

    int intentosRestantes = 6;

    printf("Bienvenido al juego de adivinanza de palabras.\n");

    while (intentosRestantes > 0) {
        printf("Palabra a adivinar: %s\n", palabraAdivinada);

        char letra;
        printf("Ingresa una letra: ");
        scanf(" %c", &letra);

        int aciertos = 0;

        for (int i = 0; i < longitud; i++) {
            if (palabraSecreta[i] == letra && palabraAdivinada[i] == '_') {
                palabraAdivinada[i] = letra;
                aciertos++;
            }
        }

        if (aciertos == 0) {
            printf("Letra incorrecta. Intentos restantes: %d\n", --intentosRestantes);
        } else {
            printf("¡Acierto! Letra encontrada %d vez(es).\n", aciertos);
        }

        if (strcmp(palabraSecreta, palabraAdivinada) == 0) {
            printf("¡Felicidades! Has adivinado la palabra: %s\n", palabraSecreta);
            break;
        }
    }

    if (intentosRestantes == 0) {
        printf("Se han agotado todos los intentos. La palabra era: %s\n", palabraSecreta);
    }

    return 0;
}

#include <stdio.h>

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

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

#include <stdio.h>

#define MAX_SIZE 10

int cola[MAX_SIZE];
int frente = -1;
int final = -1;

void encolar(int elemento) {
    if (final == MAX_SIZE - 1) {
        printf("La cola está llena. No se puede encolar.\n");
    } else {
        if (frente == -1) {
            frente = 0;
        }
        cola[++final] = elemento;
        printf("Elemento encolado: %d\n", elemento);
    }
}

void desencolar() {
    if (frente == -1) {
        printf("La cola está vacía. No se puede desencolar.\n");
    } else {
        printf("Elemento desencolado: %d\n", cola[frente]);
        if (frente == final) {
            frente = final = -1;
        } else {
            frente++;
        }
    }
}

int main() {
    encolar(1);
    encolar(2);
    encolar(3);
    desencolar();
    encolar(4);

    return 0;
}

#include <stdio.h>
#include <string.h>

struct Contacto {
    char nombre[50];
    char telefono[15];
};

int main() {
    struct Contacto agenda[100];
    int numContactos = 0;

    while (1) {
        printf("\nMenú de opciones:\n");
        printf("1. Agregar contacto\n");
        printf("2. Mostrar contactos\n");
        printf("3. Buscar contacto\n");
        printf("4. Salir\n");
        printf("Ingrese una opción: ");
        
        int opcion;
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ingrese el nombre del contacto: ");
                scanf("%s", agenda[numContactos].nombre);

                printf("Ingrese el número de teléfono: ");
                scanf("%s", agenda[numContactos].telefono);

                numContactos++;
                printf("Contacto agregado con éxito.\n");
                break;
            case 2:
                if (numContactos == 0) {
                    printf("No hay contactos en la lista.\n");
                } else {
                    printf("Lista de contactos:\n");
                    for (int i = 0; i < numContactos; i++) {
                        printf("Nombre: %s, Teléfono: %s\n", agenda[i].nombre, agenda[i].telefono);
                    }
                }
                break;
            case 3:
                if (numContactos == 0) {
                    printf("No hay contactos en la lista.\n");
                } else {
                    char nombreBusqueda[50];
                    printf("Ingrese el nombre a buscar: ");
                    scanf("%s", nombreBusqueda);

                    int encontrado = 0;
                    for (int i = 0; i < numContactos; i++) {
                        if (strcmp(agenda[i].nombre, nombreBusqueda) == 0) {
                            printf("Nombre: %s, Teléfono: %s\n", agenda[i].nombre, agenda[i].telefono);
                            encontrado = 1;
                            break;
                        }
                    }

                    if (!encontrado) {
                        printf("Contacto no encontrado.\n");
                    }
                }
                break;
            case 4:
                printf("Saliendo del programa.\n");
                return 0;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    }
}

#include <stdio.h>
#include <math.h>

int main() {
    double principal, tasaInteres, tiempo;
    
    printf("Ingrese el principal (monto inicial): ");
    scanf("%lf", &principal);
    
    printf("Ingrese la tasa de interés anual (en decimal): ");
    scanf("%lf", &tasaInteres);
    
    printf("Ingrese el tiempo en años: ");
    scanf("%lf", &tiempo);
    
    double valorFuturo = principal * pow(1 + tasaInteres, tiempo);
    
    printf("El valor futuro de la inversión es: %.2lf\n", valorFuturo);
    
    return 0;
}

#include <stdio.h>

int binarioADecimal(int binario) {
    int decimal = 0, base = 1;
    while (binario > 0) {
        int digito = binario % 10;
        decimal += digito * base;
        base *= 2;
        binario /= 10;
    }
    return decimal;
}

int main() {
    int numBinario;
    
    printf("Ingrese un número binario: ");
    scanf("%d", &numBinario);
    
    int decimal = binarioADecimal(numBinario);
    
    printf("El número binario %d es equivalente a %d en decimal.\n", numBinario, decimal);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzarDado() {
    return (rand() % 6) + 1;
}

int main() {
    srand(time(NULL));
    
    int dado1 = lanzarDado();
    int dado2 = lanzarDado();
    int suma = dado1 + dado2;
    
    printf("Primer dado: %d\n", dado1);
    printf("Segundo dado: %d\n", dado2);
    printf("Suma: %d\n", suma);
    
    if (suma == 7 || suma == 11) {
        printf("¡Ganaste!\n");
    } else {
        printf("Perdiste. Inténtalo de nuevo.\n");
    }
    
    return 0;
}

#include <stdio.h>

void ordenarSeleccion(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indiceMinimo = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[indiceMinimo]) {
                indiceMinimo = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[indiceMinimo];
        arr[indiceMinimo] = temp;
    }
}

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    int arr[n];

    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ordenarSeleccion(arr, n);

    printf("Arreglo ordenado en orden ascendente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    int i = 1;
    
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int edad;
    
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    
    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    char operador;
    double num1, num2, resultado;
    
    printf("Ingrese un operador (+, -, *, /): ");
    scanf(" %c", &operador);
    
    printf("Ingrese dos números: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: División por cero no permitida.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Operador no válido.\n");
            return 1;
    }
    
    printf("Resultado: %.2lf\n", resultado);
    
    return 0;
}

#include <stdio.h>

int main() {
    int n, suma = 0, contador = 0;
    float promedio;
    
    printf("Ingrese una serie de números (ingrese 0 para terminar):\n");
    
    while (1) {
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }
        
        suma += n;
        contador++;
    }
    
    if (contador > 0) {
        promedio = (float)suma / contador;
        printf("El promedio es: %.2f\n", promedio);
    } else {
        printf("No se ingresaron números válidos.\n");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int numero;
    
    printf("Ingrese un número para generar su tabla de multiplicar: ");
    scanf("%d", &numero);
    
    printf("Tabla de multiplicar del %d:\n", numero);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    
    return 0;
}

#include <stdio.h>

int esPrimo(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    
    if (esPrimo(n)) {
        printf("%d es un número primo.\n", n);
    } else {
        printf("%d no es un número primo.\n", n);
    }
    
    return 0;
}

#include <stdio.h>

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    printf("Ingrese dos números enteros: ");
    scanf("%d %d", &num1, &num2);
    
    int resultado = mcd(num1, num2);
    
    printf("El MCD de %d y %d es %d\n", num1, num2, resultado);
    
    return 0;
}

#include <stdio.h>

int busquedaBinaria(int arreglo[], int n, int clave) {
    int izquierda = 0, derecha = n - 1;
    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (arreglo[medio] == clave) {
            return medio;
        }
        if (arreglo[medio] < clave) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1; // La clave no se encontró en el arreglo
}

int main() {
    int arreglo[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int clave;
    
    printf("Ingrese un número a buscar: ");
    scanf("%d", &clave);
    
    int resultado = busquedaBinaria(arreglo, n, clave);
    
    if (resultado != -1) {
        printf("El número %d se encuentra en la posición %d del arreglo.\n", clave, resultado);
    } else {
        printf("El número %d no se encuentra en el arreglo.\n", clave);
    }
    
    return 0;
}

#include <stdio.h>

void burbuja(int arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arreglo[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    
    burbuja(arreglo, n);
    
    printf("Arreglo ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    
    return 0;
}

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Ingrese un número n para calcular el término n de la serie Fibonacci: ");
    scanf("%d", &n);
    
    int resultado = fibonacci(n);
    
    printf("El término %d de la serie Fibonacci es %d\n", n, resultado);
    
    return 0;
}

o.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    printf("Ingrese dos números: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2);
    
    intercambiar(&num1, &num2);
    
    printf("Después del intercambio: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}

#include <stdio.h>

int fibonacciIterativo(int n) {
    int a = 0, b = 1, temp;
    
    if (n == 0) {
        return a;
    }
    
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    
    return b;
}

int main() {
    int n;
    
    printf("Ingrese un número n para calcular el término n de la serie Fibonacci: ");
    scanf("%d", &n);
    
    int resultado = fibonacciIterativo(n);
    
    printf("El término %d de la serie Fibonacci es %d\n", n, resultado);
    
    return 0;
}

#include <stdio.h>

struct Punto {
    int x;
    int y;
};

int main() {
    struct Punto p1, p2;
    
    printf("Ingrese las coordenadas del primer punto (x y): ");
    scanf("%d %d", &p1.x, &p1.y);
    
    printf("Ingrese las coordenadas del segundo punto (x y): ");
    scanf("%d %d", &p2.x, &p2.y);
    
    printf("Primer punto: (%d, %d)\n", p1.x, p1.y);
    printf("Segundo punto: (%d, %d)\n", p2.x, p2.y);
    
    return 0;
}

Cálculo del área y perímetro de un rectángulo:

c
Copy code
#include <stdio.h>

struct Rectangulo {
    float longitud;
    float ancho;
};

int main() {
    struct Rectangulo rect;
    
    printf("Ingrese la longitud del rectángulo: ");
    scanf("%f", &rect.longitud);
    
    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f", &rect.ancho);
    
    float area = rect.longitud * rect.ancho;
    float perimetro = 2 * (rect.longitud + rect.ancho);
    
    printf("El área del rectángulo es %.2f\n", area);
    printf("El perímetro del rectángulo es %.2f\n", perimetro);
    
    return 0;
}

#include <stdio.h>
#include <string.h>

int contarVocales(char cadena[]) {
    int contador = 0;
    int longitud = strlen(cadena);
    
    for (int i = 0; i < longitud; i++) {
        char caracter = cadena[i];
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            contador++;
        }
    }
    
    return contador;
}

int main() {
    char cadena[100];
    
    printf("Ingrese una cadena de texto: ");
    scanf("%s", cadena);
    
    int cantidadVocales = contarVocales(cadena);
    
    printf("La cantidad de vocales en la cadena es: %d\n", cantidadVocales);
    
    return 0;
}

#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &n);
    
    int resultado = factorial(n);
    
    printf("%d! = %d\n", n, resultado);
    
    return 0;
}

#include <stdio.h>

void multiplicarMatrices(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];
    
    multiplicarMatrices(A, B, C);
    
    printf("Resultado de la multiplicación de matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>

int sumaNaturales(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumaNaturales(n - 1);
}

int main() {
    int n;
    
    printf("Ingrese un número n para calcular la suma de los primeros n números naturales: ");
    scanf("%d", &n);
    
    int resultado = sumaNaturales(n);
    
    printf("La suma de los primeros %d números naturales es %d\n", n, resultado);
    
    return 0;
}

#include <stdio.h>

int main() {
    int numeroSecreto = 42;
    int intento, intentosRestantes = 3;
    
    printf("Bienvenido al juego de adivinanza. Adivina el número secreto (entre 1 y 100).\n");
    
    while (intentosRestantes > 0) {
        printf("Tienes %d intentos restantes. Ingresa tu suposición: ", intentosRestantes);
        scanf("%d", &intento);
        
        if (intento == numeroSecreto) {
            printf("¡Felicidades! Has adivinado el número secreto.\n");
            break;
        } else if (intento < numeroSecreto) {
            printf("El número secreto es mayor.\n");
        } else {
            printf("El número secreto es menor.\n");
        }
        
        intentosRestantes--;
    }
    
    if (intentosRestantes == 0) {
        printf("Agotaste todos tus intentos. El número secreto era %d.\n", numeroSecreto);
    }
    
    return 0;
}