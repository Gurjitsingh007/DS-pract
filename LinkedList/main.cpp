#include <iostream>
#include "sllADT.h"
#include "DLLADT.h"
using namespace std;

int main(){
    int choice, element;
    
    SLL_ADT<int> sll();
    DLL_ADT<int> Dll();

     do{
        cout << "\nMenu: \n";
        cout << "1. ADD\n";
        cout << "2. Insert at\n";
        cout << "3.remove\n";
        cout << "4. search\n";
        cout << "5.removeFromHEAD(DLL)";
        cout << "6.EXIT";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice){
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> element;
                sll.addToHead(element);
                break;
            case 2:
                cout << "dequeued element: " << queue.dequeue() << endl;
                break;

            case 3:
                queue.display();
                break;
            case 4:{

            }
            case 5:{

            }
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } 
    while(choice != 4);

    return 0;
}
}
