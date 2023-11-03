
#include <testing.h>
#define D 0

int main(int argc, char *argv[]) {
     printf("%d\n", _Generic(1.0L,float : 1 ,double : 2,
                            long double : 3, default : 0));return 0;
}// Function to calculate the factorial of a number
int factorial(int n) {if (n == 0 || n == 1)return 1;else return n * factorial(n - 1);
}int AnotherMain() {int num = 5; // You can change this number
int result = factorial(num);printf("The factorial of %d is %d\n", num, result);return 0;
}int isPrime(int num) {if (num <= 1)return 0; if (num <= 3)return 1;if (num % 2 == 0 || num % 3 == 0)return 0;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == D)
            return 0;
    }
                return 1;
}

int AnotherOtherMain() {
    int count = 0;
    int num = 2;

    printf("The first 100 prime numbers:\n");
    while (count < 100) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}

int sumOfN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void funcion1 (int r, int* b, int* c){ // -1 1 7
    int d;
    a = *c; // 7
    d = a + 3 + *b; // de es 7 + 3 + 1 = 11
    *b = *b + 5;  // 1 + 5 = 6
    *c = *c + 4; // 7 + 4 = 11
    printf("\n%d %d %d %d", a, *b, *c, d); // 7 6 11 11 (2)
}


int funcion2 (int *d, int c){ // le ponemos el 1 y el 3
    int b;
    a = 1;
    b = 7; // b solo existe en la funcion2 
    funcion1(-1, d, &b); // d ahora es 6 // b ahora es 11 y recordar que a ahora es 7
    printf("\n%d %d %d %d", a, b, c, *d); // 7 11 3 6 (3)
    return c;
}

typedef struct treenode {
  char* word;
  unsigned int counter;
  unsigned int depth;
  struct treenode* izq;
  struct treenode* der;
} node;

void erase(int* pos) {
  if (pos != NULL) {
    erase(pos->izq);
    erase(pos->der);
    free(pos->word);
    free(pos);
  }
  return;
}

struct CalculatorResult {
    int type;
    union {
        int intResult;
        float floatResult;
        double doubleResult;
    } value;
};

void func0(){
     int intVal1 = 5, intVal2 = 3;
    float floatVal1 = 3.14, floatVal2 = 2.71;
    double doubleVal1 = 5.6, doubleVal2 = 2.3;

    struct CalculatorResult result;

    result = add(intVal1, intVal2);
    if (result.type == INT) {
        printf("Integer Addition: %d\n", result.value.intResult);
    }

    result = add(floatVal1, floatVal2);
    if (result.type == FLOAT) {
        printf("Float Addition: %.2f\n", result.value.floatResult);
    }

    result = add(doubleVal1, doubleVal2);
    if (result.type == DOUBLE) {
        printf("Double Addition: %.2f\n", result.value.doubleResult);
    }

    return 0;
}

int main(int argc, char *argv[]) {
     printf("%d\n", _Generic(1.0L,float : 1 ,double : 2,
                            long double : 3, default : 0)); 
                            
    return 0;
}

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int AnotherMain() {
    int num = 5; // You can change this number

    int result = factorial(num);
    printf("The factorial of %d is %d\n", num, result);

    return 0;
}

int isPrime(int num) {
    if (num <= 1)
        return 0;
    if (num <= 3)
        return 1;
    if (num % 2 == 0 || num % 3 == 0)
        return 0;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int AnotherOtherMain() {
    int count = 0;
    int num = 2;

    printf("The first 100 prime numbers:\n");
    while (count < 100) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}

int sumOfN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void funcion1 (int r, int* b, int* c){ // -1 1 7
    int d;
    a = *c; // 7
    d = a + 3 + *b; // de es 7 + 3 + 1 = 11
    *b = *b + 5;  // 1 + 5 = 6
    *c = *c + 4; // 7 + 4 = 11
    printf("\n%d %d %d %d", a, *b, *c, d); // 7 6 11 11 (2)
}


int funcion2 (int *d, int c){ // le ponemos el 1 y el 3
    int b;
    a = 1;
    b = 7; // b solo existe en la funcion2 
    funcion1(-1, d, &b); // d ahora es 6 // b ahora es 11 y recordar que a ahora es 7
    printf("\n%d %d %d %d", a, b, c, *d); // 7 11 3 6 (3)
    return c;
}

typedef struct treenode {
  char* word;
  unsigned int counter;
  unsigned int depth;
  struct treenode* izq;
  struct treenode* der;
} node;

void erase(int* pos) {
  if (pos != NULL) {
    erase(pos->izq);
    erase(pos->der);
    free(pos->word);
    free(pos);
  }
  return;
}

struct CalculatorResult {
    int type;
    union {
        int intResult;
        float floatResult;
        double doubleResult;
    } value;
};

void func0(){
     int intVal1 = 5, intVal2 = 3;
    float floatVal1 = 3.14, floatVal2 = 2.71;
    double doubleVal1 = 5.6, doubleVal2 = 2.3;

    struct CalculatorResult result;

    result = add(intVal1, intVal2);
    if (result.type == INT) {
        printf("Integer Addition: %d\n", result.value.intResult);
    }

    result = add(floatVal1, floatVal2);
    if (result.type == FLOAT) {
        printf("Float Addition: %.2f\n", result.value.floatResult);
    }

    result = add(doubleVal1, doubleVal2);
    if (result.type == DOUBLE) {
        printf("Double Addition: %.2f\n", result.value.doubleResult);
    }

    return 0;
}


int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int useArray() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int result = sumArray(myArray, arraySize);

    printf("Sum of array elements: %d\n", result);

    return 0;
}

