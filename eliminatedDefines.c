struct MyStruct {
    int a;
    double b;
} _Alignas(16); // Align this structure to a 16-byte boundary


int useAlignas() {
    struct MyStruct myVar; // Declare a variable of MyStruct

    printf("Size of myVar: %zu bytes\n", sizeof(myVar));
    printf("Address of myVar.a: %p\n", (void*)&myVar.a);
    printf("Address of myVar.b: %p\n", (void*)&myVar.b);

    return 0;
}

int useComplex() {
    double real_part = 3.0;
    double imaginary_part = 4.0;

    // Declare a complex number using the _Complex keyword
    double _Complex my_complex = real_part + imaginary_part * imaginary_part;

    // Access the real and imaginary parts
    double real = creal(my_complex);
    double imag = cimag(my_complex);

    printf("Complex number: %.1f + %.1fi\n", real, imag);

    // Perform arithmetic operations
    double _Complex another_complex = 1.0 + 2.0 * I;
    double _Complex sum = my_complex + another_complex;
    double _Complex product = my_complex * another_complex;

    printf("Sum: %.1f + %.1fi\n", creal(sum), cimag(sum));
    printf("Product: %.1f + %.1fi\n", creal(product), cimag(product));

    return 0;
}

int whileGoto() {
    int count = 1;

start:  // Label for the goto statement
    while (count <= 10) {
        printf("%d\n", count);
        count++;
    }

    if (count <= 10)
        goto start;  // Jump back to the "start" label

    return 0;
}

int BitwiseOps() {
    unsigned int num = 12;  // Binary: 1100

    // Right shift and assign
    num >>= 2;  // Shift right by 2 positions
    // After this operation, num becomes 3 (Binary: 0011)

    printf("After right shift: %u\n", num);

    // Left shift and assign
    num <<= 1;  // Shift left by 1 position
    // After this operation, num becomes 6 (Binary: 0110)

    printf("After left shift: %u\n", num);

    return 0;
}

int AssignOps() {
    int x = 10, y = 5;

    // Basic assignment
    int result = x;
    printf("Basic assignment: result = %d\n", result); // result = 10

    // Addition assignment
    x += 5; // Equivalent to x = x + 5
    printf("Addition assignment: x += 5, x = %d\n", x); // x = 15

    // Subtraction assignment
    x -= 3; // Equivalent to x = x - 3
    printf("Subtraction assignment: x -= 3, x = %d\n", x); // x = 12

    // Multiplication assignment
    x *= 2; // Equivalent to x = x * 2
    printf("Multiplication assignment: x *= 2, x = %d\n", x); // x = 24

    // Division assignment
    x /= 4; // Equivalent to x = x / 4
    printf("Division assignment: x /= 4, x = %d\n", x); // x = 6

    // Modulus assignment
    x %= 5; // Equivalent to x = x % 5
    printf("Modulus assignment: x %%= 5, x = %d\n", x); // x = 1

    // Bitwise AND assignment
    x &= 3; // Equivalent to x = x & 3
    printf("Bitwise AND assignment: x &= 3, x = %d\n", x); // x = 1

    // Bitwise OR assignment
    x |= 6; // Equivalent to x = x | 6
    printf("Bitwise OR assignment: x |= 6, x = %d\n", x); // x = 7

    // Bitwise XOR assignment
    x ^= 1; // Equivalent to x = x ^ 1
    printf("Bitwise XOR assignment: x ^= 1, x = %d\n", x); // x = 6

    // Left shift assignment
    x <<= 2; // Equivalent to x = x << 2
    printf("Left shift assignment: x <<= 2, x = %d\n", x); // x = 24

    // Right shift assignment
    x >>= 1; // Equivalent to x = x >> 1
    printf("Right shift assignment: x >>= 1, x = %d\n", x); // x = 12

    return 0;
}

int logicalOps() {
    int a = 5;
    int b = 10;

    // Logical AND (&&) operator
    if (a > 0 && b > 0) {
        printf("Both a and b are greater than 0.\n");
    } else {
        printf("At least one of them is not greater than 0.\n");
    }

    // Logical OR (||) operator
    if (a > 0 || b > 0) {
        printf("At least one of them is greater than 0.\n");
    } else {
        printf("Both a and b are not greater than 0.\n");
    }

    // Logical NOT (!) operator
    if (!(a > 0)) {
        printf("a is not greater than 0.\n");
    } else {
        printf("a is greater than 0.\n");
    }

    return 0;
}

