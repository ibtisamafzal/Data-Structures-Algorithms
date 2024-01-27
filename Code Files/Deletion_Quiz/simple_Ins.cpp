#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insertB(Node **head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " " << endl;
        head = head->next;
    }
}
int main()
{
    Node *head = NULL;
    insertB(&head, 5);
    insertB(&head, 10);
    insertB(&head, 15);
    printList(head);
    return 0;
}
