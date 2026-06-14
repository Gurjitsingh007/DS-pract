#include <iostream>
using namespace std;

template <typename T>
struct Node {
    T data;
    Node* left;
    Node* right;
    Node(T val) : data(val), left(nullptr), right(nullptr) {}
};

template <typename T>
class BST {
private:
    Node<T>* root;

    // Recursive insert
    Node<T>* insert(Node<T>* node, T val) {
        if (node == nullptr)
            return new Node<T>(val);
        if (val < node->data)
            node->left = insert(node->left, val);
        else if (val > node->data)
            node->right = insert(node->right, val);
        return node;
    }

    // Recursive search
    bool search(Node<T>* node, T val) {
        if (node == nullptr)
            return false;
        if (node->data == val)
            return true;
        else if (val < node->data)
            return search(node->left, val);
        else
            return search(node->right, val);
    }

    // Find minimum value node
    Node<T>* findMin(Node<T>* node) {
        while (node && node->left != nullptr)
            node = node->left;
        return node;
    }

    // Recursive delete
    Node<T>* deleteNode(Node<T>* node, T val) {
        if (node == nullptr)
            return node;

        if (val < node->data)
            node->left = deleteNode(node->left, val);
        else if (val > node->data)
            node->right = deleteNode(node->right, val);
        else {
            if (node->left == nullptr) {
                Node<T>* temp = node->right;
                delete node;
                return temp;
            } else if (node->right == nullptr) {
                Node<T>* temp = node->left;
                delete node;
                return temp;
            }

            Node<T>* temp = findMin(node->right);
            node->data = temp->data;
            node->right = deleteNode(node->right, temp->data);
        }
        return node;
    }

    // Inorder traversal (Left, Root, Right)
    void inorder(Node<T>* node) {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Preorder traversal (Root, Left, Right)
    void preorder(Node<T>* node) {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }

    // Postorder traversal (Left, Right, Root)
    void postorder(Node<T>* node) {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }

public:
    
    BST() : root(nullptr) {}

    void insert(T val) {
        root = insert(root, val);
    }

    
    void deleteValue(T val) {
        root = deleteNode(root, val);
    }

    
    bool search(T val) {
        return search(root, val);
    }

  
    void display() {
        cout << "Inorder Traversal: ";
        inorder(root);
        cout << "\nPreorder Traversal: ";
        preorder(root);
        cout << "\nPostorder Traversal: ";
        postorder(root);
        cout << endl;
    }
};


