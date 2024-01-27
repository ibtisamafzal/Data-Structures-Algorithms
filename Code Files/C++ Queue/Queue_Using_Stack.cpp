#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    
    top = newNode;
}

void reverse() {
    Node* temp = top;
    Node* prev = NULL;
    Node* next = NULL;

    while (temp != NULL) {
        next = temp->next;
        temp->next = prev;

        prev = temp;
        temp = next;
    }
    top = prev;
}
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

    reverse();

    cout << "Queue using Stack: "  << endl;
    printStack();

    return 0;
}