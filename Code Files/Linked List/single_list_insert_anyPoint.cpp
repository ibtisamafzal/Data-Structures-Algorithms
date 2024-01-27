#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtPosition(Node** head, int value, int position) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    Node* prevNode = *head;
    for (int i = 1; i < position - 1 && prevNode != nullptr; i++) {
        prevNode = prevNode->next;
    }

    if (prevNode == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }

    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    insertAtPosition(&head, 1, 1);
    insertAtPosition(&head, 2, 2);
    insertAtPosition(&head, 3, 3);
    insertAtPosition(&head, 4, 2);

    printList(head);

    return 0;
}
