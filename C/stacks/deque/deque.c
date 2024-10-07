#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the deque

typedef struct {
    int arr[MAX];
    int front;
    int rear;
    int size;
} Deque;

// Function to initialize the deque
void initDeque(Deque* dq) {
    dq->front = -1;
    dq->rear = 0;
    dq->size = 0;
}

// Function to check if the deque is full
int isFull(Deque* dq) {
    return dq->size == MAX;
}

// Function to check if the deque is empty
int isEmpty(Deque* dq) {
    return dq->size == 0;
}

// Insert element at the front
void insertFront(Deque* dq, int element) {
    if (isFull(dq)) {
        printf("Deque is full! Cannot insert at front.\n");
        return;
    }

    // If deque is initially empty
    if (dq->front == -1) {
        dq->front = dq->rear = 0;
    } 
    // If front is at the start of the deque
    else if (dq->front == 0) {
        dq->front = MAX - 1;
    } 
    else {
        dq->front = dq->front - 1;
    }

    dq->arr[dq->front] = element;
    dq->size++;
    printf("%d inserted at front\n", element);
}

// Insert element at the rear
void insertRear(Deque* dq, int element) {
    if (isFull(dq)) {
        printf("Deque is full! Cannot insert at rear.\n");
        return;
    }

    // If deque is initially empty
    if (dq->front == -1) {
        dq->front = dq->rear = 0;
    } 
    // If rear is at the end of the deque
    else if (dq->rear == MAX - 1) {
        dq->rear = 0;
    } 
    else {
        dq->rear = dq->rear + 1;
    }

    dq->arr[dq->rear] = element;
    dq->size++;
    printf("%d inserted at rear\n", element);
}

// Delete element from the front
void deleteFront(Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty! Cannot delete from front.\n");
        return;
    }

    printf("%d deleted from front\n", dq->arr[dq->front]);
    
    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1; // Deque is empty now
    } 
    else if (dq->front == MAX - 1) {
        dq->front = 0;
    } 
    else {
        dq->front = dq->front + 1;
    }

    dq->size--;
}

// Delete element from the rear
void deleteRear(Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty! Cannot delete from rear.\n");
        return;
    }

    printf("%d deleted from rear\n", dq->arr[dq->rear]);

    if (dq->front == dq->rear) {
        dq->front = dq->rear = -1; // Deque is empty now
    } 
    else if (dq->rear == 0) {
        dq->rear = MAX - 1;
    } 
    else {
        dq->rear = dq->rear - 1;
    }

    dq->size--;
}

// Get the front element
int getFront(Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty! No front element.\n");
        return -1;
    }
    return dq->arr[dq->front];
}

// Get the rear element
int getRear(Deque* dq) {
    if (isEmpty(dq)) {
        printf("Deque is empty! No rear element.\n");
        return -1;
    }
    return dq->arr[dq->rear];
}

// Main function to demonstrate the deque operations
int main() {
    Deque dq;
    initDeque(&dq);

    insertRear(&dq, 5);
    insertRear(&dq, 10);
    insertFront(&dq, 15);
    insertFront(&dq, 20);

    printf("Front element: %d\n", getFront(&dq));
    printf("Rear element: %d\n", getRear(&dq));

    deleteFront(&dq);
    printf("Front element: %d\n", getFront(&dq));

    deleteRear(&dq);
    printf("Rear element: %d\n", getRear(&dq));

    return 0;
}
