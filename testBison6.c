#include "test04.c"
#define MAX_STACK_SIZE 100
//./compile testBison6.c -p

// Define the stack structure.
struct Stack {
    int items[MAX_STACK_SIZE];
    int top;
};

// Initialize an empty stack.
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Check if the stack is empty.
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Check if the stack is full.
int isFull(struct Stack* stack) {
    return stack->top == MAX_STACK_SIZE - 1;
}

// Push an element onto the stack.
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack is full. Cannot push.\n");
    } else {
        stack->items[++(stack->top)] = item;
    }
}

// Pop an element from the stack.
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Return a sentinel value for an empty stack.
    } else {
        return stack->items[(stack->top)--];
    }
}

// Peek at the top element of the stack without removing it.
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot peek.\n");
        return -1; // Return a sentinel value for an empty stack.
    } else {
        return stack->items[stack->top];
    }
}

// Rotate the stack to the left by one position.
void rotateLeft(struct Stack* stack) {
    if (!isEmpty(stack)) {
        int temp = pop(stack); // Remove the top element.
        push(stack, temp);     // Push it back at the bottom.
    }
}

// Stack one stack on top of another.
void stackStack(struct Stack* destination, struct Stack* source) {
    while (!isEmpty(source)) {
        int item = pop(source);
        push(destination, item);
    }
}

int main() {
    struct Stack stack1, stack2;
    initialize(&stack1);
    initialize(&stack2);

    // Push elements onto stack1.
    push(&stack1, 1);
    push(&stack1, 2);
    push(&stack1, 3);

    // Pop and print elements from stack1.
    printf("Stack1 Elements: ");
    while (!isEmpty(&stack1)) {
        printf("%d ", pop(&stack1));
    }
    printf("\n");

    // Push elements onto stack2.
    push(&stack2, 4);
    push(&stack2, 5);
    push(&stack2, 6);

    // Rotate stack2 to the left and print the result.
    rotateLeft(&stack2);
    printf("Stack2 after Rotate Left: ");
    while (!isEmpty(&stack2)) {
        printf("%d ", pop(&stack2));
    }
    printf("\n");

    // Stack stack2 on top of stack1 and print the result.
    stackStack(&stack1, &stack2);
    printf("Stack1 after Stacking Stack2: ");
    while (!isEmpty(&stack1)) {
        printf("%d ", pop(&stack1));
    }
    printf("\n");

    return 0;
}

int testOne(){
    int y = A+B+C;
}


// Define a custom structure to use with _Alignas.
struct AlignedStruct {
    int x;
    double y;
};

int main() {
    // Using _Alignas to align a variable.
    _Alignas(32) char alignedCharArray[16];
    // Using sizeof to determine the size of types and variables.
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of alignedInstance: %zu bytes\n", sizeof(int));

    // Using _Alignof to determine the alignment requirements of types and variables.
    printf("Alignment of char: %zu\n", _Alignof(char));
    printf("Alignment of int: %zu\n", _Alignof(int));
    printf("Alignment of double: %zu\n", _Alignof(double));
    printf("Alignment of alignedInstance: %zu\n", _Alignof(int));

    return 0;
}


// Function to swap two elements in an array.
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Implementation of Bubble Sort.
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Implementation of Insertion Sort.
void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Implementation of Selection Sort.
void selectionSort(int arr[], int size) {
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

// Function to print an array.
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int testSorts() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    // Sort using Bubble Sort.
    bubbleSort(arr, size);
    printf("Sorted using Bubble Sort: ");
    printArray(arr, size);

    // Reset the array.
    int resetArr[] = {64, 34, 25, 12, 22, 11, 90};
    
    // Sort using Insertion Sort.
    insertionSort(resetArr, size);
    printf("Sorted using Insertion Sort: ");
    printArray(resetArr, size);

    // Reset the array.
    int resetArr2[] = {64, 34, 25, 12, 22, 11, 90};

    // Sort using Selection Sort.
    selectionSort(resetArr2, size);
    printf("Sorted using Selection Sort: ");
    printArray(resetArr2, size);

    return 0;
}

void someFunction() {
    printf("Inside function: %s\n", __func__);
}

int testSomeFunc() {
    printf("Inside function: %s\n", __func__);  // __func__ in the main function
    someFunction();
    return 0;
}

void exampleFunction(int* restrict a, int* restrict b, int n) {
    for (int i = 0; i < n; i++) {
        a[i] += b[i];
    }
}

