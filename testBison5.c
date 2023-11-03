// Define a structure for a node in the doubly linked list.
//./compile testBison5.c -p
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Create a new node with the given data.
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Initialize an empty doubly linked list.
struct Node* initializeDoublyLinkedList() {
    return NULL;
}

// Append a node with the given data to the end of the list.
struct Node* append(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
    return head;
}

// Print the elements in the doubly linked list.
void printDoublyLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Shift the bits of numbers in the list to the left by a specified number of positions.
struct Node* shiftBitsLeft(struct Node* head, int positions) {
    struct Node* current = head;
    while (current != NULL) {
        current->data = current->data << positions;
        current = current->next;
    }
    return head;
}

// Shift the bits of numbers in the list to the right by a specified number of positions.
struct Node* shiftBitsRight(struct Node* head, int positions) {
    struct Node* current = head;
    while (current != NULL) {
        current->data = current->data >> positions;
        current = current->next;
    }
    return head;
}

// Free memory used by the doubly linked list.
void freeDoublyLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int testDLINKEDLIST() {
    struct Node* myList = initializeDoublyLinkedList();

    myList = append(myList, 5);
    myList = append(myList, 10);
    myList = append(myList, 15);
    myList = append(myList, 20);

    printf("Original List: ");
    printDoublyLinkedList(myList);

    myList = shiftBitsLeft(myList, 2);
    printf("After Shifting Bits Left: ");
    printDoublyLinkedList(myList);

    myList = shiftBitsRight(myList, 1);
    printf("After Shifting Bits Right: ");
    printDoublyLinkedList(myList);

    // Free the memory used by the list.
    freeDoublyLinkedList(myList);

    return 0;
}

// Define a structure using the struct keyword.
struct MyStruct {
    int member1;
    float member2;
};

// Define a union using the union keyword.
union MyUnion {
    int intValue;
    float floatValue;
};

// Use the volatile keyword to declare a volatile variable.
volatile int volatileVar = 0;

// Define a function that can be inlined using the inline keyword.
inline int add(int a, int b) {
    return a + b;
}

// Declare an external variable using the extern keyword.
extern int externalVar;

int testVolatile() {
    // Create a struct and union variable.
    struct MyStruct structVar;
    union MyUnion unionVar;

    // Set values for the struct and union members.
    structVar.member1 = 42;
    structVar.member2 = 3.14;
    unionVar.intValue = 100;

    // Declare a short variable.
    short shortVar = 5;

    // Use a while loop to print values.
    int i = 0;
    while (i < 5) {
        printf("Iteration %d: %d\n", i, i * shortVar);
        i++;
    }

    // Call the add function and print the result.
    int sum = add(3, 7);
    printf("Sum: %d\n", sum);

    // Print the value of the volatile variable.
    printf("Volatile Variable: %d\n", volatileVar);

    // Print the value of the external variable.
    printf("External Variable: %d\n", externalVar);

    return 0;
}

// Define an external variable.
extern int externalVar = 50;

int operators() {
    // Arithmetic operators
    int a = 10, b = 3;
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Relational operators
    int x = 5, y = 8;
    printf("Equal: %d == %d is %s\n", x, y, x == y ? "true" : "false");
    printf("Not Equal: %d != %d is %s\n", x, y, x != y ? "true" : "false");
    printf("Greater Than: %d > %d is %s\n", x, y, x > y ? "true" : "false");
    printf("Less Than: %d < %d is %s\n", x, y, x < y ? "true" : "false");
    printf("Greater Than or Equal: %d >= %d is %s\n", x, y, x >= y ? "true" : "false");
    printf("Less Than or Equal: %d <= %d is %s\n", x, y, x <= y ? "true" : "false");

    // Logical operators
    int p = 1, q = 0;
    printf("Logical AND: %d && %d = %d\n", p, q, p && q);
    printf("Logical OR: %d || %d = %d\n", p, q, p || q);
    printf("Logical NOT: !%d = %d, !%d = %d\n", p, !p, q, !q);

    // Bitwise operators
    int num1 = 5, num2 = 3;
    printf("Bitwise AND: %d & %d = %d\n", num1, num2, num1 & num2);
    printf("Bitwise OR: %d | %d = %d\n", num1, num2, num1 | num2);
    printf("Bitwise XOR: %d ^ %d = %d\n", num1, num2, num1 ^ num2);
    printf("Bitwise NOT: ~%d = %d, ~%d = %d\n", num1, ~num1, num2, ~num2);

    // Assignment operators
    int result = 0;
    result += 10;  // result = result + 10
    result -= 4;   // result = result - 4
    result *= 3;   // result = result * 3
    result /= 2;   // result = result / 2
    result %= 5;   // result = result % 5
    printf("Assignment Result: %d\n", result);

    // Increment and Decrement operators
    int count = 5;
    printf("Original Count: %d\n", count);
    printf("Post-increment: %d\n", count++);
    printf("After Post-increment: %d\n", count);
    printf("Pre-increment: %d\n", ++count);
    printf("After Pre-increment: %d\n", count);
    printf("Post-decrement: %d\n", count--);
    printf("After Post-decrement: %d\n", count);
    printf("Pre-decrement: %d\n", --count);
    printf("After Pre-decrement: %d\n", count);

    // Conditional (Ternary) operator
    int number = 12;
    char* resultStr = (number % 2 == 0) ? "Even" : "Odd";
    printf("Number %d is %s\n", number, resultStr);

    return 0;
}

