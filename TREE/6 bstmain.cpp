#include <iostream>
#include "bst.cpp"
using namespace std;

int main() 
{
    BST<int> bst;
    int choice, value;
    do {
        cout << "--------Menu:---------" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Search" << endl;
        cout << "4. Display Traversals" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                cout << "Enter value to insert: ";
                cin >> value;
                bst.insert(value);
                break;
            }
            case 2: {
                cout << "Enter value to delete: ";
                cin >> value;
                bst.deleteValue(value);
                break;
            }
            case 3: {
                cout << "Enter value to search: ";
                cin >> value;
                if (bst.search(value)) {
                    cout << value << " found in the BST." << endl;
                } else {
                    cout << value << " not found in the BST." << endl;
                }
                break;
            }
            case 4: {
                bst.display();
                break;
            }
            case 5: {
                cout << "Exiting..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice" << endl;
            }
        }
    } while (choice != 5);
    return 0;
}