int ComparisonOPs() {
    int a = 5;
    int b = 10;

    // Equal (==) operator
    if (a == b) {
        printf("a is equal to b.\n");
    } else {
        printf("a is not equal to b.\n");
    }

    // Not Equal (!=) operator
    if (a != b) {
        printf("a is not equal to b.\n");
    } else {
        printf("a is equal to b.\n");
    }

    // Less Than (<) operator
    if (a < b) {
        printf("a is less than b.\n");
    } else {
        printf("a is not less than b.\n");
    }

    // Greater Than (>) operator
    if (a > b) {
        printf("a is greater than b.\n");
    } else {
        printf("a is not greater than b.\n");
    }

    // Less Than or Equal (<=) operator
    if (a <= b) {
        printf("a is less than or equal to b.\n");
    } else {
        printf("a is neither less than nor equal to b.\n");
    }

    // Greater Than or Equal (>=) operator
    if (a >= b) {
        printf("a is greater than or equal to b.\n");
    } else {
        printf("a is neither greater than nor equal to b.\n");
    }

    return 0;
}

void largeFunction() {
    int sum = 0;

    // Perform a long series of calculations
    for (int i = 1; i <= 1000; i++) {
        sum += i;
    }

    // Print the result
    printf("The sum of the numbers from 1 to 1000 is: %d\n", sum);

    // Simulate some other complex operations
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {
            printf("Iteration %d is even.\n", i);
        } else {
            printf("Iteration %d is odd.\n", i);
        }
    }
}

void print(char *s);
int goTo(int pos);
float square(float sq);
unsigned int uns(unsigned int i);


int testingKeywords() {
    auto a = 10; // The 'auto' keyword lets the compiler automatically deduce the type.

    switch (a) {
        case 1:
            printf("Value is 1\n");
            break;
        case 5:
            printf("Value is 5\n");
            break;
        case 10:
            printf("Value is 10\n");
            break;
        default:
            printf("Value is not 1, 5, or 10\n");
            break;
    }

    return 0;
}

int exampleSizes() {
    signed int signedInt = -42; // 'signed' specifies that the variable can hold both positive and negative values.
    unsigned int unsignedInt = 42; // 'unsigned' specifies that the variable can only hold non-negative values.

    int x = 5;
    printf("Size of int: %zu bytes\n", sizeof(int)); // 'sizeof' operator is used to determine the size of a data type.

    short shortVar = 32767; // 'short' specifies a smaller integer data type.
    long long longVar = 9223372036854775807; // 'long' specifies a larger integer data type.

    printf("Signed Integer: %d\n", signedInt);
    printf("Unsigned Integer: %u\n", unsignedInt);
    printf("Short Integer: %hd\n", shortVar);
    printf("Long Integer: %ld\n", longVar);

    return 0;
}

int charConstDefine() {
    const int constantValue = 42; // 'const' specifies a constant variable that cannot be modified.
    char character = 'A'; // 'char' is used to declare a character variable.

    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue; // 'continue' skips the current iteration of a loop and continues with the next.
        }

        switch (i) {
            case 1:
                printf("Case 1: %d\n", i);
                break;
            case 2:
                printf("Case 2: %d\n", i);
                break;
            default:
                printf("Default Case: %d\n", i); // 'default' is used in a 'switch' statement when no other case matches.
                break;
        }
    }

    printf("The constant value is: %d\n", constantValue);
    printf("The character is: %c\n", character);

    return 0;
}

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int sumNumbers(int restrict a, int restrict b) {
    register int result; // Suggests that 'result' should be stored in a register.

    result = a + b;

    return result;
}

