#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node *create()
{
	struct node* n = new node();
	int x;
	cout<<"\nEnter data (-1 for no node) : ";
	cin>>x;
		if(x==-1){
			return 0;
		}
		n->data=x;
		cout<<"\nEnter left child of : "<<x;
		n->left=create();
		cout<<"\nEnter right child of : "<<x;
		n->right=create();
		return n;
}

int main(){
	struct node *root=0;
	root=create();
	return 0;
}

/*
// Binary Search Tree operations in C++
#include <iostream>
using namespace std;

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);
    // Traverse root
    cout << root->key << " -> ";
    // Traverse right
    inorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *root, int key) {
  if (root == NULL) 
    {
        return newNode(key);
    }
  if (key < root->key)
    {
        root->left = insert(root->left, key);
    }
  else
    {
        root->right = insert(root->right, key);
    }
  return root;
}

// Find the inorder successor
struct node *minValueNode(struct node *root) {
  struct node *current = root;
  
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } 
    
    else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}
// Driver code
int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  root = insert(root, 3);
  root = insert(root, 1);
  root = insert(root, 6);
  root = insert(root, 7);
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 4);

  cout << "Inorder traversal: ";
  inorder(root);

  cout << "\nAfter deleting 10\n";
  root = deleteNode(root, 10);
  cout << "Inorder traversal: ";
  inorder(root);
}
*/