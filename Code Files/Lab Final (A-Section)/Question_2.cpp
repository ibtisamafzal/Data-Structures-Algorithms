#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

TreeNode* insertNode(TreeNode* root, int value) {
    if (root == nullptr) {
        return new TreeNode(value);
    }

    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } 
    
    else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }

    return root;
}

void inOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout << root->data << " ";
    }
}

int main() {
    TreeNode* root = nullptr;
    char choice;

    // Display student information
    cout << "Student Name: [Your Name]" << endl;
    cout << "Registration: [Your Registration]" << endl;

    do {
        // Display menu
        cout << "\nBinary Search Tree Operations Menu:\n";
        cout << "1. Insert Node\n";
        cout << "2. In-order Traversal\n";
        cout << "3. Pre-order Traversal\n";
        cout << "4. Post-order Traversal\n";
        cout << "5. Exit\n";

        // User choice
        int option;
        cout << "Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1: {
                int value;
                cout << "Enter the value to insert: ";
                cin >> value;
                root = insertNode(root, value);
                cout << "Node inserted successfully." << endl;
                break;
            }
            case 2:
                cout << "In-order Traversal: ";
                inOrderTraversal(root);
                cout << endl;
                break;
            case 3:
                cout << "Pre-order Traversal: ";
                preOrderTraversal(root);
                cout << endl;
                break;
            case 4:
                cout << "Post-order Traversal: ";
                postOrderTraversal(root);
                cout << endl;
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

        // Ask for more operations
        cout << "Do you want to perform any other task? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}