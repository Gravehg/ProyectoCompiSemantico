#include "test04.c"
#define P 10
#define Q 20

int main(){
    printf("%d\n",P+Q);
}

// Function to calculate the factorial of a number using recursion.
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int useFact() {
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = factorial(number);
        printf("Factorial of %d is %llu\n", number, result);
    }

    return 0;
}

// Define a structure for a singly linked list node.
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node and return a pointer to it.
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

// Function to insert a new node at the beginning of the list.
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to insert a new node at the end of the list.
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to print the elements of the list.
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to search for a specific element in the list.
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

// Function to delete a specific element from the list.
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

// Function to free the memory allocated for the list.
void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
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

// Define a structure for a binary tree node.
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node and return a pointer to it.
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the binary tree.
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to perform an in-order traversal of the binary tree.
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to search for a specific element in the binary tree.
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

int testTree() {
    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("In-Order Traversal: ");
    inOrderTraversal(root);
    printf("\n");

    int key = 40;
    struct Node* result = search(root, key);
    if (result != NULL) {
        printf("Element %d found in the tree.\n", key);
    } else {
        printf("Element %d not found in the tree.\n", key);
    }

    return 0;
}


// Variable Declarations
int globalVar = 42; // A global variable

int varDecl() {
    // Variable Declarations
    int localVar = 10; // A local variable
    char charVar = 'A'; // A character variable
    double doubleVar = 3.14159; // A double-precision floating-point variable

    // Function Declaration
    void greet(); // Function declaration

    // Function Pointer Declaration
    void (*functionPtr)(); // Declaration of a pointer to a function that takes no arguments and returns void

    // Struct Declaration
    struct Person {
        char name[50];
        int age;
    };

    // Struct Variable Declaration
    struct Person person1; // Declaration of a variable of type struct Person

    // Typedef Declaration
    typedef unsigned int uint; // Typedef declaration for an unsigned integer

    // Using the typedef to declare a variable
    int positiveInt = 100; // Using the typedef for an unsigned integer

    // Output
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);
    printf("Character Variable: %c\n", charVar);
    printf("Double Variable: %lf\n", doubleVar);

    person1.age = 25;
    strcpy(person1.name, "John Doe");
    printf("Person: %s, Age: %d\n", person1.name, person1.age);

    // Calling a Function
    greet();

    return 0;
}

// Function Definition
void greet() {
    printf("Hello, World!\n");
}

int align() {
    _Alignas(16) char alignedCharArray[32]; // Declare an array with a 16-byte alignment requirement.
    
    printf("Alignment of alignedCharArray: %zu\n", _Alignof(int)); // Check the alignment of the array.
    
    return 0;
}

int useCOnst() {
    const int constantValue = 42; // Declare a constant variable.
    
    // constantValue = 10; // This line would result in a compilation error because you can't modify a constant variable.
    
    printf("The constant value is: %d\n", constantValue);
    
    return 0;
}

int add(int a, int b) {
    return a + b; // Return the sum of two integers.
}

int testadd() {
    int result = add(5, 3); // Call the add function and store the result.
    
    printf("5 + 3 = %d\n", result);
    
    return 0;
}

int testForBreak() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break; // Exit the loop when i is 3.
        }
        printf("i = %d\n", i);
    }
    
    return 0;
}

int switchTest() {
    int day = 2;
    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Other day\n");
    }
    
    return 0;
}

int testTernary() {
    int number = 7;
    
    // Using a ternary if to determine if the number is even or odd.
    const char* result = (number % 2 == 0) ? "even" : "odd";
    
    printf("The number %d is %s.\n", number, result);
    
    return 0;
}

// Define a struct to represent a point in 2D space.
struct Point {
    int x;
    int y;
};

// Define a union for representing the same point with different data types.
union DataPoint {
    struct Point point;
    int coordinates[2];
};

// Define a function that uses 'static' to retain the value across function calls.
int counter() {
    static int count = 0;
    count++;
    return count;
}

int testStructs() {
    // 'static' variable retains its value across function calls.
    printf("Counter: %d\n", counter()); // Counter: 1
    printf("Counter: %d\n", counter()); // Counter: 2

    // Create a struct and initialize it.
    struct Point p1;
    p1.x = 5;
    p1.y = 10;

    // Create a union to represent the same point.
    union DataPoint dp1;
    dp1.point = p1;

    // Access the point coordinates using the union.
    printf("Coordinates from Union: x=%d, y=%d\n", dp1.coordinates[0], dp1.coordinates[1]);

    // Use a while loop to print numbers from 1 to 5.
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}

int test2() {
    int* a = malloc(sizeof(int) * 10000);
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < 10000; i++) {
        a[i] = rand() % 100;
    }

    double sum = 0;
    for (int i = 0; i < 10000; i++) {
        sum += a[i];
    }

    double mean = sum / 10000;

    double variance = 0;
    for (int i = 0; i < 10000; i++) {
        variance += pow(a[i] - mean, 2);
    }

    double standardDeviation = sqrt(variance);

    printf("The standard deviation of 10000 random integers is: %lf\n", standardDeviation);

    free(a);

    return 0;
}

int test3() {
    int *arr;
    int *reversed_arr;
    int n = 10;
    int i, j;

    arr = (int *)malloc(n * sizeof(int));
    reversed_arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL || reversed_arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0, j = n - 1; i < n; i++, j--) {
        reversed_arr[i] = arr[j];
    }

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", reversed_arr[i]);
    }

    printf("\n");

    free(arr);
    free(reversed_arr);

    return 0;
}

int test4() {
    char *sentence1 = (char *)malloc(100 * sizeof(char));
    char *sentence2 = (char *)malloc(100 * sizeof(char));

    if (sentence1 == NULL || sentence2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a sentence: ");
    fgets(sentence1, 100, stdin);

    // Copy sentence1 into sentence2 character by character
    int len = strlen(sentence1);
    for (int i = 0; i < len; i++) {
        sentence2[i] = sentence1[i];
    }
    
    printf("Original Sentence: %s", sentence1);
    printf("Copied Sentence: %s", sentence2);

    free(sentence1);
    free(sentence2);

    return 0;
}