int testEnum() {
    enum Day currentDay = TUESDAY; // Declaring an enum variable and initializing it.

    int num1 = 5, num2 = 7;
    int sum = sumNumbers(num1, num2);

    printf("Today is ");
    switch (currentDay) {
        case MONDAY:
            printf("Monday");
            break;
        case TUESDAY:
            printf("Tuesday");
            break;
        case WEDNESDAY:
            printf("Wednesday");
            break;
        case THURSDAY:
            printf("Thursday");
            break;
        case FRIDAY:
            printf("Friday");
            break;
        case SATURDAY:
            printf("Saturday");
            break;
        case SUNDAY:
            printf("Sunday");
            break;
    }

    printf(".\n");
    printf("The sum of %d and %d is %d.\n", num1, num2, sum);

    return 0;
}

typedef unsigned int uint;

union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int MoreKeywords() {
    // 'typedef' is used to create an alias for 'unsigned int'.
    int x = 42;

    // 'union' is used to create a variable 'myData' that can hold different types of data.
    union Data myData;
    myData.intValue = 42;
    printf("Integer Value: %d\n", myData.intValue);

    myData.floatValue = 3.14;
    printf("Float Value: %f\n", myData.floatValue);

    strcpy(myData.stringValue, "Hello, Union!");
    printf("String Value: %s\n", myData.stringValue);

    // '_Atomic' is used to declare atomic variables for use in multithreaded programs.
    _Atomic int atomicValue = ATOMIC_VAR_INIT(0);

    atomic_store(&atomicValue, 10);
    int retrievedValue = atomic_load(&atomicValue);

    // '_Bool' is a boolean data type that can hold 'true' or 'false'.
    _Bool flag = 1;

    if (flag) {
        printf("The flag is true.\n");
    } else {
        printf("The flag is false.\n");
    }

    return 0;
}


_Noreturn void exitOnError() {
    printf("An error occurred. Exiting...\n");
    exit(1);
}

int main() {
    // Using the `_Noreturn` function to indicate that it will not return.
    exitOnError();

    // `_Generic` usage: printing values based on the argument's type.
    int intValue = 42;
    double doubleValue = 3.14;
    _Complex double complexValue = 1.0 + 2.0 * I;

    printValue(intValue);
    printValue(doubleValue);
    printValue(complexValue);

    // `_Imaginary` is used to create imaginary variables.
    double _Imaginary imaginaryValue = 2.5 * I;

    printf("Imaginary: %f + %fi\n", creal(imaginaryValue), cimag(imaginaryValue));

    return 0;
}

_Static_assert(sizeof(int) == 4, "int must be 4 bytes on this platform");
_Static_assert(_Alignof(double) == 8, "double must be 8-byte aligned on this platform");

_Thread_local int threadLocalVar = 0;

int otherFunc() {

    // Attempt to assign an incompatible type to a _Thread_local variable.
    // This should trigger a compile-time error.
    //_Thread_local double invalidAssignment = 3.14;

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Alignment of double: %zu bytes\n", _Alignof(double));

    // Modify the thread-local variable.
    threadLocalVar = 42;

    // Create an atomic variable that can be safely accessed in multithreaded programs.
    int atomicValue = ATOMIC_VAR_INIT(0);

    // Perform atomic operations.
    atomic_store(&atomicValue, 10);
    int retrievedValue = atomic_load(&atomicValue);

    // Print values.
    printf("Thread-Local Variable: %d\n", threadLocalVar);
    printf("Atomic Variable: %d\n", retrievedValue);

    return 0;
}

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int search(struct Node* head, int target) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == target) {
            return 1; // Element found
        }
        current = current->next;
    }
    return 0; // Element not found
}

struct Node* deleteNode(struct Node* head, int target) {
    if (head == NULL) {
        return head; // List is empty, nothing to delete.
    }

    if (head->data == target) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct Node* current = head;
    while (current->next != NULL && current->next->data != target) {
        current = current->next;
    }

    if (current->next == NULL) {
        return head; // Element not found in the list.
    }

    struct Node* temp = current->next;
    current->next = current->next->next;
    free(temp);
    return head;
}

void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int moretest() {
    struct Node* head = NULL;

    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);

    printf("Original List: ");
    printList(head);

    if (search(head, 2)) {
        printf("Element 2 found in the list.\n");
    } else {
        printf("Element 2 not found in the list.\n");
    }

    head = deleteNode(head, 2);

    printf("List after deleting 2: ");
    printList(head);

    freeList(head); // Free memory to avoid memory leaks.

    return 0;
}

