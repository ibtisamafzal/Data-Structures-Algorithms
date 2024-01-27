//FA22-BCS-073
//Ibtisam Afzal

#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *CreateNode(int data) {
  struct node *node = new struct node();

  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return (node);
}

void traversePreOrder(struct node *temp) {
  if (temp != NULL) {
    cout << " " << temp->data;
    traversePreOrder(temp->left);
    traversePreOrder(temp->right);
  }
}

void traverseInOrder(struct node *temp) {
  if (temp != NULL) {
    traverseInOrder(temp->left);
    cout << " " << temp->data;
    traverseInOrder(temp->right);
  }
}

void traversePostOrder(struct node *temp) {
  if (temp != NULL) {
    traversePostOrder(temp->left);
    traversePostOrder(temp->right);
    cout << " " << temp->data;
  }
}

int main() {
  struct node *root = CreateNode(1);
  root->left = CreateNode(9);
  root->right = CreateNode(12);
  root->left->left = CreateNode(7);

  cout << "preorder traversal: ";
  traversePreOrder(root);

  cout << "\nInorder traversal: ";
  traverseInOrder(root);
  
  cout << "\nPostorder traversal: ";
  traversePostOrder(root);
}

