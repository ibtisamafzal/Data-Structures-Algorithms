#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}; 

void AtPosition(node** head, int value, int position)
{
    node* newNode = new node;
    newNode->data = value;
    newNode->next = *head;
}


