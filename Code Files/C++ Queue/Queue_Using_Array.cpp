#include <iostream>
using namespace std;

const int MAX_SIZE = 5;
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if ((front == 0 && rear == MAX_SIZE - 1) || (rear + 1 == front)) {
        cout << "Queue is full. Overflow!" << endl;
    } 
    
    else if (front == -1 && rear == -1){
            front = 0;
            rear = 0;
            queue[rear] = value;
        }

    else if (front > 0 && rear == MAX_SIZE-1){
            rear = 0;
            queue[rear] = value;
        }

    else {
        rear = rear + 1;
        queue[rear] = value;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty. Underflow!" << endl;
    } 
    
    else if (front == rear) {
        front = -1;
        rear =-1;
        } 
        
    else if(rear > 0 && front == MAX_SIZE-1){
        cout << queue[front] << endl;
        front = 0;
        }
    
    else {
        cout << "Dequeued element: " << queue[front] << endl;
        front++;
    }
}

void displayQueue() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        int i = front;
        do {
            cout << queue[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);
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
    enqueue(6); // This will result in a "Queue is full" message

    displayQueue();

    dequeue();
    dequeue();
    dequeue();
    displayQueue(); // This will result in a "Queue is empty" message

    return 0;
}
