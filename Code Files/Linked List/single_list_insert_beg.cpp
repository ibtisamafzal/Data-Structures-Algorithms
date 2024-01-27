#include <iostream>

using namespace std;

// Define the structure of a node
struct Node
{
    int data;
    Node *next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(Node **head, int value)
{
    // Create a new node
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = *head;

    // Update the head pointer to point to the new node
    *head = newNode;
}

// Function to print the linked list
void printList(Node *head)
{
    cout << endl;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Initialize an empty linked list
    Node *head = NULL;

    // Insert some values at the beginning of the linked list
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 15);

    // Print the linked list
    printList(head);

    return 0;
}