int findMax(int arr[], int size) {
    if (size == 0) {
        // Handle the case of an empty array
        printf("The array is empty.\n");
        return 0; // You can return an appropriate value or use error handling.
    }

    int max = arr[0]; // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

void main() {
    int myArray[] = {12, 45, 78, 34, 65, 90};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    int maxElement = findMax(myArray, arraySize);

    printf("Maximum element in the array: %d\n", maxElement);
}

// Global variables
int globalVar = 42;

// Function with parameters and return value
int add(int a, int b) {
    return a + b;
}

// Typedef for a function pointer
typedef int (*FuncPtrType)(int, int);

int anotherFUN() {
    // Local variable declaration
    int localVar = 10;

    // Array declaration and initialization
    int intArray[5] = {1, 2, 3, 4, 5};

    // Pointer declaration and initialization
    int* intPtr = &localVar;

    // Typedef for a data type
    typedef unsigned long long int ULL;
    int largeNumber = 123456789012345;

    // Assign function pointer
    functionPtr = &add;

    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n", localVar);
    printf("Array element: %d\n", intArray[2]);
    printf("Pointer value: %d\n", *intPtr);
    printf("Function result: %d\n", add(7, 8));
    printf("Using function pointer: %d\n", functionPtr(9, 10));

    // Using a typedef for a function pointer
    printf("Using typedef for function pointer: %d\n", funcTypePtr(11, 12));

    return 0;
}

int showTypes(){
    int integerVar = 42;

    // Floating-point types
    float floatVar = 3.14159;
    double doubleVar = 2.71828;

    // Character type
    char characterVar = 'X';

    // Boolean type (C doesn't have a built-in boolean type, so we use integers)
    int trueVar = 1;
    int falseVar = 0;

    // Size and range
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);

    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Minimum value of double: %e\n", DBL_MIN);
    printf("Maximum value of double: %e\n", DBL_MAX);

    // Print the values
    printf("Integer: %d\n", integerVar);
    printf("Short: %hd\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Unsigned: %u\n", unsignedVar);
    printf("Char: %c\n", charVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);
    printf("Character: %c\n", characterVar);
    printf("Boolean (True): %d\n", trueVar);
    printf("Boolean (False): %d\n", falseVar);

    return 0;
}

int x;
int y;
int z;
int k;
int x;
int x;
int z;
int z;


int showTypes(){
    // Size and range
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);

    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Minimum value of double: %e\n", DBL_MIN);
    printf("Maximum value of double: %e\n", DBL_MAX);

    // Print the values
    printf("Integer: %d\n", integerVar);
    printf("Short: %hd\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Unsigned: %u\n", unsignedVar);
    printf("Char: %c\n", charVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);
    printf("Character: %c\n", characterVar);
    printf("Boolean (True): %d\n", trueVar);
    printf("Boolean (False): %d\n", falseVar);

    return 0;
}


int showTypes(){
    // Size and range
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);

    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Minimum value of double: %e\n", DBL_MIN);
    printf("Maximum value of double: %e\n", DBL_MAX);

    // Print the values
    printf("Integer: %d\n", integerVar);
    printf("Short: %hd\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Unsigned: %u\n", unsignedVar);
    printf("Char: %c\n", charVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);
    printf("Character: %c\n", characterVar);
    printf("Boolean (True): %d\n", trueVar);
    printf("Boolean (False): %d\n", falseVar);

    return 0;
}

int showTypes(){
    // Size and range
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);

    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Minimum value of double: %e\n", DBL_MIN);
    printf("Maximum value of double: %e\n", DBL_MAX);

    // Print the values
    printf("Integer: %d\n", integerVar);
    printf("Short: %hd\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Unsigned: %u\n", unsignedVar);
    printf("Char: %c\n", charVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);
    printf("Character: %c\n", characterVar);
    printf("Boolean (True): %d\n", trueVar);
    printf("Boolean (False): %d\n", falseVar);
    for(int i =0;i<10;i++) c++;
    return 0;
}

int showTypes(){
    // Size and range
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);

    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Minimum value of double: %e\n", DBL_MIN);
    printf("Maximum value of double: %e\n", DBL_MAX);

    // Print the values
    printf("Integer: %d\n", integerVar);
    printf("Short: %hd\n", shortVar);
    printf("Long: %ld\n", longVar);
    printf("Unsigned: %u\n", unsignedVar);
    printf("Char: %c\n", charVar);
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);
    printf("Character: %c\n", characterVar);
    printf("Boolean (True): %d\n", trueVar);
    printf("Boolean (False): %d\n", falseVar);

    return 0;
}
