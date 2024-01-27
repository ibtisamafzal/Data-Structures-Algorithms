#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertN(Node **head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;

    void deleteN(Node * *head, int position)
    {
        if (*head == NULL)
        {
            return;
        }

        Node *current = *head;

        if (position == 0)
        {
            *head = current->next;
            delete current;
            return;
        }
    }
}


    for (int i = 0; current != NULL && i < position - 1; i++)
    {
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
    {
        return;
    }

    Node *nextNode = current->next->next;
    delete current->next;
    current->next = nextNode;
}

int main()
{
    Node *head = NULL;

    // Create a linked list with the given items
    insertN(&head, 5);
    insertN(&head, 7);
    insert(N&head, 8);
    insertN(&head, 9);
    insertN(&head, 10);

    // Delete the node at position 3
    deleteN(&head, 2);

    // Print the linked list
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

