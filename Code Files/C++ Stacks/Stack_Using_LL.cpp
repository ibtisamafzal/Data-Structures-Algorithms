// https://youtu.be/T_UXDTy23DQ?list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

// Function to push an element onto the stack
void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    
    top = newNode;
}

// Function to pop an element from the stack
void pop() {
    Node* temp = top;

    if (top == NULL) {
        cout << "Stack underflow!" << endl;
    }
    else{
        top = top->next;
        delete temp;
    } 
}

// Function to get the top element of the stack
int topElement() {
    if (top == NULL) {
        cout << "Stack is empty. No top element." << endl;
    }

    else{
        cout << "Top element: " << top->data << endl;
    }
}

// Function to print the elements of the stack
void printStack() {

    Node* temp = top;
    if (top == NULL) {
        cout << "Stack is empty." << endl;
    }
    else {

        cout << "Stack elements: ";
        while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
        }   
    }
    cout << endl;
}

int main() {
    // Example usage of the stack
    push(10);
    push(20);
    push(30);

    printStack();

    topElement();

    pop();

    cout << "After popping out an element from the stack: " << endl;
    printStack();

    return 0;
}
