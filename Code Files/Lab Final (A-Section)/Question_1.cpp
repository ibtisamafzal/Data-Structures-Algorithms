#include <iostream>
using namespace std;

const int MAX_SIZE = 500;
int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        cout << "Stack Overflow!" << endl;
    } 
    
    else {
        stack[++top] = value;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
    } 
    
    else {
        cout << "Popped element: " << stack[top--] << endl;
    }
}

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

int main() {
    char choice;

    // Display student information
    cout << "Student Name: Ibtisam Afzal" << endl;
    cout << "Registration: FA22-BCS-073" << endl;

    do {
        // Display menu
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Status of IsEmpty and IsFull\n";
        cout << "4. Exit\n";

        // User choice
        int option;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1: {
                int value;
                cout << "Enter the value to push: ";
                cin >> value;
                push(value);
                break;
            }
            case 2:
                pop();
                break;
            case 3:
                cout << "Is Empty: " << (isEmpty() ? "Yes" : "No") << endl;
                cout << "Is Full: " << (isFull() ? "Yes" : "No") << endl;
                break;
            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

        // Ask for more operations
        cout << "Do you want to perform any other task? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}