#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
void insertBegin(Node **head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *head)
{
    cout << endl;
    while (head != NULL)
    {
        cout << head->data << " " << endl;
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head = NULL;

    insertBegin(&head, 5);
    insertBegin(&head, 10);
    insertBegin(&head, 15);

    printList(head);
    return 0;
}