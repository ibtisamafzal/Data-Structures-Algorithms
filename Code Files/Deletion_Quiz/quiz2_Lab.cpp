#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void deleteAtPosition(node *&head, int position)
{
    if (head == nullptr)
    {
        cout << "Underflow" << endl;
        return;
    }

    if (position == 0)
    {
        node *temp = head;
        head = head->next;
        delete temp;
    }
    


