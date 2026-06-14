#include <iostream>
#include "avl.h"

using namespace std;

int main() {
    AVLTree<int> avl;
    int choice, value;

    do {
        cout << "\n======AVL Tree Operations=======\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Display (Inorder)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                avl.insert(value);
                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                if (avl.search(value)) {
                    cout << value << " found in the AVL tree.\n";
                } else {
                    cout << value << " not found in the AVL tree.\n";
                }
                break;
            case 3:
                avl.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
