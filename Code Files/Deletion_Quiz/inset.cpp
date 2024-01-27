#include <iostream>
using namespace std;
// Define a struct for a node
struct Node {
    int data;
    Node* next;
};
void insertAtPosition(Node*& head, int value, int position) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (position == 0) {
        // Insert at the beginning
        newNode->next = head;
        head = newNode;
    } else {
        // Traverse to the position
        Node* current = head;
        int currentPosition = 0;

        while (currentPosition < position - 1 && current->next != nullptr) {
            current = current->next;
            currentPosition++;
        }
        // Insert the new node at the specified position
        newNode->next = current->next;
        current->next = newNode;
    }
}
// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }		}
int main() {
    Node* head = nullptr; // Initialize an empty linked list
    // Insert nodes at various positions in the list
    insertAtPosition(head, 1, 0);  // Insert at the beginning
    insertAtPosition(head, 2, 1);  // Insert at position 1
    insertAtPosition(head, 4, 1);  // Insert at position 1
    insertAtPosition(head, 3, 2);  // Insert at position 2
    // Display the linked list
    cout << "Linked List: ";
    displayList(head);
    return 0;
}
