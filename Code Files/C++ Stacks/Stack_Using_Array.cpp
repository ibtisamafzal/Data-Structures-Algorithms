// https://youtu.be/VmsTAVpz0xo?list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU 

#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

int stack[MAX_SIZE];
int top = -1;

void push(int element) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack overflow!" << endl;
    }
    else {
        top++;
        stack[top] = element;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow!" << endl;
    }

    else{
        top--;
    }
}

// Function to check the top element of the stack
int topElement() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
    }
    else{
        cout << "Top element: " << stack[top] << endl;
    }
}

// Function to print the elements of the stack
void printStack() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack elements: ";
        for (int i=top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }  
}

int main() {
    
    push(10);
    push(20);
    push(30);

    printStack();

    topElement();

    pop();
    printStack();

    return 0;
}
