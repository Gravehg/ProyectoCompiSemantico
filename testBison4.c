

// Define a structure to represent elements in the priority queue.
struct PriorityQueueNode {
    int data;
    int priority;
    struct PriorityQueueNode* next;
};

// Define the Priority Queue structure.
struct PriorityQueue {
    struct PriorityQueueNode* front;
};

// Function to create a new node with data and priority.
struct PriorityQueueNode* createNode(int data, int priority) {
    struct PriorityQueueNode* newNode = (struct PriorityQueueNode*)malloc(sizeof(struct PriorityQueueNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->priority = priority;
    newNode->next = NULL;
    return newNode;
}

// Function to create an empty priority queue.
struct PriorityQueue* createPriorityQueue() {
    struct PriorityQueue* pq = (struct PriorityQueue*)malloc(sizeof(struct PriorityQueue));
    if (pq == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    pq->front = NULL;
    return pq;
}

// Function to push an element with a given priority into the queue.
void push(struct PriorityQueue* pq, int data, int priority) {
    struct PriorityQueueNode* newNode = createNode(data, priority);
    if (pq->front == NULL || priority < pq->front->priority) {
        newNode->next = pq->front;
        pq->front = newNode;
    } else {
        struct PriorityQueueNode* current = pq->front;
        while (current->next != NULL && current->next->priority <= priority) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Function to pop the element with the highest priority from the queue.
void pop(struct PriorityQueue* pq) {
    if (pq->front != NULL) {
        struct PriorityQueueNode* temp = pq->front;
        pq->front = pq->front->next;
        free(temp);
    }
}

// Function to get the element with the highest priority.
int top(struct PriorityQueue* pq) {
    if (pq->front != NULL) {
        return pq->front->data;
    }
    return -1; // Return -1 to indicate an empty queue.
}

// Function to check if the queue is empty.
int is_empty(struct PriorityQueue* pq) {
    return pq->front == NULL;
}

// Function to print the elements in the priority queue.
void printPriorityQueue(struct PriorityQueue* pq) {
    struct PriorityQueueNode* current = pq->front;
    while (current != NULL) {
        printf("(%d, %d) ", current->data, current->priority);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct PriorityQueue* pq = createPriorityQueue();

    push(pq, 42, 2);
    push(pq, 13, 1);
    push(pq, 8, 3);
    push(pq, 55, 2);

    printf("Priority Queue: ");
    printPriorityQueue(pq);

    while (!is_empty(pq)) {
        printf("Top element: %d\n", top(pq));
        pop(pq);
    }

    return 0;
}

int testingComplex() {
    // Declare variables with complex and imaginary parts.
    _Complex double complexVar1 = 3.0 + 2.0 * _Complex_I;
    _Complex double complexVar2 = 1.0 - 2.0 * _Complex_I;
    
    // Perform complex arithmetic.
    _Complex double result = complexVar1 * complexVar2 + 2.0 * _Complex_I;
    
    // Declare a boolean variable.
    _Bool isPositiveReal = 12;
    
    // Print the complex result and whether its real part is positive.
    printf("Result: %lf + %lfi\n",result,result);
    printf("Is the real part positive? %s\n", isPositiveReal ? "Yes" : "No");
    
    return 0;
}

// Define a structure for the heap element.
struct HeapNode {
    int data;
};

// Define the Heap structure.
struct MinHeap {
    struct HeapNode** array;
    int capacity;
    int size;
};

// Function to create a new heap with a given capacity.
struct MinHeap* createMinHeap(int capacity) {
    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    if (minHeap == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    minHeap->capacity = capacity;
    minHeap->size = 0;
    minHeap->array = (struct HeapNode**)malloc(capacity * sizeof(struct HeapNode*));
    if (minHeap->array == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    return minHeap;
}

// Function to swap two heap nodes.
void swap(struct HeapNode** a, struct HeapNode** b) {
    struct HeapNode* temp = *a;
    *a = *b;
    *b = temp;
}

// Function to heapify the heap, assuming that the subtrees are already heapified.
void heapify(struct MinHeap* minHeap, int index) {
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < minHeap->size && minHeap->array[left]->data < minHeap->array[smallest]->data)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->data < minHeap->array[smallest]->data)
        smallest = right;

    if (smallest != index) {
        swap(&minHeap->array[index], &minHeap->array[smallest]);
        heapify(minHeap, smallest);
    }
}

// Function to check if the heap is empty.
int is_empty(struct MinHeap* minHeap) {
    return minHeap->size == 0;
}

// Function to insert an element into the heap.
void push(struct MinHeap* minHeap, int data) {
    if (minHeap->size >= minHeap->capacity) {
        printf("Heap is full, can't insert.\n");
        return;
    }

    struct HeapNode* newNode = (struct HeapNode*)malloc(sizeof(struct HeapNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    newNode->data = data;
    minHeap->size++;
    int i = minHeap->size - 1;
    minHeap->array[i] = newNode;

    while (i > 0 && minHeap->array[i]->data < minHeap->array[(i - 1) / 2]->data) {
        swap(&minHeap->array[i], &minHeap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

// Function to remove and return the minimum element from the heap.
int pop(struct MinHeap* minHeap) {
    if (is_empty(minHeap)) {
        printf("Heap is empty, can't pop.\n");
        return -1;
    }

    if (minHeap->size == 1) {
        minHeap->size--;
        return minHeap->array[0]->data;
    }

    int root = minHeap->array[0]->data;
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    minHeap->size--;
    heapify(minHeap, 0);

    return root;
}

// Function to return the minimum element from the heap without removing it.
int top(struct MinHeap* minHeap) {
    if (is_empty(minHeap)) {
        printf("Heap is empty, can't get top element.\n");
        return -1;
    }
    return minHeap->array[0]->data;
}

int main() {
    struct MinHeap* minHeap = createMinHeap(10);

    push(minHeap, 4);
    push(minHeap, 10);
    push(minHeap, 8);
    push(minHeap, 1);

    printf("Top element: %d\n", top(minHeap));

    pop(minHeap);
    printf("Top element after pop: %d\n", top(minHeap));

    pop(minHeap);
    printf("Top element after another pop: %d\n", top(minHeap));

    return 0;
}

// Define a compile-time assertion using static_assert.
_Static_assert(sizeof(int) == 4, "int must be 4 bytes on this platform");

// Define a global thread-local variable.
_Thread_local int threadLocalVariable;

int testThread() {
    // Initialize the thread-local variable.
    threadLocalVariable = 42;

    // Access the thread-local variable from the main thread.
    printf("Thread-Local Variable in Main Thread: %d\n", threadLocalVariable);

    // Create a new thread to access the thread-local variable.
    // Assume a hypothetical thread creation mechanism.
    // In a real program, you'd use a thread library (e.g., pthreads or C11 threads).
    // For simplicity, we'll simulate creating a new thread using a function call.
    createNewThread();

    return 0;
}

// Simulated thread creation function.
void createNewThread() {
    // Access the thread-local variable in the new thread.
    printf("Thread-Local Variable in New Thread: %d\n", threadLocalVariable);

    // Modify the thread-local variable in the new thread.
    threadLocalVariable = 99;

    // Access the modified thread-local variable.
    printf("Modified Thread-Local Variable in New Thread: %d\n", threadLocalVariable);
}

// Structure to represent the dynamic matrix.
struct DynamicMatrix {
    int rows;
    int cols;
    int** data;
};

// Function to create a dynamic matrix with the specified number of rows and columns.
struct DynamicMatrix* createMatrix(int rows, int cols) {
    struct DynamicMatrix* matrix = (struct DynamicMatrix*)malloc(sizeof(struct DynamicMatrix));
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    matrix->rows = rows;
    matrix->cols = cols;

    // Allocate memory for the data.
    matrix->data = (int**)malloc(rows * sizeof(int*));
    if (matrix->data == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < rows; i++) {
        matrix->data[i] = (int*)malloc(cols * sizeof(int));
        if (matrix->data[i] == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
    }

    return matrix;
}

// Function to initialize the matrix with a given value.
void initializeMatrix(struct DynamicMatrix* matrix, int value) {
    for (int i = 0; i < matrix->rows; i++) {
        for (int j = 0; j < matrix->cols; j++) {
            matrix->data[i][j] = value;
        }
    }
}

// Function to set the value at a specific position in the matrix.
void setMatrixValue(struct DynamicMatrix* matrix, int row, int col, int value) {
    if (row >= 0 && row < matrix->rows && col >= 0 && col < matrix->cols) {
        matrix->data[row][col] = value;
    } else {
        printf("Invalid row or column index.\n");
    }
}

// Function to get the value at a specific position in the matrix.
int getMatrixValue(struct DynamicMatrix* matrix, int row, int col) {
    if (row >= 0 && row < matrix->rows && col >= 0 && col < matrix->cols) {
        return matrix->data[row][col];
    } else {
        printf("Invalid row or column index.\n");
        return -1; // Return -1 to indicate an error.
    }
}

// Function to print the matrix.
void printMatrix(struct DynamicMatrix* matrix) {
    for (int i = 0; i < matrix->rows; i++) {
        for (int j = 0; j < matrix->cols; j++) {
            printf("%d\t", matrix->data[i][j]);
        }
        printf("\n");
    }
}

// Function to free memory used by the matrix.
void freeMatrix(struct DynamicMatrix* matrix) {
    for (int i = 0; i < matrix->rows; i++) {
        free(matrix->data[i]);
    }
    free(matrix->data);
    free(matrix);
}

int main() {
    // Create a dynamic matrix with 3 rows and 4 columns.
    struct DynamicMatrix* matrix = createMatrix(3, 4);

    // Initialize the matrix with a value of 1.
    initializeMatrix(matrix, 1);

    // Set and print values in the matrix.
    setMatrixValue(matrix, 0, 0, 5);
    setMatrixValue(matrix, 1, 2, 8);

    printf("Matrix Contents:\n");
    printMatrix(matrix);

    // Get and print a value from the matrix.
    int value = getMatrixValue(matrix, 1, 2);
    if (value != -1) {
        printf("Value at (1, 2): %d\n", value);
    }

    // Free the memory used by the matrix.
    freeMatrix(matrix);

    return 0;
}

int variousTypes() {
    // Integer types
    int integerVar = 42;
    long longVar = 1234567890L;
    short shortVar = 32767;
    unsigned int unsignedVar = 100;
    
    // Floating-point types
    float floatVar = 3.14f;
    double doubleVar = 2.71828;
    long double longDoubleVar = 1.4142135623730951L;
    
    // Character type
    char charVar = 'A';
    
    // Arrays
    int intArray[5] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4};
    char string[] = "Hello, C!";
    
    // Printing values
    printf("Integer: %d\n", integerVar);
    printf("Long: %ld\n", longVar);
    printf("Short: %hd\n", shortVar);
    printf("Unsigned: %u\n", unsignedVar);
    
    printf("Float: %f\n", floatVar);
    printf("Double: %lf\n", doubleVar);
    printf("Long Double: %Lf\n", longDoubleVar);
    
    printf("Character: %c\n", charVar);
    
    printf("Int Array: %d, %d, %d, %d, %d\n", intArray[0], intArray[1], intArray[2], intArray[3], intArray[4]);
    printf("Double Array: %.1f, %.1f, %.1f, %.1f\n", doubleArray[0], doubleArray[1], doubleArray[2], doubleArray[3]);
    printf("String: %s\n", string);
    
    return 0;
}


// Define an atomic integer.
_Atomic int atomicInt = ATOMIC_VAR_INIT(0);

void* increment(void* arg) {
    for (int i = 0; i < 10000; i++) {
        atomic_fetch_add(&atomicInt, 1);
    }
    return NULL;
}

int testAtomic() {
    float thread1, thread2;

    pthread_create(&thread1, NULL, increment, NULL);
    pthread_create(&thread2, NULL, increment, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Atomic Integer Value: %d\n", atomic_load(&atomicInt));

    return 0;
}

// Define a structure for a node in the doubly linked list.
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

int main() {
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