int testExFunc() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {5, 4, 3, 2, 1};

    exampleFunction(arr1, arr2, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}

// Structure for a node in the AVL tree.
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
    int height;
};

// Function to get the height of a node.
int getHeight(struct Node* node) {
    if (node == NULL)
        return 0;
    return node->height;
}

// Function to update the height of a node.
void updateHeight(struct Node* node) {
    if (node != NULL) {
        int leftHeight = getHeight(node->left);
        int rightHeight = getHeight(node->right);
        node->height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
    }
}

// Function to perform a right rotation.
struct Node* rightRotate(struct Node* y) {
    struct Node* x = y->left;
    struct Node* T2 = x->right;

    // Perform rotation.
    x->right = y;
    y->left = T2;

    // Update heights.
    updateHeight(y);
    updateHeight(x);

    return x;
}

// Function to perform a left rotation.
struct Node* leftRotate(struct Node* x) {
    struct Node* y = x->right;
    struct Node* T2 = y->left;

    // Perform rotation.
    y->left = x;
    x->right = T2;

    // Update heights.
    updateHeight(x);
    updateHeight(y);

    return y;
}

// Function to get the balance factor of a node.
int getBalance(struct Node* node) {
    if (node == NULL)
        return 0;
    return getHeight(node->left) - getHeight(node->right);
}

// Function to insert a key into the AVL tree.
struct Node* insert(struct Node* node, int key) {
    if (node == NULL)
        return createNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node; // Duplicate keys are not allowed.

    // Update height.
    updateHeight(node);

    // Get the balance factor to check for rotation.
    int balance = getBalance(node);

    // Left Heavy (LL or LR)
    if (balance > 1) {
        if (key < node->left->key)
            return rightRotate(node);
        else {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }

    // Right Heavy (RR or RL)
    if (balance < -1) {
        if (key > node->right->key)
            return leftRotate(node);
        else {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    }

    return node;
}

// Function to create a new node with a given key.
struct Node* createNode(int key) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;
    return newNode;
}

// Function to find the node with the minimum value key.
struct Node* findMin(struct Node* node) {
    struct Node* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}

// Function to delete a key from the AVL tree.
struct Node* delete(struct Node* node, int key) {
    if (node == NULL)
        return node;

    if (key < node->key)
        node->left = delete(node->left, key);
    else if (key > node->key)
        node->right = delete(node->right, key);
    else {
        if ((node->left == NULL) || (node->right == NULL)) {

            struct Node* temp = node->left ? node->left : node->right;
            if (temp == NULL) {
                temp = node;
                node = NULL;
            } else
                *node = *temp;
            free(temp);
        } else {

            struct Node* temp = findMin(node->right);
            node->key = temp->key;
            node->right = delete(node->right, temp->key);
        }
    }

    if (node == NULL)
        return node;

    updateHeight(node);

    int balance = getBalance(node);

    if (balance > 1) {
        if (getBalance(node->left) >= 0)
            return rightRotate(node);
        else {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }
    }

    if (balance < -1) {
        if (getBalance(node->right) <= 0)
            return leftRotate(node);
        else {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    }

    return node;
}

// Function to invert the AVL tree.
struct Node* invert(struct Node* root) {

    if (root == NULL)
        return root;

    struct Node* temp = root->left;
    root->left = root->right;
    root->right = temp;

    root->left = invert(root->left);
    root->right = invert(root->right);

    return root;
}

// Function to print the tree in-order.
void inOrder(struct Node* node) {

    if (node == NULL)
        return;
    inOrder(node->left);
    printf("%d ", node->key);
    inOrder(node->right);
}

// Function to free memory of the tree nodes.
void freeTree(struct Node* node) {

    if (node == NULL)
        return;
    freeTree(node->left);
    freeTree(node->right);
    free(node);
}

int testAVLThree() {
    struct Node* root = NULL;

    // Insert keys into the tree.
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("In-order traversal of AVL tree: ");
    inOrder(root);
    printf("\n");

    // Delete a key.
    root = delete(root, 20);
    printf("In-order traversal after deleting 20: ");
    inOrder(root);
    printf("\n");

    // Invert the AVL tree.
    root = invert(root);
    printf("In-order traversal after inverting: ");
    inOrder(root);
    printf("\n");

    // Free memory.
    freeTree(root);

    return 0;
}

int moreCode() {
    int n, sum = 0;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of the first n natural numbers.
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of the first %d natural numbers is %d.\n", n, sum);

    return 0;
}