int array() {
    // Declare an integer array and initialize it.
    int numbers[5] = {1, 2, 3, 4, 5};

    // Accessing elements by index using square brackets.
    printf("Element at index 0: %d\n", numbers[0]);
    printf("Element at index 2: %d\n", numbers[2]);

    // Modifying elements in the array.
    numbers[1] = 10;
    numbers[3] = 20;

    // Printing the modified array.
    printf("Modified Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Multidimensional arrays using square brackets.
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing elements in a multidimensional array.
    printf("Element at (1, 2): %d\n", matrix[1][2]);
    printf("Element at (2, 0): %d\n", matrix[2][0]);

    // Character array (string).
    char greeting[] = "Hello, C!";
    printf("Character array: %s\n", greeting);

    // Accessing characters in a string using square brackets.
    printf("Character at index 7: %c\n", greeting[7]);
    printf("Character at index 2: %c\n", greeting[2]);

    return 0;
}

int memoryManagement() {
    int size = 5;

    // Allocate memory for an integer array of size 5 using malloc.
    int* dynamicArray = (int*)malloc(size * sizeof(int));

    if (dynamicArray == NULL) {
        fprintf(stderr, "Memory allocation failed. Exiting...\n");
        return 1; // Exit with an error code.
    }

    // Initialize the dynamic array with values.
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 10;
    }

    // Access and print the values using pointers.
    printf("Dynamic Array Values: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(dynamicArray + i));
    }
    printf("\n");

    // Modify values using pointers.
    for (int i = 0; i < size; i++) {
        *(dynamicArray + i) += 5;
    }

    // Print the modified values.
    printf("Modified Dynamic Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Deallocate the dynamically allocated memory using free.
    free(dynamicArray);

    // Attempting to access or modify the freed memory would lead to undefined behavior.

    return 0;
}

// Define an enum for days of the week.
enum DaysOfWeek {
    Sunday,    // 0
    Monday,    // 1
    Tuesday,   // 2
    Wednesday, // 3
    Thursday,  // 4
    Friday,    // 5
    Saturday   // 6
};

// Function to print the day of the week.
void printDay(enum DaysOfWeek day) {
    switch (day) {
        case Sunday:
            printf("Sunday\n");
            break;
        case Monday:
            printf("Monday\n");
            break;
        case Tuesday:
            printf("Tuesday\n");
            break;
        case Wednesday:
            printf("Wednesday\n");
            break;
        case Thursday:
            printf("Thursday\n");
            break;
        case Friday:
            printf("Friday\n");
            break;
        case Saturday:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day\n");
    }
}

int enumTest() {
    enum DaysOfWeek today = Tuesday;

    printf("Today is ");
    printDay(today);

    return 0;
}


int forLoop() {
    // Using a for loop to print numbers from 1 to 5.
    printf("Using a for loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Using a for loop to iterate over an array.
    int numbers[] = {10, 20, 30, 40, 50};
    printf("Using a for loop to iterate over an array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    return 0;
}

int dowhileLoop() {
    // Using a do-while loop to print numbers from 1 to 5.
    printf("Using a do-while loop:\n");
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");

    // Using a do-while loop to get user input until a valid number is entered.
    int number;
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);
    printf("You entered a positive number: %d\n", number);

    return 0;
}

int whileLoop() {
    // Using a while loop to print numbers from 1 to 5.
    printf("Using a while loop:\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // Using a while loop to find the first power of 2 greater than 100.
    int powerOf2 = 1;
    while (powerOf2 <= 100) {
        powerOf2 *= 2;
    }
    printf("First power of 2 greater than 100: %d\n", powerOf2);

    return 0;
}

#define ENABLE_FEATURE 1

// Ensure a compile-time assertion using _Static_assert.
_Static_assert(ENABLE_FEATURE == 1, "Feature must be enabled");

// Merge two subarrays into one sorted array.
void merge(int arr[], int left, int middle, int right) {
    int i, j, k;
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Create temporary arrays to hold the data.
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[].
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Merge the temp arrays back into arr[left..right].
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = left; // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any.
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any.
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge sort function.
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Find the middle point to divide the array into two halves.
        int middle = left + (right - left) / 2;

        // Recursive call on the first half.
        mergeSort(arr, left, middle);

        // Recursive call on the second half.
        mergeSort(arr, middle + 1, right);

        // Merge the two halves.
        merge(arr, left, middle, right);
    }
}

int testMergeSort() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Perform merge sort on the array.
    mergeSort(arr, 0, arrSize - 1);

    printf("Sorted array: ");
    for (int i = 0; i < arrSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





