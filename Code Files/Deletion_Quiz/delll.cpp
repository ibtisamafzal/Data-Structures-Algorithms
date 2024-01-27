#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert(Node *&head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}
void deleteN(Node *&head, int position)
{
    if (position == 0)
    {
        Node *current = head;
        head = head->next;
        delete current;
    }
    else
    {
        Node *current = head;
        int currentPosition = 0;
        while (currentPosition < position - 1 && current->next != NULL)
        {
            current = current->next;
            currentPosition++;
        }
            Node *temp = current->next;
            current->next = current->next->next;
            delete temp;
    }
}
void display(Node* head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
int main()
{
    Node *head = NULL;
    
    insert(head, 1);
    insert(head, 2);   
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);
    
    int DeletePos = 2;

    deleteN(head, DeletePos);
    
    display(head);
    return 0;
}
