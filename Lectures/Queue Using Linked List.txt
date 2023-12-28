// Explaination: https://youtu.be/RN1wzY_tnYU

#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

// Function to enqueue an element
void enqueue(int value) {
    Node* newNode = new Node();

    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } 
    
    else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Enqueued element " << value << endl;
}

// Function to dequeue an element
void dequeue() {

    struct Node* temp;
    temp = front;

    if (front == NULL && rear == NULL) {
        cout << "Queue is empty. Underflow!" << endl;
    } 
    
    else {
        front = front->next;
        delete(temp);
        cout << "Dequeued element: " << front->data << endl;
    }
}

// Function to display the elements of the queue
void displayQueue() {
    struct Node* temp;

    if (front == NULL && rear == NULL) {
        cout << "Queue is empty." << endl;
    }
    
    else {
        cout << "Queue elements: ";
        temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);

    displayQueue();

    dequeue();
    displayQueue();

    enqueue(4);
    enqueue(5);

    displayQueue();

    dequeue();
    dequeue();
    dequeue();

    displayQueue();

    return 0;
}
