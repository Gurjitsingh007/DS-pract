#include<iostream>
#include"cllADT.h"
using namespace std;

int main() {
    int choice, x;

    CLL_ADT <int> list;

    do {
        cout << "\n--- Circular Singly Linked List Menu ---\n";
        cout << "1. Insert element\n";
        cout << "2. Remove element\n";
        cout << "3. Search element\n";
        cout << "4. Display list\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter element to insert: ";
            cin >> x;
            list.insert(x);
            break;

        case 2:
            cout << "Enter element to remove: ";
            cin >> x;
            list.remove(x);
            break;

        case 3:
            cout << "Enter element to search: ";
            cin >> x;
            {
               Node<int>* result=list.search(x);
                if (result)
                    cout << "Element " << x << " found at address " << result << endl;
                else
                    cout << "Element not found.\n";
            }
            break;

        case 4:
            list.display();
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}